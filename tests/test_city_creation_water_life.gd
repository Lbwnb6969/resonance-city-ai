extends SceneTree
## Authored water and bridges use one height source throughout real journeys.
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _run() -> void:
	var city := State.new()
	city.initialize()
	city.houses.clear()
	city.roads.clear()
	city.plants.clear()
	_check(city.add_water([Vector2(3.0,-3.0),Vector2(-8.0,-3.0),Vector2(-8.0,-12.0)],1.6,"channel").ok, "authored river-connected canal fixture commits")
	var home := city.add_house(Vector2(-13.0,-9.0))
	var bakery := city.add_house(Vector2(-3.0,-9.0))
	_check(home.ok and bakery.ok, "homes on opposite authored banks commit")
	if not home.ok or not bakery.ok:
		_finish()
		return
	_check(city.set_house_role(str(bakery.house_id),"bakery").ok, "opposite bank supplies bakery")
	var bridge := city.add_road([Vector2(-13.0,-7.48),Vector2(-3.0,-7.48)])
	_check(bridge.ok, "road crosses the authored river with dry land at both ends")
	if not bridge.ok:
		_finish()
		return
	_check(bool(city.roads[-1].bridge), "authored crossing is a real bridge")
	var path := "user://city_creation_water_life_%d.json" % Time.get_ticks_usec()
	_check(city.save_city(path).ok, "authored water and bridge save")
	var loaded := State.new()
	_check(loaded.load_city(path).ok, "authored water and bridge reload")
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(loaded)
	_check(life.house_connected(str(home.house_id)) and life.house_connected(str(bakery.house_id)), "loaded bridge connects both bank entrances")
	_check(life.residents.size() == 1, "one real resident starts the cross-bank trip")
	if life.residents.size() != 1:
		life.free()
		_finish()
		return
	var resident: Dictionary = life.residents[0]
	var node_id: int = resident.node.get_instance_id()
	var crossed := false
	var edited_under_resident := false
	var height_matches := true
	var worker_height_matches := true
	var stayed_on_road := true
	for ignored in range(1800):
		life._process(0.05)
		for worker: Dictionary in life.bakery.workers:
			var at: Vector3 = worker.node.position
			worker_height_matches = worker_height_matches and absf(at.y-loaded.street_height(Vector2(at.x,at.z))-0.10)<0.0001
		var position: Vector3 = resident.node.position
		var point := Vector2(position.x,position.z)
		height_matches = height_matches and absf(position.y-loaded.street_height(point)-0.10) < 0.0001
		stayed_on_road = stayed_on_road and absf(point.y+7.48) < 0.001 and point.x >= -13.001 and point.x <= -2.999
		if loaded.water_clearance(point) < -0.1:
			crossed = true
			if not edited_under_resident:
				edited_under_resident = true
				var old_height := position.y
				_check(loaded.remove_water_at(Vector2(-8.0,-8.0)).ok, "canal fills while resident crosses its bridge")
				life._sync()
				resident = life.residents[0]
				_check(resident.node.get_instance_id() == node_id and Vector2(resident.node.position.x,resident.node.position.z) == point and not resident.paused, "filling canal keeps same resident and planar progress")
				_check(resident.node.position.y < old_height and absf(resident.node.position.y-loaded.street_height(point)-0.10) < 0.0001, "filling immediately lowers resident onto the actual ground road")
				loaded.undo()
				life._sync()
				resident = life.residents[0]
				_check(resident.node.get_instance_id() == node_id and Vector2(resident.node.position.x,resident.node.position.z) == point and not resident.paused, "restoring canal keeps resident and planar progress")
				_check(absf(resident.node.position.y-old_height) < 0.0001 and absf(resident.node.position.y-loaded.street_height(point)-0.10) < 0.0001, "restoring water immediately restores bridge deck height")
		if str(resident.dwell_id) == str(bakery.house_id): break
	_check(crossed, "actual resident walks over authored water")
	_check(height_matches, "resident follows authoritative street and bridge height at every sampled step")
	_check(worker_height_matches,"real baker shares bridge heights throughout the edited crossing")
	_check(stayed_on_road, "resident follows the street rather than a water shortcut")
	_check(str(resident.dwell_id) == str(bakery.house_id), "resident actually reaches bakery across the new bridge")
	var position: Vector3 = resident.node.position
	var wait := float(resident.wait)
	var dwell := str(resident.dwell_id)
	var signature: Array = life._network_signature.duplicate(true)
	_check(loaded.add_water([Vector2(-15.0,8.0),Vector2(-13.0,8.0)],1.6,"pond").ok, "separate water edit commits while resident is dwelling")
	life._sync()
	_check(life._network_signature != signature, "water geometry invalidates cached street heights")
	resident = life.residents[0]
	_check(resident.node.get_instance_id() == node_id and str(resident.home_id) == str(home.house_id), "water edit retains resident node and home identity")
	_check(resident.node.position == position and float(resident.wait) == wait and str(resident.dwell_id) == dwell and not resident.paused, "valid visit keeps position, remaining wait and pending service through water rebuild")
	_check(life.purchases == 0, "water rebuild never completes the pending purchase")
	life._process(wait+0.01)
	life._process(0.0)
	_check(life.purchases==0,"cross-bank customer cannot buy before the baker finishes the first real oven")
	for ignored in range(400):
		if life.purchases>0: break
		life._process(0.1)
	_check(life.purchases == 1 and int(loaded.life_progress.purchases) == 1, "cross-bank arrival produces exactly one purchase after supplied dwelling")
	life._process(0.0)
	_check(life.purchases == 1, "water rebuild does not duplicate the service event")
	life.free()
	_finish()

func _check(condition: bool, label: String) -> void:
	if not condition: failures.append(label)

func _finish() -> void:
	if failures.is_empty():
		print("CITY_CREATION_WATER_LIFE PASS: loaded authored bridge, actual traversal, shared height, retained visit")
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)
