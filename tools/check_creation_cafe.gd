extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const OUTPUT := "res://验证记录/花圃茶座_2026-10-15/live"
var demo: Node3D
var checks := 0
var failures: Array[String]=[]

func _initialize() -> void: _run.call_deferred()

func _check(ok: bool, label: String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)

func _capture(label: String) -> void:
	demo._refresh_cafes()
	demo.town.clear_preview()
	await process_frame
	await process_frame
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")

func _click(control: Control) -> void:
	# A role change can alter a VBox's visible children. Let actual GUI layout
	# settle before asking for the current on-screen button rectangle.
	await process_frame
	await process_frame
	var point := control.get_global_rect().get_center()
	_check(control.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(root.size)).has_point(point),"requested control is inside visible viewport: "+control.name)
	var motion := InputEventMouseMotion.new()
	motion.position=point
	motion.global_position=point
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event := InputEventMouseButton.new()
		event.position=point
		event.global_position=point
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
	demo.life.set_process(false)
	demo.selected_house="h3"
	demo.select_tool(4)
	demo.focus=Vector3(-6,0.7,1)
	demo.zoom=17
	demo.yaw=0.4
	demo._update_camera()
	await physics_frame
	await process_frame
	var until := Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty(),"actual production music bank ready")
	await _click(demo.role_buttons.garden_cafe)
	_check(demo.town._house_record("h3").role=="garden_cafe","visible role button creates actual garden cafe")
	_check(not demo.life.cafe.layouts.h3.is_empty(),"default double room has an actual clear three-seat garden")
	var plan: Dictionary=demo.life.cafe.layouts.h3
	var visible_plan: Dictionary=demo.town.cafes.roots.h3.get_meta("layout")
	_check(visible_plan.center==plan.center and visible_plan.seats==plan.seats and visible_plan.entrance==plan.entrance,"rendered table and physical guest destinations use identical layout")
	_check(demo.life.cafe_status("h3").arrived==0 and demo.state.life_progress.tea_visits==0,"new cafe never invents seated customers or tea")
	# A real additional path makes the bakery, venue and garden a convenient
	# walking circuit. It is a normal validated road transaction.
	var shortcut: Array[Vector2]=[Vector2(-2.4,-3.45),Vector2(-4.0,-3.45),Vector2(-4,1.55),Vector2(-8,1.55)]
	var road: Dictionary=demo.state.add_road(shortcut)
	_check(road.ok,"real shortcut connects existing service entrances without crossing buildings")
	demo._after_edit(road,"road")
	await _capture("01_new_cafe_no_fake_customers")
	demo.selected_house="h4"
	demo._refresh_place()
	await _click(demo.concert_button)
	_check(demo.life.concert_status().phase=="gathering","visible invitation starts actual neighbor gathering")
	for step in range(2400):
		var gathering: Dictionary=demo.life.concert_status()
		if int(gathering.arrived)==int(gathering.invited): break
		demo.life._process(0.1)
	demo.life.set_process(true)
	until=Time.get_ticks_msec()+7500
	while demo.life.concert_status().phase!="playing" and Time.get_ticks_msec()<until: await process_frame
	_check(demo.life.concert_status().phase=="playing","real audio gate starts public concert on its shared downbeat")
	until=Time.get_ticks_msec()+27000
	while demo.life.concert_status().phase!="idle" and Time.get_ticks_msec()<until: await process_frame
	demo.life.set_process(false)
	_check(int(demo.state.life_progress.concerts)==1 and demo.state.afterglow_remaining("h3")>55.0,"full real twenty-four-second concert earns actual cafe afterglow")
	demo.selected_house="h3"
	demo._refresh_place()
	for step in range(5000):
		if str(demo.life.cafe_status("h3").phase)=="tea": break
		demo.life._process(0.1)
	var tea: Dictionary=demo.life.cafe_status("h3")
	_check(tea.phase=="tea" and int(tea.arrived)>=2 and int(tea.arrived)<=3,"actual bread customers really walk to two or three distinct seats")
	_check(demo.state.life_progress.purchases>=tea.arrived and demo.state.life_progress.tea_visits==0,"real purchases precede any completed tea visit")
	var homes: Array=tea.participants.duplicate()
	for home: String in homes:
		var resident: Dictionary=demo.life.cafe._resident(home)
		var expected: Vector2=demo.life.cafe.layouts.h3.seats[int(resident.cafe_visit.seat)]
		_check(Vector2(resident.node.position.x,resident.node.position.z).distance_to(expected)<0.15,"real resident occupies actual visible chair "+home)
	var timer_before: float=demo.state.afterglow_remaining("h3")
	_check(timer_before>8.0,"convenient actual road circuit brings customers before earned afterglow expires")
	demo._capture_journeys()
	var save := "user://cafe_review_%d.json" % Time.get_ticks_usec()
	_check(demo.state.save_city(save).ok,"seated tea journey saves through production persistence")
	var loaded := State.new()
	_check(loaded.load_city(save).ok,"real JSON restores food credit and social journey")
	var restored := Life.new()
	root.add_child(restored)
	restored.set_process(false)
	restored.setup(loaded)
	_check(restored.cafe_status("h3").phase=="tea" and restored.cafe_status("h3").arrived==tea.arrived and is_equal_approx(float(restored.cafe_status("h3").elapsed),float(tea.elapsed)),"reload resumes same seated group and elapsed without premature settlement")
	restored.free()
	var root_id: int=demo.town.cafes.roots.h3.get_instance_id()
	var builds: int=demo.town.cafes.build_count
	var home_id: int=demo.town.house_roots.h3.get_instance_id()
	demo.focus=Vector3(plan.center.x,0.7,plan.center.y)
	demo.zoom=10.5
	demo.yaw=0.45
	demo.pitch=0.72
	demo._update_camera()
	await _capture("02_actual_two_neighbors_seated")
	demo.life.set_process(true)
	var saw_flute := false
	var muted_checked := false
	until=Time.get_ticks_msec()+8500
	while int(demo.state.life_progress.tea_parties)==0 and Time.get_ticks_msec()<until:
		var actual_cue: Dictionary=demo.music.cafe_music_report()
		if bool(actual_cue.audible) and not saw_flute:
			saw_flute=true
			await _capture("03_real_flute_and_conversation")
			await _click(demo.music_button)
			_check(demo.music.muted and not demo.music.cafe_music_report().audible and demo.life.cafe_status("h3").phase=="tea","actual mute clears tea music while real conversation continues")
			await _click(demo.music_button)
			muted_checked=true
		await process_frame
	demo.life.set_process(false)
	_check(saw_flute and muted_checked,"actual common phrase produces audible flute and real mute control is exercised")
	var timer_after: float=demo.state.afterglow_remaining("h3")
	_check(demo.state.life_progress.tea_parties==1 and demo.state.life_progress.tea_visits==homes.size(),"six real seconds together settle exactly one party and actual guest count")
	_check(demo.state.afterglow_remaining("h3")>timer_before+20.0,"completed actual tea extends previously earned cafe afterglow by thirty seconds")
	for home: String in homes: _check(not demo.state.has_cafe_credit(home),"completed tea spends actual single bread credit "+home)
	_check(demo.town.cafes.roots.h3.get_instance_id()==root_id and demo.town.cafes.build_count==builds and demo.town.house_roots.h3.get_instance_id()==home_id,"tea, music, mute and settlement preserve furniture and structural GPU instances")
	await _capture("04_completed_tea_afterglow")
	demo._capture_journeys()
	_check(demo.state.save_city(save).ok and loaded.load_city(save).ok and loaded.cafe_progress==demo.state.cafe_progress and loaded.cafe_credits==demo.state.cafe_credits,"completed party and spent food credits survive JSON with no duplicate reward")
	demo.life.set_process(true)
	demo.home_camera()
	demo.frame_samples.clear()
	for frame in range(540): await process_frame
	var performance: Dictionary=demo.diagnostics()
	_check(float(performance.frame_p95_ms)<16.667,"audible garden cafe city meets current six-house frame budget")
	_check(demo.music._players.size()==9 and demo.music._effects.size()==4,"garden cafe keeps fixed nine loops and four short voices")
	await _capture("05_living_garden_neighborhood")
	var record := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"performance":performance,"cafe":demo.life.cafe_status("h3"),"layout":demo.life.cafe.layouts.h3,"timer_before":timer_before,"timer_after":timer_after,"cafe_music":demo.music.cafe_music_report(),"food":demo.state.cafe_credits,"progress":demo.state.cafe_progress,"save":save}
	var file := FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(record,"\t",true,true))
	file.close()
	print("CREATION_CAFE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"fps":performance.fps,"p95_ms":performance.frame_p95_ms,"draw":performance.draw_calls,"tea":record.progress}))
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
