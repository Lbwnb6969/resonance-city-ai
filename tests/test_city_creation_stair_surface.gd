extends SceneTree
## Compare the final floor against authored footprints and the individual tread
## masks. Samples are independent of how the surface compiler combines cuts.
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var failures:Array[String]=[]
var checks:=0
var boundary_samples:=0
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func inside(at:Vector2,contours:Array)->bool:
 var result:=false
 for contour:PackedVector2Array in contours:
  if Geometry2D.is_point_in_polygon(at,contour):result=not result
 return result
func triangles(arrays:Array)->Dictionary:
 var bins:Dictionary={}
 var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
 var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
 for i:int in range(0,indices.size(),3):
  var a:=Vector2(vertices[indices[i]].x,vertices[indices[i]].z)
  var b:=Vector2(vertices[indices[i+1]].x,vertices[indices[i+1]].z)
  var c:=Vector2(vertices[indices[i+2]].x,vertices[indices[i+2]].z)
  var bounds:=Rect2(a,Vector2.ZERO).expand(b).expand(c)
  for x:int in range(floori(bounds.position.x*2),floori(bounds.end.x*2)+1):
   for y:int in range(floori(bounds.position.y*2),floori(bounds.end.y*2)+1):
    var key:=Vector2i(x,y)
    if not bins.has(key):bins[key]=[]
    bins[key].append([a,b,c])
 return bins
func covered(at:Vector2,bins:Dictionary)->bool:
 for t:Array in bins.get(Vector2i(floori(at.x*2),floori(at.y*2)),[]):
  var a:float=(Vector2(t[1])-Vector2(t[0])).cross(at-Vector2(t[0]))
  var b:float=(Vector2(t[2])-Vector2(t[1])).cross(at-Vector2(t[1]))
  var c:float=(Vector2(t[0])-Vector2(t[2])).cross(at-Vector2(t[2]))
  if (a>=0 and b>=0 and c>=0) or (a<=0 and b<=0 and c<=0):return true
 return false
func run()->void:
 var city:=State.new()
 check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"real flagship restores")
 var original:Dictionary=city.snapshot()
 var town:=Renderer.new();town.state=city;city.prepare_ground_height();town._road_layout_key();town._prepare_road_layout()
 var samples:=0
 for id:String in ["r23","r24","r25"]:
  var road:Dictionary={}
  for row:Dictionary in city.roads:
   if str(row.id)==id:road=row;break
  var profile:Dictionary=city.road_profile(road)
  check(profile.treads.size()>0,"real long stair run: "+id)
  var own:Array=town.road_outlines[id]
  var excluded:Array=[]
  for other:Dictionary in city.roads:
   if int(str(other.id).substr(1))<int(id.substr(1)) and town._roads_touch(road,other):excluded.append(town.road_outlines[other.id])
  for marker:Dictionary in town.Roundabouts.all(city.roads):excluded.append([town.Roundabouts.polygon(marker.center,marker.radius-.025)])
  var treads:Array=[]
  for tread:Dictionary in profile.treads:
   treads.append([PackedVector2Array([Vector2(tread.a)+Vector2(tread.offset_a),Vector2(tread.b)+Vector2(tread.offset_b),Vector2(tread.b)-Vector2(tread.offset_b),Vector2(tread.a)-Vector2(tread.offset_a)])])
  var data:Dictionary=town._prepare_road_data(road)
  var mesh_bins:=triangles(data.arrays)
  var bounds:=Rect2(own[0][0],Vector2.ZERO)
  for contour:PackedVector2Array in own:
   for point:Vector2 in contour:bounds=bounds.expand(point)
  var mismatches:=0;var tested:=0
  for x:int in range(floori(bounds.position.x/.075),ceili(bounds.end.x/.075)):
   for y:int in range(floori(bounds.position.y/.075),ceili(bounds.end.y/.075)):
    var at:=Vector2((float(x)+.371)*.075,(float(y)+.613)*.075)
    var expected:=inside(at,own)
    if expected:
     for cut:Array in excluded+treads:
      if inside(at,cut):expected=false;break
    if covered(at,mesh_bins)!=expected:
     # Native boolean clipping and float32 contours have a sub-millimetre
     # boundary band. Check interior coverage, keeping its size explicit.
     var distance:=INF
     for mask:Array in [own]+excluded+treads:
      for contour:PackedVector2Array in mask:
       for j:int in range(contour.size()):distance=minf(distance,at.distance_to(Geometry2D.get_closest_point_to_segment(at,contour[j],contour[(j+1)%contour.size()])))
     if distance>.0001:mismatches+=1
     else:boundary_samples+=1
    tested+=1
  check(tested>1000 and mismatches==0,"floor retains authored gaps and all individual tread holes: "+id+" / "+str(mismatches))
  samples+=tested
  var unchanged:bool=data.stairs.cuts==treads
  # The compiler normalizes winding; compare both orientations for raw masks.
  if not unchanged:
   unchanged=data.stairs.cuts.size()==treads.size()
   for i:int in range(treads.size()):
    var actual:PackedVector2Array=data.stairs.cuts[i][0]
    for at:Vector2 in treads[i][0]:unchanged=unchanged and at in actual
  check(unchanged,"individual tread geometry remains available unchanged: "+id)
  var finite:=true
  for at:Vector3 in data.arrays[Mesh.ARRAY_VERTEX]:finite=finite and at.is_finite()
  check(finite,"final floor has finite vertices: "+id)
 check(city.snapshot()==original,"render preparation leaves authored work untouched")
 print("STAIR_SURFACE ",JSON.stringify({"checks":checks,"failures":failures,"samples":samples,"boundary_samples":boundary_samples,"ok":failures.is_empty()}))
 Renderer.BudgetRebuild.new()._dispose_context(town);quit(0 if failures.is_empty() else 1)
