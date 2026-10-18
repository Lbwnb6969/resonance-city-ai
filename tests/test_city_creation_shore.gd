extends SceneTree
const State := preload("res://scripts/world/city_creation_state.gd")
const Shore := preload("res://scripts/visual/city_creation_shore.gd")
var failures: Array[String] = []

func _initialize() -> void:
	call_deferred("_run")

func _run() -> void:
	var city := State.new()
	city.initialize()
	var shore := Shore.new()
	shore.setup(city)
	root.add_child(shore)
	shore.rebuild()
	var initial_ms := shore.elapsed_ms
	var initial := _records(shore)
	_check(initial.size() > 20, "natural shore has exemplars")
	var ids := _ids(shore)
	shore.rebuild()
	_check(shore.last_changed == 0 and ids == _ids(shore), "unchanged edit reuses all GPU block nodes")
	city.houses[0].name = "岸边小屋"
	city.houses[0].cells.append({"x": 0, "z": 0, "level": 2, "kind": "room"})
	shore.rebuild()
	_check(shore.last_changed == 0, "names and upper floors do not rebuild shore")
	var water_before: Array[Dictionary] = city.waters.duplicate(true)
	var target := Vector2.ZERO
	for record: Dictionary in initial.values():
		if State.WORLD_RECT.has_point(record.position) and absf(record.position.y) < 10.0:
			target = record.position
			break
	# Geometry fixture deliberately joins the main river; inspect derived mask
	# without unrelated stroke validation or player save operations.
	city.waters.append({"id": "wtest", "points": [[State.river_x(target.y), target.y], [target.x, target.y]], "width": 3.0})
	shore.rebuild()
	var after_water := _records(shore)
	var hidden := 0
	var retained := 0
	for key: int in initial:
		var at: Vector2 = initial[key].position
		if city.water_clearance(at) <= 0.105:
			_check(not after_water.has(key), "union water removes old internal shore")
			hidden += 1
		elif after_water.has(key):
			_check(initial[key].transform == after_water[key].transform, "water edit retains surviving exemplar transforms")
			retained += 1
	_check(hidden > 0 and retained > 10, "join exercises internal shores and survivors")
	var untouched := 0
	for block: Vector2i in ids:
		if shore.blocks.has(block) and shore.blocks[block].get_instance_id() == ids[block]: untouched += 1
	_check(untouched > 0, "water edit preserves unrelated GPU blocks")
	city.waters = water_before
	shore.rebuild()
	_check(initial == _records(shore), "water undo restores exact candidate identities and transforms")
	var roads_before: Array[Dictionary] = city.roads.duplicate(true)
	city.roads.append({"id": "rtest", "points": [[target.x - 3.0, target.y], [target.x + 3.0, target.y]], "width": 1.25, "bridge": true})
	shore.rebuild()
	var removed := 0
	var after_road := _records(shore)
	for key: int in initial:
		if not after_road.has(key): removed += 1
	_check(removed > 0, "road and bridge shore clearance removes exemplars")
	_check_production(city, shore)
	city.roads = roads_before
	shore.rebuild()
	_check(initial == _records(shore), "road undo restores exact transforms")
	ids = _ids(shore)
	shore.set_view_scale(45.0)
	_check(ids == _ids(shore) and initial == _records(shore), "GPU view detail leaves CPU layout and nodes stable")
	_check(shore.detail == 0.0, "distant camera contracts shore detail")
	var outside := 0
	for record: Dictionary in initial.values():
		if not State.WORLD_RECT.has_point(record.position): outside += 1
	_check(outside > 0, "background shore continues outside rectangular editing bounds")
	print("CITY_CREATION_SHORE %s: %s; initial=%d in %.3f ms, hidden_water=%d, removed_road=%d, outside=%d, preserved_blocks=%d" % ["PASS" if failures.is_empty() else "FAIL", str(shore.diagnostics()), initial.size(), initial_ms, hidden, removed, outside, untouched])
	for failure: String in failures: push_error(failure)
	shore.free()
	quit(0 if failures.is_empty() else 1)

func _check_production(city: RefCounted, shore: Node3D) -> void:
	for record: Dictionary in _records(shore).values():
		var at: Vector2 = record.position
		_check(city.water_clearance(at) > 0.105, "each exemplar stays on dry shore")
		if record.has("cluster_id"):
			var root_at: Vector2=record.root_position
			_check(city.water_clearance(root_at)>=0.4 and city.water_clearance(root_at)<=0.95 and at.distance_to(root_at)<=Shore.CLUSTER_REACH,"mother root anchors its bounded companions to the shore band")
		else:
			_check(city.water_clearance(at)<=0.9,"individual reed and grass roots stay in their dry shore band")
		if State.WORLD_RECT.has_point(at):
			var plant := {"id": "ptest", "position": [at.x, at.y], "kind": "shrub", "scale": 0.25, "seed": 0, "source": "seed"}
			_check(city.vegetation_visible(plant), "production room/door/road/water footprint predicate")
		if record.part == "stone":
			var transform: Transform3D = record.transform
			for index in range(12):
				var angle := float(index) * TAU / 12.0
				var edge: Vector3 = transform.basis * Vector3(cos(angle), 0, sin(angle))
				_check(city.water_clearance(at + Vector2(edge.x, edge.z)) > 0.01, "entire stone ellipse remains dry")
				var edge_at := at + Vector2(edge.x, edge.z)
				if State.WORLD_RECT.has_point(edge_at):
					var edge_plant := {"id": "pedge", "position": [edge_at.x, edge_at.y], "kind": "shrub", "scale": 0.25, "seed": 0, "source": "seed"}
					_check(city.vegetation_visible(edge_plant), "full stone ellipse avoids house doorway and road footprint")

func _records(shore: Node3D) -> Dictionary:
	var result := {}
	for node: Node3D in shore.blocks.values():
		for record: Dictionary in node.get_meta("candidates"):
			_check(not result.has(record.seed), "no duplicated lattice candidate at block boundary")
			result[record.seed] = record.duplicate(true)
	return result

func _ids(shore: Node3D) -> Dictionary:
	var result := {}
	for block: Vector2i in shore.blocks: result[block] = shore.blocks[block].get_instance_id()
	return result

func _check(condition: bool, message: String) -> void:
	if not condition: failures.append(message)
