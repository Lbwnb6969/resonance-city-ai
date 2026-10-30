extends SceneTree
## Isolated actual-player clock test; the full scene verifies the production pool.
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Whole=preload("res://scripts/audio/city_creation_master_performance.gd")
const Playback=preload("res://scripts/audio/city_creation_score_playback.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Harmony=preload("res://scripts/audio/city_creation_score_harmony.gd")
const Span=preload("res://tools/fixtures/city_creation_recording_span.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var began:=Time.get_ticks_msec();Engine.max_fps=60
	var city:=State.new();city.initialize_free();var data:=Whole.prepare(0);data.cue_templates={}
	var synth:=Music.new();var rendered:=Whole.render(data,synth);synth.free()
	var music:=Music.new();music._pluck_city=city;root.add_child(music);music.set_process(false)
	data.city=city.get_instance_id();data.revision=city.revision;data.content_context=Whole.context(city);data.section_cues=rendered.section_cues;data.started_clock=0.
	var reference:=AudioStreamPlayer.new();var lead:=AudioStreamPlayer.new();music.add_child(reference);music.add_child(lead)
	var silence:=AudioStreamWAV.new();silence.mix_rate=22050;silence.format=AudioStreamWAV.FORMAT_16_BITS;var bytes:=PackedByteArray();bytes.resize(1058400);silence.data=bytes;silence.loop_mode=AudioStreamWAV.LOOP_FORWARD;silence.loop_end=529200
	reference.stream=silence;reference.volume_db=-80.;lead.stream=rendered.lead.stream;lead.volume_db=-12.
	music._players={"concert":reference,"wood":lead};music.set_meta("authored_score_stem","wood");music.set_meta("authored_score",data);Playback.ensure(music).stems={"wood":"study1/"+data.signature+"/lead"}
	var record:=Span.start();AudioServer.lock();reference.play(0.);lead.play(47.7);AudioServer.unlock()
	var sampled:Dictionary={};var limit:=Time.get_ticks_msec()+3000
	while Time.get_ticks_msec()<limit:
		await process_frame
		var clock:=music.CueGrid.transport_clock(music)
		if clock<47.90:continue
		var onset:=music.CueGrid.quantize_cue_onset(clock);var view:=Playback.at(music,onset);var chord:=Harmony.current(music,clock)
		sampled={"clock":clock,"onset":onset,"section":view.get("section",-1),"bar":chord.bar,"reference_position":reference.get_playback_position(),"lead_position":lead.get_playback_position()}
		check(onset==48. and view.section==2 and chord.bar==0,"quantized short onset follows actual lead P1 to P2 despite unrelated reference phase")
		break
	check(not sampled.is_empty(),"real audio callback advances the authored lead")
	while music.CueGrid.transport_clock(music)<48.3 and Time.get_ticks_msec()<limit:await process_frame
	var cursor:=Playback.cursor(music)
	check(cursor.section==2 and cursor.global_bar==16 and cursor.score_position>48.,"global cursor names the actual complete-score section")
	check(reference.get_playback_position()<2. and music._playback_clock()>48.,"global Music clock is owned by sounding score, not old reference WAV")
	lead.stream_paused=true;await process_frame;await process_frame;var paused:=music._playback_clock();await create_timer(.15).timeout
	var pause_after:=music._playback_clock();print("PAUSE_MEASURE ",JSON.stringify({"before":paused,"after":pause_after,"native":lead.get_playback_position()}))
	check(absf(pause_after-paused)<.0001,"actual paused lead freezes the musical clock while reference continues")
	lead.stream_paused=false;await create_timer(.25).timeout
	var out:="res://验证记录/M84/continuous_master_20261030/actual_clock_release";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var pcm:=Span.finish(record,out+"/Master.wav")
	check(pcm.ok,"actual WASAPI lead PCM remains audible and unclipped")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"sample":sampled,"cursor":cursor,"pcm":pcm,"seconds":(Time.get_ticks_msec()-began)/1000.,"scope":"isolated actual players; full scene separately proves original production pool"}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("AUTHORED_CLOCK_LIVE ",JSON.stringify(result));music.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
