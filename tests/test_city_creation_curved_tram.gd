extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
const Plan=preload("res://scripts/world/city_creation_tram_plan.gd")
const Stroke=preload("res://scripts/world/city_creation_stroke.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func endpoint(record:Dictionary,side:float)->Vector3:
 var center:=Vector3(record.at.x,record.y,record.at.y)
 var direction:=Basis.from_euler(Vector3(record.pitch,record.yaw,0))*Vector3.BACK
 return center+direction*(float(record.length)-.004)*.5*side
func run()->void:
 var rail_pairs:=0
 for width:float in [2.1,2.6,3.2]:
  var city:=State.new();city.initialize_empty()
  check(city.add_terrain_stroke([Vector2(-19,-13)] as Array[Vector2],"raise",6.,.65).ok,"actual gentle hillside "+str(width))
  var points:Array[Vector2]=Stroke.road_points([Vector2(-27,-17),Vector2(-23,-17),Vector2(-20,-13),Vector2(-14,-13)] as Array[Vector2])
  check(city.add_road(points,"tram","none",width).ok,"actual curved rail stroke "+str(width))
  var original:Dictionary=city.snapshot()
  var network:=Network.new();network.state=city;network._build_graph()
  var walking:PackedByteArray=var_to_bytes([network.graph,network.positions,network.connected_houses])
  var plan:Dictionary=Plan.from_network(city,network)
  var length:=0.
  for i:int in range(1,points.size()):length+=points[i-1].distance_to(points[i])
  check(plan.lines.size()==1 and absf(float(plan.length)-length)<.001,"track contains exact authored arc without pedestrian shortcuts "+str(width))
  check(plan.stations.size()==2,"a plain curve has two termini and no station forest "+str(width))
  var chain:=true
  for key:String in plan.graph:chain=chain and plan.graph[key].size() in [1,2]
  check(chain and plan.lines[0].tour.front()==plan.lines[0].tour.back(),"continuous curve dispatch visits the real chain and returns "+str(width))
  check(var_to_bytes([network.graph,network.positions,network.connected_houses])==walking,"rail filtering preserves the entire pedestrian graph "+str(width))
  var town:=Renderer.new();town.state=city;city.prepare_ground_height()
  var records:Array=town.promenade.prepare(town,city.roads[0]);var rails:Array=[]
  for record:Dictionary in records:
   if record.kind=="rail":rails.append(record)
  var joined:=true;var worst:=0.;var has_pitch:=false
  for i:int in range(2,rails.size()):
   var gap:float=endpoint(rails[i-2],1.).distance_to(endpoint(rails[i],-1.))
   worst=maxf(worst,gap);joined=joined and gap<.00002
  for record:Dictionary in rails:has_pitch=has_pitch or absf(float(record.pitch))>.001
  rail_pairs+=rails.size()/2
  check(rails.size()>10 and joined and has_pitch,"both native rail boxes meet through bends and slopes "+str(width)+" gap="+str(worst))
  check(city.snapshot()==original,"geometry preparation does not alter authored work "+str(width))
  Renderer.BudgetRebuild.new()._dispose_context(town)
 print("CURVED_TRAM ",JSON.stringify({"checks":checks,"failures":failures,"rail_pairs":rail_pairs,"ok":failures.is_empty()}))
 quit(0 if failures.is_empty() else 1)
