extends "res://tools/check_creation_reference_music_live.gd"
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const Master=preload("res://scripts/audio/city_creation_master_score.gd")
func run()->void:
	OUT="res://验证记录/M84/master_pastoral_20261029/live";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:=State.new();city.initialize_free()
	for i in range(3):city.add_house(Vector2(-25+i*4.,-15))
	city.add_road([Vector2(-27,-13.1),Vector2(-15,-13.1)] as Array[Vector2],"path","none")
	await show(city,Vector2(-21,-15),"田园母曲逐段试听");quiet();demo.life.set_process(false)
	var saved:Dictionary=demo.state.snapshot();var rendered:Dictionary={};var auditions:Array=[]
	check(demo.music.audio_report.get("bank_source")=="precompiled","formal existing bank signature remains valid")
	check(not Import.request_master(demo.music,0,4).ok,"unfinished solo and transition integration remains explicitly guarded")
	for p in range(6):
		var data:=Master.section(p);var requested:=Import.request_master(demo.music,p);check(requested.ok,"real master section queues synth "+str(p))
		check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==data.signature,60000),"worker publishes actual section "+str(p))
		check(await wait_for(func():return demo.music._variation_active.values().any(func(id):return str(id)=="study1/"+data.signature+"/lead"),15000),"original pooled lead adopts section "+str(p))
		check(await wait_for(func():return [["foundation","foundation"],["air","pulse"],["terrace","answer"]].all(func(pair):return demo.music._variation_active.get(pair[0],"")=="study1/"+data.signature+"/"+pair[1]),15000),"all three original support players adopt same master section "+str(p))
		for role:String in ["lead","foundation","pulse","answer"]:
			var id:String="study1/"+data.signature+"/"+role;var stream:AudioStreamWAV=demo.music._harmony_streams[id]
			if not rendered.has(role):rendered[role]=PackedByteArray()
			rendered[role].append_array(stream.data)
			check(stream.mix_rate==22050 and stream.data.size()==1058400,"actual 24 second rendered stem "+str([p,role]))
		var pcm:=await Probe.record(OUT+"/P"+str(p)+"_Master.wav",2.2);check(pcm.ok,"actual speaker mix for section "+str(p));auditions.append(pcm)
		print("MASTER_SECTION_DONE ",p)
	for role:String in rendered:
		var wave:=AudioStreamWAV.new();wave.format=AudioStreamWAV.FORMAT_16_BITS;wave.mix_rate=22050;wave.data=rendered[role];check(wave.save_to_wav(OUT+"/"+role+"_144s.wav")==OK,"offline complete authored stem "+role)
	await capture("master_audition")
	check(demo.state.snapshot()==saved,"preview never rewrites city history or preferences")
	check(pool()==voices,"original twelve long four short six buses and two nature players retained")
	check(Import.Document.read("res://数据/原创谱材/河湾练习_v1/score.json").ok,"old authored schema1 work remains readable")
	Import.discard(demo.music,demo.music.get_meta("authored_score"));check(not demo.music.has_meta("authored_score"),"ephemeral preview retires without saving a new user score")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"auditions":auditions,"seconds":(Time.get_ticks_msec()-began)/1000.,"master_signature":Master.read().signature};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("MASTER_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
