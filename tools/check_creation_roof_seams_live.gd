extends "res://tools/check_creation_three_road_modes_live.gd"
## Same authored towers, production shaders and light rig for before/after.
func run()->void:
	OUT="res://验证记录/M67/baseline"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=State.new();city.initialize_empty();city.signature_unlocks.assign(["bell_keep"])
	var placed:Dictionary=city.place_signature("bell_keep",Vector2(-26,-15));check(placed.ok,"actual square bell keep placed")
	check(city.add_house(Vector2(-18,-15)).ok,"round tower household placed")
	var round_id:String=city.houses[-1].id
	check(city.add_cell(round_id,0,0,1).ok and city.set_house_style(round_id,"round_tower").ok,"actual two storey round tower")
	await show(city,Vector2(-22,-15),"曲面屋瓦衔接");quiet();demo.ui_layer.hide();demo.set_process(false)
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source","")=="precompiled","production OpenGL and unchanged PCM bank")
	var snapshot:Dictionary=demo.state.snapshot();var geometry:Dictionary={}
	for id:String in [str(placed.house_id),round_id]:
		var node:Node3D=demo.town.house_roots[id];var all_faces:=PackedVector3Array();var roof_count:=0
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			for surface in range(mesh.mesh.get_surface_count()):
				var material:Material=mesh.material_override if mesh.material_override!=null else mesh.mesh.surface_get_material(surface)
				if material is ShaderMaterial and material.shader==demo.town.JoinedRoofShader:
					roof_count+=1;all_faces.append_array(mesh.mesh.get_faces())
		geometry[id]={"roof_surfaces":roof_count,"faces_hash":Array(var_to_bytes(all_faces)).hash(),"triangles":all_faces.size()/3}
		check(roof_count>0,"actual published roof uses tile shader "+id)
		var house:Dictionary=demo.town._house_record(id)
		demo.focus=Vector3(house.origin[0],4.6,house.origin[1]);demo.zoom=6.;demo.yaw=.62;demo.pitch=.62;demo._update_camera()
		for phase in range(3):
			demo._set_light_phase(phase);await process_frame;await capture(id+"_close_phase"+str(phase))
		demo.pitch=.20;demo._update_camera();await capture(id+"_low_night")
	root.size=Vector2i(1024,768);demo.focus=Vector3(-22,3.6,-15);demo.zoom=17.;demo.pitch=.65;demo._set_light_phase(0);demo._update_camera();await capture("two_towers_1024")
	var frames:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000.);previous=now
	frames.sort();facts.frames={"p95_ms":frames[113],"max_ms":frames[-1]};facts.geometry=geometry
	facts.master=await Probe.record(OUT+"/Master.wav",3.1);check(facts.master.ok,"actual Master recording has no clipping")
	check(demo.state.snapshot()==snapshot,"camera and lighting leave authored city unchanged")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(snapshot))).ok and cold.houses==demo.state.houses,"tower city cold JSON keeps all authored rooms")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(current==voices and current.size()==12 and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"12 long 4 short and 6 buses retain identity")
	FileAccess.open(OUT+"/roof_seams.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t"))
	print("ROOF_SEAMS_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
