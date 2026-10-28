extends "res://tools/check_creation_hinge_roof_uv_live.gd"
func digest(id:String)->Dictionary:
	var coordinates:=PackedVector2Array()
	for mesh:MeshInstance3D in demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false):
		for surface in range(mesh.mesh.get_surface_count()):
			var material:Material=mesh.material_override if mesh.material_override!=null else mesh.mesh.surface_get_material(surface)
			if material is ShaderMaterial and material.shader==demo.town.JoinedRoofShader:coordinates.append_array(mesh.mesh.surface_get_arrays(surface)[Mesh.ARRAY_TEX_UV])
	return {"geometry":uv_stats(id),"coordinates_hash":Array(var_to_bytes(coordinates)).hash()}
func run()->void:
	OUT="res://验证记录/M83/valley_live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var shapes:={"L":[Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(0,2)],"U":[Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(2,1),Vector2i(0,2),Vector2i(2,2)]}
	facts.cases=[]
	for shape:String in shapes:
		var city:=State.new();city.initialize_free();check(city.add_house(Vector2(-25,-15)).ok and city.set_house_style("h1","timber").ok,"actual valley host")
		for cell:Vector2i in shapes[shape]:check(city.add_cell("h1",cell.x,cell.y,0).ok,"public union room")
		check(city.add_house(Vector2(-12,-15)).ok and city.add_cell("h2",1,0,0).ok,"independent distant roof")
		await show(city,Vector2(-23,-13),"屋谷几何 "+shape);quiet();demo.focus=Vector3(-23.2,2.1,-13.2);demo.zoom=10.;demo.pitch=.85;demo.yaw=.55;demo._update_camera();await settle()
		await select_house("h1");await key(KEY_ESCAPE);demo.ui_layer.hide()
		var original:Dictionary=demo.state.snapshot();var initial:=digest("h1");var far_id:int=demo.town.house_roots.h2.get_instance_id();var far:=digest("h2")
		check(initial.geometry.flat_uv==0 and initial.geometry.triangles>0,"all actual union triangles retain nondegenerate UV")
		for phase in range(3):demo._set_light_phase(phase);await create_timer(1.5).timeout;await capture(shape+"_phase"+str(phase))
		demo.pitch=.23;demo._update_camera();await capture(shape+"_low");demo.pitch=.85;demo._update_camera()
		var added:Dictionary=demo.state.add_cell("h1",1,1,0);demo._after_edit(added,"history");await settle();quiet();check(added.ok,"actual inner room changes valley geometry")
		var changed:=digest("h1");check(changed!=initial,"edit really changes published roof")
		await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==original.houses and digest("h1")==initial,"native Undo restores authored houses, original roof vertices and every UV")
		check(int(demo.state.snapshot().high_watermark.cell)>int(original.high_watermark.cell),"Undo preserves issued cell identity instead of reusing it")
		await key(KEY_Y,true);await settle();quiet();check(digest("h1")==changed,"native Redo restores exact edited roof and UV")
		check(demo.town.house_roots.h2.get_instance_id()==far_id and digest("h2")==far,"local roof edit preserves distant published instance and mesh")
		var snapshot:Dictionary=demo.state.snapshot();var path:=OUT+"/"+shape+"_world.json";FileAccess.open(path,FileAccess.WRITE).store_string(JSON.stringify(snapshot,"",true,true))
		var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok,"actual isolated disk cold read")
		await show(cold,Vector2(-23,-13),"屋谷冷算 "+shape);quiet();check(digest("h1")==changed,"independent cold publication equals incremental vertices and UV")
		facts.cases.append({"shape":shape,"before":initial,"edited":changed})
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok,"actual Master recording unclipped")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(current==voices and current.size()==12 and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"original actual bounded audio pool")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ROOF_VALLEYS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
