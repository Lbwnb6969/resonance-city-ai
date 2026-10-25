extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
var checks := 0
var failures: Array[String] = []


func _initialize() -> void:
	var city := State.new()
	city.initialize()
	_check(city.workshop_supply.is_empty() and city.house_improvements.is_empty(), "new town has no invented crafts or installations")
	_check(not city.workshop_status("h2").open and city.workshop_status("h2").batch_size == 0 and not city.workshop_status("missing").open, "nonworkshops retain dormant shelf capacity but cannot open or produce a batch")
	_check(city.set_house_role("h2", "workshop").ok and city.workshop_batch_size("h2") == 2 and city.workshop_capacity("h2") == 8, "real ground and upper rooms provide workshop capacity")
	_check(city.set_house_role("h5", "workshop").ok and city.workshop_batch_size("h5") == 1, "terraces do not produce crafts")
	_check(not city.produce_craft("h1", 1) and not city.produce_craft("missing", 1) and not city.produce_craft("h2", 0) and not city.produce_craft("h2", -1) and not city.produce_craft("h2", 9), "invalid production has no output")
	_check(city.produce_craft("h2", 8) and city.workshop_supply.h2 == {"stock":8,"produced":8,"delivered":0,"transit":{}}, "production conserves exact stock")
	_check(not city.produce_craft("h2", 1), "full shelf stops producing")
	_check(city.set_workshop_open("h2", false).ok and not city.produce_craft("h2", 1), "paused workshop stops production")
	var paused := city.snapshot()
	_check(city.set_workshop_open("h2", false).ok and not city.set_workshop_open("h1", true).ok and city.snapshot() == paused, "same pause and invalid switch do not create state changes")
	_check(not city.reserve_craft("h2", "h2", "h1") and not city.reserve_craft("h2", "h1", "h2") and not city.reserve_craft("h2", "h1", "h5"), "reservation requires valid carrier home and residential or venue target")
	_check(city.reserve_craft("h2", "h1", "h3") and city.workshop_status("h2").stock == 7 and city.workshop_status("h2").transit == {"home_id":"h1","target_id":"h3"}, "existing crafts can be carried while workshop paused")
	_check(not city.reserve_craft("h2", "h1", "h4"), "one item per workshop can be in transit")
	var detached := city.workshop_status("h2")
	detached.transit.target_id = "h4"
	_check(city.workshop_status("h2").transit.target_id == "h3", "query does not expose ledger references")
	_check(not city.complete_craft("h2", "h3", "h3") and not city.complete_craft("h2", "h1", "h4"), "mismatched carrier or target cannot install")
	_check(city.complete_craft("h2", "h1", "h3") and city.improvement_level("h3") == 1 and city.workshop_status("h2").delivered == 1, "physical installation consumes cargo and raises exact target tier")
	_check(not city.complete_craft("h2", "h1", "h3") and not city.return_craft("h2"), "completed cargo cannot be installed or refunded twice")
	_check(city.reserve_craft("h2", "h1", "h4") and city.return_craft("h2") and city.workshop_status("h2").stock == 7, "return restores exactly one stored item")
	_check(city.reserve_craft("h2", "h1", "h3") and city.complete_craft("h2", "h1", "h3") and city.reserve_craft("h2", "h1", "h3") and city.complete_craft("h2", "h1", "h3"), "three separate deliveries install all tiers")
	_check(city.improvement_level("h3") == 3 and not city.reserve_craft("h2", "h1", "h3"), "finished house never consumes a fourth craft")
	_check(city.reserve_craft("h2", "h1", "h4"), "can serve venue")
	var saved := city.snapshot()
	var restored := State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(saved, "", true, true))).ok and restored.snapshot() == saved, "JSON roundtrip preserves transit and installed tiers exactly")
	_check(restored.workshop_supply.h2.stock is int and restored.house_improvements.h3 is int, "JSON counters restore integer type")
	_check(city.save_city("user://city_creation_workshop_state_contract.json").ok and restored.load_city("user://city_creation_workshop_state_contract.json").ok and restored.snapshot() == saved, "atomic file roundtrip preserves cargo")
	_test_invalid(restored, saved)
	_test_history()
	_test_reservations()
	_test_legacy()
	_test_workers()
	if failures.is_empty():
		print("CITY_CREATION_WORKSHOP_STATE PASS: %d checks; conserved stock/cargo/installations, dormant history, atomic persistence" % checks)
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)


func _test_history() -> void:
	var city := State.new()
	city.initialize()
	city.set_house_role("h2", "workshop")
	city.produce_craft("h2", 8)
	city.reserve_craft("h2", "h1", "h3")
	_check(city.set_house_role("h3", "bakery").ok and city.workshop_status("h2").stock == 8 and city.workshop_status("h2").transit.is_empty(), "target role change refunds undelivered cargo")
	_check(city.undo().ok and city.workshop_status("h2").transit.is_empty() and city.workshop_status("h2").stock == 8, "undo does not recreate refunded cargo")
	city.reserve_craft("h2", "h1", "h3")
	city.complete_craft("h2", "h1", "h3")
	_check(city.redo().ok and city.improvement_level("h3") == 1, "redo keeps real completed installation on dormant target role")
	city.undo()
	city.reserve_craft("h2", "h1", "h4")
	_check(city.set_house_role("h1", "venue").ok and city.workshop_status("h2").stock == 7 and city.workshop_status("h2").transit.is_empty(), "carrier losing home role returns cargo")
	city.undo()
	city.reserve_craft("h2", "h1", "h4")
	_check(city.remove_cell("h2", city.houses[1].cells[1].id).ok and city.workshop_capacity("h2") == 4 and city.return_craft("h2") and city.workshop_status("h2").stock == 7, "capacity shrink and return preserve overcapacity stock")
	_check(not city.produce_craft("h2", 1), "overcapacity shelf cannot produce")
	city.reserve_craft("h2", "h1", "h4")
	_check(city.remove_house("h2").ok and city.workshop_status("h2").stock == 7 and city.workshop_status("h2").transit.is_empty(), "deleted workshop refunds in-flight cargo into dormant ledger")
	_check(city.undo().ok and city.workshop_status("h2").stock == 7 and city.workshop_status("h2").delivered == 1, "same workshop identity resumes real ledger on undo")
	_check(city.remove_house("h3").ok and city.improvement_level("h3") == 1 and city.undo().ok and city.improvement_level("h3") == 1, "deleted and restored target retains real installed tier")
	var snapshot := city.snapshot()
	_check(State.new().restore(snapshot).ok, "dormant ledgers remain valid save data")
	city.reserve_craft("h2", "h1", "h4")
	var malformed_assignment := city.snapshot()
	for house in malformed_assignment.houses:
		if house.id == "h2": house.role = "residential"
	_check(city.restore(malformed_assignment).ok and city.workshop_status("h2").stock == 7 and city.workshop_status("h2").transit.is_empty(), "normal restore refunds structurally valid but obsolete assignment")


func _test_reservations() -> void:
	var city := State.new()
	city.initialize()
	city.set_house_role("h2", "workshop")
	city.set_house_role("h5", "workshop")
	city.produce_craft("h2", 8)
	city.produce_craft("h5", 4)
	for i in range(2):
		city.reserve_craft("h2", "h1", "h3")
		city.complete_craft("h2", "h1", "h3")
	_check(city.reserve_craft("h2", "h1", "h3") and not city.reserve_craft("h5", "h1", "h3"), "different workshops cannot overreserve final upgrade")
	_check(city.return_craft("h2") and city.reserve_craft("h5", "h1", "h3") and city.complete_craft("h5", "h1", "h3"), "released reservation permits another workshop delivery")
	_check(State.new().restore(city.snapshot()).ok, "multiworkshop aggregate installed equals delivered")


func _test_legacy() -> void:
	var city := State.new()
	city.initialize()
	var old := city.snapshot()
	old.erase("workshop_supply")
	old.erase("house_improvements")
	for house in old.houses: house.erase("workshop_open")
	_check(city.restore(old).ok and city.workshop_supply.is_empty() and city.house_improvements.is_empty(), "schema one without crafts remains compatible")
	city.set_house_role("h2", "workshop")
	_check(city.workshop_status("h2").open, "old house defaults to open workshop")
	city.produce_craft("h2", 1)
	city.initialize()
	_check(city.workshop_supply.is_empty() and city.house_improvements.is_empty(), "new town clears old craft progress")


func _test_invalid(city: CityCreationState, saved: Dictionary) -> void:
	var cases: Array[Dictionary] = []
	for field in ["workshop_supply", "house_improvements"]:
		for value in [null, [], "ledger"]:
			var bad := saved.duplicate(true)
			bad[field] = value
			cases.append(bad)
	for field in ["stock", "produced", "delivered"]:
		for value in [-1, 0.5, true, "1", null, INF, NAN]:
			var bad := saved.duplicate(true)
			bad.workshop_supply.h2[field] = value
			cases.append(bad)
	for value in [-1, 4, 1.5, null, true, "1"]:
		var bad := saved.duplicate(true)
		bad.house_improvements.h3 = value
		cases.append(bad)
	for id in ["h0", "h01", "h999", "c1", 1]:
		var bad := saved.duplicate(true)
		bad.workshop_supply[id] = {"stock":0,"produced":0,"delivered":0,"transit":{}}
		cases.append(bad)
		bad = saved.duplicate(true)
		bad.house_improvements[id] = 0
		cases.append(bad)
	for value in [[], null, {"home_id":"h1"}, {"home_id":"h1","target_id":"h999"}, {"home_id":"h1","target_id":"h2"}]:
		var bad := saved.duplicate(true)
		bad.workshop_supply.h2.transit = value
		cases.append(bad)
	var lost := saved.duplicate(true)
	lost.workshop_supply.h2.stock += 1
	cases.append(lost)
	var invented := saved.duplicate(true)
	invented.house_improvements.h3 -= 1
	cases.append(invented)
	var switch := saved.duplicate(true)
	switch.houses[1].workshop_open = 1
	cases.append(switch)
	for bad in cases:
		_check(not city.restore(bad).ok and city.snapshot() == saved, "bad craft artwork is atomically rejected")


func _test_workers() -> void:
	var city := State.new()
	city.initialize()
	city.set_house_role("h2", "workshop")
	var worker := {"home_id":"h1","workshop_id":"h2","target_id":"","phase":"crafting","resume_phase":"crafting","elapsed":3.25,"deliveries":0,"position":[-2.4,-3.48],"yaw":0.0}
	var checkpoint := {"schema":1,"residents":[],"concert":{},"workshop_workers":[worker]}
	_check(city.set_journey_checkpoint(checkpoint).ok, "crafting worker checkpoint is accepted")
	var saved := city.snapshot()
	var fresh := State.new()
	_check(fresh.restore(JSON.parse_string(JSON.stringify(saved, "", true, true))).ok and fresh.snapshot() == saved and fresh.journey_checkpoint.workshop_workers[0].deliveries is int, "worker checkpoint JSON roundtrip is exact")
	var cross_job := checkpoint.duplicate(true)
	cross_job.bakery_workers = [{"home_id":"h1","bakery_id":"h4","position":[-8.0,-4.45],"yaw":0.0,"phase":"baking","resume_phase":"baking","elapsed":1.0,"batches":0}]
	_check(not city.set_journey_checkpoint(cross_job).ok and city.snapshot() == saved, "same household cannot have simultaneous bakery and workshop jobs")
	var cross_artwork := saved.duplicate(true)
	cross_artwork.journey_checkpoint = cross_job
	_check(not city.restore(cross_artwork).ok and city.snapshot() == saved, "cross-job duplicated artisan artwork is atomically rejected")
	cross_job.bakery_workers[0].home_id = "h3"
	_check(city.set_journey_checkpoint(cross_job).ok, "different households can staff different jobs")
	city.set_journey_checkpoint(checkpoint)
	var cases: Array[Dictionary] = []
	for pair in [["home_id", "missing"],["workshop_id", "missing"],["target_id", "missing"],["target_id", "h3"],["phase", "baking"],["resume_phase", "paused"],["elapsed", -1],["elapsed", 8.01],["deliveries", 0.5],["deliveries", 3],["deliveries", true],["position", [100, 100]],["position", [0, NAN]],["yaw", INF]]:
		var bad := checkpoint.duplicate(true)
		bad.workshop_workers[0][pair[0]] = pair[1]
		cases.append(bad)
	var extra := checkpoint.duplicate(true)
	extra.workshop_workers[0].extra = true
	cases.append(extra)
	var duplicate := checkpoint.duplicate(true)
	duplicate.workshop_workers.append(worker.duplicate(true))
	cases.append(duplicate)
	for bad in cases:
		_check(not city.set_journey_checkpoint(bad).ok and city.snapshot() == saved, "bad worker checkpoint has zero writes")
		var bad_artwork := saved.duplicate(true)
		bad_artwork.journey_checkpoint = bad
		_check(not city.restore(bad_artwork).ok and city.snapshot() == saved, "bad worker artwork is atomically rejected")
	for phase in ["to_workshop", "crafting", "to_target", "installing", "returning", "to_home", "resting"]:
		var paused := checkpoint.duplicate(true)
		var person: Dictionary = paused.workshop_workers[0]
		person.phase = "paused"
		person.resume_phase = phase
		person.elapsed = 0.0
		person.target_id = "h3" if phase in ["to_target", "installing"] else ""
		person.deliveries = 3 if phase in ["to_home", "resting"] else 0
		_check(city.set_journey_checkpoint(paused).ok, "paused worker preserves each valid semantic stage")
	city.set_journey_checkpoint(checkpoint)
	_check(city.remove_house("h2").ok and city.journey_checkpoint.workshop_workers.is_empty(), "deleting workplace retires stale worker checkpoint")


func _check(condition: bool, label: String) -> void:
	checks += 1
	if not condition: failures.append(label)
