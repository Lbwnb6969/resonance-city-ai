extends SceneTree
## Two complete real-device concerts, each earned by fresh physical social life.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const OUTPUT := "res://验证记录/自发巡演_2026-10-15/live"
const FIXTURE_DEVICE := 92
class FixtureInput extends Node:
	func _input(event: InputEvent) -> void:
		# The visible fixture shares a desktop with the player. Accept the
		# actual viewport events it sends, while keeping unrelated mouse/keys
		# from changing the measured city during the two real-time concerts.
		if event.device!=92: get_viewport().set_input_as_handled()
var demo: Node3D
var checks := 0
var failures: Array[String]=[]
var rounds: Array[Dictionary]=[]

func _initialize() -> void: _run.call_deferred()

func _check(ok: bool, label: String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)

func _capture(label: String) -> void:
	demo._refresh_concert()
	demo.town.clear_preview()
	await process_frame
	await process_frame
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")

func _click(control: Control) -> void:
	await process_frame
	await process_frame
	var at := control.get_global_rect().get_center()
	_check(control.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(root.size)).has_point(at),"real visible control inside viewport: "+control.name)
	var motion := InputEventMouseMotion.new()
	motion.device=FIXTURE_DEVICE
	motion.position=at
	motion.global_position=at
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event := InputEventMouseButton.new()
		event.device=FIXTURE_DEVICE
		event.position=at
		event.global_position=at
		event.button_index=MOUSE_BUTTON_LEFT
		event.pressed=pressed
		root.push_input(event)
		await process_frame

func _run() -> void:
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	root.add_child(FixtureInput.new())
	demo.life.set_process(false)
	demo.selected_house="h3"
	demo.select_tool(4)
	await physics_frame
	await process_frame
	var until := Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty(),"production nine-voice bank ready before live input")
	await _click(demo.role_buttons.garden_cafe)
	_check(demo.town._house_record("h3").role=="garden_cafe" and demo.town.cafes.roots.has("h3"),"actual visible cafe button creates real role and courtyard")
	if not demo.town.cafes.roots.has("h3"):
		demo.queue_free()
		await create_timer(0.2).timeout
		quit(1)
		return
	var path: Array[Vector2]=[Vector2(-2.4,-3.45),Vector2(-4,-3.45),Vector2(-4,1.55),Vector2(-8,1.55)]
	demo._after_edit(demo.state.add_road(path),"road")
	var road_signature: int=hash(demo.state.roads)
	demo.selected_house="h4"
	demo._refresh_place()
	await process_frame
	_check(not demo.life.matinee_status("h4").enabled and demo.life.concert_status().phase=="idle","old/default scene keeps automatic performance off")
	var structure: int=demo.town.house_roots.h4.get_instance_id()
	var furniture: int=demo.town.cafes.roots.h3.get_instance_id()
	var rig: int=demo.town.resonance.rigs.h4.mesh.get_instance_id()
	var identities := {}
	for key: String in demo.music.STEMS: identities[key]=[demo.music._players[key].get_instance_id(),demo.music._players[key].stream.get_instance_id()]
	await _click(demo.matinee_button)
	_check(demo.life.matinee_status("h4").enabled,"actual player button enables resident-led performances")
	_check(demo.town.house_roots.h4.get_instance_id()==structure and demo.town.cafes.roots.h3.get_instance_id()==furniture,"setting changes no structural or furniture geometry")
	_check(demo.life.matinee_status("h4").ready==0 and demo.life.concert_status().phase=="idle","enabling with no real social life never launches a fake concert")
	await _capture("01_enabled_waits_for_real_inspiration")
	var prior_visits := 0
	var save := "user://matinee_review_%d.json" % Time.get_ticks_usec()
	for round_index in range(2):
		# Run only real physical daily life faster: make actual finite bread,
		# walk to buy, reserve different cafe chairs, dwell, leave, then invite.
		for step in range(9000):
			if demo.life.concert_status().phase=="gathering": break
			demo.life._process(0.1)
		var invitation: Dictionary=demo.life.concert_status()
		_check(invitation.phase=="gathering" and invitation.source=="auto","fresh social life triggers automatic invitation round %d" % (round_index+1))
		if str(invitation.phase)!="gathering": break
		_check(demo.state.life_progress.tea_visits>=prior_visits+2 and demo.state.life_progress.purchases>=demo.state.life_progress.tea_visits,"each automatic round follows fresh actual purchases and tea visits")
		_check(invitation.sponsors.size()>=2 and demo.state.matinee_pending.sponsors==invitation.sponsors,"real finite household inspiration authorizes this actual automatic concert")
		_check(demo.life.cafe_status("h3").phase!="tea" and demo.life.cafe_status("h3").phase!="leaving","automatic invitation waits for physical tea and departure")
		prior_visits=int(demo.state.life_progress.tea_visits)
		demo._capture_journeys()
		_check(demo.state.save_city(save).ok,"automatic gathering saves with its real sponsors")
		var loaded := State.new()
		_check(loaded.load_city(save).ok,"automatic gathering JSON validates source and finite authorization")
		var restored := Life.new()
		root.add_child(restored)
		restored.set_process(false)
		restored.setup(loaded)
		_check(restored.concert_status().source=="auto" and restored.concert_status().sponsors==invitation.sponsors and loaded.matinee_credits==demo.state.matinee_credits,"automatic gathering restores same sponsorship without spending it")
		restored.free()
		await _capture("02_round%d_neighbors_walk_to_their_own_concert" % (round_index+1))
		for step in range(2600):
			var status: Dictionary=demo.life.concert_status()
			if int(status.arrived)==int(status.invited): break
			demo.life._process(0.1)
		demo.life.set_process(true)
		until=Time.get_ticks_msec()+7500
		while demo.life.concert_status().phase!="playing" and Time.get_ticks_msec()<until: await process_frame
		_check(demo.life.concert_status().phase=="playing","actual shared music downbeat starts resident concert after real arrival")
		_check(demo.state.life_progress.auto_concerts==round_index,"arrival and downbeat do not spend sponsorship or count completion")
		if round_index==0:
			await _click(demo.matinee_button)
			_check(not demo.life.matinee_status("h4").enabled and demo.life.concert_status().phase=="playing","pausing future automatic events keeps the already invited concert playing")
		var audible_houses := {}
		var last_elapsed := -1.0
		var max_jump := 0.0
		var finale_seen := false
		until=Time.get_ticks_msec()+27000
		while demo.life.concert_status().phase=="playing" and Time.get_ticks_msec()<until:
			var resonance: Dictionary=demo.resonance_snapshot
			if bool(resonance.get("audible",false)):
				for id: String in resonance.get("chorus_ids",[]): audible_houses[id]=true
				if bool(resonance.get("finale",false)) and not finale_seen:
					finale_seen=true
					await _capture("03_round%d_actual_tutti_finale" % (round_index+1))
			var now: float=demo.life.concert_status().elapsed
			if last_elapsed>=0.0: max_jump=maxf(max_jump,now-last_elapsed)
			last_elapsed=now
			if now>10.0 and now<10.15: await _capture("03_round%d_whole_street_resonates" % (round_index+1))
			await process_frame
		demo.life.set_process(false)
		_check(demo.state.life_progress.auto_concerts==round_index+1 and demo.state.life_progress.concerts==round_index+1,"twenty-four actual seconds complete and count exactly one resident-led performance")
		_check(audible_houses.size()==6 and max_jump<0.25,"all six real neighbor houses respond through continuous actual music transport")
		_check(finale_seen,"resident-led concert reaches actual audible eighth-phrase full ensemble")
		_check(demo.state.matinee_pending.is_empty() and demo.state.matinee_cooldown>58.0,"successful concert clears reservation and starts sixty seconds of ordinary life")
		for home: String in invitation.sponsors: _check(not demo.state.has_matinee_credit(home),"actual completion spends its household inspiration "+home)
		_check(demo.town.house_roots.h4.get_instance_id()==structure and demo.town.cafes.roots.h3.get_instance_id()==furniture and demo.town.resonance.rigs.h4.mesh.get_instance_id()==rig,"social and automatic cycles retain all existing structure, furniture and resonance objects")
		rounds.append({"round":round_index+1,"sponsors":invitation.sponsors,"fresh_tea_visits":prior_visits,"audible_houses":audible_houses.keys(),"max_elapsed_jump":max_jump,"finale_seen":finale_seen,"cooldown":demo.state.matinee_cooldown})
		await _capture("04_round%d_finished_with_warm_afterglow" % (round_index+1))
		if round_index==0:
			await _click(demo.matinee_button)
			_check(demo.life.matinee_status("h4").enabled and demo.life.matinee_status("h4").phase=="cooldown","real toggle resumes future performances while respecting actual rest")
	# Inspect the complete saved schedule after the second success. No offline
	# clock advances, no history reversal creates a third invitation.
	demo._capture_journeys()
	_check(demo.state.save_city(save).ok,"completed concerts and rest schedule save")
	var final_city := State.new()
	_check(final_city.load_city(save).ok and is_equal_approx(final_city.matinee_cooldown,demo.state.matinee_cooldown) and final_city.matinee_progress==demo.state.matinee_progress,"JSON preserves actual remaining rest and completed automatic ledger")
	for key: String in demo.music.STEMS: _check(identities[key]==[demo.music._players[key].get_instance_id(),demo.music._players[key].stream.get_instance_id()],"two whole rounds retain actual loop/player "+key)
	demo.life.set_process(true)
	demo.frame_samples.clear()
	for frame in range(540): await process_frame
	var report: Dictionary=demo.diagnostics()
	_check(hash(demo.state.roads)==road_signature and demo.state.houses.size()==6,"visible fixture city keeps its six houses and original measured road layout")
	_check(demo.music._players.size()==9 and demo.music._effects.size()==4,"audible active automatic town keeps fixed voice count")
	await _capture("05_automatic_town_continues_daily_life")
	var record := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"rounds":rounds,"performance":report,"matinee":demo.life.matinee_status("h4"),"credits":demo.state.matinee_credits,"progress":demo.state.matinee_progress,"save":save}
	var file := FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(record,"\t",true,true))
	file.close()
	print("CREATION_MATINEE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"rounds":rounds.size(),"fps":report.fps,"p95_ms":report.frame_p95_ms,"draw":report.draw_calls}))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
