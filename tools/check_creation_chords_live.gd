extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixtures=preload("res://tools/fixtures/city_creation_chord_fixture.gd")
const OUT="res://验证记录/五类和弦经营_2026-10-19"
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
	var result:Dictionary=demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(result.ok,"actual saved recipe scene loads: "+kind)
	if not result.ok:return
	demo._after_edit(result,"history")
	var end:=Time.get_ticks_msec()+180000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	_check(not demo.edit_pending(),"real GL geometry publishes: "+kind)
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
		_check(count>=3,"the fugue recipe has at least three published arcade facades")
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
		_check(count>=2 and not demo.life.tram.cars.is_empty(),"the waltz recipe has two rendered glasshouses and an actual tram")
	demo.focus=focus;demo.zoom=zoom;demo.pitch=.82;demo.yaw=.22;demo._update_camera()
	for i in range(4):await process_frame
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
	await _show("pastoral_triad",Fixtures.pastoral(),"h1",Vector3(-7,.5,0),27.)
	await _show("highland_fifth",Fixtures.highland(),"h1",Vector3(-22,1.,0),28.)
	await _show("renaissance_fugue",Fixtures.renaissance(),"h1",Vector3(-12,.5,-1),30.)
	await _show("clockwork_waltz",Fixtures.clockwork(),"h2",Vector3(-11,.5,-1),29.)
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
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"all five recipe scenes preserve personal save bytes")
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t",true,true))
	demo.queue_free();await process_frame;await create_timer(.2).timeout
	print("CHORDS_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks.size(),"failures":failures}));quit(0 if failures.is_empty() else 1)
