extends SceneTree
## Actual travel and dwelling survive creative edits; activity is saved state.
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _run() -> void:
	var city := State.new()
	city.initialize()
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	_check(not life.residents.is_empty(), "connected initial neighborhood has residents")
	if life.residents.is_empty():
		_finish()
		return
	var resident: Dictionary = life.residents[0]
	var home_id := str(resident.home_id)
	var node_id: int = resident.node.get_instance_id()
	# Observe a real arrival, before service is completed.
	_check(_advance_to_dwell(life, resident, "bakery"), "resident reaches bakery on the street graph")
	_check(life.purchases == 0, "arrival alone does not purchase before dwelling")
	var position: Vector3 = resident.node.position
	var wait := float(resident.wait)
	var pending := str(resident.dwell_id)
	var planted := city.add_vegetation_stroke([Vector2(-14.0, 12.0)], "shrub", 1.0)
	_check(planted.ok, "vegetation fixture commits")
	life._sync()
	_check(_same_visit(life, home_id, node_id, position, wait, pending), "planting preserves resident identity, position and dwelling")
	_check(city.set_house_name(home_id, "常在河湾").ok, "rename fixture commits")
	life._sync()
	_check(_same_visit(life, home_id, node_id, position, wait, pending), "rename preserves exact visit")
	_check(city.add_cell(home_id, 0, 0, 1, "room").ok, "upper floor fixture commits")
	life._sync()
	_check(_same_visit(life, home_id, node_id, position, wait, pending), "upper floor does not reset street life")
	# Unrelated physical road change requires a graph rebuild, but the valid
	# dwelling still belongs to the same agent and is neither restarted nor paid.
	_check(city.add_road([Vector2(-16.0, -12.0), Vector2(-14.0, -12.0)]).ok, "separate road fixture commits")
	life._sync()
	_check(_same_visit(life, home_id, node_id, position, wait, pending), "graph rebuild preserves legal dwelling")
	_check(life.purchases == 0, "repeated edits do not duplicate pending purchase")
	life._process(wait + 0.01)
	life._process(0.0)
	_check(life.purchases == 0, "completed dwell cannot buy from an oven whose first batch is still baking")
	for ignored in range(400):
		if life.purchases > 0: break
		life._process(0.1)
	_check(life.purchases == 1 and int(city.life_progress.purchases) == 1 and city.bakery_supply.h2.served == 1, "one supplied completed dwell records one authoritative purchase")
	life._process(0.0)
	_check(life.purchases == 1, "completed visit cannot be recorded twice")
	var traveling: Dictionary = _resident(life, home_id)
	for ignored in range(10): life._process(0.1)
	position = traveling.node.position
	_check(city.set_house_role("h5", "bakery").ok, "other building use fixture commits")
	life._sync()
	_check(_resident(life, home_id).node.get_instance_id() == node_id and _resident(life, home_id).node.position == position, "use change keeps existing resident at current street position")
	city.undo()
	_check(int(city.life_progress.purchases) == 1, "geometry undo retains actual completed life event")
	life._sync()
	_check(_advance_to_dwell(life, _resident(life, home_id), "venue"), "resident reaches gathering venue")
	life._process(float(_resident(life, home_id).wait) + 0.01)
	life._process(0.0)
	_check(life.gatherings > 0 and int(city.life_progress.gatherings) == life.gatherings, "completed gathering records in authoritative state")
	var path := "user://city_creation_life_%d.json" % Time.get_ticks_usec()
	_check(city.save_city(path).ok, "life progress saves with city")
	var loaded := State.new()
	_check(loaded.load_city(path).ok, "saved city reloads")
	var resumed := Life.new()
	root.add_child(resumed)
	resumed.set_process(false)
	resumed.setup(loaded)
	_check(resumed.purchases == life.purchases and resumed.gatherings == life.gatherings, "fresh life setup restores saved activity totals")
	# Removing the whole network while residents are arriving must invalidate
	# pending visits. Restoring streets resumes those same home identities.
	_check(_advance_to_dwell(life, _resident(life, home_id), "bakery"), "resident has a pending purchase before streets are removed")
	var roads: Array[Dictionary] = city.roads.duplicate(true)
	var purchases := life.purchases
	var gatherings := life.gatherings
	city.roads.clear()
	city.revision += 1
	life._sync()
	_check(_resident(life, home_id).node.get_instance_id() == node_id and _resident(life, home_id).paused, "disconnected resident is retained and pauses at home")
	for ignored in range(100): life._process(1.0)
	_check(life.purchases == purchases and life.gatherings == gatherings, "disconnected homes produce no activity")
	city.roads.assign(roads)
	city.revision += 1
	life._sync()
	_check(not _resident(life, home_id).paused and _resident(life, home_id).node.get_instance_id() == node_id, "restoring roads resumes the same resident")
	for ignored in range(1400): life._process(0.1)
	_check(life.purchases > purchases and life.gatherings > gatherings, "restored network supports actual procurement and gatherings")
	var isolated := State.new()
	isolated.initialize()
	var isolated_roads: Array[Dictionary] = isolated.roads.duplicate(true)
	isolated.roads.clear()
	var new_life := Life.new()
	root.add_child(new_life)
	new_life.set_process(false)
	new_life.setup(isolated)
	_check(not new_life.residents.is_empty() and new_life.residents.all(func(person:Dictionary)->bool:return person.paused and person.route.is_empty() and person.destination_id==person.home_id), "initial isolated neighbors wait at their own homes without phantom trips")
	isolated.roads.assign(isolated_roads)
	isolated.revision += 1
	new_life._sync()
	for ignored in range(1400): new_life._process(0.1)
	_check(not new_life.residents.is_empty() and new_life.purchases > 0 and new_life.gatherings > 0, "new residents can travel after restoring network")
	life.free()
	resumed.free()
	new_life.free()
	_finish()

func _advance_to_dwell(life: Node3D, resident: Dictionary, role: String) -> bool:
	for ignored in range(2000):
		if str(resident.service_pending) == role and float(resident.wait) > 0.0: return true
		life._process(0.1)
	return false

func _resident(life: Node3D, home_id: String) -> Dictionary:
	for resident: Dictionary in life.residents:
		if str(resident.home_id) == home_id: return resident
	return {}

func _same_visit(life: Node3D, home_id: String, node_id: int, position: Vector3, wait: float, pending: String) -> bool:
	var resident := _resident(life, home_id)
	return not resident.is_empty() and resident.node.get_instance_id() == node_id and resident.node.position == position and float(resident.wait) == wait and str(resident.dwell_id) == pending

func _check(condition: bool, label: String) -> void:
	if not condition: failures.append(label)

func _finish() -> void:
	if failures.is_empty():
		print("CITY_CREATION_LIFE PASS: stable visits, actual dwell events, save/load, disconnection and resumed travel")
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)
