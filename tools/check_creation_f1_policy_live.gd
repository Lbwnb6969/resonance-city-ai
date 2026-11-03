extends "res://tools/check_creation_three_road_modes_live.gd"
const Copy=preload("res://scripts/ui/city_creation_copy.gd")
const Pending=preload("res://tools/fixtures/city_creation_growth_conversion_fixture.gd")
func stable_ui()->void:
	await settle();demo.life.set_process(false)
	for name:String in ["inspiration_draft","vignette_journey"]:
		var item:Node=demo.get_meta(name);item.set_process(false);item.paper.hide()
func guide_tab(index:int)->void:
	var at:Vector2=demo.guide.tabs.global_position+demo.guide.tabs.get_tab_rect(index).get_center()
	var move:=InputEventMouseMotion.new();move.device=92;move.position=at;move.global_position=at;root.push_input(move);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
	await stable_ui();check(demo.guide.tabs.current_tab==index,"native tab selects actual help page "+str(index))
func browse(label:String)->void:
	var before:Dictionary=demo.state.snapshot();await key(KEY_F1);await stable_ui()
	var options:Node=demo.get_meta("creation_options")
	check(root.get_visible_rect().encloses(options.guidance.get_global_rect()) and root.get_visible_rect().encloses(demo.guide.close_button.get_global_rect()),"help opt-out and close fit viewport "+label)
	await guide_tab(0);check("没有固定建造顺序" in demo.guide.body.text and "先在相近" not in demo.guide.body.text,"free help describes actual five tools without mandatory chain")
	await guide_tab(1);check("只累计新账期真实完成事件" in demo.guide.body.text and "新账成长与历史手札分账" in demo.guide.body.text and "不再积累新的等级" not in demo.guide.body.text,"help distinguishes optional current account and preserved old rights")
	check("暂停不积累营造点" in demo.guide.body.text and "暂停经营保留已得资格" in demo.guide.body.text,"help states real pause and earned reward behavior")
	var scroll:ScrollContainer=demo.guide.body.get_parent();check(scroll.scroll_vertical==0,"policy tab starts at its actual heading after previous browsing "+label);await capture(label+"_rights")
	var at:Vector2=scroll.get_global_rect().get_center();var move:=InputEventMouseMotion.new();move.device=92;move.position=at;move.global_position=at;root.push_input(move);await process_frame
	for i:int in range(20):
		for down:bool in [true,false]:
			var wheel:=InputEventMouseButton.new();wheel.device=92;wheel.position=at;wheel.global_position=at;wheel.button_index=MOUSE_BUTTON_WHEEL_DOWN;wheel.pressed=down;root.push_input(wheel);await process_frame
	check(scroll.scroll_vertical>0,"native wheel reaches long policy text "+label);await capture(label+"_rights_end")
	await guide_tab(2);check("不限制普通风貌选择" in demo.guide.body.text and "14 屋" not in demo.guide.body.text and "28 屋" not in demo.guide.body.text and "50 屋" not in demo.guide.body.text and "烟火画具" not in demo.guide.body.text,"free style reference does not prescribe old milestone thresholds")
	await guide_tab(3);check("筑屋 / 修路 / 水岸 / 林木 / 地形" in demo.guide.body.text and "L 城市总谱" in demo.guide.body.text and "道路（兼容8）" in demo.guide.body.text,"shortcut reference matches actual free dock and L page")
	check("城市总谱" in demo.guide.paper.find_child("GuideFooter",true,false).text,"free footer points to current L page")
	await key(KEY_ESCAPE);await stable_ui();check(not demo.guide.visible() and demo.state.snapshot()==before,"native browsing and escape are read-only "+label)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await stable_ui();isolate_input()
	var legacy:=Pending.legacy_pending();var original:Dictionary=legacy.snapshot();check(legacy.CreationPolicy.convert(legacy,OUT+"/converted.json").ok,"real legacy offer converts with independent original backup")
	await show(legacy,Vector2(-25,-25),"F1新旧政策");await stable_ui();var historical:Dictionary=demo.state.harmony_journey.duplicate(true)
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:root.size=size;await stable_ui();await browse("off_"+str(size.x))
	var options:Node=demo.get_meta("creation_options");check("经营未启用" in options.description.text,"converted city help reflects no new account")
	await key(KEY_J);await stable_ui();var page:Node=demo.get_meta("progression_page");demo.journal.cards.get_parent().scroll_vertical=0;await process_frame;await ui_click(page.action);await stable_ui()
	check(page.last_result.get("ok",false) and demo.state.cozy_progression.enabled,"native J enables real new account")
	await key(KEY_ESCAPE);await stable_ui();await browse("active_1440");check("经营开启" in options.description.text and demo.state.harmony_journey==historical,"same-city F1 reflects enabled account without altering old offer")
	await key(KEY_J);await stable_ui();demo.journal.cards.get_parent().scroll_vertical=0;await process_frame;await ui_click(page.action);await stable_ui();check(page.last_result.get("ok",false) and not demo.state.cozy_progression.enabled,"native J pauses actual account")
	var file:String=page.working_path;await key(KEY_ESCAPE);await stable_ui();await browse("paused_1440");check("经营暂停" in options.description.text,"same-city help reflects paused account")
	var cold:=State.new();check(cold.load_city(file).ok and cold.cozy_progression==demo.state.cozy_progression,"real toggle file cold reads same paused account")
	await show(cold,Vector2(-25,-25),"F1暂停冷读");await stable_ui();await browse("cold_1440");check("经营暂停" in options.description.text,"cold help keeps actual policy state")
	var old:=State.new();check(old.restore(original).ok,"legacy original cold restores")
	preload("res://scripts/world/city_creation_unified_rewards.gd").initialize(old)
	await show(old,Vector2(-25,-25),"经典帮助保持");await stable_ui();var before:Dictionary=demo.state.snapshot();await key(KEY_F1);await stable_ui()
	for i:int in range(4):await guide_tab(i);check(demo.guide.body.text==Copy.guide_tab_text(i),"legacy help remains exact original page "+str(i))
	check("新账期" in options.convert_button.tooltip_text and "生活账本" in demo.guide.paper.find_child("GuideFooter",true,false).text,"conversion tooltip offers optional new account and legacy footer stays correct")
	var after:Dictionary=demo.state.snapshot();var changed:Array=[]
	for field:String in before:
		if before[field]!=after.get(field):changed.append(field)
	check(after==before and after.harmony_journey.pending_draft==before.harmony_journey.pending_draft,"legacy help preserves its original real invitation and all state")
	if not changed.is_empty():FileAccess.open(OUT+"/legacy_difference.json",FileAccess.WRITE).store_string(JSON.stringify({"changed":changed,"before":before,"after":after},"\t"))
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save byte identical")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("F1_POLICY_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
