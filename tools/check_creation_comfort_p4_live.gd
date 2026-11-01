extends "res://tools/check_creation_score_playback_live.gd"
## Explicit developer requests; no automatic 120s/144s transport is claimed.
const Internal=preload("res://scripts/audio/city_creation_internal_score.gd")
const IDS:=["pastoral_comfort_p0_p4_b1","pastoral_comfort_p0_p4_c1"]
var reference_report:="res://验证记录/M84/comfort_p4_20261101/cpu/report.json"
func pcm_hash(bytes:PackedByteArray)->String:
	var h:=HashingContext.new();h.start(HashingContext.HASH_SHA256);h.update(bytes);return h.finish().hex_encode()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--reference-report="):reference_report=arg.trim_prefix("--reference-report=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):
		push_error("isolated session and new evidence directory required");quit(1);return
	var source:Variant=JSON.parse_string(FileAccess.get_file_as_string(reference_report))
	if not source is Dictionary or not source.get("ok",false):
		push_error("successful independent CPU reference required");quit(1);return
	DirAccess.make_dir_recursive_absolute(OUT);root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:=State.new();city.initialize_free();city.add_house(Vector2(-24,-20))
	await show(city,Vector2(-24,-20),"P4 独立候选试听");quiet();demo.life.set_process(false)
	var saved:Dictionary=demo.state.snapshot();facts.transitions=[]
	check(DisplayServer.get_name()!="headless" and AudioServer.get_driver_name()!="Dummy","actual display and audio mixer")
	check(demo.music.audio_report.get("bank_source")=="precompiled","original bank kept")
	for id:String in IDS:
		for section:int in [3,4]:
			var data:=Internal.select(section,{},id);var record:=Span.start()
			check(Import.request_internal(demo.music,section,{},id).ok,"explicit public preview request")
			var adopted:=await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==data.signature,60000)
			check(adopted,"requested section actually becomes sounding")
			if not adopted:demo.queue_free();await process_frame;quit(1);return
			var node:=Playback.ensure(demo.music)
			check(await wait_for(func():return node.scheduled.is_empty(),3000),"cohort reaches stable four streams")
			var matches:Array=source.performances.filter(func(row):return row.id=="%s_P%d_cross"%[id,section])
			var hashes:={}
			for stem:String in node.stems:
				var role:=str(node.stems[stem]).get_slice("/",2);hashes[role]=pcm_hash(demo.music._players[stem].stream.data)
			check(matches.size()==1 and matches[0].roles.keys().all(func(role):return matches[0].roles[role].pcm_sha256==hashes.get(role,"")),"actual four PCM match independent production synthesis")
			var cursor:=Playback.cursor(demo.music)
			check(cursor.section==section and cursor.content_id==id and cursor.orchestration==data.orchestration,"played context identifies correct section and variant")
			check(demo.music._variation_active.values().count("study1/"+data.signature+"/lead")==1,"exactly one actual adopted Lead")
			# P4 gets a full 24s loop, including both authored rest bars.
			await create_timer(25. if section==4 else 1.).timeout
			var pcm:=Span.finish(record,OUT+"/"+id+"_P"+str(section)+"_Master.wav")
			check(pcm.ok,"actual transition/loop output audible and unclipped")
			facts.transitions.append({"id":id,"section":section,"cursor":cursor,"hashes":hashes,"pcm":pcm})
			if section==4:await capture(id+"_P4")
	var mute:=Internal.select(4,{"answer":"mute"},IDS[1])
	check(Import.request_internal(demo.music,4,{"answer":"mute"},IDS[1]).ok,"P4 Mute request")
	check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==mute.signature,60000),"P4 Mute actually adopted")
	check(await wait_for(func():return Playback.ensure(demo.music).scheduled.is_empty(),3000),"Mute stable")
	var silent:AudioStreamWAV=demo.music._players.terrace.stream
	check(silent.data.count(0)==silent.data.size(),"actual P4 Answer is zero PCM")
	await p_key(true);await hover_house("h1");await create_timer(.4).timeout;await p_key(false)
	check(demo.music.get_meta("held_strum",{}).get("harmony_signature","")==mute.signature,"native P feedback follows new P4 harmony")
	check(demo.state.snapshot()==saved,"preview preserves authored city")
	check(pool()==voices and voices.long.size()==12 and voices.short.size()==4 and voices.buses==6 and voices.nature.size()==2,"original pool identities and budgets remain")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.,"listening_pass":false,"scope":"Explicit section changes and actual mixer capture; no automatic sequence transport or subjective listening claim"}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("COMFORT_P4_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
