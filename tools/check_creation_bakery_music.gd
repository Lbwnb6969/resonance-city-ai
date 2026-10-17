extends SceneTree
## Natural wall-clock production/visit through Demo callbacks, fixed audio pool.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Music = preload("res://scripts/audio/city_creation_music.gd")
const OUT = "res://验证记录/麦香生活合拍_2026-10-17"
var demo
var checks: Array = []
var failures: Array[String] = []
var events: Array = []
var audible_events: Array = []
var export_events: Array = []
var frames: Array[float] = []
func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _fixture() -> Dictionary:
	var city := State.new();city.initialize()
	var original: Array[Dictionary] = city.houses.duplicate(true)
	city.houses.clear()
	for index in range(3):
		var house: Dictionary = original[[0,1,3][index]].duplicate(true)
		house.origin=[-14.0+index*4.0,-2.0];house.cells=[house.cells[0].duplicate(true)]
		house.cells[0].x=0;house.cells[0].z=0;house.cells[0].level=0
		city.houses.append(house)
	city.roads.assign([{"id":"r1","points":[[-16.0,0.0],[-4.0,0.0]],"width":1.25,"bridge":false,"source":"seed"}])
	city.plants.clear();city.revision+=1
	return city.snapshot()
func _identity() -> Array:
	var result: Array = []
	for id: String in Music.STEMS:
		var p: AudioStreamPlayer = demo.music._players[id]
		result.append([p.get_instance_id(),p.stream.get_instance_id(),hash(p.stream.data)])
	for p: AudioStreamPlayer in demo.music._effects: result.append(p.get_instance_id())
	return result
func _boundary() -> void:
	var before: int = int(demo.music._playback_clock()/3.0)
	var deadline := Time.get_ticks_msec()+4000
	while int(demo.music._playback_clock()/3.0)<=before and Time.get_ticks_msec()<deadline: await process_frame
	await process_frame
func _quiet() -> void:
	demo.music.bakery_cues.clear()
	for p: AudioStreamPlayer in demo.music._effects: p.stop()
	demo.music.reply.clear();demo.music.clear_travel()
func _batch() -> void:
	if int(demo.state.bakery_status("h2").stock)>=int(demo.state.bakery_status("h2").capacity): demo.state.serve_bread("h2","h1")
	_check(bool(demo.state.produce_bread("h2",1)) and bool(demo.music.queue_bakery_cue("baked","h2")),"gate fixture queues a new conserved batch")
func _export() -> void:
	var samples := PackedFloat32Array();samples.resize(Music.RATE*12)
	for id: String in Music.STEMS:
		var data: PackedByteArray = demo.music._players[id].stream.data
		var gain: float = db_to_linear(demo.music.target_gain_db(id,false))
		for i in range(samples.size()): samples[i]+=data.decode_s16(i*2)/32767.0*gain
	for bar in range(4):
		var kind := "baked" if bar%2==0 else "purchased"
		var key := "bakery_%s_%d" % [kind,bar]
		var data: PackedByteArray = demo.music._edit_streams[key].data
		for i in range(data.size()/2): samples[bar*Music.RATE*3+i]+=data.decode_s16(i*2)/32767.0*db_to_linear(Music.SHORT_GAIN_DB)
		export_events.append({"kind":kind,"at":bar*3.0,"stream":key})
	var peak := 0.0
	for value: float in samples: peak=maxf(peak,absf(value))
	for i in range(samples.size()-Music.RATE/5,samples.size()): samples[i]*=float(samples.size()-1-i)/(Music.RATE/5)
	var stream: AudioStreamWAV = demo.music._pcm_stream(samples,false)
	_check(stream.save_to_wav(OUT+"/出炉与采购_生产PCM试听.wav")==OK and peak<1.0,"production PCM preview exported below clipping")
func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var deadline := Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var loaded: Dictionary = demo.state.restore(_fixture());demo._after_edit(loaded,"history")
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	# Complete-city switching creates fresh actors, matching Gallery's path.
	demo.life.free();demo._setup_life();demo.life.set_process(false)
	_check(loaded.ok and demo.life.bakery.workers.size()==1,"real connected baker and buyer fixture published")
	demo.music.restore_city_transport({"phase":"idle"})
	demo.focus=Vector3(-12,.7,0);demo.zoom=14;demo.yaw=.62;demo.pitch=.78;demo._update_camera();demo.ui_layer.visible=false
	var identity := _identity();var clock: float = demo.music._playback_clock()
	var produced: Callable = demo.life.production_callback;var purchased: Callable = demo.life.purchase_callback
	demo.life.production_callback=func(shop:String,quantity:int)->void:
		events.append({"kind":"baked","source_id":shop,"quantity":quantity,"clock":demo.music._playback_clock(),"produced":demo.state.bakery_status(shop).produced})
		produced.call(shop,quantity)
	demo.life.purchase_callback=func(shop:String,home:String)->void:
		events.append({"kind":"purchased","source_id":shop,"home_id":home,"clock":demo.music._playback_clock(),"served":demo.state.bakery_status(shop).served})
		purchased.call(shop,home)
	_check(demo.state.bakery_status("h2").produced==0 and demo.state.bakery_status("h2").served==0,"fixture begins with empty shelf and zero real business events")
	demo.life.set_process(true)
	deadline=Time.get_ticks_msec()+30000
	var seen := {};var previous := Time.get_ticks_usec()
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var now := Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
		var report: Dictionary = demo.music.bakery_music_report()
		if report.audible and not seen.has(report.kind):
			seen[report.kind]=true;audible_events.append(report.duplicate(true))
			_check(absf(fposmod(demo.music._playback_clock(),3.0)-float(report.elapsed))<.15,"actual "+str(report.kind)+" cue starts at shared PCM downbeat")
			_check(str(report.stream_key)=="bakery_%s_%d" % [report.kind,posmod(int(report.phrase),8)],"actual cue selects current eight-chord stream")
			_check(demo.music.spatial._effect_sources[demo.music.bakery_cues._player.get_instance_id()]==Vector2(-10,-2),"cue uses actual bakery position in existing short panner")
		if seen.size()==2: break
	demo.life.set_process(false)
	_check(seen.has("baked") and seen.has("purchased"),"natural wall-clock baker attendance and successful buyer each produce an audible cue")
	_check(int(demo.state.bakery_status("h2").served)>0 and int(demo.state.cafe_credits.get("h1",{}).get("earned",0))>0,"purchase cue follows actual stock consumption and household food credit")
	_quiet();await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/实际出炉采购河湾.png")
	# Empty/replayed counter never queues; no automatic tick or failed visit event.
	_check(not demo.music.queue_bakery_cue("purchased","h2","h1") and demo.music.bakery_music_report().pending.is_empty(),"same served counter cannot replay a completed purchase")
	# Public State operations below supply deterministic gates, separately from
	# the natural attendance sequence above. They do not claim another visit.
	await _boundary();_batch()
	var slots: Array = []
	for player: AudioStreamPlayer in demo.music._effects:
		var stream: AudioStreamWAV = demo.music._edit_streams.room
		player.stream=stream;player.play();slots.append([player,stream])
	# Hold all four slots occupied across the next real boundary.
	var before_cues: int = demo.music.bakery_cues.cues
	var phrase: int = int(demo.music._playback_clock()/3.0)
	while int(demo.music._playback_clock()/3.0)==phrase:
		for row: Array in slots:
			if not row[0].playing: row[0].play()
		await process_frame
	await process_frame
	var unchanged := true
	for row: Array in slots: unchanged=unchanged and row[0].stream==row[1]
	_check(unchanged and demo.music.bakery_cues.cues==before_cues and demo.music.bakery_music_report().pending.is_empty(),"full pool leaves silence and never preempts existing short sounds")
	_quiet()
	_batch();demo.music.set_muted(true);demo.music.set_muted(false)
	_check(demo.music.bakery_music_report().pending.is_empty() and not demo.music.bakery_music_report().audible,"mute clears pending event with no unmute replay")
	_batch();demo.music.set_concert_active(true)
	_check(demo.music.bakery_music_report().pending.is_empty(),"concert suppresses business cue backlog");demo.music.set_concert_active(false)
	_batch();demo.music.set_listener_focus(Vector2(30,30))
	_check(demo.music.bakery_music_report().pending.is_empty(),"leaving audible range discards pending cue");demo._update_camera()
	_batch();demo.state.set_house_role("h2","residential")
	_check(demo.music.bakery_music_report().pending.is_empty(),"repurposing bakery immediately invalidates cue before rendered source publication")
	demo.state.set_house_role("h2","bakery");demo.music.update_city(demo.state)
	_check(demo.music.audio_report.bakery_pcm_bytes==451584 and demo.music.audio_report.bakery_notes.size()==32,"fixed sixteen 0.64-second current-chord streams pre-render once")
	_check(demo.music.audio_report.mix_peaks.absolute_stereo_with_four_short_voices<1.0,"worst-case city with four short voices remains under stereo clipping bound")
	_check(_identity()==identity and demo.music.get_child_count()==13 and demo.music.spatial.report().bus_count==6 and demo.music._playback_clock()>clock+6.0,"natural feedback and gates retain all nine long PCM, four players and six buses")
	_export()
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city file untouched")
	frames.sort()
	var result := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"natural_callbacks":events,"audible_events":audible_events,"frames":frames.size(),"p95_ms":frames[int(frames.size()*.95)],"max_ms":frames[-1],"audio_bound":demo.music.audio_report.mix_peaks.absolute_stereo_with_four_short_voices,"preview_events":export_events,"scope":"Actual GL, Life normal wall-clock processing until both real event types heard. Gate fixtures afterward use public inventory changes. Preview is production PCM mixed offline, not device capture."}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("BAKERY_MUSIC ",JSON.stringify(result))
	demo.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for p: AudioStreamPlayer in demo.music._players.values(): p.stop()
	for p: AudioStreamPlayer in demo.music._effects: p.stop()
	for p: AudioStreamPlayer in demo.ambience.players.values(): p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)
