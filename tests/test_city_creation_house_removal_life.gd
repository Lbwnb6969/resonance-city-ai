extends SceneTree
## Removing a real building releases its people and pending work, not history.
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	_run.call_deferred()

func _fixture() -> RefCounted:
	var city := State.new()
	city.initialize()
	for index in range(city.houses.size()):
		var house: Dictionary = city.houses[index]
		house.origin = [-16.0 + index * 3.0, -2.0]
		house.cells = [house.cells[0].duplicate(true)]
		house.cells[0].x = 0
		house.cells[0].z = 0
		house.cells[0].level = 0
		house.role = "bakery" if index in [1,5] else "venue" if index == 3 else "residential"
		house.bakery_open = false
	city.roads.assign([{"id":"r1","points":[[-17.0,0.0],[-0.8,0.0]],"width":1.25,"bridge":false,"source":"seed"}])
	city.plants.clear()
	city.revision += 1
	return city

func _life(city: RefCounted) -> Node3D:
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	return life

func _resident(life: Node3D, home: String) -> Dictionary:
	for person: Dictionary in life.residents:
		if person.home_id == home: return person
	return {}

func _tick(life: Node3D, seconds: float) -> void:
	for ignored in range(roundi(seconds / 0.1)): life._process(0.1)

func _dwell(life: Node3D, person: Dictionary, id: String) -> bool:
	for ignored in range(1000):
		if person.dwell_id == id: return true
		life._process(0.1)
	return false

func _playing(life: Node3D) -> bool:
	for ignored in range(1000):
		if life.concert_status().phase == "playing": return true
		life._process(0.1)
	return false

func _stock(city: RefCounted, id: String, count: int) -> bool:
	# Seed authoritative supply without a second editing-history action; the
	# behavioral scenarios deliberately keep ovens closed to isolate removal.
	for house: Dictionary in city.houses:
		if house.id != id: continue
		var opened := bool(house.bakery_open)
		house.bakery_open = true
		var produced: bool = city.produce_bread(id,count)
		house.bakery_open = opened
		return produced
	return false

func _run() -> void:
	await _remove_home()
	await _remove_bakery()
	await _remove_concert_buildings()
	await _empty_and_rebuild()
	await _new_unserved_home()
	if failures.is_empty():
		print("CITY_CREATION_HOUSE_REMOVAL_LIFE PASS: %d checks; no ghost homes/workers/concerts, surviving visits, undo and empty-city restart" % checks)
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)

func _remove_home() -> void:
	var city := _fixture()
	var life := _life(city)
	var survivor := _resident(life,"h3")
	_check(_dwell(life,survivor,"h6"),"second home's original shop is actually reached")
	survivor.wait = 1.25
	var position: Vector3 = survivor.node.position
	var node_id: int = survivor.node.get_instance_id()
	var removed_id: int = _resident(life,"h1").node.get_instance_id()
	var old_checkpoint: Dictionary = life.checkpoint()
	var progress: Dictionary = city.life_progress.duplicate()
	_check(city.remove_house("h1").ok,"whole residential building is removed")
	var current: Dictionary = life.checkpoint()
	_check(_resident(life,"h1").is_empty() and life.current_population == 4,"capture immediately releases deleted household")
	_check(survivor.node.get_instance_id() == node_id and survivor.node.position == position and survivor.wait == 1.25 and survivor.dwell_id == "h6","unrelated household removal retains actual buyer node, shop, position and wait")
	for worker: Dictionary in life.bakery.workers:
		_check(worker.home_id != "h1","deleted worker home is released, not left baking")
	for saved: Dictionary in current.residents:
		_check(saved.home_id != "h1","immediate checkpoint contains no deleted home")
	life.restore_checkpoint(old_checkpoint)
	_check(_resident(life,"h1").is_empty(),"stale pre-removal checkpoint cannot recreate deleted household")
	await process_frame
	_check(not is_instance_id_valid(removed_id),"removed person's visual node is freed")
	_check(city.undo().ok,"undo recreates removed household")
	life._sync()
	_check(not _resident(life,"h1").is_empty() and _resident(life,"h1").node.get_instance_id() != removed_id,"same restored home ID gets a legal new person")
	_check(city.life_progress == progress,"removal, stale restore and undo do not issue completed visits")
	var stable: Dictionary = _resident(life,"h3")
	position = stable.node.position
	var wait := float(stable.wait)
	_check(city.add_cell("h3",0,0,1).ok,"partial editing fixture adds upper room")
	life._sync()
	var room_id := str(city.houses[2].cells[-1].id)
	_check(city.remove_cell("h3",room_id).ok,"partial room removal commits")
	life._sync()
	_check(stable.node.get_instance_id() == node_id and stable.node.position == position and stable.wait == wait,"partial room removal preserves resident and visit")
	life.free()

func _remove_bakery() -> void:
	var city := _fixture()
	var life := _life(city)
	var person := _resident(life,"h1")
	_check(_dwell(life,person,"h2"),"buyer reaches deleted bakery before removal")
	_tick(life,3.1)
	_check(person.dwell_id == "h2" and person.wait == 0.0 and life.purchases == 0,"empty bakery keeps real pending procurement")
	var old_checkpoint: Dictionary = life.checkpoint()
	var position: Vector3 = person.node.position
	_check(city.remove_house("h2").ok,"whole bakery removal commits")
	life._sync()
	_check(person.node.position == position and person.dwell_id == "" and person.service_pending == "" and person.destination_id == "h6","deleted empty shelf clears service and replans to real other bakery")
	_check(life.bakery.workers.size() == 1 and life.bakery.workers[0].bakery_id == "h6","deleted bakery releases worker, retains other real oven")
	life.restore_checkpoint(old_checkpoint)
	_check(person.dwell_id != "h2","stale shelf checkpoint cannot restore service at deleted bakery")
	for other: Dictionary in life.residents:
		if other.home_id != "h1": other.paused = true
	_check(_dwell(life,person,"h6"),"survivor actually walks to replacement shelf")
	_tick(life,3.1)
	_check(life.purchases == 0,"travel plus empty replacement shelf produces no phantom purchase")
	_check(_stock(city,"h6",1),"fixture puts one real loaf on replacement shelf")
	life._process(0.0)
	_check(life.purchases == 1 and city.bakery_supply.h6.served == 1,"replacement purchase consumes a real loaf after actual visit")
	var supply: Dictionary = city.bakery_supply.duplicate(true)
	_check(city.undo().ok,"undo restores bakery construction")
	life._sync()
	_check(city.bakery_supply == supply and city.life_progress.purchases == 1,"undo bakery removal retains issued/served supply and completed purchase")
	await process_frame
	life.free()

func _remove_concert_buildings() -> void:
	for remove_id: String in ["h4","h1","h5"]:
		var city := _fixture()
		if remove_id == "h5": city.set_house_role("h5","venue")
		var life := _life(city)
		_check(life.invite_concert("h4").ok and _playing(life),"concert fixture actually reaches playing for " + remove_id)
		_tick(life,2.0)
		var elapsed := float(life.concert_status().elapsed)
		var stale: Dictionary = life.checkpoint()
		_check(city.remove_house(remove_id).ok,"concert building removal commits for " + remove_id)
		life._sync()
		if remove_id == "h5":
			_check(life.concert_status().phase == "playing" and life.concert_status().elapsed == elapsed,"deleting unrelated venue preserves active concert and elapsed time")
		else:
			_check(life.concert_status().phase == "idle" and city.life_progress.concerts == 0,"deleted venue or participant cancels concert without counting")
			for person: Dictionary in life.residents:
				_check(not person.has("daily_snapshot") and person.service_pending != "concert","cancelled participants return to legal ordinary life")
			life.restore_checkpoint(stale)
			_check(life.concert_status().phase == "idle","stale cancelled invitation never revives missing venue/participant")
			for person: Dictionary in life.residents:
				_check(not person.has("daily_snapshot"),"stale cancelled invitation leaves no ghost participant snapshot")
		await process_frame
		life.free()

func _empty_and_rebuild() -> void:
	var city := _fixture()
	var life := _life(city)
	_check(_stock(city,"h2",2),"empty-city fixture seeds two issued loaves")
	city.serve_bread("h2")
	var supply: Dictionary = city.bakery_supply.duplicate(true)
	var roads: Array = city.roads.duplicate(true)
	var ids: Array[String] = []
	for house: Dictionary in city.houses: ids.append(str(house.id))
	var stale: Dictionary = life.checkpoint()
	for id: String in ids:
		_check(city.remove_house(id).ok,"empty-city removal commits for " + id)
		life._sync()
	_check(life.current_population == 0 and life.residents.is_empty() and life.bakery.workers.is_empty(),"empty city immediately has zero population and agents")
	_check(city.roads == roads and city.bakery_supply == supply,"empty city keeps roads and issued supply history")
	life.restore_checkpoint(stale)
	_tick(life,50.0)
	_check(life.residents.is_empty() and life.bakery.workers.is_empty() and city.life_progress.purchases == 1,"empty-city stale checkpoint and time cannot invent residents or purchases")
	await process_frame
	_check(life.get_child_count() == 0,"empty city has no residual resident/worker visual nodes")
	var home: Dictionary = city.add_house(Vector2(-16,-2))
	var shop: Dictionary = city.add_house(Vector2(-13,-2))
	_check(home.ok and shop.ok and city.set_house_role(str(shop.house_id),"bakery").ok,"new household and bakery can be built on empty city's retained road")
	life._sync()
	_check(life.current_population == 2 and life.residents.size() == 1 and life.bakery.workers.size() == 1,"new IDs restart legal resident and worker life")
	var person: Dictionary = life.residents[0]
	_check(_dwell(life,person,str(shop.house_id)),"rebuilt city has actual service travel")
	_check(city.bakery_supply.h2 == supply.h2,"rebuilt city retains dormant old oven ledger")
	life.free()

func _new_unserved_home() -> void:
	var city := State.new()
	city.initialize()
	city.houses.clear()
	city.roads.clear()
	city.plants.clear()
	city.revision += 1
	var home: Dictionary = city.add_house(Vector2(-16,-2))
	var life := _life(city)
	_check(home.ok and life.residents.size()==1,"first disconnected home immediately creates its actual neighbor")
	var person: Dictionary = _resident(life,str(home.house_id))
	var id: int = person.node.get_instance_id()
	var position: Vector3 = person.node.position
	_check(person.paused and person.destination_id==home.house_id and person.route.is_empty(),"unserved home waits at its own entrance without inventing a journey")
	_tick(life,20)
	_check(person.node.position==position and city.life_progress.purchases==0 and city.life_progress.gatherings==0,"waiting at home never completes imaginary service")
	_check(city.set_journey_checkpoint(life.checkpoint()).ok,"new unserved neighbor is a legal saved journey")
	var path := "user://unserved_home_%d.json" % Time.get_ticks_usec()
	_check(city.save_city(path).ok,"isolated single-home work saves")
	var loaded := State.new()
	_check(loaded.load_city(path).ok,"single-home work reloads")
	var resumed := _life(loaded)
	_check(resumed.residents.size()==1 and resumed.residents[0].paused and resumed.residents[0].node.position==position,"reopening never loses or duplicates the unserved neighbor")
	resumed.free()
	var shop: Dictionary = city.add_house(Vector2(-13,-2))
	_check(shop.ok and city.set_house_role(str(shop.house_id),"bakery").ok,"a real nearby bakery can be authored")
	_check(city.add_road([Vector2(-16,-0.48),Vector2(-13,-0.48)]).ok,"a real street connects both entrances")
	life._sync()
	person = _resident(life,str(home.house_id))
	_check(life.residents.size()==1 and not person.paused and person.node.get_instance_id()==id,"new service resumes the same waiting neighbor instead of creating a replacement")
	_check(_dwell(life,person,str(shop.house_id)),"resumed neighbor really travels to the new shop")
	life.free()

func _check(value: bool, label: String) -> void:
	checks += 1
	if not value: failures.append(label)
