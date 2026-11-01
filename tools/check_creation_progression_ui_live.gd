extends "res://tools/check_creation_placed_landmarks_live.gd"
const Epoch=preload("res://scripts/world/city_creation_progression_ledger.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
func journal()->Node:
	await key(KEY_J);await settle();quiet()
	var page:Node=demo.get_meta("progression_page")
	demo.journal.cards.get_parent().scroll_vertical=0;await process_frame
	return page
func run()->void:
	OUT="res://验证记录/M84/progression_ui_20261101/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):push_error("isolated session and new evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	var city:=State.new();city.initialize_empty();Receipts.initialize(city)
	for i in range(60):check(city.add_house(Vector2(-37+(i%6)*4.5,-30+(i/6)*4.5)).ok,"real legacy authored house")
	check(Receipts.collect(city).earned==120,"actual historic income earns a retained invitation")
	check(city.CreationPolicy.convert(city,OUT+"/original.json").ok,"explicit old city conversion retains cutoff and backup")
	var source:=FileAccess.get_file_as_bytes(OUT+"/original.json")
	await show(city,Vector2(-25,-12),"真实历史权益与新经营");quiet();demo.life.set_process(true);await settle();demo.life.set_process(false)
	var before:Dictionary=demo.state.snapshot();var old:Dictionary=demo.state.harmony_journey.duplicate(true)
	var pending:Array=old.pending_draft.duplicate();var page:Node=await journal()
	check(page.visible and page.action.text=="备份并启用轻量经营" and demo.state.snapshot()==before,"native J browsing does not enable, settle or write old rights")
	check(page.working_path.is_empty() and page.last_result.is_empty(),"browsing allocates no output or transaction")
	demo.persistence=true;var normal_path:String=page.default_path();demo.persistence=false
	check(normal_path==State.DEFAULT_PATH,"normal entry resolves the active save for restart persistence, without writing it in isolation")
	demo.save_blocked=true;await ui_click(page.action);await settle()
	check(demo.state.snapshot()==before and page.working_path.is_empty() and "经营未更改" in page.feedback.text,"native blocked original cannot start or overwrite an account")
	demo.save_blocked=false
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await settle()
		check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(page.action.get_global_rect()),"real activation button fits "+str(size.x))
		await capture("before_activation_"+str(size.x))
	await ui_click(page.action);await settle()
	print("NATIVE_ENABLE ",JSON.stringify(page.last_result))
	if not page.last_result.get("ok",false):quit(1);return
	check(page.last_result.ok and demo.state.cozy_progression.enabled and demo.state.cozy_progression.xp==0,"native enable button opens zero-XP new account")
	check(FileAccess.file_exists(page.last_result.backup) and FileAccess.file_exists(page.working_path),"native enable publishes real isolated backup and working copy")
	check(page.working_path.begins_with(OUT+"/works/") and FileAccess.get_file_as_bytes(OUT+"/original.json")==source,"independent UI copy leaves original work bytes intact")
	check(demo.state.harmony_journey==old and "等级1" in page.summary.text,"historic level two and pending invitation remain distinct from current level one")
	await ui_click(page.locations);await settle()
	check(page.paths.visible and ProjectSettings.globalize_path(page.working_path) in page.paths.text and ProjectSettings.globalize_path(page.last_result.backup) in page.paths.text,"native location control exposes exact real saved copy and backup")
	await capture("active_with_backup");await ui_click(page.locations);await key(KEY_ESCAPE)
	demo.life.set_process(true)
	demo.focus=Vector3(-8,.8,-12);demo.zoom=18.;demo._update_camera();await settle()
	await click_world(Vector2(-8,-12));await settle();quiet()
	check(demo.state.houses.size()==61 and demo.state.cozy_progression.xp==2,"native new construction updates new account only")
	page=await journal();check("营造点2 / 100" in page.summary.text,"current page reflects real collected income")
	var path:String=page.working_path;var epoch:String=demo.state.cozy_progression.epoch_id
	page.working_path=OUT+"/blocked.json";DirAccess.make_dir_absolute(page.working_path);demo.life.set_process(false);before=demo.state.snapshot()
	await ui_click(page.action);await settle()
	check(not page.last_result.ok and "未更改经营" in page.feedback.text and demo.state.snapshot()==before and page.action.text=="暂停轻量经营","native failed save retains active account and gives visible failure")
	await capture("failed_toggle");page.working_path=path;demo.life.set_process(true);await settle()
	await ui_click(page.action);await settle()
	check(page.last_result.ok and not demo.state.cozy_progression.enabled and "已暂停" in page.heading.text and "在途人员与货物保留" in page.summary.text,"native pause button shows actual paused contract")
	check(FileAccess.file_exists(page.last_result.original_backup),"pause keeps immutable pre-toggle raw working copy")
	await capture("paused");await key(KEY_ESCAPE)
	await click_world(Vector2(-3,-12));await settle();quiet()
	check(demo.state.houses.size()==62 and demo.state.cozy_progression.xp==2,"native off-period authoring stays available without XP")
	page=await journal();await ui_click(page.action);await settle()
	check(page.last_result.ok and demo.state.cozy_progression.enabled and demo.state.cozy_progression.epoch_id==epoch and demo.state.cozy_progression.xp==2 and Epoch.collect(demo.state).earned==0,"native resume retains epoch and skips off-period work")
	var cold:=State.new();check(cold.load_city(page.working_path).ok and cold.cozy_progression==demo.state.cozy_progression,"button-produced file cold-loads same account without awards")
	check(FileAccess.get_file_as_bytes(OUT+"/original.json")==source,"all native toggle transactions preserve original work")
	await key(KEY_ESCAPE);await show(cold,Vector2(-8,-12),"经营副本冷读");quiet();page=await journal()
	check(page.last_result.is_empty() and page.working_path.is_empty() and not page.locations.visible and not page.paths.visible and "营造点2 / 100" in page.summary.text,"new city context clears stale paths and displays cold current account")
	var rights:Node=demo.get_meta("growth_rights_page");await reveal(rights.read);await ui_click(rights.read);await settle()
	check(rights.last_report.level==2 and rights.last_report.credits==1 and rights.last_report.pending==pending and "历史余量" in rights.detail.text,"native old-rights page retains exact old account and invitation")
	await capture("cold_historical_rights");await key(KEY_ESCAPE);await key(KEY_F1);await settle()
	await ui_click(demo.get_meta("city_letters").claim);await settle();var draft:Node=demo.get_meta("inspiration_draft")
	check(draft.paper.visible and draft.buttons.has(pending[0]),"native historical invitation remains claimable")
	await ui_click(draft.buttons[pending[0]]);await settle();quiet()
	check(Receipts.Journey.credits(demo.state.harmony_journey)==0 and demo.state.cozy_progression.xp==2 and demo.state.cozy_progression.epoch_id==epoch,"old claim consumes only historic credit")
	check(pool()==voices,"original audio players and bounded buses retained")
	var pcm:Dictionary=await Probe.record(OUT+"/Master.wav",3.2);check(pcm.ok,"actual unchanged music pool has healthy Master PCM during journal flow")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"pcm":pcm,"scope":"Native J enable/pause/resume/failure/location controls, real historical claim, two viewports, isolated backup and cold current account; normal active-save destination checked read-only, personal save never written; quiet wandering and new-city default pending"}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PROGRESSION_UI_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
