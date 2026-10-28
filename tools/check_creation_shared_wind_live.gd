extends "res://tools/check_creation_street_furniture_contact_live.gd"
var wind_materials:Array[ShaderMaterial]=[]
func materials_under(node:Node)->void:
	var material:Material=null
	if node is GeometryInstance3D:material=node.material_override
	if material is ShaderMaterial and material not in wind_materials:wind_materials.append(material)
	for child:Node in node.get_children():materials_under(child)
func freeze_wind(time:float)->void:
	wind_materials=[];materials_under(demo.town)
	for material:ShaderMaterial in wind_materials:
		for parameter:Dictionary in material.shader.get_shader_uniform_list():
			if parameter.name in ["wind_time_override","meadow_time_override"]:material.set_shader_parameter(parameter.name,time)
func geometry(node:Node)->Array:
	var rows:Array=[]
	if node is MeshInstance3D:
		for i in range(node.mesh.get_surface_count()):rows.append([node.transform,node.mesh.surface_get_arrays(i)])
	for child:Node in node.get_children():rows.append_array(geometry(child))
	return rows
func run()->void:
	OUT="res://验证记录/M83/wind_before"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	var verify:bool="--verify-wind" in OS.get_cmdline_user_args()
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:=State.new();city.initialize_free()
	check(city.add_house(Vector2(-25,-14)).ok,"public house for real terrace")
	check(city.add_cell("h1",0,0,1,"terrace").ok,"public supported upper terrace")
	check(city.add_road([Vector2(-32,-20),Vector2(-13,-20)] as Array[Vector2],"gravel","none",1.25,"flowers").ok,"actual flower street")
	await show(city,Vector2(-25,-14),"共享微风");quiet();demo.life.set_process(false);demo.ui_layer.hide();demo.set_process(false)
	var original:Dictionary=demo.state.snapshot()
	facts.views=[]
	for subject:String in ["canopy","flowers"]:
		if subject=="canopy":demo.focus=Vector3(-25.27,2.85,-14.);demo.zoom=5.;demo.yaw=.5;demo.pitch=.72
		else:
			var record:Dictionary=demo.town.promenade.prepare(demo.town,demo.state.roads[0])[1]
			demo.focus=Vector3(record.at.x,.45,record.at.y);demo.zoom=3.8;demo.yaw=.5;demo.pitch=.48
		demo._update_camera()
		facts.views.append({"subject":subject,"focus":demo.focus,"zoom":demo.zoom,"camera_position":demo.camera.position})
		for phase in range(3):
			demo._set_light_phase(phase)
			await create_timer(1.5).timeout
			await settle();var mesh_before:Array=geometry(demo.town.house_roots.h1)
			for time:float in [0.,2.5]:freeze_wind(time);await capture(subject+"_phase"+str(phase)+"_t"+str(time))
			check(geometry(demo.town.house_roots.h1)==mesh_before,"wind never rebuilds terrace meshes or moves its supports "+subject+str(phase))
		# Diagnostic close-up uses the same uploaded production meshes. The normal
		# camera remains clamped to its authored 9m minimum in the views above.
		var at:Vector3=demo.focus;demo.camera.size=2.8;demo.camera.position=at+Vector3(1.6,2.,2.4);demo.camera.look_at(at);demo._set_light_phase(0)
		await create_timer(1.5).timeout
		for time:float in [0.,2.5]:freeze_wind(time);await capture(subject+"_detail_t"+str(time))
	check(demo.state.snapshot()==original,"wind has no saved or life history state")
	check(not demo.town.house_roots.h1.get_meta("terrace_canopy",{}).is_empty(),"actual selected terrace publishes cloth through material batching")
	if verify:
		var flowers:=0;var cloths:=0
		for material:ShaderMaterial in wind_materials:
			if material.shader.resource_path.ends_with("creation_soft_wind.gdshader"):
				if material.get_shader_parameter("cloth"):cloths+=1
				else:flowers+=1
		check(cloths==1,"published cloth uses shared world breeze")
		check(flowers>=3,"actual green leaves and both bloom colors share the breeze")
	var choice:Dictionary=demo.town.house_roots.h1.get_meta("terrace_canopy",{})
	var point:Vector2=Vector2(choice.center)+Vector2(-.28,0.)
	await physics_frame
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(point.x,12.,point.y),Vector3(point.x,-2.,point.y),1))
	check(not hit.is_empty() and str(hit.collider.get_meta("house_id",""))=="h1" and str(hit.collider.get_meta("cell_id",""))==str(choice.cell_id) and hit.position.y>2.8,"actual animated canvas retains original upper terrace picking identity")
	demo.set_process(true)
	var removed:Dictionary=demo.state.remove_cell("h1",str(choice.cell_id));demo._after_edit(removed,"history");await settle();quiet()
	check(removed.ok and demo.town.house_roots.h1.get_meta("terrace_canopy",{}).is_empty(),"actual terrace removal removes its animated canvas")
	demo._after_edit(demo.state.undo(),"history");await settle();quiet()
	check(demo.town.house_roots.h1.get_meta("terrace_canopy",{})==choice,"actual Undo republishes same canvas and original identity")
	var published:Array=geometry(demo.town.house_roots.h1)
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot(),"",true,true))).ok,"wind city cold JSON accepted")
	var before:Dictionary=demo.state.snapshot();await show(cold,Vector2(-25,-14),"共享风冷读");quiet();demo.set_process(false);freeze_wind(0.)
	check(demo.state.snapshot()==before and demo.town.house_roots.h1.get_meta("terrace_canopy",{})==choice,"cold GL publication retains original city and canvas")
	check(geometry(demo.town.house_roots.h1)==published,"actual Undo publication equals independent cold mesh buffers and transforms")
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
	frames.sort();facts.frame_observation={"capped":60,"p95_ms":frames[113],"max_ms":frames[-1],"draw_calls":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME),"triangles":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_PRIMITIVES_IN_FRAME)}
	facts.master=await Probe.record(OUT+"/shared_wind_Master.wav",3.2);check(facts.master.ok,"actual WASAPI Master unclipped");check(pool()==voices,"bounded audio players retained")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"verified_wind":verify,"facts":facts}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("SHARED_WIND ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
