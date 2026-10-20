extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")
const OUTPUT := "res://验证记录/面包坊供给_2026-10-14"
var failures: Array[String] = []
var demo: Node3D

func _initialize() -> void:
	_run.call_deferred()

func _check(ok: bool, label: String) -> void:
	if not ok:
		failures.append(label)
		push_error(label)

func _capture(label: String) -> void:
	demo._refresh_bakeries()
	demo.life_info.text = demo.life.summary()
	demo.town.clear_preview()
	await process_frame
	await process_frame
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")

func _advance(seconds: float) -> void:
	for index in range(ceili(seconds/0.1)): demo.life._process(0.1)

func _click(button: Button) -> void:
	var at := button.get_global_rect().get_center()
	var motion := InputEventMouseMotion.new()
	motion.position = at
	root.push_input(motion)
	await process_frame
	for pressed in [true,false]:
		var event := InputEventMouseButton.new()
		event.button_index = MOUSE_BUTTON_LEFT
		event.position = at
		event.global_position = at
		event.pressed = pressed
		root.push_input(event)
		await process_frame

func _run() -> void:
	root.size = Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.selected_house = "h2"
	demo.select_tool(4)
	demo._refresh_place()
	var deadline := Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.music.audio_report.is_empty(),"actual shared music bank ready")
	_check(demo.life.bakery_status("h2").worker_phase=="walking","real baker begins at a reachable home")
	_check(demo.state.bakery_status("h2").produced==0,"no automatic stock at entry")
	await _capture("commute")
	for step in range(1000):
		if demo.life.bakery_status("h2").worker_phase=="baking": break
		demo.life._process(0.1)
	_check(demo.life.bakery_status("h2").worker_phase=="baking","baker really reaches workplace")
	_advance(2.0)
	await _capture("first_oven")
	var elapsed: float = demo.life.bakery_status("h2").elapsed
	var worker_id: int = demo.life.bakery.workers[0].node.get_instance_id()
	var house_id: int = demo.town.house_roots.h2.get_instance_id()
	await _click(demo.bakery_button)
	_check(not demo.state.bakery_status("h2").open,"actual viewport pause button pauses baking")
	_advance(10)
	_check(demo.life.bakery_status("h2").elapsed==elapsed and demo.state.bakery_status("h2").produced==0,"paused unfinished oven neither advances nor creates bread")
	await _capture("paused")
	await _click(demo.bakery_button)
	_check(demo.state.bakery_status("h2").open,"actual viewport button resumes oven")
	_check(demo.life.bakery.workers[0].node.get_instance_id()==worker_id and demo.town.house_roots.h2.get_instance_id()==house_id,"oven controls retain worker and building meshes")
	_advance(4.1)
	demo._refresh_bakeries()
	_check(demo.state.bakery_status("h2").produced==2,"actual remaining oven dwell produces exactly one room-sized batch")
	_check(demo.state.bakery_status("h2").served>0,"real waiting customer consumes real bread")
	_check(demo.music._effects.any(func(player:AudioStreamPlayer)->bool:return player.playing and player.stream==demo.music._edit_streams.bakery),"successful oven completion starts its actual short sound")
	await _capture("fresh_bread")
	var supply: Dictionary=demo.state.bakery_status("h2")
	_check(supply.stock==supply.produced-supply.served and demo.state.life_progress.purchases==supply.served,"supply and purchase counters conserve actual bread")
	var visible := mini(3,int(supply.stock))
	_check(demo.town.bread_roots.h2.get_meta("displayed_loaves")==visible,"counter displays actual stock representatives")
	var before_resize := supply.duplicate()
	demo._after_edit(demo.state.add_cell("h2",0,0,2,"room"),"room")
	_check(demo.state.bakery_status("h2").capacity==18 and demo.state.bakery_status("h2").batch_size==3,"actual room expansion adds storage and batch size")
	_check(demo.state.bakery_status("h2").stock==before_resize.stock,"expansion does not invent supply")
	await _capture("expanded")
	demo._capture_journeys()
	var save := "user://bakery_supply_review_%d.json" % Time.get_ticks_usec()
	_check(demo.state.save_city(save).ok,"isolated work/supply save succeeds")
	var loaded := preload("res://scripts/world/city_creation_state.gd").new()
	_check(loaded.load_city(save).ok and loaded.bakery_supply==demo.state.bakery_supply,"saved supply restores exactly")
	var restored := preload("res://scripts/world/city_creation_life.gd").new()
	root.add_child(restored)
	restored.set_process(false)
	restored.setup(loaded)
	_check(absf(float(restored.bakery_status("h2").elapsed)-float(demo.life.bakery_status("h2").elapsed))<0.00001,"saved baker retains actual oven elapsed")
	restored.free()
	demo.life.set_process(true)
	demo.frame_samples.clear()
	# Allow a complete FPS reporting interval after screenshots and save work.
	for frame in range(540): await process_frame
	var report: Dictionary=demo.diagnostics()
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"measurement":report.frame_p95_ms,"policy":"reference_only"}))
	var record := {"ok":failures.is_empty(),"failures":failures,"supply":demo.life.bakery_status("h2"),"performance":report,"state_save":save}
	var file := FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(record,"\t",true,true))
	file.close()
	print("CREATION_BAKERY ",JSON.stringify({"ok":failures.is_empty(),"failures":failures,"supply":record.supply,"fps":report.fps,"p95_ms":report.frame_p95_ms,"edits":report.edit_rebuild_ms}))
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
