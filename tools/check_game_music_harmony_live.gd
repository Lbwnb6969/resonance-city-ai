extends "res://tools/check_game_music_live.gd"
const CandidateHarmony=preload("res://scripts/audio/city_creation_game_music_harmony.gd")
func harmony_motion(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.device=92;event.position=at;event.global_position=at;root.push_input(event);await process_frame
func held(down:bool)->void:
	var event:=InputEventKey.new();event.device=92;event.keycode=KEY_P;event.physical_keycode=KEY_P;event.pressed=down;root.push_input(event);await process_frame
func segment_time(data:Dictionary,tonal:bool)->float:
	var rows:Array=data.harmony.segments
	for i in range(2,rows.size()-3):
		if (not rows[i].pitch_classes.is_empty())==tonal and rows[i].pitch_classes==rows[i+1].pitch_classes:return float(i)+.1
	return -1.
func touch(node:Node,label:String,tonal:bool)->Dictionary:
	var before:int=node.cues.events.size();var serial:int=demo.music._pluck_serial;var authored:Dictionary=demo.state.snapshot();await harmony_motion(Vector2(root.size.x-30,180));await held(true);await harmony_motion(demo.camera.unproject_position(Vector3(-28,1.9,-20)))
	check(demo.strum_hold.active() and demo.tool==2,"actual held P borrows original road tool: "+label)
	check(await wait_for(func():return node.cues.events.size()>before,1500),"native held roof touch reaches a real pooled cue: "+label);await held(false)
	if node.cues.events.size()<=before:return {}
	var event:Dictionary=node.cues.events[-1];check(event.unpitched!=tonal and event.source_id==node.prepared.manifest.source_id,"actual cue follows trusted segment or physical fallback: "+label)
	var actual:AudioStreamPlayer
	for voice:AudioStreamPlayer in demo.music._effects:
		if voice.playing and voice.stream.has_meta("candidate_harmony") and voice.stream.get_meta("candidate_harmony")==event:actual=voice;break
	check(actual!=null,"actual audible short slot owns the reported PCM: "+label)
	if actual!=null:
		check((event.midi<0 and event.unpitched) or posmod(int(event.midi),12) in event.pitch_classes,"actual played MIDI belongs to candidate time-line pitch set: "+label);actual.stream.save_to_wav(OUT+"/effect_"+label+".wav")
	check(demo.music._pluck_serial>serial and demo.music._pluck_stream==demo.music._pluck_player.stream and demo.music._pluck_voices.has(demo.music._pluck_player.get_instance_id()),"actual roof voice attribution survives harmony PCM replacement: "+label)
	check(demo.state.snapshot()==authored and not demo.strum_hold.active() and demo.tool==2,"native P releases without author edits or tool change: "+label)
	return event
func request_packet(path:String)->Node:
	var ticket:=GamePlayer.request(demo.music,path);check(ticket.ok,"explicit audited candidate request")
	if not ticket.ok:return null
	var node:Node=ticket.node;check(await wait_for(func():return node.active,30000),"actual full-source packet activates")
	return node if node.active else null
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool();var city:=State.new();city.initialize_free();check(city.add_house(Vector2(-28,-20)).ok,"real source roof");await show(city,Vector2(-28,-20),"候选游标与短音");quiet();demo.select_tool(2);demo.focus=Vector3(-28,.6,-20);demo.zoom=12.;demo.pitch=.85;demo._update_camera();await settle()
	check(demo.music.audio_report.get("bank_source","")=="precompiled","actual cold scene loads compiled native bank without rebuilding synthesis");facts.bank={"source":demo.music.audio_report.get("bank_source"),"load_ms":demo.music.audio_report.get("bank_load_ms"),"codec":demo.music.audio_report.get("bank_codec")}
	var catalog:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/音乐资产/游戏音乐包/20261103_harmony_v1/catalog.json"));var node:Node=await request_packet(catalog.packs[0].manifest)
	if node==null:quit(1);return
	check(not node.prepared.timeline.is_empty(),"actual player receives signature-verified measured timeline");var known:=segment_time(node.prepared.timeline,true);var unknown:=segment_time(node.prepared.timeline,false);check(known>=0. and unknown>=0.,"real composition supplies both stable measured and unresolved sections")
	var record:=Span.start();check(node.seek(known),"real synchronized cursor seeks to measured section");await process_frame;await process_frame
	check(absf(demo.music._playback_clock()-node.player.get_playback_position())<.03 and absf(demo.music.CueGrid.transport_clock(demo.music)-node.player.get_playback_position())<.03,"both actual short clocks read the current full-song cursor")
	facts.known=await touch(node,"known",true);await capture("known_roof")
	check(node.seek(known),"seek for actual construction publication");await process_frame;var prior:int=node.cues.events.size();var built:Dictionary=demo.state.add_house(Vector2(-23,-20));check(built.ok,"actual new house uses original authoring API");demo._after_edit(built,"house");await settle();check(node.cues.events.size()>prior,"complete construction edit publishes an actual candidate-aligned short cue")
	if node.cues.events.size()>prior:
		var note:Dictionary=node.cues.events[-1];check(not note.unpitched and posmod(int(note.midi),12) in note.pitch_classes,"native edit cue uses measured chord rather than old eight-bar bank")
	check(node.seek(unknown),"actual cursor seeks to unresolved section");await process_frame;await process_frame;facts.unknown=await touch(node,"unknown",false)
	node.set_paused(true);var held_clock:float=demo.music._playback_clock();await create_timer(.25).timeout;check(absf(demo.music._playback_clock()-held_clock)<.03 and CandidateHarmony.current(demo.music).unpitched,"pause freezes real cursor and disables stale pitched cue");node.set_paused(false)
	var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/city.json").ok,"actual edited work saves");var reader:=State.new();check(reader.load_city(OUT+"/city.json").ok and reader.snapshot()==saved,"candidate harmony adds no city fields or hidden persistent music edits")
	var leased=node.saved.foundation.stream;node.stop();check(CandidateHarmony.node(demo.music)==null,"explicit stop releases cue ownership in the same frame");await process_frame;check(demo.music._edit_streams.keys().all(func(k):return not str(k).begins_with("candidate_short/")),"retiring candidate removes transient owned note keys")
	var old:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/音乐资产/游戏音乐包/20261103_v1/catalog.json"));node=await request_packet(old.packs[0].manifest)
	if node==null:quit(1);return
	check(node.prepared.timeline.is_empty() and node.seek(known),"old unannotated full-source pack remains playable without fabricated chords");await process_frame;await process_frame;facts.unannotated=await touch(node,"unannotated",false)
	facts.pcm=Span.finish(record,OUT+"/harmony_Master.wav");check(facts.pcm.ok,"actual music plus roof/construction/fallback PCM is non-silent and unclipped");var old_id:int=node.get_instance_id();demo.state.initialize_free();check(not node.valid_context() and CandidateHarmony.node(demo.music)==null,"same State object starting a new city rejects old harmonic context immediately");check(await wait_for(func():return not is_instance_id_valid(old_id),5000),"same-object city reset retires old packet without publication");await process_frame
	check(pool()==voices,"original 12 long/4 short/6 buses stay bounded");check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GAME_HARMONY_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
