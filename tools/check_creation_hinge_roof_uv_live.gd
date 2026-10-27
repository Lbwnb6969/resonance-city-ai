extends "res://tools/check_creation_hinged_wing_live.gd"
## Inspect the actual published tile material, including its swept hinge fan.
func uv_stats(id:String)->Dictionary:
	var result:={"surfaces":0,"triangles":0,"flat_uv":0,"faces_hash":0};var all_faces:=PackedVector3Array()
	for mesh:MeshInstance3D in demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false):
		for surface in range(mesh.mesh.get_surface_count()):
			var material:Material=mesh.material_override if mesh.material_override!=null else mesh.mesh.surface_get_material(surface)
			if not material is ShaderMaterial or material.shader!=demo.town.JoinedRoofShader:continue
			result.surfaces+=1
			var arrays:Array=mesh.mesh.surface_get_arrays(surface);var p:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var uv:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV];var ids:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
			for i in range(0,ids.size(),3):
				var a:=ids[i];var b:=ids[i+1];var c:=ids[i+2]
				if (p[b]-p[a]).cross(p[c]-p[a]).length_squared()<.0000000001:continue
				result.triangles+=1;all_faces.append_array(PackedVector3Array([p[a],p[b],p[c]]))
				if absf((uv[b]-uv[a]).cross(uv[c]-uv[a]))<.0000001:result.flat_uv+=1
	result.faces_hash=Array(var_to_bytes(all_faces)).hash();return result
func run()->void:
	OUT="res://验证记录/M68/baseline"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	var verify:bool="--verify-uv" in OS.get_cmdline_user_args()
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var samples:Array=[]
	for axis:Vector2i in [Vector2i.RIGHT,Vector2i.DOWN]:
		var city:=State.new();city.initialize_empty();check(city.add_house(Vector2(-25,-15)).ok and city.set_house_style("h1","timber").ok,"actual timber host")
		for distance in range(1,4):check(city.add_cell("h1",axis.x*distance,axis.y*distance,0).ok,"actual four room row")
		if axis==Vector2i.DOWN:
			for distance in range(4):check(city.add_cell("h1",0,distance,1).ok,"actual upper floor")
		for angle:float in [28.,-28.]:
			check(Actions.set_angle(city,"h1",angle).ok,"public signed hinge angle")
			await show(city,Vector2(-23,-13),"折翼瓦面");quiet();demo.ui_layer.hide();demo.set_process(false)
			var house:=record_house("h1");var snapshot:Dictionary=demo.state.snapshot();var layout:=Frame.Hinge.layout(house)
			demo.focus=Vector3(layout.pivot.x,float(layout.floors)*1.7+.35,layout.pivot.y);demo.zoom=7.;demo.pitch=.95;demo.yaw=.45;demo._update_camera()
			var tag:="%s_%s"%["x" if axis==Vector2i.RIGHT else "z2",str(int(angle))];var stats:=uv_stats("h1")
			check(stats.surfaces>0,"actual JoinedRoof tile material "+tag)
			if verify:check(stats.flat_uv==0,"every visible roof triangle has nonzero UV area "+tag)
			check_joint("h1")
			for phase in range(3):demo._set_light_phase(phase);await process_frame;await capture(tag+"_phase"+str(phase))
			var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(snapshot))).ok,"bent timber cold JSON "+tag)
			samples.append({"case":tag,"uv":stats,"hinge":demo.town.house_roots.h1.get_meta("hinged_wing")})
			if angle<0.:
				root.size=Vector2i(1024,768);await capture(tag+"_1024");root.size=Vector2i(1440,900)
			check(demo.state.snapshot()==snapshot,"visual inspection leaves authored host unchanged "+tag)
			# Resume only after capturing a fixed camera; the production music clock runs throughout.
			demo.set_process(true)
	var bent_frames:Array[float]=[];var bent_tick:=Time.get_ticks_usec()
	for i in range(120):await process_frame;var now:=Time.get_ticks_usec();bent_frames.append((now-bent_tick)/1000.);bent_tick=now
	bent_frames.sort();facts.bent_frames={"p95_ms":bent_frames[113],"max_ms":bent_frames[-1]}
	var unions:={"L":[Vector2i(0,0),Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(0,2)],"U":[Vector2i(0,0),Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(2,1),Vector2i(0,2),Vector2i(2,2)],"court":[Vector2i(0,0),Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(2,1),Vector2i(0,2),Vector2i(1,2),Vector2i(2,2)]}
	for kind:String in unions:
		var city:=State.new();city.initialize_empty();check(city.add_house(Vector2(-25,-15)).ok and city.set_house_style("h1","timber").ok,"actual union host "+kind)
		for cell:Vector2i in unions[kind]:
			if cell==Vector2i.ZERO:continue
			check(city.add_cell("h1",cell.x,cell.y,0).ok,"actual union room "+kind)
		await show(city,Vector2(-23,-13),"连续曲顶 "+kind);quiet();demo.ui_layer.hide();demo.set_process(false)
		demo.focus=Vector3(-23.2,2.1,-13.2);demo.zoom=10.;demo.pitch=.85;demo.yaw=.55;demo._update_camera()
		var stats:=uv_stats("h1");check(stats.surfaces>0 and stats.flat_uv==0,"actual nonrectangular roof chart "+kind)
		for phase:int in [0,2]:demo._set_light_phase(phase);await process_frame;await capture("union_"+kind+"_phase"+str(phase))
		if kind=="court":
			var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(-23.2,7.,-13.2),Vector3(-23.2,1.9,-13.2),1))
			check(hit.is_empty(),"actual courtyard hole stays open to sky")
			var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot()))).ok,"actual courtyard JSON cold read")
			await show(cold,Vector2(-23,-13),"连续曲顶冷绘");quiet();demo.ui_layer.hide();demo.set_process(false)
			check(uv_stats("h1")==stats,"full cold publication retains exact union roof mesh and UV validity")
		samples.append({"case":kind,"uv":stats});demo.set_process(true)
	var towers:=State.new();towers.initialize_empty();towers.signature_unlocks.assign(["bell_keep"])
	check(towers.place_signature("bell_keep",Vector2(-26,-15)).ok,"shared shader square tower fixture")
	check(towers.add_house(Vector2(-18,-15)).ok and towers.add_cell("h2",0,0,1).ok and towers.set_house_style("h2","round_tower").ok,"shared shader round tower fixture")
	await show(towers,Vector2(-22,-15),"屋瓦微法线复核");quiet();demo.ui_layer.hide();demo.set_process(false)
	for id:String in ["h1","h2"]:
		for mesh:MeshInstance3D in demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false):
			var mat:Material=mesh.material_override if mesh.material_override!=null else mesh.mesh.surface_get_material(0)
			if not mat is ShaderMaterial or mat.shader!=demo.town.JoinedRoofShader:continue
			demo.focus=(mesh.global_transform*mesh.get_aabb()).get_center();demo.zoom=3.7;demo.pitch=.65;demo.yaw=.62;demo._update_camera()
			for phase:int in [0,2]:demo._set_light_phase(phase);await process_frame;await capture("shader_tower_"+id+"_phase"+str(phase))
			break
	demo.set_process(true)
	facts.cases=samples;facts.master=await Probe.record(OUT+"/Master.wav",3.1);check(facts.master.ok,"actual Master zero clipping")
	var frames:Array[float]=[];var previous:=Time.get_ticks_usec()
	for i in range(120):await process_frame;var now:=Time.get_ticks_usec();frames.append((now-previous)/1000.);previous=now
	frames.sort();facts.frames={"p95_ms":frames[113],"max_ms":frames[-1]}
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(voices==current and current.size()==12 and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"unchanged actual voice pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	FileAccess.open(OUT+"/hinge_roof_uv.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t"))
	print("HINGE_ROOF_UV_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
