extends SceneTree
## CPU contracts around actual invitations, never simulated completed concerts.
const State = preload("res://scripts/world/city_creation_state.gd")
const Life = preload("res://scripts/world/city_creation_life.gd")
const OUT := "res://验证记录/庆典接力_2026-10-16"
const ACTUAL_HISTORY := "res://验证记录/经营河湾_2026-10-16/实际三分钟河湾.json"
var checks: Array = []
var failures: Array[String] = []
var lives: Array[Node3D] = []
var facts: Dictionary = {}

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _life(city: RefCounted) -> Node3D:
	var life := Life.new()
	root.add_child(life);life.set_process(false);life.setup(city);lives.append(life)
	return life
func _city() -> RefCounted:
	var city := State.new();city.initialize()
	for id: String in ["h3","h5","h6"]: city.set_house_role(id,"venue")
	return city
func _capture(city: RefCounted,life: Node3D) -> Dictionary:
	var captured: Dictionary = city.set_journey_checkpoint(life.checkpoint())
	_check(captured.ok,"actual invitation checkpoint passes State structural and counter validation")
	return city.snapshot()
func _rejected(base: Dictionary,kind: String) -> void:
	var data: Dictionary = base.duplicate(true)
	match kind:
		"old schema": data.journey_checkpoint.schema=1
		"negative index": data.journey_checkpoint.relay.index=-1
		"past final index": data.journey_checkpoint.relay.index=data.journey_checkpoint.relay.venues.size()
		"duplicate venues": data.journey_checkpoint.relay.venues[1]=data.journey_checkpoint.relay.venues[0]
		"unissued future venue": data.journey_checkpoint.relay.venues[-1]="h999999"
		"auto source": data.journey_checkpoint.concert.source="auto"
		"wrong completed counter": data.life_progress.concerts=int(data.life_progress.concerts)+1
		"already elapsed twenty-four seconds": data.journey_checkpoint.concert.elapsed=24.0
		"wrong current venue": data.journey_checkpoint.concert.venue_id=data.journey_checkpoint.relay.venues[1]
	var victim := State.new();victim.initialize()
	var before: Dictionary = victim.snapshot()
	var rejected: Dictionary = victim.restore(data)
	_check(not rejected.ok and victim.snapshot()==before,"invalid "+kind+" is rejected atomically without changing target city")

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var single := State.new();single.initialize()
	var lone := _life(single)
	var before: Dictionary = single.snapshot()
	var failed: Dictionary = lone.start_relay("h4")
	_check(not failed.ok and single.snapshot()==before and not lone.relay_status().active and lone.concert_status().phase=="idle","one actual connected venue refuses a relay with zero persistent or concert writes")
	var city := _city()
	var life := _life(city)
	var candidates: Array[String] = life.relay_candidates("h4")
	_check(candidates==["h4","h3","h5"] and not candidates.has("h6"),"actual graph filters disconnected h6 and fixes selected-first numeric-ID order")
	city.set_house_name("h3","后来改名的舞台")
	_check(life.relay_candidates("h4")==candidates,"renaming does not reorder actual candidate IDs")
	var invitation: Dictionary = life.start_relay("h4")
	_check(invitation.ok and life.relay_status().active and life.relay_status().venue_ids==candidates and life.relay_status().index==0 and life.concert_status().phase=="gathering" and life.concert_status().source=="manual","real start_relay creates first gathering and fixed manual route without completion")
	var saved := _capture(city,life)
	_check(saved.journey_checkpoint.schema==2 and saved.journey_checkpoint.relay.concerts_before==0 and city.life_progress.concerts==0 and city.life_progress.auto_concerts==0 and city.matinee_pending.is_empty(),"active schema-two checkpoint has index-zero counter and no automatic sponsorship or invented performance")
	var path := OUT+"/cpu_invitation_"+str(Time.get_ticks_usec())+".json"
	var written: Dictionary = city.save_city(path)
	var loaded := State.new()
	var restored: Dictionary = loaded.load_city(path)
	var resumed := _life(loaded)
	_check(written.ok and restored.ok and loaded.journey_checkpoint.schema==2 and resumed.relay_status()==life.relay_status() and resumed.concert_status().phase=="gathering" and loaded.life_progress==city.life_progress,"actual production save/load restores manual relay gathering and exact counters")
	var positions_equal := true
	for actor: Dictionary in life.residents:
		var other: Dictionary = resumed.cafe._resident(str(actor.home_id))
		if other.is_empty() or actor.node.position.distance_to(other.node.position)>0.001: positions_equal=false
	_check(positions_equal and resumed.concert_status().invited==life.concert_status().invited,"restored real participants preserve physical positions and pass route revalidation")
	for invalid: String in ["old schema","negative index","past final index","duplicate venues","unissued future venue","auto source","wrong completed counter","already elapsed twenty-four seconds","wrong current venue"]: _rejected(saved,invalid)
	var cancelled: Dictionary = resumed.cancel_concert()
	var cancel_checkpoint: Dictionary = resumed.checkpoint()
	_check(cancelled.ok and not resumed.relay_status().active and cancel_checkpoint.schema==1 and not cancel_checkpoint.has("relay") and resumed.concert_status().phase=="idle" and loaded.life_progress.concerts==0,"cancel clears entire route and downgrades checkpoint without settling an unfinished stage")
	var future := State.new();future.restore(saved)
	var future_life := _life(future)
	future.set_house_role("h3","residential");future_life._sync()
	var continued: Dictionary = future_life.checkpoint()
	_check(not future_life.relay_status().active and future_life.concert_status().phase=="gathering" and future_life.concert_status().venue_id=="h4" and continued.schema==1,"a later stop changing role drops only future relay while valid current gathering continues")
	var current := State.new();current.restore(saved)
	var current_life := _life(current)
	current.set_house_role("h4","residential")
	var directly_saved: Dictionary = current.save_city(OUT+"/cpu_role_changed_"+str(Time.get_ticks_usec())+".json")
	_check(directly_saved.ok and current.journey_checkpoint.schema==1 and not current.journey_checkpoint.has("relay") and current.journey_checkpoint.concert.is_empty(),"State role change prunes current relay immediately and direct save works before Life sync")
	current_life._sync()
	_check(not current_life.relay_status().active and current_life.concert_status().phase=="idle" and current.life_progress.concerts==0,"current venue role invalidation cancels live queue with no completion credit")
	var removed := State.new();removed.restore(saved)
	var removed_life := _life(removed)
	removed.remove_house("h4");removed_life._sync()
	_check(not removed_life.relay_status().active and removed_life.concert_status().phase=="idle" and removed.journey_checkpoint.schema==1,"removing current venue clears persisted and live relay")
	var disconnected := State.new();disconnected.restore(saved)
	var disconnected_life := _life(disconnected)
	disconnected.remove_road("r1");disconnected_life._sync()
	_check(not disconnected_life.relay_status().active and disconnected_life.concert_status().phase=="idle" and disconnected.life_progress.concerts==0,"actual trunk-road cut cancels unreachable audience and current relay without reward")
	var actual := State.new()
	var historical: Dictionary = actual.load_city(ACTUAL_HISTORY)
	var old_progress: Dictionary = actual.life_progress.duplicate(true)
	var old_commissions: Dictionary = actual.venue_commissions.duplicate(true)
	var history_ok := false
	if historical.ok and int(actual.life_progress.concerts)>0:
		actual.set_house_name("h1","接力历史验证")
		history_ok=actual.undo().ok and actual.redo().ok and actual.life_progress==old_progress and actual.venue_commissions==old_commissions
	_check(history_ok,"construction undo/redo retain genuine completed concert and festival ledger from preserved three-minute live evidence")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city bytes remain untouched")
	facts={"candidate_ids":candidates,"actual_saved_path":path,"relay":saved.journey_checkpoint.relay,"participants":life.concert_status().invited,"historical_live_source":ACTUAL_HISTORY,"historical_real_progress":old_progress,"complete_transition_scope":"No completed concert is fabricated or advanced in this CPU fixture; actual 24-second A-to-B settlement and callback atomic capture belong to the separate GL run."}
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"facts":facts,"scope":"CPU production Life setup, real route-based invitations, public State save/load and edits only; no manual ticking, no 24-second completion claim","command":"D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --headless --path . --script tools/check_creation_relay_state.gd"}
	FileAccess.open(OUT+"/state.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("CREATION_RELAY_STATE ",JSON.stringify(report))
	for actor_life: Node3D in lives: actor_life.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
