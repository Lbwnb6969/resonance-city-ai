extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
var checks := 0
var failures: Array[String] = []


func _initialize() -> void:
	_check(State.DISTRICT_STYLES == ["warm", "deep", "weave", "market", "sylvan"], "five supported themes preserve original key order")
	for style: String in State.DISTRICT_STYLES:
		var city := State.new()
		city.initialize()
		var original := city.snapshot()
		var added := city.add_district([Vector2(-8, -6)], 5.6, style)
		_check(added.ok and city.districts[0].style == style, "theme is directly available without a construction gate: " + style)
		_check(city.houses == original.houses and city.roads == original.roads and city.plants == original.plants and city.waters == original.waters, "theme leaves roles and geometry intact: " + style)
		var saved := city.snapshot()
		var restored := State.new()
		_check(restored.restore(JSON.parse_string(JSON.stringify(saved, "", true, true))).ok and restored.snapshot() == saved, "old and new themes retain exact JSON roundtrip: " + style)
	_test_overlap_and_history()
	_test_old_defaults()
	_test_invalid()
	if failures.is_empty():
		print("CITY_CREATION_FIVE_STYLES PASS: %d checks; five legal themes, preserved membership, exact history, JSON/file persistence and invalid zero writes" % checks)
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)


func _test_overlap_and_history() -> void:
	var city := State.new()
	city.initialize()
	var first := city.add_district([Vector2(-8, -6), Vector2(-8, 6)], 5.6, "warm")
	var second := city.add_district([Vector2(-8, -6)], 3.2, "market")
	var first_id: String = first.district_id
	var second_id: String = second.district_id
	var prior_rows := city.districts.duplicate(true)
	var prior_members := [city.district_members(first_id), city.district_members(second_id)]
	_check(prior_members == [["h3", "h5"], ["h1"]], "new theme uses the unchanged last-painted overlap ownership")
	_check(city.districts[-1].name == "市集长街2", "market default name exposes the full Chinese theme")
	_check(city.set_district_style(second_id, "sylvan").ok, "market district switches to sylvan through existing edit")
	var sylvan_rows := city.districts.duplicate(true)
	_check([city.district_members(first_id), city.district_members(second_id)] == prior_members and city.district_for_house("h1").id == second_id, "theme switch preserves all overlapping memberships")
	_check(city.undo().ok and city.districts == prior_rows, "undo restores exact market row, geometry and identity")
	_check(city.redo().ok and city.districts == sylvan_rows, "redo restores exact sylvan row, geometry and identity")
	var unchanged := city.snapshot()
	_check(city.set_district_style(second_id, "sylvan").ok and city.snapshot() == unchanged, "selecting current new theme remains a zero-write edit")
	_check(city.add_district([Vector2(9, 3)], 5.6, "sylvan").ok and city.districts[-1].name == "林间静谧3", "sylvan can also be painted with its full Chinese default name")
	_check(city.set_district_style(first_id, "market").ok and city.district_members(first_id) == prior_members[0], "saved scene contains both new themes without changing existing members")
	var saved := city.snapshot()
	var loaded := State.new()
	var path := "user://city_creation_five_styles_contract.json"
	_check(city.save_city(path).ok and loaded.load_city(path).ok and loaded.snapshot() == saved, "both new keys save and load through the existing atomic file format")


func _test_old_defaults() -> void:
	var city := State.new()
	city.initialize()
	_check(city.add_district([Vector2(-8, -6)]).ok and city.districts[0].style == "warm" and city.districts[0].name == "暖声街坊1", "omitted style retains original warm key and name")
	var old := city.snapshot()
	old.erase("districts")
	old.erase("next_district_id")
	old.high_watermark.erase("district")
	var restored := State.new()
	_check(restored.restore(old).ok and restored.districts.is_empty(), "old city without district records still loads unchanged")
	_check(restored.add_district([Vector2(-8, -6)]).ok and restored.districts[0].style == "warm", "old city still starts new districts with warm default")


func _test_invalid() -> void:
	var city := State.new()
	city.initialize()
	var district := city.add_district([Vector2(-8, -6)], 5.6, "market")
	var saved := city.snapshot()
	for style: String in ["unknown", "MARKET", "Sylvan", ""]:
		_check(not city.set_district_style(district.district_id, style).ok and not city.add_district([Vector2(9, 3)], 5.6, style).ok and city.snapshot() == saved, "invalid theme edit has zero writes: " + style)
	for value in ["unknown", "MARKET", "Sylvan", "", null, 1]:
		var bad := saved.duplicate(true)
		bad.districts[0].style = value
		_check(not city.restore(bad).ok and city.snapshot() == saved, "invalid stored theme is atomically rejected: " + str(value))


func _check(condition: bool, label: String) -> void:
	checks += 1
	if not condition: failures.append(label)
