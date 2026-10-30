extends "res://tools/check_creation_reference_music_live.gd"
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
func run()->void:
	OUT="res://验证记录/M82/claim_first"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1024,768);Engine.max_fps=60
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:=State.new();city.initialize_free();Receipts.initialize(city)
	for z:int in range(8):
		for x:int in range(7):
			if city.houses.size()>=50:break
			check(city.add_house(Vector2(-36+x*4.,-36+z*4.)).ok,"actual authored house earns ordinary inspiration")
	var paid:=Receipts.collect(city);check(paid.earned==100 and Journey.credits(city.harmony_journey)==1,"50 real new homes earn one existing credit without injected XP")
	await show(city,Vector2(-24,-22),"待选手札覆盖与领取");quiet()
	var draft:Node=demo.get_meta("inspiration_draft");draft.set_process(true);draft.postponed=true;draft.refresh(true)
	var pending:Array=demo.state.harmony_journey.pending_draft.duplicate();var rank:Dictionary=demo.state.harmony_journey.ranks.duplicate()
	check(not draft.paper.visible and draft.badge.visible,"earned draft waits quietly in existing badge")
	await ui_click(draft.badge);await settle();check(draft.paper.visible,"native badge opens actual three-card invitation")
	demo.guide.open_panel();await settle();check(not draft.paper.visible and demo.state.harmony_journey.pending_draft==pending,"covering invitation preserves exact pending cards")
	var letters:Node=demo.get_meta("city_letters");await ui_click(letters.claim);await settle()
	check(draft.paper.visible and demo.state.harmony_journey.pending_draft==pending,"native handbook claim reopens covered invitation")
	var id:=str(pending[0]);var button:Button=draft.buttons[id]
	check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(button.get_global_rect()),"1024 native card claim button fits screen")
	await capture("covered_draft_reopened_1024");await ui_click(button);await settle();quiet()
	check(Journey.credits(demo.state.harmony_journey)==0 and int(demo.state.harmony_journey.ranks.get(id,0))==int(rank.get(id,0))+1,"native claim consumes exactly one credit")
	var saved:Dictionary=demo.state.snapshot();check(not Journey.choose(demo.state,id).ok and demo.state.snapshot()==saved,"duplicate claim is rejected without changing state")
	var added:Dictionary=demo.state.add_house(Vector2(-36,-1));demo._after_edit(added,"room");await settle()
	Receipts.collect(demo.state);var xp:int=demo.state.harmony_journey.harmony_xp;var ranks:Dictionary=demo.state.harmony_journey.ranks.duplicate()
	demo._after_edit(demo.state.undo(),"history");await settle()
	check(demo.state.harmony_journey.ranks==ranks and demo.state.harmony_journey.harmony_xp==xp and Receipts.collect(demo.state).earned==0,"geometry Undo keeps selected card and cannot farm earned inspiration")
	check(demo.state.save_city(OUT+"/claimed.json").ok,"claimed state saves to isolated disk")
	var cold:=State.new();check(cold.load_city(OUT+"/claimed.json").ok and cold.harmony_journey==demo.state.harmony_journey and Receipts.collect(cold).earned==0,"claimed state cold loads without replaying rewards")
	root.size=Vector2i(1440,900);demo.guide.open_panel();await settle();await ui_click(letters.get_node("ReadSecondStudy"));await settle();await capture("sample_manual_1440")
	check(demo.guide.body.text.contains("二阶") and demo.guide.body.text.contains("柱廊"),"manual explains the two samples and their real requirements")
	await key(KEY_ESCAPE)
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"earned_xp":paid.earned,"selected":id}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("INSPIRATION_CLAIM ",JSON.stringify(report));demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
