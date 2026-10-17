extends SceneTree
## Same world, camera, material, shadows and earned geometry. Only the helper
## implementation is switched; the archived pre-merge source is the A/B control.
const Scene = preload("res://scenes/city_creation.tscn")
const OUTPUT := "res://验证记录/花圃茶座_2026-10-15/performance"
const LEGACY := "res://废弃/花圃茶座_2026-10-15/city_creation_craft.gd.txt"
var checks := 0
var failures: Array[String] = []
var demo

func _initialize() -> void: _run.call_deferred()

func _check(value: bool, label: String) -> void:
	checks += 1
	if not value: failures.append(label)

func _sample(label: String) -> Dictionary:
	demo.frame_samples.clear()
	for frame in range(120): await process_frame
	var draws: Array[float] = []
	var triangles: Array[float] = []
	for frame in range(60):
		await process_frame
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
		triangles.append(Performance.get_monitor(Performance.RENDER_TOTAL_PRIMITIVES_IN_FRAME))
	draws.sort()
	triangles.sort()
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")
	return {"draw_calls_median":draws[30],"triangles_median":triangles[30],"fps":Performance.get_monitor(Performance.TIME_FPS),"p95_ms":demo.diagnostics().frame_p95_ms}

func _run() -> void:
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.selected_house="h3"
	demo.select_tool(4)
	demo._after_edit(demo.state.set_house_role("h3","workshop"),"role")
	for target: String in ["h1","h4","h5"]:
		for level in range(3):
			if int(demo.state.workshop_status("h3").stock)==0:
				_check(demo.state.produce_craft("h3",2),"real conserved two-room production")
			_check(demo.state.reserve_craft("h3","h5",target),"real target reserves physical stock")
			_check(demo.state.complete_craft("h3","h5",target),"real reservation earns target decoration")
	demo._refresh_workshops()
	demo.home_camera()
	demo._refresh_place()
	var started := Time.get_ticks_msec()
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()-started<20000: await process_frame
	_check(not demo.music.audio_report.is_empty(),"nine-track audio bank ready in both measured cases")
	var legacy_script := GDScript.new()
	legacy_script.source_code=FileAccess.get_file_as_string(LEGACY)
	_check(legacy_script.reload()==OK,"archived pre-merge helper compiles as independent A/B control")
	var legacy=legacy_script.new()
	legacy.setup(demo.town)
	legacy.progress(demo.town)
	legacy.supply(demo.town,{"h3":demo.state.workshop_status("h3")})
	legacy.layer.visible=false
	var current=demo.town.craft
	var merged: Dictionary=await _sample("01_combined_static")
	current.layer.visible=false
	legacy.layer.visible=true
	var baseline: Dictionary=await _sample("02_previous_separate_pieces")
	_check(merged.draw_calls_median<baseline.draw_calls_median,"same full-shadow scene issues fewer actual draw calls")
	var previous_objects := 0
	var current_objects := 0
	for id: String in current.roots:
		previous_objects += legacy.roots[id].get_child_count()
		current_objects += current.roots[id].get_child_count()
		_check(current.roots[id].get_meta("placements")==legacy.roots[id].get_meta("placements"),"archived independent helper places exactly the same earned pieces for "+id)
	_check(previous_objects==11 and current_objects==6,"three max-tier homes reduce eleven real decorative draw objects to six; terrace home has no obstructing pergola")
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"legacy":baseline,"combined":merged,"draw_calls_saved":baseline.draw_calls_median-merged.draw_calls_median,"previous_objects":previous_objects,"combined_objects":current_objects,"improvements":demo.state.house_improvements,"stock":demo.state.workshop_status("h3"),"shadow_policy":"unchanged_all_pieces_cast_real_shadows","geometry_policy":"same exact placements and triangle geometry; combined house bounds can submit extra triangles in shadow passes","scope":"same six-house, seven-road, three max-tier homes and one stock chime; both UI and nine music stems active"}
	var file := FileAccess.open(OUTPUT+"/craft_batching.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t"))
	file.close()
	print("CREATION_CRAFT_BATCHING ",JSON.stringify(report))
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
