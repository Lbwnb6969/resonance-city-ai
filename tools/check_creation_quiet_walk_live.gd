extends "res://tools/check_creation_progression_ui_live.gd"
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
func positions_now()->Dictionary:
	var result:Dictionary={}
	for home:String in demo.life.quiet_walk.actors:result[home]=demo.life.quiet_walk.actors[home].node.position
	return result
func run()->void:
	OUT="res://验证记录/M84/quiet_walk_20261101/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):push_error("new isolated evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","townhouse")
	for i in range(7):check(city.add_house(Vector2(-30+i*4.,-20)).ok,"actual home")
	check(city.set_house_role("h2","bakery").ok and city.add_road([Vector2(-32,-18.1),Vector2(-4,-18.1)] as Array[Vector2],"path","none").ok,"actual service street")
	await show(city,Vector2(-18,-20),"静谧漫步");city=demo.state;quiet();demo.life.set_process(true)
	var page:Node=await journal();await ui_click(page.action);await settle()
	check(page.last_result.get("ok",false) and city.cozy_progression.enabled,"native J first enable")
	await ui_click(page.action);await settle()
	check(page.last_result.get("ok",false) and not city.cozy_progression.enabled,"native J pause")
	await key(KEY_ESCAPE);await settle();quiet()
	var frozen:Dictionary=city.snapshot();var checkpoint:Dictionary=demo.life.checkpoint(false);var clock:float=demo.life.time;var before:=positions_now()
	check(not before.is_empty(),"actual paused scene displays street actors")
	await capture("quiet_before")
	for i in range(180):await process_frame
	check(positions_now()!=before,"actual frame-driven quiet actors walk")
	check(city.snapshot()==frozen and demo.life.checkpoint(false)==checkpoint and demo.life.time==clock,"actual quiet frames preserve economic state")
	var visible:=0
	for actor:Dictionary in demo.life.quiet_walk.actors.values():
		if actor.node.visible and demo.camera.is_position_in_frustum(actor.node.global_position):visible+=1
	check(visible>0,"render camera sees actual quiet actors")
	await capture("quiet_after")
	await click_world(Vector2(-16,-11));await settle();quiet()
	check(city.houses.size()==8 and not demo.life.quiet_walk.actors.is_empty(),"native paused authoring retains quiet residents")
	await key(KEY_Z,true);await settle();quiet();await key(KEY_Y,true);await settle();quiet()
	check(city.houses.size()==8 and city.cozy_progression.xp==frozen.cozy_progression.xp,"native Undo/Redo earns no quiet XP")
	page=await journal();await ui_click(page.action);await settle()
	check(page.last_result.get("ok",false) and city.cozy_progression.enabled and demo.life.quiet_walk.actors.is_empty(),"native resume releases presentation and restores economy")
	await key(KEY_ESCAPE);await settle();quiet();await capture("resumed")
	check(pool()==voices,"audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"scope":"Native J enable/pause/resume, frame-driven quiet walking, authoring Undo/Redo, unchanged economy and audio pool; no listening quality claim"}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("QUIET_WALK_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
