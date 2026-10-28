extends "res://tools/check_creation_reference_music_live.gd"
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
func run()->void:
	OUT="res://验证记录/M80/live"
	var score_path:="res://数据/原创谱材/河湾练习_v1/score.json"
	var record_seconds:=73.
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--score="):score_path=arg.trim_prefix("--score=")
		if arg.begins_with("--record-seconds="):record_seconds=float(arg.trim_prefix("--record-seconds="))
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var city:=State.new();city.initialize_free()
	for i in range(5):city.add_house(Vector2(-25+i*3.,-15))
	city.CreationPolicy.set_preferences(city,{"music":{"mode":"fixed","style":"deep_flow","seed":74001}})
	await show(city,Vector2(-19,-15),"原创JSON谱材正式播放");quiet();demo.ui_layer.hide()
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source")=="precompiled","actual GL and formal current bank")
	var result:Dictionary=Import.request(demo.music,score_path);check(result.ok,"JSON queues production synth worker")
	check(await wait_for(func():return demo.music.has_meta("authored_score"),20000),"current revision publishes imported authored score")
	var signature:String=demo.music.get_meta("authored_score",{}).get("signature","")
	check(await wait_for(func():return demo.music._variation_active.values().any(func(id):return str(id).begins_with("study1/"+signature+"/lead")),15000),"original pooled lead actually adopts the JSON stream")
	await capture("authored_json_city")
	var recording:=await record_recipe("authored_study",record_seconds)
	check(recording.samples.all(func(row):return row.score_signature==signature and row.voices.values().any(func(v):return str(v.stream)=="study1/"+signature+"/lead")),"recording event samples match actual imported score identity")
	var invalid:Dictionary=Import.Document.read(score_path).document;invalid.events[0].midi=128
	var bad:=OUT+"/invalid_score.json";FileAccess.open(bad,FileAccess.WRITE).store_string(JSON.stringify(invalid))
	check(not Import.request(demo.music,bad).ok and demo.music.get_meta("authored_score").signature==signature,"invalid import preserves current authored music")
	var work:Dictionary=await demo.gallery._capture("原创谱材预览期间收藏","isolated_M80")
	var cold_library:=preload("res://scripts/world/city_creation_collection.gd").new();cold_library.directory=demo.collection_directory
	var cold_work:Dictionary=cold_library.read(str(work.get("id","")))
	check(work.ok and cold_work.ok and cold_work.phonograph_mix.tracks.values().all(func(row):return not str(row.key).begins_with("study1/")),"actual gallery capture cold reads a reconstructible city mix")
	Import.discard(demo.music,demo.music.get_meta("authored_score"));demo.music._biome_mode=demo.music.Palette.for_city(demo.state)
	check(await wait_for(func():return demo.music.phonograph.begin(demo.music,cold_work.phonograph_mix).ok,20000),"persisted work actually plays after ephemeral imported bank is removed")
	demo.music.phonograph.stop(demo.music)
	var saved:Dictionary=demo.state.snapshot();var reader:=State.new();check(demo.state.save_city(OUT+"/city.json").ok and reader.load_city(OUT+"/city.json").ok and reader.snapshot()==saved,"tool preview never changes city schema or user preference")
	check(pool()==voices and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"formal12long4short6bus2nature and personal save unchanged")
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"score_signature":signature,"recording":recording},"\t",true,true))
	print("AUTHORED_STUDY_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"signature":signature,"pcm_seconds":recording.pcm_seconds,"wall_seconds":recording.wall_seconds}));demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
