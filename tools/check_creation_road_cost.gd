extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Stroke = preload("res://scripts/world/city_creation_stroke.gd")

func _initialize() -> void:
	_run.call_deferred()

func _run() -> void:
	var state := State.new()
	state.initialize()
	var town := Renderer.new()
	root.add_child(town)
	town.setup(state)
	var points: Array[Vector2] = [Vector2(3,-10),Vector2(7,-10),Vector2(11,-9)]
	assert(state.add_water(points,2.8,"channel").ok)
	points = [Vector2(11,-9)]
	assert(state.add_water(points,4,"pond").ok)
	town.rebuild()
	var raw: Array[Vector2] = [Vector2(-11,9),Vector2(-14,9),Vector2(-15,5),Vector2(-14,1)]
	assert(state.add_road(Stroke.road_points(raw)).ok)
	town.rebuild()
	var report := {"curved_edit":town.rebuild_stats.duplicate(),"meadow":town.meadow.diagnostics(),"shore":town.shore.diagnostics(),"mode":DisplayServer.get_name(),"houses":state.houses.size(),"roads":state.roads.size(),"waters":state.waters.size()}
	state.plants.clear()
	for z in range(-14,15):
		for x in range(-17,17):
			var plant := {"id":"p%d" % (state.plants.size()+1),"position":[x+0.25,z+0.12],"kind":"olive" if (x+z)%5 == 0 else "shrub","scale":0.65,"seed":261014+x*31+z*17,"source":"player"}
			if state.vegetation_visible(plant): state.plants.append(plant)
			if state.plants.size() == 500: break
		if state.plants.size() == 500: break
	town.rebuild()
	report["500_plants"] = town.rebuild_stats.duplicate()
	report["500_meadow"] = town.meadow.diagnostics()
	var label := OS.get_cmdline_user_args()[0] if not OS.get_cmdline_user_args().is_empty() else "current"
	var output := "res://验证记录/草叶融合_2026-10-14/road_cost_"+label+".json"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output.get_base_dir()))
	var file := FileAccess.open(output,FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("CREATION_ROAD_COST ",JSON.stringify(report))
	town.queue_free()
	await process_frame
	quit()
