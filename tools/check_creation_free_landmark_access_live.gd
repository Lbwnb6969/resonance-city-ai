extends "res://tools/check_creation_placed_landmarks_live.gd"
const AudioProbe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
func history()->Dictionary:
	return {"journey":demo.state.harmony_journey.duplicate(true),"eras":demo.state.era_unlocks.duplicate(),"memories":demo.state.growth_memories.duplicate(),"archive":demo.state.archive_unlocks.duplicate()}
func run()->void:
	OUT="res://验证记录/M84/free_landmark_access_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	var city:=State.new();city.initialize_free();await show(city,Vector2(-30,-28),"自由地标选址");quiet()
	var original:=history();var tool:Node=demo.get_meta("ground_landmark_tool");var scenery:Node=demo.get_meta("street_wonders")
	check(DisplayServer.get_name()!="headless" and AudioServer.get_driver_name()=="WASAPI","actual OpenGL and WASAPI")
	check(Ground.Legacy.unlocked(demo.state).is_empty() and original.journey.get("traditions",[]).is_empty(),"fresh city has no earned blueprint or card")
	for family:String in Ground.SIZES:
		var at:=Fixture.empty_site(demo.state,family);demo.focus=Vector3(at.x,1.3,at.y);demo.zoom=16.;demo.yaw=.22;demo.pitch=.8;demo._update_camera();await settle()
		demo.signatures.open_panel();await settle();await reveal(tool.buttons[family])
		check(not tool.buttons[family].disabled and "免费选址" in tool.buttons[family].text,"native free catalogue enabled "+family)
		var authored:Dictionary=demo.state.snapshot();await ui_click(tool.buttons[family]);await motion(at);await key(KEY_E);await motion(at)
		check(tool.placing==family and tool.candidate.get("ok",false) and demo.state.snapshot()==authored,"native rotated preview is read only "+family)
		await click_world(at);await settle();quiet()
		check(demo.state.placed_landmarks.any(func(row):return row.blueprint==family),"native world click places without card "+family)
		check(await wait_for(func():return scenery.ground_landmarks.size()==demo.state.placed_landmarks.size()),"real ground model publishes "+family)
		var item:Dictionary=demo.state.placed_landmarks[-1];var id:String=item.id
		await key(KEY_Z,true);await settle();quiet();check(Ground.row(demo.state,id).is_empty(),"native Undo removes entity "+family)
		await key(KEY_Y,true);await settle();quiet();check(not Ground.row(demo.state,id).is_empty(),"native Redo restores entity without reward "+family)
		var nodes:Array=scenery.ground_landmarks.filter(func(node):return node.get_meta("plan").id==id)
		if not nodes.is_empty():
			await click_body(nodes[0]);check(tool.selected==id,"native model pick "+family)
		await capture(family+"_free")
		if family=="riverbank":
			await ui_click(tool.selection.get_child(0).get_child(3));await settle();quiet()
			check(Ground.row(demo.state,id).is_empty() and Ground.Legacy.unlocked(demo.state).is_empty(),"native recycle creates no historical blueprint")
			await key(KEY_Z,true);await settle();quiet()
		tool.selected="";tool.refresh()
	check(history()==original and Ground.Legacy.unlocked(demo.state).is_empty(),"native creation and history never fabricate card, rarity, echo, era or chapter")
	check(scenery.ground_landmarks.size()==4 and scenery.crowns.is_empty(),"all four free physical models and no automatic crowns")
	var path:=OUT+"/free_landmarks.json";var cold:=State.new()
	check(demo.state.save_city(path).ok and cold.load_city(path).ok and cold.placed_landmarks==demo.state.placed_landmarks,"actual cardless disk save and cold read")
	await show(cold,Vector2(-30,-18),"自由地标冷读");quiet();tool=demo.get_meta("ground_landmark_tool");scenery=demo.get_meta("street_wonders")
	check(scenery.ground_landmarks.size()==4 and history()==original,"cold publication preserves original empty earned ledger")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;demo.signatures.open_panel();await settle();await reveal(tool.buttons.artisan)
		check(Rect2(Vector2.ZERO,Vector2(size)).encloses(tool.buttons.artisan.get_global_rect()) and tool.buttons.artisan.disabled,"placed family stays visible and unique at "+str(size.x))
		await capture("free_catalogue_"+str(size.x));await key(KEY_ESCAPE)
	var classic:=State.new();classic.initialize_empty();await show(classic,Vector2(-30,-18),"经典旧城权限");quiet();tool=demo.get_meta("ground_landmark_tool")
	check(tool.buttons.values().all(func(button):return button.disabled),"switching to legacy disables free catalogue")
	await show(cold,Vector2(-30,-18),"自由地标恢复");quiet();scenery=demo.get_meta("street_wonders")
	check(scenery.ground_landmarks.size()==4 and history()==original,"switching back restores cardless entities and exact ledger")
	var pcm:Dictionary=await AudioProbe.record(OUT+"/Master.wav",3.2)
	check(pcm.ok and pool()==voices,"actual Master and original bounded audio pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save byte identical")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"master":pcm,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.,"entities":demo.state.placed_landmarks,"bank_signature":demo.music.BankCache.source_signature()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("FREE_LANDMARK_ACCESS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
