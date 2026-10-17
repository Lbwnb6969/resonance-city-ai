extends SceneTree
## CPU State contracts only: public ledger APIs represent completed activity.
## This fixture does not instantiate Life or claim real walking/concert timing.
const State = preload("res://scripts/world/city_creation_state.gd")
const Growth = preload("res://scripts/world/city_creation_growth.gd")
const OUTPUT := "res://验证记录/河湾手记_2026-10-16/state.json"
const EXAMPLE := "res://数据/创作河湾样例.json"
var checks := 0
var failures: Array[String] = []
var evidence: Dictionary = {}


func _initialize() -> void: _run.call_deferred()


func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok:
		failures.append(label)
		push_error(label)


func _run() -> void:
	var example_bytes := FileAccess.get_file_as_bytes(EXAMPLE)
	var city := State.new()
	city.initialize()
	var initial := city.snapshot()
	_check(initial.schema==1 and not initial.has("growth_memories") and city.growth_memories.is_empty(), "legacy city starts with no journal field or invented memories")
	_check(city.houses[4].palette==4 and city.houses[5].palette==5 and State.new().restore(initial).ok, "legacy palette numbers outside manual picker range keep their original values")
	var rows := Growth.report(city)
	_check(rows.size()==3 and not rows[0].ready and not rows[1].ready and not rows[2].ready, "three transparent chapters start incomplete")
	_check(city.snapshot()==initial and city.refresh_growth().is_empty() and city.snapshot()==initial, "report and incomplete refresh are zero-write operations")
	_check(not city.set_house_finish("h1","dawn").ok and not city.set_house_finish("h1","unknown").ok and city.snapshot()==initial, "locked and unknown finishes never change a house")
	var bridge: Array[Vector2] = [Vector2(-1,-10), Vector2(8,-10)]
	_check(city.add_road(bridge).ok and city.roads[-1].bridge, "actual validated road crosses water as a bridge")
	_check(Growth.report(city)[0].goals[0].value==1, "journal reads the existing real bridge")
	var bridge_id := str(city.roads[-1].id)
	_check(city.remove_road(bridge_id).ok and Growth.report(city)[0].goals[0].value==0 and city.undo().ok, "removed bridge stops counting and undo restores its true structure")
	_check(city.produce_bread("h2",1) and city.record_concert_completion("h4")==60.0, "public State APIs record conserved bread and a completed concert")
	var revision := city.revision
	var history := [city._undo.size(),city._redo.size()]
	_check(city.refresh_growth()==["dawn"] and city.growth_memories==["dawn"], "first ready chapter records its memory once")
	_check(city.revision==revision and [city._undo.size(),city._redo.size()]==history and city.dirty and city.life_progress_dirty, "earning marks save progress without construction history or revision")
	var earned := city.snapshot()
	_check(earned.schema==3 and city.refresh_growth().is_empty() and city.snapshot()==earned, "earned journal uses schema three and repeated refresh is idempotent")
	_check(city.set_house_finish("h1","dawn").ok and city.houses[0].finish=="dawn" and city.houses[0].palette==0, "earned finish keeps the old numeric palette underneath")
	var colored := city.houses[0].duplicate(true)
	var life := city.life_progress.duplicate()
	_check(city.undo().ok and not city.houses[0].has("finish") and city.growth_memories==["dawn"], "undo removes cosmetic choice but never earned memory")
	_check(city.redo().ok and city.houses[0]==colored and city.life_progress==life, "redo restores exact cosmetic choice without changing activity")
	_check(city.set_house_palette("h1",3).ok and not city.houses[0].has("finish") and city.houses[0].palette==3, "manual palette clears finish through its own reversible transaction")
	_check(city.undo().ok and city.houses[0]==colored and city.redo().ok, "manual palette reset undo and redo are exact")
	var before_bad := city.snapshot()
	for palette in [-1,4,100]:
		_check(not city.set_house_palette("h1",palette).ok and city.snapshot()==before_bad, "manual palette rejects values outside zero to three")
	_check(not city.set_house_palette("missing",0).ok and not city.set_house_finish("missing","dawn").ok and city.snapshot()==before_bad, "missing house cosmetic edits are zero-write failures")
	_prepare_tide(city)
	_check(city.refresh_growth()==["tide"] and city.growth_memories==["dawn","tide"], "second chapter follows actual structures and conserved service ledgers")
	_check(city.remove_road(bridge_id).ok and city.refresh_growth().is_empty() and city.growth_memories==["dawn","tide"] and city.undo().ok, "earned memories survive later removal of an earlier goal")
	_prepare_festival(city)
	_check(city.refresh_growth()==["festival"] and city.growth_memories==["dawn","tide","festival"], "third chapter follows actual population, derived tower and used gift")
	_check(city.set_house_finish("h6","festival").ok and city.set_house_finish("h5","tide").ok, "each earned reward can dress an existing house")
	var saved := city.snapshot()
	var restored := State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and restored.snapshot()==saved, "full precision JSON preserves journal, finishes and every authored identity")
	_check(restored.growth_memories.get_typed_builtin()==TYPE_STRING, "restored memories retain their typed string array")
	_test_invalid(restored,saved)
	var legacy := State.new()
	_check(legacy.restore(JSON.parse_string(JSON.stringify(initial,"",true,true))).ok and legacy.growth_memories.is_empty() and legacy.snapshot()==initial, "JSON numeric schema one roundtrip remains exact")
	var sculpted := State.new()
	sculpted.initialize()
	var terrain_points: Array[Vector2] = [Vector2(12,-9)]
	_check(sculpted.add_terrain_stroke(terrain_points,"raise",2.0,0.65).ok, "real sculpted city supplies the unchanged terrain format")
	var terrain_saved := sculpted.snapshot()
	var terrain_loaded := State.new()
	_check(terrain_saved.schema==2 and terrain_loaded.restore(JSON.parse_string(JSON.stringify(terrain_saved,"",true,true))).ok and terrain_loaded.snapshot()==terrain_saved, "JSON numeric schema two terrain roundtrip remains exact")
	var example := State.new()
	_check(example.restore(JSON.parse_string(example_bytes.get_string_from_utf8())).ok, "existing sculpted example remains loadable")
	_check(FileAccess.get_file_as_bytes(EXAMPLE)==example_bytes, "example original bytes stay untouched")
	city.initialize()
	_check(city.growth_memories.is_empty() and not city.snapshot().has("growth_memories"), "new riverbay clears earlier earned memories")
	evidence.final_chapters = Growth.report(restored)
	evidence.scope = "State settlement API and CPU geometry only; no claim of real Life activity or GPU reward visuals"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT.get_base_dir()))
	var result := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"evidence":evidence}
	var file := FileAccess.open(OUTPUT,FileAccess.WRITE)
	file.store_string(JSON.stringify(result,"\t",true,true))
	file.close()
	print("CREATION_GROWTH_STATE ",JSON.stringify(result))
	quit(0 if failures.is_empty() else 1)


func _prepare_tide(city: CityCreationState) -> void:
	for at: Vector2 in [Vector2(-15,-12),Vector2(-12,-12),Vector2(-9,-12)]:
		_check(city.add_house(at).ok,"real construction supplies a chapter two household")
	_check(city.set_house_role("h5","garden_cafe").ok and city.produce_bread("h2",2), "real cafe role and bread inventory exist")
	_check(city.serve_bread("h2","h1") and city.serve_bread("h2","h6") and city.complete_tea("h5",["h1","h6"]), "State tea completion consumes genuine earned bread credits")
	_check(city.set_house_role("h3","workshop").ok and city.produce_craft("h3",1) and city.reserve_craft("h3","h1","h4") and city.complete_craft("h3","h1","h4"), "wood delivery uses conserved production, reservation and installation")
	_check(city.add_district([Vector2(-8,-6)],3.2,"warm").ok and city.add_district([Vector2(9,3)],3.2,"deep").ok, "two different styles own actual member houses")
	_check(city.add_district([Vector2(14,-4)],3.2,"sylvan").ok and Growth.report(city)[1].goals[-1].value==2, "empty third style never counts as a living district")
	_check(city.add_district([Vector2(-8,-6)],3.2,"deep").ok and Growth.report(city)[1].goals[-1].value==1 and not Growth.report(city)[1].ready, "last-painted membership removes the now-empty earlier style")
	_check(city.undo().ok and Growth.report(city)[1].ready, "undo restores actual two-style chapter readiness")


func _prepare_festival(city: CityCreationState) -> void:
	_check(city.add_cell("h6",0,0,1).ok and city.add_cell("h6",0,0,2).ok, "actual supported third storey derives the tower goal")
	for z: float in [-12.0,-8.0,-4.0,0.0,4.0,8.0,12.0]:
		for x: float in [-15.0,-12.0,-9.0,-6.0,-3.0,0.0,9.0,12.0,15.0]:
			if city.houses.size()>=26: break
			city.add_house(Vector2(x,z))
		if city.houses.size()>=26: break
	_check(city.houses.size()==26,"twenty-six actual legal households exist rather than an invented counter")
	_check(city.produce_craft("h3",1) and city.reserve_craft("h3","h1","h4","festival") and city.complete_craft("h3","h1","h4") and city.record_concert_completion("h4")==90.0, "completed State performance consumes a real reserved festival gift")
	_check(Growth.report(city)[2].goals[-1].value==1,"chapter reads actual used commission count")


func _test_invalid(city: CityCreationState, saved: Dictionary) -> void:
	var cases: Array[Dictionary] = []
	for value in [null,"dawn",{},["tide"],["dawn","festival"],["dawn","dawn"],["dawn","tide","festival","unknown"],["unknown"],[1]]:
		var bad := saved.duplicate(true)
		bad.growth_memories = value
		cases.append(bad)
	for schema in [1,2]:
		var bad := saved.duplicate(true)
		bad.schema = schema
		cases.append(bad)
	for value in ["unknown","",true,1,null]:
		var bad := saved.duplicate(true)
		bad.houses[0].finish = value
		cases.append(bad)
	var locked := saved.duplicate(true)
	locked.growth_memories = ["dawn"]
	cases.append(locked)
	for bad in cases:
		_check(not city.restore(bad).ok and city.snapshot()==saved,"invalid journal or unearned finish is atomically rejected")
	var no_memories := State.new()
	no_memories.initialize()
	var old := no_memories.snapshot()
	old.growth_memories = []
	_check(not no_memories.restore(old).ok,"legacy schema carrying a new journal field is rejected instead of silently downgraded")
