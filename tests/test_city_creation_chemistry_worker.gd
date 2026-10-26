extends SceneTree
const Plans=preload("res://scripts/world/city_creation_chemistry_preview.gd")
const Fixture=preload("res://tools/fixtures/city_creation_chemistry_fixture.gd")
const Worker=preload("res://scripts/ui/city_creation_chemistry_worker.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
 for kind:String in ["courtyard","skybridge","bridge","stairs"]:
  var data:=Fixture.building(kind) if kind in ["courtyard","skybridge"] else Fixture.road(kind)
  var city:RefCounted=data.city;var old_revision:int=city.revision;var key:="async_"+kind
  var request:Dictionary={"key":key,"mode":"house" if data.has("candidate") else "road","candidate":data.get("candidate",{"valid":true}),"points":data.get("points",[]),"width":data.get("width",0.),"style":data.get("style","")}
  var expected:Array=Plans.building(city,request.candidate) if request.mode=="house" else Plans.road(city,request.points,request.width,request.style,true)
  var worker:=Worker.new();worker.start(city,request)
  city.houses[0].cells[0].x+=3;city.revision+=1
  var after:Dictionary=city.snapshot();var ready:Dictionary={};var deadline:=Time.get_ticks_msec()+15000
  while ready.is_empty() and Time.get_ticks_msec()<deadline:ready=worker.poll();await process_frame
  check(not ready.is_empty() and ready.rows==expected,"captured nested authored arrays remain isolated from later live edit "+kind)
  check(ready.get("state_id",0)==city.get_instance_id() and ready.get("revision",-1)==old_revision and ready.get("key","")==key,"result tags distinguish stale city generation "+kind)
  check(city.snapshot()==after and not worker.busy(),"worker returns exact pure rules without live writes or retained thread "+kind)
  worker.close()
 var traditions=preload("res://tools/fixtures/city_creation_tradition_fixture.gd")
 var wide:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city();var pair:Array=[]
 for point:Vector2 in [Vector2(-35,8),Vector2(-26.5,8)]:
  var id:String=wide.add_house(point).house_id;pair.append(id);wide.set_house_era(id,"modern_eco")
 wide.add_cell(pair[0],0,0,1);check(traditions.learn(wide,"cloud_gallery").ok,"actual earned cloud-gallery choice")
 var candidate:={"house_id":pair[1],"cell":{"x":0,"z":0,"level":1,"kind":"room"},"valid":true}
 var wide_rows:Array=Plans.building(wide,candidate);check(wide_rows.any(func(r):return r.kind=="skybridge"),"learned9m rule previews actual8.5m skybridge")
 var async_wide:=Worker.new();async_wide.start(wide,{"key":"earned_wide","mode":"house","candidate":candidate,"points":[],"width":0.,"style":""});wide.harmony_journey.traditions.clear();wide.era_modifiers.clear()
 var result:Dictionary={}
 while result.is_empty():result=async_wide.poll();await process_frame
 check(result.rows==wide_rows,"worker owns deep learned-card snapshot even after live traditions change");async_wide.close()
 var slope:RefCounted=traditions.slope();traditions.learn(slope,"stone_step_carillon");var fork:=Plans.fork(slope)
 check(preload("res://scripts/world/city_creation_tradition_rules.gd").stair_rise(fork)==.65 and fork.harmony_journey==slope.harmony_journey,"shallow-stair preview preserves actual learned geometry threshold")
 print("CHEMISTRY_WORKER ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
