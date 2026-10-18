extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Context=preload("res://scripts/world/city_creation_cafe_layout_context.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _pure(value:Variant)->bool:
	if value is Object or value is Callable or value is Signal:return false
	if value is Dictionary:
		for key:Variant in value:if not _pure(key) or not _pure(value[key]):return false
	if value is Array:
		for entry:Variant in value:if not _pure(entry):return false
	return true
func _run()->void:
	var city:=State.new();city.initialize();_check(city.set_house_role("h3","garden_cafe").ok and city.set_house_role("h4","garden_cafe").ok,"two actual cafes have authored geometry")
	var live:=Context.new();var original:Dictionary=city.snapshot();var plan:Dictionary=live.layout(city,"h3")
	_check(not plan.is_empty(),"real first cafe has legal furniture")
	if plan.is_empty():quit(1);return
	var paths:Array=[]
	for seat:Vector2 in plan.seats:paths.append(live.route(city,"h3",plan.entrance,seat));paths.append(live.route(city,"h3",seat,plan.entrance))
	var snapshot:=live.snapshot_city(city);var before:=var_to_bytes(snapshot)
	_check(_pure(snapshot),"worker capture contains values without Nodes, Callables or weak owner objects")
	var copy:=State.new();_check(copy.restore(original).ok,"worker city restores identical authored input")
	var worker:=Context.new();worker.restore_city(snapshot,copy);var index:=0;var exact:=true
	for seat:Vector2 in plan.seats:
		exact=exact and worker.route(copy,"h3",plan.entrance,seat)==paths[index];index+=1
		exact=exact and worker.route(copy,"h3",seat,plan.entrance)==paths[index];index+=1
	_check(exact,"all seat approaches and exits survive the private worker capture exactly")
	var point:Vector2=Vector2(plan.entrance).lerp(Vector2(plan.seats[0]),.37)
	var prepared:Array[Vector2]=worker.route(copy,"h3",point,plan.entrance)
	_check(var_to_bytes(live.snapshot_city(city))==before,"a new worker route never mutates the live visibility graph or route cache")
	worker.rebind_city(copy,city)
	_check(not worker._contexts.has(copy.get_instance_id()) and worker._contexts[city.get_instance_id()].owner.get_ref()==city,"joined context adopts the live weak owner and removes the snapshot owner")
	var rebound:Dictionary=worker.snapshot_city(city);var graph_keys:Array=rebound.context.graphs.keys()
	_check(worker.route(city,"h3",point,plan.entrance)==prepared and worker.snapshot_city(city).context.graphs.keys()==graph_keys,"published route reuses the prepared graph under the real city identity")
	var terrain:Array[Vector2]=[Vector2(25,25)];_check(city.add_terrain_stroke(terrain,"raise",2.,.8).ok,"real terrain-only edit commits")
	var cold:=Context.new()
	_check(worker.route(city,"h3",point,plan.entrance)==cold.route(city,"h3",point,plan.entrance),"cached planar paths remain exact after terrain-only edits")
	_check(city.set_house_role("h4","residential").ok,"actual neighboring furniture is removed by role edit")
	cold=Context.new()
	_check(worker.route(city,"h3",point,plan.entrance)==cold.route(city,"h3",point,plan.entrance) and worker.snapshot_city(city).context.signature!=rebound.context.signature,"changed furniture invalidates the captured geometry and matches cold routing")
	print("CAFE_PREPARED_CONTEXT ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
