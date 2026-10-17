extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
var failures: Array[String] = []
var checks := 0


func _initialize() -> void:
	var city := State.new()
	city.initialize()
	_check(city.districts.is_empty(), "initial city has no painted communities")
	var original := city.snapshot()
	var first := city.add_district([Vector2(-8, -6), Vector2(-8, 6)], 5.6, "warm")
	_check(first.ok and city.revision == 1 and city.districts.size() == 1, "one continuous stroke is one transaction")
	var first_id: String = first.get("district_id", "")
	_check(city.districts[0].name == "暖声街坊1", "new name follows style and stable number")
	_check(city.district_members(first_id) == ["h1", "h3", "h5"], "capsule includes house origins and whole round caps")
	_check(city.district_at(Vector2(-8, -8.7)).id == first_id and city.district_at(Vector2(-8, -9)).is_empty(), "capsule end geometry is round")
	_check(city.snapshot().houses == original.houses and city.roads == original.roads and city.plants == original.plants and city.waters == original.waters, "drawing never edits houses, uses, roads or nature")
	var second := city.add_district([Vector2(-8, -6)], 3.2, "deep")
	var second_id: String = second.get("district_id", "")
	_check(second.ok and city.district_for_house("h1").id == second_id, "single point is circle and latest stroke wins overlap")
	_check(city.district_members(first_id) == ["h3", "h5"] and city.district_members(second_id) == ["h1"], "overlap never double assigns a house")
	var returned := city.district_at(Vector2(-8, -6))
	returned.name = "篡改"
	returned.points[0][0] = 0
	_check(city.districts[-1].name != "篡改" and city.districts[-1].points[0][0] == -8, "query does not expose mutable authoritative rows")
	_check(city.add_cell("h1", 2, 0, 0).ok and city.district_for_house("h1").id == second_id, "ground floor extension keeps origin based membership")
	_check(city.add_district([Vector2(-15, 3)], 5.6, "weave").ok, "paint empty land before building")
	var third_id: String = city.districts[-1].id
	var house := city.add_house(Vector2(-15, 3))
	_check(house.ok and city.district_for_house(house.get("house_id", "")).id == third_id, "new house joins prepainted community automatically")
	var before_music := city.snapshot()
	_check(city.set_district_name(first_id, " 河湾弦巷 ").ok and city.districts[0].name == "河湾弦巷", "rename trims boundaries")
	_check(city.set_district_style(first_id, "weave").ok and city.districts[0].style == "weave", "style changes musical intent")
	_check(city.houses == before_music.houses and city.roads == before_music.roads and city.plants == before_music.plants, "style and names leave construction unchanged")
	var unchanged := city.snapshot()
	_check(city.set_district_name(first_id, "河湾弦巷").ok and city.set_district_style(first_id, "weave").ok and city.snapshot() == unchanged, "unchanged edits consume no history")
	city.record_life_event("purchases")
	city.record_life_event("concerts")
	var life := city.life_progress.duplicate()
	_check(city.remove_district_at(Vector2(-8, -6)).ok and city.district_for_house("h1").id == first_id, "erase top community reveals earlier one")
	_check(city.undo().ok and city.district_for_house("h1").id == second_id and city.life_progress == life, "undo restores whole stroke and keeps completed life")
	_check(city.redo().ok and city.district_for_house("h1").id == first_id and city.life_progress == life, "redo does not rewind life")
	_check(city.district_members("missing").is_empty() and city.district_for_house("missing").is_empty(), "missing identities have no memberships")
	_check(city.add_district([Vector2(3, 0), Vector2(9, 3)], 10, "deep").ok, "community crosses river and disconnected banks freely")
	_check(city.district_for_house("h6").id == city.districts[-1].id and city.roads == before_music.roads, "right bank membership needs no road or bridge")
	var saved := city.snapshot()
	var restored := State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(saved, "", true, true))).ok and restored.snapshot() == saved, "full precision JSON round trip is exact")
	var path := "user://city_creation_district_contract.json"
	_check(city.save_city(path).ok and restored.load_city(path).ok and restored.snapshot() == saved, "atomic save and file read preserve authored communities")
	_test_invalid_restore(restored, saved)
	_test_invalid_edits(city)
	_test_history()
	var legacy := saved.duplicate(true)
	legacy.erase("districts")
	legacy.erase("next_district_id")
	legacy.high_watermark.erase("district")
	_check(restored.restore(legacy).ok and restored.districts.is_empty() and restored.snapshot().next_district_id == 1 and restored.snapshot().high_watermark.district == 0, "old schema one defaults communities empty")
	if failures.is_empty():
		print("CITY_CREATION_DISTRICTS PASS: %d checks; capsules, overlays, derived membership, atomic restore, stable history and life preservation" % checks)
		quit(0)
	else:
		for failure in failures:
			push_error(failure)
		quit(1)


func _test_invalid_restore(city: CityCreationState, saved: Dictionary) -> void:
	var cases: Array[Dictionary] = []
	for field in ["name", "style", "id", "points", "width"]:
		var bad := saved.duplicate(true)
		bad.districts[0].erase(field)
		cases.append({"label": "missing " + field, "data": bad})
	for value in ["", "  ", " trailing ", "换\n行", "tab\tname", "x".repeat(49), 7, null]:
		var bad := saved.duplicate(true)
		bad.districts[0].name = value
		cases.append({"label": "bad name %s" % str(value), "data": bad})
	for value in ["invented", "WARM", 1, null]:
		var bad := saved.duplicate(true)
		bad.districts[0].style = value
		cases.append({"label": "bad style %s" % str(value), "data": bad})
	for value in ["d0", "d01", "d-1", "d+1", "h1", 1, "d900"]:
		var bad := saved.duplicate(true)
		bad.districts[0].id = value
		cases.append({"label": "bad id %s" % str(value), "data": bad})
	for value in [-1, 3.1999999, 10.000001, INF, NAN, "5.6", null]:
		var bad := saved.duplicate(true)
		bad.districts[0].width = value
		cases.append({"label": "bad width %s" % str(value), "data": bad})
	for value in [[], [[-18.1, 0]], [[17, 0]], [[-8, 15]], [[-8, -6, 0]], [[-8, INF]], [["x", 0]], [[-8, -6], [-8, -6]], "polygon", null]:
		var bad := saved.duplicate(true)
		bad.districts[0].points = value
		cases.append({"label": "bad geometry %s" % str(value), "data": bad})
	var unknown := saved.duplicate(true)
	unknown.districts[0].unknown = true
	cases.append({"label": "unknown row field", "data": unknown})
	var duplicate := saved.duplicate(true)
	duplicate.districts.append(duplicate.districts[0].duplicate(true))
	cases.append({"label": "duplicate id", "data": duplicate})
	var invalid_rows := saved.duplicate(true)
	invalid_rows.districts = {}
	cases.append({"label": "non-array rows", "data": invalid_rows})
	for value in [0, 1.5, "5", INF]:
		var bad := saved.duplicate(true)
		bad.next_district_id = value
		cases.append({"label": "bad next counter %s" % str(value), "data": bad})
	for value in [-1, 0, 1.5, "5"]:
		var bad := saved.duplicate(true)
		bad.high_watermark.district = value
		cases.append({"label": "bad high water %s" % str(value), "data": bad})
	for entry in cases:
		_check(not city.restore(entry.data).ok and city.snapshot() == saved, "%s atomically rejected" % entry.label)


func _test_invalid_edits(city: CityCreationState) -> void:
	var before := city.snapshot()
	_check(not city.add_district([], 5.6).ok, "empty stroke rejected")
	_check(not city.add_district([Vector2(-19, 0)], 5.6).ok, "outside stroke rejected")
	_check(not city.add_district([Vector2(NAN, 0)], 5.6).ok, "nonfinite stroke rejected")
	_check(not city.add_district([Vector2(-5, 0), Vector2(-5, 0)]).ok, "duplicate stroke rejected")
	_check(not city.add_district([Vector2(-5, 0)], 10.0000001).ok, "width not rounded into valid range")
	_check(not city.add_district([Vector2(-5, 0)], 5.6, "invented").ok, "unknown style rejected")
	_check(not city.set_district_name(city.districts[0].id, "bad\nname").ok and not city.set_district_style(city.districts[0].id, "unknown").ok, "invalid setting rejected")
	_check(not city.remove_district("missing").ok and not city.remove_district_at(Vector2(16, -14)).ok, "missing erase rejected")
	_check(city.snapshot() == before, "all failed edits preserve all state and counters")


func _test_history() -> void:
	var city := State.new()
	city.initialize()
	var first := city.add_district([Vector2(-9.1234567, 5.234567)], 5.612345, "weave")
	var row: Dictionary = city.districts[0].duplicate(true)
	city.record_life_event("gatherings")
	var journey := {"schema": 1, "residents": [{"home_id": "h1", "position": [-8.0, -4.45], "yaw": 0.3, "wait": 2.1, "paused": false, "phase": 0.4, "destination_id": "h4", "dwell_id": "", "service_pending": "", "stops": ["h2", "h4"]}], "concert": {"phase": "gathering", "venue_id": "h4", "participants": ["h1"], "elapsed": 0.0, "duration": 24.0}}
	_check(city.set_journey_checkpoint(journey).ok, "active concert journey fixture accepted")
	_check(city.undo().ok and city.districts.is_empty() and city.life_progress.gatherings == 1, "single undo removes exactly one whole district")
	_check(city.journey_checkpoint == journey, "district undo preserves current walking and concert journey")
	_check(city.redo().ok and city.districts[0] == row, "redo preserves exact geometry, id and style")
	_check(city.journey_checkpoint == journey, "district redo preserves current walking and concert journey")
	city.undo()
	var fork := city.add_district([Vector2(-6, 9)], 5.6, "deep")
	_check(fork.ok and fork.district_id != first.district_id and fork.district_id == "d2", "history fork never reuses allocated district id")
	_check(not city.redo().ok, "branch clears redo")
	city.undo()
	var saved := city.snapshot()
	var restored := State.new()
	_check(restored.restore(saved).ok and restored.add_district([Vector2(-6, 9)]).district_id == "d3", "save after undo retains unpublished branch high water")


func _check(condition: bool, label: String) -> void:
	checks += 1
	if not condition:
		failures.append(label)
