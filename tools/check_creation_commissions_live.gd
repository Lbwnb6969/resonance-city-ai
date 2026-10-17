extends SceneTree
## Two actual 24-second performances and genuine workshop travel/installation.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const OUTPUT="res://验证记录/节庆委托_2026-10-15/live"
var demo: Node3D
var checks:=0
var failures: Array[String]=[]
var observations: Array[Dictionary]=[]
var wall_frames: Array[float]=[]
var last_usec:=0
var sampling:=false
func _initialize() -> void: _run.call_deferred()
func _process(_delta: float) -> bool:
	var now:=Time.get_ticks_usec()
	if sampling and last_usec>0: wall_frames.append((now-last_usec)/1000.0)
	last_usec=now
	return false
func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok: failures.append(label); push_error(label)
func _wait_edit() -> void:
	var until:=Time.get_ticks_msec()+15000
	while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.edit_pending(),"latest workshop and street edit publishes")
func _click(control: Control) -> void:
	await process_frame
	await process_frame
	var at:=control.get_global_rect().get_center()
	_check(control.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(root.size)).has_point(at),"real control inside viewport: "+control.name)
	var motion:=InputEventMouseMotion.new()
	motion.position=at
	motion.global_position=at
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event:=InputEventMouseButton.new()
		event.position=at
		event.global_position=at
		event.button_index=MOUSE_BUTTON_LEFT
		event.pressed=pressed
		root.push_input(event)
		await process_frame
	await _wait_edit()
func _capture(label: String) -> void:
	demo._refresh_place()
	demo.town.clear_preview()
	await process_frame
	await process_frame
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")
func _identity() -> Array:
	var result:=[]
	for player: AudioStreamPlayer in demo.music._players.values(): result.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _real_performance(label: String) -> void:
	demo.selected_house="h4"
	demo.select_tool(4)
	demo._refresh_place()
	await _click(demo.concert_button)
	_check(demo.life.concert_status().phase=="gathering","actual invitation gathers the neighborhood")
	for step in range(2400):
		var status: Dictionary=demo.life.concert_status()
		if int(status.arrived)==int(status.invited): break
		demo.life._process(0.1)
	var gathered: Dictionary=demo.life.concert_status()
	_check(int(gathered.invited)>=2 and gathered.arrived==gathered.invited,"real routes bring every invited resident to the stage")
	demo.life.set_process(true)
	var until:=Time.get_ticks_msec()+7500
	while demo.life.concert_status().phase!="playing" and Time.get_ticks_msec()<until: await process_frame
	_check(demo.life.concert_status().phase=="playing","real shared six-second downbeat starts the performance")
	var before: int=demo.state.life_progress.concerts
	var clock: float=demo.music._playback_clock()
	var started:=Time.get_ticks_msec()
	await _capture(label)
	sampling=true
	until=Time.get_ticks_msec()+27000
	while int(demo.state.life_progress.concerts)==before and Time.get_ticks_msec()<until: await process_frame
	sampling=false
	demo.life.set_process(false)
	_check(int(demo.state.life_progress.concerts)==before+1,"only the complete actual performance counts")
	_check(Time.get_ticks_msec()-started>=23500,"performance plays its actual 24 seconds")
	_check(demo.music._playback_clock()-clock>=23.5,"existing PCM transport advances for the full performance")
	observations.append({"stage":label,"festival":demo.state.festival_status("h4"),"afterglow":demo.state.afterglow_remaining("h4"),"clock_elapsed":demo.music._playback_clock()-clock})
func _run() -> void:
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.focus=Vector3(-6,0.7,1)
	demo.zoom=18
	demo.yaw=0.15
	demo.pitch=0.7
	demo._update_camera()
	demo.selected_house="h3"
	demo.select_tool(4)
	demo._refresh_place()
	await _click(demo.role_buttons.workshop)
	_check(demo.life.workshop.workers.size()==1,"real role control creates a staffed workshop")
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty(),"original nine PCM loops finish preparation")
	if demo.music.audio_report.is_empty() or demo.life.workshop.workers.is_empty(): quit(1); return
	var identity:=_identity()
	await _real_performance("01_first_real_performance")
	_check(demo.state.festival_status("h4").pending and demo.state.venue_commissions.h4.requested==1,"first complete performance creates exactly one real order")
	await _capture("02_pending_order")
	for step in range(3600):
		var cargo: Dictionary=demo.state.workshop_status("h3").transit
		if cargo.get("kind","")=="festival": break
		demo.life._process(0.1)
	var supply: Dictionary=demo.state.workshop_status("h3")
	_check(supply.transit.get("kind","")=="festival","actual worker picks a produced object for the venue commission")
	if supply.transit.get("kind","")!="festival": quit(1); return
	var artisan: Dictionary=demo.life.workshop.workers[0]
	_check(artisan.carry.visible and artisan.target_id=="h4","visible carried chime belongs to the genuine reserved order")
	_check(demo.state.set_journey_checkpoint(demo.life.checkpoint()).ok,"in-transit festival journey validates without new checkpoint fields")
	var saved: Dictionary=JSON.parse_string(JSON.stringify(demo.state.snapshot()))
	var restored:=State.new()
	_check(restored.restore(saved).ok,"JSON restores actual commission inventory and actor checkpoint")
	var resumed:=Life.new()
	root.add_child(resumed)
	resumed.set_process(false)
	resumed.setup(restored)
	_check(resumed.workshop.workers.size()==1 and restored.workshop_status("h3").transit.get("kind","")=="festival" and resumed.workshop.workers[0].carry.visible,"fresh Life resumes the same real festival cargo")
	_check(resumed.workshop.workers[0].node.position.distance_to(artisan.node.position)<0.001,"save/load preserves the actual in-transit position")
	resumed.queue_free()
	await process_frame
	demo.selected_house="h3"
	demo._refresh_place()
	await _capture("03_real_carried_commission")
	var before_stock: int=supply.stock
	demo._after_edit(demo.state.remove_road("r5"),"erase")
	await _wait_edit()
	for tick in range(10): demo.life._process(0.1)
	_check(artisan.phase=="paused" and artisan.carry.visible and demo.state.workshop_status("h3").stock==before_stock and demo.state.festival_status("h4").delivered==0,"broken destination road pauses the real gift without settling it")
	var undo:=InputEventKey.new()
	undo.keycode=KEY_Z
	undo.ctrl_pressed=true
	undo.pressed=true
	root.push_input(undo)
	await process_frame
	await _wait_edit()
	var before_level: int=demo.state.improvement_level("h4")
	for tick in range(3600):
		if demo.state.festival_status("h4").ready: break
		demo.life._process(0.1)
	_check(demo.state.festival_status("h4").ready and demo.state.festival_status("h4").delivered==1,"real resumed trip and two-second installation prepare exactly one gift")
	_check(demo.state.improvement_level("h4")==before_level,"festival delivery never invents a permanent upgrade")
	# Let earned afterglow expire through real simulation; the remaining flag is
	# a prepared physical gift, independent of audible daily/ensemble response.
	for tick in range(1250): demo.life._process(0.1)
	demo.music.set_muted(true)
	demo.selected_house="h4"
	demo._refresh_place()
	await _capture("04_prepared_physical_flags_muted")
	var rig: Dictionary=demo.town.resonance.rigs.h4
	_check(rig.mesh.visible and float(rig.material.get_shader_parameter("festival_ready"))==1.0 and float(rig.material.get_shader_parameter("response"))==0.0 and float(rig.material.get_shader_parameter("afterglow"))==0.0,"mute keeps prepared flag and flowers while musical windows stay off")
	var rig_identity: int=rig.mesh.get_instance_id()
	demo.music.set_muted(false)
	await _click(demo.concert_button)
	await _click(demo.concert_button)
	_check(demo.life.concert_status().phase=="idle" and demo.state.festival_status("h4").ready and demo.state.festival_status("h4").used==0,"cancelled actual invitation keeps the prepared gift")
	await _real_performance("05_prepared_real_performance")
	var final: Dictionary=demo.state.festival_status("h4")
	_check(final.requested==2 and final.delivered==1 and final.used==1 and final.pending and not final.ready,"successful prepared concert consumes one gift and renews one order")
	_check(demo.state.afterglow_remaining("h4")>89.5 and demo.state.afterglow_remaining("h4")<=90.0,"prepared performance grants the actual extended ninety-second afterglow")
	_check(demo.state.production_multiplier("h3")==1.25,"extended afterglow keeps the original work bonus without stacking")
	_check(_identity()==identity and demo.music._players.size()==9 and demo.music._effects.size()==4,"full repeat loop retains nine PCM and four transient player identities")
	_check(demo.town.resonance.rigs.h4.mesh.get_instance_id()==rig_identity,"ready/consume/cancel/concert never rebuilds the existing visual rig")
	_check(demo.state.set_journey_checkpoint(demo.life.checkpoint()).ok and State.new().restore(JSON.parse_string(JSON.stringify(demo.state.snapshot()))).ok,"final renewable loop saves and restores atomically")
	await _capture("06_ninety_second_afterglow_new_order")
	wall_frames.sort()
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"observations":observations,"festival":final,"wall_p95_ms":wall_frames[int(wall_frames.size()*0.95)],"wall_max_ms":wall_frames[-1],"draw_calls":Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME),"workshop":demo.state.workshop_status("h3")}
	var file:=FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(result,"\t",true,true))
	print("COMMISSIONS_LIVE ",JSON.stringify(result))
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
