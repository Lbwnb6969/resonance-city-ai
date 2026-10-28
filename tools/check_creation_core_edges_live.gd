extends "res://tools/check_creation_core_music_live.gd"
const Fixture=preload("res://tests/test_city_creation_civic_supply.gd")
func publish(result:Dictionary)->void:
	check(result.ok,"actual edge transaction");demo._after_edit(result,"history");await settle();quiet()
func record_edge(label:String,seconds:float)->void:
	mark(label);var effect:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,effect);effect.set_recording_active(true);await observe(seconds)
	effect.set_recording_active(false);var wave:AudioStreamWAV=effect.get_recording();check(wave.save_to_wav(OUT+"/"+label+".wav")==OK,"edge Master "+label)
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==effect:AudioServer.remove_bus_effect(0,i)
func run()->void:
	OUT="res://验证记录/M79/edges"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;origin=Time.get_ticks_usec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	var city:=Fixture.fixture();city.creative_settings=city.CreationPolicy.Save.defaults()
	await show(city,Vector2(-26,-20),"真实道路声部关系");quiet();preference("fixed","deep_flow");await observe(32.)
	var plan:Dictionary=demo.music.get_meta("orchestration_plan",{}).duplicate(true)
	check(plan.response and plan.context.peers.size()>0,"actual published street graph enables response")
	await record_edge("connected_response",9.)
	var before:Dictionary=demo.state.snapshot()
	for id:String in ["r2","r3"]:await publish(demo.state.remove_road(id))
	await observe(4.);var disconnected:Dictionary=demo.music.get_meta("orchestration_plan",{}).duplicate(true)
	check(not disconnected.response and disconnected.context.peers.is_empty() and disconnected.style==plan.style,"only removal of actual roads changes response context, retains fixed subject")
	await record_edge("disconnected_response",9.)
	await publish(demo.state.undo());await publish(demo.state.undo());await publish(demo.state.redo());await publish(demo.state.undo())
	check(demo.state.roads==before.roads,"quick UndoRedo restores actual road graph exactly")
	var leader:String=demo.music.emergence.score.get("source_id","")
	check(not leader.is_empty(),"current real lead has an owner")
	if not leader.is_empty():await publish(demo.state.remove_house(leader))
	await observe(8.)
	check(demo.music.emergence.score.get("source_id","")!=leader,"removing actual owner elects a remaining house")
	await publish(demo.state.undo());await observe(5.)
	# Pause the actual tree; the audio clock is explicitly paused along with pooled voices.
	var clock:float=demo.music._playback_clock()
	for player:AudioStreamPlayer in demo.music._players.values():player.stream_paused=true
	await create_timer(.5).timeout
	check(absf(demo.music._playback_clock()-clock)<.1,"pause holds shared audio transport")
	for player:AudioStreamPlayer in demo.music._players.values():player.stream_paused=false
	await observe(4.);check(demo.music._playback_clock()>clock,"resume advances shared transport")
	# Native Life invitation, actual attendance and playback; no accelerated elapsed.
	await publish(demo.state.set_house_role("h1","venue"));demo.life.set_process(true)
	var invite:Dictionary=demo.life.invite_concert("h1");check(invite.ok,"actual connected venue accepts invitation")
	var played:=false;var deadline:=Time.get_ticks_msec()+90000
	while Time.get_ticks_msec()<deadline:
		await observe(.2)
		if demo.music.concert_active:played=true
		if played and not demo.music.concert_active:break
	check(played and not demo.music.concert_active,"real concert takes priority and completes")
	demo.life.set_process(false);await observe(10.)
	check(str(demo.music._variation_active.get(demo.music.emergence.score.get("lead_track",""),"")).begins_with("core1/deep_flow/"),"saved fixed style resumes after actual performance")
	# Move through actual scenes and restore the same authored preference file.
	var path:=OUT+"/cold_city.json";check(demo.state.save_city(path).ok,"edge authored city stored")
	for at:Vector2 in [Vector2(-30,-22),Vector2(-18,-17),Vector2(-26,-20)]:demo.focus=Vector3(at.x,.8,at.y);demo._update_camera();await observe(4.)
	check(demo.music.get_meta("orchestration_plan",{}).get("style")=="deep_flow","camera traversal keeps fixed subject")
	var cold:=State.new();check(cold.load_city(path).ok,"separate State loads saved preference")
	await show(cold,Vector2(-26,-20),"偏好冷读");quiet();await observe(8.)
	check(Prefs.preferences(demo.state).style=="deep_flow","reopened city retains fixed style")
	var empty:=State.new();empty.initialize_free();await show(empty,Vector2(-25,-20),"空城静听");quiet();await observe(3.)
	check(not demo.music.daily_source().audible,"empty city has no artificial melody owner")
	await publish(demo.state.add_house(Vector2(-25,-20)));await observe(4.)
	check(demo.music.daily_source().audible,"first native house has the existing response")
	check(trace.all(func(row):return row.leads<=1 and row.pulses<=1),"edge snapshots retain unique audible owner and primary pulse")
	check(pool()==voices and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"edges preserve voice pool and personal save")
	await capture("edge_world")
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"trace":trace,"markers":marks,"connected":plan,"disconnected":disconnected},"\t",true,true))
	print("CORE_EDGES_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
