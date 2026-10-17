extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
var failures: Array[String] = []
var checks := 0


func _initialize() -> void:
	var city := State.new()
	city.initialize()
	var initial := city.snapshot()
	var stroke := [_cell(2, 0), _cell(2, -1), _cell(2, 0), _cell(1, 0)]
	var preview := city.preview_add_cells("h1", stroke)
	_check(preview.ok and preview.added_count == 2 and preview.input_cells.size() == 3, "L stroke deduplicates returning brush and existing ground")
	_check(city.snapshot() == initial and city._undo.is_empty() and city._redo.is_empty() and not city.dirty, "preview is pure including identity counters and history")
	preview.origin[0] = 900
	preview.added_cells[0].x = 900
	_check(city.snapshot() == initial, "preview records do not alias authoritative state")
	preview = city.preview_add_cells("h1", stroke)
	var committed := city.add_cells("h1", stroke)
	_check(committed == preview, "preview predicts exact IDs and committed cells")
	_check(city.revision == 1 and city.dirty and city._undo.size() == 1, "multi-cell stroke is one revision and one history entry")
	var built := city.snapshot()
	committed.added_cells[0].x = 900
	_check(city.snapshot() == built, "returned committed records do not alias authoritative state")
	committed.input_cells[0].kind = "terrace"
	_check(city.snapshot() == built, "extension returned input cells do not alias authoritative state")
	committed.origin[0] = 900
	_check(city.snapshot() == built, "extension returned origin does not alias authoritative state")
	_check(city.undo().ok and city.houses == initial.houses, "one undo removes entire L stroke")
	_check(city.redo().ok and city.houses == built.houses, "one redo restores exact IDs sources and topology")
	var before_noop := city.snapshot()
	var depth := city._undo.size()
	_check(city.add_cells("h1", []).ok and city.add_cells("h1", stroke).added_count == 0, "empty and fully repeated strokes are no-ops")
	_check(city.snapshot() == before_noop and city._undo.size() == depth, "no-op consumes no IDs revisions dirty transitions or history")
	_check(not city.validate_add_cell("h1", 2, 0, 0).ok, "old single-cell API still rejects existing cell")
	_reject(city, "h1", [_cell(0, 0, 0, "terrace")], "existing different kind rejected")
	_reject(city, "h1", [_cell(3, -1), _cell(3, -1, 0, "terrace")], "conflicting duplicate kinds rejected")
	_reject(city, "h1", [_cell(4, -1)], "disconnected final foundation rejected")
	_reject(city, "h1", [_cell(2, -1, 2)], "unsupported final upper room rejected")
	_reject(city, "h1", [_cell(3, -1), _cell(3, 0)], "last overlapping cell refuses entire stroke")
	_reject(city, "h1", [_cell(0, 1)], "ground footprint respects road clearance")
	_reject(city, "h6", [_cell(-1, 0), _cell(-2, 0)], "entire footprint respects river")
	_reject(city, "h6", [_cell(1, 0), _cell(2, 0), _cell(3, 0), _cell(4, 0), _cell(5, 0)], "last out-of-bounds cell refuses entire stroke")
	_reject(city, "h1", [{"x":0.5,"z":0,"level":0,"kind":"room"}], "fractional local coordinates rejected")
	_reject(city, "missing", [_cell(0, 0)], "missing host rejected")
	var tower := city.add_cells("h1", [_cell(2, -1, 2), _cell(2, -1, 1)])
	_check(tower.ok and tower.added_count == 2, "final support allows top-first input in one brush")
	_check(city.add_cells("h1", [_cell(1, 0, 1, "terrace"), _cell(0, 0, 1)]).ok, "upper terrace and room share final support validation")
	var branch := State.new()
	branch.initialize()
	var a := branch.add_cells("h1", [_cell(2, 0), _cell(2, -1)])
	branch.undo()
	var unused := branch.snapshot()
	var redo_depth := branch._redo.size()
	_check(branch.add_cells("h1", [_cell(1, 0)]).added_count == 0 and branch.snapshot() == unused and branch._redo.size() == redo_depth, "no-op preserves redo branch")
	var b := branch.add_cells("h1", [_cell(0, 0, 1)])
	_check(b.ok and int(b.added_cells[0].id.substr(1)) > int(a.added_cells[-1].id.substr(1)) and branch._redo.is_empty(), "history fork never reuses issued cell identities")
	_new_house_contract()
	_supply_contract()
	if failures.is_empty():
		print("PASS city creation house stroke: %d checks" % checks)
		quit(0)
	else:
		for failure in failures:
			push_error(failure)
		quit(1)


func _new_house_contract() -> void:
	var city := State.new()
	city.initialize()
	var initial := city.snapshot()
	var origin := Vector2(-15, -10)
	var cells := [_cell(0, 0), _cell(1, 1), _cell(1, 0), _cell(1, 0, 1), _cell(1, 1)]
	var preview := city.preview_house_stroke(origin, cells)
	_check(preview.ok and preview.added_count == 4 and preview.house_id == "h7" and preview.origin == [-15.0,-10.0], "new house stroke predicts one stable host and all modules")
	_check(city.snapshot() == initial and city._undo.is_empty(), "new house preview is pure")
	var result := city.add_house_stroke(origin, cells)
	_check(result == preview and city.houses[-1].cells == preview.added_cells, "new host and complete stroke commit predicted identity")
	_check(city.houses[-1].cells[0].source == "new_house" and city.houses[-1].cells[-1].source == "player", "new host anchor distinguishes origin from brush extensions")
	_check(city._undo.size() == 1 and city.revision == 1, "new host plus modules is one transaction")
	var built := city.snapshot()
	result.added_cells[0].x = 900
	_check(city.snapshot() == built, "new house returned added cells do not alias authoritative state")
	result.input_cells[0].kind = "terrace"
	_check(city.snapshot() == built, "new house returned input cells do not alias authoritative state")
	result.origin[0] = 900
	_check(city.snapshot() == built, "new house returned origin does not alias authoritative state")
	_check(city.undo().ok and city.houses == initial.houses, "one undo removes host and all stroke modules")
	_check(city.redo().ok and city.houses == built.houses, "new stroke redo restores exact host and cells")
	var loaded := State.new()
	_check(loaded.restore(built).ok and loaded.houses == built.houses, "schema 1 snapshot restores whole stroke")
	var path := "user://house_stroke_contract_%d.json" % Time.get_ticks_usec()
	_check(city.save_city(path).ok and loaded.load_city(path).ok and loaded.houses == built.houses, "atomic disk save reloads new house brush")
	city.undo()
	var fork := city.add_house_stroke(origin, [_cell(0, 0), _cell(1, 0)])
	_check(fork.ok and fork.house_id != result.house_id and int(fork.added_cells[0].id.substr(1)) > int(result.added_cells[-1].id.substr(1)), "new house branch preserves house and cell high-water IDs")
	for invalid in [[], [_cell(1,0)], [_cell(0,0,0,"terrace")], [_cell(0,0),_cell(2,0)]]:
		var before := city.snapshot()
		var history := city._undo.size()
		_check(not city.add_house_stroke(Vector2(-15, 8), invalid).ok and city.snapshot() == before and city._undo.size() == history, "invalid new anchor or disconnected stroke writes nothing")
	var before_water := city.snapshot()
	_check(not city.add_house_stroke(Vector2(3, 0), [_cell(0, 0)]).ok and city.snapshot() == before_water, "new stroke river conflict is atomic")
	_check(not city.preview_house_stroke(Vector2(NAN, 0), [_cell(0, 0)]).ok, "nonfinite origin rejected")
	var pond_city := State.new()
	pond_city.initialize()
	_check(pond_city.add_water([Vector2(-15, 8)], 2.4, "pond").ok, "custom water fixture valid")
	var water_before := pond_city.snapshot()
	_check(not pond_city.add_house_stroke(Vector2(-15, 5), [_cell(0,0),_cell(0,1)]).ok and pond_city.snapshot() == water_before, "last module crossing custom pond refuses whole brush")
	var single := pond_city.add_house(Vector2(-15,-10))
	_check(single.ok and pond_city.validate_add_cell(single.house_id, 1, 0, 0).ok and pond_city.add_cell(single.house_id, 1, 0, 0).ok, "legacy single house and extension remain valid")


func _supply_contract() -> void:
	var city := State.new()
	city.initialize()
	_check(city.produce_bread("h2", 2), "initial two-room bakery produces actual supply")
	city.record_life_event("gatherings")
	var resident := {"home_id":"h1","position":[-8.0,-4.45],"yaw":0.25,"destination_id":"h2","dwell_id":"","service_pending":"","wait":0.0,"paused":false,"phase":1.7,"stops":["h1","h2"]}
	var worker := {"home_id":"h3","bakery_id":"h2","position":[-2.4,-3.45],"yaw":0.5,"phase":"baking","resume_phase":"baking","elapsed":2.0,"batches":1}
	_check(city.set_journey_checkpoint({"schema":1,"residents":[resident],"concert":{},"bakery_workers":[worker]}).ok, "nonempty resident and working baker checkpoint fixture")
	var supply := city.bakery_supply.duplicate(true)
	var progress := city.life_progress.duplicate()
	var checkpoint := city.journey_checkpoint.duplicate(true)
	_check(city.add_cells("h2", [_cell(0,0,2),_cell(0,0,3)]).ok and city.bakery_batch_size("h2") == 4, "whole supported tower updates production capacity")
	_check(city.bakery_supply == supply and city.life_progress == progress and city.journey_checkpoint == checkpoint, "construction preserves supply life progress and checkpoint")
	_check(city.produce_bread("h2", 4), "expanded bakery produces larger real batch")
	var current_supply := city.bakery_supply.duplicate(true)
	city.undo()
	_check(city.bakery_batch_size("h2") == 2 and city.bakery_supply == current_supply and city.life_progress == progress and city.journey_checkpoint == checkpoint, "stroke undo preserves occurred production life and journeys")
	city.redo()
	_check(city.bakery_batch_size("h2") == 4 and city.bakery_supply == current_supply, "stroke redo restores geometry without rolling back inventory")
	_check(city.save_city("user://house_stroke_journeys_%d.json" % Time.get_ticks_usec()).ok, "brush with retained actual journeys remains saveable")


func _reject(city: CityCreationState, id: String, cells: Array, label: String) -> void:
	var before := city.snapshot()
	var history := city._undo.size()
	var redo := city._redo.size()
	var result := city.preview_add_cells(id, cells)
	_check(not result.ok and result.has("added_cells") and result.has("input_cells"), label + " preview")
	_check(not city.add_cells(id, cells).ok and city.snapshot() == before and city._undo.size() == history and city._redo.size() == redo, label + " atomic")


func _cell(x: int, z: int, level: int = 0, kind: String = "room") -> Dictionary:
	return {"x":x,"z":z,"level":level,"kind":kind}


func _check(condition: bool, label: String) -> void:
	checks += 1
	if not condition:
		failures.append(label)
