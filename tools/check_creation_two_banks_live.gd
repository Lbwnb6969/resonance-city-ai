extends SceneTree
## Actual same-bay era duet on the production transport and shared short pool.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_two_banks_fixture.gd")
const OUT="res://验证记录/两岸跨时代_2026-10-18"
var demo
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _capture(name_value: String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"real GL screenshot: "+name_value)
func _identity()->Array:
	var result: Array=[]
	for player: AudioStreamPlayer in demo.music._players.values():result.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects:result.append(player.get_instance_id())
	return result
func _phase(worker: Dictionary,wanted: String)->bool:
	for i in range(2500):
		if worker.phase==wanted:return true
		demo.life._process(.1)
	return false
func _hear(wanted: String,deadline: int)->Dictionary:
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var report: Dictionary=demo.music.reply.report()
		if report.audible and report.phase==wanted and report.elapsed>.16 and report.elapsed<.5:return report.duplicate(true)
	return {}
func _sound(report: Dictionary)->void:
	var player: AudioStreamPlayer=demo.music.reply._player
	var expected: String="pluck" if report.era_theme=="pastoral" else "harpsichord"
	var notes: Array=demo.music.audio_report.reply_notes[report.stream_key]
	_check(report.timbre==expected and notes[0].timbre==expected and player.playing and player.stream==demo.music._edit_streams[report.stream_key] and player.get_playback_position()>0,"actual "+str(report.phase)+" plays source-era PCM on advancing pooled player")
	_check(report.from_style=="warm" and report.to_style=="warm" and report.from_era!=report.to_era and report.manual,"equal-style manual link still answers with two distinct actual eras")
	var rig: Dictionary=demo.town.resonance.rigs[str(report.source_id)]
	_check(float(rig.get("reply_response",0.))>0.,"actual source rig responds to audible "+str(report.phase))
	if report.phase=="answer":_check(rig.arc.visible and rig.arc_material.get_shader_parameter("from_at")==demo.town.resonance.rigs[str(report.from_id)].anchor,"actual answer arc joins opposite banks")
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var fixture: Dictionary=Fixture.build()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo)
	demo.life.set_process(false);demo.music.set_muted(true)
	_check(demo.state.restore(fixture.city.snapshot()).ok,"normal scene restores conserved two-bank authored work")
	demo.life.setup(demo.state);demo._after_edit({"ok":true,"message":"two banks"},"history")
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.music.audio_report.is_empty()) and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending and not demo.music.audio_report.is_empty(),"normal asynchronous publication and precompiled PCM finish")
	demo.focus=Vector3(-2,.7,-2);demo.zoom=35;demo.yaw=.16;demo.pitch=.8;demo._update_camera();demo.town.clear_preview();demo.ui_layer.visible=false
	await create_timer(.3).timeout
	var atelier: String=fixture.atelier
	var east: Node3D=demo.town.house_roots[atelier]
	_check(east.get_meta("era_theme")=="renaissance" and east.get_meta("domes",[]).size()==1 and east.get_meta("arcades",[]).size()>=4,"east atelier has actual 2x2 octagonal dome and recessed colonnades")
	_check(demo.town.house_roots.h1.get_meta("era_theme")=="pastoral" and demo.town.house_roots.h1.get_meta("domes",[]).is_empty(),"west old town retains original wood and stone facade")
	_check(demo.music.manual_reply_pairs().size()==1 and demo.music.manual_reply_pairs()[0].distance>20.,"manual music link spans the real river between inhabited districts")
	var bridge_count:=0
	for road: Dictionary in demo.state.roads:
		if bool(road.get("bridge",false)):bridge_count+=1
	_check(bridge_count==1,"same bay has one genuine cross-river promenade bridge")
	await _capture("01_same_bay_day")
	# Advance the normal life simulation for artwork setup; music below uses
	# unmodified wall time. No stock, destination, cargo or delivery is injected.
	var worker: Dictionary=demo.life.workshop.workers[0]
	_check(_phase(worker,"to_target") and worker.carry.visible,"east artist produces real canvas and leaves atelier on walking route")
	var recipient: String=str(worker.target_id)
	_check(_phase(worker,"installing"),"carrying artist reaches actual recipient")
	demo.life._process(2.01);demo._refresh_workshops()
	_check(demo.state.culture_level(recipient)==1 and demo.town.craft.culture_roots.has(recipient),"onsite callback installs real art on recipient facade")
	facts.artist={"home":worker.home_id if worker.has("home_id") else atelier,"recipient":recipient,"culture":demo.state.culture_level(recipient),"simulation_step":.1}
	var identities:=_identity()
	var recording:=AudioEffectRecord.new();recording.format=AudioStreamWAV.FORMAT_16_BITS
	var effects_before:=AudioServer.get_bus_effect_count(0);AudioServer.add_bus_effect(0,recording);recording.set_recording_active(true)
	demo.music.set_muted(false)
	deadline=Time.get_ticks_msec()+60000
	var call: Dictionary=await _hear("call",deadline)
	_check(not call.is_empty(),"unmodified shared transport emits real cross-era question")
	if not call.is_empty():_sound(call);await _capture("02_actual_question")
	var answer: Dictionary=await _hear("answer",deadline)
	_check(not answer.is_empty(),"next real phrase emits cross-era answer")
	if not answer.is_empty():_sound(answer);await _capture("03_actual_answer")
	var completed_deadline:=Time.get_ticks_msec()+4000
	while demo.state.era_answers.is_empty() and Time.get_ticks_msec()<completed_deadline:await process_frame
	var finished: Dictionary=demo.music.reply.report()
	facts.finished=finished;facts.pending=demo.music.reply._pending.duplicate(true)
	_check(demo.state.era_answers.size()==1 and demo.state.district_answers.size()==1 and not finished.audible,"only completed real question and answer record cross-era resonance")
	recording.set_recording_active(false)
	var wav: AudioStreamWAV=recording.get_recording()
	var recording_data: PackedByteArray=wav.data
	var peak:=0.
	for i in range(0,recording_data.size(),2):peak=maxf(peak,absf(float(recording_data.decode_s16(i))/32768.))
	_check(wav.get_length()>3.8 and peak>.001 and wav.save_to_wav(OUT+"/实际两岸对答.wav")==OK,"actual Master output records non-silent cross-bank duet")
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==recording:AudioServer.remove_bus_effect(0,i)
	_check(AudioServer.get_bus_effect_count(0)==effects_before and _identity()==identities and demo.music.get_child_count()==demo.music.STEMS.size()+4,"duet and art preserve fixed long and short players and restore Master effects")
	var fugue: AudioStreamPlayer=demo.music._players.renaissance_fugue
	var timbres: Dictionary={}
	for note: Dictionary in demo.music.audio_report.theme_notes.renaissance_fugue:timbres[note.timbre]=true
	_check(fugue.playing and fugue.volume_db> -38. and timbres.has("oboe") and timbres.has("strings") and timbres.has("harpsichord"),"visible east district plays actual harpsichord string and oboe fugue")
	facts.call=call;facts.answer=answer;facts.era_answers=demo.state.era_answers.duplicate(true);facts.recording={"seconds":wav.get_length(),"peak":peak}
	var snapshot_file:=FileAccess.open(OUT+"/two_banks_snapshot.json",FileAccess.WRITE)
	snapshot_file.store_string(JSON.stringify(demo.state.snapshot(),"\t",true,true));snapshot_file.close()
	var restored:=State.new()
	_check(restored.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/two_banks_snapshot.json"))).ok,"completed art and cross-era answer restore as a conserved playable work")
	demo.focus=Vector3(10.8,.7,-4.2);demo.zoom=14;demo.yaw=.25;demo._update_camera();demo._toggle_light();demo._toggle_light();await create_timer(.3).timeout
	await _capture("04_east_atelier_night")
	var frames: Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
	frames.sort();facts.performance={"p95_ms":frames[113],"max_ms":frames[-1]}
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated GL verification preserves personal save bytes")
	var result: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("TWO_BANKS_LIVE ",JSON.stringify({"ok":result.ok,"checks":checks.size(),"failures":failures,"performance":facts.performance,"call":call,"answer":answer}))
	demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
