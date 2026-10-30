extends "res://tools/check_creation_placed_landmarks_live.gd"
const SignaturesFixture=preload("res://tools/fixtures/city_creation_free_signature_fixture.gd")
const AudioProbe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
func records()->Dictionary:
	return {"signatures":demo.state.signature_unlocks.duplicate(),"eras":demo.state.era_unlocks.duplicate(),"memories":demo.state.growth_memories.duplicate(),"archive":demo.state.archive_unlocks.duplicate(),"life":demo.state.life_progress.duplicate(true)}
func run()->void:
	OUT="res://验证记录/M84/free_signature_access_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	await show(SignaturesFixture.fresh(),Vector2(-25,-12),"自由地标名胜");quiet();var initial:=records();var rows:Array=[]
	check(DisplayServer.get_name()!="headless" and AudioServer.get_driver_name()=="WASAPI","actual OpenGL and WASAPI")
	for kind:String in demo.state.Signatures.IDS:
		var at:=SignaturesFixture.site(demo.state,kind);check(at!=Vector2.INF,"public valid signature site "+kind)
		demo.focus=Vector3(at.x,1.,at.y);demo.zoom=21.;demo.pitch=.85;demo.yaw=.25;demo._update_camera();await settle()
		await ui_click(demo.score_ribbon.landmark_button);await settle();await reveal(demo.signatures.buttons[kind])
		check(not demo.signatures.buttons[kind].disabled and "历史里程碑未记录" in demo.signatures.labels[kind].text,"native unearned signature catalogue enabled "+kind)
		demo.signatures.buttons[kind].pressed.connect(func():facts["pressed_"+kind]=true)
		facts["before_"+kind]={"rect":demo.signatures.buttons[kind].get_global_rect(),"visible":demo.signatures.buttons[kind].is_visible_in_tree(),"panel":demo.signatures.panel.visible,"book":demo.signatures.scrollbook.visible}
		await capture("catalogue_before_"+kind)
		var authored:Dictionary=demo.state.snapshot();await ui_click(demo.signatures.buttons[kind]);await motion(at);await settle()
		facts[kind]={"placing":demo.signatures.placing,"candidate":demo.candidate.duplicate(true),"authored_unchanged":demo.state.snapshot()==authored,"panel":demo.signatures.panel.visible,"book":demo.signatures.scrollbook.visible,"at":at}
		if demo.signatures.placing!=kind:await capture("preview_failure_"+kind)
		check(demo.signatures.placing==kind and demo.candidate.get("valid",false) and demo.state.snapshot()==authored,"native preview stays read only "+kind)
		await click_world(at);await settle();quiet()
		var houses:Array=demo.state.houses.filter(func(h):return h.get("signature","")==kind)
		check(houses.size()==1,"native click places unique actual signature "+kind)
		if houses.is_empty():continue
		var house:Dictionary=houses[0];var id:String=house.id
		check(demo.town.house_roots.has(id) and not demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false).is_empty(),"actual signature model publishes "+kind)
		rows.append({"kind":kind,"id":id,"at":at,"mesh_count":demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false).size()})
		await key(KEY_Z,true);await settle();quiet();check(demo.state._house_index(id)<0,"native Undo removes full signature "+kind)
		await key(KEY_Y,true);await settle();quiet();check(demo.state._house_index(id)>=0 and demo.town.house_roots.has(id),"native Redo restores model without milestone "+kind)
		await capture("free_"+kind)
		if kind=="bell_keep":
			var moved:Vector2=SignaturesFixture.site(demo.state,kind,id)
			demo.signatures.begin(kind,id);await motion(moved);await click_world(moved);await settle();quiet()
			check(demo.state.houses[demo.state._house_index(id)].origin==[moved.x,moved.y],"signature UI move retains stable identity")
			await key(KEY_Z,true);await settle();quiet()
	check(demo.state.houses.size()==6 and records()==initial,"six models invent no milestone, earned era, chapter, archive or life activity")
	var saved:Dictionary=demo.state.snapshot();var history:Dictionary=demo.state.harmony_journey.duplicate(true);var cold:=State.new()
	check(demo.state.save_city(OUT+"/six_signatures.json").ok and cold.load_city(OUT+"/six_signatures.json").ok and cold.houses==demo.state.houses and cold.signature_unlocks.is_empty(),"actual six-signature disk cold read without unlock records")
	await show(cold,Vector2(-25,-12),"六地标冷读");quiet()
	check(demo.town.house_roots.size()==6 and demo.state.harmony_journey==history and records()==initial,"cold publication recreates six models and exact existing ledgers")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await settle();await ui_click(demo.score_ribbon.landmark_button);await settle();await reveal(demo.signatures.buttons.floating_amphitheater)
		check(Rect2(Vector2.ZERO,Vector2(size)).encloses(demo.signatures.buttons.floating_amphitheater.get_global_rect()) and demo.signatures.buttons.values().all(func(b):return b.disabled),"placed catalogue fits and blocks duplicates "+str(size.x))
		await capture("signature_catalogue_"+str(size.x));await key(KEY_ESCAPE)
	var id:String=demo.state.houses[0].id;demo._after_edit(demo.state.remove_house(id),"erase");await settle();quiet()
	await ui_click(demo.score_ribbon.landmark_button);await settle();check(not demo.signatures.buttons.bell_keep.disabled and demo.state.signature_unlocks.is_empty(),"recycling restores basic placement without historical unlock")
	await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();quiet()
	var classic:=State.new();classic.initialize_empty();await show(classic,Vector2(-25,-12),"经典地标锁定");quiet();await ui_click(demo.score_ribbon.landmark_button);await settle()
	check(demo.signatures.buttons.values().all(func(b):return b.disabled) and "里程碑达成" in demo.signatures.intro.text,"legacy catalogue retains original requirements")
	await key(KEY_ESCAPE);var converted:Dictionary=demo.state.CreationPolicy.convert(demo.state,OUT+"/converted.json");demo._after_edit(converted,"history");await settle();quiet()
	await ui_click(demo.score_ribbon.landmark_button);await settle();check(converted.ok and demo.signatures.buttons.values().all(func(b):return not b.disabled) and demo.state.signature_unlocks.is_empty(),"same-city conversion opens six controls without unlock history")
	await key(KEY_ESCAPE);await show(cold,Vector2(-25,-12),"自由地标恢复");quiet()
	check(demo.state.houses==saved.houses and records()==initial,"switching back restores actual work and records")
	var pcm:Dictionary=await AudioProbe.record(OUT+"/Master.wav",3.2)
	check(pcm.ok and pool()==voices,"actual Master and original bounded voice pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save byte identical")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"master":pcm,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.,"models":rows,"facts":facts,"bank_signature":demo.music.BankCache.source_signature()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("FREE_SIGNATURE_ACCESS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
