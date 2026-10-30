extends "res://tools/check_creation_score_playback_live.gd"
const Whole=preload("res://scripts/audio/city_creation_master_performance.gd")
func run()->void:
	OUT="res://验证记录/M84/continuous_master_20261030/live_initial"
	var content_id:="baseline";var compare:=false;var render_report:="res://验证记录/M84/composition_ab_20261030/render_final/render.json"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
		elif arg.begins_with("--content-id="):content_id=arg.trim_prefix("--content-id=")
		elif arg=="--compare-baseline":compare=true
		elif arg.begins_with("--render-report="):render_report=arg.trim_prefix("--render-report=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var original_pool:=pool()
	var city:=State.new();city.initialize_free();load("res://scripts/world/city_creation_build_brush.gd").select(city,"clockwork","sawtooth_atrium")
	for i in range(3):city.add_house(Vector2(-28+i*4.,-20))
	city.add_road([Vector2(-30,-18.1),Vector2(-15,-18.1)] as Array[Vector2],"path","none")
	await show(city,Vector2(-24,-20),"连续144秒母曲");quiet();demo.life.set_process(false);demo.select_tool(4);demo.zoom=17.;demo._update_camera()
	var saved:Dictionary=demo.state.snapshot();var normal_mix:Dictionary=demo.music.phonograph.capture(demo.music)
	check(demo.music.audio_report.get("bank_source")=="precompiled","original formal bank remains current without a PCM rebuild")
	var prepared:=Import.request_master_continuous(demo.music,0,content_id)
	check(prepared.ok,"public complete master API queues one original six-section performance")
	check(await wait_for(func():return demo.music.get_meta("authored_score_ready",{}).get("duration",0.)==144.,60000),"actual complete four-role long score and short bank prepare")
	check(not demo.music.has_meta("authored_score"),"full score preparation does not announce unplayed harmony")
	var node:=Playback.ensure(demo.music)
	var preparation_deadline:=Time.get_ticks_msec()+40000;var debug_next:=0
	while node.scheduled.is_empty() and Time.get_ticks_msec()<preparation_deadline:
		await process_frame
		if Time.get_ticks_msec()<debug_next:continue
		debug_next=Time.get_ticks_msec()+1000
		var ready:Dictionary=demo.music.get_meta("authored_score_ready",{})
		var debug_row:={"clock":demo.music._playback_clock(),"ready_keys":ready.keys(),"valid":Whole.valid(demo.music,ready),"source_valid":Whole.source_valid(ready) if ready.has("dsp_signature") else false,"stems":node.stems,"worker":node.worker!=null,"alive":node.worker.is_alive() if node.worker!=null else false,"boundary":node.job.get("boundary",-1.),"roles":demo.music.get_meta("chamber_roles",{})}
		print("MASTER_ENTRY_DEBUG ",JSON.stringify({"clock":debug_row.clock,"boundary":debug_row.boundary,"alive":debug_row.alive,"valid":debug_row.valid,"source_valid":debug_row.source_valid}));FileAccess.open(OUT+"/entry_debug.json",FileAccess.WRITE).store_string(JSON.stringify(debug_row,"\t"))
	check(not node.scheduled.is_empty(),"four actual players receive one common premix")
	if node.scheduled.is_empty():demo.queue_free();await process_frame;quit(1);return
	var boundary:float=node.scheduled.boundary;var record:=Span.start();var trace:Array=[];var markers:Array=[];var completed:Dictionary={};var issued:Dictionary={}
	if compare:
		var materials:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(render_report));var reference:Dictionary=materials.performances.filter(func(row):return row.id==content_id)[0]
		var actual:Dictionary={}
		for stem:String in node.stems:
			var role:=str(node.stems[stem]).get_slice("/",2);var hash:=HashingContext.new();hash.start(HashingContext.HASH_SHA256);hash.update(node.scheduled.targets[stem].data);actual[role]=hash.finish().hex_encode()
		check(reference.roles.keys().all(func(role):return actual.get(role,"")==reference.roles[role].pcm_sha256),"all four actual candidate player waves equal the rendered comparison material")
		facts.actual_pcm_sha256=actual
	facts.content_id=content_id
	var target_streams:Dictionary=node.scheduled.targets.duplicate();var stable:Dictionary={};var edited:=false;var undone:=false;var solo_started:=false;var solo_checked:=false;var edit_history:Dictionary={};var next_sample:=boundary-.5
	var solo=demo.get_meta("solo_spotlight");var wall_deadline:=Time.get_ticks_msec()+200000
	while demo.music.CueGrid.transport_clock(demo.music)<boundary+146. and Time.get_ticks_msec()<wall_deadline:
		await process_frame
		var clock:float=demo.music.CueGrid.transport_clock(demo.music);var elapsed:=clock-boundary;var cursor:=Playback.cursor(demo.music)
		for crossing in range(7):
			var at:=boundary+crossing*24.;var section:=crossing%6
			if clock>=at-.10 and not issued.has(crossing):
				issued[crossing]=true;var onset:float=demo.music.CueGrid.quantize_cue_onset(clock);var context:=Playback.at(demo.music,onset)
				check(clock<at and onset>=at and context.get("section",-1)==section,"quantized onset resolves actual next section "+str(crossing))
				var single:bool=demo.music._play_queued_house({"house_id":"h1"});var note:Dictionary=demo.music._pluck_active.duplicate()
				check(single and note.get("harmony_signature","")==prepared.signature and note.bar==0,"actual single short note follows crossing "+str(crossing))
				var wave:AudioStreamWAV=demo.music._harmony_streams["0/edit/road/0"];var voice:AudioStreamPlayer=demo.music._effects[3]
				demo.music.play_effect_at(voice,wave,Vector2(-24,-20));var chord:Dictionary=Harmony.current(demo.music,clock)
				check(voice.stream.get_meta("master_score_signature","")==prepared.signature and voice.stream.get_meta("master_cue_notes",[]).all(func(n):return inside(n.midi,chord.chord)),"actual composite PCM follows crossing "+str(crossing))
				markers.append({"crossing":crossing,"at":at,"dispatch":clock,"onset":onset,"context_section":context.get("section",-1),"context_position":Whole.position(demo.music,onset,context),"before":cursor,"single":note,"actual_short_stream":voice.stream.get_instance_id()})
			if clock>=at+.2 and not completed.has(crossing):
				completed[crossing]=true
				check(cursor.get("section",-1)==section and cursor.get("duration",0.)==144.,"actual long PCM reaches authored section "+str(crossing))
				check(cursor.get("global_bar",-1)==section*8,"global first bar agrees with actual 144-second cursor "+str(crossing))
				if crossing==0:stable=target_streams.duplicate()
				check(stable.keys().all(func(k):return demo.music._players[k].stream==stable[k]),"continuous four voices never seek or replace at section boundary "+str(crossing))
				print("CONTINUOUS_MASTER_SECTION ",crossing," clock=",clock," position=",cursor.get("score_position",-1.))
		if elapsed>=30. and not edited:
			edited=true;var before:=Playback.cursor(demo.music);var result:Dictionary=demo.state.add_house(Vector2(-14,-20));check(result.ok,"public same-city construction during mother playback")
			demo._after_edit(result,"room");await settle();quiet();demo.life.set_process(false)
			check(demo.music.get_meta("authored_score",{}).get("signature","")==prepared.signature and target_streams.keys().all(func(k):return demo.music._players[k].stream==target_streams[k]),"spatial rebuild preserves valid mother content and actual streams")
			edit_history=demo.state.harmony_journey.duplicate(true)
			var protected_before:Dictionary=saved.harmony_journey.duplicate(true);var protected_after:=edit_history.duplicate(true);protected_before.erase("receipts");protected_after.erase("receipts")
			check(protected_before==protected_after and edit_history.get("receipts",{}).get("house/"+str(result.house_id),0)==1,"actual construction records one consumed house receipt while earned XP credits offers and cutoff stay unchanged")
			facts.edit={"before":before,"after":Playback.cursor(demo.music),"actual_house":result.house_id,"history_before":saved.harmony_journey,"history_after":edit_history}
		if elapsed>=33. and edited and not undone:
			undone=true;demo._history(false);await settle();quiet();demo.life.set_process(false)
			check(demo.state.houses==saved.houses and demo.state.harmony_journey==edit_history and not Playback.cursor(demo.music).is_empty(),"Undo restores geometry and earned history without restarting mother")
		if elapsed>=44. and not solo_started:
			solo_started=true;await p_key(true);await click_house("h1");await p_key(false)
			check(solo.active() and solo.report().shared_master and solo.player in demo.music._players.values(),"native P workshop solo uses the same full-score lead before P1 to P2")
			await capture("continuous_shared_solo")
		if elapsed>=49. and solo_started and not solo_checked:
			solo_checked=true;check(solo.active() and solo.player.stream==target_streams[solo.track] and Playback.cursor(demo.music).section==2,"native solo follows actual P1 to P2 without another melody")
			await key(KEY_ESCAPE);check(not solo.active(),"native Escape returns full mother playback")
		if clock>=next_sample:
			next_sample=clock+.5
			var players:Dictionary={}
			for key:String in target_streams:players[key]={"position":demo.music._players[key].get_playback_position(),"stream_id":demo.music._players[key].stream.get_instance_id(),"db":demo.music._players[key].volume_db}
			trace.append({"clock":clock,"cursor":cursor,"players":players,"revision":demo.state.revision})
	check(completed.size()==7,"all six complete 24-second sections and P5 to P0 are observed")
	facts.pcm=Span.finish(record,OUT+"/continuous_144_and_wrap_Master.wav");check(facts.pcm.ok and facts.pcm.seconds>=146.,"actual continuous speaker PCM includes both sides of P5 to P0")
	facts.boundary=boundary;facts.trace=trace;facts.markers=markers;await capture("after_six_sections")
	var resumed:=Playback.cursor(demo.music);check(demo.music.phonograph.begin(demo.music,normal_mix).ok,"original phonograph can temporarily own all pooled players")
	check(Playback.cursor(demo.music).is_empty(),"phonograph never advertises current mother harmony")
	await create_timer(.25).timeout;demo.music.phonograph.stop(demo.music);await process_frame
	check(absf(Playback.cursor(demo.music).score_position-resumed.score_position)<.08,"phonograph restores actual position within the 144-second work")
	if compare:
		var comparison:=Span.start();var expected:=Whole.prepare(0,"baseline")
		check(Import.request_master_continuous(demo.music,0,"baseline").ok,"public A/B selection requests preserved baseline on the same city")
		check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==expected.signature,60000),"candidate-to-baseline transition commits the selected source signature")
		check(await wait_for(func():return node.scheduled.is_empty(),3000),"A/B transition returns to stable original voices")
		check(Playback.cursor(demo.music).content_id=="baseline" and demo.music.get_meta("authored_score").master_signature==Whole.Master.read().signature,"actual A playback names original content rather than candidate metadata")
		facts.ab_pcm=Span.finish(comparison,OUT+"/candidate_to_baseline_Master.wav");check(facts.ab_pcm.ok,"actual speaker PCM across B to A remains audible and unclipped")
	var old_document:=Import.Document.read("res://数据/原创谱材/河湾练习_v1/score.json");var handover:=Span.start()
	check(Import.request(demo.music,"res://数据/原创谱材/河湾练习_v1/score.json").ok,"original external M80 request can replace a complete performance")
	check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==old_document.signature,60000),"actual 144-second to schema1 handover reaches common safe boundary")
	check(await wait_for(func():return node.scheduled.is_empty(),3000),"M80 returns to its original 24-second stable streams")
	check(demo.music._players[str(demo.music.get_meta("authored_score_stem"))].stream.get_length()==24. and Playback.cursor(demo.music).duration==24.,"old external document keeps eight-bar playback and cursor semantics")
	facts.handover_pcm=Span.finish(handover,OUT+"/continuous_to_m80_Master.wav");check(facts.handover_pcm.ok,"actual full-score to M80 handover PCM remains audible and unclipped")
	var mode_result:Dictionary=demo.state.set_music_mode("gong_pentatonic");check(mode_result.ok,"public city mode change accepted")
	demo._after_edit(mode_result,"history");await settle();quiet();demo.life.set_process(false)
	check(Playback.cursor(demo.music).is_empty() and not demo.music.has_meta("authored_score_ready"),"changed modal intent retires old long score")
	check(Import.request_master_continuous(demo.music).ok,"second request prepares before real city replacement")
	var other:=State.new();other.initialize_free();await show(other,Vector2.ZERO,"新城不接旧谱");quiet()
	var reader:Node=demo.music.get_node("AuthoredScore");check(await wait_for(func():return reader.worker==null,60000),"old full-score worker really finishes after city replacement")
	check(Playback.cursor(demo.music).is_empty() and not demo.music.has_meta("authored_score_ready"),"stale complete performance never publishes into new city")
	check(Import.Document.read("res://数据/原创谱材/河湾练习_v1/score.json").ok,"old M80 schema1 document remains valid")
	check(pool()==original_pool,"original twelve long four short six buses two nature pool retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CONTINUOUS_MASTER_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
