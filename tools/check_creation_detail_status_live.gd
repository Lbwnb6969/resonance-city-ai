extends "res://tools/check_creation_porch_slots_live.gd"
const DetailUI=preload("res://scripts/ui/city_creation_detail_status.gd")
func packet()->Dictionary:return demo.town.house_roots.h1.get_meta("architecture_detail_status",{}).duplicate(true)
func open_details()->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle();quiet();await process_frame
func row_button(slot:String,id:String)->Button:
	var row:Array=DetailUI.ROWS[slot];return demo.find_child(row[1]+id,true,false)
func check_selected(slot:String,id:String,dormant:bool)->void:
	var button:=row_button(slot,id)
	check(button.is_visible_in_tree() and button.button_pressed,"stored "+slot+" stays visible and selected")
	check(("[!]" in button.text)==dormant,"actual "+slot+" dormancy indicator matches published shell")
func viewport_evidence(label:String)->void:
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;demo.spatial_popover.inspector.fit();await create_timer(.3).timeout
		var panel:Control=demo.spatial_popover.inspector.panel;var reasons:Label=demo.find_child("DormantDetailReasons",true,false)
		check(root.get_visible_rect().encloses(panel.get_global_rect()),"detail sheet fits viewport "+label+str(size.x))
		check(reasons.is_visible_in_tree() and panel.get_global_rect().encloses(reasons.get_global_rect()),"complete reasons fit inside paper "+label+str(size.x))
		await capture(label+"_"+str(size.x))
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:RefCounted=Porches.porch_fixture();check(city.set_house_architecture_variant("h1","flower_pots","porch").ok,"public five-slot source")
	await show(city,Vector2(-27.2,-20),"细部休眠 · 原选择保留");quiet();var before:Dictionary=demo.state.snapshot();var authors:Dictionary=demo.state.houses[0].architecture_variant.duplicate(true)
	await open_details()
	for pair:Array in [["windows","timber_shutters"],["dormer","gable_light"],["chimney","brick_twin_pots"],["gable_trim","timber_verge"],["porch","flower_pots"]]:check_selected(pair[0],pair[1],false)
	check(demo.state.snapshot()==before,"reading details never writes the city")
	await key(KEY_ESCAPE);await key(KEY_ESCAPE)
	demo._after_edit(Porches.road_beside(demo.state,-28.77),"road");await settle();demo._after_edit(Porches.road_beside(demo.state,-27.23),"road");await settle();quiet();await open_details()
	check(not packet().porch.active and packet().porch.rejected.get("road_tight",false),"actual complete porch footprint rejected by real roads")
	check_selected("porch","flower_pots",true)
	var reasons:Label=demo.find_child("DormantDetailReasons",true,false);check("道路贴近落位" in reasons.text,"reason follows actual road rejection")
	check(demo.state.houses[0].architecture_variant==authors,"roads retain all five independent records and seeds")
	await viewport_evidence("road_dormant");await key(KEY_ESCAPE);await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();quiet();await open_details();check(packet().porch.active,"native Undo restores clear porch immediately");check_selected("porch","flower_pots",false)
	await key(KEY_ESCAPE);await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();quiet()
	demo._after_edit(demo.state.add_cell("h1",0,0,2),"room");await settle();quiet();await open_details()
	check_selected("dormer","gable_light",true);check(packet().dormer.dormant_reason=="top_roof_span_missing","highest single roof span is diagnosed without fabricating a tower")
	check(demo.state.houses[0].architecture_variant==authors,"upper construction keeps authored choices")
	await viewport_evidence("upper_span");await key(KEY_ESCAPE);await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();quiet();await open_details();check(packet().dormer.active,"native Undo restores actual roof dormer");check_selected("dormer","gable_light",false)
	await key(KEY_ESCAPE);await key(KEY_ESCAPE);demo._after_edit(demo.state.set_house_architecture("h1","rotunda"),"room");await settle();quiet();await open_details()
	for pair:Array in [["windows","timber_shutters"],["dormer","gable_light"],["chimney","brick_twin_pots"],["gable_trim","timber_verge"],["porch","flower_pots"]]:check_selected(pair[0],pair[1],true)
	check(not demo.town.house_roots.h1.has_meta("chimney_detail") and not demo.town.house_roots.h1.has_meta("porch_detail"),"diagnostic facts do not replace incompatible mother's original decoration contracts")
	await viewport_evidence("mother_dormant");var snapshot:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/dormant.json").ok,"dormant work saves through actual serializer")
	var cold:=State.new();check(cold.load_city(OUT+"/dormant.json").ok and cold.snapshot()==snapshot,"disk cold work retains all independent author records")
	var expected:=packet();await show(cold,Vector2(-27.2,-20),"休眠冷读");quiet();check(packet()==expected,"independent cold renderer publishes matching five-slot status")
	await open_details();var old_slots:Dictionary=demo.state.houses[0].architecture_variant.duplicate(true)
	await ui_click(row_button("porch","automatic"));await settle();quiet()
	check(Choice.porch(demo.state.houses[0]).is_empty() and not packet().has("porch"),"native clear removes only dormant porch intent")
	for slot:String in ["windows","dormer","chimney","gable_trim"]:check(Choice.record(demo.state.houses[0],slot)==Choice.slots(old_slots)[slot],"clearing dormant porch preserves "+slot)
	await key(KEY_ESCAPE);await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();quiet();check(demo.state.houses[0].architecture_variant==old_slots,"native Undo restores dormant choice dictionary")
	demo._after_edit(demo.state.set_house_architecture("h1","recessed_townhouse"),"room");await settle();quiet()
	var off_dormer:Dictionary=demo.state.set_house_dormer("h1","off");demo._after_edit(off_dormer,"room");await settle()
	var off_chimney:Dictionary=demo.state.set_house_chimney("h1","off");demo._after_edit(off_chimney,"room");await settle();quiet()
	check(off_dormer.ok and off_chimney.ok,"explicit no-roof-detail intents");await open_details()
	check_selected("dormer","off",false);check_selected("chimney","off",false)
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":packet()};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("DETAIL_STATUS_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
