extends "res://tools/check_creation_score_harmony_live.gd"
const Playback=preload("res://scripts/audio/city_creation_score_playback.gd")
func hold_job(node:Node,until_clock:float)->void:
	# A real synthesis thread finishes behind a semaphore: deterministic late delivery.
	var original:Thread=node.worker;var gate:=Semaphore.new();var delayed:=Thread.new()
	node.worker=delayed;delayed.start(func():gate.wait();return original.wait_to_finish())
	while demo.music.CueGrid.transport_clock(demo.music)<until_clock:await process_frame
	gate.post()
func click_house(id:String)->void:
	var house:Dictionary=demo.town._house_record(id);var at:Vector2=demo.camera.unproject_position(Vector3(house.origin[0],float(house.get("base_y",0.))+1.2,house.origin[1]))
	await motion(at)
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.pressed=down;event.button_index=MOUSE_BUTTON_LEFT;root.push_input(event);await process_frame
func run()->void:
	OUT="res://验证记录/M84/score_playback_20261030/live_initial"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:=State.new();city.initialize_free()
	for at:Vector2 in [Vector2(-28,-20),Vector2(-24.4,-20),Vector2(-20.8,-20)]:city.add_house(at)
	var brush=load("res://scripts/world/city_creation_build_brush.gd");brush.select(city,"clockwork","sawtooth_atrium")
	for at:Vector2 in [Vector2(24,-20),Vector2(28,-20),Vector2(32,-20)]:city.add_house(at)
	city.add_road([Vector2(-30,-18.1),Vector2(36,-18.1)] as Array[Vector2],"path","none")
	await show(city,Vector2(-24,-20),"实际母曲游标");quiet();demo.life.set_process(false);var saved:Dictionary=demo.state.snapshot();var normal_mix:Dictionary=demo.music.phonograph.capture(demo.music)
	check(demo.music.audio_report.get("bank_source")=="precompiled","formal unchanged PCM bank loads with current stamp")
	facts.sections=[]
	for section in [0,1]:
		var data:=Master.section(section);var previous:=Playback.cursor(demo.music);var recording:=Span.start()
		check(Import.request_master(demo.music,section).ok,"public master section requested "+str(section))
		check(await wait_for(func():return demo.music.has_meta("authored_score_ready"),60000),"four roles and composite cues prepare "+str(section))
		check(demo.music.get_meta("authored_score",{}).get("signature","")!=data.signature,"prepared score is not announced as sounding "+str(section))
		check(await wait_for(func():return not Playback.ensure(demo.music).scheduled.is_empty(),30000),"one cohort premix installed "+str(section))
		var node:=Playback.ensure(demo.music);var boundary:float=node.scheduled.boundary;var trace:Array=[]
		var old:Dictionary=demo.music.get_meta("authored_score",{});var wave:AudioStreamWAV=demo.music._harmony_streams["0/edit/road/"+str(posmod(floori(boundary/3.),8))]
		while demo.music.CueGrid.transport_clock(demo.music)<boundary-.10:
			await process_frame
			var clock:float=demo.music.CueGrid.transport_clock(demo.music)
			if boundary-clock<.5:trace.append({"clock":clock,"cursor":Playback.cursor(demo.music),"harmony":Harmony.current(demo.music,clock)})
		var clock:float=demo.music.CueGrid.transport_clock(demo.music)
		check(clock<boundary and demo.music.CueGrid.quantize_cue_onset(clock)>=boundary,"actual dispatch lies before bar and quantizes into next bar "+str(section))
		var chord:=Harmony.current(demo.music,clock)
		check(chord.signature==data.signature and chord.bar==posmod(floori(boundary/3.),8),"future quantized note uses scheduled sounding score "+str(section))
		var effect:AudioStreamPlayer=demo.music._effects[0];demo.music.play_effect_at(effect,wave,Vector2(-24,-20))
		check(effect.stream.get_meta("master_score_signature","")==data.signature,"actual pooled composite cue resolves final onset score "+str(section))
		var actual_notes:Array=effect.stream.get_meta("master_cue_notes",[])
		check(not actual_notes.is_empty() and actual_notes.all(func(n):return inside(int(n.midi),data.harmony[chord.bar])),"actual composite PCM ledger matches final onset chord "+str(section))
		check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==data.signature,3000),"sounding state commits at actual shared boundary "+str(section))
		var active:Dictionary=demo.music.get_meta("authored_score",{})
		check(demo.music._variation_active.values().count("study1/"+data.signature+"/lead")==1,"exactly one adopted layer3 lead "+str(section))
		check(await wait_for(func():return node.scheduled.is_empty(),3000),"cohort rejoins stable waves after 150ms fade "+str(section))
		var cursor:=Playback.cursor(demo.music);var stem:=str(demo.music.get_meta("authored_score_stem"));var lead:AudioStreamPlayer=demo.music._players[stem]
		check(absf(cursor.position-fposmod(lead.get_playback_position()-float(demo.music.get_meta("cue_clock_bias",0.)),24.))<.001,"cursor reads actual adopted lead PCM position "+str(section))
		check(cursor.section==section and cursor.global_bar==section*8+cursor.bar,"actual section and global bar share played context "+str(section))
		check(["foundation","air","terrace"].all(func(k):return absf(fposmod(demo.music._players[k].get_playback_position(),24.)-fposmod(lead.get_playback_position(),24.))<.01),"all four actual player sample phases align "+str(section))
		await p_key(true);await hover_house("h1");await create_timer(.4).timeout;await p_key(false)
		var held:Dictionary=demo.music.get_meta("held_strum",{})
		check(held.get("harmony_signature","")==data.signature,"native P roof note follows adopted score "+str(section))
		await capture("section_"+str(section));var pcm:=Span.finish(recording,OUT+"/section_"+str(section)+"_Master.wav")
		check(pcm.ok,"continuous actual PCM across preparation and cohort change "+str(section))
		facts.sections.append({"section":section,"boundary":boundary,"before":previous,"trace":trace,"cursor":cursor,"held":held,"cue_notes":actual_notes,"pcm":pcm})
	var late_record:=Span.start()
	var late:=Master.section(2);check(Import.request_master(demo.music,2).ok,"public next section prepares for deterministic late worker")
	var playback:=Playback.ensure(demo.music)
	check(await wait_for(func():return playback.worker!=null,60000),"real cohort worker exists before delivery delay")
	var old_boundary:float=playback.job.boundary;var release:float=playback.job.cycle+22.5
	if release<=old_boundary:release+=24.
	await hold_job(playback,release)
	check(await wait_for(func():return playback.worker!=null and playback.job.boundary!=old_boundary,3000),"expired preparation keeps old score and retries at real late-cycle clock")
	var cycle:float=playback.job.cycle;var deadline:float=playback.job.boundary
	check(deadline>cycle+24.5,"new cohort boundary lies beyond actual loop wrap")
	await hold_job(playback,cycle+24.5)
	check(await wait_for(func():return not playback.scheduled.is_empty(),3000),"actual premix installs after reference loop wrapped")
	var late_stem:=str(demo.music.get_meta("authored_score_stem"));var late_player:AudioStreamPlayer=demo.music._players[late_stem]
	check(late_player.get_playback_position()>24. and late_player.get_playback_position()<deadline-cycle,"premix installation preserves second-cycle coordinate")
	check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==late.signature,6000),"late material publishes harmony at the PCM fade boundary")
	check(await wait_for(func():return playback.scheduled.is_empty(),3000),"late four-role batch returns to stable bank")
	facts.late={"cycle":cycle,"boundary":deadline,"cursor":Playback.cursor(demo.music),"pcm":Span.finish(late_record,OUT+"/late_loop_Master.wav")}
	check(facts.late.pcm.ok,"continuous actual PCM covers expired retry and wrapped late install")
	var score_solo=load("res://scripts/audio/city_creation_score_solo.gd")
	demo.focus=Vector3(28,.8,-20);demo.zoom=13.;demo._update_camera();await create_timer(.6).timeout;demo.music.remove_meta("chamber_role_key")
	var plan:Dictionary=load("res://scripts/audio/city_creation_chamber_roles.gd").prepare(demo.music)
	check(plan.lead_track==late_stem and demo.music.emergence.score.lead_track==late_stem and score_solo.voice(demo.music).get("stem","")==late_stem,"focus candidate cannot detach actual locked lead and solo reports")
	await p_key(true);await click_house("h4");await p_key(false)
	var solo=demo.get_meta("solo_spotlight")
	check(solo.active() and solo.player==late_player and solo.report().shared_master,"native P workshop solo reuses locked actual lead after focus moves")
	await capture("locked_lead_solo");await key(KEY_ESCAPE)
	check(not solo.active() and late_player.playing,"native Escape leaves actual mother lead playing")
	var resumed:=Playback.cursor(demo.music)
	check(demo.music.phonograph.begin(demo.music,normal_mix).ok,"original phonograph starts on same twelve players during preview")
	check(Playback.cursor(demo.music).is_empty() and Harmony.current(demo.music,3.).signature.is_empty(),"phonograph does not publish preview harmony")
	await create_timer(.3).timeout;demo.music.phonograph.stop(demo.music);await process_frame
	check(Playback.cursor(demo.music).signature==resumed.signature,"phonograph exit restores actual previous preview context")
	check(demo.state.snapshot()==saved,"preview preparation notes and playback do not write author state")
	demo.set_process(false);demo.music.set_concert_active(true);await process_frame;await process_frame
	check(Playback.cursor(demo.music).is_empty() and not demo.music.has_meta("authored_score") and not Playback.owns(demo.music,late_stem),"entering original concert audio mode retires preview ownership")
	demo.music.set_concert_active(false);demo.set_process(true)
	check(Harmony.current(demo.music,3.).signature.is_empty(),"concert exit retains base harmony");check(Playback.cursor(demo.music).is_empty() and Harmony.current(demo.music,3.).signature.is_empty(),"exit retires actual score cursor and harmony")
	var next:=State.new();next.initialize_free();await show(next,Vector2.ZERO,"切城退出谱面");quiet()
	check(not demo.music.has_meta("authored_score_ready") and Playback.cursor(demo.music).is_empty(),"new city never inherits pending or played preview")
	check(pool()==voices,"twelve long four short six buses two nature pool retained")
	check(saved.houses.size()==6,"fixture created through public state APIs")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SCORE_PLAYBACK_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
