extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
var failures: Array[String] = []
var checks := 0


func _initialize() -> void:
	var city := State.new()
	city.initialize()
	_check(city.bakery_supply.is_empty(), "new town starts without invented stock")
	_check(city.bakery_capacity("h2") == 24 and city.bakery_batch_size("h2") == 5, "actual rooms provide capacity and near-water blessing adds one loaf per batch")
	_check(city.bakery_capacity("h1") == 0 and city.bakery_batch_size("missing") == 0, "non bakery and missing house have no production")
	_check(city.bakery_status("h2") == {"stock":0,"produced":0,"served":0,"gifted":0,"capacity":24,"batch_size":5,"open":true} and city.bakery_supply.is_empty(), "read only query never invents stock or gift rows")
	_check(not city.serve_bread("h2") and city.life_progress.purchases == 0 and not city.dirty, "empty bakery cannot complete purchase or dirty state")
	_check(not city.produce_bread("h2", 0) and not city.produce_bread("h2", -1) and not city.produce_bread("h2", 25), "nonpositive and overflow batches rejected")
	_check(not city.produce_bread("h1", 1) and not city.produce_bread("missing", 1), "wrong role cannot create bread")
	_check(city.produce_bread("h2", 24) and city.bakery_supply.h2 == {"stock":24,"produced":24,"served":0} and city.dirty and city.life_progress_dirty, "production records exact stock and output")
	_check(not city.produce_bread("h2", 1), "full inventory stops production")
	_check(city.serve_bread("h2") and city.bakery_supply.h2 == {"stock":23,"produced":24,"served":1} and city.life_progress.purchases == 1, "one successful sale atomically counts exactly one purchase")
	_check(city.set_bakery_open("h2", false).ok and not city.bakery_status("h2").open and not city.produce_bread("h2", 1), "player pause prevents production")
	_check(city.serve_bread("h2") and city.bakery_supply.h2.stock == 22 and city.life_progress.purchases == 2, "paused oven retains open counter sales")
	var paused_snapshot := city.snapshot()
	_check(city.set_bakery_open("h2", false).ok and city.snapshot() == paused_snapshot, "unchanged oven switch creates no history")
	_check(not city.set_bakery_open("h1", false).ok and not city.set_bakery_open("missing", true).ok and city.snapshot() == paused_snapshot, "non bakeries cannot change oven state")
	_check(city.undo().ok and city.bakery_status("h2").open and city.bakery_supply.h2.stock == 22 and city.redo().ok and not city.bakery_status("h2").open and city.bakery_supply.h2.stock == 22, "oven undo redo preserves sale history")
	_check(city.set_bakery_open("h2", true).ok and city.produce_bread("h2", 1), "player can resume producing after pause")
	var detached := city.bakery_status("h2")
	detached.stock = 999
	_check(city.bakery_supply.h2.stock == 23, "query mutation cannot change inventory")
	_check(city.set_house_role("h2", "residential").ok, "bakery can become home")
	var retained := city.bakery_supply.duplicate(true)
	_check(city.bakery_capacity("h2") == 0 and city.bakery_status("h2").stock == 23 and not city.produce_bread("h2", 1) and not city.serve_bread("h2") and city.bakery_supply == retained, "role change retains stock without using it")
	_check(city.undo().ok and city.bakery_capacity("h2") == 24 and city.bakery_supply == retained, "role undo preserves completed supply history")
	_check(city.serve_bread("h2") and city.redo().ok and city.bakery_supply.h2.stock == 22 and city.life_progress.purchases == 3, "redo cannot undo real sale")
	city.set_house_role("h2", "bakery")
	_check(city.remove_cell("h2", city.houses[1].cells[1].id).ok and city.bakery_capacity("h2") == 12 and city.bakery_status("h2").stock == 22, "capacity shrink preserves existing above capacity stock")
	_check(not city.produce_bread("h2", 1) and city.serve_bread("h2"), "overcapacity still serves while oven waits")
	_check(city.set_house_role("h5", "bakery").ok and city.bakery_capacity("h5") == 12 and city.bakery_batch_size("h5") == 2, "terrace never contributes production or capacity")
	_check(city.add_cell("h5", 0, 0, 1).ok and city.bakery_capacity("h5") == 24 and city.bakery_batch_size("h5") == 4, "room expansion increases real production capacity")
	var saved := city.snapshot()
	var restored := State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(saved, "", true, true))).ok and restored.snapshot() == saved, "JSON save round trip preserves inventory exactly")
	_check(restored.bakery_supply.h2.stock is int and restored.bakery_supply.h2.produced is int and restored.bakery_supply.h2.served is int, "JSON integer fields restored as integer types")
	_check(city.save_city("user://city_creation_bakery_state_contract.json").ok and restored.load_city("user://city_creation_bakery_state_contract.json").ok and restored.snapshot() == saved, "atomic file save and read preserves supply")
	_check(restored.serve_bread("h2") and restored.restore(saved).ok and restored.bakery_supply == saved.bakery_supply, "normal artwork restore replaces supply instead of preserving another artwork")
	_test_invalid_supply(restored, saved)
	_test_dormant_history()
	_test_workers()
	var legacy := saved.duplicate(true)
	legacy.erase("bakery_supply")
	for house in legacy.houses:
		house.erase("bakery_open")
	_check(restored.restore(legacy).ok and restored.bakery_supply.is_empty() and restored.bakery_status("h2").open, "old schema one migrates to empty supply and open oven")
	restored.produce_bread("h2", 1)
	restored.initialize()
	_check(restored.bakery_supply.is_empty() and restored.life_progress.purchases == 0, "fresh town resets inventory")
	if failures.is_empty():
		print("CITY_CREATION_BAKERY_STATE PASS: %d checks; real supply, guarded sales, retained history, atomic persistence and worker checkpoint validation" % checks)
		quit(0)
	else:
		for failure in failures:
			push_error(failure)
		quit(1)


func _test_invalid_supply(city: CityCreationState, saved: Dictionary) -> void:
	var cases: Array[Dictionary] = []
	for value in [[], "stock", null]:
		var bad := saved.duplicate(true)
		bad.bakery_supply = value
		cases.append({"label":"wrong supply structure", "data":bad})
	for key in ["h0", "h01", "h+1", "h-1", "h999", "c1", 1]:
		var bad := saved.duplicate(true)
		bad.bakery_supply[key] = {"stock":1,"produced":1,"served":0}
		cases.append({"label":"invalid or unissued identity %s" % str(key), "data":bad})
	for field in ["stock", "produced", "served"]:
		var absent := saved.duplicate(true)
		absent.bakery_supply.h2.erase(field)
		cases.append({"label":"missing field " + field,"data":absent})
		for value in [-1, 0.5, "1", true, null, INF, NAN]:
			var bad := saved.duplicate(true)
			bad.bakery_supply.h2[field] = value
			cases.append({"label":"invalid counter %s %s" % [field,str(value)],"data":bad})
	var unknown := saved.duplicate(true)
	unknown.bakery_supply.h2.extra = 1
	cases.append({"label":"unknown supply row field","data":unknown})
	var wrong_row := saved.duplicate(true)
	wrong_row.bakery_supply.h2 = []
	cases.append({"label":"wrong row structure","data":wrong_row})
	for row in [{"stock":1,"produced":0,"served":0},{"stock":0,"produced":1,"served":2},{"stock":0,"produced":2,"served":1}]:
		var bad := saved.duplicate(true)
		bad.bakery_supply.h2 = row
		cases.append({"label":"broken bread conservation","data":bad})
	for value in [0, 1, "true", null]:
		var bad := saved.duplicate(true)
		bad.houses[1].bakery_open = value
		cases.append({"label":"invalid oven switch","data":bad})
	for entry in cases:
		_check(not city.restore(entry.data).ok and city.snapshot() == saved, "%s atomically rejected" % entry.label)


func _test_dormant_history() -> void:
	var city := State.new()
	city.initialize()
	var built := city.add_house(Vector2(-15, 3))
	_check(built.ok, "new bakery history fixture creates house")
	var id: String = built.house_id
	_check(city.set_house_role(id, "bakery").ok and city.produce_bread(id, 3) and city.serve_bread(id), "new issued house accrues actual supply and sale")
	var supply := city.bakery_supply.duplicate(true)
	_check(city.undo().ok and city.undo().ok and city._house_index(id) < 0 and city.bakery_supply == supply, "undo house creation retains dormant supply ledger")
	_check(not city.produce_bread(id, 1) and not city.serve_bread(id) and city.bakery_status(id).stock == 2, "dormant house cannot produce or consume retained bread")
	var restored := State.new()
	var saved := city.snapshot()
	_check(restored.restore(JSON.parse_string(JSON.stringify(saved, "", true, true))).ok and restored.bakery_supply == supply, "dormant issued supply survives save restore")
	_check(city.redo().ok and city.redo().ok and city.bakery_capacity(id) == 12 and city.bakery_supply == supply and city.serve_bread(id) and city.life_progress.purchases == 2, "same ID redo restores usable retained stock without duplicate purchase")


func _test_workers() -> void:
	var city := State.new()
	city.initialize()
	var worker := {"home_id":"h1","bakery_id":"h2","position":[-8.0,-4.45],"yaw":0.2,"phase":"baking","resume_phase":"baking","elapsed":2.4,"batches":1}
	var doorstep: Dictionary = worker.duplicate(true)
	doorstep.position = [0,15.55]
	_check(city.set_journey_checkpoint({"schema":1,"residents":[],"concert":{},"bakery_workers":[doorstep]}).ok,"worker doorsteps share resident two-metre positional margin; production restores actual routes separately")
	var checkpoint := {"schema":1,"residents":[],"concert":{},"bakery_workers":[worker]}
	_check(city.set_journey_checkpoint(checkpoint).ok, "valid bakery worker checkpoint accepted")
	var saved := city.snapshot()
	var restored := State.new()
	var worker_restore := restored.restore(JSON.parse_string(JSON.stringify(saved, "", true, true)))
	_check(worker_restore.ok and restored.journey_checkpoint == checkpoint, "worker progress survives artwork load")
	var cases: Array[Dictionary] = []
	for field in worker:
		var bad := checkpoint.duplicate(true)
		bad.bakery_workers[0].erase(field)
		cases.append(bad)
	for patch in [{"home_id":"h999"},{"bakery_id":"h999"},{"position":[State.WORLD_RECT.position.x-2.01,0]},{"position":[INF,0]},{"yaw":NAN},{"phase":"finished"},{"resume_phase":"paused"},{"resume_phase":"walking"},{"elapsed":-1},{"elapsed":6.1},{"elapsed":"2"},{"batches":-1},{"batches":4},{"batches":1.5},{"extra":true},{"phase":"walking","resume_phase":"walking","elapsed":0.1},{"phase":"resting","resume_phase":"resting","elapsed":4.1},{"phase":"paused","resume_phase":"returning","elapsed":1}]:
		var bad := checkpoint.duplicate(true)
		bad.bakery_workers[0].merge(patch, true)
		cases.append(bad)
	var duplicate := checkpoint.duplicate(true)
	duplicate.bakery_workers.append(worker.duplicate(true))
	cases.append(duplicate)
	var repeated_bakery := checkpoint.duplicate(true)
	var second := worker.duplicate(true)
	second.home_id = "h3"
	repeated_bakery.bakery_workers.append(second)
	cases.append(repeated_bakery)
	var wrong_structure := checkpoint.duplicate(true)
	wrong_structure.bakery_workers = {}
	cases.append(wrong_structure)
	for bad in cases:
		_check(not city.set_journey_checkpoint(bad).ok and city.snapshot() == saved, "invalid worker checkpoint rejected without changes")
		var artwork := saved.duplicate(true)
		artwork.journey_checkpoint = bad
		_check(not city.restore(artwork).ok and city.snapshot() == saved, "invalid worker artwork rejected atomically")
	var paused := checkpoint.duplicate(true)
	paused.bakery_workers[0].phase = "paused"
	_check(city.set_journey_checkpoint(paused).ok, "paused worker preserves valid baking progress")
	var old := checkpoint.duplicate(true)
	old.erase("bakery_workers")
	_check(city.set_journey_checkpoint(old).ok, "old resident checkpoint remains compatible")


func _check(condition: bool, label: String) -> void:
	checks += 1
	if not condition:
		failures.append(label)
