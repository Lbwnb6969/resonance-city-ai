extends SceneTree
## Complete deterministic simulation of the published business sample, starting
## with empty ledgers. Fixed 0.1s updates accelerate time; they do not measure
## PCM playback or demonstrate real wall-clock audio/graphics synchronization.
const State = preload("res://scripts/world/city_creation_state.gd")
const Life = preload("res://scripts/world/city_creation_life.gd")
const Growth = preload("res://scripts/world/city_creation_growth.gd")
const OUT := "res://验证记录/成长引导_2026-10-16"
const SAMPLE := "res://数据/经营河湾样例.json"
const DELTA := 0.1
const MAX_SECONDS := 1200.0
var city: RefCounted
var life: Node3D
var failures: Array[String] = []
var simulated := 0.0
var steps := 0
var venue := ""
var highland := ""
var concert_events: Array[Dictionary] = []
var chapter_events: Array[String] = []
var milestones: Array[Dictionary] = []

func _initialize() -> void:
	_run.call_deferred()

func _check(ok: bool, label: String) -> bool:
	if not ok:
		failures.append(label)
		push_error(label)
	return ok

func _sum(ledger: Dictionary, field: String) -> int:
	var total := 0
	for row: Dictionary in ledger.values(): total += int(row.get(field,0))
	return total

func _fulfilled_home() -> String:
	for house: Dictionary in city.houses:
		var id := str(house.id)
		if str(house.role) != "residential": continue
		# Require actual tea history as well as tier 3: concert afterglow cannot
		# substitute for the natural procurement -> tea part of this check.
		var tea: Dictionary = city.cafe_credits.get(id,{})
		if int(tea.get("spent",0)) > 0 and int(city.improvement_level(id)) > 0 and int(city.house_harmony_tier(id)) == 3:
			return id
	return ""

func _daily_complete() -> bool:
	return _sum(city.bakery_supply,"produced") > 0 and int(city.life_progress.purchases) > 0 and int(city.life_progress.tea_parties) > 0 and _sum(city.workshop_supply,"delivered") > 0 and not _fulfilled_home().is_empty()

func _facts(stage: String) -> void:
	var facts := {"stage":stage,"simulated_seconds":snappedf(simulated,0.1),"bread":_sum(city.bakery_supply,"produced"),"purchases":int(city.life_progress.purchases),"tea_groups":int(city.life_progress.tea_parties),"craft_delivered":_sum(city.workshop_supply,"delivered"),"tier3_tea_home":_fulfilled_home(),"concerts":int(city.life_progress.concerts),"festival":city.festival_status(venue) if not venue.is_empty() else {},"chapters":city.growth_memories.duplicate()}
	milestones.append(facts)
	print(JSON.stringify(facts))

func _diagnose(stage: String) -> void:
	var bakeries := {}
	var workshops := {}
	var cafes := {}
	for house: Dictionary in city.houses:
		var id := str(house.id)
		match str(house.role):
			"bakery":
				var status: Dictionary = life.bakery_status(id)
				bakeries[id] = {"phase":status.worker_phase,"stock":status.stock,"worker":status.worker_home_id}
			"workshop":
				var status: Dictionary = life.workshop_status(id)
				workshops[id] = {"phase":status.worker_phase,"stock":status.stock,"worker":status.worker_home_id,"target":status.target_id,"transit":status.transit}
			"garden_cafe":
				var status: Dictionary = life.cafe_status(id)
				cafes[id] = {"phase":status.phase,"arrived":status.arrived,"invited":status.invited}
	print(JSON.stringify({"diagnosis":stage,"bakeries":bakeries,"workshops":workshops,"cafes":cafes,"concert":life.concert_status(),"connected_doors":life.connected_houses.size(),"residents":life.residents.size()}))

func _tick() -> void:
	life._process(DELTA)
	simulated += DELTA
	steps += 1
	if steps % 50 == 0:
		var earned: Array = city.refresh_growth()
		for id: String in earned: chapter_events.append(id)
	if steps % 200 == 0: await process_frame

func _wait_for(check: Callable, seconds: float, stage: String) -> bool:
	var deadline := minf(MAX_SECONDS,simulated+seconds)
	while simulated < deadline and not bool(check.call()): await _tick()
	var ok := bool(check.call())
	_facts(stage)
	if not _check(ok,"timed out: "+stage): _diagnose(stage)
	return ok

func _on_concert(event: String, id: String) -> void:
	concert_events.append({"event":event,"venue":id,"at":snappedf(simulated,0.1)})

func _perform(number: int, seconds: float) -> bool:
	var before := int(city.life_progress.concerts)
	var invited: Dictionary = life.invite_concert(venue)
	if not _check(bool(invited.ok),"manual invitation %d: %s" % [number,str(invited.message)]):
		_diagnose("invitation_%d" % number)
		return false
	var deadline := minf(MAX_SECONDS,simulated+seconds)
	var playing_seconds := 0.0
	while simulated < deadline and int(city.life_progress.concerts) == before:
		if str(life.concert_status().phase) == "playing": playing_seconds += DELTA
		await _tick()
	var done := int(city.life_progress.concerts) == before+1
	_check(done,"manual concert %d completes through real gathering and life updates" % number)
	_check(playing_seconds >= 23.9 and playing_seconds <= 24.2,"manual concert %d simulates the full 24-second playing phase" % number)
	print(JSON.stringify({"stage":"concert_%d" % number,"simulated_playing_seconds":snappedf(playing_seconds,0.1),"events":concert_events.duplicate()}))
	_facts("concert_%d_finished" % number)
	if not done: _diagnose("concert_%d" % number)
	return done

func _build_goals() -> bool:
	# All authored additions use exactly the public editing transactions.
	for house: Dictionary in city.houses:
		if str(house.role) == "venue":
			if venue.is_empty(): venue = str(house.id)
			var paused: Dictionary = city.set_auto_matinee(str(house.id),false)
			if not _check(bool(paused.ok),"pause automatic matinee through its public toggle"): return false
	var at := Vector2(-24,20)
	var brush: Array[Vector2] = [at]
	var raised: Dictionary = city.add_terrain_stroke(brush,"plateau",3.5,1.0,2)
	if not _check(bool(raised.ok),"public plateau transaction: "+str(raised.message)): return false
	var built: Dictionary = city.add_house(at)
	if not _check(bool(built.ok),"public highland house transaction: "+str(built.message)): return false
	highland = str(built.house_id)
	_check(float(built.base_y) >= 0.8,"new house samples the real raised terrain at or above 0.8m")
	var styled: Dictionary = city.set_house_style(highland,"round_tower")
	if not _check(bool(styled.ok),"public round tower transaction: "+str(styled.message)): return false
	# Widening the sample's narrow frontage rows intersects neighboring walls.
	# Use a real approach from the existing central road, outside house corners.
	var street_candidates: Array = [
		[Vector2(-12.25,14.55),Vector2(-12.25,17),Vector2(-24,17),Vector2(-24,18.6)]]
	var promenade: Dictionary = {"ok":false,"message":"no candidate street"}
	var attempts: Array[Dictionary] = []
	for candidate: Array in street_candidates:
		var points: Array[Vector2] = []
		points.assign(candidate)
		var preview: Dictionary = city.preview_road(points,"promenade")
		attempts.append({"points":candidate,"valid":bool(preview.ok),"message":str(preview.message)})
		if not bool(preview.ok): continue
		promenade = city.add_road(points,"promenade")
		if bool(promenade.ok): break
	print(JSON.stringify({"stage":"public_promenade_fixture","attempts":attempts,"result":promenade}))
	if not _check(bool(promenade.ok),"public promenade transaction: "+str(promenade.message)): return false
	var linked: Dictionary = city.link_districts(str(city.districts[0].id),str(city.districts[1].id))
	if not _check(bool(linked.ok),"public district link transaction: "+str(linked.message)): return false
	return not venue.is_empty()

func _run() -> void:
	var decoded: Variant = JSON.parse_string(FileAccess.get_file_as_string(SAMPLE))
	if not _check(decoded is Dictionary,"business sample is readable JSON"):
		quit(1)
		return
	city = State.new()
	var loaded: Dictionary = city.restore(decoded)
	if not _check(bool(loaded.ok),"real sample restores: "+str(loaded.message)):
		quit(1)
		return
	for key: String in ["bakery_supply","workshop_supply","cafe_credits","cafe_progress","matinee_credits","matinee_progress","house_improvements","venue_commissions","resonance_afterglow","journey_checkpoint"]:
		var empty_ledger: Dictionary = city.get(key)
		_check(empty_ledger.is_empty(),"sample begins with zero "+key)
	for value: Variant in city.life_progress.values(): _check(int(value)==0,"sample begins with zero life events")
	_check(city.growth_memories.is_empty(),"sample begins without earned chapters")
	if not failures.is_empty() or not _build_goals():
		await _finish()
		return
	life = Life.new()
	life.set_process(false)
	root.add_child(life)
	life.setup(city)
	var connected: bool = life.house_connected(highland) and life.house_connected(venue)
	_check(connected,"new highland house and original venue have actual road entrances")
	if connected: _check(not life._route(str(life.connected_houses[highland]),str(life.connected_houses[venue])).is_empty(),"new highland promenade connects to the original resident network")
	life.concert_callback = _on_concert
	_facts("fresh_life_setup")
	var daily := await _wait_for(_daily_complete,500.0,"natural_bread_tea_craft_harmony")
	if daily:
		var first_finished := await _perform(1,200.0)
		if first_finished:
			_check(bool(city.festival_status(venue).pending) and int(city.festival_status(venue).used)==0,"first completed concert creates its first real festival order")
			var delivered := await _wait_for(func()->bool: return bool(city.festival_status(venue).ready),300.0,"natural_festival_delivery")
			if delivered: await _perform(2,200.0)
	var final_earned: Array = city.refresh_growth()
	for id: String in final_earned: chapter_events.append(id)
	_check(int(city.life_progress.concerts)==2 and int(city.life_progress.auto_concerts)==0,"exactly two complete manually invited concerts; no automatic substitute")
	_check(int(city.festival_status(venue).used)>=1,"second real performance consumes delivered festival decoration")
	_check(city.growth_memories==Growth.CHAPTERS and chapter_events==Growth.CHAPTERS,"all four chapters are naturally awarded once in order")
	_check(not _fulfilled_home().is_empty(),"a household still has real bread, tea and delivered craft history at the finish")
	if city.growth_memories==Growth.CHAPTERS:
		var finish: Dictionary = city.set_house_finish(highland,"nocturne")
		_check(bool(finish.ok),"earned final palette is applied through its public transaction")
		var checkpointed: Dictionary = city.set_journey_checkpoint(life.checkpoint())
		_check(bool(checkpointed.ok),"natural resident and worker journeys form a valid checkpoint: "+str(checkpointed.get("message","")))
		var snapshot: Dictionary = city.snapshot()
		var restored := State.new()
		var roundtrip: Dictionary = restored.restore(snapshot)
		_check(bool(roundtrip.ok),"finished city snapshot restores: "+str(roundtrip.message))
		if bool(roundtrip.ok):
			for key: String in ["life_progress","bakery_supply","workshop_supply","cafe_credits","cafe_progress","matinee_credits","matinee_progress","house_improvements","venue_commissions","growth_memories","resonance_afterglow","journey_checkpoint"]:
				_check(restored.get(key)==city.get(key),"roundtrip retains natural "+key)
			var matched := false
			for house: Dictionary in restored.houses:
				if str(house.id)==highland: matched = str(house.get("finish",""))=="nocturne"
			_check(matched,"roundtrip retains the earned fourth finish on the real highland house")
	_facts("finish")
	await _finish()

func _finish() -> void:
	var report := {"check":"creation_living_progression","passed":failures.is_empty(),"simulated_seconds":snappedf(simulated,0.1),"max_simulated_seconds":MAX_SECONDS,"fixed_delta":DELTA,"audio_wall_clock_measured":false,"failures":failures,"milestones":milestones}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	FileAccess.open(OUT+"/自然经营结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print(JSON.stringify(report))
	if life != null:
		life.queue_free()
		await process_frame
	quit(0 if failures.is_empty() else 1)
