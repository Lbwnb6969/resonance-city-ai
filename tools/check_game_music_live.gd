extends "res://tools/check_creation_music_affinity_live.gd"
const GamePlayer=preload("res://scripts/audio/city_creation_game_music_player.gd")
const GameBundle=preload("res://scripts/audio/city_creation_game_music_bundle.gd")
const OldLyria=preload("res://scripts/audio/city_creation_lyria_director.gd")
func checkpoint(label:String)->void:print("GAME_CHECKPOINT ",label)
func game_packet()->Dictionary:return demo.music.get_meta("game_music",{}).duplicate(true)
func run()->void:
	OUT="res://验证记录/M84/game_music_20261103/live_v1"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var catalog:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/音乐资产/游戏音乐包/20261103_v1/catalog.json"))
	var manifest_path:String=catalog.packs[0].manifest
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();checkpoint("scene_ready");var voices:=pool()
	var fixture:=Fixture.courtyard("ring","none");await show(fixture.city,Fixture.ORIGIN+Vector2(3.6,3.6),"同源音乐施工包 · 城市围合与流动");quiet();demo.life.set_process(false);checkpoint("fixture_ready")
	var city:RefCounted=demo.state;var snapshot:Dictionary=city.snapshot();var old_stream=demo.music._players.foundation.stream
	check(fixture.ok and city.roads.is_empty(),"actual unconnected courtyard supplies geometry")
	check(not demo.music.has_meta("game_music"),"production default remains unchanged")
	checkpoint("request");var requested:=GamePlayer.request(demo.music,manifest_path);check(requested.ok,"explicit async request accepted")
	var node:Node=requested.node;node.set_expression(1.,1.);node.set_paused(true)
	check(demo.music._players.foundation.stream==old_stream,"old bank stays active during preparation")
	check(await wait_for(func():return is_instance_valid(node) and node.active,30000),"worker prepares and publishes the same-city packet")
	if not is_instance_valid(node) or not node.active:demo.queue_free();quit(1);return
	await create_timer(.7).timeout
	check(node.player.get_playback_position()<.06 and node.clock==0.,"pause requested during preparation preserves the start cursor")
	node.set_paused(false)
	check(node.prepared.ids.size()==4 and node.player==demo.music._players.foundation,"four same-source streams share one existing pooled player")
	check(not OldLyria.start(demo.music,"unused").ok,"old and new audition owners are mutually exclusive")
	var record:=Span.start();var signature:String=game_packet().signature;var trace:Array=[];var end:=Time.get_ticks_msec()+18000
	while Time.get_ticks_msec()<end:
		await create_timer(.2).timeout;trace.append(game_packet())
	check(game_packet().values.body>.95,"real enclosure slowly warms the body layer")
	check(game_packet().values.motion>.99 and game_packet().values.detail>.99,"explicit flow and craft expressions reach their bounded gains")
	var monotonic:=true
	for i in range(1,trace.size()):monotonic=monotonic and trace[i].position>=trace[i-1].position and trace[i].signature==signature
	check(monotonic,"spatial expression keeps source and musical cursor continuous")
	check(city.snapshot()==snapshot,"audio modulation leaves author state intact")
	var paused_packet:=game_packet();node.set_paused(true);node.set_expression(0.,0.);await create_timer(6.2).timeout
	check(absf(float(game_packet().position)-float(paused_packet.position))<.06,"long pause freezes all source cursors")
	check(game_packet().clock==paused_packet.clock and game_packet().values==paused_packet.values,"long pause freezes observation and all gain envelopes")
	node.set_paused(false);check(node.seek(50.),"one seek addresses the entire synchronized packet");await create_timer(.15).timeout
	check(absf(float(game_packet().position)-50.)<.4,"all layers resume at the requested full-song position")
	demo.music.set_muted(true);await process_frame;await process_frame;check(node.player.volume_linear==0.,"existing mute applies to all adaptive layers");demo.music.set_muted(false)
	check(city.remove_house("h1").ok,"actual State deletion withdraws enclosure");await process_frame;await process_frame
	check(game_packet().spatial_facts.source_ids.is_empty(),"current geometry facts disappear immediately")
	await create_timer(6.3).timeout
	check(is_equal_approx(float(game_packet().values.body),.35) and is_equal_approx(float(game_packet().values.motion),.35) and is_equal_approx(float(game_packet().values.detail),.35),"all color layers return to open baseline within six seconds")
	check(city.undo().ok,"Undo restores actual geometry");await process_frame;await process_frame
	check(not game_packet().spatial_facts.source_ids.is_empty(),"Undo restores source facts without audio restart")
	check(game_packet().signature==signature,"geometry editing and Undo keep content identity intact")
	facts.trace=trace;facts.pcm=Span.finish(record,OUT+"/game_music_Master.wav");check(facts.pcm.ok,"actual WASAPI adaptive output is non-silent and unclipped")
	await capture("adaptive_courtyard");var leased_stream=node.saved.foundation.stream;node.stop()
	check(not demo.music.has_meta("game_music") and demo.music._players.foundation.stream==leased_stream,"explicit stop restores the bank captured at actual activation")
	await process_frame;await process_frame
	check(not demo.music._players.foundation.stream is AudioStreamSynchronized,"normal bank can continue its own prepared variations after release")
	var takeover:=GamePlayer.request(demo.music,manifest_path);check(takeover.ok,"adaptive source starts for phonograph ownership probe")
	var takeover_node:Node=takeover.node
	check(await wait_for(func():return is_instance_valid(takeover_node) and takeover_node.active,30000),"ownership probe becomes active")
	var mix:={"version":1,"position":0.,"mode":-1,"theme_pan":0.,"concert_pan":0.,"tracks":{}}
	for stem:String in demo.music.phonograph.STEMS:mix.tracks[stem]={"bank":"original","key":stem,"db":-20.}
	check(demo.music.phonograph.begin(demo.music,mix).ok,"phonograph explicitly retires adaptive owner before capturing resume bank")
	await process_frame;await process_frame
	check(demo.music.phonograph.active and not demo.music.has_meta("game_music") and not demo.music._players.foundation.stream is AudioStreamSynchronized,"adaptive cleanup cannot overwrite the new phonograph owner")
	demo.music.phonograph.stop(demo.music);await process_frame
	check(not demo.music._players.foundation.stream is AudioStreamSynchronized,"phonograph stop cannot resurrect an orphan adaptive stream")
	var pending:=GamePlayer.request(demo.music,manifest_path);check(pending.ok,"second async request starts")
	var other:=State.new();other.initialize_free();await show(other,Vector2.ZERO,"换城撤回旧音乐");quiet()
	check(await wait_for(func():return demo.music.get_node_or_null("GameMusicPlayer")==null,30000),"city replacement rejects a pending old source")
	check(not demo.music.has_meta("game_music") and not demo.music._players.foundation.stream is AudioStreamSynchronized,"pending music never publishes into a new city")
	# Automatic spatial colors on actual unconnected, non-commercial geometry.
	var inland:=State.new();inland.initialize_free();check(inland.add_house(Fixture.ORIGIN).ok,"automatic inland source house")
	check(inland.add_road([Fixture.ORIGIN+Vector2(-4,3),Fixture.ORIGIN+Vector2(0,4),Fixture.ORIGIN+Vector2(4,3)] as Array[Vector2],"path","none").ok,"automatic inland curved road")
	await show(inland,Fixture.ORIGIN,"内陆曲路 · 自动流动");quiet();demo.life.set_process(false);inland=demo.state
	checkpoint("automatic_inland");var auto_ticket:=GamePlayer.request(demo.music,manifest_path);var auto:Node=auto_ticket.node
	check(await wait_for(func():return is_instance_valid(auto) and auto.active,30000),"automatic spatial packet activates")
	var auto_record:=Span.start();demo.vegetation_drawing=true
	await create_timer(7.).timeout
	check(auto.expression.flow==0. and auto.values.motion==.35,"continuous native sculpt signal freezes automatic observation")
	demo.vegetation_drawing=false
	for i in range(3):
		demo.music.attention.notify_sculpt_action(0.);await create_timer(1.).timeout
	check(auto.expression.flow==0.,"repeated discrete edits at stopped old clock keep observation frozen")
	await create_timer(7.).timeout
	check(auto.values.motion==.35,"three second idle plus six second observation not bypassed")
	await create_timer(12.).timeout
	check(auto.spatial_facts.flow>.55 and auto.values.motion>.76 and not auto.manual_expression,"real inland curve automatically colors motion")
	var auto_signature:String=auto.prepared.signature;var auto_clock:float=auto.clock
	auto.set_paused(true);await create_timer(.5).timeout
	check(auto.clock==auto_clock,"automatic observation pauses with playback");auto.set_paused(false)
	check(inland.remove_road(inland.roads[0].id).ok,"automatic source deleted")
	await create_timer(6.3).timeout
	check(auto.values.motion==.35 and auto.spatial_facts.flow_sources.is_empty(),"automatic flow withdraws and expires within six seconds")
	check(inland.undo().ok,"automatic source Undo");await process_frame;await process_frame
	check(not auto.spatial_facts.flow_sources.is_empty() and auto.prepared.signature==auto_signature,"Undo restores facts without replacing audio")
	facts.automatic_pcm=Span.finish(auto_record,OUT+"/automatic_Master.wav");check(facts.automatic_pcm.ok,"automatic spatial WASAPI output non-silent and unclipped");await capture("automatic_inland")
	auto.stop();await process_frame
	var artisan:RefCounted
	for f:Dictionary in Fixture.other_kinds():
		if f.kind=="artisan":artisan=f.city
	check(artisan.remove_road(artisan.roads[0].id).ok,"automatic craft has no road eligibility")
	await show(artisan,Fixture.ORIGIN,"匠造前庭 · 自动点缀");quiet();demo.life.set_process(false)
	var craft_ticket:=GamePlayer.request(demo.music,manifest_path);var craft_node:Node=craft_ticket.node
	check(await wait_for(func():return is_instance_valid(craft_node) and craft_node.active,30000),"automatic craft packet activates")
	await create_timer(21.).timeout
	check(craft_node.spatial_facts.craft>=.55 and craft_node.values.detail>.75,"real unconnected forecourt automatically colors detail")
	await capture("automatic_artisan");craft_node.stop();await process_frame
	var bad:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(manifest_path));bad.layers[3].sha256="bad"
	var invalid_path:=OUT+"/invalid_layer.json";var file:=FileAccess.open(invalid_path,FileAccess.WRITE);file.store_string(JSON.stringify(bad));file.close()
	var fallback:=GameBundle.read(invalid_path);check(fallback.ok and fallback.fallback and fallback.stream.stream_count==1,"damaged layer falls back to verified full mix")
	check(not GameBundle.read(OUT+"/missing.json").ok,"missing packet rejects without replacing the source")
	check(pool()==voices,"12 long / 4 short / 6 buses / 2 nature pool stays unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains byte-identical")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.,"listening_approved":false,"default_changed":false}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GAME_MUSIC_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
