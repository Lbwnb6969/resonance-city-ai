extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Meadow = preload("res://scripts/visual/city_creation_meadow.gd")
const Shore = preload("res://scripts/visual/city_creation_shore.gd")
const Mask = preload("res://scripts/visual/city_creation_grass_mask.gd")
var failures: Array[String] = []
var samples_checked := 0

func _initialize() -> void:
	_run.call_deferred()

func _check(ok: bool, label: String) -> void:
	if not ok: failures.append(label)

func _members(city: RefCounted, dirty: Array[Vector2i]) -> Dictionary:
	var result := {}
	for block in dirty: result[block] = []
	for plant: Dictionary in city.plants:
		var at := Vector2(float(plant.position[0]), float(plant.position[1]))
		var block := Vector2i(floori(at.x / 8.0), floori(at.y / 8.0))
		if result.has(block) and city.vegetation_visible(plant): result[block].append(plant)
	return result

func _shore_records(shore: Node3D) -> Dictionary:
	var result := {}
	for block: Vector2i in shore.blocks:
		result[block] = shore.blocks[block].get_meta("candidates").duplicate(true)
	return result

func _truth(city: RefCounted, meadow: Node3D) -> void:
	for block: Vector2i in meadow.sample_bins:
		var mask := Mask.new()
		mask.setup(city, block)
		for bin: Dictionary in meadow.sample_bins[block]:
			for key: Vector3 in bin:
				var at := Vector2(key.x, key.y)
				var expected := Color(0.0, 0.0, -1.0, 0.0)
				if mask.visible(at,key.z):
					var edge := mask.continuous_edge(at)
					var push: Vector2 = edge.push
					expected = Color(push.x,push.y,smoothstep(0.0,0.55,float(edge.clearance)),0.0)
				samples_checked += 1
				_check(bin[key].is_equal_approx(expected), "cached visibility/edge equals current production mask at %s" % str(at))

func _run() -> void:
	var city := State.new()
	city.initialize()
	city.houses.assign([
		{"id":"h1","origin":[-9.6,-8.0],"cells":[{"id":"c1","x":0,"z":0,"level":0,"kind":"room"}],"name":"跨块门","role":"residential","palette":0,"seed":1},
		{"id":"h2","origin":[7.0,-8.0],"cells":[{"id":"c2","x":0,"z":0,"level":0,"kind":"room"}],"name":"岸边门","role":"residential","palette":0,"seed":2}
	])
	city.roads.clear()
	city.waters.clear()
	var meadow := Meadow.new()
	var shore := Shore.new()
	meadow.setup(city)
	shore.setup(city)
	root.add_child(meadow)
	root.add_child(shore)
	var dirty: Array[Vector2i] = []
	for x in range(-3,3):
		for z in range(-2,2): dirty.append(Vector2i(x,z))
	var masks := {}
	meadow.rebuild(_members(city,dirty),dirty,masks)
	shore.rebuild(masks)
	_truth(city,meadow)
	var baseline: Dictionary = meadow.base_records.duplicate(true)
	var shore_baseline := _shore_records(shore)
	var ids := {}
	for block: Vector2i in meadow.blocks: ids[block] = meadow.blocks[block].get_instance_id()
	var entrances_before: Array = city.house_entrances("h1")
	var points: Array[Vector2] = [Vector2(-6,-8),Vector2(-8.15,-8)]
	var result: Dictionary = city.add_road(points)
	_check(result.ok,"legal 0.55m road cap reaches east wall")
	_check(city.house_entrances("h1").size() > entrances_before.size(),"east side door derived from real road")
	masks = {}
	meadow.rebuild(_members(city,dirty),dirty,masks)
	shore.rebuild(masks)
	_truth(city,meadow)
	var door := Vector2.ZERO
	for entrance: Dictionary in city.house_entrances("h1"):
		if entrance.side == Vector2i(1,0): door = entrance.clearance_at
	for block: Vector2i in [Vector2i(-2,-2),Vector2i(-2,-1),Vector2i(-1,-2),Vector2i(-1,-1)]:
		_check(meadow._local_obstacles(block).has(["door",door]),"cross-block active doorway included in grass dependencies %s" % str(block))
		_check(shore._local_obstacles(block).has(["door",door]),"cross-block active doorway included in shore dependencies %s" % str(block))
	_check(meadow.base_records != baseline,"new side road updates actual grass records")
	var retained := 0
	for block: Vector2i in ids:
		if meadow.blocks[block].get_instance_id() == ids[block]: retained += 1
	_check(retained >= 16,"local side road retains distant actual GPU blocks")
	_check(city.undo().ok,"side road undo")
	masks = {}
	meadow.rebuild(_members(city,dirty),dirty,masks)
	shore.rebuild(masks)
	_truth(city,meadow)
	_check(meadow.base_records == baseline and _shore_records(shore) == shore_baseline,"undo restores exact grass and shore layout")
	# Water changes invalidate cached dry-band and full stone-ellipse queries.
	var water_before: Array = city.waters.duplicate(true)
	city.waters.append({"id":"wfixture","points":[[-12.0,-8.0]],"width":2.0})
	masks = {}
	meadow.rebuild(_members(city,dirty),dirty,masks)
	shore.rebuild(masks)
	_truth(city,meadow)
	_check(_shore_records(shore) != shore_baseline,"authored water updates cached shore dry band")
	city.waters.assign(water_before)
	masks = {}
	meadow.rebuild(_members(city,dirty),dirty,masks)
	shore.rebuild(masks)
	_truth(city,meadow)
	_check(meadow.base_records == baseline and _shore_records(shore) == shore_baseline,"water removal restores exact dry candidates")
	var candidate_ids := {}
	for block: Vector2i in shore._layout_candidates: candidate_ids[block] = shore._layout_candidates[block]
	points.assign([Vector2(5.45,-10),Vector2(5.45,-8),Vector2(5.55,-8)])
	result = city.add_road(points)
	_check(result.ok,"legal dry riverbank approach reaches west side: " + str(result.message))
	masks = {}
	meadow.rebuild(_members(city,dirty),dirty,masks)
	shore.rebuild(masks)
	_truth(city,meadow)
	var entrances: Array = city.house_entrances("h2")
	var west := false
	for entrance: Dictionary in entrances:
		if entrance.side == Vector2i(-1,0): west = true
	_check(west,"riverbank west doorway active")
	_check(shore._layout_candidates == candidate_ids,"road edit retains deterministic shore random candidates")
	print("CITY_CREATION_NATURE_CACHE_REGRESSION %s: samples=%d, retained_blocks=%d, failures=%s" % ["PASS" if failures.is_empty() else "FAIL",samples_checked,retained,str(failures)])
	for failure: String in failures: push_error(failure)
	meadow.free()
	shore.free()
	quit(0 if failures.is_empty() else 1)
