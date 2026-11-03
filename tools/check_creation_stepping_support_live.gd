extends "res://tools/check_creation_entry_road_surface_live.gd"
const Stones=preload("res://tools/fixtures/city_creation_stepping_support_fixture.gd")
func ray(at:Vector2)->Dictionary:
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,5.,at.y),Vector3(at.x,-2.,at.y),2))
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	await show(Stones.build(),Vector2(-8,-12),"汀步实体支撑");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-8,0.,-12);demo.zoom=9.;demo.pitch=.7;demo.yaw=.5;demo._update_camera();await settle();await physics_frame
	var city:RefCounted=demo.state;var before:Dictionary=city.snapshot();var profile:Dictionary=city.road_profile(city.roads[0]);var run:Dictionary=profile.stepping_runs[0]
	var line:Array[Vector2]=[]
	for point:Vector2 in run.points:line.append(point)
	check(profile.stepping_cuts==[demo.town._stroke_contours(line,float(city.roads[0].width)*.5+.24)],"cached physical cut exactly equals original production contour")
	var cap:Vector2=Vector2(run.stones[0].at)-Vector2(run.stones[0].axis)*.25
	check(not city._road_heights.surface_at(cap).supported and not is_finite(installed_deck(cap,city.street_height(cap))),"rounded approach cut has no phantom paving outside the run arc")
	for i in range(run.stones.size()):
		var stone:Dictionary=run.stones[i];var hit:=ray(stone.at);var surface:Dictionary=city._road_heights.surface_at(stone.at)
		check(surface.supported and not hit.is_empty() and hit.collider.has_meta("stepping_stone") and absf(hit.position.y-float(surface.top_y))<.001,"actual stone top collider agrees with physical support "+str(i))
		var tops:MeshInstance3D=demo.town.road_roots.r1.find_child("WetBlueStoneTops",true,false)
		check(absf(mesh_height(tops,stone.at,-INF,INF,float(stone.y))-float(stone.y))<.001,"visible stone triangle agrees with supported foot height "+str(i))
		if i==0:continue
		var gap:Vector2=(Vector2(stone.at)+Vector2(run.stones[i-1].at))*.5
		if city.water_clearance(gap)>=-.05:continue
		var gap_hit:=ray(gap)
		check(not city._road_heights.surface_at(gap).supported and (gap_hit.is_empty() or float(gap_hit.position.y)<-.16),"wet physical gap has no continuous deck "+str(i))
	await key(KEY_L);await refresh_page();check(demo.ledger.visible(),"native L inspection on stepping city");await key(KEY_ESCAPE);await capture("stepping_physical_support")
	check(city.snapshot()==before,"native inspection preserves author content")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before))).ok,"independent old-format stepping snapshot cold restore")
	cold.prepare_ground_height();check(cold.road_profile(cold.roads[0])==profile,"cold cuts, surfaces and navigation profiles agree")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("STEPPING_SUPPORT_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
