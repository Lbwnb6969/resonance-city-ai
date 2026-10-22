extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Stroke=preload("res://scripts/world/city_creation_stroke.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
const TramPlan=preload("res://scripts/world/city_creation_tram_plan.gd")
const OUT="res://验证记录/道路组合复核_2026-10-22/accepted"
var demo
var facts:Array=[]
var failures:Array=[]
var checks:=0
func _initialize():run.call_deferred()
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func settle()->void:
 while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await process_frame
 for i:int in range(5):await process_frame
func add(city,points,style,width):
 var result=city.add_road(points,style,"none",width)
 if not result.ok:print("STROKE_REJECTED ",result)
 check(result.ok and not result.get("no_op",true),"public stroke "+style+" "+str(width))
 return str(result.get("road_id",""))
func bins_for(roads:Array)->Dictionary:
 var bins:Dictionary={}
 for road:Dictionary in roads:
  var road_root:Node3D=demo.town.road_roots[str(road.id)]
  for node:MeshInstance3D in road_root.find_children("*","MeshInstance3D",true,false):
   if node.name not in ["PathSurface","PromenadeSurface","StoneTreads"]:continue
   var faces:PackedVector3Array=node.mesh.get_faces()
   for i:int in range(0,faces.size(),3):
    var t:Array=[]
    for j:int in range(3):t.append(Vector2(faces[i+j].x,faces[i+j].z))
    var bounds:=Rect2(t[0],Vector2.ZERO).expand(t[1]).expand(t[2])
    for x:int in range(floori(bounds.position.x*2),floori(bounds.end.x*2)+1):
     for z:int in range(floori(bounds.position.y*2),floori(bounds.end.y*2)+1):
      var key:=Vector2i(x,z)
      if not bins.has(key):bins[key]=[]
      bins[key].append(t)
 return bins
func boundary_distance(at:Vector2)->float:
 var distance:=INF
 for contours:Array in demo.town.road_outlines.values():
  for contour:PackedVector2Array in contours:
   for i:int in range(contour.size()):distance=minf(distance,at.distance_to(Geometry2D.get_closest_point_to_segment(at,contour[i],contour[(i+1)%contour.size()])))
 return distance
func hit_count(at:Vector2,bins:Dictionary)->int:
 var hits:=0
 for t:Array in bins.get(Vector2i(floori(at.x*2),floori(at.y*2)),[]):
  var a:float=(t[1]-t[0]).cross(at-t[0]);var b:float=(t[2]-t[1]).cross(at-t[1]);var c:float=(t[0]-t[2]).cross(at-t[2])
  if (a>0 and b>0 and c>0) or (a<0 and b<0 and c<0):hits+=1
 return hits
func capture(label:String,at:Vector3,zoom:float)->void:
 demo.focus=at;demo.zoom=zoom;demo.yaw=.4;demo.pitch=1.;demo._update_camera();demo.town.clear_preview();demo.toast.hide();demo.toast_time=0.
 for i:int in range(5):await process_frame
 await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func verify(city,groups,label):
 var network:=Network.new();network.state=demo.state;network._build_graph()
 var bins:=bins_for(demo.state.roads)
 for row:Dictionary in groups:
  var route:Array=network._route(network._key(row.start),network._key(row.finish))
  check(route.size()>=2,"real route crosses "+label+" "+row.label)
  var covered:=0;var holes:=0;var overlaps:=0;var boundary:=0
  for x:int in range(-15,16):
   for z:int in range(-15,16):
    var at:Vector2=row.center+Vector2(float(x)*.123+.027,float(z)*.127+.019)
    var inside:=false
    for contours:Array in demo.town.road_outlines.values():inside=inside or demo.town.path_edge._inside(at,contours)
    if not inside:continue
    var hits:=hit_count(at,bins);covered+=1
    if hits==0:
     if boundary_distance(at)<=.0001:boundary+=1
     else:holes+=1
    if hits>1:overlaps+=1
  check(covered>50 and holes==0 and overlaps==0,"single paved coverage "+label+" "+row.label)
  facts.append({"fixture":label,"label":row.label,"center":row.center,"covered":covered,"holes":holes,"overlaps":overlaps,"route_points":route.size(),"boundary_samples":boundary})
 check(demo.state.roads==city.roads,"published authored roads unchanged "+label)
func run()->void:
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
 root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);await settle();demo.ui_layer.hide();demo.life_save_timer=100000.
 var city:=State.new();city.initialize_empty();var groups:Array=[]
 var styles:Array=["path","promenade","avenue","tram"]
 for col:int in range(4):
  for size:int in range(3):
   var center:=Vector2([-30.,-11.,14.,31.][col],[-26.,-4.,21.][size]);var style:String=styles[col];var width:float=State.RoadUpgrade.sizes_for(style)[size]
   var straight:Array[Vector2]=[center+Vector2(0,-7),center+Vector2(0,7)]
   add(city,straight,style,width)
   var branch:Array[Vector2]=[center+Vector2(-6,4),center+Vector2(-4,3),center+Vector2(-3,.5),center]
   add(city,Stroke.road_points(branch),styles[(col+1)%4],State.RoadUpgrade.sizes_for(styles[(col+1)%4])[2-size])
   groups.append({"label":style+" "+str(width),"center":center,"start":straight[0],"finish":branch[0]})
 var original:Dictionary=city.snapshot();FileAccess.open(OUT+"/junctions.json",FileAccess.WRITE).store_string(JSON.stringify(original,"\t",true,true))
 demo._after_edit(demo.state.restore(original),"history");await settle();demo.life.set_process(false)
 verify(city,groups,"junctions")
 var plan:Dictionary=TramPlan.from_network(demo.state,demo.life._network)
 var actual_stops:=0
 for road_root:Node3D in demo.town.road_roots.values():
  var rig:Node3D=road_root.get_node_or_null("TramWiresAndStops")
  if rig!=null:actual_stops+=rig.get_meta("stations",[]).size()
 check(plan.stations.size()==15 and actual_stops==15,"native curved tram rigs contain only actual termini and real street stops")
 facts.append({"fixture":"junctions","tram_stations":plan.stations.size(),"native_stops":actual_stops,"track_length":plan.length})
 for row:Dictionary in groups:await capture("junction_"+row.label.replace(" ","_"),Vector3(row.center.x,.6,row.center.y),12.)
 root.size=Vector2i(1024,768)
 await capture("junction_curve_1024",Vector3(14,.6,-26),12.)
 root.size=Vector2i(1440,900)
 # All four styles cross real water at each of their actual brush sizes.
 city=State.new();city.initialize_empty();groups=[]
 for col:int in range(4):
  for size:int in range(3):
   var style:String=styles[col];var width:float=State.RoadUpgrade.sizes_for(style)[size];var z:float=-33.+float(col*3+size)*6.
   var points:Array[Vector2]=[Vector2(-8,z),Vector2(14,z)];var id:String=add(city,points,style,width)
   var road:Dictionary=city.roads[-1];check(bool(road.bridge),"real bridge profile "+style+str(width))
   groups.append({"label":style+" "+str(width),"center":Vector2(-.7,z),"start":points[0],"finish":points[-1]})
 original=city.snapshot();FileAccess.open(OUT+"/bridges.json",FileAccess.WRITE).store_string(JSON.stringify(original,"\t",true,true))
 demo._after_edit(demo.state.restore(original),"history");await settle();demo.life.set_process(false);verify(city,groups,"bridges")
 for col:int in range(4):await capture("bridge_"+styles[col],Vector3(2,.6,-27.+float(col)*18.),23.)
 var last_id:String=str(demo.state.roads[-1].id)
 demo._after_edit(demo.state.remove_road(last_id),"erase");await settle()
 check(not demo.town.road_roots.has(last_id),"native removal retires the former rail bridge")
 demo._history(false);await settle()
 check(demo.state.roads==original.roads and demo.life.last_revision==demo.state.revision,"undo republishes the original road geometry and life revision")
 check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal work remains byte-identical")
 var result:Dictionary={"checks":checks,"failures":failures,"facts":facts,"ok":failures.is_empty()}
 FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("ROAD_MATRIX ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if result.ok else 1)
