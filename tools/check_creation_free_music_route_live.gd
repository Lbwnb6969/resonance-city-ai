extends "res://tools/check_game_music_live.gd"
const FreeRoute=preload("res://scripts/audio/city_creation_free_music_route.gd")
const TrialControls=preload("res://scripts/ui/city_creation_music_trial.gd")
func no_old_long()->bool:
	return demo.music._players.values().all(func(voice):return not voice.playing)
func button_press(control:Control)->void:
	var at:=control.get_global_rect().get_center()
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	check(demo.state.CreationPolicy.is_free(demo.state) and demo.state.houses.is_empty() and no_old_long(),"real empty production free city never starts the twelve rejected long voices")
	check(demo.music.audio_report.get("bank_source")=="precompiled","compatibility PCM and interaction bank loads from current actual cache")
	var old_clock:float=demo.music.CueGrid.transport_clock(demo.music);var nature:int=demo.ambience._forest_frames_pushed;await create_timer(.5).timeout
	check(demo.music.CueGrid.transport_clock(demo.music)>old_clock and demo.music._playback_clock()==demo.music.CueGrid.transport_clock(demo.music),"input cue clock advances without reviving a silent concert transport")
	check(demo.ambience.players.size()==2 and demo.ambience._forest_frames_pushed>nature,"existing two natural ambience voices keep feeding")
	var record:=Span.start();var built:Dictionary=demo.state.add_house(Vector2(-28,-20));check(built.ok,"first isolated public authoring operation succeeds")
	demo.focus=Vector3(-28,.8,-20);demo.zoom=18.;demo._update_camera();demo._after_edit(built,"house");await settle()
	check(await wait_for(func():return demo.music._effects.any(func(p):return p.playing and p.stream.has_meta("unpitched_touch")),2000),"actual construction publishes a physical short through the existing effect pool")
	check(demo.music.get_meta("construction_last_note",{}).get("unpitched",false) and demo.music.get_meta("construction_last_note",{}).get("midi",0)==-1,"construction receipt describes the actual physical sound instead of an old fixed pitch")
	for voice:AudioStreamPlayer in demo.music._effects:
		if voice.playing and voice.stream.has_meta("unpitched_touch"):voice.stream.save_to_wav(OUT+"/physical_touch.wav");break
	if demo.music._pluck_player!=null and demo.music._pluck_player.stream.has_meta("unpitched_touch"):
		check(demo.music._pluck_active.get("unpitched",false) and demo.music._pluck_active.midi==-1 and demo.music._pluck_stream==demo.music._pluck_player.stream,"short voice attribution describes the actual unpitched PCM")
		demo.music._pluck_player.stream.save_to_wav(OUT+"/physical_touch.wav")
	for i in range(1,6):
		built=demo.state.add_house(Vector2(-28+i*3.6,-20));check(built.ok,"continuous building operation "+str(i));demo._after_edit(built,"house");await settle();check(no_old_long(),"continuous building does not layer old songs "+str(i))
	var undone:Dictionary=demo.state.undo();check(undone.ok,"Undo real last house");demo._after_edit(undone,"history");await settle();check(no_old_long(),"Undo keeps natural background")
	facts.free_pcm=Span.finish(record,OUT+"/free_build_Master.wav");check(facts.free_pcm.ok,"actual physical input and nature PCM is non-silent and unclipped")
	demo.ledger.open_panel();await create_timer(.3).timeout;demo.ledger._last_refresh=-500;demo.ledger.refresh();check("自然底景 · 音乐留白" in demo.ledger.body.text and not "第1段 / 六段" in demo.ledger.body.text,"original L page honestly presents the current nature-only policy");await capture("free_nature_L");await key(KEY_ESCAPE)
	var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/city.json").ok,"real city saves to this isolated works batch");var reader:=State.new();check(reader.load_city(OUT+"/city.json").ok and reader.snapshot()==saved,"music route writes no hidden city policy or schema data")
	var trial:=TrialControls.new();demo.add_child(trial);check(trial.install(demo) and trial.background.size()==2 and trial.packs.size()==57,"existing L selector retains all 57 choices and two explicitly unapproved background-intent candidates")
	trial.start_selected();check(await wait_for(func():return is_instance_valid(trial.conductor) and trial.conductor.active,30000),"actual default isolated background-intent candidate prepares")
	if not is_instance_valid(trial.conductor) or not trial.conductor.active:quit(1);return
	var node:Node=trial.conductor;var first:String=node.prepared.manifest.source_id
	check(first=="d005db9a2b3761a402d8b0deafbe3f1f7226a6f17a11da32984f661c82d2bb5c" and node.sequence.rows.size()==2 and node.get_meta("background_intent_trial",false),"isolated opening uses only the declared pending background pool")
	check(node.values.core==1. and node.values.body==.35 and node.values.motion==.35 and node.values.detail==.35,"existing full core stays intact and colors begin at bounded minimum")
	check(not Import.request_master(demo.music,0).ok,"explicit old score import cannot steal an active candidate owner")
	check(node.seek(float(node.prepared.manifest.frames)/44100.-.3),"seek to real full source ending")
	check(await wait_for(func():return node.sequence.breathing,4000),"actual finished emits a natural breath")
	check(no_old_long(),"complete-song gap contains no legacy long player")
	check(await wait_for(func():return node.prepared.manifest.source_id!=first,12000),"natural full-song sequence selects the other background-intent candidate")
	check(node.sequence.rows.any(func(row):return row.source_id==node.prepared.manifest.source_id),"simple trial never auto-selects outside its pending background pool")
	demo.ledger.open_panel();await create_timer(.3).timeout;demo.ledger._last_refresh=-500;demo.ledger.refresh();check("背景候选 · 旋律存在感与留白待听评" in demo.ledger.body.text,"existing L labels fit as pending rather than pretending a removed melody");await capture("background_candidate_L")
	await button_press(trial.stop_button);await process_frame;check(no_old_long() and demo.music.get_node_or_null("GameMusicPlayer")==null,"actual End Trial button restores natural silence immediately")
	await key(KEY_ESCAPE)
	trial.start_selected();check(await wait_for(func():return is_instance_valid(trial.conductor) and trial.conductor.active,30000),"candidate restarts after an explicit stop");node=trial.conductor
	check(node.seek(float(node.prepared.manifest.frames)/44100.-.2),"seek for real pending handoff cancellation");check(await wait_for(func():return node.sequence.breathing,4000),"real ending starts a background pending packet");facts.cancel_pending_worker=node.sequence.worker!=null
	trial.stop();check(no_old_long() and demo.music.is_processing(),"stop releases shared voices and parent processing before pending IO completes");check(await wait_for(func():return demo.music.get_node_or_null("GameMusicPlayer")==null,5000),"cancelled pending packet retires without re-adopting a song")
	var bad:Dictionary=GamePlayer.request(demo.music,OUT+"/missing_bundle.json");check(bad.ok,"invalid packet probe uses real asynchronous request path");check(await wait_for(func():return demo.music.get_node_or_null("GameMusicPlayer")==null,3000),"invalid packet releases without adoption");check(no_old_long(),"failed packet never falls back to old synthetic music")
	var old_mix:={"version":1,"position":0.,"mode":-1,"theme_pan":0.,"concert_pan":0.,"tracks":{}}
	for stem:String in demo.music.phonograph.STEMS:old_mix.tracks[stem]={"bank":"original","key":stem,"db":-40.}
	check(demo.music.phonograph.begin(demo.music,old_mix).ok,"explicit saved phonograph compatibility API stays available");await process_frame;check(demo.music.phonograph.active and not no_old_long(),"explicit historical work owns its original playback");demo.music.phonograph.stop(demo.music);await process_frame;check(no_old_long(),"ending explicit historical work returns to free nature policy")
	var legacy:=State.new();legacy.initialize_empty();await show(legacy,Vector2.ZERO,"legacy显式兼容");quiet();check(not FreeRoute.holds(demo.music) and not no_old_long(),"actual legacy city retains the original continuous music API")
	demo.music.set_concert_active(true);check(not GamePlayer.request(demo.music,trial.packs[0].manifest).ok,"candidate cannot take an already owned historical concert");demo.music.set_concert_active(false)
	var fresh:=State.new();fresh.initialize_free();await show(fresh,Vector2.ZERO,"新自由城");quiet();check(no_old_long(),"real gallery city switch back to free stops legacy transport")
	var court:Dictionary=Fixture.courtyard("ring","none");await show(court.city,Fixture.ORIGIN+Vector2(3.6,3.6),"显式旧谱兼容");quiet()
	check(Import.request_master(demo.music,0).ok,"explicit historical score API can still prepare in a free city");check(await wait_for(func():return demo.music.has_meta("authored_score"),60000),"explicit historical score actually takes its compatible transport");facts.explicit_score={"ready":demo.music.get_meta("authored_score_ready",{}).get("signature",""),"active":demo.music.get_meta("authored_score",{}).get("signature",""),"clock":demo.music._playback_clock(),"roles":demo.music.get_meta("chamber_roles",{})};check(not FreeRoute.holds(demo.music) and not no_old_long(),"only the explicit imported score owns this compatibility playback")
	Import.discard(demo.music,demo.music.get_meta("authored_score",{}));await process_frame;await process_frame;check(FreeRoute.holds(demo.music) and no_old_long(),"discarding explicit historical preview returns to free nature rather than an automatic old song")
	check(pool()==voices and personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"original voice limits and personal save bytes remain intact")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts,"works":demo.collection_directory,"listening_approved":false}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FREE_MUSIC_ROUTE_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
