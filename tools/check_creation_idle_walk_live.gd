extends "res://tools/check_creation_quiet_walk_live.gd"
const ActiveFixture=preload("res://tests/test_city_creation_idle_walk.gd")
const WindowFixture=preload("res://tools/fixtures/city_creation_layered_window_fixture.gd")
func active_points()->Dictionary:
	var result:Dictionary={}
	for r:Dictionary in demo.life.residents:result[r.home_id]=r.node.position
	return result
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	await show(ActiveFixture.fixture(),Vector2(-25,-27),"经营开启 · 无店街坊散步");quiet();demo.life.set_process(true)
	var page:Node=await journal();await ui_click(page.action);await settle();quiet();check(demo.state.cozy_progression.enabled,"native J enables an actual no-shop city")
	await key(KEY_ESCAPE);await settle();quiet();var before:=active_points();var author:Array=demo.state.houses.duplicate(true);var epoch:Dictionary=demo.state.cozy_progression.duplicate(true);var progress:Dictionary=demo.state.life_progress.duplicate(true)
	await capture("active_before");await create_timer(3.).timeout
	check(active_points()!=before and demo.life.residents.any(func(r):return r.has("idle_walk")),"actual frame-driven resident nodes walk in active no-shop city")
	check(demo.life.quiet_walk.actors.is_empty(),"active idle mode creates no duplicate presentation actors")
	check(demo.life.get_meta("idle_walk_count",0)<=24,"live active idle work stays at or below 24")
	check(demo.state.houses==author and demo.state.cozy_progression==epoch and demo.state.life_progress==progress,"no-shop movement invents no events or author mutations")
	await capture("active_after")
	page=await journal();await ui_click(page.action);await settle();quiet();check(not demo.state.cozy_progression.enabled,"native pause preserves current idle town")
	await key(KEY_ESCAPE);await create_timer(.8).timeout;demo.life.set_process(false);var visual:=positions_now();page=await journal();await ui_click(page.action);await settle();quiet();demo.life.set_process(true);await process_frame;demo.life.set_process(false)
	var continuity:=not visual.is_empty()
	for r:Dictionary in demo.life.residents:
		if visual.has(r.home_id):continuity=continuity and r.node.position.distance_to(visual[r.home_id])<.10
	check(continuity,"native resume adopts idle presentation without a position snap")
	check(demo.state.cozy_progression.epoch_id==epoch.epoch_id and demo.state.cozy_progression.xp==epoch.xp,"pause/resume preserves same account without idle XP")
	await key(KEY_ESCAPE)
	var f:=WindowFixture.build("renaissance",0.,false,2);var rain:RefCounted=f.city
	check(rain.add_road([Vector2(-31,-18.1),Vector2(-25,-18.1)] as Array[Vector2],"path","none").ok and rain.set_microclimate("sun_shower").ok and rain.begin_progression_epoch(OUT+"/rain.json").ok,"actual arcade rain fixture uses backed-up active account")
	await show(rain,Vector2(-28,-20),"夏雨连拱 · 在真实屋檐下停留");quiet();demo.life.set_process(true)
	check(await wait_for(func():return demo.life.residents[0].get("idle_walk",{}).get("shelter",false) and demo.life.residents[0].idle_walk.index>=demo.life.residents[0].idle_walk.route.size(),10000),"live resident reaches actual selected arcade entrance")
	var at:Vector3=demo.life.residents[0].node.global_position;var physics:PhysicsDirectSpaceState3D=demo.get_world_3d().direct_space_state
	var roof:Dictionary=physics.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3.UP*.65,at+Vector3.UP*5.,1))
	check(not roof.is_empty(),"actual Jolt shell gives overhead cover at the rain resting point")
	var floor:Dictionary=physics.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3.UP*.20,at-Vector3.UP*.50,1));check(not floor.is_empty(),"rain resting point has real physical floor support")
	await capture("rain_arcade");var held:Vector3=demo.life.residents[0].node.position;await create_timer(.8).timeout;check(demo.life.residents[0].node.position.distance_to(held)<.01,"resident remains beneath cover while rain persists")
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal default file bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("IDLE_WALK_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
