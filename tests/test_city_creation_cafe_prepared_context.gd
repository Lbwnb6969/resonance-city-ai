extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Context=preload("res://scripts/world/city_creation_cafe_layout_context.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
class CountingContext:
	extends "res://scripts/world/city_creation_cafe_layout_context.gd"
	var context_queries:=0
	func _context(city)->Dictionary:
		context_queries+=1;return super._context(city)
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
	var live:=CountingContext.new();var original:Dictionary=city.snapshot();var plan:Dictionary=live.layout(city,"h3")
	_check(not plan.is_empty(),"real first cafe has legal furniture")
	if plan.is_empty():quit(1);return
	var entries: Dictionary={"h3":plan.entrance}
	live.warm_seats(city,entries)
	var warmed:=var_to_bytes(live.snapshot_city(city))
	var paths:Array=[]
	for seat:Vector2 in plan.seats:paths.append(live.route(city,"h3",plan.entrance,seat));paths.append(live.route(city,"h3",seat,plan.entrance))
	live.warm_seats(city,entries)
	_check(var_to_bytes(live.snapshot_city(city))==warmed,"all three actual seat approaches and exits are already cached; repeated publication does not rebuild them")
	live.context_queries=0;var fast_exact:=true;var path_index:=0
	var layout_copy:Dictionary=live.prepared_layout(city,"h3")
	live.warm_seats(city,entries)
	_check(layout_copy==plan and live.context_queries==0,"published layout and repeated seat warming use validated metadata without city-wide geometry queries")
	layout_copy.seats[0]=Vector2(99,99)
	_check(live.prepared_layout(city,"h3")==plan,"published furniture layout remains detached from caller mutations")
	for seat:Vector2 in plan.seats:
		fast_exact=fast_exact and live.seat_route(city,"h3",plan.entrance,seat)==paths[path_index];path_index+=1
		fast_exact=fast_exact and live.seat_route(city,"h3",seat,plan.entrance)==paths[path_index];path_index+=1
	_check(fast_exact and live.context_queries==0,"all six published seat legs match the original route without revalidating city geometry")
	var detached:Array[Vector2]=live.seat_route(city,"h3",plan.entrance,plan.seats[0]);detached.push_front(Vector2(99,99))
	_check(live.seat_route(city,"h3",plan.entrance,plan.seats[0])==paths[0],"a caller cannot mutate the prepared seat path")
	var snapshot:=live.snapshot_city(city);var before:=var_to_bytes(snapshot)
	_check(_pure(snapshot),"worker capture contains values without Nodes, Callables or weak owner objects")
	var copy:=State.new();_check(copy.restore(original).ok,"worker city restores identical authored input")
	var worker:=Context.new();worker.restore_city(snapshot,copy);var index:=0;var exact:=true
	for seat:Vector2 in plan.seats:
		exact=exact and worker.seat_route(copy,"h3",plan.entrance,seat)==paths[index];index+=1
		exact=exact and worker.seat_route(copy,"h3",seat,plan.entrance)==paths[index];index+=1
	_check(exact,"all seat approaches and exits survive the private worker capture exactly")
	var point:Vector2=Vector2(plan.entrance).lerp(Vector2(plan.seats[0]),.37)
	var prepared:Array[Vector2]=worker.route(copy,"h3",point,plan.entrance)
	_check(worker.seat_route(copy,"h3",point,plan.entrance)==prepared,"a free origin uses the original visibility solver instead of a nearby seat route")
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
	_check(worker.seat_route(city,"h3",plan.entrance,plan.seats[0])==cold.route(city,"h3",plan.entrance,plan.seats[0]),"a furniture edit invalidates prepared seat metadata before route validation")
	_check(worker.route(city,"h3",point,plan.entrance)==cold.route(city,"h3",point,plan.entrance) and worker.snapshot_city(city).context.signature!=rebound.context.signature,"changed furniture invalidates the captured geometry and matches cold routing")
	var network:=Network.new();var thread:=Thread.new();var actors: Array[Dictionary]=[]
	thread.start(network.prepare.bind(original,{},actors))
	while thread.is_alive():await process_frame
	thread.wait_to_finish()
	var published:=State.new();_check(published.restore(original).ok,"worker publication has the same real cafe geometry")
	var prepared_context: RefCounted=network.prepared_cafe_context
	prepared_context.rebind_city(network.state,published)
	var ready:=var_to_bytes(prepared_context.snapshot_city(published));var prepared_context_routes:=0
	var published_entries:Dictionary={}
	for id: String in network.connected_houses:
		if published.houses[published._house_index(id)].role!="garden_cafe":continue
		var port: Vector3=network.positions[network.connected_houses[id]]
		var layout: Dictionary=prepared_context.prepared_layout(published,id)
		if layout.is_empty():continue
		published_entries[id]=Vector2(port.x,port.z)
		for seat: Vector2 in layout.seats:
			prepared_context.seat_route(published,id,Vector2(port.x,port.z),seat)
			prepared_context.seat_route(published,id,seat,Vector2(port.x,port.z));prepared_context_routes+=2
	_check(prepared_context_routes>=6 and var_to_bytes(prepared_context.snapshot_city(published))==ready,"actual background Network preparation warms real street-port seat approaches and exits before adopting the live city")
	var queries:int=prepared_context.stats.context_queries
	prepared_context.warm_seats(published,published_entries)
	_check(prepared_context.stats.context_queries==queries and var_to_bytes(prepared_context.snapshot_city(published))==ready,"actual published legal-cafe entry set exactly matches background warming without repeating any visibility query")
	var changed:Dictionary=original.duplicate(true);changed.houses[0].origin[0]+=.25
	changed.cafe_context=snapshot.duplicate(true)
	var next_network:=Network.new();next_network.prepare(changed,{},actors)
	var independent:=Context.new();var valid:=true
	for id:String in next_network.connected_houses:
		if next_network.state.houses[next_network.state._house_index(id)].role!="garden_cafe":continue
		valid=valid and next_network.prepared_cafe_context.prepared_layout(next_network.state,id)==independent.layout(next_network.state,id)
	_check(valid and next_network.prepared_cafe_context._contexts[next_network.state.get_instance_id()].signature==independent._contexts[next_network.state.get_instance_id()].signature,"a copied old context is revalidated against edited worker geometry before publication")
	var flagship:=State.new();_check(flagship.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"real flagship restores for no-space cafe publication regression")
	var flagship_network:=Network.new();flagship_network.prepare(flagship.snapshot(),{},actors)
	var flagship_context:RefCounted=flagship_network.prepared_cafe_context;flagship_context.rebind_city(flagship_network.state,flagship)
	var legal:Dictionary={};var no_space:=0
	for house:Dictionary in flagship.houses:
		if house.role!="garden_cafe" or not flagship_network.connected_houses.has(house.id):continue
		if flagship_context.prepared_layout(flagship,str(house.id)).is_empty():no_space+=1;continue
		var at:Vector3=flagship_network.positions[flagship_network.connected_houses[house.id]];legal[str(house.id)]=Vector2(at.x,at.z)
	queries=flagship_context.stats.context_queries;flagship_context.warm_seats(flagship,legal)
	_check(no_space>0 and not legal.is_empty() and flagship_context.stats.context_queries==queries,"real flagship excludes connected no-space cafes from both entry sets and reuses every valid seat route")
	print("CAFE_PREPARED_CONTEXT ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
