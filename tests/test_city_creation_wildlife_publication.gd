extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Wildlife=preload("res://scripts/visual/city_creation_wildlife.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func complete(mm:MultiMesh,count:int)->bool:
	if mm.visible_instance_count!=count:return false
	for i in range(count):
		var transform:=mm.get_instance_transform(i)
		if not transform.is_finite() or not is_equal_approx(transform.basis.determinant(),1.):return false
		var color:=mm.get_instance_color(i);var custom:=mm.get_instance_custom_data(i)
		if not is_finite(color.r+color.g+color.b+color.a+custom.r+custom.g+custom.b+custom.a) or color.a<.99:return false
	return true
func run()->void:
	var city:=State.new();city.initialize();var original:=var_to_bytes(city.snapshot())
	var fauna:=Wildlife.new();root.add_child(fauna);fauna.set_process(false);fauna.setup(city)
	check(not fauna._birds.is_empty() and not fauna._flutters.is_empty(),"real starting houses create birds and nectar visitors")
	check(complete(fauna.birds_mm.multimesh,fauna._birds.size()) and complete(fauna.flutter_mm.multimesh,fauna._flutters.size()),"every exposed wildlife slot is initialized immediately, before any process frame")
	check(original==var_to_bytes(city.snapshot()) and fauna._time==0.,"initial publication changes neither authored city nor the wildlife clock")
	fauna._process(.8)
	var previous:=var_to_bytes(fauna._birds);var clock:float=fauna._time
	var added:Dictionary=city.add_house(Vector2(-20,-20));check(added.ok,"actual new house expands rooftop habitat")
	fauna.refresh_habitats()
	check(fauna._birds.size()==6 and complete(fauna.birds_mm.multimesh,6),"paused habitat growth writes the newly visible bird transform and colour")
	check(var_to_bytes(fauna._birds.slice(0,5))==previous and fauna._time==clock,"habitat publication does not advance flight timers, motion, or the clock")
	var birds:=fauna.birds_mm.multimesh.buffer;var flutters:=fauna.flutter_mm.multimesh.buffer
	fauna.refresh_habitats()
	check(birds==fauna.birds_mm.multimesh.buffer and flutters==fauna.flutter_mm.multimesh.buffer,"unchanged habitat publication retains complete render buffers")
	check(city.remove_house(added.house_id).ok,"actual removal shrinks rooftop habitat")
	fauna.refresh_habitats()
	check(fauna._birds.size()==5 and complete(fauna.birds_mm.multimesh,5),"shrinking habitat exposes exactly the surviving initialized slots")
	for house:Dictionary in city.houses.duplicate(true):check(city.remove_house(str(house.id)).ok,"remove actual seed house "+str(house.id))
	fauna.refresh_habitats()
	check(fauna.birds_mm.multimesh.visible_instance_count==0,"empty city hides all retired bird slots")
	fauna.queue_free();await process_frame
	print("WILDLIFE_PUBLICATION ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
