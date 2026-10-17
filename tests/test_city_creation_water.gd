extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
var failures: Array[String] = []


func _initialize() -> void:
	var city := _empty_city()
	var initial := city.snapshot()
	var pond_points: Array[Vector2] = [Vector2(-7, 0)]
	_check(city.preview_water(pond_points, 4.0, "pond").ok and city.snapshot() == initial, "preview consumes no state or identities")
	_check(not city.preview_water([Vector2(-7, 0), Vector2(-4, 0)], 2.4, "channel").ok, "channel starts in existing water")
	_check(not city.preview_water([Vector2(-17.5, 0)], 2.4, "pond").ok, "complete shoreline footprint stays in bounds")
	var added := city.add_water(pond_points, 4.0, "pond")
	_check(added.ok and city.revision == 1 and city.waters.size() == 1, "pond commits one transaction")
	var record: Dictionary = city.waters[0].duplicate(true)
	_check(is_equal_approx(city.water_clearance(Vector2(-7, 0)), -2.0) and city.water_clearance(Vector2(-7, 3)) > 0, "signed capsule clearance describes pond")
	_check(city.street_height(Vector2(-7, 0)) > city.street_height(Vector2(-7, 4)), "street elevation follows editable water")
	_check(not city.validate_add_house(Vector2(-7, 0)).ok and not city.validate_add_house(Vector2(-4.8, 0)).ok, "new water and shoreline block whole house footprint")
	_check(city.undo().ok and city.waters.is_empty(), "one undo restores entire water stroke")
	_check(city.redo().ok and city.waters[0] == record, "redo restores same water identity and seed")
	_check(city.add_road([Vector2(-7, -4), Vector2(-7, 4)]).ok and city.roads[-1].bridge, "vertical crossing of new pond automatically becomes bridge")
	_check(not city.add_road([Vector2(-9, 0), Vector2(-7, 0)]).ok, "partial pond bridge rejected")
	_check(city.remove_water_at(Vector2(-7, 0)).ok and not city.roads[-1].bridge, "fill derives ground road metadata")
	_check(city.undo().ok and city.waters[0] == record and city.roads[-1].bridge, "fill undo restores water and bridge atomically")
	var saved := city.snapshot()
	var restored := State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(saved))).ok and restored.waters == city.waters, "water round trip survives JSON numbers")
	city.undo()
	city.undo()
	_check(city.waters.is_empty(), "undo both bridge and pond")
	var branch := city.add_water([Vector2(-9, 4)], 2.4, "pond")
	_check(branch.ok and branch.water_id != added.water_id, "history fork never reuses published water ID")
	var fresh := _empty_city()
	var river_start := Vector2(State.river_x(-10), -10)
	_check(fresh.add_water([river_start, Vector2(-4, -10)], 2.4, "channel").ok, "continuous channel draws from base river onto land")
	_check(fresh.add_road([Vector2(-2, -13), Vector2(-2, -7)]).ok and fresh.roads[-1].bridge, "new horizontal canal supports a vertical bridge")
	_check(not fresh.add_road([Vector2(-5, -10), Vector2(0, -10)]).ok, "longitudinal canal and disconnected bridge rejected")
	_check(fresh.add_road([Vector2(-1, 10), Vector2(8, 10)]).ok and fresh.roads[-1].bridge, "original river horizontal bridge remains compatible")
	_check(not fresh.add_road([Vector2(3, 8), Vector2(3, 12)]).ok, "original river longitudinal road still rejected")
	var multi := _empty_city()
	_check(multi.add_water([Vector2(-7, -4)], 2.4, "pond").ok and multi.add_water([Vector2(-7, 4)], 2.4, "pond").ok, "two independent ponds")
	_check(multi.add_road([Vector2(-7, -8), Vector2(-7, 8)]).ok and multi.roads[-1].bridge, "one road can cross several independent waters")
	var occupied := State.new()
	occupied.initialize()
	var before := occupied.snapshot()
	var conflict := occupied.preview_water([Vector2(-8, -6)], 2.4, "pond")
	_check(not conflict.ok and not conflict.conflicts.is_empty() and conflict.conflicts[0].kind == "house" and conflict.conflicts[0].source == "seed", "house conflict identifies existing source")
	_check(not occupied.add_water([Vector2(-8, -6)], 2.4, "pond").ok and occupied.snapshot() == before, "water cannot silently replace houses")
	conflict = occupied.preview_water([Vector2(-11, 0)], 2.4, "pond")
	_check(not conflict.ok and not conflict.conflicts.is_empty() and conflict.conflicts[0].kind == "road", "road conflict explicitly identified")
	_check(not occupied.add_water([Vector2(-11, 0)], 2.4, "pond").ok and occupied.snapshot() == before, "water road conflict is zero write")
	var planted := _empty_city()
	_check(planted.add_vegetation_stroke([Vector2(-9, 9)], "shrub", 0.6).ok, "authored plants on dry land")
	var plant: Dictionary = planted.plants[0].duplicate(true)
	var plant_position := Vector2(plant.position[0], plant.position[1])
	_check(planted.vegetation_visible(plant), "plant initially visible")
	_check(planted.add_water([plant_position], 2.4, "pond").ok and not planted.vegetation_visible(plant) and planted.plants[0] == plant, "water hides plant while preserving authored intent")
	var hidden_restore := State.new()
	_check(hidden_restore.restore(planted.snapshot()).ok and not hidden_restore.vegetation_visible(plant), "hidden vegetation truth survives restore")
	_check(planted.undo().ok and planted.vegetation_visible(plant), "water undo reveals same plant")
	for field in ["width", "points", "source", "seed", "id"]:
		var bad := saved.duplicate(true)
		match field:
			"width": bad.waters[0].width = -2.0
			"points": bad.waters[0].points = [[-17.5, 0]]
			"source": bad.waters[0].source = "invented"
			"seed": bad.waters[0].seed = 0.5
			"id": bad.waters[0].id = "w0"
		_check(not restored.restore(bad).ok and restored.snapshot() == saved, "invalid water %s rejected atomically" % field)
	var flooded := occupied.snapshot()
	flooded.waters = [{"id": "w1", "kind": "pond", "points": [[-8.0, -6.0]], "width": 2.4, "seed": 1, "source": "player"}]
	flooded.next_water_id = 2
	flooded.high_watermark.water = 1
	_check(not occupied.restore(flooded).ok and occupied.snapshot() == before, "restore cannot bypass house water occupancy")
	var legacy := before.duplicate(true)
	legacy.erase("waters")
	legacy.erase("next_water_id")
	legacy.high_watermark.erase("water")
	_check(restored.restore(legacy).ok and restored.waters.is_empty(), "schema one without water defaults empty")
	if failures.is_empty():
		print("CITY_CREATION_WATER PASS: continuous masks, conflicts, history, restore, vegetation and multi-water bridges")
		quit(0)
	else:
		for failure in failures:
			push_error(failure)
		quit(1)


func _empty_city() -> CityCreationState:
	var city := State.new()
	city.initialize()
	city.houses.clear()
	city.roads.clear()
	city.plants.clear()
	return city


func _check(condition: bool, label: String) -> void:
	if not condition:
		failures.append(label)
