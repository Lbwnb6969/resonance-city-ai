extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
var failures: Array[String] = []
var checks := 0


func _initialize() -> void:
	_test_preview_and_history()
	_test_empty_city_and_ids()
	_test_checkpoint_retirement()
	_test_history_checkpoint_retirement()
	if failures.is_empty():
		print("CITY_CREATION_HOUSE_REMOVAL PASS: %d checks; pure previews, support cascade, whole-house undo, empty city, issued IDs, supply conservation, selective journey retirement" % checks)
		quit(0)
	else:
		for failure in failures:
			push_error(failure)
		quit(1)


func _test_preview_and_history() -> void:
	var city := _city()
	_check(city.add_cell("h6", 0, 0, 1).ok, "upper room fixture")
	_check(city.add_cell("h6", 1, 0, 1, "terrace").ok, "cantilever terrace fixture")
	_check(city.add_cell("h6", 0, 0, 2).ok, "upper dependent fixture")
	var before := city.snapshot()
	var preview := city.preview_remove_cell("h6", _house(city, "h6").cells[0].id)
	_check(preview.ok and preview.whole_house and preview.removed_count == 4, "ground removal includes both upper floors and attached terrace")
	_check(city.snapshot() == before and city._undo.size() == 3, "preview changes neither truth nor history")
	preview.removed_cells[0].source = "changed_preview"
	_check(city.snapshot() == before, "preview rows are detached from state")
	preview = city.preview_remove_cell("h6", _house(city, "h6").cells[0].id)
	var actual := city.remove_cell("h6", _house(city, "h6").cells[0].id)
	_check(actual == preview and _house(city, "h6").is_empty(), "committed removal matches preview and retires house row")
	_check(city.revision == before.revision + 1 and city._undo.size() == 4, "cascade commits one transaction")
	_check(city.undo().ok and city.houses == before.houses, "one undo restores all stable IDs and shape")
	_check(city.redo().ok and _house(city, "h6").is_empty(), "redo retires same complete shape")
	_check(city.undo().ok, "restore fixture house")
	_check(city.add_cell("h1", 2, 0, 0).ok, "three-cell connected ground fixture")
	before = city.snapshot()
	var middle_id: String = _house(city, "h1").cells[1].id
	preview = city.preview_remove_cell("h1", middle_id)
	_check(not preview.ok and preview == city.remove_cell("h1", middle_id), "disconnected ground preview and commit reject identically")
	_check(city.snapshot() == before, "failed ground removal is zero write")
	_check(city.set_house_name("h2", "原麦小屋").ok and city.set_bakery_open("h2", false).ok, "named paused bakery fixture")
	_check(city.add_cell("h2", 0, 0, 2, "terrace").ok, "roof terrace fixture")
	before = city.snapshot()
	preview = city.preview_remove_house("h2")
	_check(preview.ok and preview.whole_house and preview.removed_cells == _house(city, "h2").cells, "whole house preview lists every original cell in stable order")
	_check(city.snapshot() == before, "whole house preview is pure")
	_check(city.remove_house("h2") == preview, "whole house shares commit preview")
	_check(city.roads == before.roads and city.waters == before.waters and city.plants == before.plants and city.districts == before.districts, "whole house does not delete independent creation intent")
	_check(city.undo().ok and city.houses == before.houses, "undo restores exact name palette purpose open seed IDs and cells")
	_check(city.redo().ok and _house(city, "h2").is_empty(), "whole house redo exact")
	before = city.snapshot()
	for request in [city.preview_remove_house("missing"), city.remove_house("missing"), city.preview_remove_cell("missing", "c1"), city.remove_cell("h1", "missing")]:
		_check(not request.ok and request.removed_count == 0 and not request.whole_house and request.removed_cells.is_empty(), "bad deletion reports no removed intent")
	_check(city.snapshot() == before, "bad requests preserve truth IDs revision and supply")


func _test_empty_city_and_ids() -> void:
	var city := _city()
	_check(city.add_district([Vector2(-8, -6)], 5.6, "deep").ok, "district fixture")
	_check(city.produce_bread("h2", 4) and city.serve_bread("h2"), "real stock and sale fixture")
	city.record_life_event("gatherings")
	city.record_life_event("concerts")
	var before := city.snapshot()
	var issued_ids: Array[String] = []
	for house in city.houses.duplicate(true):
		issued_ids.append(house.id)
		_check(city.remove_house(house.id).ok, "all houses can be removed")
	_check(city.houses.is_empty() and city.bakery_supply == before.bakery_supply and city.life_progress == before.life_progress, "empty town keeps earned supply ledger and completed life events")
	_check(city.roads == before.roads and city.plants == before.plants and city.districts == before.districts, "empty town retains roads vegetation and district")
	var path := "user://house_removal_empty_%d.json" % Time.get_ticks_usec()
	_check(city.save_city(path).ok, "empty town saves schema 1")
	var loaded := State.new()
	_check(loaded.load_city(path).ok and loaded.houses.is_empty() and loaded.bakery_supply == before.bakery_supply, "empty town reloads with dormant issued-ID ledger")
	var added := loaded.add_house(Vector2(-8, -6))
	_check(added.ok and not issued_ids.has(added.house_id), "new construction after empty-town reload gets fresh house ID")
	var first_id: String = added.house_id
	var first_cell: String = loaded.houses[0].cells[0].id
	_check(loaded.undo().ok and loaded.houses.is_empty(), "empty-town rebuild undo")
	_check(loaded.redo().ok and loaded.houses[0].id == first_id and loaded.houses[0].cells[0].id == first_cell, "redo retains rebuilt house and cell identity")
	_check(loaded.undo().ok, "fork fixture undo")
	added = loaded.add_house(Vector2(-8, -6))
	_check(added.ok and added.house_id != first_id and loaded.houses[0].cells[0].id != first_cell, "fork does not reuse any published identity")
	_check(city.undo().ok and _house(city, "h6").id == "h6", "undo empty-city last deletion")
	_check(city.life_progress == before.life_progress and city.bakery_supply == before.bakery_supply, "construction history never rewinds supply or completion")


func _test_checkpoint_retirement() -> void:
	var city := _city()
	_check(city.set_house_role("h5", "bakery").ok, "second bakery fixture")
	var first := _resident("h1", "h2", [-6.5, -3.0])
	first.dwell_id = "h2"
	first.service_pending = "bakery"
	first.wait = 2.0
	var second := _resident("h3", "h5", [-7.5, 2.0])
	var untouched := _resident("h6", "h6", [9.0, 3.0])
	untouched.paused = true
	untouched.wait = 1.25
	var checkpoint := {"schema":1,"residents":[first, second, untouched],"concert":{},"bakery_workers":[_worker("h1", "h2"),_worker("h3", "h5")]}
	_check(city.set_journey_checkpoint(checkpoint).ok, "ordinary and workers checkpoint fixture")
	_check(city.remove_house("h2").ok, "remove active worker workplace")
	_check(city.journey_checkpoint.bakery_workers == [checkpoint.bakery_workers[1]], "only removed workplace worker retires")
	_check(city.journey_checkpoint.residents[2] == untouched and city.journey_checkpoint.residents[1] == second, "unrelated ordinary positions phases dwell and waits preserved exactly")
	_check(city.journey_checkpoint.residents[0].position == first.position and city.journey_checkpoint.residents[0].destination_id == "h1" and city.journey_checkpoint.residents[0].service_pending == "" and city.journey_checkpoint.residents[0].wait == 0, "removed shop clears pending sale without moving resident")
	_check(city.save_city("user://house_removal_workers_%d.json" % Time.get_ticks_usec()).ok, "state-only workplace deletion remains saveable")
	first = _resident("h1", "h4", [-4.0, 1.0])
	first.daily_snapshot = _resident("h1", "h2", [-8.0, -4.45])
	first.service_pending = "concert"
	first.dwell_id = "h4"
	first.wait = 22.0
	second = _resident("h3", "h4", [-3.5, 1.0])
	second.daily_snapshot = _resident("h3", "h5", [-8.0, 1.55])
	second.service_pending = "concert"
	var concert := {"phase":"playing","venue_id":"h4","participants":["h1","h3"],"elapsed":2.0,"duration":24.0}
	checkpoint = {"schema":1,"residents":[first,second,untouched],"concert":concert,"bakery_workers":[_worker("h3", "h5")]}
	_check(city.set_journey_checkpoint(checkpoint).ok, "active concert checkpoint fixture")
	var progress := city.life_progress.duplicate()
	_check(city.remove_house("h4").ok and city.journey_checkpoint.concert.is_empty(), "removed venue cancels only active concert")
	for index in range(2):
		var resumed: Dictionary = city.journey_checkpoint.residents[index]
		_check(resumed.position == checkpoint.residents[index].position and not resumed.has("daily_snapshot") and resumed.service_pending == "" and resumed.wait == 0, "canceled audience keeps actual position and clears stale completion")
	_check(city.journey_checkpoint.residents[1].destination_id == "h5", "canceled audience restores surviving daily target")
	_check(city.journey_checkpoint.residents[0].destination_id == "h1", "deleted daily target falls back to actual home")
	_check(city.journey_checkpoint.residents[2] == untouched and city.journey_checkpoint.bakery_workers == checkpoint.bakery_workers and city.life_progress == progress, "canceled show preserves unrelated journeys workers and event counts")
	_check(city.save_city("user://house_removal_concert_%d.json" % Time.get_ticks_usec()).ok, "state-only concert cancellation saves")
	city = _city()
	first.daily_snapshot.destination_id = "h2"
	_check(city.set_journey_checkpoint({"schema":1,"residents":[first,second,untouched],"concert":concert,"bakery_workers":[_worker("h1", "h2")]}).ok, "concert participant home fixture")
	_check(city.remove_house("h1").ok and city.journey_checkpoint.residents.size() == 2 and city.journey_checkpoint.bakery_workers.is_empty() and city.journey_checkpoint.concert.is_empty(), "removed audience home retires its resident worker and cancels show")
	_check(city.journey_checkpoint.residents[0].position == second.position, "remaining audience retains current world position")


func _test_history_checkpoint_retirement() -> void:
	var city := _city()
	var created := city.add_house(Vector2(-15, 6))
	_check(created.ok, "new resident history fixture")
	var new_home: String = created.house_id
	var unchanged := _resident("h3", "h5", [-7.0, 2.0])
	_check(city.set_journey_checkpoint({"schema":1,"residents":[_resident(new_home, "h2", [-14.0, 6.0]),unchanged],"concert":{},"bakery_workers":[_worker(new_home,"h2")]}).ok, "new-home worker checkpoint")
	_check(city.undo().ok and city.journey_checkpoint.residents == [unchanged] and city.journey_checkpoint.bakery_workers.is_empty(), "undo new house prunes newly invalid IDs while preserving other actual journeys")
	_check(city.save_city("user://house_removal_undo_%d.json" % Time.get_ticks_usec()).ok, "undo house creation with active worker remains saveable")
	_check(city.redo().ok and city.journey_checkpoint.residents == [unchanged], "redo shape does not rewind retired journey checkpoint")


func _resident(home: String, target: String, at: Array) -> Dictionary:
	return {"home_id":home,"position":at,"yaw":0.25,"destination_id":target,"dwell_id":"","service_pending":"","wait":0.0,"paused":false,"phase":1.7,"stops":[home,target]}


func _worker(home: String, bakery: String) -> Dictionary:
	return {"home_id":home,"bakery_id":bakery,"position":[-8.0,-3.0],"yaw":0.5,"phase":"baking","resume_phase":"baking","elapsed":2.0,"batches":1}


func _house(city: RefCounted, id: String) -> Dictionary:
	for house in city.houses:
		if house.id == id:
			return house
	return {}


func _city() -> CityCreationState:
	var city := State.new()
	city.initialize()
	return city


func _check(condition: bool, message: String) -> void:
	checks += 1
	if not condition:
		failures.append(message)
