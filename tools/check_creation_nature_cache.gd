extends SceneTree
## Standalone CPU/cache fixture, never opens a player save or a GL window.
const State = preload("res://scripts/world/city_creation_state.gd")
const Meadow = preload("res://scripts/visual/city_creation_meadow.gd")
const Shore = preload("res://scripts/visual/city_creation_shore.gd")
const SNAPSHOT = "res://废弃/道路门廊_2026-10-14/nature_cache_baseline.bin"
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _members(city: RefCounted, dirty: Array[Vector2i]) -> Dictionary:
	var result := {}
	for block in dirty: result[block] = []
	for plant: Dictionary in city.plants:
		var at := Vector2(float(plant.position[0]), float(plant.position[1]))
		var block := Vector2i(floori(at.x / 8.0), floori(at.y / 8.0))
		if result.has(block) and city.vegetation_visible(plant): result[block].append(plant)
	return result

func _snapshot(meadow: Node3D, shore: Node3D) -> Dictionary:
	var result := {"meadow": {}, "shore": {}}
	for block: Vector2i in meadow.blocks:
		var batches := {}
		for node: MultiMeshInstance3D in meadow.blocks[block].get_children():
			var records := []
			for index in range(node.multimesh.instance_count):
				records.append([node.multimesh.get_instance_transform(index), node.multimesh.get_instance_color(index), node.multimesh.get_instance_custom_data(index)])
			batches[str(node.name)] = records
		result.meadow[block] = batches
	for block: Vector2i in shore.blocks:
		result.shore[block] = shore.blocks[block].get_meta("candidates").duplicate(true)
	return result

func _rebuild(city: RefCounted, meadow: Node3D, shore: Node3D, dirty: Array[Vector2i]) -> void:
	if "--shared-masks" in OS.get_cmdline_user_args():
		var masks := {}
		meadow.rebuild(_members(city,dirty),dirty,masks)
		shore.rebuild(masks)
	else:
		meadow.rebuild(_members(city,dirty),dirty)
		shore.rebuild()

func _run() -> void:
	var city := State.new()
	city.initialize()
	var meadow := Meadow.new()
	var shore := Shore.new()
	meadow.setup(city)
	shore.setup(city)
	root.add_child(meadow)
	root.add_child(shore)
	var dirty: Array[Vector2i] = []
	for x in range(-3, 3):
		for z in range(-2, 2): dirty.append(Vector2i(x,z))
	_rebuild(city, meadow, shore, dirty)
	var times := {"initial_meadow_ms": meadow.elapsed_ms, "initial_shore_ms": shore.elapsed_ms}
	var snapshots := {"initial": _snapshot(meadow, shore)}
	city.plants.clear()
	for z in range(-14,14):
		for x in range(-17,17):
			var plant := {"id":"p%d" % (city.plants.size()+1),"position":[x+0.25,z+0.12],"kind":"olive" if (x+z)%5 == 0 else "shrub","scale":0.65,"seed":261014+x*31+z*17,"source":"player"}
			if city.vegetation_visible(plant): city.plants.append(plant)
			if city.plants.size() == 500: break
		if city.plants.size() == 500: break
	_rebuild(city, meadow, shore, dirty)
	times.stress_meadow_ms = meadow.elapsed_ms
	times.stress_shore_ms = shore.elapsed_ms
	snapshots.stress = _snapshot(meadow, shore)
	var plant: Dictionary = city.plants[0]
	plant.scale = 0.7
	_rebuild(city, meadow, shore, dirty)
	times.single_plant_ms = meadow.elapsed_ms
	snapshots.plant = _snapshot(meadow, shore)
	var roads_before: Array = city.roads.duplicate(true)
	city.roads.append({"id":"rfixture","points":[[-11.0,9.0],[-14.0,9.0],[-15.0,5.0],[-14.0,1.0]],"width":1.1,"bridge":false})
	_rebuild(city, meadow, shore, dirty)
	times.road_meadow_ms = meadow.elapsed_ms
	times.road_shore_ms = shore.elapsed_ms
	snapshots.road = _snapshot(meadow, shore)
	city.roads.assign(roads_before)
	_rebuild(city, meadow, shore, dirty)
	if _snapshot(meadow, shore) != snapshots.plant: failures.append("undo reproduces all actual GPU tuples and shore exemplars")
	if "--record-baseline" in OS.get_cmdline_user_args():
		var file := FileAccess.open(SNAPSHOT, FileAccess.WRITE)
		file.store_buffer(var_to_bytes(snapshots))
	elif "--compare-baseline" in OS.get_cmdline_user_args():
		var previous: Dictionary = bytes_to_var(FileAccess.get_file_as_bytes(SNAPSHOT))
		for stage: String in snapshots:
			if previous[stage] != snapshots[stage]: failures.append("baseline identical tuples: " + stage)
	print("CITY_CREATION_NATURE_CACHE %s plants=%d, meadow=%s, shore=%s; CPU timings=%s" % ["PASS" if failures.is_empty() else "FAIL",city.plants.size(),str(meadow.diagnostics()),str(shore.diagnostics()),str(times)])
	for failure: String in failures: push_error(failure)
	meadow.free()
	shore.free()
	quit(0 if failures.is_empty() else 1)
