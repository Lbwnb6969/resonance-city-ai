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
func endpoint(part:Array,side:float)->Vector3:
 var direction:=Basis.from_euler(part[3])*Vector3.BACK
 return Vector3(part[1])+direction*(float(part[0].z)-Renderer.TramTracks.RAIL_OVERLAP)*.5*side
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
  var data:Dictionary=town.tram_tracks.prepare(town,city.roads[0]);var rails:Array=[];var tips:Array[Vector3]=[]
  for part:Array in data.parts:
   if is_equal_approx(part[0].x,.055) and is_equal_approx(part[0].y,.028):rails.append(part);tips.append(endpoint(part,-1.));tips.append(endpoint(part,1.))
  var open_ends:=0;var has_pitch:=false
  for i:int in range(tips.size()):
   var nearest:=INF
   for j:int in range(tips.size()):
    if i/2==j/2:continue
    nearest=minf(nearest,tips[i].distance_to(tips[j]))
   if nearest>.00002:open_ends+=1
  for part:Array in rails:has_pitch=has_pitch or absf(float(part[3].x))>.001
  rail_pairs+=rails.size()/2
  check(rails.size()>10 and open_ends==4 and has_pitch,"both compiled rail boxes meet through bends/slopes, with only four terminal tips "+str(width)+" open="+str(open_ends))
  check(city.snapshot()==original,"geometry preparation does not alter authored work "+str(width))
  Renderer.BudgetRebuild.new()._dispose_context(town)
 print("CURVED_TRAM ",JSON.stringify({"checks":checks,"failures":failures,"rail_pairs":rail_pairs,"ok":failures.is_empty()}))
 quit(0 if failures.is_empty() else 1)
