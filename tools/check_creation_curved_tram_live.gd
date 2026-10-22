extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tests/test_city_creation_tram.gd")
const Stroke=preload("res://scripts/world/city_creation_stroke.gd")
var OUT="res://验证记录/曲线电车实窗_2026-10-22"
var demo
var sampling:=false
var draw_ms:Array[float]=[]
var last_draw:=0
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func _process(delta:float)->bool:
 if sampling:demo.life.tram.tick(delta)
 return false
func draw_sample()->void:
 if not sampling:return
 var now:=Time.get_ticks_usec()
 if last_draw>0:draw_ms.append(float(now-last_draw)/1000.)
 last_draw=now
func settle()->void:
 while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await process_frame
 for i:int in range(5):await process_frame
func capture(label:String)->void:
 await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func run()->void:
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);await settle();demo.ui_layer.hide();demo.life_save_timer=100000.
 var city:RefCounted=Fixture.fixture()
 check(city.add_terrain_stroke([Vector2(-19,-13)] as Array[Vector2],"raise",6.,.65).ok,"sculpt actual curved route hillside")
 var points:Array[Vector2]=Stroke.road_points([Vector2(-27,-17),Vector2(-23,-17),Vector2(-20,-13),Vector2(-14,-13)] as Array[Vector2])
 check(city.add_road(points,"tram","none",3.2).ok,"public curved rail addition to the established third-era town")
 var authored:Dictionary=city.snapshot();demo._after_edit(demo.state.restore(authored),"history");await settle();demo.life.set_process(false)
 var car:Dictionary={}
 for candidate:Dictionary in demo.life.tram.cars:
  if candidate.node.position.z<-10.:car=candidate;break
 check(not car.is_empty(),"real curved rail component receives a production carriage")
 if car.is_empty():demo.queue_free();await process_frame;quit(1);return
 var identity:int=car.node.get_instance_id();var valid:=true;var rows:Array=[]
 var plan:Dictionary=demo.life.tram.plan
 RenderingServer.frame_post_draw.connect(draw_sample)
 demo.focus=Vector3(-20,.7,-15);demo.zoom=17.;demo.yaw=.3;demo.pitch=1.;demo._update_camera();demo.town.clear_preview();demo.toast.hide();demo.toast_time=0.
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;for i:int in range(8):await process_frame
  var start:Vector3=car.node.position;var distance:float=car.distance;var maximum_displacement:=0.
  await capture("start_"+str(size.x));await process_frame
  draw_ms.clear();last_draw=0;sampling=true
  for frame:int in range(400):
   await process_frame
   var next:Vector3=plan.positions[car.line.tour[car.cursor]];var previous:Vector3=plan.positions[car.key];var at:Vector3=car.node.position
   maximum_displacement=maxf(maximum_displacement,start.distance_to(at))
   valid=valid and Geometry2D.get_closest_point_to_segment(Vector2(at.x,at.z),Vector2(previous.x,previous.z),Vector2(next.x,next.z)).distance_to(Vector2(at.x,at.z))<.002
   valid=valid and absf(at.y-demo.state.street_height(Vector2(at.x,at.z)))<.001
  sampling=false
  await capture("moving_"+str(size.x));draw_ms.sort()
  check(valid and car.node.get_instance_id()==identity,"native production carriage remains on the actual bent sloped rail: "+str(size))
  check(float(car.distance)-distance>4. and maximum_displacement>1.,"real-time carriage travels across the curve: "+str(size))
  check(draw_ms.size()>100,"complete render frames sampled during actual movement: "+str(size))
  rows.append({"size":[size.x,size.y],"metres":float(car.distance)-distance,"displacement":start.distance_to(car.node.position),"maximum_displacement":maximum_displacement,"draw_frames":draw_ms.size(),"p95_draw_ms":draw_ms[int(draw_ms.size()*.95)],"max_draw_ms":draw_ms[-1]})
 check(demo.state.roads==authored.roads and demo.state.houses==authored.houses and demo.state.terrain_strokes==authored.terrain_strokes,"authored geometry remains unchanged during transport")
 check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal work stays byte-identical")
 var report:Dictionary={"checks":checks,"failures":failures,"rows":rows,"ok":failures.is_empty()}
 FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("CURVED_TRAM_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
