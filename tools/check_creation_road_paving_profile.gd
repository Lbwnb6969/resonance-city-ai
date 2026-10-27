extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
func sample()->Dictionary:
	for i in range(45):await process_frame
	var times:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame;var now:=Time.get_ticks_usec();times.append((now-last)/1000.);last=now
	times.sort();return {"median_ms":times[60],"p95_ms":times[113],"max_ms":times[-1]}
func run()->void:
	OUT="res://验证记录/M71/profile";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=0;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:=State.new();city.initialize_empty();var points:Array[Vector2]=[Vector2(-32,-20),Vector2(-25,-19.2),Vector2(-18,-20)]
	check(city.add_road(points,"cobble","none",4.8).ok,"same real broad cobbled road")
	await show(city,Vector2(-25,-19.2),"同场路面采样");quiet();demo.ui_layer.hide()
	demo.focus=Vector3(-25,.1,-19.2);demo.zoom=7.;demo.pitch=.95;demo._update_camera()
	var surface:MeshInstance3D=demo.town.road_roots.r1.get_node("PathSurface")
	var material:ShaderMaterial=surface.material_override;var current:Shader=material.shader
	var reference:=Shader.new();reference.code=FileAccess.get_file_as_string(OUT+"/reference.gdshader")
	var profiles:Array=[]
	for label:String in ["current_first","reference_before_m71","current_second"]:
		material.shader=reference if label=="reference_before_m71" else current
		var metrics:Dictionary=await sample();metrics.label=label;profiles.append(metrics)
	await capture("cobble_final_day");demo._set_light_phase(2);await capture("cobble_final_night")
	var result:={"ok":failures.is_empty(),"profiles":profiles,"failures":failures,"viewport":[1440,900],"fps_cap":0,"vsync":"disabled"}
	FileAccess.open(OUT+"/profile.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("ROAD_PAVING_PROFILE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
