extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
var failures: Array[String] = []


func _initialize() -> void:
	var city := State.new()
	city.initialize()
	var initial := city.snapshot()
	_check(city.houses.size() == 6, "six initial houses")
	_check(city.plants.size() > 0 and city.plants[0].source == "seed", "initial deterministic grove plants")
	_check(city.houses[0].cells[0].source == "seed" and city.roads[0].source == "seed", "initial content carries seed origin")
	var initial_load := State.new()
	_check(initial_load.restore(initial).ok and initial_load.roads.size() == 6, "initial six houses and five branches satisfy geometry rules")
	_check(initial_load.plants.size() == city.plants.size(), "snapshot carries vegetation")
	var visible_plants := 0
	for plant in city.plants:
		if city.vegetation_visible(plant):
			visible_plants += 1
	_check(visible_plants == city.plants.size(), "initial plants are geometry compatible")
	_check(city.validate_add_cell("h1", 2, 0, 0, "room").ok and city.validate_add_cell("h3", 2, 0, 0, "room").ok, "initial shared houses leave expansion space")
	for ignored in range(100):
		city.snapshot()
	_check(city.snapshot() == initial, "no autonomous growth or random consumption")
	_check(city.validate_add_cell("h1", 0, 0, 1, "room").ok, "valid cell preview")
	_check(city.validate_add_house(Vector2(-15.0, 6.0)).ok and city.snapshot() == initial, "previews consume no IDs or state")
	_check(not city.validate_add_house(Vector2(3.0, 0.0)).ok, "water placement rejected")
	var result := city.add_cell("h1", 0, 0, 1, "room")
	_check(result.ok and city.dirty and city.revision == 1, "edit commits immediately")
	var expanded := city.snapshot()
	_check(city.houses[0].cells[-1].source == "player", "expanded cells carry player origin")
	_check(not city.add_cell("h1", 0, 0, 3, "room").ok, "unsupported upper floor rejected")
	_check(city.snapshot() == expanded, "failed edit is atomic")
	_check(city.undo().ok and city.dirty, "undo marks save dirty")
	_check(_geometry(city.snapshot()) == _geometry(initial), "undo restores geometry and stable identity")
	_check(city.redo().ok, "redo available")
	_check(_geometry(city.snapshot()) == _geometry(expanded), "redo restores seeds and identity")
	var roof_id: String = result.cell_id
	_check(city.add_cell("h1", 0, 0, 2, "room").ok, "supported second floor")
	var tower := city.snapshot()
	result = city.remove_cell("h1", roof_id)
	_check(result.ok and result.removed_count == 2, "support removal cascades in one transaction")
	city.undo()
	_check(_geometry(city.snapshot()) == _geometry(tower), "one undo restores entire cascade")
	_check(city.remove_cell("h6", city.houses[5].cells[0].id).ok and city.houses.size() == 5, "last module removes whole house")
	_check(city.undo().ok and city.houses[5].id == "h6", "last module undo restores house")
	_check(not city.add_cell("h6", 3, 0, 0, "room").ok, "disconnected foundation rejected")
	_check(city.add_house(Vector2(-15.0, 6.0)).ok, "independent new house")
	var new_id: String = city.houses[-1].id
	_check(new_id != "h6", "new house receives new identity")
	_check(city.houses[-1].cells[0].source == "new_house", "new-house origin remains distinct")
	var before_role := city.snapshot()
	_check(city.set_house_role(new_id, "bakery").ok and city.houses[-1].role == "bakery", "function change immediate")
	city.undo()
	_check(_geometry(city.snapshot()) == _geometry(before_role), "role change unified undo")
	city.redo()
	_check(city.set_house_name(new_id, "河岸面包房").ok, "name change immediate")
	_check(not city.set_house_role(new_id, "unknown").ok, "unknown function rejected")
	_check(city.add_road([Vector2(-15.0, 4.0), Vector2(-12.1, 4.5), Vector2(-11.0, 5.0)]).ok, "continuous road transaction")
	_check(city.roads[-1].source == "player", "roads carry player origin")
	_check(not city.add_road([Vector2(-8.0, -10.0), Vector2(-8.0, -6.0)]).ok, "road ending inside room rejected")
	_check(not city.add_road([Vector2(3.0, -10.0), Vector2(3.0, -8.0)]).ok, "road along river rejected")
	_check(not city.add_road([Vector2(-1.0, -10.0), Vector2(3.0, -10.0)]).ok, "partial bridge rejected")
	_check(city.add_road([Vector2(-1.0, -10.0), Vector2(8.0, -10.0)]).ok and city.roads[-1].bridge, "complete crossing becomes bridge")
	_check(city.add_road([Vector2(-8.0, -10.0), Vector2(-8.0, -6.9)]).ok, "road terminal may reach exterior doorway")
	var plant_before := city.snapshot()
	var planted := city.add_vegetation_stroke([Vector2(-14.0, 12.0), Vector2(-13.0, 12.8)], "shrub", 1.2)
	_check(planted.ok and planted.added_count > 0, "continuous vegetation stroke commits")
	var planted_snapshot := city.snapshot()
	_check(city.undo().ok and city.snapshot().plants.size() == plant_before.plants.size(), "vegetation stroke is one undo transaction")
	_check(city.redo().ok and city.snapshot().plants == planted_snapshot.plants, "vegetation redo preserves IDs and seeds")
	var erased := city.erase_vegetation_stroke([Vector2(-14.0, 12.0), Vector2(-13.0, 12.8)], 2.5)
	_check(erased.ok and erased.removed_count >= planted.added_count, "vegetation erase removes stroke cluster")
	_check(city.undo().ok and city.snapshot().plants == planted_snapshot.plants, "vegetation erase undo restores plants")
	var sparse_vegetation := State.new()
	sparse_vegetation.initialize()
	var dense_vegetation := State.new()
	dense_vegetation.initialize()
	var dense_points: Array[Vector2] = []
	for step in range(31):
		dense_points.append(Vector2(-14.0 + float(step) / 10.0, 12.5))
	var sparse_result := sparse_vegetation.add_vegetation_stroke([Vector2(-14.0, 12.5), Vector2(-11.0, 12.5)], "shrub", 1.0)
	var dense_result := dense_vegetation.add_vegetation_stroke(dense_points, "shrub", 1.0)
	_check(sparse_result.ok and dense_result.ok and sparse_result.seed == dense_result.seed and sparse_result.added_count == dense_result.added_count, "stroke event density does not affect vegetation density or deterministic seed")
	for index in range(sparse_vegetation.plants.size()):
		var a: Dictionary = sparse_vegetation.plants[index]
		var b: Dictionary = dense_vegetation.plants[index]
		_check(a.id == b.id and a.seed == b.seed and Vector2(a.position[0], a.position[1]).distance_to(Vector2(b.position[0], b.position[1])) < 0.001, "dense and sparse strokes produce the same plants")
	var obscured := State.new()
	obscured.initialize()
	var obscured_record: Dictionary = {}
	for plant in obscured.plants:
		var position := Vector2(plant.position[0], plant.position[1])
		if obscured.validate_add_house(position).ok:
			obscured_record = plant.duplicate(true)
			_check(obscured.add_house(position).ok and not obscured.vegetation_visible(plant), "construction derives plant visibility without deleting intent")
			break
	_check(not obscured_record.is_empty(), "grove includes buildable vegetation site")
	_check(obscured.undo().ok and obscured.vegetation_visible(obscured_record), "construction undo reveals original vegetation seed and ID")
	var folder := "res://验证记录/旧作品兼容_2026-10-22/state_%d" % Time.get_ticks_usec()
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(folder))
	var path := folder + "/city.json"
	var saved := city.snapshot()
	_check(city.save_city(path).ok and not city.dirty, "atomic save verified")
	var loaded := State.new()
	_check(loaded.load_city(path).ok, "save can load")
	_check(_geometry(loaded.snapshot()) == _geometry(saved), "save restores geometry IDs seeds and counters")
	_check(city.save_city(path).ok, "repeat save retains previous valid save in abandoned directory")
	var legacy := saved.duplicate(true)
	legacy.erase("high_watermark")
	for house in legacy.houses:
		house.erase("name")
		house.erase("role")
		for cell in house.cells:
			cell.erase("source")
	for road in legacy.roads:
		road.erase("source")
	legacy.erase("plants")
	legacy.erase("next_plant_id")
	var legacy_city := State.new()
	_check(legacy_city.restore(legacy).ok and legacy_city.houses[0].role == "residential" and not legacy_city.houses[0].name.is_empty(), "early schema defaults names and roles")
	_check(legacy_city.houses[-1].cells[0].source == "seed" and legacy_city.roads[-1].source == "seed", "early schema defaults missing origins to seed")
	_check(legacy_city.plants.size() > 0 and legacy_city.plants[0].source == "seed", "early schema migrates deterministic groves")
	_check(loaded.add_house(Vector2(-15.0, -6.0)).ok and loaded.houses[-1].id != new_id, "load preserves identity counter")
	var before_bad := loaded.snapshot()
	var corrupted := before_bad.duplicate(true)
	corrupted.schema = 999
	_check(not loaded.restore(corrupted).ok and loaded.snapshot() == before_bad, "unknown schema rejects without mutation")
	corrupted = before_bad.duplicate(true)
	corrupted.houses[0].cells[0].id = corrupted.houses[1].cells[0].id
	_check(not loaded.restore(corrupted).ok and loaded.snapshot() == before_bad, "duplicate identity rejects without mutation")
	corrupted = before_bad.duplicate(true)
	corrupted.houses[0].cells[0].source = "invented"
	_check(not loaded.restore(corrupted).ok and loaded.snapshot() == before_bad, "unknown origin rejects without mutation")
	corrupted = before_bad.duplicate(true)
	corrupted.plants[0].scale = -1.0
	_check(not loaded.restore(corrupted).ok and loaded.snapshot() == before_bad, "invalid vegetation scale rejects without mutation")
	corrupted = before_bad.duplicate(true)
	corrupted.plants[0].position = [3.0, 0.0]
	_check(not loaded.restore(corrupted).ok and loaded.snapshot() == before_bad, "restored vegetation rejects water position")
	corrupted = before_bad.duplicate(true)
	corrupted.plants[0].kind = "invented"
	_check(not loaded.restore(corrupted).ok and loaded.snapshot() == before_bad, "restored vegetation rejects unknown kind")
	for illegal_position in [[100.0, 0.0], [3.0, 0.0]]:
		corrupted = before_bad.duplicate(true)
		corrupted.houses[-1].origin = illegal_position
		_check(not loaded.restore(corrupted).ok and loaded.snapshot() == before_bad, "restored house rejects out-of-bounds or water atomically")
	corrupted = before_bad.duplicate(true)
	corrupted.roads[0].points = [[-8.0, -10.0], [-8.0, -6.0]]
	_check(not loaded.restore(corrupted).ok and loaded.snapshot() == before_bad, "restored road may not end inside room")
	corrupted = before_bad.duplicate(true)
	for road in corrupted.roads:
		if road.bridge:
			road.bridge = false
	_check(not loaded.restore(corrupted).ok and loaded.snapshot() == before_bad, "restored bridge metadata must match geometry")
	var bad_file := FileAccess.open(path + ".bad", FileAccess.WRITE)
	bad_file.store_string("{broken")
	bad_file.close()
	_check(not loaded.load_city(path + ".bad").ok and loaded.snapshot() == before_bad, "corrupt file retains current city")
	# One history-fork regression: published identity survives undo/save, while
	# redo restores the same intent and a new branch receives fresh identity.
	var branch := State.new()
	branch.initialize()
	var first_house := branch.add_house(Vector2(-15.0, 6.0))
	branch.undo()
	var after_undo := branch.snapshot()
	_check(branch.save_city(path + ".branch").ok, "persist high watermark with undone identity")
	var restored_branch := State.new()
	_check(restored_branch.load_city(path + ".branch").ok and restored_branch.snapshot().high_watermark == after_undo.high_watermark, "load allocator high watermark after undo")
	var second_house := restored_branch.add_house(Vector2(-15.0, -6.0))
	_check(first_house.ok and second_house.ok and first_house.house_id != second_house.house_id, "new history branch cannot reuse published house ID")
	var first_cell := branch.add_cell("h1", 0, 0, 1, "room")
	branch.undo()
	branch.redo()
	_check(first_cell.ok and branch.houses[0].cells[-1].id == first_cell.cell_id, "redo retains original published cell ID")
	var planted_branch := branch.add_vegetation_stroke([Vector2(-14.0, 12.0)], "shrub", 0.7)
	branch.undo()
	var new_plant_branch := branch.add_vegetation_stroke([Vector2(-13.0, 13.0)], "shrub", 0.7)
	_check(planted_branch.ok and new_plant_branch.ok and planted_branch.plant_ids[0] != new_plant_branch.plant_ids[0], "new history branch cannot reuse published plant ID")
	_check(restored_branch.save_city(path + ".branch").ok, "persist allocator watermark")
	var persisted_branch := State.new()
	_check(persisted_branch.load_city(path + ".branch").ok and persisted_branch.snapshot().high_watermark == restored_branch.snapshot().high_watermark, "save load preserves issued identity high watermark")
	if failures.is_empty():
		print("CITY_CREATION_STATE PASS: immediate edits, support cascade, no idle growth, identity, undo/redo, atomic save, bad-save rejection")
		quit(0)
	else:
		for failure in failures:
			push_error(failure)
		quit(1)


func _geometry(data: Dictionary) -> Dictionary:
	var result := data.duplicate(true)
	result.erase("revision")
	result.erase("high_watermark")
	return result


func _check(condition: bool, label: String) -> void:
	if not condition:
		failures.append(label)
