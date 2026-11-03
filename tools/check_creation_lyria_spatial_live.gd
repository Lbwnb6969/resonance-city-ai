extends "res://tools/check_creation_music_affinity_live.gd"
const Lyria=preload("res://scripts/audio/city_creation_lyria_director.gd")
const LyriaBundle=preload("res://scripts/audio/city_creation_lyria_bundle.gd")
var manifest_path:=""
func lyria_packet()->Dictionary:return demo.music.get_meta("lyria_spatial_preview",{}).duplicate(true)
func run()->void:
	OUT="res://验证记录/M84/lyria_spatial_20261102/live_v1"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--bundle="):manifest_path=arg.trim_prefix("--bundle=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var fixture:=Fixture.courtyard("ring","none")
	await show(fixture.city,Fixture.ORIGIN+Vector2(3.6,3.6),"同源音乐 · 未接路院落");quiet();demo.life.set_process(false)
	var city:RefCounted=demo.state;var snapshot:Dictionary=city.snapshot()
	check(fixture.ok and city.roads.is_empty(),"real unconnected courtyard fixture")
	check(not demo.music.has_meta("lyria_spatial_preview"),"default remains original bank")
	var loaded:=LyriaBundle.read(manifest_path)
	check(loaded.ok and not loaded.fallback,"hash-validated stereo bundle loads")
	if not loaded.ok:demo.queue_free();quit(1);return
	check(loaded.stream.stream_count==2 and loaded.stream.get_sync_stream(0).data.size()==loaded.frames*4,"two full-length stereo streams share one synchronized playback")
	var recording:=Span.start()
	check(Lyria.start(demo.music,manifest_path).ok,"explicit sample borrows an existing pooled player")
	var node:Node=demo.music.get_node("LyriaSpatialPreview");var original_player:AudioStreamPlayer=demo.music._players.foundation
	var trace:Array=[];var end:=Time.get_ticks_msec()+17000;var next:=0
	while Time.get_ticks_msec()<end:
		await process_frame
		if Time.get_ticks_msec()<next:continue
		next=Time.get_ticks_msec()+200;trace.append(lyria_packet())
	print("LYRIA_DIAGNOSTIC ",lyria_packet()," stop=",demo.music.get_meta("lyria_preview_stop_reason","none"))
	check(lyria_packet().get("enclosure",0.)==1. and lyria_packet().get("color_gain",0.)>.96,"actual geometry slowly changes same-source color layer")
	if lyria_packet().is_empty():
		FileAccess.open(OUT+"/failure.json",FileAccess.WRITE).store_string(JSON.stringify({"failures":failures,"stop_reason":demo.music.get_meta("lyria_preview_stop_reason","")}));demo.queue_free();await process_frame;quit(1);return
	check(trace.all(func(p):return p.get("source_sha256","")==loaded.manifest.source_sha256),"source identity stays fixed throughout spatial modulation")
	var monotonic:=true
	for i in range(1,trace.size()):monotonic=monotonic and float(trace[i].position)>=float(trace[i-1].position)
	check(monotonic and original_player==demo.music._players.foundation and original_player.stream==node.prepared.stream,"shared cursor never restarts during enclosure change")
	check(city.snapshot()==snapshot,"spatial audition does not write city state")
	var before_pause:float=original_player.get_playback_position();var envelope_before:float=node.envelope_seconds;var color_before:float=lyria_packet().color_gain;node.set_paused(true);await create_timer(6.2).timeout
	check(absf(original_player.get_playback_position()-before_pause)<.06,"one player pauses both stems together")
	check(is_equal_approx(node.envelope_seconds,envelope_before) and is_equal_approx(float(lyria_packet().color_gain),color_before),"long pause freezes spatial observation and color envelope")
	node.set_paused(false);demo.music.set_muted(true);await process_frame;await process_frame
	check(original_player.volume_linear==0.,"existing mute controls the audition")
	demo.music.set_muted(false)
	check(city.remove_house("h1").ok,"remove actual enclosure")
	await process_frame;await process_frame
	check(lyria_packet().envelope.current_source_ids.is_empty(),"deleted geometry withdraws current source facts")
	await create_timer(6.3).timeout
	check(is_equal_approx(float(lyria_packet().color_gain),.4),"color returns to complete open baseline without cutting music")
	check(city.undo().ok,"Undo restores enclosure");await process_frame;await process_frame
	check(not lyria_packet().envelope.current_source_ids.is_empty(),"Undo restores geometry facts")
	facts.trace=trace;facts.pcm=Span.finish(recording,OUT+"/lyria_spatial_Master.wav")
	check(facts.pcm.ok,"actual WASAPI output is audible and unclipped")
	await capture("same_source_courtyard")
	var other:=State.new();other.initialize_free();await show(other,Vector2.ZERO,"换城回退旧音乐");quiet();await process_frame
	check(not demo.music.has_meta("lyria_spatial_preview") and demo.music.get_node_or_null("LyriaSpatialPreview")==null,"city replacement retires old bundle and source facts")
	check(demo.music._players.foundation.stream!=loaded.stream and not demo.music._players.foundation.stream is AudioStreamSynchronized,"old synchronized source cannot cross into new city")
	var bad:Dictionary=loaded.manifest.duplicate(true);bad.stems[1].sha256="bad"
	var fallback_path:=OUT+"/invalid_stem_manifest.json";var file:=FileAccess.open(fallback_path,FileAccess.WRITE);file.store_string(JSON.stringify(bad));file.close()
	var fallback:=LyriaBundle.read(fallback_path);check(fallback.ok and fallback.fallback and fallback.stream.stream_count==1,"invalid stem falls back to verified full mix")
	check(not LyriaBundle.read(OUT+"/missing_manifest.json").ok,"missing bundle rejects without changing playback")
	check(pool()==voices,"original 12 long / 4 short / 6 buses / 2 nature pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains byte-identical")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.,"listening_approved":false,"default_changed":false}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("LYRIA_SPATIAL_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
