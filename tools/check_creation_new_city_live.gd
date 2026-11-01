extends "res://tools/check_creation_progression_ui_live.gd"
func run()->void:
	OUT="res://验证记录/M84/new_city_20261101/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):push_error("new isolated evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	var opening:Dictionary=demo.get_meta("new_city_opening",{})
	check(opening.get("ok",false) and demo.state.cozy_progression.enabled and demo.state.cozy_progression.xp==0,"actual startup is enabled without a J activation click")
	check(opening.path.begins_with(OUT+"/works/") and FileAccess.file_exists(opening.backup),"startup uses independent backed-up evidence copy")
	var epoch:String=demo.state.cozy_progression.epoch_id
	var page:Node=await journal();check(page.action.text=="暂停轻量经营" and "已开启" in page.heading.text,"native J initially shows current active account")
	demo.collection_directory="user://personal_works"
	check(page.default_path().begins_with("res://验证记录/"),"isolated J fallback never targets personal works")
	demo.collection_directory=OUT+"/works";await capture("default_active");await key(KEY_ESCAPE)
	demo.focus=Vector3(-18,.8,-12);demo.zoom=20.;demo._update_camera();await settle();await click_world(Vector2(-18,-12));await settle();quiet()
	check(demo.state.houses.size()==1 and demo.state.cozy_progression.xp==2,"first native construction earns default current account")
	page=await journal();await ui_click(page.action);await settle()
	check(page.last_result.get("ok",false) and not demo.state.cozy_progression.enabled,"native pause applies to automatically created account")
	var cold:=State.new();check(cold.load_city(page.working_path).ok and cold.cozy_progression.epoch_id==epoch and not cold.cozy_progression.enabled,"paused default cold-loads same account")
	await ui_click(page.action);await settle();check(page.last_result.get("ok",false) and demo.state.cozy_progression.enabled and demo.state.cozy_progression.xp==2,"native resume retains default account earnings")
	await key(KEY_ESCAPE);await key(KEY_O,true);await settle()
	check(demo.gallery.panel.visible,"native Ctrl-O opens collection")
	if not demo.gallery.panel.visible:quit(1);return
	await ui_click(demo.gallery.panel.biome_button);await settle()
	var biome_id:String=demo.state.Biomes.IDS[0]
	await ui_click(demo.gallery.panel.biome_buttons[biome_id]);await settle();quiet()
	check(demo.state.biome_seed.get("id","")==biome_id and demo.state.cozy_progression.enabled and demo.state.cozy_progression.epoch_id!=epoch,"native new biome opens distinct enabled epoch")
	check(demo.state.cozy_progression.xp==0 and Epoch.collect(demo.state).earned==0,"seeded biome never grants construction backpay")
	await capture("new_biome_default")
	var old:=State.new();old.initialize_free();await show(old,Vector2(-18,-12),"旧截止作品");quiet()
	check(demo.state.cozy_progression.is_empty(),"opening existing old work never auto-enables")
	check(pool()==voices,"original bounded audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"scope":"Actual startup, native J pause/resume, construction, biome selection, cold paused account, old work unchanged; no music quality claim"}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("NEW_CITY_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
