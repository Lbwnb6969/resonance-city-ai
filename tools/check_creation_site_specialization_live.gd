extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Chords=preload("res://tools/fixtures/city_creation_chord_fixture.gd")
const Modern=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const OUT="res://验证记录/选址专精_2026-10-19"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _edit(result:Dictionary)->void:
	_check(bool(result.ok),"authored city edit succeeds")
	demo._after_edit(result,"history");var deadline:=Time.get_ticks_msec()+90000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.edit_pending(),"actual geometry and Life graph publish");demo.life.set_process(false)
func _select(id:String,focus:Vector2)->void:
	demo.focus=Vector3(focus.x,1.,focus.y);demo.zoom=25.;demo.yaw=.3;demo.pitch=.8;demo._update_camera();demo.select_tool(4);demo.selected_house=id;demo._refresh_ui()
func _capture(name:String)->void:
	for i in range(3):await process_frame
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"GL screenshot "+name)
func _load(city:RefCounted)->void:
	await demo.gallery._open_chosen({"ok":true,"world":city.snapshot(),"view":{"focus":[-10.,1.,0.],"zoom":25.,"yaw":.3,"pitch":.8,"evening":false,"light_phase":0},"title":"选址验证","id":"site-fixture"})
	demo.life.set_process(false)
	_check(demo.state.houses.size()==city.houses.size() and not demo.gallery.busy,"real gallery switch publishes fresh city geometry and resident identities")
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated";root.add_child(demo);demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+180000
	while demo.music._loading and Time.get_ticks_msec()<deadline:await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music._loading,"production audio and real GL window are active")
	var city:RefCounted=Chords.highland();assert(city.set_house_role("h2","venue").ok)
	await _load(city);_select("h1",Vector2(-22,0))
	_check(demo.state.special_site("h1").lookout and demo.place_description.text.contains("制高点瞭望"),"actual selected bell tower shows its earned district walking bonus")
	await _capture("01_highland_lookout");_select("h2",Vector2(-22,0))
	_check(demo.place_description.text.contains("召集28米") and demo.state.concert_radius("h2")==28.,"actual raised courtyard displays twenty-eight-metre coverage")
	await _capture("02_raised_courtyard")
	city=Chords.renaissance();await _load(city);_select("h2",Vector2(-14,0))
	_check(demo.state.special_site("h2").arcade_street and demo.place_description.text.contains("送装提速40%"),"published connected colonnade has actual delivery bonus and UI explanation")
	await _capture("03_arcade_atelier")
	city=Chords.clockwork();await _load(city);_select("h2",Vector2(-11,0))
	_check(demo.life.tram.report().clockwork_edges>0 and demo.place_description.text.contains("电车提速15%"),"actual clockmaker rail hub publishes local accelerated tram segments")
	facts.clockwork=demo.life.tram.report();await _capture("04_clockwork_hub")
	city=Modern.architecture();assert(city.set_house_role("h2","symphony_hall").ok)
	assert(city.add_house(Vector2(-20,-2)).ok)
	var points:Array[Vector2]=[Vector2(-24,0),Vector2(-1,0)];assert(city.add_road(points,"promenade").ok)
	await _load(city);_select("h2",Vector2(-10,0))
	_check(demo.state.concert_radius("h2")==32. and demo.place_description.text.contains("住宅落幕余韵翻倍"),"actual incoming glass bridge qualifies the selected thirty-two-metre hall")
	await _capture("05_glass_bridge_hall")
	var palette:int=posmod(int(demo.state.houses[demo.state._house_index("h2")].get("palette",0))+1,4)
	await _edit(demo.state.set_house_palette("h2",palette))
	_check(demo.edit_budget_report().mode=="colors" and demo.state.special_site("h2").hall_ecology,"appearance-only publication retains actual site and planning caches")
	demo._invite_concert()
	var invited:bool=demo.life.concert_status().phase=="gathering"
	_check(invited and bool(demo.life._concert.get("grand_festival",false)) and demo.life._concert.get("era_cast",{}).size()==4,"production hall button invites actual connected four-era representatives")
	deadline=Time.get_ticks_msec()+90000
	while invited and demo.life.concert_status().phase!="playing" and Time.get_ticks_msec()<deadline:
		demo.life._process(.05);await process_frame
	var playing:bool=demo.life.concert_status().phase=="playing"
	_check(playing,"real audience walks in before the shared music gate starts the hall")
	if playing:
		var before:=int(demo.state.life_progress.concerts);var frames:Array[float]=[];demo.state.resonance_afterglow.clear();demo.life.set_process(true);deadline=Time.get_ticks_msec()+30000
		while int(demo.state.life_progress.concerts)==before and Time.get_ticks_msec()<deadline:
			var start:=Time.get_ticks_usec();await process_frame;frames.append((Time.get_ticks_usec()-start)/1000.)
		demo.life.set_process(false)
		_check(int(demo.state.life_progress.concerts)==before+1,"full twenty-four-second hall performance completes exactly once")
		var home_glow:float=demo.state.afterglow_remaining("h1");var hall_glow:float=demo.state.afterglow_remaining("h2")
		# Completion remainder elapses once on each timer, after doubling.
		_check(hall_glow>59.8 and is_equal_approx(home_glow-hall_glow,60.),"actual concert completion grants residential double afterglow and normal facility afterglow")
		var restored:=State.new();_check(demo.state.set_journey_checkpoint(demo.life.checkpoint()).ok and restored.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot(),"",true,true))).ok,"completed hall reward and real journeys save normally")
		frames.sort();facts.hall={"home_glow":home_glow,"hall_glow":hall_glow,"frames":frames.size(),"p95_ms":frames[int(frames.size()*.95)]}
		await _capture("06_hall_completion")
	root.size=Vector2i(1024,768);_select("h2",Vector2(-10,0))
	for i in range(6):await process_frame
	_check(demo.place_panel.get_global_rect().end.y<=768.,"site descriptions stay within the small window")
	await _capture("07_hall_small_window")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continuing city is unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("SITE_SPECIALIZATION_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
