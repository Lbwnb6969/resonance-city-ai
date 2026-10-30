extends "res://tools/check_creation_placed_landmarks_live.gd"
const Historical=preload("res://tools/fixtures/city_creation_pre_cutoff_free.gd")
const Pending=preload("res://tools/fixtures/city_creation_growth_conversion_fixture.gd")
const Learn=preload("res://tools/fixtures/city_creation_tradition_fixture.gd")
const Artisan=preload("res://tools/fixtures/city_creation_artisan_contract_fixture.gd")
const AudioProbe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
func tab(index:int)->void:
	var at:Vector2=demo.guide.tabs.global_position+demo.guide.tabs.get_tab_rect(index).get_center()
	var move:=InputEventMouseMotion.new();move.device=92;move.position=at;move.global_position=at;root.push_input(move);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
	await settle()
func run()->void:
	OUT="res://验证记录/M84/free_growth_presentation_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	demo.focus=Vector3(-25,.8,-12);demo.zoom=18.;demo._update_camera();await settle();await click_world(Vector2(-25,-12));await settle();quiet()
	var ribbon:Control=demo.score_ribbon
	check(await wait_for(func():return ribbon.audible),"actual one-house audio still drives live staff after free growth display removal")
	var before:Dictionary=demo.state.snapshot()
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await settle()
		check(not ribbon.level_label.is_visible_in_tree() and ribbon.level_label.text.is_empty() and ribbon._lit_notes==0 and ribbon.chords.get_child_count()==0,"free HUD has no level, XP lights or missing-family targets "+str(size.x))
		check(ribbon.staff_points.size()==5 and ribbon.staff.is_visible_in_tree() and ribbon.size.x<=209. and Rect2(Vector2.ZERO,Vector2(size)).encloses(ribbon.get_global_rect()),"compact actual staff and existing seals fit "+str(size.x))
		await capture("free_hud_"+str(size.x));await key(KEY_F1);await settle();await tab(1)
		check("不再积累新的等级或手札额度" in demo.guide.body.text and "无需二阶手札" in demo.guide.body.text and "Lv.5" not in demo.guide.body.text,"native free handbook explains spatial creation and retained rights "+str(size.x))
		await capture("free_guide_"+str(size.x))
		var scroll:ScrollContainer=demo.guide.body.get_parent();var at:Vector2=scroll.get_global_rect().get_center()
		var move:=InputEventMouseMotion.new();move.device=92;move.position=at;move.global_position=at;root.push_input(move);await process_frame
		for i in range(8):
			var wheel:=InputEventMouseButton.new();wheel.device=92;wheel.position=at;wheel.global_position=at;wheel.button_index=MOUSE_BUTTON_WHEEL_DOWN;wheel.pressed=true;root.push_input(wheel);await process_frame
		await settle();check(scroll.scroll_vertical>0,"native handbook scroll reaches retained-rights explanation "+str(size.x));await capture("free_guide_scrolled_"+str(size.x));await key(KEY_ESCAPE)
	check(demo.state.snapshot()==before,"free HUD and handbook never initialize or change rewards")
	var old:RefCounted=Pending.legacy_pending();check(old.CreationPolicy.convert(old,OUT+"/old.json").ok,"real old credit converted with backup")
	await show(old,Vector2(-25,-25),"原有手札呈现");quiet();var draft:Node=demo.get_meta("inspiration_draft");var offer:Array=demo.state.harmony_journey.pending_draft.duplicate();var history:Dictionary=demo.state.harmony_journey.duplicate(true)
	await key(KEY_F1);await settle();await ui_click(demo.get_meta("city_letters").claim);await settle()
	check(draft.paper.visible and "保留手札" in draft.badge.text and "原有手札" in draft.title.text and "三卷" not in draft.footer.text,"native old offer names historical credit without promising a new pool")
	for id:String in offer:
		var seal:Label=draft.buttons[id].get_parent().get_node("FamilySeal")
		check("/3" not in seal.text and "原有邀约" in seal.text and "普通营造不再积累新共鸣" in draft.buttons[id].tooltip_text,"old card keeps real effect without collection ratio or new XP promise "+id)
	check(demo.state.harmony_journey==history,"presentation leaves original invitation, serial, rarity, pity and old remainder exact")
	await capture("historical_offer");await ui_click(draft.reroll_button);await settle()
	var paid:Array=demo.state.harmony_journey.pending_draft.duplicate();check(draft.Journey.Rarity.rerolls_left(demo.state.harmony_journey)==0,"native old reroll budget remains real and finite")
	await ui_click(draft.buttons[paid[0]]);await settle();quiet();check(draft.Journey.credits(demo.state.harmony_journey)==0 and demo.state.harmony_journey.ranks.get(paid[0],0)==1,"native old choice remains redeemable")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.harmony_journey.pending_draft==paid and draft.Journey.Rarity.rerolls_left(demo.state.harmony_journey)==0,"native choice Undo retains same paid offer and spent budget")
	var earned:=Historical.fresh();earned.add_house(Vector2(-25,-12))
	for id:String in ["twilight_tea_pavilion","courtyard_canon_spring","garden_salons"]:check(Learn.learn(earned,id).ok,"valid archived family fixture via original choice API "+id)
	await show(earned,Vector2(-25,-12),"已有围院手札权益");quiet();before=demo.state.snapshot()
	check(ribbon.chords.get_child_count()==1 and ribbon.chords.get_child(0).name=="Chord_courtyard" and "已得手札权益" in ribbon.chords.get_child(0).tooltip_text,"free ribbon preserves only actual owned family capstone")
	await ui_click(ribbon.chords.get_child(0));await settle();var page:Node=demo.get_meta("growth_rights_page")
	check(page.detail.is_visible_in_tree() and page.last_report.cards.size()==3 and "历史余量" in page.detail.text and "小数" in page.detail.text,"native earned family seal opens read-only historical amounts and cards")
	check(demo.state.snapshot()==before,"earned family shortcut never changes old ranks, rarity or rewards")
	await capture("earned_history_shortcut");await key(KEY_ESCAPE)
	var legacy:=State.new();legacy.initialize_empty();Pending.Receipts.initialize(legacy)
	var built:Array=[]
	for i in range(35):built.append(legacy.add_house(Vector2(-32+(i%7)*3.,-32+(i/7)*3.)).ok)
	check(built.all(func(ok):return ok),"thirty-five real legacy houses use public transactions")
	check(Pending.Receipts.collect(legacy).earned==70,"legacy still earns seventy actual house XP")
	await show(legacy,Vector2(-25,-25),"经典成长保留");quiet()
	check(ribbon.level_label.is_visible_in_tree() and ribbon.level_label.text=="Lv.1" and ribbon._lit_notes==3 and ribbon.chords.get_child_count()==4,"switching to legacy restores original level, XP notes and four-family display")
	await capture("legacy_hud");await key(KEY_F1);await settle();await tab(1)
	check("建筑 Lv.1～Lv.5" in demo.guide.body.text,"legacy handbook retains original natural-growth explanation")
	var previous:int=demo.state.harmony_journey.harmony_xp;await ui_click(demo.get_meta("creation_options").convert_button);await settle();quiet()
	check(not ribbon.level_label.is_visible_in_tree() and ribbon._lit_notes==0 and ribbon.chords.get_child_count()==0 and demo.state.harmony_journey.harmony_xp==previous,"same-city native conversion retires display without clearing old numeric history")
	await key(KEY_ESCAPE);var artisan:=Artisan.build();check(artisan.ok,"real artisan qualification fixture")
	await show(artisan.city,Artisan.ORIGIN,"百工原权益说明");quiet();await key(KEY_L);await settle()
	check("+35%" in demo.ledger.body.text and "原待领奖励适用" in demo.ledger.body.text and "灵感积累" not in demo.ledger.body.text,"native free L page identifies official old-reward applicability")
	await capture("artisan_rights_explanation");await key(KEY_ESCAPE)
	var pcm:Dictionary=await AudioProbe.record(OUT+"/Master.wav",3.2)
	check(pcm.ok and pool()==voices and DisplayServer.get_name()!="headless" and AudioServer.get_driver_name()=="WASAPI","actual Master, original bounded voices and NVIDIA OpenGL/WASAPI")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save byte identical")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.,"master":pcm,"bank_signature":demo.music.BankCache.source_signature()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("FREE_GROWTH_PRESENTATION_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
