extends "res://tools/check_creation_street_furniture_contact_live.gd"
func road_meshes()->Dictionary:
	var result:Dictionary={}
	for road:Dictionary in demo.state.roads:
		var node:MeshInstance3D=demo.town.road_roots[road.id].get_node("PathSurface")
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(var_to_bytes(node.mesh.surface_get_arrays(0)))
		result[road.id]=digest.finish().hex_encode()
	return result
func seam()->Dictionary:
	var shared:Dictionary={};var count:=0;var maximum:=0.
	for road:Dictionary in demo.state.roads:
		var node:MeshInstance3D=demo.town.road_roots[road.id].get_node("PathSurface")
		for p:Vector3 in node.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]:
			var at:=Vector2(p.x,p.z).snapped(Vector2.ONE*.00001)
			if shared.has(at) and shared[at].id!=road.id:count+=1;maximum=maxf(maximum,absf(p.y-float(shared[at].y)))
			else:shared[at]={"id":road.id,"y":p.y}
	return {"shared_vertices":count,"max_gap_m":maximum}
func in_triangle(at:Vector2,triangle:PackedVector2Array)->bool:
	var positive:=false;var negative:=false
	for i in range(3):
		var a:=triangle[i];var b:=triangle[(i+1)%3]
		var cross_value:float=(float(b.x)-float(a.x))*(float(at.y)-float(a.y))-(float(b.y)-float(a.y))*(float(at.x)-float(a.x))
		positive=positive or cross_value>0.;negative=negative or cross_value<0.
	return not (positive and negative)
func coverage()->Dictionary:
	var triangles:Array=[]
	for road:Dictionary in demo.state.roads:
		var node:MeshInstance3D=demo.town.road_roots[road.id].get_node("PathSurface")
		var arrays:Array=node.mesh.surface_get_arrays(0);var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var ids:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
		for i in range(0,ids.size(),3):
			var polygon:=PackedVector2Array()
			for k in range(3):var p:=points[ids[i+k]];polygon.append(Vector2(p.x,p.z))
			triangles.append(polygon)
	var tested:=0;var holes:=0;var overlaps:=0
	for x in range(-9,10):
		for z in range(-9,10):
			var at:=Vector2(-18.+x*.137+.031,-8.+z*.139+.017)
			if str(demo.state.road_at(at)).is_empty():continue
			var hits:=0
			for triangle:PackedVector2Array in triangles:
				if in_triangle(at,triangle):hits+=1
			tested+=1
			if hits==0:holes+=1
			if hits>1:overlaps+=1
	return {"samples":tested,"holes":holes,"overlaps":overlaps}
func run()->void:
	OUT="res://验证记录/M83/junction_continuity"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	var verify:bool="--verify-grades" in OS.get_cmdline_user_args()
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool();facts.cases=[]
	var layouts:={"near_T":[[Vector2(-22,-8),Vector2(-14,-8)],[Vector2(-18,-12),Vector2(-18,-8.5)]],"X":[[Vector2(-22,-8),Vector2(-14,-8)],[Vector2(-18,-12),Vector2(-18,-4)]],"Y":[[Vector2(-22,-12),Vector2(-18,-8),Vector2(-14,-12)],[Vector2(-18,-7.75),Vector2(-18,-4)]],"unequal_T":[[Vector2(-22,-8),Vector2(-14,-8)],[Vector2(-18,-12),Vector2(-18,-8.25)]]}
	for name:String in layouts:
		var city:=State.new();city.initialize_free();check(city.add_terrain_stroke([Vector2(-18,-10.5)] as Array[Vector2],"raise",4.,.45).ok,"public gentle junction slope")
		for index in range(layouts[name].size()):
			var points:Array[Vector2]=[];points.assign(layouts[name][index]);var style:="path";var width:=0.
			if name=="unequal_T":style="fanstone" if index==0 else "gravel";width=3.2 if index==0 else .8
			check(city.add_road(points,style,"none",width).ok,"public junction arm")
		check(city.add_road([Vector2(-28,-17),Vector2(-24,-17)] as Array[Vector2],"path","none").ok,"actual distant isolated road")
		await show(city,Vector2(-18,-8),"坡地路口 "+name);quiet();demo.ui_layer.hide();demo.focus=Vector3(-18,.2,-8);demo.zoom=9.;demo.pitch=.8;demo.yaw=.55;demo._update_camera();await settle()
		var authored:Dictionary=demo.state.snapshot();var initial:=road_meshes();var far:int=demo.town.road_roots.r3.get_instance_id();var contact:=seam()
		check(contact.shared_vertices>0,"actual installed surfaces share contact vertices "+name)
		if verify:check(contact.max_gap_m<.0001,"one actual shared elevation "+name)
		var paving:=coverage();check(paving.samples>0 and paving.holes==0 and paving.overlaps==0,"uploaded junction paving covers each queried point exactly once "+name)
		for phase in range(3):demo._set_light_phase(phase);await create_timer(1.5).timeout;await capture(name+"_phase"+str(phase))
		demo.pitch=.18;demo._update_camera();await capture(name+"_low");demo.pitch=.8;demo._update_camera()
		check(demo.state.snapshot()==authored,"all actual camera/light views are read-only")
		if verify:
			# Read-only actual draft then a real removal through the production publisher.
			var draft:Dictionary=demo.state.preview_road([Vector2(-21,-6),Vector2(-15,-6)] as Array[Vector2],"path","none")
			check(draft.ok and demo.state.snapshot()==authored,"actual road preview keeps author data unchanged")
			var removed:Dictionary=demo.state.remove_road("r2");demo._after_edit(removed,"road");await settle();quiet();check(removed.ok,"public removal updates the actual height field")
			await key(KEY_Z,true);await settle();quiet();check(demo.state.roads==authored.roads and road_meshes()==initial,"native Undo restores exact installed road arrays")
			await key(KEY_Y,true);await settle();quiet();check(demo.state.roads.size()==2,"native Redo removes the same branch")
			await key(KEY_Z,true);await settle();quiet();check(road_meshes()==initial,"second native Undo restores original geometry normals UV and paving")
			check(demo.town.road_roots.r3.get_instance_id()==far,"local branch edit preserves the distant published instance")
			var path:=OUT+"/"+name+"_world.json";var writer:=FileAccess.open(path,FileAccess.WRITE);writer.store_string(JSON.stringify(demo.state.snapshot(),"",true,true));writer.close()
			var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok,"isolated disk city accepted")
			await show(cold,Vector2(-18,-8),"路口冷算 "+name);quiet();check(road_meshes()==initial,"independent cold arrays equal actual incremental publication")
		facts.cases.append({"name":name,"seam":contact,"paving":paving,"mesh_hashes":initial})
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok,"actual Master PCM unclipped");check(pool()==voices,"existing audio player pool retained")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("JUNCTION_CONTINUITY ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
