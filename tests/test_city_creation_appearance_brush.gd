extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
 var city:=State.new();city.initialize_empty();var source:String=city.add_house(Vector2(-24,-16)).house_id
 check(city.set_house_architecture(source,"portico").ok and city.set_house_style(source,"stone").ok and city.set_house_colors(source,Color("e8bd7d"),Color("326477")).ok,"author source through actual APIs")
 var authored:Dictionary=city.snapshot();var history:int=city._undo.size()
 check(Brush.sample(city,source).ok and city.snapshot()==authored and city._undo.size()==history,"sample changes no authored data or history")
 var sampled:Dictionary=Brush.current(city).duplicate(true)
 for at:Vector2 in [Vector2(-18,-16),Vector2(-12,-16)]:
  var before:Array=city.houses.duplicate(true);var result:Dictionary=city.add_house(at);check(result.ok,"continuous sampled build")
  var house:Dictionary=city.houses[-1]
  check(house.architecture=="portico" and house.style=="stone" and house.custom_colors==city.houses[0].custom_colors and city.house_era(house)==city.house_era(city.houses[0]),"sampled actual prototype material and colors on new house")
  check(city.houses.slice(0,-1)==before,"all old houses unchanged")
  check(city.undo().ok and city.houses==before and city.redo().ok,"one authored undo/redo transaction")
 check(Brush.current(city)==sampled,"repeated construction keeps brush")
 city.set_house_colors(source,Color.WHITE,Color.BLACK)
 check(Brush.current(city).appearance.custom_colors!=city.houses[0].custom_colors,"sampled colors do not alias source dictionary")
 check(city.set_house_style(source,"timber").ok and Brush.sample(city,source).ok and Brush.select(city,"pastoral","rotunda"),"new explicit prototype after timber sample")
 var result:Dictionary=city.add_house_stroke(Vector2(-6,-16),[{"x":0,"z":0,"level":0,"kind":"room"}])
 check(result.ok and city.houses[-1].architecture=="rotunda" and city.houses[-1].style=="classic","selected classical prototype resolves incompatible inherited material without losing color")
 var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok and copy.snapshot()==city.snapshot() and not copy.has_meta("new_house_brush"),"cold saved actual appearance with no transient authoring state")
 var before:Dictionary=city.snapshot();check(not Brush.sample(city,"missing").ok and city.snapshot()==before,"missing sample leaves work unchanged")
 print("APPEARANCE_BRUSH ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
