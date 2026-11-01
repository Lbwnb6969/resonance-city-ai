extends "res://tools/check_creation_placed_landmarks_live.gd"
const Epoch=preload("res://scripts/world/city_creation_progression_ledger.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
func run()->void:
	OUT="res://验证记录/M84/progression_epoch_20261101/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):push_error("isolated session and new evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	check(demo.state.cozy_progression.is_empty(),"normal scene does not silently enable the unfinished progression UI")
	var path:=OUT+"/epoch.json";var old:Dictionary=demo.state.harmony_journey.duplicate(true)
	var opened:Dictionary=demo.state.begin_progression_epoch(path)
	check(opened.ok and FileAccess.file_exists(opened.get("backup","")),"explicit first-epoch API creates a real verified backup in the live scene")
	demo.focus=Vector3(-25,.8,-12);demo.zoom=18.;demo._update_camera();await settle()
	await click_world(Vector2(-25,-12));await settle();quiet();demo.get_meta("inspiration_draft").poll()
	check(demo.state.houses.size()==1 and demo.state.cozy_progression.xp==2 and demo.state.cozy_progression.receipts.get("house/h1",0)==1,"native construction reaches the single epoch event consumer")
	check(demo.state.harmony_journey.harmony_xp==old.harmony_xp and demo.state.harmony_journey.harmony_level==old.harmony_level,"native construction leaves historical level and XP unchanged")
	var earned:Dictionary=demo.state.cozy_progression.duplicate(true);var draft:Node=demo.get_meta("inspiration_draft")
	check(not draft.badge.visible and not draft.paper.visible,"new epoch does not masquerade as an old invitation or balance")
	await capture("epoch_after_native_build")
	await key(KEY_Z,true);await settle();quiet();draft.poll()
	check(demo.state.houses.is_empty() and demo.state.cozy_progression==earned,"native Ctrl-Z restores geometry and retains epoch receipts")
	await key(KEY_Y,true);await settle();quiet();draft.poll()
	check(demo.state.houses.size()==1 and demo.state.cozy_progression==earned and Epoch.collect(demo.state).earned==0,"native Ctrl-Y does not pay the same identity twice")
	check(demo.state.save_city(path).ok,"actual earned epoch snapshot saves through the formal runtime path")
	var cold:=State.new();check(cold.load_city(path).ok and cold.cozy_progression==earned and Receipts.collect(cold).progression.earned==0,"cold formal open preserves actual native event payout")
	await capture("epoch_after_native_redo")
	check(pool()==voices,"existing twelve long four short six buses two nature pool retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"scope":"Explicit first-epoch API plus native construction/Undo/Redo and cold save; no enable/pause UI or Life pause acceptance"}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PROGRESSION_EPOCH_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
