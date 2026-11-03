extends "res://tools/check_creation_progression_ui_live.gd"
const SpaceFixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
func network_now()->void:
	var n=load("res://scripts/world/city_creation_network.gd").new();n.state=demo.state;n._build_graph();demo.state.prepare_regional_echo(n)
func wait_settled()->void:
	await settle();quiet();network_now();demo.get_meta("inspiration_draft").poll();await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:=State.new();city.initialize_free();check(city.begin_progression_epoch(OUT+"/empty.json").ok,"real backed-up empty epoch")
	await show(city,SpaceFixture.ORIGIN+Vector2(3.6,3.6),"无店铺空间发现");quiet();demo.life.set_process(false)
	var source:=SpaceFixture.courtyard("U","none");var cells:Array=source.city.houses[0].cells.map(func(c):return {"x":c.x,"z":c.z,"level":c.level,"kind":c.kind})
	demo._after_edit(demo.state.add_house_stroke(SpaceFixture.ORIGIN,cells),"room");await wait_settled()
	check(demo.state.houses.all(func(h):return h.role=="residential") and demo.state.bakery_supply.is_empty() and demo.state.workshop_supply.is_empty(),"all actual author buildings are noncommercial")
	check(demo.state.cozy_progression.receipts.keys().any(func(k):return str(k).begins_with("space_cluster/")),"geometry publication reaches normal polling without Life simulation")
	var current:Dictionary=demo.state.cozy_progression.duplicate(true);var page:Node=await journal()
	check(str(current.xp) in page.summary.text and "营造点" in page.summary.text,"native J displays real spatial growth balance")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await create_timer(.25).timeout;var scroll:ScrollContainer=demo.journal.cards.get_parent();scroll.ensure_control_visible(page.action);await create_timer(.15).timeout;check(page.action.is_visible_in_tree() and scroll.get_global_rect().encloses(page.action.get_global_rect()),"pause control fits journal "+str(size.x));await capture("spatial_J_"+str(size.x))
	await ui_click(page.action);await settle();quiet();check(not demo.state.cozy_progression.enabled,"native J pause commits same epoch")
	await key(KEY_ESCAPE);demo._after_edit(demo.state.add_house(Vector2(-15,-20)),"room");await wait_settled();check(demo.state.cozy_progression.xp==current.xp,"paused geometry is skipped without XP")
	page=await journal();await ui_click(page.action);await settle();quiet();check(demo.state.cozy_progression.enabled and demo.state.cozy_progression.epoch_id==current.epoch_id and demo.state.cozy_progression.xp==current.xp,"native resume cannot replay off-period construction")
	await key(KEY_ESCAPE)
	for x in range(1,4):demo._after_edit(demo.state.add_cell("h1",x,4,0),"room");await wait_settled()
	demo._after_edit(demo.state.add_road([SpaceFixture.ORIGIN+Vector2(-2,3.6),SpaceFixture.ORIGIN+Vector2(10,3.6)] as Array[Vector2],"path","none"),"road");await wait_settled()
	check(demo.state.cozy_progression.receipts.keys().any(func(k):return str(k).begins_with("space_district/")),"actual closed court and portal discover district without customers")
	current=demo.state.cozy_progression.duplicate(true);var author:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/earned.json").ok,"real earned city saves")
	var cold:=State.new();check(cold.load_city(OUT+"/earned.json").ok and cold.cozy_progression==current,"disk cold read preserves all earned geometry receipts")
	await show(cold,SpaceFixture.ORIGIN+Vector2(3.6,3.6),"空间发现冷读");quiet();demo.life.set_process(false);await wait_settled();check(demo.state.cozy_progression==current,"cold geometry publication cannot repay discoveries")
	check(demo.state.houses==author.houses and personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"author work and personal default file remain intact")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("EPOCH_GEOMETRY_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
