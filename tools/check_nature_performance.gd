extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")
class FrameSampler extends Node:
	var active:=false
	var last:=Time.get_ticks_usec()
	var samples: Array[float]=[]
	func _process(_delta: float) -> void:
		var now:=Time.get_ticks_usec()
		if active: samples.append((now-last)/1000.0)
		last=now
func _initialize() -> void:
	_run.call_deferred()
func _run() -> void:
	root.size = Vector2i(1440,900)
	var demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	var sampler:=FrameSampler.new()
	root.add_child(sampler)
	await process_frame
	demo.persistence = false
	demo.life.set_process(false)
	demo.state.plants.clear()
	# Synthetic density fixture: 500 small shrubs/trees, obstacles still filter
	# by the production visibility query. It measures batching, not brush density.
	for z in range(-14,15):
		for x in range(-17,17):
			var plant := {"id":"p%d" % (demo.state.plants.size()+1),"position":[x+0.25,z+0.12],"kind":"olive" if (x+z)%5 == 0 else "shrub","scale":0.65,"seed":261014+x*31+z*17,"source":"player"}
			if demo.state.vegetation_visible(plant): demo.state.plants.append(plant)
			if demo.state.plants.size() == 500: break
		if demo.state.plants.size() == 500: break
	demo.town.rebuild()
	var build_stats: Dictionary = demo.town.rebuild_stats.duplicate()
	demo.focus = Vector3(-2,0,0)
	demo.zoom = 38
	demo._update_camera()
	demo.ui_layer.visible = false
	var warmup_started := Time.get_ticks_msec()
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()-warmup_started < 12000:
		await process_frame
	demo.frame_samples.clear()
	for frame in range(90): await process_frame
	sampler.active=true
	for frame in range(300): await process_frame
	sampler.active=false
	sampler.samples.sort()
	var report: Dictionary = demo.diagnostics()
	report["wall_p95_ms"]=sampler.samples[int((sampler.samples.size()-1)*0.95)]
	report["wall_max_ms"]=sampler.samples[-1]
	report["geometry_sha256"]=JSON.stringify([demo.state.houses,demo.state.roads,demo.state.plants,demo.state.waters],"",true,true).sha256_text()
	report.erase("world")
	report["fixture"] = "500 synthetic mixed shrubs/trees; 1440x900; full audio"
	report["initial_build"] = build_stats
	var plant: Dictionary = demo.state.plants[0]
	var first := Vector2i(floori(float(plant.position[0])/8.0),floori(float(plant.position[1])/8.0))
	var preserved := {}
	for key in demo.town.vegetation_blocks:
		if key != first: preserved[key] = demo.town.vegetation_blocks[key].get_instance_id()
	plant.scale = 0.7
	demo.town.rebuild()
	report["local_edit"] = demo.town.rebuild_stats.duplicate()
	var unchanged := true
	for key in preserved:
		unchanged = unchanged and demo.town.vegetation_blocks[key].get_instance_id() == preserved[key]
	report["unrelated_blocks_preserved"] = unchanged
	report["ok"] = unchanged and not report.audio.is_empty() and demo.state.plants.size() == 500 and float(report.frame_p95_ms) <= 16.667 and int(report.local_edit.vegetation_blocks_changed) == 1
	var output := "res://验证记录/自然与生活_2026-10-14"
	var args := OS.get_cmdline_user_args()
	if not args.is_empty(): output=str(args[0])
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	var file := FileAccess.open(output+"/performance.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	await process_frame
	if DisplayServer.get_name() != "headless": root.get_texture().get_image().save_png(output+"/500plants.png")
	print("NATURE_PERFORMANCE ",JSON.stringify(report))
	demo.queue_free()
	await process_frame
	quit(0 if report.ok else 1)
