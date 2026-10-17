extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")

func _initialize() -> void:
	_run.call_deferred()

func _capture(demo: Node3D, output: String, label: String) -> void:
	demo.town.clear_preview()
	await process_frame
	await process_frame
	if DisplayServer.get_name() != "headless": root.get_texture().get_image().save_png(output+"/"+label+".png")

func _run() -> void:
	root.size = Vector2i(1440,900)
	var demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	demo.ui_layer.visible = false
	# Fixed authored garden and creek for repeatable art/lighting comparison.
	var points: Array[Vector2] = [Vector2(3,-10),Vector2(7,-10),Vector2(11,-9)]
	demo.state.add_water(points,2.8,"channel")
	points = [Vector2(11,-9)]
	demo.state.add_water(points,4.0,"pond")
	demo.town.rebuild()
	var raw: Array[Vector2] = [Vector2(-11,9),Vector2(-14,9),Vector2(-15,5),Vector2(-14,1)]
	var curve: Array[Vector2] = preload("res://scripts/world/city_creation_stroke.gd").road_points(raw)
	var road: Dictionary = demo.state.add_road(curve)
	if not road.ok:
		push_error(road.message)
		quit(1)
		return
	demo.town.rebuild()
	var output := "res://验证记录/TinyGlade美术_2026-10-14"
	if "--concert-nature" in OS.get_cmdline_user_args(): output = "res://验证记录/街坊演出_2026-10-14/grass"
	if "--grass-carpet" in OS.get_cmdline_user_args(): output = "res://验证记录/连续草地_2026-10-14"
	if "--grass-blend" in OS.get_cmdline_user_args(): output = "res://验证记录/草地融合_2026-10-14"
	if "--natural-shore" in OS.get_cmdline_user_args(): output = "res://验证记录/自然水岸_2026-10-14"
	if "--soft-meadow-before" in OS.get_cmdline_user_args(): output = "res://验证记录/柔草团簇_2026-10-14/before"
	if "--soft-meadow-after" in OS.get_cmdline_user_args(): output = "res://验证记录/柔草团簇_2026-10-14/after"
	var ribbon_before := "--ribbon-blend-before" in OS.get_cmdline_user_args()
	var ribbon_after := "--ribbon-blend-after" in OS.get_cmdline_user_args()
	if ribbon_before or ribbon_after: output = "res://验证记录/草叶融合_2026-10-14"
	if "--road-frontage" in OS.get_cmdline_user_args(): output = "res://验证记录/道路门廊_2026-10-14/nature"
	if "--soft-path-before" in OS.get_cmdline_user_args(): output = "res://验证记录/柔和路缘_2026-10-15/before"
	if "--soft-path-after" in OS.get_cmdline_user_args(): output = "res://验证记录/柔和路缘_2026-10-15/after"
	if "--art-stress" in OS.get_cmdline_user_args():
		output += "/stress"
		demo.state.plants.clear()
		for z in range(-14,15):
			for x in range(-17,17):
				var plant := {"id":"p%d" % (demo.state.plants.size()+1),"position":[x+0.25,z+0.12],"kind":"olive" if (x+z)%5 == 0 else "shrub","scale":0.65,"seed":261014+x*31+z*17,"source":"player"}
				if demo.state.vegetation_visible(plant): demo.state.plants.append(plant)
				if demo.state.plants.size() == 500: break
			if demo.state.plants.size() == 500: break
		demo.town.rebuild()
		demo.focus = Vector3(0,0.7,0)
		demo.zoom = 40
		demo._update_camera()
	else: output += "/before" if ribbon_before else "/after"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	var started := Time.get_ticks_msec()
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()-started < 12000: await process_frame
	demo.frame_samples.clear()
	for frame in range(540 if ribbon_before or ribbon_after or "--road-frontage" in OS.get_cmdline_user_args() or "--soft-meadow-after" in OS.get_cmdline_user_args() else 300): await process_frame
	var report: Dictionary = demo.diagnostics()
	report.erase("world")
	report["viewport"] = "1440x900"
	report["life_paused"] = false
	var held_blocks := {}
	var edited_block := Vector2i.ZERO
	if demo.state.plants.size() == 500:
		var plant: Dictionary = demo.state.plants[0]
		edited_block = demo.town._vegetation_block(demo.town._plant_position(plant))
		for block: Vector2i in demo.town.meadow.blocks:
			if block != edited_block: held_blocks[block] = demo.town.meadow.blocks[block].get_instance_id()
		plant.scale = 0.70
		demo.town.rebuild()
		report["single_block_edit"] = demo.town.rebuild_stats.duplicate()
		report["single_block_meadow"] = demo.town.meadow.diagnostics()
		var retained := true
		for block: Vector2i in held_blocks:
			retained = retained and demo.town.meadow.blocks[block].get_instance_id() == held_blocks[block]
		report["unrelated_meadow_retained"] = retained
	await _capture(demo,output,"street_day")
	demo.focus = Vector3(0,0.7,0)
	demo.zoom = 40
	demo._update_camera()
	await _capture(demo,output,"city_day")
	demo.focus = Vector3(-8,0.7,-5)
	demo.zoom = 14
	demo._update_camera()
	await _capture(demo,output,"house_day")
	if ribbon_before or ribbon_after or "--soft-meadow-after" in OS.get_cmdline_user_args():
		demo.focus = Vector3(-10.8,0.15,-7.4)
		demo.zoom = 7
		demo._update_camera()
		await _capture(demo,output,"ground_close")
	demo.home_camera()
	demo._toggle_light()
	await _capture(demo,output,"street_evening")
	var file := FileAccess.open(output+"/performance.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("CREATION_ART ",JSON.stringify(report))
	demo.queue_free()
	await process_frame
	quit(0 if not report.audio.is_empty() and float(report.frame_p95_ms) < 16.667 else 1)
