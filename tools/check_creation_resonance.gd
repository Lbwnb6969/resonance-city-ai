extends SceneTree
## One real full-length performance: fixed PCM, actual UI and GPU rig state.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUTPUT := "res://验证记录/全街共鸣_2026-10-15/live"
var demo: Node3D
var failures: Array[String] = []
var checks := 0

func _initialize() -> void: _run.call_deferred()

func _check(value: bool,label: String) -> void:
	checks+=1
	if not value: failures.append(label)

func _capture(label: String) -> void:
	await process_frame
	await process_frame
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")

func _click(control: Control) -> void:
	var at := control.get_global_rect().get_center()
	var motion := InputEventMouseMotion.new()
	motion.position=at
	motion.global_position=at
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event := InputEventMouseButton.new()
		event.position=at
		event.global_position=at
		event.button_index=MOUSE_BUTTON_LEFT
		event.pressed=pressed
		root.push_input(event)
		await process_frame

func _identities() -> Dictionary:
	var result := {}
	var info: Dictionary=demo.town.resonance.diagnostics()
	for id: String in info.houses:
		var row: Dictionary=info.houses[id]
		result[id]=[row.rig_id,row.node_id,row.material_id,row.mesh_id,row.pivot_id,row.arc_id]
	return result

func _window_pixel() -> Color:
	# Actual visible east-window quadrant of the nonparticipating right-bank
	# home: avoid the cross mullion and sample the rendered framebuffer.
	var pane := Vector3(10.073,1.145,2.45)
	var screen: Vector2=demo.camera.unproject_position(pane)
	var texture: Image=root.get_texture().get_image()
	var result := Color(0,0,0,0)
	for y in range(-1,2):
		for x in range(-1,2): result+=texture.get_pixel(roundi(screen.x)+x,roundi(screen.y)+y)
	return result/9.0

func _run() -> void:
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.focus=Vector3(-3,0.7,0)
	demo.zoom=27
	demo._update_camera()
	demo.selected_house="h4"
	demo.select_tool(4)
	await physics_frame
	await process_frame
	var ready := Time.get_ticks_msec()
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()-ready<15000: await process_frame
	_check(not demo.music.audio_report.is_empty(),"production audio bank finishes before invitation")
	var identities := _identities()
	var builds: int=demo.town.resonance.diagnostics().build_count
	var house_root: int=demo.town.house_roots.h1.get_instance_id()
	var road_root: int=demo.town.road_roots.r1.get_instance_id()
	var before_concerts: int=demo.state.life_progress.concerts
	await _capture("01_daily_before_invitation")
	var unlit_pixel := _window_pixel()
	var lit_pixel := Color.BLACK
	await _click(demo.concert_button)
	_check(str(demo.life.concert_status().phase)=="gathering","real mouse click on visible button invites actual residents")
	# Advance only the physical walk; music keeps its real device clock.
	for step in range(1800):
		var status: Dictionary=demo.life.concert_status()
		if int(status.invited)>0 and int(status.arrived)==int(status.invited): break
		demo.life._process(0.1)
	demo._refresh_concert()
	var arrived: Dictionary=demo.life.concert_status()
	_check(int(arrived.invited)==3 and int(arrived.arrived)==3,"three real travelers arrive before the new musical downbeat")
	var view: Dictionary=demo.life.concert_view()
	_check(view.chorus_house_ids.size()==6 and view.chorus_house_ids.has("h2") and view.chorus_house_ids.has("h6"),"bakery and unserved right-bank neighbor join the visual ensemble")
	_check(not view.wake_house_ids.is_empty(),"actual traveled streets wake nearby houses")
	await _capture("02_gathering_warmup")
	demo.life.set_process(true)
	var wait_start := Time.get_ticks_msec()
	while str(demo.life.concert_status().phase)!="playing" and Time.get_ticks_msec()-wait_start<7500: await process_frame
	_check(str(demo.life.concert_status().phase)=="playing","all arrived residents start together at a live shared phrase boundary")
	demo.ui_layer.visible=false
	var phases := {}
	var source_ids: Array[String]=[]
	var snapshots: Array[Dictionary]=[]
	var mute_checked := false
	var stable := true
	var finale_seen := false
	var peak_response := 0.0
	var low_response := 1.0
	demo.frame_samples.clear()
	var performance: Dictionary={}
	var playing_start := Time.get_ticks_msec()
	while str(demo.life.concert_status().phase)=="playing" and Time.get_ticks_msec()-playing_start<28000:
		var snapshot: Dictionary=demo.resonance_snapshot
		if bool(snapshot.audible) and str(snapshot.phase)=="playing" and bool(snapshot.concert_active):
			var phrase: int=snapshot.phrase
			var rig: Dictionary=demo.town.resonance.diagnostics()
			stable=stable and _identities()==identities and int(rig.build_count)==builds
			peak_response=maxf(peak_response,float(snapshot.beat_pulse))
			low_response=minf(low_response,float(snapshot.beat_pulse))
			if not phases.has(phrase):
				phases[phrase]=true
				var all_warm := true
				for id: String in view.chorus_house_ids: all_warm=all_warm and float(rig.houses[id].weight)>0.0
				_check(all_warm,"every nearby house participates during phrase %d"%phrase)
				_check(not str(snapshot.lead_id).is_empty(),"audible phrase attributes a real leading house")
				snapshots.append({"snapshot":snapshot.duplicate(true),"rig":rig.duplicate(true),"audio":demo.music.music_report()})
				var id := str(snapshot.lead_id)
				if not source_ids.has(id): source_ids.append(id)
				await _capture("phrase_%02d_%s"%[phrase+1,id])
				if phrase==1:
					lit_pixel=_window_pixel()
					_check(lit_pixel.r>unlit_pixel.r+0.04,"actual GPU image warms the nonattending neighbor window")
				if phrase==3:
					performance=demo.diagnostics()
					demo.focus=Vector3(-5,0.7,-1.5)
					demo.zoom=16
					demo._update_camera()
					await _capture("response_close")
					demo.focus=Vector3(-3,0.7,0)
					demo.zoom=27
					demo._update_camera()
			if bool(snapshot.finale) and not finale_seen:
				finale_seen=true
				_check(demo.music.target_gain_db("wood_deep",true)>-40 and demo.music.target_gain_db("wood_weave",true)>-40,"finale actually opens the bounded shared harmony tracks")
			if phrase==2 and not mute_checked:
				mute_checked=true
				demo.music.set_muted(true)
				await process_frame
				await process_frame
				var quiet: Dictionary=demo.music.resonance_state(demo.life.concert_view())
				var dark: Dictionary=demo.town.resonance.diagnostics()
				var no_music_motion: bool = not dark.ring_visible and quiet.lead_id=="" and quiet.chorus_ids.is_empty()
				for row: Dictionary in dark.houses.values(): no_music_motion=no_music_motion and float(row.weight)==0.0 and not row.arc_active and is_equal_approx(float(row.pivot_scale_y),1.0)
				_check(no_music_motion,"mute clears all musical windows, arcs, wave and body pulse immediately")
				_check(str(demo.life.concert_status().phase)=="playing","muting never cancels real gathering or economic progress")
				await _capture("03_muted_concert_keeps_people")
				demo.music.set_muted(false)
		await process_frame
	_check(phases.size()==8 and finale_seen,"all eight actual phrases include the final full-street chord")
	_check(peak_response>0.8 and low_response<0.2,"visual pulse follows the actual 80BPM device clock")
	_check(stable and _identities()==identities,"all rig, material, mesh and arc identities stay stable across phrases and mute")
	_check(demo.town.house_roots.h1.get_instance_id()==house_root and demo.town.road_roots.r1.get_instance_id()==road_root,"whole performance preserves static town geometry")
	demo.life.set_process(false)
	demo._refresh_concert()
	await process_frame
	_check(int(demo.state.life_progress.concerts)==before_concerts+1,"actual complete performance counts exactly once")
	_check(demo.state.resonance_afterglow.size()==6 and demo.state.afterglow_remaining("h2")>59.0,"successful performance gives every neighbor a real sixty-second afterglow")
	_check(is_equal_approx(demo.state.production_multiplier("h2"),1.25),"actual bakery receives the bounded production bonus")
	var afterglow_info: Dictionary=demo.town.resonance.diagnostics()
	var all_lamps := true
	for id: String in view.chorus_house_ids: all_lamps=all_lamps and float(afterglow_info.houses[id].afterglow)>0.0
	_check(all_lamps,"post-concert neighbors retain prebuilt warm lanterns and flower garlands")
	await _capture("04_afterglow_neighborhood")
	demo.music.set_muted(true)
	await process_frame
	_check(demo.state.production_multiplier("h2")==1.25,"economic afterglow remains independent of the speaker mute switch")
	demo.music.set_muted(false)
	var saved: Dictionary=demo.state.snapshot()
	saved.journey_checkpoint=demo.life.checkpoint()
	var copy := State.new()
	var reload_result: Dictionary=copy.restore(JSON.parse_string(JSON.stringify(saved)))
	_check(reload_result.ok,"JSON accepts the actual completed concert and resident journeys: "+str(reload_result.get("message","")))
	var afterglow_error := 0.0
	for id: String in demo.state.resonance_afterglow: afterglow_error=maxf(afterglow_error,absf(copy.afterglow_remaining(id)-demo.state.afterglow_remaining(id)))
	_check(copy.resonance_afterglow.keys()==demo.state.resonance_afterglow.keys() and afterglow_error<0.000000001,"JSON preserves remaining afterglow to decimal serialization precision without replaying completion")
	demo.ui_layer.visible=true
	demo.selected_house="h2"
	demo._refresh_place()
	await _capture("05_real_bakery_afterglow_feedback")
	_check(demo.bakery_info.text.contains("快25%"),"bakery panel explains the actual work bonus")
	demo.state.advance_resonance_afterglow(61.0)
	await process_frame
	await process_frame
	_check(demo.state.resonance_afterglow.is_empty() and demo.state.production_multiplier("h2")==1.0,"expiry removes real production bonus")
	var expired: Dictionary=demo.town.resonance.diagnostics()
	var no_lamps := true
	for row: Dictionary in expired.houses.values(): no_lamps=no_lamps and float(row.afterglow)==0.0
	_check(no_lamps and _identities()==identities,"expiry hides temporary decorations without rebuilding the visual rigs")
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"real_ui_input":true,"display":DisplayServer.get_name(),"heard_source_ids":source_ids,"phrase_snapshots":snapshots,"identities_stable":stable,"rig_build_count":builds,"afterglow":saved.resonance_afterglow,"afterglow_reload_error":afterglow_error,"reload_result":reload_result,"gpu_window_probe":{"before":unlit_pixel,"playing":lit_pixel},"performance":performance,"audio":demo.music.music_report()}
	if report.performance.has("world"): report.performance.erase("world")
	var file := FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("CREATION_RESONANCE_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"sources":source_ids,"fps":performance.get("fps",0),"p95":performance.get("frame_p95_ms",0),"rig_build_count":builds}))
	for failure: String in failures: push_error(failure)
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
