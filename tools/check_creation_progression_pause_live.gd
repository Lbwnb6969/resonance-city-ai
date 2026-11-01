extends "res://tools/check_creation_placed_landmarks_live.gd"
const Epoch=preload("res://scripts/world/city_creation_progression_ledger.gd")
func run()->void:
	OUT="res://验证记录/M84/progression_pause_20261101/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):push_error("isolated session and new evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	check(demo.state.begin_progression_epoch(OUT+"/first.json").ok,"actual scene starts an explicit backed-up epoch")
	demo.focus=Vector3(-22,.8,-12);demo.zoom=20.;demo._update_camera();await settle()
	await click_world(Vector2(-25,-12));await settle();quiet()
	check(demo.state.houses.size()==1 and demo.state.cozy_progression.xp==2,"native active construction earns one real new receipt")
	var epoch:String=demo.state.cozy_progression.epoch_id;var old:Dictionary=demo.state.harmony_journey.duplicate(true)
	var closed:Dictionary=demo.state.CreationPolicy.set_progression_enabled(demo.state,false,OUT+"/closed.json")
	check(closed.ok and not demo.state.cozy_progression.enabled and FileAccess.file_exists(closed.get("backup","")),"explicit close transaction publishes a saved disabled policy")
	var clock:float=demo.life.time;var debt:float=demo.life._budget_delta
	for i in range(20):await process_frame
	check(demo.life.time==clock and demo.life._budget_delta==debt,"actual paused frames accumulate no economic time or catch-up debt")
	await click_world(Vector2(-20,-12));await settle();quiet()
	check(demo.state.houses.size()==2 and demo.state.cozy_progression.xp==2 and not demo.state.cozy_progression.enabled,"native off-period construction remains free and earns no growth")
	await key(KEY_Z,true);await settle();quiet();await key(KEY_Y,true);await settle();quiet()
	check(demo.state.houses.size()==2 and demo.state.cozy_progression.xp==2 and not demo.state.cozy_progression.enabled,"native Undo/Redo cannot change policy or pay off-period construction")
	check(demo.state.set_journey_checkpoint(demo.life.checkpoint(false)).ok and demo.state.save_city(OUT+"/paused_after_build.json").ok,"paused actual actors save through read-only checkpoint capture")
	var cold:=State.new();check(cold.load_city(OUT+"/paused_after_build.json").ok and not cold.cozy_progression.enabled and cold.cozy_progression.epoch_id==epoch,"cold saved policy retains its exact paused epoch")
	check(Epoch.collect(cold).earned==0 and cold.cozy_progression.xp==2,"cold off-period state cannot retroactively mint XP")
	await capture("paused_after_native_redo")
	var resumed:Dictionary=demo.state.CreationPolicy.set_progression_enabled(demo.state,true,OUT+"/resumed.json")
	check(resumed.ok and resumed.earned==0 and demo.state.cozy_progression.epoch_id==epoch and Epoch.collect(demo.state).earned==0,"resume retains the epoch and skips actual off-period receipts")
	await settle();quiet();check(demo.life.time>clock,"actual resumed frames advance the original economic clock")
	await click_world(Vector2(-15,-12));await settle();quiet()
	check(demo.state.houses.size()==3 and demo.state.cozy_progression.xp==4,"new native construction after resume earns exactly once")
	check(demo.state.harmony_journey.harmony_level==old.harmony_level and demo.state.harmony_journey.harmony_xp==old.harmony_xp and demo.state.harmony_journey.growth_cutoff==old.growth_cutoff,"native toggle flow preserves old XP and cutoff")
	await capture("resumed_after_native_build")
	check(pool()==voices,"original audio player and bus pool retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"scope":"Explicit transaction APIs with native active/off/resumed construction, Undo/Redo and cold opening; no toggle button or quiet wandering acceptance"}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PROGRESSION_PAUSE_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
