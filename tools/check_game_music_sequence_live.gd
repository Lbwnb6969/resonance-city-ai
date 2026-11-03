extends "res://tools/check_game_music_live.gd"
const Trial=preload("res://scripts/ui/city_creation_music_trial.gd")
var trial:Node
func sequence_ready()->bool:return is_instance_valid(trial.conductor) and trial.conductor.active
func start(index:int)->Node:
	trial.picker.select(index);trial.start_selected();check(await wait_for(sequence_ready,30000),"real candidate prepares and takes original pooled player")
	if not sequence_ready():return null
	trial.conductor.sequence.configure(trial.conductor,[trial.packs[0],trial.packs[-1]])
	return trial.conductor
func near_end(node:Node)->void:
	var duration:float=float(node.prepared.manifest.frames)/44100.;check(node.seek(duration-.65),"seek all synchronized streams to natural complete ending")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool();trial=Trial.new();demo.add_child(trial);check(trial.install(demo),"actual current 57-song isolated trial controls install")
	var node:Node=await start(0)
	if node==null:quit(1);return
	var leased_stream=node.saved.foundation.stream;var first:String=node.prepared.manifest.source_id;var original:Dictionary=demo.state.snapshot();var record:=Span.start()
	check(node.seek(10.),"actual early cursor");demo.focus=Vector3(-24,.8,-18);demo._update_camera();var built:Dictionary=demo.state.add_house(Vector2(-28,-20));check(built.ok,"actual camera and construction edit while playing");demo._after_edit(built,"house");await settle()
	check(node.prepared.manifest.source_id==first and node.player.playing and node.player.get_playback_position()>10.,"camera and construction never cut the current full song")
	await near_end(node);check(await wait_for(func():return node.sequence.breathing,5000),"real AudioStreamPlayer finished enters natural breath instead of restoring old bank")
	check(not node.player.playing and demo.music._players.foundation.stream is AudioStreamSynchronized and node.saved.foundation.stream==leased_stream,"natural ending keeps one original lease and all old synthesis stopped")
	var all_stopped:=true
	for voice:AudioStreamPlayer in demo.music._players.values():all_stopped=all_stopped and not voice.playing
	check(all_stopped,"actual twelve long players are silent throughout the breath")
	demo.ledger.open_panel();demo.ledger._last_refresh=-500;demo.ledger.refresh();await create_timer(.26).timeout;check("曲尾呼吸留白" in demo.ledger.body.text,"actual existing L page honestly identifies nature-only song breathing");await capture("natural_breath");await key(KEY_ESCAPE)
	var natural_before:int=demo.ambience._forest_frames_pushed;node.set_paused(true);var remaining:float=node.sequence.remaining;await create_timer(1.1).timeout
	check(node.sequence.remaining==remaining and node.sequence.breathing,"pause freezes the natural-breath countdown")
	check(demo.ambience._forest_frames_pushed>natural_before and demo.ambience.players.size()==2,"two existing nature voices continue feeding during the song gap")
	node.set_paused(false);check(await wait_for(func():return node.prepared.manifest.source_id!=first,10000),"prepared next source follows actual finish and breath")
	check(node.player==demo.music._players.foundation and node.player.playing and node.player.get_playback_position()<1. and node.saved.foundation.stream==leased_stream,"next source reuses the identical player and retains original restore stream")
	check(node.sequence.transitions.size()==1 and node.sequence.transitions[0].breath_seconds>=2.5 and node.sequence.transitions[0].breath_seconds<=4.,"measured active breath falls within 2.5-to-4-second design interval")
	check(node.sequence.transitions[0].wall_seconds>node.sequence.transitions[0].breath_seconds+1.,"transition evidence distinguishes explicit pause from active breathing")
	await create_timer(2.).timeout;facts.automatic=node.sequence.transitions.duplicate(true);facts.pcm=Span.finish(record,OUT+"/sequence_Master.wav");check(facts.pcm.ok,"actual source-ending, nature gap and next source PCM non-silent and unclipped")
	root.size=Vector2i(1024,768);demo.ledger.open_panel();await create_timer(.26).timeout;check(demo.ledger.paper.get_global_rect().encloses(trial.stop_button.get_global_rect()) and Rect2(Vector2.ZERO,Vector2(root.size)).encloses(demo.ledger.paper.get_global_rect()),"original 1024 candidate controls and fully opened L panel remain within the viewport");await capture("next_track_1024");await key(KEY_ESCAPE)
	node.stop();check(demo.music._players.foundation.stream==leased_stream,"explicit release restores initial lease after multiple source packets");await process_frame
	var prefs:Dictionary=demo.state.creative_settings.music.duplicate(true);prefs.mode="fixed";prefs.style="warm";check(demo.state.CreationPolicy.set_preferences(demo.state,{"music":prefs}).ok,"actual existing fixed preference")
	node=await start(trial.packs.size()-1)
	if node==null:quit(1);return
	var fixed:String=node.prepared.manifest.source_id;await near_end(node);check(await wait_for(func():return node.sequence.breathing,5000),"fixed song reaches actual full end")
	check(await wait_for(func():return node.sequence.transitions.size()==1,10000) and node.prepared.manifest.source_id==fixed and node.sequence.transitions[0].from==fixed and node.sequence.transitions[0].to==fixed,"fixed mode repeats exactly the same complete source after natural breath")
	facts.fixed=node.sequence.transitions.duplicate(true);await near_end(node);check(await wait_for(func():return node.sequence.breathing,5000),"next complete ending owns one asynchronous successor preparation");var old_id:int=node.get_instance_id()
	var other:=State.new();other.initialize_free();await show(other,Vector2(-22,-20),"换城撤回续播");quiet();check(await wait_for(func():return not is_instance_id_valid(old_id),30000),"new city retires pending next source before publication")
	check(not demo.music.has_meta("game_music") and not demo.music._players.foundation.stream is AudioStreamSynchronized,"retired queue cannot publish its old city's packet")
	var direct:Dictionary=GamePlayer.request(demo.music,trial.packs[0].manifest);check(direct.ok,"original one-shot API still starts without a sequence configuration")
	var direct_node:Node=direct.node;check(await wait_for(func():return direct_node.active,30000),"unconfigured original API actually plays")
	await near_end(direct_node);var direct_id:int=direct_node.get_instance_id();check(await wait_for(func():return not is_instance_id_valid(direct_id),5000),"original unconfigured API naturally finishes and releases instead of entering a new queue")
	check(pool()==voices,"12 long/4 short/6 buses budget unchanged");check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GAME_SEQUENCE_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
