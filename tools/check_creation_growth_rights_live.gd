extends "res://tools/check_creation_free_tasks_live.gd"
const Rights=preload("res://scripts/world/city_creation_growth_rights.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const Artisan=preload("res://tools/fixtures/city_creation_artisan_contract_fixture.gd")
func publish_rights(city:RefCounted,at:Vector2,title:String)->void:
	await publish_tasks(city,at,title)
	# Finish the existing lazy charter baseline before testing a read-only page.
	demo.get_meta("inspiration_draft").refresh();calm_draft()
func read_rights()->Node:
	await key(KEY_J);await settle();calm_draft()
	var page:Node=demo.get_meta("growth_rights_page")
	demo.journal.cards.get_parent().ensure_control_visible(page.read);await create_timer(.2).timeout
	await ui_click(page.read);await create_timer(.1).timeout
	return page
func run()->void:
	OUT="res://验证记录/M84/growth_rights_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();calm_draft();var voices:=pool()
	var city:=State.new();city.initialize_free();await publish_rights(city,Vector2(-25,-12),"空地已有记录")
	var before:Dictionary=demo.state.snapshot();var page:Node=await read_rights()
	check(page.detail.visible and page.last_report.cards.is_empty() and page.last_report.credits==0,"native rights page reads empty free city")
	check(demo.state.snapshot()==before,"opening J and rights cannot mutate empty city rewards")
	await capture("empty_rights");await key(KEY_ESCAPE)
	city=State.new();city.initialize_free();Receipts.initialize(city)
	for z:int in range(8):
		for x:int in range(7):
			if city.houses.size()<50:check(city.add_house(Vector2(-36+x*4.,-36+z*4.)).ok,"real authored house")
	check(Receipts.collect(city).earned==100,"actual earned existing invitation")
	await publish_rights(city,Vector2(-24,-22),"原有待选手札")
	var pending:Array=demo.state.harmony_journey.pending_draft.duplicate();before=demo.state.snapshot()
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;page=await read_rights()
		check(page.last_report.credits==1 and page.last_report.pending==pending and "保留的邀约" in page.detail.text,"native page retains exact invitation "+str(size.x))
		check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(page.read.get_global_rect()),"rights entry fits "+str(size.x))
		if demo.state.snapshot()!=before:
			FileAccess.open(OUT+"/before_"+str(size.x)+".json",FileAccess.WRITE).store_string(JSON.stringify(before,"\t"))
			FileAccess.open(OUT+"/after_"+str(size.x)+".json",FileAccess.WRITE).store_string(JSON.stringify(demo.state.snapshot(),"\t"))
		check(demo.state.snapshot()==before,"reading neither rolls nor claims "+str(size.x))
		await capture("pending_rights_"+str(size.x));await key(KEY_ESCAPE)
	await key(KEY_F1);await settle();var letters:Node=demo.get_meta("city_letters");await ui_click(letters.claim);await settle()
	var selected:String=pending[0];var draft:Node=demo.get_meta("inspiration_draft")
	check(draft.paper.visible and draft.buttons.has(selected),"existing F1 claim remains reachable from journal")
	await ui_click(draft.buttons[selected]);await settle();calm_draft();before=demo.state.snapshot();page=await read_rights()
	check(page.last_report.cards.size()==1 and page.last_report.cards[0].id==selected and page.last_report.credits==0,"native claim migrates into exact owned-card view")
	check(Rights.Journey.cards()[selected].name in page.detail.text and demo.state.snapshot()==before,"owned effect display does not write progress")
	await capture("owned_rights");await key(KEY_ESCAPE)
	check(demo.state.save_city(OUT+"/owned.json").ok,"real isolated disk save")
	var cold:=State.new();check(cold.load_city(OUT+"/owned.json").ok,"real isolated disk load")
	await publish_rights(cold,Vector2(-24,-22),"已有权益冷读");page=await read_rights()
	check(page.last_report.cards.size()==1 and page.last_report.cards[0].id==selected and page.last_report.credits==0,"cold owned view never reissues invitation")
	await key(KEY_ESCAPE)
	var f:=Artisan.build();check(f.ok,"public actual artisan geometry and front road")
	await publish_rights(f.city,Artisan.ORIGIN,"百工正式收益保持");page=await read_rights()
	check(is_equal_approx(page.last_report.inspiration_multiplier,1.35) and "+35%" in page.detail.text,"real published artisan source retains official +35 percent")
	check(page.last_report.chords.any(func(c):return c.id=="clockwork_waltz" and c.active),"current spatial chord is independent of owned cards")
	await capture("artisan_rights");await key(KEY_ESCAPE)
	var receipts:Dictionary=demo.state.harmony_journey.receipts.duplicate(true)
	var removed:Dictionary=demo.state.remove_road("r1");demo._after_edit(removed,"history");await settle();calm_draft();page=await read_rights()
	check(is_equal_approx(page.last_report.inspiration_multiplier,1.) and not "+35%" in page.detail.text,"road removal withdraws current benefit")
	check(page.last_report.chords.any(func(c):return c.id=="clockwork_waltz" and c.recorded and not c.active),"existing chord record persists without current qualification")
	check(demo.state.harmony_journey.receipts==receipts,"read and qualification withdrawal retain exact old receipts")
	await capture("withdrawn_rights");await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();calm_draft();page=await read_rights()
	check(is_equal_approx(page.last_report.inspiration_multiplier,1.35),"native Undo restores actual source benefit")
	await key(KEY_ESCAPE)
	var blank:=State.new();blank.initialize_free();await publish_rights(blank,Vector2(-25,-12),"换城清除旧权益展示")
	check(not page.detail.visible and page.last_report.is_empty(),"new-city context retires stale cards and qualification")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual Master and original bounded pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("GROWTH_RIGHTS_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
