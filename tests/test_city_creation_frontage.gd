extends SceneTree
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String]=[]
var checks := 0

func _initialize() -> void:
	_run.call_deferred()

func _fixture() -> RefCounted:
	var city := State.new()
	city.initialize()
	var originals: Array[Dictionary]=city.houses.duplicate(true)
	city.houses.clear()
	for index in range(3):
		var house: Dictionary=originals[[0,1,3][index]].duplicate(true)
		house.origin=[-14.0+index*4.0,-2.0]
		house.cells=[house.cells[0].duplicate(true)]
		city.houses.append(house)
	city.roads.clear()
	city.plants.clear()
	city.revision+=1
	return city

func _run() -> void:
	var city := _fixture()
	_check(city.house_entrances("h1").size()==1 and not city.house_entrances("h1")[0].active,"unserved house retains original south door")
	_check(_road(city,[Vector2(-16,-5),Vector2(-4,-5)]).ok,"external main street")
	for house: Dictionary in city.houses:
		var x: float=house.origin[0]
		_check(_road(city,[Vector2(x,-5),Vector2(x,-3.2),Vector2(x,-2.9)]).ok,"sampled terminal joins north exterior face")
	var road_id := str(city.roads[-1].id)
	_check(city.house_entrances("h1").size()==2,"new side door adds to south door")
	var north := _north(city,"h1")
	_check(north.active and north.side==Vector2i(0,-1) and north.at.is_equal_approx(Vector2(-14,-3.52)),"north actor anchor and real road provenance")
	_check(city.add_cell("h1",0,0,1,"room").ok,"existing wall terminal does not prevent upper expansion")
	_check(not city.add_cell("h1",0,-1,0,"room").ok,"road cannot be enclosed by ground expansion")
	var restored := State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,"terminal city JSON restore uses same wall rule")
	_check(_north(restored,"h1")==north,"derived entrance exactly reproduces without schema fields")
	var other := _fixture()
	for points: Array in [
		[Vector2(-14.85,-5),Vector2(-14.85,-2.9)],
		[Vector2(-16,-2.95),Vector2(-14,-2.95)],
		[Vector2(-14,-5),Vector2(-14,-2.5)],
		[Vector2(-14,-5),Vector2(-14,-3.5),Vector2(-13.5,-3.5),Vector2(-14,-2.9)]
	]:
		var before: Dictionary=other.snapshot()
		_check(not _road(other,points).ok and other.snapshot()==before,"corner / parallel / inside / last-turn remains atomic rejection")
	# At exactly the published distance limit a face becomes active.
	_check(_road(other,[Vector2(-16,-2),Vector2(-15.45,-2)]).ok,"0.55 metre terminal accepts west porch")
	_check(other.house_entrances("h1").size()==2,"0.55 metre active boundary")
	_check(other.remove_road(str(other.roads[-1].id)).ok and other.house_entrances("h1").size()==1,"deletion removes derived porch only")
	_check(other.undo().ok and other.house_entrances("h1").size()==2,"undo restores same porch")
	_check(other.redo().ok and other.house_entrances("h1").size()==1,"redo removes porch")
	var diagonal := _fixture()
	_check(_road(diagonal,[Vector2(-15,-5),Vector2(-14,-2.9)]).ok,"genuine diagonal approach may diverge beyond the doorway corridor")
	_check(diagonal.road_at(Vector2(-14,-2.9))==str(diagonal.roads[-1].id),"road hit query includes terminal cap")
	_check(diagonal.road_at(Vector2(-17,9)).is_empty(),"road hit query does not erase empty meadow")
	var copied: Array[Dictionary]=diagonal.house_entrances("h1")
	copied[0].at=Vector2(123,456)
	_check(diagonal.house_entrances("h1")[0].at!=Vector2(123,456),"derived cache cannot be mutated through query result")
	diagonal.roads[0].points[-1][1]=-3.6
	_check(diagonal.house_entrances("h1").size()==1,"direct nested road mutation invalidates derived cache without revision increment")
	var reverse := _fixture()
	reverse.houses.clear()
	_check(_road(reverse,[Vector2(-16,-2),Vector2(-14.9,-2)]).ok,"street before house fixture")
	_check(reverse.add_house(Vector2(-14,-2)).ok,"building on a preexisting legitimate wall endpoint uses symmetric rule")
	var terrace := _fixture()
	terrace.houses[0].cells[0].kind="terrace"
	_check(not _road(terrace,[Vector2(-16,-2),Vector2(-14.9,-2)]).ok,"terrace has no room doorway exemption")
	# Real-life integration has only north doors connected, so a south-only
	# implementation cannot pass attendance, purchase or concert assertions.
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	_check(life.connected_houses.size()==3 and life.selected_entrances.h2.side==Vector2i(0,-1),"all roles connect through new exterior doors")
	_check(life.bakery.workers.size()==1,"real baker assigned through north route")
	var attended := false
	var purchased := false
	for tick in range(2400):
		life._process(0.1)
		if life.bakery.workers[0].phase=="baking":
			attended=true
			_check(life.bakery.workers[0].node.position.distance_to(Vector3(-10,0.1,-3.52))<0.15,"baking physically happens at new north porch")
			break
	_check(attended,"baker actually reaches new door")
	var original_key: String=life.connected_houses.h2
	var original_point: Vector3=life.bakery.workers[0].node.position
	var original_elapsed: float=life.bakery.workers[0].elapsed
	_check(_road(city,[Vector2(-12,-2),Vector2(-10.9,-2)]).ok,"second bakery porch on independent spur")
	life._sync()
	_check(life.connected_houses.h2==original_key and life.bakery.workers[0].node.position==original_point and life.bakery.workers[0].elapsed==original_elapsed,"added secondary porch preserves valid existing arrival and oven time")
	for tick in range(2400):
		life._process(0.1)
		if int(city.life_progress.purchases)>0:
			purchased=true
			break
	_check(purchased and int(city.bakery_supply.h2.served)>0,"resident actually buys finite produced stock through porch")
	for tick in range(2400):
		if life.bakery.workers[0].phase=="baking": break
		life._process(0.1)
	var worker: Dictionary=life.bakery.workers[0]
	var worker_node: int=worker.node.get_instance_id()
	var paused_position: Vector3=worker.node.position
	var paused_elapsed: float=worker.elapsed
	var stock := int(city.bakery_supply.h2.stock)
	var produced := int(city.bakery_supply.h2.produced)
	_check(city.remove_road(str(_north(city,"h2").road_id)).ok,"delete shop porch access")
	life._sync()
	_check(worker.node.get_instance_id()==worker_node and worker.phase=="paused","same worker pauses when side access disappears")
	var paused_save: Dictionary=city.snapshot()
	paused_save.journey_checkpoint=life.checkpoint()
	var paused_city := State.new()
	_check(paused_city.restore(JSON.parse_string(JSON.stringify(paused_save))).ok,"disconnected side door checkpoint JSON remains valid")
	var paused_life := Life.new()
	root.add_child(paused_life)
	paused_life.set_process(false)
	paused_life.setup(paused_city)
	_check(paused_life.bakery.workers.size()==1 and paused_life.bakery.workers[0].phase=="paused" and paused_life.bakery.workers[0].node.position.is_equal_approx(paused_position) and is_equal_approx(float(paused_life.bakery.workers[0].elapsed),paused_elapsed),"removed north door save retains stranded worker position and oven progress without fake attendance")
	paused_life.queue_free()
	for tick in range(80): life._process(0.1)
	_check(int(city.bakery_supply.h2.produced)==produced and int(city.bakery_supply.h2.stock)==stock,"disconnected oven cannot produce remotely")
	_check(city.undo().ok,"restore shop access")
	life._sync()
	_check(worker.node.get_instance_id()==worker_node and worker.phase!="paused","same worker resumes after restored physical door")
	_check(life.invite_concert("h4").ok,"concert invite uses north porch network")
	for tick in range(2400):
		life._process(0.1)
		if str(life.concert_status().phase)=="playing": break
	_check(str(life.concert_status().phase)=="playing","neighbor physically arrives at north venue porch")
	var saved: Dictionary = city.snapshot()
	saved.journey_checkpoint=life.checkpoint()
	var reload := State.new()
	_check(reload.restore(JSON.parse_string(JSON.stringify(saved))).ok,"active side-porch concert saves through JSON")
	var resumed := Life.new()
	root.add_child(resumed)
	resumed.set_process(false)
	resumed.setup(reload)
	_check(str(resumed.concert_status().phase)=="playing","side-porch concert really resumes same attendance")
	# Isolated road touching a second face must never bridge via a building.
	var isolated := _fixture()
	_check(_road(isolated,[Vector2(-16,-2),Vector2(-14.9,-2)]).ok,"isolated west spur fixture")
	_check(_road(isolated,[Vector2(-14,-5),Vector2(-14,-2.9)]).ok,"separate north spur fixture")
	var split_life := Life.new()
	root.add_child(split_life)
	split_life.set_process(false)
	split_life.setup(isolated)
	_check(split_life._route(split_life._key(Vector2(-16,-2)),split_life._key(Vector2(-14,-5))).is_empty(),"multiple house doors never connect disconnected road components internally")
	life.queue_free()
	resumed.queue_free()
	split_life.queue_free()
	await process_frame
	if failures.is_empty(): print("CITY_CREATION_FRONTAGE PASS: %d assertions; wall rules, JSON, undo, real north-door baker / purchase / concert / no internal bridge"%checks)
	else:
		for failure: String in failures: push_error(failure)
	quit(0 if failures.is_empty() else 1)

func _north(city: RefCounted,id: String) -> Dictionary:
	for entrance: Dictionary in city.house_entrances(id):
		if entrance.side==Vector2i(0,-1): return entrance
	return {}

func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok: failures.append(label)

func _road(city: RefCounted,points: Array) -> Dictionary:
	var typed: Array[Vector2]=[]
	typed.assign(points)
	return city.add_road(typed)
