extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_tram_tea_fixture.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase8"
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _capture(label:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func _run()->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var city:=Fixture.city()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	demo._after_edit(demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))),"history");await _wait()
	demo.remove_child(demo.life);demo.life.queue_free();demo._setup_life();demo.life.set_process(false)
	demo.ui_layer.visible=false;demo.focus=Vector3(-8,1,-.5);demo.zoom=14;demo.yaw=.2;demo.pitch=.65;demo._update_camera();demo.town.clear_preview()
	var passenger:Dictionary={}
	for i in range(20000):
		demo.life._process(.05)
		for ticket:Dictionary in demo.life.tram.tickets.values():
			if ticket.get("state","")=="onboard" and ticket.resident.has("cafe_visit") and ticket.resident.cafe_visit.phase=="walking":passenger=ticket.resident;break
		if not passenger.is_empty():break
		if i%100==0:await process_frame
	_check(not passenger.is_empty(),"production bread purchaser actually boards for the garden cafe after natural walking and purchase")
	if passenger.is_empty():demo.queue_free();await process_frame;quit(1);return
	var home:String=passenger.home_id;var spent:int=demo.state.cafe_credits[home].spent
	var at:Vector3=passenger.node.position;var parties:int=demo.state.life_progress.tea_parties
	await _capture("13_actual_tea_guest_aboard")
	demo.life.set_process(true)
	var frames:Array[float]=[];var last:=Time.get_ticks_usec();var seated:=false;var moved:=false;var early:=false;var finished:=false
	var deadline:=Time.get_ticks_msec()+60000
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
		var ticket:Dictionary=demo.life.tram.tickets.get(home,{})
		if ticket.get("state","")=="onboard":
			if passenger.node.position.distance_to(at)>.2:moved=true
			if int(demo.state.cafe_credits[home].spent)!=spent or int(demo.state.life_progress.tea_parties)!=parties:early=true
		if passenger.has("cafe_visit") and passenger.cafe_visit.phase=="seated" and not seated:
			seated=true;await _capture("14_actual_tram_guest_seated_for_tea");last=Time.get_ticks_usec()
		if int(demo.state.cafe_credits[home].spent)>spent:finished=true;break
	demo.life.set_process(false)
	_check(moved and not early,"unaccelerated passenger follows actual moving carriage and earns no tea credit during ride")
	_check(seated and finished and demo.state.cafe_credits[home].spent==spent+1 and demo.state.life_progress.tea_parties==parties+1,"unaccelerated alighting final walk and full six-second seated gathering complete exactly once")
	_check(demo.life.tram.completed>0 and demo.life.cafe.status("h3").visits>=2,"production tram completion and real tea ledger agree with resident service")
	frames.sort();var p95:float=frames[int(frames.size()*.95)]
	_check(p95<12.,"real tea transport and new clockwork rendering retain sub-twelve-millisecond p95 frame time")
	demo.music.queue_tram_chime("tram_1","old-town",Vector2.ZERO);demo.music.clear_tram_cues()
	_check(demo.music._tram_pending.is_empty() and demo.music._tram_active.is_empty() and not demo.music.tram_music_report().audible,"work changes can clear old tram cues even when new work reuses car IDs")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated real tea transport preserves personal save bytes")
	var report:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"home":home,"tram":demo.life.tram.report(),"progress":demo.state.life_progress,"frame_p95_ms":p95,"frame_max_ms":frames[-1]}
	FileAccess.open(OUT+"/tram_tea_live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("TRAM_TEA_LIVE ",JSON.stringify({"ok":report.ok,"count":checks.size(),"failures":failures,"frame_p95_ms":p95}))
	demo.queue_free();await process_frame;await create_timer(.1).timeout;quit(0 if failures.is_empty() else 1)
