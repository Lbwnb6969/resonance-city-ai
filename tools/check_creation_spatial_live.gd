extends SceneTree
## Production transport observations and explicitly separate isolated DSP recordings.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Music = preload("res://scripts/audio/city_creation_music.gd")
const OUT := "res://验证记录/街坊声像_2026-10-16"
const EXAMPLE := "res://数据/庆典接力样例.json"
var demo
var spare
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {"recordings":[],"natural_sources":[]}
var bus_before: Array = []
var personal := PackedByteArray()
var example_bytes := PackedByteArray()
var foreign_name := ""
var foreign_effect: AudioEffectAmplify
var recorder: AudioEffectRecord
var recorder_bus := ""

func _initialize() -> void:
	if "--profile-only" in OS.get_cmdline_user_args(): _profile_only.call_deferred()
	else: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _sha(bytes: PackedByteArray) -> String:
	var digest := HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(bytes)
	return digest.finish().hex_encode()
func _identity(music: Node) -> Array:
	var result: Array = []
	for id: String in music.STEMS:
		var player: AudioStreamPlayer = music._players[id]
		var pcm: PackedByteArray = player.stream.data
		result.append([id,player.get_instance_id(),player.stream.get_instance_id(),_sha(pcm)])
	for player: AudioStreamPlayer in music._effects: result.append(player.get_instance_id())
	return result
func _buses() -> Array:
	var result: Array = []
	for index in range(AudioServer.bus_count):
		var effects: Array = []
		for slot in range(AudioServer.get_bus_effect_count(index)): effects.append([AudioServer.get_bus_effect(index,slot).get_instance_id(),AudioServer.is_bus_effect_enabled(index,slot)])
		result.append({"name":str(AudioServer.get_bus_name(index)),"send":str(AudioServer.get_bus_send(index)),"volume_db":AudioServer.get_bus_volume_db(index),"mute":AudioServer.is_bus_mute(index),"solo":AudioServer.is_bus_solo(index),"bypass":AudioServer.is_bus_bypassing_effects(index),"effects":effects})
	return result
func _panner(player: AudioStreamPlayer) -> AudioEffectPanner:
	var bus := AudioServer.get_bus_index(player.bus)
	if bus<0: return null
	for index in range(AudioServer.get_bus_effect_count(bus)):
		var effect: AudioEffect = AudioServer.get_bus_effect(bus,index)
		if effect is AudioEffectPanner: return effect
	return null
func _expected(at: Vector2,focus: Vector2,right: Vector2) -> float:
	return clampf((at-focus).dot(right.normalized())/14.0,-0.65,0.65)
func _wait_edit() -> void:
	var deadline := Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame;await process_frame
func _camera(yaw_value: float) -> void:
	demo.focus=Vector3(-8,0.7,-1);demo.yaw=yaw_value;demo.zoom=23;demo.pitch=0.73;demo._update_camera()
func _capture(name_value: String) -> void:
	demo.town.clear_preview();await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"actual spatial scene screenshot saved: "+name_value)
func _natural(concert: bool,previous_phrase: int=-999) -> Dictionary:
	var deadline := Time.get_ticks_msec()+5500
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var report: Dictionary = demo.music.spatial_music_report()
		if str(report.phase)!=("concert" if concert else "daily") or str(report.source_id).is_empty(): continue
		var phrase: int = demo.music._concert_phrase() if concert else demo.music._daily_phrase
		if phrase==previous_phrase: continue
		var audible: Dictionary = demo.music.active_source() if concert else demo.music.daily_source()
		if not bool(audible.audible): continue
		var at: Vector2 = report.position
		var right := Vector2(demo.camera.global_basis.x.x,demo.camera.global_basis.x.z).normalized()
		var target := _expected(at,Vector2(demo.focus.x,demo.focus.z),right)
		var player: AudioStreamPlayer = demo.music._players.concert if concert else demo.music._players[demo.music.STYLE_TRACKS[demo.music._daily_style]]
		var panner := _panner(player)
		if panner==null or absf(panner.pan-target)>0.045: continue
		var point: Vector2 = demo.camera.unproject_position(Vector3(at.x,0.7,at.y))
		var focus_point: Vector2 = demo.camera.unproject_position(demo.focus)
		return {"id":str(report.source_id),"phase":str(report.phase),"phrase":phrase,"position":at,"right":right,"expected_pan":target,"actual_pan":panner.pan,"screen_dx":point.x-focus_point.x,"clock":demo.music._playback_clock(),"report":report,"audible_source":audible}
	return {}
func _check_natural(row: Dictionary,label: String) -> void:
	var matches := not row.is_empty()
	if matches:
		matches=Vector2(row.right).distance_to(demo.music._listener_right)<0.001 and float(row.actual_pan)*float(row.screen_dx)>=-0.001
	_check(matches,label+": real source, actual camera-right vector, screen side and player-bus pan agree")
	if not row.is_empty(): facts.natural_sources.append(row)
func _settle(right: Vector2,source: Vector2,seconds: float) -> void:
	spare.set_listener_frame(Vector2.ZERO,right)
	var deadline := Time.get_ticks_msec()+roundi(seconds*1000)
	var previous := Time.get_ticks_usec()
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var now := Time.get_ticks_usec()
		# Only this isolated helper is driven explicitly with actual elapsed time;
		# the main production Music transport is never restarted or advanced.
		spare.spatial.update(float(now-previous)/1000000.0,source,Vector2.INF);previous=now
func _remove_recorder() -> void:
	if recorder==null: return
	recorder.set_recording_active(false)
	var index := AudioServer.get_bus_index(recorder_bus)
	if index>=0:
		for slot in range(AudioServer.get_bus_effect_count(index)-1,-1,-1):
			if AudioServer.get_bus_effect(index,slot)==recorder: AudioServer.remove_bus_effect(index,slot)
	recorder=null;recorder_bus=""
func _record(label: String,bypass: bool=false) -> Dictionary:
	var player: AudioStreamPlayer = spare._players.wood
	var panner := _panner(player)
	var bus := AudioServer.get_bus_index(player.bus)
	var panner_index := -1
	for index in range(AudioServer.get_bus_effect_count(bus)):
		if AudioServer.get_bus_effect(bus,index)==panner: panner_index=index
	AudioServer.set_bus_effect_enabled(bus,panner_index,not bypass)
	player.stop();await create_timer(0.10).timeout
	recorder_bus=str(player.bus);recorder=AudioEffectRecord.new();recorder.format=AudioStreamWAV.FORMAT_16_BITS
	var effect_count := AudioServer.get_bus_effect_count(bus)
	AudioServer.add_bus_effect(bus,recorder)
	recorder.set_recording_active(true)
	player.play(0.40)
	var deadline := Time.get_ticks_msec()+1100
	var previous := Time.get_ticks_usec()
	var wall: Array[float] = [];var draws: Array[float] = []
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var now := Time.get_ticks_usec()
		if not facts.has("performance") and wall.size()<120:
			wall.append(float(now-previous)/1000.0);draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
		previous=now
	if not facts.has("performance") and wall.size()==120:
		wall.sort();draws.sort()
		facts.performance={"frames":120,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draws_median":draws[60],"max_fps":Engine.max_fps,"vsync":DisplayServer.window_get_vsync_mode(),"scope":"Full Demo and its natural Life/Music plus second isolated Music/Panner and native Record, sampled inside the existing first 1.1s recording wait. 180 FPS limited wall reference; not DSP CPU profiling or uncapped throughput."}
	recorder.set_recording_active(false)
	var recording: AudioStreamWAV = recorder.get_recording()
	player.stop()
	var result := {"label":label,"available":recording!=null,"pan":panner.pan,"panner_bypassed":bypass,"bus":str(player.bus),"stream":player.stream.resource_path,"offset_seconds":0.40,"method":"Native AudioEffectRecord after actual private theme-bus Panner. Isolated second Music uses its existing original wood PCM/player, restarts that player at the same offset; not natural transport or offline PCM concatenation."}
	if recording!=null:
		# Cache once: AudioStreamWAV.data copies its full buffer on every getter.
		var pcm: PackedByteArray = recording.data
		var channels := 2 if recording.stereo else 1
		var stride := channels*2
		var left := 0.0;var right := 0.0;var peak := 0.0
		var count := pcm.size()/stride
		for offset in range(0,pcm.size()-stride+1,stride):
			var a := float(pcm.decode_s16(offset))/32768.0
			var b := float(pcm.decode_s16(offset+2))/32768.0 if recording.stereo else a
			left+=a*a;right+=b*b;peak=maxf(peak,maxf(absf(a),absf(b)))
		left/=maxi(1,count);right/=maxi(1,count)
		result.merge({"left_mse":left,"right_mse":right,"left_rms":sqrt(left),"right_rms":sqrt(right),"balance":(right-left)/maxf(1.0e-12,right+left),"peak":peak,"stereo":recording.stereo,"sample_rate":recording.mix_rate,"frames":count,"seconds":float(count)/recording.mix_rate,"save_error":recording.save_to_wav(OUT+"/"+label+".wav")})
	_remove_recorder()
	AudioServer.set_bus_effect_enabled(bus,panner_index,true)
	_check(recording!=null and bool(result.get("stereo",false)) and float(result.get("peak",0.0))>0.0001 and result.get("save_error") == OK and AudioServer.get_bus_effect_count(bus)==effect_count,label+": actual non-silent stereo WAV saved and temporary recorder removed")
	facts.recordings.append(result)
	return result
func _stop(music: Node) -> void:
	music.set_process(false)
	for player: AudioStreamPlayer in music._players.values(): player.stop()
	for player: AudioStreamPlayer in music._effects: player.stop()

func _profile_only() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var original_buses := _buses()
	var personal_bytes := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时性能作品库_"+str(Time.get_ticks_usec());root.add_child(demo)
	_camera(0.0)
	var deadline := Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var wall: Array[float] = [];var draws: Array[float] = []
	var previous := Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now := Time.get_ticks_usec();wall.append(float(now-previous)/1000.0);previous=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort()
	var bank: Dictionary = demo.music.audio_report.duplicate(true)
	var long_bound: float = bank.get("mix_peaks",{}).get("absolute_transition_bound",INF)
	var short_bound: float = float(bank.get("mix_peaks",{}).get("absolute_with_four_edit_voices",INF))-long_bound
	var records: Dictionary = JSON.parse_string(FileAccess.get_file_as_string(OUT+"/live.json"))
	var observed_gain := 0.0
	if not records.is_empty():
		var baseline: float = records.facts.recordings[3].peak
		for index in range(2): observed_gain=maxf(observed_gain,float(records.facts.recordings[index].peak)/baseline)
	var factor := 1.65
	var conservative_bound := (long_bound+short_bound)*factor
	var scope := "One 120-frame actual complete Demo with natural Life and Music/Panners, 180 FPS/VSync0, no isolated recorder or second bank. Bounded wall reference; not DSP CPU profiling or uncapped throughput. Existing stereo WAVs are read as evidence, never re-recorded."
	var report := {"ok":not bank.is_empty() and observed_gain<=factor and conservative_bound<1.0,"frames":120,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draws_median":draws[60],"audio_report":bank,"headroom":{"observed_max_channel_peak_ratio":observed_gain,"panner_limit_factor":factor,"original_long_transition_bound":long_bound,"original_four_short_bound":short_bound,"long_amplified_plus_original_shorts":long_bound*factor+short_bound,"all_long_and_four_short_amplified_bound":conservative_bound,"note":"Panner gain also applies to spatial short voices; amplify both terms for the conservative bound. Generic edit voices reset center."},"scope":scope,"command":"Godot_v4.7.2-stable_win64_console.exe --path . --audio-driver Dummy --max-fps 180 --script tools/check_creation_spatial_live.gd -- --relay-example --profile-only"}
	demo.set_process(false);demo.life.set_process(false);_stop(demo.music);await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	report["original_buses_restored"]=_buses()==original_buses
	report["personal_unchanged"]=(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal_bytes
	report.ok=bool(report.ok) and bool(report.original_buses_restored) and bool(report.personal_unchanged)
	FileAccess.open(OUT+"/profile.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("SPATIAL_SHORT_PROFILE ",JSON.stringify({"ok":report.ok,"frames":120,"wall_p95_ms":report.wall_p95_ms,"draws_median":report.draws_median,"headroom":report.headroom,"original_buses_restored":report.original_buses_restored}))
	quit(0 if report.ok else 1)

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	bus_before=_buses()
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	example_bytes=FileAccess.get_file_as_bytes(EXAMPLE)
	AudioServer.add_bus();var foreign := AudioServer.bus_count-1
	foreign_name="FixtureKeep_"+str(Time.get_ticks_usec());AudioServer.set_bus_name(foreign,foreign_name)
	foreign_effect=AudioEffectAmplify.new();AudioServer.add_bus_effect(foreign,foreign_effect)
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false)
	if "--relay-example" not in OS.get_cmdline_user_args():
		var restored: Dictionary = demo.state.restore(JSON.parse_string(example_bytes.get_string_from_utf8()))
		demo._after_edit(restored,"history");await _wait_edit()
		demo.life.free();demo._setup_life();demo.life.set_process(false)
	_camera(0.0)
	var deadline := Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL production Music and stereo helper are ready")
	if demo.music.audio_report.is_empty(): await _finish();return
	var initial: Dictionary = demo.state.snapshot()
	var identities := _identity(demo.music)
	var clock: float = demo.music._playback_clock();var wall_start := Time.get_ticks_msec()
	var main_names: Array = demo.music.spatial.report().bus_names
	var themes := {}
	for key: String in demo.music.STYLE_TRACKS.values(): themes[str(demo.music._players[key].bus)]=true
	_check(themes.size()==1 and main_names.size()==6 and _panner(demo.music._players.wood)!=null and demo.music.get_child_count()==13,"five themes share one of six owned Panner buses without adding any Player")
	var daily := await _natural(false)
	_check_natural(daily,"natural daily phrase")
	_camera(PI)
	var reversed := await _natural(false,int(daily.get("phrase",-999)))
	_check_natural(reversed,"rotated-camera subsequent real three-second daily phrase")
	_camera(0.0)
	var pairs: Array = demo.life.district_reply_pairs()
	_check(not pairs.is_empty(),"actual authored district graph provides a real eligible reply pair")
	if not pairs.is_empty():
		demo.music.reply.clear()
		for effect: AudioStreamPlayer in demo.music._effects: effect.stop()
		demo.music.reply.update_links(pairs,true)
		var phrase := floori(demo.music._playback_clock()/3.0)
		var event: Dictionary = demo.music.reply._direction(pairs[0],phrase)
		var played: bool = demo.music.reply._play(event,phrase,false)
		await create_timer(0.12).timeout
		var source: Vector2 = event.from_position
		var reply_player: AudioStreamPlayer = demo.music.reply._player
		var reply_pan := _panner(reply_player) if reply_player!=null else null
		var pan_before := reply_pan.pan if reply_pan!=null else 0.0
		_check(played and reply_player!=null and reply_player.playing and reply_player.get_playback_position()>0.0 and absf(pan_before-_expected(source,Vector2(-8,-1),Vector2.RIGHT))<0.04,"direct Reply._play routes a genuine pair's real original short PCM at actual source position (routing test, not natural completed dialogue)")
		_camera(PI);await create_timer(0.27).timeout
		var pan_after := reply_pan.pan if reply_pan!=null else 0.0
		_check(reply_player!=null and reply_player.playing and absf(pan_after-_expected(source,Vector2(-8,-1),Vector2.LEFT))<absf(pan_before-_expected(source,Vector2(-8,-1),Vector2.LEFT)),"ongoing reply retains its world source while real camera rotation moves its actual short-bus pan toward the new screen side")
		facts.reply_routing={"scope":"Direct controller play of actual graph pair; no natural full reply claim","event":event,"pan_before":pan_before,"pan_after_rotation":pan_after}
		demo.music.reply.clear()
	_camera(0.0)
	for effect: AudioStreamPlayer in demo.music._effects: demo.music.play_effect_at(effect,demo.music._edit_streams.room,Vector2(0,-1))
	demo.music.play_edit("room")
	_check(absf(_panner(demo.music._effects[0]).pan)<0.00001 and demo.music._effects[0].stream==demo.music._edit_streams.room,"actual generic edit preempts a full spatial short pool and resets the selected bus to center")
	_check(demo.state.snapshot()==initial,"listener changes and short spatial routing leave all State fields untouched")
	var invitation: Dictionary = demo.life.invite_concert("h5")
	demo.life.set_process(true)
	_check(invitation.ok,"actual Life invitation begins a real reachable gathering for concert-source observation")
	spare=Music.new();root.add_child(spare);spare.setup(demo.state)
	deadline=Time.get_ticks_msec()+25000
	while spare.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	spare.set_process(false)
	var spare_names: Array = spare.spatial.report().bus_names
	var separate := spare_names.size()==6
	for name_value: StringName in spare_names:
		if main_names.has(name_value): separate=false
	_check(separate and AudioServer.get_bus_index(foreign_name)>=0,"second actual Music owns six disjoint buses and leaves a foreign bus intact")
	for player: AudioStreamPlayer in spare._players.values(): player.volume_linear=0.0
	spare._players.wood.volume_db=-12.0
	await _settle(Vector2.RIGHT,Vector2(9.1,0),0.9)
	var right_record := await _record("01_原PCM_声源右侧")
	_check(facts.has("performance"),"120 actual full-scene frames are sampled inside existing recording wait without extending the run")
	await _settle(Vector2.LEFT,Vector2(9.1,0),0.9)
	var left_record := await _record("02_原PCM_右向反转")
	_check(float(right_record.get("balance",0.0))>0.10 and float(left_record.get("balance",0.0))< -0.10,"native recorded channel energy reverses when listener-right reverses for the same source and original PCM offset")
	await _settle(Vector2.RIGHT,Vector2.ZERO,1.8)
	var center_record := await _record("03_原PCM_居中")
	var bypass_record := await _record("04_原PCM_无Panner基准",true)
	var center_equal := center_record.has("left_mse") and bypass_record.has("left_mse")
	var ratios: Array = []
	if center_equal:
		for channel: String in ["left_mse","right_mse"]:
			var ratio: float = float(center_record[channel])/maxf(1.0e-12,float(bypass_record[channel]))
			ratios.append(ratio);center_equal=center_equal and absf(ratio-1.0)<0.06
	_check(center_equal,"actual center-Panner energy matches actual bypassed-Panner baseline within six percent recording-window tolerance; no equal-power assumption")
	facts.center_energy={"ratios":ratios,"comparison":"Same existing original PCM stream, player gain and .40s playback offset, actual Record DSP. Ratio is measured per-channel MSE; off-center power normalization is not assumed."}
	_stop(spare);await create_timer(0.15).timeout;spare.queue_free();await process_frame;await create_timer(0.15).timeout
	var removed := true
	for name_value: StringName in spare_names:
		if AudioServer.get_bus_index(name_value)>=0: removed=false
	for name_value: StringName in main_names:
		if AudioServer.get_bus_index(name_value)<0: removed=false
	_check(removed and AudioServer.get_bus_index(foreign_name)>=0,"freeing second Music removes only its own six buses and retains first Music and foreign owner")
	deadline=Time.get_ticks_msec()+22000
	while demo.life.concert_status().phase!="playing" and Time.get_ticks_msec()<deadline: await process_frame
	_check(demo.life.concert_status().phase=="playing","actual residents arrive and production PCM boundary starts the real concert; no synthetic concert view")
	if demo.life.concert_status().phase=="playing":
		var lead := await _natural(true)
		_check_natural(lead,"natural actual concert phrase")
		var answer := await _natural(true,int(lead.get("phrase",-999)))
		_check_natural(answer,"subsequent real three-second concert phrase")
		await _capture("05_真实演奏庭来源声像")
	demo.life.set_process(false)
	if demo.life.concert_status().phase!="idle": demo.life.cancel_concert()
	var elapsed_clock: float = demo.music._playback_clock()-clock
	var elapsed_wall := float(Time.get_ticks_msec()-wall_start)/1000.0
	_check(_identity(demo.music)==identities and demo.music.get_child_count()==13 and absf(elapsed_clock-elapsed_wall)<0.35,"main nine PCM identities and thirteen Players stay fixed and untouched natural production clock tracks wall time despite isolated second-player restarts")
	facts.transport={"main_clock_seconds":elapsed_clock,"wall_seconds":elapsed_wall,"scope":"Main production bank was never restarted or manually processed. Only isolated second Music's wood player restarted for explicit DSP comparison."}
	var restored: Dictionary = demo.state.restore(initial)
	demo._after_edit(restored,"history");await _wait_edit()
	_check(restored.ok and demo.state.snapshot()==initial,"isolated test city restores its exact initial State after observed real gathering; no persistent player-world change")
	await _finish()

func _finish() -> void:
	_remove_recorder()
	if is_instance_valid(spare): _stop(spare);spare.queue_free();await process_frame
	if is_instance_valid(demo):
		demo.set_process(false);demo.life.set_process(false);_stop(demo.music)
		await create_timer(0.15).timeout
		demo.music.spatial.close()
		var original_routes := true
		for player: AudioStreamPlayer in demo.music._players.values(): original_routes=original_routes and player.bus=="Master"
		for player: AudioStreamPlayer in demo.music._effects: original_routes=original_routes and player.bus=="Master"
		_check(original_routes,"closing main helper restores every owned player to its original output bus")
		demo.queue_free();await process_frame;await create_timer(0.15).timeout
	var foreign := AudioServer.get_bus_index(foreign_name)
	_check(foreign>=0 and AudioServer.get_bus_effect_count(foreign)==1 and AudioServer.get_bus_effect(foreign,0)==foreign_effect,"both helper lifetimes preserve foreign bus and its original effect identity")
	if foreign>=0: AudioServer.remove_bus(foreign)
	_check(_buses()==bus_before,"all original audio bus names, sends, levels, states and effect identities are restored exactly")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal and FileAccess.get_file_as_bytes(EXAMPLE)==example_bytes,"personal city and authored sample bytes remain unchanged")
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"facts":facts,"scope":"Real GL Demo camera/source routing and native production PCM bus DSP recordings. Main transport is untouched; isolated existing second Music restarts one original player at equal offsets for channel-energy comparison. Reply direct play is source routing only. Actual invitation/arrival/phrase start is observed without full 24s-completion or natural full-reply claim. No physical-listening claim. Godot Window/production APIs, no OS input.","command":"Godot_v4.7.2-stable_win64_console.exe --path . --audio-driver Dummy --max-fps 180 --script tools/check_creation_spatial_live.gd -- --relay-example"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("CREATION_SPATIAL_LIVE ",JSON.stringify(report))
	quit(0 if failures.is_empty() else 1)
