extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tests/test_city_creation_tram.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase8"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _camera(at:Vector3,zoom_value:float=10.)->void:
	demo.focus=at;demo.zoom=zoom_value;demo.yaw=.45;demo.pitch=.63;demo._update_camera();demo.town.clear_preview()
func _capture(name_value:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var city:RefCounted=Fixture.fixture();city.set_house_era("h1","clockwork")
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	demo._after_edit(demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))),"history");await _wait()
	# Reused h1 IDs belong to a different work, exactly as Gallery's fresh-Life
	# boundary: do not carry the previous work's people into this fixture.
	demo.remove_child(demo.life);demo.life.queue_free();demo._setup_life();demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	var infrastructure:Node3D=demo.town.road_roots["r1"].get_node("TramWiresAndStops")
	_check(infrastructure.get_meta("wire_segments")>30 and infrastructure.get_meta("stations").size()>=4,"production renderer publishes overhead copper wires and real rail stop signs")
	_check(demo.life.tram.cars.size()==1 and demo.life.tram.cars[0].node.get_node("WarmPassengerWindows")!=null,"actual third-era street has one oak and green carriage with warm passenger windows")
	_camera(Vector3(-10,.7,0),17)
	await _capture("03_real_tram_street_and_stops")
	var bank:Dictionary=demo.music.audio_report
	_check(bank.stem_count==demo.music.STEMS.size() and bank.theme_notes.has("clockwork_waltz") and bank.theme_notes.clockwork_waltz.size()>=56 and demo.music.get_child_count()==demo.music.STEMS.size()+4,"actual PCM bank contains clockwork piano horn clarinet accordion and celesta within current fixed long and four short voices")
	var station:String=demo.life._network._key(Vector2(-16,0))
	for i in range(1500):
		var car:Dictionary=demo.life.tram.cars[0]
		if car.key==station and float(car.wait)>.1:break
		demo.life.tram.tick(.05)
	var invitation:Dictionary=demo.life.invite_concert("h4");var old_concerts:int=demo.state.life_progress.concerts
	demo.life.set_process(true)
	var on_board:=false;var alighted:=false;var audible:=false;var former:=Vector3.ZERO;var moved:=false;var chime:Dictionary={}
	deadline=Time.get_ticks_msec()+25000
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var ticket:Dictionary=demo.life.tram.tickets.get("h1",{})
		if ticket.get("state","")=="onboard":
			var at:Vector3=ticket.resident.node.position
			if on_board and at.distance_to(former)>.005:moved=true
			former=at
			if not on_board:
				on_board=true;_camera(demo.life.tram.cars[0].node.position+Vector3(0,.5,0),9)
				await _capture("04_actual_passenger_aboard")
		var report:Dictionary=demo.music.tram_music_report()
		if report.audible:audible=true;chime=report
		if ticket.get("state","")=="completed":alighted=true
		if moved and alighted and audible:break
	_check(invitation.ok and on_board and moved and alighted and demo.life.tram.boarded>0 and demo.life.tram.completed>0,"unaccelerated production audience physically boards rides and alights from the moving streetcar")
	_check(audible and chime.pool_size==4 and chime.timbres==["celesta","bell"] and int(chime.phrase)>=0,"real station arrival plays a chord-aligned celesta and bronze bell doublet through existing short pool")
	_check(int(demo.state.life_progress.concerts)==old_concerts,"transport does not complete or credit the twenty-four-second performance")
	facts.passenger=demo.life.tram.report();facts.chime=chime
	var clockwork:Dictionary=demo.music.clockwork_music_report()
	_check(clockwork.weight>0 and demo.music._players.clockwork_waltz.volume_linear>0,"current-view clockwork house activates its actual romantic instrumental stem")
	while demo.light_phase!=2:demo._toggle_light()
	_check(float(demo.life.tram.cars[0].glass.emission_energy_multiplier)>.6,"native night switch lights carriage windows")
	_camera(demo.life.tram.cars[0].node.position+Vector3(0,.7,0),10)
	await _capture("05_warm_night_carriage")
	var frames:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(180):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000.);previous=now
	frames.sort();facts.performance={"frames":180,"p95_ms":frames[170],"max_ms":frames[-1]}
	demo.life.set_process(false);demo.life.cancel_concert()
	var original:Dictionary=demo.state.roads[0].duplicate(true)
	var points:Array[Vector2]=[]
	for point:Array in original.points:points.append(Vector2(point[0],point[1]))
	demo._after_edit(demo.state.add_road(points,"promenade"),"road");await _wait()
	_check(demo.life.tram.cars.is_empty() and not demo.music.tram_music_report().audible and demo.town.road_roots["r1"].get_node_or_null("TramWiresAndStops")==null,"actual in-place rail replacement withdraws carriage stop infrastructure and live sound source")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(demo.life.tram.cars.size()==1 and demo.town.road_roots["r1"].get_node_or_null("TramWiresAndStops")!=null,"real construction undo restores derived tram service without minting authored vehicle IDs")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated tram validation preserves personal save bytes")
	var result:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/tram_live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("TRAM_LIVE ",JSON.stringify({"ok":result.ok,"count":checks.size(),"failures":failures,"passenger":facts.passenger,"performance":facts.performance}))
	demo.queue_free();await process_frame;await create_timer(.1).timeout;quit(0 if failures.is_empty() else 1)
