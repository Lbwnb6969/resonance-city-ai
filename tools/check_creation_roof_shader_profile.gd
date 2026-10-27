extends "res://tools/check_creation_three_road_modes_live.gd"
const Actions=preload("res://scripts/world/city_creation_hinge_actions.gd")
func sample()->Dictionary:
	for i in range(45):await process_frame
	var frames:Array[float]=[];var cpu:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(240):
		await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
		cpu.append(Performance.get_monitor(Performance.TIME_PROCESS)*1000.)
	frames.sort();cpu.sort();return {"median_ms":frames[120],"p95_ms":frames[227],"max_ms":frames[-1],"process_p95_ms":cpu[227]}
func run()->void:
	OUT="res://验证记录/M68/shader_profile";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=0;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:=State.new();city.initialize_empty();city.add_house(Vector2(-25,-15));city.set_house_style("h1","timber")
	for i in range(1,4):city.add_cell("h1",0,i,0)
	for i in range(4):city.add_cell("h1",0,i,1)
	Actions.set_angle(city,"h1",-28.);await show(city,Vector2(-25,-14.1),"同场屋瓦shader采样");quiet();demo.ui_layer.hide()
	demo.focus=Vector3(-25,3.75,-14.1);demo.zoom=7.;demo.pitch=.95;demo.yaw=.45;demo._set_light_phase(0);demo._update_camera()
	var materials:Array=[]
	for mesh:MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		for surface in range(mesh.mesh.get_surface_count()):
			var material:Material=mesh.get_active_material(surface)
			if material is ShaderMaterial and material.shader==demo.town.JoinedRoofShader and material not in materials:materials.append(material)
	check(not materials.is_empty(),"actual published roof material for same-process A/B")
	var reference:=Shader.new();reference.code=FileAccess.get_file_as_string(OUT+"/reference.gdshader")
	var profiles:Array=[]
	for label:String in ["current_first","reference","current_second"]:
		for material:ShaderMaterial in materials:material.shader=reference if label=="reference" else demo.town.JoinedRoofShader
		var metrics:Dictionary=await sample();metrics.label=label;profiles.append(metrics)
	var result:={"ok":failures.is_empty(),"profiles":profiles,"failures":failures,"viewport":[1440,900],"cap":0,"vsync":"disabled","reference_revision":"backup/before-m68-20261027"}
	FileAccess.open(OUT+"/profile.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("ROOF_SHADER_PROFILE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
