extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_canon_fixture.gd")
const OUT="res://验证记录/环形轮唱_2026-10-18"
var demo
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var until:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.music.audio_report.is_empty()) and Time.get_ticks_msec()<until:await process_frame
	await physics_frame;await process_frame
func _camera(at: Vector2,zoom_value: float=18.)->void:
	demo.focus=Vector3(at.x,.8,at.y);demo.zoom=zoom_value;demo.yaw=.25;demo.pitch=.8;demo._update_camera();demo.town.clear_preview()
func _capture(name: String)->void:
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"live image saved: "+name)
func _cue()->Dictionary:
	var until:=Time.get_ticks_msec()+2200
	while Time.get_ticks_msec()<until:
		await process_frame
		var r: Dictionary=demo.music.canon.report()
		if r.glowing and r.audible and float(r.elapsed)>.16 and float(r.elapsed)<.32:return r
	_check(false,"next actual PCM cue arrives");return {}
func _ring_window_ok(r: Dictionary)->bool:
	for id: String in r.members:
		var row: Dictionary=demo.town.resonance.rigs[id]
		if (float(row.get("pluck_strength",0.))>0.)!=(id==r.house_id):return false
		if id!=r.house_id and float(row.weight)>0.:return false
	return true
func _identities()->Array:
	var result: Array=[]
	for player: AudioStreamPlayer in demo.music._players.values():result.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects:result.append(player.get_instance_id())
	return result
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var fixture:=Fixture.build()
	demo._after_edit(demo.state.restore(JSON.parse_string(JSON.stringify(fixture.city.snapshot(),"",true,true))),"history");await _wait()
	demo.ui_layer.visible=false;_camera(Fixture.COURT)
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty() and demo.music.canon.groups.size()==2,"real GL renderer and production bank load the two authored five-house rings")
	var identities:=_identities();var snapshot: Dictionary=demo.state.snapshot()
	var cues: Array=[];var seen: Dictionary={};var first_clock: float=demo.music._playback_clock();var previous:=-1
	var order_ok:=true;var voice_ok:=true;var window_ok:=true;var wrap_seen:=false;var frames: Array[float]=[]
	var last:=Time.get_ticks_usec();var until:=Time.get_ticks_msec()+30000
	# Observe the uninterrupted production transport, including a physical PCM
	# wrap. Do not seek, tick manually, or substitute a test clock.
	while Time.get_ticks_msec()<until:
		await process_frame
		var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
		var r: Dictionary=demo.music.canon.report()
		if r.glowing and r.audible and float(r.elapsed)>.16 and float(r.elapsed)<.32 and int(r.serial)!=previous:
			previous=int(r.serial);cues.append(r)
			order_ok=order_ok and r.house_id==r.members[posmod(int(r.beat),5)] and r.members==[fixture.court_ids[1],fixture.court_ids[4],fixture.court_ids[2],fixture.court_ids[3],fixture.court_ids[0]]
			var player: AudioStreamPlayer=demo.music.canon._player
			voice_ok=voice_ok and player.playing and player.stream==demo.music._edit_streams[r.stream_key] and is_equal_approx(player.stream.get_length(),.42) and int(player.get_meta("creation_voice_serial"))==demo.music.canon._voice_serial
			window_ok=window_ok and _ring_window_ok(r)
			if not seen.has(r.house_id):
				seen[r.house_id]=true;await _capture("围院轮唱_"+str(r.slot));last=Time.get_ticks_usec()
			if floori(float(r.clock_sec)/24.)>floori(first_clock/24.) and not wrap_seen:
				wrap_seen=true;await _capture("跨24秒循环");last=Time.get_ticks_usec()
	_check(cues.size()>=35 and seen.size()==5 and wrap_seen and order_ok,"actual five-house canon keeps world-clockwise order across bars and a real 24-second PCM wrap")
	_check(voice_ok,"every observed turn owns a playing .42-second production PCM voice in the existing pool")
	_check(window_ok,"each audible turn lights only its actual ring house, with no daily-chorus light on the other four")
	_check(demo.state.snapshot()==snapshot,"live automatic canon never writes city state or a saved playback cursor")
	facts.court_cues=cues
	frames.sort();facts.performance={"frames":frames.size(),"p95_ms":frames[int(frames.size()*.95)],"max_ms":frames[-1]}
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"measurement":facts.performance.p95_ms,"policy":"reference_only"}))
	var r:=await _cue()
	if not r.is_empty():
		var until_tail:=Time.get_ticks_msec()+700
		while float(r.elapsed)<.49 and Time.get_ticks_msec()<until_tail:await process_frame;r=demo.music.canon.report()
		_check(not r.audible and r.glowing and _ring_window_ok(r),"window ripple continues after the real .42-second PCM ends")
		while float(r.elapsed)<.63 and Time.get_ticks_msec()<until_tail:await process_frame;r=demo.music.canon.report()
		await process_frame
		_check(not r.glowing and not r.audible,"the same transport ends the window ripple at .6 seconds")
	demo._toggle_light();demo._toggle_light();r=await _cue();await _capture("星夜围院轮唱");demo._toggle_light()
	_camera(Fixture.ROUND);var plaza_cues: Array=[];previous=-1
	until=Time.get_ticks_msec()+4800
	while Time.get_ticks_msec()<until:
		await process_frame;r=demo.music.canon.report()
		if r.glowing and r.audible and float(r.elapsed)>.16 and float(r.elapsed)<.32 and int(r.serial)!=previous:
			previous=int(r.serial);plaza_cues.append(r)
			if plaza_cues.size()==1:await _capture("环岛轮唱")
	_check(plaza_cues.size()>=5 and plaza_cues[0].members==fixture.round_ids,"actual authored plaza selects its own five-house angular ring")
	var plaza_order:=true
	for cue: Dictionary in plaza_cues:plaza_order=plaza_order and cue.house_id==fixture.round_ids[posmod(int(cue.beat),5)]
	_check(plaza_order,"camera change retains the global beat index for plaza turns")
	facts.plaza_cues=plaza_cues
	r=await _cue();var old_player: AudioStreamPlayer=demo.music.canon._player
	_camera(Vector2(36,-35));await process_frame;await process_frame
	_check(not demo.music.canon.report().glowing and not old_player.playing,"moving out of view cancels the actual owned PCM and window attribution")
	_camera(Fixture.COURT,45.);await create_timer(.9).timeout
	_check(not demo.music.canon.report().glowing and demo.music.canon.report().members.is_empty(),"city overview has no near-field canon")
	_camera(Fixture.COURT);r=await _cue()
	var before_mute: float=demo.music._playback_clock();var serial: int=demo.music.canon.cues
	demo.music.set_muted(true);await create_timer(.9).timeout
	_check(not demo.music.canon.report().glowing and demo.music.canon.cues==serial and demo.music._playback_clock()>before_mute+.7,"mute suppresses real cues while shared transport continues")
	demo.music.set_muted(false);r=await _cue()
	_check(not r.is_empty() and r.house_id==r.members[posmod(int(r.beat),5)],"unmute resumes the current global turn without replaying a queue")
	var manual_ok: bool=demo.music.play_house(str(fixture.court_ids[0]));await process_frame;await process_frame
	var pluck_deadline:=Time.get_ticks_msec()+350
	while demo.music.attention.report().arp_pending>0 and Time.get_ticks_msec()<pluck_deadline:await process_frame
	_check(manual_ok and not demo.music.canon.report().glowing and demo.music.house_pluck_report().glowing,"manual house pluck preempts automatic canon and owns its window")
	await create_timer(.65).timeout;r=await _cue()
	if not r.is_empty():
		var replacement: AudioStreamPlayer=demo.music.canon._player
		var same_pcm: AudioStreamWAV=replacement.stream
		demo.music.play_effect_at(replacement,same_pcm,r.position)
		_check(not demo.music.canon.report().glowing and replacement.playing,"pool reuse with the identical PCM changes ownership without canon stopping the replacement")
	r=await _cue()
	demo.set_process(false);demo.music.set_concert_active(true)
	_check(not demo.music.canon.report().glowing,"concert activation clears canon at the music component boundary")
	demo.music.set_concert_active(false);demo.set_process(true)
	r=await _cue();var removed: Dictionary=demo.state.remove_house(str(fixture.court_ids[1]))
	demo.music.update_city(demo.state)
	_check(removed.ok and not demo.music.canon.report().glowing and demo.music.canon.groups.size()==1,"opening the courtyard invalidates live membership before geometry publication")
	demo._after_edit(removed,"history");await _wait()
	demo._after_edit(demo.state.undo(),"history");await _wait();_camera(Fixture.COURT);r=await _cue()
	facts.undo_cue=r;facts.snapshot_differences={}
	var after_undo: Dictionary=demo.state.snapshot()
	# Successful undo is a new authored revision; content is restored while
	# its monotonic revision intentionally advances.
	after_undo.revision=snapshot.revision
	for key: Variant in snapshot:
		if snapshot[key]!=after_undo.get(key):facts.snapshot_differences[key]={"before":snapshot[key],"after":after_undo.get(key)}
	_check(not r.is_empty() and r.members.size()==5 and after_undo==snapshot,"normal edit undo restores saved content and ring while advancing the authored revision")
	_check(_identities()==identities and demo.music._effects.size()==4,"canon preserves all twelve long PCM streams and the fixed four short players")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated verification preserves personal save bytes")
	var report: Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("CIRCULAR_CANON_LIVE ",JSON.stringify({"ok":report.ok,"count":checks.size(),"failures":failures,"performance":facts.performance}))
	demo.set_process(false);demo.music.set_process(false);demo.life.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values():player.stop()
	for player: AudioStreamPlayer in demo.music._effects:player.stop()
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
