extends "res://tools/check_creation_three_road_modes_live.gd"
const Spatial=preload("res://tools/fixtures/city_creation_functional_zones_fixture.gd")
const Guidance=preload("res://scripts/ui/city_creation_free_spatial_guidance.gd")
func ready_ui()->void:await settle();quiet();demo.life.set_process(false)
func panel_for(id:String)->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house(id);await ready_ui();await create_timer(.55).timeout
func toggle_tips()->void:
	demo.spatial_popover.close();await key(KEY_F1);await ready_ui();var control:Node=demo.get_meta("creation_options")
	check(control.guidance.is_visible_in_tree() and root.get_visible_rect().encloses(control.guidance.get_global_rect()),"native F1 optional-tip checkbox is visible and fits viewport")
	await ui_click(control.guidance);await ready_ui();await key(KEY_ESCAPE);await ready_ui()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var f:=Spatial.build();check(f.ok,"actual mixed space city builds")
	await show(f.city,Vector2(-23,-19),"自由操作轻语");await ready_ui();var guide:Control=demo.intuitive_guidance
	check(not guide.banner.visible and guide.markers.get_child_count()==0 and not guide.bubble.visible,"default free city has no compulsory guide markers or banner")
	await toggle_tips();check(demo.state.creative_settings.guidance and guide.stage=="wander" and guide.banner.visible and "Ctrl+Z" in guide.banner.text,"native opt-in shows one neutral operation tip")
	for tool:int in [0,2,4,5,8]:check(guide.tool_available(tool),"every primary tool is available without following a sequence")
	var initial:Dictionary=demo.state.snapshot();var benefits:Dictionary=demo.state.functional_benefits();check(benefits.inspiration_multiplier==1.35 and not benefits.mutual.h6.is_empty(),"fixture really supplies official bonus and mutuality before their UI removal")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size
		for id:String in ["h3","h5"]:
			await panel_for(id);var pop:RefCounted=demo.spatial_popover;var action:Button=pop.inspector.business_button
			check("门前已接路" in pop.status.text and not "+35%" in pop.status.text and not "互哺" in pop.status.text and action.text=="看城市总谱","selected real workshop/market shows spatial state without economic prompting "+id)
			check(root.get_visible_rect().encloses(action.get_global_rect()),"selected spatial action fits real viewport "+str(size.x))
			await capture("selected_"+id+"_"+str(size.x));await ui_click(action);await ready_ui();check(demo.ledger.visible() and demo.ledger.button.text=="城市总谱 · L","native selected-house action still opens actual current L page");await key(KEY_ESCAPE)
	check(demo.state.snapshot()==initial and demo.state.functional_benefits()==benefits,"reading selected cards and L leaves exact author world and economic sources unchanged")
	demo.spatial_popover.close();await create_timer(10.2).timeout;await ready_ui();check(not guide.banner.visible and guide._hint_age>=10.,"neutral optional tip fades after actual runtime without repeated prompts")
	var edit:Dictionary=demo.state.set_house_name("h1","自由落笔的家");demo._after_edit(edit,"history");await ready_ui();check(edit.ok and not guide.banner.visible and guide.markers.get_child_count()==0,"ordinary edit never restarts a faded compulsory target chain")
	var removed:Dictionary=demo.state.remove_road("r1");demo._after_edit(removed,"history");await ready_ui();await panel_for("h3")
	check(removed.ok and "尚未接路" in demo.spatial_popover.status.text and demo.spatial_popover.inspector.business_button.text=="到门前接路","actual road disconnection still explains a selected-house failure")
	await ui_click(demo.spatial_popover.inspector.business_button);await ready_ui();check(demo.tool==2 and demo.state.creative_settings.guidance,"native repair action selects existing road tool without creating a global task")
	demo.select_tool(0);await key(KEY_Z,true);await ready_ui();await panel_for("h3");check("门前已接路" in demo.spatial_popover.status.text,"native Undo restores real selected connection explanation")
	demo.spatial_popover.close();await toggle_tips();check(not demo.state.creative_settings.guidance and not guide.banner.visible,"native opt-out hides optional tip")
	var saved:Dictionary=demo.state.snapshot();var file:=OUT+"/tips_off.json";var cold:=State.new();check(demo.state.save_city(file).ok and cold.load_city(file).ok and cold.snapshot()==saved,"actual disk cold read preserves opt-out and complete world")
	await show(cold,Vector2(-23,-19),"关闭操作轻语冷读");await ready_ui();await panel_for("h3");check(not guide.banner.visible and not "+35%" in demo.spatial_popover.status.text,"cold selected card preserves cleanup and closed tutorial")
	var blank:=State.new();blank.initialize_free();await show(blank,Vector2(-23,-19),"任意画具空地");await ready_ui();await toggle_tips();check(guide.banner.text==Guidance.hint(cold).text and guide.target_points.is_empty() and guide.suggested_role.is_empty(),"empty opt-in city offers same neutral tip without house/road/industry order")
	var legacy:=State.new();legacy.initialize();await show(legacy,Vector2(-6,-1),"经典引导保持");await ready_ui();check(not demo.state.CreationPolicy.is_free(demo.state) and not guide.stage.is_empty() and guide.banner.text!=Guidance.hint(legacy).text,"legacy retains its original derived tutorial stage")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("OPTIONAL_GUIDANCE_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
