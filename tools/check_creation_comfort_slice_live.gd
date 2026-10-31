extends "res://tools/check_creation_score_playback_live.gd"
var content:="pastoral_comfort_p0_p2_v1"
var reference_report:="res://验证记录/M84/comfort_slice_20261031/render/render.json"
const Internal=preload("res://scripts/audio/city_creation_internal_score.gd")
func reference(section:int)->Dictionary:
	var performances:Array=JSON.parse_string(FileAccess.get_file_as_string(reference_report)).performances
	var identity:="P%d_cross%s"%[section,"_felt" if content in ["pastoral_comfort_p0_p2_v2","pastoral_comfort_p0_p2_c1"] else ""]
	return performances.filter(func(row):return row.id==identity)[0]
func run()->void:
	OUT="res://验证记录/M84/comfort_slice_20261031/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--content="):content=arg.trim_prefix("--content=")
		if arg.begins_with("--reference-report="):reference_report=arg.trim_prefix("--reference-report=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:=State.new();city.initialize_free()
	for i in range(3):city.add_house(Vector2(-28+i*4.,-20))
	city.add_road([Vector2(-30,-18.1),Vector2(-15,-18.1)] as Array[Vector2],"path","none")
	await show(city,Vector2(-24,-20),"P0/P2 配器开发试听");quiet();demo.life.set_process(false)
	print("COMFORT_LIVE city ready");var saved:Dictionary=demo.state.snapshot();var data:=Internal.select(0,{},content);var record:=Span.start()
	check(demo.music.audio_report.get("bank_source")=="precompiled","old bank stays current")
	check(Import.request_internal(demo.music,0,{},content).ok,"public internal v3 request starts real worker")
	check(await wait_for(func():return demo.music.has_meta("authored_score_ready"),60000),"v3 audio and harmony bank actually prepared")
	check(not demo.music.has_meta("authored_score"),"prepared does not claim sounding")
	print("COMFORT_LIVE worker ready");var node:=Playback.ensure(demo.music)
	check(await wait_for(func():return not node.scheduled.is_empty(),30000),"four-role cohort actually scheduled")
	if node.scheduled.is_empty():demo.queue_free();await process_frame;quit(1);return
	var expected:=reference(0);var actual:Dictionary={}
	for stem:String in node.stems:
		var role:=str(node.stems[stem]).get_slice("/",2);var hash:=HashingContext.new();hash.start(HashingContext.HASH_SHA256);hash.update(node.scheduled.targets[stem].data);actual[role]=hash.finish().hex_encode()
	check(expected.roles.keys().all(func(role):return actual.get(role)==expected.roles[role].get("pcm_sha256",expected.roles[role].get("pcm_hash",""))),"independent profile in four actual PCM equal offline source")
	check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==data.signature,10000),"actual boundary commits v3 source")
	check(await wait_for(func():return node.scheduled.is_empty(),3000),"premix returns to stable four streams")
	var cursor:=Playback.cursor(demo.music);check(cursor.orchestration==data.orchestration,"actual cursor identifies delivered warm/flowing/echo/lyrical branches")
	check(demo.music._variation_active.values().count("study1/"+data.signature+"/lead")==1,"one layer3 lead only")
	print("COMFORT_LIVE P0 sounding ",Playback.cursor(demo.music));var trace:Array=[];var until:=Time.get_ticks_msec()+26000
	while Time.get_ticks_msec()<until:
		trace.append(Playback.cursor(demo.music));await create_timer(.25).timeout
	check(trace.any(func(t):return t.position>23.5) and trace.any(func(t):return t.position<.5),"actual P0 loop covers seam on both sides")
	check(trace.all(func(t):return t.signature==data.signature),"actual loop never changes authored branch identity")
	await capture("v3_mixed_p0");facts.mixed_pcm=Span.finish(record,OUT+"/v3_mixed_loop_Master.wav");check(facts.mixed_pcm.ok,"mixed v3 actual speaker PCM remains audible unclipped")
	facts.actual_pcm_sha256=actual;facts.cursor=cursor;facts.trace=trace
	print("COMFORT_LIVE P0 captured");var p2:=Internal.select(2,{},content);record=Span.start()
	check(Import.request_internal(demo.music,2,{},content).ok,"P2 public request")
	check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==p2.signature,60000),"P2 becomes sounding through same pool")
	check(await wait_for(func():return node.scheduled.is_empty(),3000),"P2 stable cohort")
	var p2_reference:=reference(2)
	var p2_hashes:Dictionary={}
	for stem:String in node.stems:
		var role:=str(node.stems[stem]).get_slice("/",2);var hash:=HashingContext.new();hash.start(HashingContext.HASH_SHA256);hash.update(demo.music._players[stem].stream.data);p2_hashes[role]=hash.finish().hex_encode()
	check(p2_reference.roles.keys().all(func(role):return p2_hashes.get(role)==p2_reference.roles[role].get("pcm_sha256",p2_reference.roles[role].get("pcm_hash",""))),"P2 all role PCM matches offline independent profile")
	await create_timer(25.).timeout
	facts.p2_pcm=Span.finish(record,OUT+"/comfort_p2_Master.wav");check(facts.p2_pcm.ok,"P2 actual output audible and unclipped")
	facts.p2_hashes=p2_hashes;await capture("comfort_p2")
	var mute:=Internal.select(2,{"answer":"mute"},content);record=Span.start()
	check(Import.request_internal(demo.music,2,{"answer":"mute"},content).ok,"declared Mute request accepted")
	check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==mute.signature,30000),"Mute reaches actual common boundary")
	check(await wait_for(func():return node.scheduled.is_empty(),3000),"Mute returns to stable empty answer stream")
	var wave:AudioStreamWAV=demo.music._players.terrace.stream
	check(wave.data.count(0)==wave.data.size(),"answer PCM is actual silence without filler notes")
	check(Playback.cursor(demo.music).declared_silence==["answer"],"actual cursor reports explicit silent role")
	facts.mute_pcm=Span.finish(record,OUT+"/v3_to_mute_Master.wav");check(facts.mute_pcm.ok,"Mute transition keeps remaining music audible")
	check(demo.state.snapshot()==saved,"internal preview never writes author state")
	check(Import.request(demo.music,"res://数据/原创谱材/河湾练习_v1/score.json").ok,"old M80 can replace internal v3")
	check(await wait_for(func():return Playback.cursor(demo.music).get("content_id","")=="" and demo.music.has_meta("authored_score"),30000),"old M80 actually takes ownership")
	check(await wait_for(func():return node.scheduled.is_empty(),3000),"M80 stable cohort resumes")
	check(Import.request_internal(demo.music,0,{},content).ok,"second v3 request starts before city replacement")
	var other:=State.new();other.initialize_free();await show(other,Vector2.ZERO,"v3旧任务不入新城");quiet()
	check(await wait_for(func():return demo.music.get_node("AuthoredScore").worker==null,60000),"old v3 worker really ends")
	check(Playback.cursor(demo.music).is_empty() and not demo.music.has_meta("authored_score_ready"),"old v3 result cannot publish into new city")
	check(pool()==voices,"original audio pool remains unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("INTERNAL_SCORE_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
