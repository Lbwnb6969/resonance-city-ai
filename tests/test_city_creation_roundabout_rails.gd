extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array[String]=[]
var facts:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func compile(town:Node3D)->Array:
 var parts:Array=[]
 for road:Dictionary in town.state.roads:
  var data:Dictionary=town.tram_tracks.prepare(town,road)
  for part:Array in data.parts:
   if is_equal_approx(part[0].x,.055) and is_equal_approx(part[0].y,.028):parts.append(part)
 return parts
func footprints(parts:Array)->Array:
 var result:Array=[]
 for part:Array in parts:
  var vertices:=PackedVector2Array();var basis:=Basis.from_euler(part[3]);var center:Vector3=part[1];var half:Vector3=Vector3(part[0])*.5
  for x:float in [-1.,1.]:
   for y:float in [-1.,1.]:
    for z:float in [-1.,1.]:
     var at:Vector3=center+basis*Vector3(half.x*x,half.y*y,half.z*z);vertices.append(Vector2(at.x,at.z))
  result.append(Geometry2D.convex_hull(vertices))
 return result
func covered(at:Vector2,hulls:Array)->bool:
 for hull:PackedVector2Array in hulls:
  if Geometry2D.is_point_in_polygon(at,hull):return true
 return false
func coverage(city:RefCounted,parts:Array,center:Vector2)->Dictionary:
 var hulls:=footprints(parts);var ring_holes:=0;var approach_holes:=0
 for side:float in [-1.,1.]:
  for angle:int in range(720):
   var at:Vector2=center+Vector2.from_angle(float(angle)*TAU/720.)*(city.Roundabouts.ROUTE_RADIUS+.32*side)
   if not covered(at,hulls):ring_holes+=1
  for direction:Vector2 in [Vector2.RIGHT,Vector2.LEFT,Vector2.UP,Vector2.DOWN]:
   var normal:=Vector2(-direction.y,direction.x)
   for sample:int in range(65):
    var at:Vector2=center+direction*(2.17+float(sample)*.01)+normal*.32*side
    if not covered(at,hulls):approach_holes+=1
 return {"ring_samples":1440,"approach_samples":520,"ring_holes":ring_holes,"approach_holes":approach_holes}
func open_heads(parts:Array,center:Vector2)->Dictionary:
 var hulls:=footprints(parts);var open:=0;var tested:=0
 for i:int in range(parts.size()):
  var part:Array=parts[i];var direction:Vector3=Basis.from_euler(part[3])*Vector3.BACK
  for side:float in [-1.,1.]:
   var tip:Vector3=Vector3(part[1])+direction*(float(part[0].z)-Renderer.TramTracks.RAIL_OVERLAP)*.5*side
   var at:=Vector2(tip.x,tip.z)
   if at.distance_to(center)<1.3 or at.distance_to(center)>2.4:continue
   var joined:=false
   for j:int in range(hulls.size()):
    if i!=j and Geometry2D.is_point_in_polygon(at,hulls[j]):joined=true;break
   tested+=1
   if not joined:open+=1
 return {"tested":tested,"open":open}
func run()->void:
 for hill:bool in [false,true]:
  var city:=State.new();city.initialize_empty();var center:=Vector2(-20,12)
  if hill:check(city.add_terrain_stroke([center] as Array[Vector2],"raise",6.,.65).ok,"actual sculpted hill")
  check(city.add_road([center-Vector2(8,0),center+Vector2(8,0)] as Array[Vector2],"tram","none",2.6).ok,"actual first approach")
  check(city.add_road([center-Vector2(0,8),center+Vector2(0,8)] as Array[Vector2],"tram","none",3.2).ok,"actual crossing approach")
  check(city.add_roundabout(center).ok,"public roundabout on crossing")
  var original:Dictionary=city.snapshot();var town:=Renderer.new();town.state=city;city.prepare_ground_height()
  var parts:Array=compile(town);var row:Dictionary=coverage(city,parts,center);row.hill=hill;facts.append(row)
  check(parts.size()>100 and row.ring_holes==0,"both full circle rails have actual steel under every angular sample "+str(row))
  var heads:Dictionary=open_heads(parts,center);row.heads=heads
  check(heads.tested>50 and heads.open==0,"actual junction rail heads meet another steel part "+str(heads))
  check(row.approach_holes==0,"all four approaches meet the ring without the former renderer cut "+str(hill))
  var finite:=true
  for part:Array in parts:finite=finite and Vector3(part[0]).is_finite() and Vector3(part[1]).is_finite() and Vector3(part[3]).is_finite() and part[0].z>0.
  check(finite,"flat/sloped rail boxes have finite positive geometry "+str(hill))
  check(city.snapshot()==original,"rail compilation preserves work "+str(hill))
  check(city.remove_roundabout(center).ok,"remove ring through original transaction")
  var plain:Array=compile(town);var ring_count:=0
  for road:Dictionary in city.roads:ring_count+=int(town.tram_tracks.prepare(town,road).ring_rails)
  check(ring_count==0 and not plain.is_empty(),"revision removes retired circular rail data")
  check(city.undo().ok,"undo restores ring")
  row=coverage(city,compile(town),center)
  check(row.ring_holes==0 and row.approach_holes==0,"undo rebuilds full continuous ring and approaches")
  Renderer.BudgetRebuild.new()._dispose_context(town)
 print("ROUNDABOUT_RAILS ",JSON.stringify({"checks":checks,"failures":failures,"facts":facts,"ok":failures.is_empty()}))
 quit(0 if failures.is_empty() else 1)
