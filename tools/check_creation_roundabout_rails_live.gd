extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tests/test_city_creation_tram.gd")
const OUT="res://验证记录/环岛与急转_2026-10-22"
var demo
var label:="accepted"
var checks:=0
var driving:=false
var draw_ms:Array[float]=[]
var last_draw:=0
var pixels:Array=[]
var driving_car:Dictionary={}
func _process(delta:float)->bool:
 if driving:demo.life.tram.tick(delta)
 return false
func draw_sample()->void:
 if not driving:return
 var now:=Time.get_ticks_usec()
 if last_draw>0:draw_ms.append(float(now-last_draw)/1000.)
 last_draw=now
func pixel_probe(tag:String)->void:
 var view:=SubViewport.new();view.size=Vector2i(1024,1024);view.own_world_3d=true;view.render_target_update_mode=SubViewport.UPDATE_ALWAYS;root.add_child(view)
 var environment:=WorldEnvironment.new();environment.environment=Environment.new();environment.environment.background_mode=Environment.BG_COLOR;environment.environment.background_color=Color.BLACK;view.add_child(environment)
 var white:=StandardMaterial3D.new();white.albedo_color=Color.WHITE;white.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED;white.cull_mode=BaseMaterial3D.CULL_DISABLED
 var borrowed:=0;var same:=true
 for road_root:Node3D in demo.town.road_roots.values():
  var rig:Node3D=road_root.get_node_or_null("TramWiresAndStops")
  if rig==null:continue
  for mesh:MeshInstance3D in rig.find_children("*","MeshInstance3D",true,false):
   if mesh.material_override!=demo.town._material(Color("67716b")):continue
   var clone:=MeshInstance3D.new();clone.mesh=mesh.mesh;clone.material_override=white;clone.transform=mesh.global_transform;view.add_child(clone);borrowed+=1;same=same and clone.mesh==mesh.mesh
 check(borrowed>0 and same,"pixel view borrows actual installed rail resources: "+tag)
 var rail_parts:Array=[]
 for road:Dictionary in demo.state.roads:
  var data:Dictionary=demo.town.tram_tracks.prepare(demo.town,road)
  for part:Array in data.parts:
   if is_equal_approx(part[0].x,.055) and is_equal_approx(part[0].y,.028):rail_parts.append(part)
 var camera:=Camera3D.new();camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=6.2;view.add_child(camera)
 for center:Vector2 in [Vector2(24,-20),Vector2(24,20)]:
  camera.position=Vector3(center.x,100,center.y);camera.look_at(Vector3(center.x,0,center.y),Vector3.FORWARD)
  for i:int in range(3):await process_frame
  await RenderingServer.frame_post_draw
  var image:Image=view.get_texture().get_image();var ring_holes:=0;var approach_holes:=0;var head_holes:=0;var heads_tested:=0
  for side:float in [-1.,1.]:
   for i:int in range(720):
    var at:Vector2=center+Vector2.from_angle(float(i)*TAU/720.)*(demo.state.Roundabouts.ROUTE_RADIUS+.32*side)
    var pixel:=Vector2i(camera.unproject_position(Vector3(at.x,0,at.y)))
    if image.get_pixelv(pixel).r<.5:ring_holes+=1
   for direction:Vector2 in [Vector2.RIGHT,Vector2.LEFT,Vector2.UP,Vector2.DOWN]:
    var normal:=Vector2(-direction.y,direction.x)
    for i:int in range(65):
     var at:Vector2=center+direction*(2.17+float(i)*.01)+normal*.32*side
     var pixel:=Vector2i(camera.unproject_position(Vector3(at.x,0,at.y)))
     if image.get_pixelv(pixel).r<.5:approach_holes+=1
  for part:Array in rail_parts:
   var direction:Vector3=Basis.from_euler(part[3])*Vector3.BACK
   for side:float in [-1.,1.]:
    var tip:Vector3=Vector3(part[1])+direction*(float(part[0].z)-demo.town.TramTracks.RAIL_OVERLAP)*.5*side
    var radial:float=Vector2(tip.x,tip.z).distance_to(center)
    if radial<1.3 or radial>2.4:continue
    # Step beyond this box's padded cap; another actual rail must be drawn.
    var beyond:Vector3=Vector3(part[1])+direction*(float(part[0].z)*.5+.008)*side
    var pixel:=Vector2i(camera.unproject_position(beyond));heads_tested+=1
    if image.get_pixelv(pixel).r<.5:head_holes+=1
  check(heads_tested>50 and head_holes==0,"rendered junction head continuations have no open pixels: "+tag+str(center))
  image.save_png(OUT+"/"+label+"/pixel_"+tag+"_"+str(int(center.y))+".png")
  pixels.append({"phase":tag,"center":center,"ring_holes":ring_holes,"approach_holes":approach_holes,"heads_tested":heads_tested,"head_holes":head_holes})
  check(ring_holes==0 and approach_holes==0,"real rendered ring/approach pixels cover expected track: "+tag+str(center))
 view.queue_free();await process_frame
var failures:Array=[]
func _initialize():run.call_deferred()
func check(ok:bool,message:String):
 checks+=1
 if not ok:failures.append(message);push_error(message)
func settle():
 while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await process_frame
 for i in range(5):await process_frame
func capture(name_value,at,zoom,size=Vector2i(1440,900)):
 root.size=size;demo.focus=at;demo.zoom=zoom;demo.yaw=.25;demo.pitch=1.;demo._update_camera();demo.town.clear_preview();demo.toast.hide();demo.toast_time=0.
 for i in range(6):await process_frame
 await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+label+"/"+name_value+".png")
func run():
 for arg in OS.get_cmdline_user_args():
  if arg.begins_with("--label="):label=arg.trim_prefix("--label=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT+"/"+label));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);await settle();demo.ui_layer.hide();demo.life_save_timer=100000.
 var city=Fixture.fixture()
 check(city.add_terrain_stroke([Vector2(24,20)] as Array[Vector2],"raise",6.,.65).ok,"actual hill")
 for center in [Vector2(24,-20),Vector2(24,20)]:
  check(city.add_road([center+Vector2(-8,0),center+Vector2(8,0)] as Array[Vector2],"tram","none",2.6).ok,"horizontal rail")
  check(city.add_road([center+Vector2(0,-8),center+Vector2(0,8)] as Array[Vector2],"tram","none",3.2).ok,"vertical rail")
  check(city.add_roundabout(center).ok,"actual roundabout")
 check(city.add_road([Vector2(-32,3),Vector2(-23,6),Vector2(-31,7)] as Array[Vector2],"path","none",1.8).ok,"acute return path")
 check(city.add_road([Vector2(-32,20),Vector2(-24,23),Vector2(-31,24)] as Array[Vector2],"tram","none",3.2).ok,"acute return rail")
 var snapshot=city.snapshot();FileAccess.open(OUT+"/"+label+"/world.json",FileAccess.WRITE).store_string(JSON.stringify(snapshot,"\t",true,true))
 demo._after_edit(demo.state.restore(snapshot),"history");await settle();demo.life.set_process(false)
 await capture("flat_roundabout",Vector3(24,.6,-20),10.)
 await capture("hill_roundabout",Vector3(24,1.4,20),10.)
 await capture("acute_path",Vector3(-27,.5,6),13.)
 await capture("acute_tram",Vector3(-28,.5,23),13.)
 await capture("hill_roundabout_1024",Vector3(24,1.4,20),10.,Vector2i(1024,768))
 await pixel_probe("published")
 var plan:Dictionary=demo.life.tram.plan
 for candidate:Dictionary in demo.life.tram.cars:
  for key:String in candidate.line.tour:
   var at:Vector3=plan.positions[key]
   if Vector2(at.x,at.z).distance_to(Vector2(24,20))<2.4:driving_car=candidate;break
  if not driving_car.is_empty():break
 check(not driving_car.is_empty(),"production fleet serves the real hill ring")
 var frames_on_arc:=0;var route_ok:=true;var travelled:=0.;var captured_at:=Vector3.ZERO
 if not driving_car.is_empty():
  var arc_image:Image
  var distance:float=driving_car.distance;draw_ms.clear();last_draw=0;RenderingServer.frame_post_draw.connect(draw_sample);driving=true
  for frame:int in range(900):
   await process_frame
   var at:Vector3=driving_car.node.position;var offset:=Vector2(at.x-24,at.z-20)
   if offset.length()>1.7 and offset.length()<1.9 and absf(offset.x*offset.y)>.3:
    frames_on_arc+=1
    if arc_image==null:
     # The car is on a real circular edge now; exclude verification readback
     # from frame sampling and encode the picture after driving ends.
     driving=false;await RenderingServer.frame_post_draw
     arc_image=root.get_texture().get_image();captured_at=at;last_draw=0;driving=true
   var a:Vector3=plan.positions[driving_car.key];var b:Vector3=plan.positions[driving_car.line.tour[driving_car.cursor]]
   route_ok=route_ok and Geometry2D.get_closest_point_to_segment(Vector2(at.x,at.z),Vector2(a.x,a.z),Vector2(b.x,b.z)).distance_to(Vector2(at.x,at.z))<.002
   route_ok=route_ok and absf(at.y-demo.state.street_height(Vector2(at.x,at.z)))<.001
  driving=false;travelled=float(driving_car.distance)-distance
  var captured:bool=arc_image!=null and arc_image.save_png(OUT+"/"+label+"/car_on_arc.png")==OK
  check(frames_on_arc>0 and route_ok and travelled>4. and captured,"real carriage traverses circular hill track with correct route and height")
  await capture("car_after_route",Vector3(24,1.4,20),10.,Vector2i(1024,768))
 var owner:=""
 for marker:Dictionary in demo.state.Roundabouts.all(demo.state.roads):
  if marker.center==Vector2(24,20):owner=str(marker.owner_id)
 demo._after_edit(demo.state.remove_roundabout(Vector2(24,20)),"erase");await settle()
 check(int(demo.town.road_roots[owner].get_node("TramWiresAndStops").get_meta("ring_rails"))==0,"published removal retires hill circular rails")
 demo._history(false);await settle();await pixel_probe("undo")
 check(demo.state.roads==snapshot.roads and demo.state.houses==snapshot.houses and demo.life.last_revision==demo.state.revision,"undo restores full work and matching geometry/life revision")
 check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains byte-identical")
 draw_ms.sort()
 var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"pixels":pixels,"car_metres":travelled,"frames_on_arc":frames_on_arc,"captured_at":captured_at,"draw_frames":draw_ms.size(),"p95_draw_ms":draw_ms[int(draw_ms.size()*.95)] if not draw_ms.is_empty() else 0.,"max_draw_ms":draw_ms[-1] if not draw_ms.is_empty() else 0.}
 FileAccess.open(OUT+"/"+label+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("ROUNDABOUT_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if result.ok else 1)
