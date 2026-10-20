extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")
const OUTPUT := "res://验证记录/街坊演出_2026-10-14"
var failures: Array[String] = []

func _initialize() -> void: _run.call_deferred()

func _check(value: bool, label: String) -> void:
	if not value: failures.append(label)

func _picture(label: String) -> void:
	await process_frame
	await process_frame
	if DisplayServer.get_name() != "headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")

func _run() -> void:
	root.size = Vector2i(1440,900)
	var demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	await process_frame
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo.focus = Vector3(-3,0.7,1)
	demo.zoom = 20
	demo._update_camera()
	demo.selected_house = "h4"
	demo.select_tool(4)
	demo._refresh_place()
	demo.life.set_process(false)
	var started := Time.get_ticks_msec()
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()-started < 15000: await process_frame
	_check(not demo.music.audio_report.is_empty(),"actual production PCM ready")
	# The visible button dispatches the same user signal as a normal click.
	demo.concert_button.pressed.emit()
	_check(str(demo.life.concert_status().phase) == "gathering","visible invite button starts actual gathering")
	demo._refresh_concert()
	await _picture("invitation")
	for step in range(1200):
		if str(demo.life.concert_status().phase) == "playing": break
		demo.life._process(0.1)
	_check(str(demo.life.concert_status().phase) == "playing","real travel reaches public concert")
	demo._refresh_concert()
	var holding: Dictionary = demo.life.checkpoint()
	await _picture("playing")
	demo.life.set_process(true)
	demo.frame_samples.clear()
	for frame in range(300): await process_frame
	var performance: Dictionary = demo.diagnostics()
	performance.erase("world")
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"measurement":performance.frame_p95_ms,"policy":"reference_only"}))
	_check(bool(performance.concert_music.concert_active),"playing event activates musical stem")
	var sources: Array[String] = []
	var response_started := Time.get_ticks_msec()
	while Time.get_ticks_msec()-response_started < 22000:
		var source: Dictionary = demo.music.active_source()
		if bool(source.get("audible",false)) and not sources.has(str(source.source_id)):
			sources.append(str(source.source_id))
			demo._refresh_concert()
			demo.town.update_house_music(source)
			await _picture("response_"+str(source.source_id))
		if sources.size() >= 4: break
		await process_frame
	_check(sources.has("h4") and sources.has("h1") and sources.has("h3") and sources.has("h5"),"actual playback rotates stage and all three participating houses")
	demo.music.set_muted(true)
	await process_frame
	await process_frame
	_check(demo.town.house_music_source.is_empty(),"muting removes only audible house markers")
	_check(str(demo.life.concert_status().phase) == "playing","mute keeps actual public activity running")
	demo.music.set_muted(false)
	_check(demo.state.set_journey_checkpoint(demo.life.checkpoint()).ok,"playing checkpoint accepted")
	var saved: Dictionary = demo.state.save_city("user://city_creation_public_concert_review.json")
	_check(saved.ok,"review save during performance")
	demo.life.set_process(false)
	for step in range(250): demo.life._process(0.1)
	demo._refresh_concert()
	_check(int(demo.state.life_progress.concerts) == 1 and str(demo.life.concert_status().phase) == "idle","completion records exactly once then releases daily travel")
	_check(not demo.music.concert_active,"completion releases concert music")
	await _picture("finished")
	var report := {"ok":failures.is_empty(),"failures":failures,"audible_sources":sources,"playing_checkpoint":holding,"performance":performance,"completed":demo.state.life_progress.duplicate(),"review_save":saved}
	var file := FileAccess.open(OUTPUT+"/play_report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("PUBLIC_CONCERT ",JSON.stringify(report))
	demo.queue_free()
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
