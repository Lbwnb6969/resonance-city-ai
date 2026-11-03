extends "res://tools/check_creation_entry_corridor_live.gd"
const Mixed=preload("res://tests/test_city_creation_entry_road_surface.gd")
const Access=preload("res://scripts/world/city_creation_entry_height.gd")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	await show(Mixed.fixture(),Vector2(-18,-18),"桥路局部台阶");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-18,.7,-18);demo.zoom=28.;demo.pitch=.85;demo.yaw=.2;demo._update_camera();await settle()
	var city:RefCounted=demo.state;var before:Dictionary=city.snapshot();var road:Dictionary=city.roads[0];var profile:Dictionary=city.road_profile(road)
	var tread:Dictionary=profile.treads[profile.treads.size()/2]
	var points:Array[Vector2]=[Vector2(-25,-17.8),(Vector2(tread.a)+Vector2(tread.b))*.5,Vector2(-10,-17.8)]
	var kinds:Array=["road","road_steps","road"]
	for i in range(points.size()):
		for side:float in [-.4,0.,.4]:
			var at:Vector2=points[i]+Vector2(0,side);var sample:Dictionary=city._road_heights.surface_at(at)
			check(sample.kind==kinds[i],"published local kind at flat/stair/bridge "+str(i))
			var mesh_y:=installed_deck(at,float(sample.y))
			check(is_finite(mesh_y) and absf(mesh_y-float(sample.y))<.002,"actual full-width road triangle agrees with classified surface "+str(i))
	var entry:Dictionary=city.house_entrances("h1")[0]
	var access:=Access.assess(city,city.houses[0],entry,points[0],road)
	check(access.ok and Access._surface(city,city.houses[0],entry,points[0],road,profile,{}).kind=="road","real published entrance remains smooth beside remote stair/bridge")
	await key(KEY_L);await refresh_page();check(demo.ledger.visible(),"native L opens on mixed-road city");await capture("mixed_road_ledger");await key(KEY_ESCAPE)
	check(city.snapshot()==before,"native inspection preserves authored road and water")
	await capture("mixed_road_geometry")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before))).ok,"independent mixed road cold restore")
	await show(cold,Vector2(-18,-18),"桥路冷读");quiet();demo.life.set_process(false)
	check(Access.assess(demo.state,demo.state.houses[0],demo.state.house_entrances("h1")[0],points[0],demo.state.roads[0])==access,"cold published corridor matches incremental proof")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("ENTRY_ROAD_SURFACE_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
