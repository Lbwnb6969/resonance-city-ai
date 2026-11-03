extends "res://tools/check_creation_three_road_modes_live.gd"
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
func seed_city(yaw:float,upper:bool)->RefCounted:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","townhouse")
	var cells:Array=[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"}]
	if upper:cells.append({"x":0,"z":0,"level":1,"kind":"room"})
	check(city.add_house_stroke(Vector2(-25,-20),cells).ok and city.rotate_house("h1",yaw).ok,"public shared-bay host")
	return city
func path_at(yaw:float,offset:float=.9)->Array[Vector2]:
	var points:Array[Vector2]=[]
	for at:Vector2 in [Vector2(offset,-4),Vector2(offset,4)]:points.append(Vector2(-25,-20)+at.rotated(-yaw))
	return points
func cast_at(yaw:float,lateral:float,height:float)->Dictionary:
	var a:=Vector2(-25,-20)+Vector2(lateral,-2).rotated(-yaw);var b:=Vector2(-25,-20)+Vector2(lateral,2).rotated(-yaw)
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(a.x,height,a.y),Vector3(b.x,height,b.y),1))
func faces()->PackedVector3Array:
	var points:=PackedVector3Array()
	for node:MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		for point:Vector3 in node.mesh.get_faces():points.append(node.global_transform*point)
	return points
func geometry_hash()->String:
	var context:=HashingContext.new();context.start(HashingContext.HASH_SHA256);context.update(var_to_bytes(faces()));return context.finish().hex_encode()
func geometry(yaw:float,center:float=.9)->void:
	var vertices:=faces()
	for offset:float in [-.84,-.42,0.,.42,.84]:
		for height:float in [.08,.5,1.0]:
			check(cast_at(yaw,center+offset,height).is_empty(),"real collision clears wide road and plinth "+str(offset)+"/"+str(height))
			var a:=Vector2(-25,-20)+Vector2(center+offset,-2).rotated(-yaw);var b:=Vector2(-25,-20)+Vector2(center+offset,2).rotated(-yaw);var hit:=false
			for i in range(0,vertices.size(),3):
				if Geometry3D.segment_intersects_triangle(Vector3(a.x,height,a.y),Vector3(b.x,height,b.y),vertices[i],vertices[i+1],vertices[i+2])!=null:hit=true;break
			check(not hit,"production visible triangles clear full street width")
	check(not cast_at(yaw,center+.2,1.5).is_empty(),"real overhead beam remains pickable")
	for lateral:float in [-.85,2.65]:check(not cast_at(yaw,lateral,.5).is_empty(),"outer supporting masonry remains pickable")
func choose(field:String,index:int)->void:
	await ui_click(demo.tactile_dock.road_palette.heads[field]);await settle()
	await ui_click(demo.tactile_dock.button_for(field,index));await settle()
func upgrade()->void:
	var city:=seed_city(0.,true);var path:=path_at(0.,.1)
	check(city.add_road(path,"path","none").ok,"real narrow predecessor")
	await show(city,Vector2(-24,-20),"原位扩宽穿堂");quiet();demo.select_tool(2)
	demo.focus=Vector3(-24,.7,-20);demo.zoom=15.;demo.pitch=.85;demo.yaw=.2;demo._update_camera();await settle()
	var old_hash:=geometry_hash();var id:String=demo.state.roads[0].id;var points:Array=demo.state.roads[0].points.duplicate(true)
	await choose("RoadStyle",5);await choose("RoadSize",0);await choose("RoadDecoration",1);await key(KEY_2)
	await click_world(path[0]);await motion(path[-1])
	check(road_tool.valid.ok and road_tool.valid.upgrade_road_id==id,"native retrace previews same-road widening")
	await capture("upgrade_preview");await click_world(path[-1]);await settle();quiet()
	check(demo.state.roads.size()==1 and demo.state.roads[0].id==id and demo.state.roads[0].points==points and is_equal_approx(float(demo.state.roads[0].width),1.75),"native upgrade keeps identity and centreline")
	geometry(0.,.1);await capture("upgraded")
	await key(KEY_Z,true);await settle();quiet();check(geometry_hash()==old_hash and is_equal_approx(float(demo.state.roads[0].width),1.25),"native widening Undo restores exact predecessor geometry")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();road_tool=demo.get_meta("road_tool")
	if OS.get_cmdline_user_args().has("--verify-upgrade"):await upgrade()
	for yaw:float in [] if OS.get_cmdline_user_args().has("--verify-upgrade") else [0.,.4,PI*.5]:
		var city:=seed_city(yaw,true);await show(city,Vector2(-24,-20),"共用宽穿堂");quiet();demo.select_tool(2)
		demo.focus=Vector3(-24,.7,-20);demo.zoom=15.;demo.pitch=.85;demo.yaw=.2;demo._update_camera();await settle()
		await choose("RoadStyle",5);await choose("RoadSize",0);await choose("RoadDecoration",1);await key(KEY_2)
		var path:=path_at(yaw);var before:Dictionary=demo.state.snapshot()
		await click_world(path[0]);await motion(path[-1]);check(road_tool.valid.ok and is_equal_approx(float(road_tool.valid.width),1.75),"native brick/original width previews real 1.75m street")
		check(demo.state.snapshot()==before,"native wide preview keeps rooms/IDs/history")
		await capture("preview_"+str(yaw));var shown:Array=demo.road_preview.duplicate();await click_world(path[-1]);await settle();quiet()
		check(demo.state.roads.size()==1 and exact(shown) and demo.state.house_passages("h1").size()==2,"native click publishes two structural openings with exact street")
		geometry(yaw);var hash_before:=geometry_hash();await capture("finished_"+str(yaw))
		await key(KEY_Z,true);await settle();quiet();check(demo.state.roads.is_empty() and demo.state.house_passages("h1").is_empty(),"native Undo restores solid host")
		await key(KEY_Y,true);await settle();quiet();check(geometry_hash()==hash_before,"native Redo restores exact structural geometry")
		var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot()))).ok,"cold ordinary schema restore")
		await show(cold,Vector2(-24,-20),"宽穿堂冷读");quiet();check(geometry_hash()==hash_before,"independent cold publication equals incremental geometry")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WIDE_PASSAGE_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
