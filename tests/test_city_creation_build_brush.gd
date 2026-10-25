extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Fixture=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func free_at(city:RefCounted)->Vector2:
 for z in range(-38,39,4):
  for x in range(-38,39,4):
   if city.validate_add_house(Vector2(x,z)).ok:return Vector2(x,z)
 return Vector2(INF,INF)
func _initialize()->void:run.call_deferred()
func run()->void:
 var old:=State.new();old.initialize();var saved:Dictionary=old.snapshot()
 check(not Brush.select(old,"modern_eco") and not old.has_meta("new_house_brush") and old.snapshot()==saved,"locked brush is rejected without writes")
 var city:RefCounted=Fixture.city();var before:Array=city.houses.duplicate(true)
 var a:String=city.districts[0].id;var b:String=city.districts[1].id;var c:String=city.districts[2].id
 city.record_district_answer(a,b,"pastoral","renaissance");city.record_district_answer(b,c,"renaissance","clockwork")
 check("modern_eco" in city.era_unlocks and city.houses==before,"actual earned modern unlock leaves every old house unchanged")
 for era:String in city.Eras.IDS:
  for prototype:String in Brush.prototypes(era):
   var authored:Array=city.houses.duplicate(true);var history:int=city._undo.size()
   check(Brush.select(city,era,prototype) and city.houses==authored and city._undo.size()==history,"brush selection is transient: "+prototype)
   var result:Dictionary=city.add_house(free_at(city));check(result.ok,"new selected prototype builds "+prototype)
   var id:String=str(result.house_id);var house:Dictionary=city.houses[-1]
   check(city.house_era(house)==era and house.get("architecture")==prototype and city.houses.slice(0,-1)==authored,"new fields only: "+prototype)
   check(city.undo().ok and city.houses==authored,"one undo removes entire new selection: "+prototype)
   check(city.redo().ok and city.houses[-1].get("architecture")==prototype,"redo restores real new prototype: "+prototype)
 check(Brush.select(city,"renaissance","venetian_loggia"),"stroke brush selected")
 var authored:Array=city.houses.duplicate(true)
 var stroke:Dictionary=city.add_house_stroke(free_at(city),[{"x":0,"z":0,"level":0,"kind":"room"}])
 check(stroke.ok and city.houses[-1].get("architecture")=="venetian_loggia" and city.house_era(city.houses[-1])=="renaissance" and city.houses.slice(0,-1)==authored,"stroke path applies selection inside same transaction")
 var old_houses:Array=city.houses.duplicate(true);var target:String=city.houses[-1].id
 check(city.set_house_era(target,"pastoral").ok and not city.houses[-1].has("architecture") and city.houses.slice(0,-1)==old_houses.slice(0,-1),"explicit old-house restyle clears only incompatible selected prototype")
 check(city.undo().ok and city.houses==old_houses,"restyle and prototype alignment share one undo transaction")
 var snapshot:Dictionary=city.snapshot();var copy:=State.new();var path:="res://验证记录/UI04/brush_roundtrip.json"
 FileAccess.open(path,FileAccess.WRITE).store_string(JSON.stringify(snapshot,"",true,true))
 check(copy.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok and copy.snapshot()==snapshot and not copy.has_meta("new_house_brush"),"cold JSON preserves authored era/prototypes without transient palette")
 print("BUILD_BRUSH ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
