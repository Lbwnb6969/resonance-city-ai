extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixtures=preload("res://tools/fixtures/city_creation_chord_fixture.gd")
const OUT="res://验证记录/策略合订_2026-10-21"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Array=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _show(kind:String,city:RefCounted,probe:String,focus:Vector3,zoom:float)->void:
	var start:=Time.get_ticks_msec()
	_check(preload("res://tools/fixtures/city_creation_juice_fixture.gd").apply(city,kind,false).ok,"remove one real recipe ingredient before loading")
	var result:Dictionary=demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(result.ok,"actual saved recipe scene loads: "+kind)
	if not result.ok:return
	demo._after_edit(result,"history")
	var end:=Time.get_ticks_msec()+180000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	_check(not demo.edit_pending(),"real GL geometry publishes: "+kind)
	demo.select_tool(0);demo.focus=focus;demo.zoom=zoom;demo.pitch=.82;demo.yaw=.22;demo._update_camera()
	for i in range(8):await process_frame
	var juice:Dictionary=await preload("res://tools/fixtures/city_creation_juice_live.gd").finish(demo,kind)
	for label:String in juice.checks:_check(juice.checks[label],kind+" juice: "+label)
	_check(demo.state.has_chord(probe,kind),"published geometry retains exact recipe: "+kind)
	demo.selected_district=str(demo.state.district_for_house(probe).get("id",""));demo.select_tool(7)
	demo.quest.get_parent().show();demo._refresh_ui();demo._refresh_district()
	var title:String=State.SynergyBuffs.CHORD_NAMES[kind]
	_check(demo.quest.text.contains(title) and demo.district_description.text.contains(title),"actual target card and district drawer show chord badge: "+kind)
	if kind=="highland_fifth":_check(not demo.town.find_children("RoadStairs","Node3D",true,false).is_empty(),"the highland recipe has actual 3D stair geometry")
	if kind=="renaissance_fugue":
		var count:=0
		for node:Node3D in demo.town.house_roots.values():
			if not node.get_meta("arcades",[]).is_empty():count+=1
		_check(count==2,"the consolidated fugue recipe has exactly two published arcade facades")
		var shop:=""
		for house:Dictionary in demo.state.houses:
			if house.role=="workshop":shop=str(house.id)
		_check(demo.state.produce_craft(shop,1) and demo.state.reserve_craft(shop,"h4","h1") and demo.state.complete_craft(shop,"h4","h1"),"actual wood-delivery transaction includes its reserved cultural gift")
		demo._on_craft_event("installed",shop,"h1",demo.state.improvement_level("h1"))
		_check(demo.town.craft.culture_roots.has("h1") and int(demo.town.craft.culture_roots.h1.get_meta("art_display_level",0))==2,"normal delivery callback immediately publishes the gifted stained glass")
	if kind=="clockwork_waltz":
		var count:=0
		for node:Node3D in demo.town.house_roots.values():
			if not node.get_meta("conservatory",{}).is_empty():count+=1
		_check(count==1 and not demo.life.tram.cars.is_empty(),"the waltz recipe has one rendered glasshouse and an actual tram")
	demo.focus=focus;demo.zoom=zoom;demo.pitch=.82;demo.yaw=.22;demo._update_camera()
	for i in range(4):await process_frame
	await create_timer(3.2).timeout
	var track:String={"pastoral_triad":"air","highland_fifth":"wood_sylvan","renaissance_fugue":"renaissance_fugue","clockwork_waltz":"clockwork_waltz","chrono_counterpoint":"air"}[kind]
	var floor_db:float={"pastoral_triad":-22.,"highland_fifth":-25.,"renaissance_fugue":-18.,"clockwork_waltz":-18.,"chrono_counterpoint":-21.5}[kind]
	_check(float(demo.music.emergence.score.targets.get(track,-60.))>=floor_db,"actual phrase boundary applies the localized chord stem: "+kind)
	_check(demo.score_ribbon.chords.has_node("Chord_"+kind),"actual score ribbon shows the active chord seal: "+kind)
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+kind+".png")==OK,"actual GL screenshot saved: "+kind)
	var samples:Array[float]=[]
	for i in range(180):
		var frame_start:=Time.get_ticks_usec();await process_frame;samples.append((Time.get_ticks_usec()-frame_start)/1000.)
	samples.sort();var elapsed:=Time.get_ticks_msec()-start
	facts.append({"chord":kind,"houses":demo.state.houses.size(),"elapsed_ms":elapsed,"frame_p95_ms":samples[int(samples.size()*.95)],"worker_planning_ms":demo.town.budget_rebuild.stats.get("worker_stages",{}).get("planning_bonuses",-1.),"scope":demo.state.planning_bonus(probe)})
	print("CHORD_SCENE ",JSON.stringify(facts[-1]))
	if kind=="clockwork_waltz":
		demo.life.set_process(true)
		var end_drive:=Time.get_ticks_msec()+16000
		while Time.get_ticks_msec()<end_drive:await process_frame
		demo.life.set_process(false)
		var moved:=0.
		for car:Dictionary in demo.life.tram.cars:moved+=float(car.distance)
		_check(moved>20. and demo.state.afterglow_remaining("h1")>0. and demo.state.afterglow_remaining("h4")>0.,"real-time tram passage charges both rendered glasshouses along its street")
		await RenderingServer.frame_post_draw
		_check(root.get_texture().get_image().save_png(OUT+"/clockwork_passage_glow.png")==OK,"actual passing tram and warm-window glow are captured")
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated";root.add_child(demo);demo.life.set_process(false)
	var end:=Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<end:await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"real GL window loads the production music bank")
	if "--lighting-only" in OS.get_cmdline_user_args():
		var lighting:Dictionary=await preload("res://tools/fixtures/city_creation_window_bounce_live.gd").capture(demo)
		for label:String in lighting.checks:_check(lighting.checks[label],label)
		print("LIGHTING_ONLY ",JSON.stringify({"ok":failures.is_empty(),"checks":checks.size(),"failures":failures}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1);return
	if "--juice-extras-only" in OS.get_cmdline_user_args():
		var extras:Dictionary=await preload("res://tools/fixtures/city_creation_juice_extras_live.gd").new().run(demo)
		for label:String in extras.checks:_check(extras.checks[label],"juice extras: "+label)
		print("JUICE_EXTRAS_ONLY ",checks.size()," ",failures);demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1);return
	var pastoral:RefCounted=Fixtures.pastoral()
	var joiner:Dictionary=pastoral.add_house(Vector2(-12.8,-3));assert(joiner.ok)
	pastoral.set_house_role(str(joiner.house_id),"workshop")
	await _show("pastoral_triad",pastoral,"h1",Vector3(-7,.5,0),27.)
	await _show("highland_fifth",Fixtures.highland(1),"h1",Vector3(-22,1.,0),28.)
	var fugue:RefCounted=Fixtures.renaissance()
	for cell:Dictionary in fugue.houses[fugue._house_index("h3")].cells.duplicate(true):
		if int(cell.level)==1:fugue.remove_cell("h3",str(cell.id))
	fugue.remove_roundabout(Vector2(-22,0))
	await _show("renaissance_fugue",fugue,"h1",Vector3(-12,.5,-1),30.)
	var waltz:RefCounted=Fixtures.clockwork()
	for cell:Dictionary in waltz.houses[waltz._house_index("h4")].cells.duplicate(true):
		if int(cell.level)==1 and int(cell.x)==1:waltz.remove_cell("h4",str(cell.id))
	await _show("clockwork_waltz",waltz,"h2",Vector3(-11,.5,-1),29.)
	await _show("chrono_counterpoint",Fixtures.chrono(),"h1",Vector3(0,.5,0),39.)
	demo.guide.open_panel();demo.guide.tabs.current_tab=1
	for i in range(3):await process_frame
	var manual_complete:=true
	for title:String in State.SynergyBuffs.CHORD_NAMES.values():manual_complete=manual_complete and demo.guide.body.text.contains(title)
	_check(manual_complete,"actual F1 handbook explains all five recipes and earned benefits")
	var guide_scroll:ScrollContainer=demo.guide.body.get_parent()
	guide_scroll.scroll_vertical=int(guide_scroll.get_v_scroll_bar().max_value)
	for i in range(3):await process_frame
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/声学和弦手札.png")==OK,"the actual scrollable planning handbook is captured")
	demo.guide.close_panel()
	var extras:Dictionary=await preload("res://tools/fixtures/city_creation_juice_extras_live.gd").new().run(demo)
	for label:String in extras.checks:_check(extras.checks[label],"juice extras: "+label)
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"all five recipe scenes preserve personal save bytes")
	var lighting:Dictionary=await preload("res://tools/fixtures/city_creation_window_bounce_live.gd").capture(demo)
	for label:String in lighting.checks:_check(lighting.checks[label],"two-tone and window bounce: "+label)
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t",true,true))
	demo.queue_free();await process_frame;await create_timer(.2).timeout
	print("CHORDS_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks.size(),"failures":failures}));quit(0 if failures.is_empty() else 1)
