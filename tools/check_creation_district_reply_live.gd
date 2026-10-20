extends SceneTree
## Two real call cycles only. No synthetic clock, links, pending event or concert view.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const ReplyPCM = preload("res://scripts/audio/city_creation_reply_pcm.gd")
const OUT := "res://验证记录/街坊连奏_2026-10-16"
const EXAMPLE := "res://数据/街坊连奏样例.json"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {}
var personal := PackedByteArray()
var sample_bytes := PackedByteArray()
var identities: Array = []
var rigs: Dictionary = {}
var recorder: AudioEffectRecord
var original_effect_count := 0
var record_started := 0

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _click(control: Control) -> void:
	var at := control.get_global_rect().get_center()
	var motion := InputEventMouseMotion.new();motion.position=at;motion.global_position=at
	root.push_input(motion);await process_frame
	for pressed: bool in [true,false]:
		var event := InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed
		root.push_input(event);await process_frame
func _key(code: int,ctrl: bool=false) -> void:
	for pressed: bool in [true,false]:
		var event := InputEventKey.new();event.keycode=code;event.pressed=pressed;event.ctrl_pressed=ctrl
		root.push_input(event);await process_frame
func _wait() -> void:
	var deadline := Time.get_ticks_msec()+15000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending and not demo.gallery.busy,"latest world and following UI publication finish")
	await process_frame
func _capture(name_value: String) -> void:
	demo.town.clear_preview();await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"real viewport screenshot saved: "+name_value)
func _sha(bytes: PackedByteArray) -> String:
	var context := HashingContext.new();context.start(HashingContext.HASH_SHA256);context.update(bytes)
	return context.finish().hex_encode()
func _identity() -> Array:
	var rows: Array = []
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[key]
		rows.append([key,player.get_instance_id(),player.stream.get_instance_id(),_sha(player.stream.data)])
	for player: AudioStreamPlayer in demo.music._effects: rows.append([player.get_instance_id()])
	var keys: Array = demo.music._edit_streams.keys();keys.sort()
	for key: String in keys:
		var stream: AudioStreamWAV = demo.music._edit_streams[key]
		rows.append([key,stream.get_instance_id(),_sha(stream.data)])
	return rows
func _rig_ids() -> Dictionary:
	var rows := {}
	for id: String in demo.town.resonance.rigs:
		var row: Dictionary = demo.town.resonance.rigs[id]
		rows[id]=[row.root.get_instance_id(),row.mesh.get_instance_id(),row.material.get_instance_id(),row.arc.get_instance_id()]
	return rows
func _record_start() -> void:
	original_effect_count=AudioServer.get_bus_effect_count(0)
	recorder=AudioEffectRecord.new();recorder.format=AudioStreamWAV.FORMAT_16_BITS
	AudioServer.add_bus_effect(0,recorder)
	recorder.set_recording_active(true);record_started=Time.get_ticks_msec()
func _record_stop() -> void:
	if recorder==null: return
	recorder.set_recording_active(false)
	var wav: AudioStreamWAV = recorder.get_recording()
	var info := {"method":"AudioEffectRecord on actual Master production mix; no offline concatenation or extra Player","wall_ms":Time.get_ticks_msec()-record_started,"original_bus_effect_count":original_effect_count,"available":wav!=null}
	if wav!=null:
		var recording_data: PackedByteArray=wav.data
		var peak := 0.0
		for offset in range(0,recording_data.size()-1,2): peak=maxf(peak,absf(float(recording_data.decode_s16(offset))/32768.0))
		var duration := float(recording_data.size())/(float(wav.mix_rate)*2.0*(2.0 if wav.stereo else 1.0))
		info.merge({"mix_rate":wav.mix_rate,"stereo":wav.stereo,"duration_seconds":duration,"pcm_bytes":recording_data.size(),"peak":peak,"save_error":wav.save_to_wav(OUT+"/实际街坊对答.wav")})
		_check(duration>0.8 and peak>0.0001 and info.save_error==OK,"actual Master recording saves a non-silent production call-and-answer mix")
	else: _check(false,"native Master recording returns an actual captured WAV")
	for index in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,index)==recorder: AudioServer.remove_bus_effect(0,index)
	_check(AudioServer.get_bus_effect_count(0)==original_effect_count,"temporary native recorder is removed and original Master effect count restored")
	facts.recording=info;recorder=null
func _heard(phase: String,deadline: int) -> Dictionary:
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var report: Dictionary = demo.music.reply.report()
		if bool(report.audible) and str(report.phase)==phase and float(report.elapsed)>0.16 and float(report.elapsed)<0.65: return report.duplicate(true)
	return {}
func _validate_sound(report: Dictionary,answer: bool) -> void:
	var expected := str(report.to_id if answer else report.from_id)
	var style := str(report.to_style if answer else report.from_style)
	var key := "reply_%s_%d" % [style,posmod(int(report.phrase),8)]
	var player: AudioStreamPlayer = demo.music.reply._player
	_check(player!=null and demo.music._effects.has(player) and player.playing and player.get_playback_position()>0.0 and player.stream==demo.music._edit_streams[key] and str(report.stream_key)==key,"real shared short-pool player advances the exact phrase/style PCM: "+str(report.phase))
	_check(str(report.source_id)==expected and int(report.generation)==(1 if answer else 0) and str(demo.resonance_snapshot.reply.source_id)==expected,"actual reply phase and generation attribute sound and visual response to real household: "+str(report.phase))
	var row: Dictionary = demo.town.resonance.rigs[expected]
	_check(float(row.get("reply_response",0.0))>0.0,"actual household rig carries audible reply response: "+str(report.phase))
	_check(_rig_ids()==rigs and _identity()==identities,"audible short reply preserves all existing rig nodes long PCM bytes and shared player identities: "+str(report.phase))
	if answer:
		var arc: ShaderMaterial = row.arc_material
		_check(row.arc.visible and arc.get_shader_parameter("from_at")==demo.town.resonance.rigs[str(report.from_id)].anchor and arc.get_shader_parameter("to_at")==row.anchor and float(arc.get_shader_parameter("strength"))>0.0,"actual answer arc runs from A anchor to B anchor")
	else:
		var visible := 0
		for rig: Dictionary in demo.town.resonance.rigs.values():
			if rig.arc.visible: visible+=1
		_check(visible==0,"real question produces household response without an answer arc")

func _idle_controls(call: Dictionary) -> void:
	# These controls run after the completed first answer. They prove genuine UI
	# clearing/no replay while idle; only the next road edit cancels nonempty pending.
	var prior: Dictionary = demo.music.reply.report()
	await _click(demo.music_button)
	var muted: Dictionary = demo.music.reply.report()
	_check(demo.music.muted and not muted.pending and not muted.audible,"actual mute button leaves no active or pending reply (idle control scope)")
	await _click(demo.music_button)
	_check(not demo.music.muted and int(demo.music.reply.report().calls)==int(prior.calls),"actual unmute does not replay the completed old question")
	await _click(demo.tactile_dock.button_for("DistrictReply"))
	_check(not demo.music.reply.enabled and not demo.music.reply.report().pending and not demo.music.reply.report().audible,"actual CheckButton disables and clears reply state (idle control scope)")
	await _click(demo.tactile_dock.button_for("DistrictReply"))
	_check(demo.music.reply.enabled and int(demo.music.reply.report().calls)==int(prior.calls),"actual CheckButton reenable waits for a future real boundary")
	demo.focus=Vector3(40,0.7,40);demo._update_camera();await process_frame
	_check(not demo.music.reply._pair_valid(demo.life.district_reply_pairs()[0]) and not demo.music.reply.report().pending,"real listener focus outside fourteen metres makes actual linked pair ineligible")
	demo.focus=Vector3(-5,0.7,-1);demo._update_camera();await process_frame
	for ignored in range(4): demo.music.play_edit("room")
	var occupied := 0
	for effect: AudioStreamPlayer in demo.music._effects:
		if effect.playing: occupied+=1
	var calls: int = demo.music.reply.calls
	var denied: bool = not demo.music.reply._play(call,int(call.phrase),false)
	_check(occupied==4 and denied and demo.music.reply.calls==calls,"actual four occupied edit voices reject captured genuine event without stealing a voice or allocating a Player")
	await create_timer(0.85).timeout
	var invitation: Dictionary = demo.life.invite_concert("h4")
	await process_frame;await process_frame
	_check(invitation.ok and str(demo.life.concert_status().phase)=="gathering" and not demo.music.reply._play(call,int(call.phrase),false),"actual Life invitation and production gathering context gate the captured event; no fabricated concert view")
	if invitation.ok: demo.life.cancel_concert()
	await process_frame;await process_frame
	facts.control_scope="Mute/disable/focus exercised with empty pending after first completed answer; pool/gathering use a captured real event for a rejected eligibility/play attempt. Only second real call's road removal proves nonempty-pending cancellation."

func _sample() -> void:
	demo.life.set_process(true)
	var frames: Array[float] = []
	var draws: Array[float] = []
	var previous := Time.get_ticks_usec()
	for ignored in range(240):
		await process_frame
		var now := Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	frames.sort();draws.sort()
	facts.performance={"frames":240,"wall_p95_ms":frames[228],"wall_max_ms":frames[-1],"draws_median":draws[120],"engine_max_fps":Engine.max_fps,"vsync":DisplayServer.window_get_vsync_mode(),"normal_life_music":demo.life.is_processing() and demo.music.is_processing(),"scope":"180 FPS wall-clock reference, VSync disabled; not uncapped throughput."}

func _tower_coexistence() -> void:
	# Real construction, one bounded observation window, no additional recording.
	demo.life.set_process(false)
	var first: Dictionary = demo.state.add_cell("h1",0,0,1)
	demo._after_edit(first,"room");await _wait()
	var second: Dictionary = demo.state.add_cell("h1",0,0,2)
	demo._after_edit(second,"room");await _wait()
	_check(first.ok and second.ok and demo.music.tower_count()==1,"two real State upper rooms derive exactly one actual h1 tower")
	var began := Time.get_ticks_msec()
	var deadline := began+26000
	var tower: Dictionary = {}
	var call: Dictionary = {}
	var answer: Dictionary = {}
	var blockers := {}
	var boundary_blockers := {}
	var overlapping := false
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var bell: Dictionary = demo.music.tower_music_report()
		var reply: Dictionary = demo.music.reply.report()
		var clock: float = demo.music._playback_clock()
		var reserved_boundary := posmod(floori(clock/3.0),8)==4 and fposmod(clock,3.0)<=0.12
		if bool(demo.music.cafe_music_report().audible):
			blockers["actual_tea"]=true
			if reserved_boundary: boundary_blockers["actual_tea"]=true
		if bool(demo.music.travel_music_report().audible):
			blockers["actual_travel"]=true
			if reserved_boundary: boundary_blockers["actual_travel"]=true
		if bool(bell.audible) and float(bell.elapsed)>0.08 and tower.is_empty(): tower=bell.duplicate(true)
		if bool(reply.audible) and float(reply.elapsed)>0.12 and float(reply.elapsed)<0.65:
			if str(reply.phase)=="call" and posmod(int(reply.phrase),8)==4:
				if call.is_empty():
					call=reply.duplicate(true)
					deadline=mini(began+30000,maxi(deadline,Time.get_ticks_msec()+4000))
				if bool(bell.audible): overlapping=true
			elif str(reply.phase)=="answer" and not call.is_empty() and int(reply.phrase)==int(call.phrase)+1:
				answer=reply.duplicate(true)
		if not tower.is_empty() and not call.is_empty() and not answer.is_empty(): break
	_check(not tower.is_empty() and str(tower.get("source_id",""))=="h1","actual tower PCM is heard while genuine cross-district eligibility remains present")
	var coverage := "observed actual bell, reserved question and next-phrase answer in one bounded window"
	if call.is_empty() and not boundary_blockers.is_empty():
		coverage="reserved question not covered within bounded window because real foreground tea/travel was observed; no repeated wait"
	else:
		_check(not call.is_empty() and posmod(int(call.get("phrase",-1)),8)==4 and not overlapping,"actual phrase modulo eight four question uses tower gap without simultaneous bell")
		_check(not answer.is_empty() and not call.is_empty() and int(answer.get("phrase",-1))==int(call.get("phrase",-1))+1 and answer.get("from_id","")==call.get("from_id","") and answer.get("to_id","")==call.get("to_id",""),"actual next phrase answers same cross-district pair in coexistence with real tower")
	_check(_identity()==identities and demo.music.get_child_count()==13,"real tower and reserved reply share original thirteen players and unchanged long/short PCM resources")
	facts.tower_coexistence={"tower_count":demo.music.tower_count(),"actual_tower":tower,"actual_reply_call":call,"actual_reply_answer":answer,"simultaneous_call_bell":overlapping,"foreground_observed":blockers,"foreground_at_reserved_boundary":boundary_blockers,"wall_ms":Time.get_ticks_msec()-began,"scope":coverage,"clock":"unmodified production PCM; observations collected together so a valid question before first observed bell is retained","recording":"none added; only first baseline call-answer was recorded"}

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false)
	var deadline := Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL scene and production PCM bank load")
	if demo.music.audio_report.is_empty(): await _finish();return
	identities=_identity()
	_check(demo.music._players.size()==9 and demo.music._effects.size()==4 and demo.music.get_child_count()==13,"original nine long PCM players and four shared short voices remain fixed")
	var keys := 0
	for key: String in demo.music._edit_streams:
		if key.begins_with("reply_"): keys+=1
	_check(keys==40 and demo.music.audio_report.reply_pcm_bytes==1411200,"production bank contains forty phrase-local original reply PCMs totalling 1411200 bytes")
	# The authored sample's broad west district covers the real x=-11 detour.
	# Narrow origin-only stripes legitimately fail the empty-gap route rule.
	sample_bytes=FileAccess.get_file_as_bytes(EXAMPLE)
	var loaded: Dictionary = demo.state.restore(JSON.parse_string(sample_bytes.get_string_from_utf8()))
	_check(loaded.ok,"actual reply sample restores all original houses roads terrain and real cross-district ownership")
	if not loaded.ok: await _finish();return
	demo._after_edit(loaded,"history");await _wait()
	rigs=_rig_ids()
	demo.selected_district="d1";demo.focus=Vector3(-5,0.7,-1);demo.zoom=24;demo.pitch=0.78;demo._update_camera()
	await _key(KEY_8)
	await create_timer(.28).timeout
	_check(demo.tool==7 and not demo.district_panel.is_visible_in_tree() and demo.tactile_dock.button_for("DistrictReply").is_visible_in_tree(),"actual key eight opens live district reply seal")
	await process_frame;await process_frame
	var pairs: Array = demo.life.district_reply_pairs()
	_check(not pairs.is_empty() and bool(demo.music.reply.report().ready),"real published Network derives eligible cross-district pair")
	if pairs.is_empty(): await _finish();return
	facts.pairs=pairs.duplicate(true)
	_record_start()
	var phrase_deadline := Time.get_ticks_msec()+15000
	var call := await _heard("call",phrase_deadline)
	_check(not call.is_empty(),"actual question is heard on unmodified production PCM clock within bounded wait")
	if call.is_empty(): _record_stop();await _finish();return
	_validate_sound(call,false)
	_check(posmod(int(call.phrase),4)==0,"actual question belongs to real phrase modulo four zero")
	await _capture("01_真实街坊轻唤")
	var answer := await _heard("answer",phrase_deadline+1000)
	_check(not answer.is_empty(),"actual next phrase answers without manufacturing a clock or view")
	if answer.is_empty(): _record_stop();await _finish();return
	_validate_sound(answer,true)
	_check(int(answer.phrase)==int(call.phrase)+1 and answer.from_id==call.from_id and answer.to_id==call.to_id,"answer belongs to immediately following real phrase and same A to B pair")
	var call_stream: AudioStreamWAV = demo.music._edit_streams[str(call.stream_key)]
	var answer_stream: AudioStreamWAV = demo.music._edit_streams[str(answer.stream_key)]
	_check(str(call.style)!=str(answer.style) and ReplyPCM.VOICES[str(call.style)][0]!=ReplyPCM.VOICES[str(answer.style)][0] and call_stream.data!=answer_stream.data,"actual question and answer use distinct real style timbres and PCM sample bytes")
	await _capture("02_真实街坊回应与弧线")
	await create_timer(0.85).timeout
	_record_stop()
	facts.first_cycle={"call":call,"answer":answer,"call_pcm_sha256":_sha(call_stream.data),"answer_pcm_sha256":_sha(answer_stream.data)}
	await _idle_controls(call)
	var second := await _heard("call",Time.get_ticks_msec()+15000)
	_check(not second.is_empty() and demo.music.reply.report().pending,"next real question creates a genuine pending answer before road removal")
	if not second.is_empty():
		var port_id: String = str(demo.life.connected_houses.get(str(second.to_id),""))
		var port: Vector3 = demo.life.positions.get(port_id,Vector3.INF)
		var road_id: String = demo.state.road_at(Vector2(port.x,port.z)) if port.is_finite() else ""
		var answers_before: int = demo.music.reply.answers
		var removed: Dictionary = demo.state.remove_road(road_id)
		demo._after_edit(removed,"erase");await _wait()
		var cleared: Dictionary = demo.music.reply.report()
		_check(removed.ok and not cleared.pending and not cleared.audible,"real State road removal invalidates and clears actual second-call pending answer")
		var until := Time.get_ticks_msec()+3600
		while Time.get_ticks_msec()<until: await process_frame
		_check(demo.music.reply.answers==answers_before,"old disconnected pair produces no answer on following actual phrase")
		facts.road_cancel={"method":"real selected Network port XZ -> State.road_at -> State.remove_road + demo._after_edit","selected_house":second.to_id,"selected_port_id":port_id,"selected_port":port,"road_id":road_id,"actual_call":second,"after":cleared}
		await _key(KEY_Z,true);await _wait()
	root.size=Vector2i(1024,768)
	for ignored in range(4): await process_frame
	var panel: Rect2 = demo.tactile_dock.bubble_rows.get_global_rect()
	var toolbar: Control = demo.ui_layer.get_child(0).find_child("Toolbar",true,false)
	_check(panel.position.x>=0 and panel.end.x<=1024 and panel.end.y<toolbar.get_global_rect().position.y and panel.encloses(demo.tactile_dock.button_for("DistrictReply").get_global_rect()),"1024 viewport keeps actual district reply seal above toolbar")
	facts.panel_1024={"panel":panel,"seal":demo.tactile_dock.button_for("DistrictReply").get_global_rect(),"toolbar":toolbar.get_global_rect()}
	await _capture("03_1024街坊连奏面板")
	root.size=Vector2i(1440,900);await process_frame
	await demo.gallery.save_work("街坊对答夹具")
	var work_id: String = demo.gallery.last_saved_id
	_check(not work_id.is_empty(),"real isolated collection stores complete reply city without touching personal library")
	if not work_id.is_empty():
		demo.music.play_edit("room")
		var began := Time.get_ticks_msec()
		await demo.gallery.open_work(work_id);await _wait()
		var restored: Dictionary = demo.music.reply.report()
		_check(not restored.pending and not restored.audible,"real collection restore clears old reply transport instead of replaying it")
		facts.restore={"method":"production isolated Gallery save_work/open_work","wall_ms":Time.get_ticks_msec()-began,"reply":restored}
	await _tower_coexistence()
	await _sample()
	_check(_identity()==identities and demo.town.resonance.rigs.size()==rigs.size() and demo.music.get_child_count()==13,"real playback road editing and city restoration retain PCM bytes all short streams thirteen players and sample household rig count")
	facts.rig_identity_scope="Exact rig node identity checked during actual call and answer. Removing a real doorway road can legitimately rebuild that household rig; after editing/restoration only rig membership count is asserted."
	await _finish()

func _finish() -> void:
	if recorder!=null: _record_stop()
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continuing-city bytes remain untouched")
	if not sample_bytes.is_empty(): _check(FileAccess.get_file_as_bytes(EXAMPLE)==sample_bytes,"authored reply example bytes remain untouched")
	var result := {"ok":failures.is_empty(),"checks":checks,"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"failures":failures,"facts":facts,"scope":"Actual production PCM call/answer and one Master recording, genuine Network pairs, actual reply rigs and arc, baseline two call cycles with road cancellation on second, plus one bounded actual tower/reply coexistence window. Mute/disable/focus run with empty pending; captured actual event is denied under genuine full-pool/gathering gates. No synthetic clock/link/pending/concert view, OS input, full performance/economy or large-city claim.","command":"Godot_v4.7.2-stable_win64_console.exe --max-fps 180 --path . --script tools/check_creation_district_reply_live.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("CREATION_DISTRICT_REPLY_LIVE ",JSON.stringify(result))
	demo.life.set_process(false);demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
