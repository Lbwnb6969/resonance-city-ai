extends "res://tools/check_creation_close_life_audio_live.gd"
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const Master=preload("res://scripts/audio/city_creation_master_score.gd")
const Cues=preload("res://scripts/audio/city_creation_score_cue_bank.gd")
func touch(kind:String,data:Dictionary)->Dictionary:
	await motion(Vector2(-30,-12));await create_timer(.25).timeout
	var previous:Dictionary=demo.music.get_meta("world_pluck",{}).duplicate(true)
	var record:=Span.start();var shorts:=short_recorders()
	await motion(Vector2(-26,-14) if kind=="tree" else Vector2(-18,-14))
	check(await wait_for(func():return demo.music.get_meta("world_pluck",{})!=previous and demo.music.get_meta("world_pluck",{}).get("kind","")==kind,2000),"native pointer enters actual "+kind+" cue")
	var event:Dictionary=demo.music.get_meta("world_pluck",{}).duplicate(true);var wave:AudioStreamWAV;var voice:AudioStreamPlayer
	for player:AudioStreamPlayer in demo.music._effects:
		if player.get_meta("creation_voice_serial",-1)==event.get("serial",-2) and player.stream==demo.music._harmony_streams.get(str(event.get("stream_key",""))):wave=player.stream;voice=player;break
	check(wave!=null and wave.get_meta("master_score_signature","")==data.signature,"actual original short player owns regenerated mother cue "+kind)
	var notes:Array=wave.get_meta("master_cue_notes",[]) if wave!=null else []
	check(notes.size()==2 and notes.all(func(n):return data.harmony[int(event.bar)].any(func(c):return posmod(int(c)-int(n.midi),12)==0)),"both actual polyphonic touch notes use current mother chord "+kind)
	if wave!=null:event.notes=notes;event.stream_id=wave.get_instance_id();event.player_id=voice.get_instance_id()
	await create_timer(.9).timeout
	event.pcm=Span.finish(record,OUT+"/mode"+str(data.document.harmony_mode)+"_"+kind+"_Master.wav");event.buses=end_short(shorts,"mode"+str(data.document.harmony_mode)+"_"+kind)
	check(event.pcm.ok and event.buses.any(func(b):return b.peak>.00001),"actual complete Master and nonzero short PCM "+kind)
	return event
func run()->void:
	OUT="res://验证记录/M84/composite_harmony_20261029/live_initial"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var original_pool:=pool()
	var city:=State.new();city.initialize_free();var built:=true
	for at:Vector2 in [Vector2(-28,-20),Vector2(-24.4,-20),Vector2(-20.8,-20)]:built=city.add_house(at).ok and built
	built=city.add_road([Vector2(-30,-18.1),Vector2(-18,-18.1)] as Array[Vector2],"path","none").ok and built
	built=city.place_plant(Vector2(-26,-14),"golden_tree").ok and built;built=city.add_water([Vector2(-18,-14)] as Array[Vector2],3.2,"pond").ok and built
	check(built,"actual houses / road / dry tree / pond built through public API")
	await show(city,Vector2(-23,-17),"母曲复音提示");quiet();demo.life.set_process(false);demo.zoom=24.;demo.pitch=.95;demo._update_camera();demo.select_tool(4)
	var saved:Dictionary=demo.state.snapshot();var originals:Dictionary=demo.music._harmony_streams.duplicate();facts.modes=[]
	check(demo.music.audio_report.get("bank_source")=="precompiled","original formal bank and signature remain valid")
	check(not Import.request_master(demo.music,0,4).ok,"public multi-mode guard remains while global transitions and boundary cues are unfinished")
	for mode in [4,8,0]:
		var data:=Master.section(0,mode);var started:=Time.get_ticks_msec()
		check(Import._request_data(demo.music,data).ok,"existing production worker queues long roles plus short catalogue "+str(mode))
		check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==data.signature,60000),"same epoch publishes complete rendered catalogue "+str(mode))
		check(demo.music.get_meta("score_cue_originals",{}).size()==320,"only one current 320-wave catalogue retains originals "+str(mode))
		var peer:Dictionary=demo.music.BankCache.load_bank()
		check(peer.harmony.values().all(func(w):return not w.has_meta("master_score_signature")) and peer.harmony.keys().all(func(k):return not str(k).begins_with("study1/")),"another bank reader never sees this owner's short or long preview waves "+str(mode))
		check(await wait_for(func():return demo.music._variation_active.values().has("study1/"+data.signature+"/lead") and [["foundation","foundation"],["air","pulse"],["terrace","answer"]].all(func(pair):return demo.music._variation_active.get(pair[0],"")=="study1/"+data.signature+"/"+pair[1]),15000),"all four original long players adopt current mother "+str(mode))
		if mode==4:check(await wait_for(func():return Cues.Grid.bar(Cues.Grid.transport_clock(demo.music))==1,26000),"real transport reaches mapped Em7 second bar")
		var events:Array=[]
		for kind:String in ["water","tree"]:events.append(await touch(kind,data))
		facts.modes.append({"mode":mode,"signature":data.signature,"preparation_and_test_seconds":(Time.get_ticks_msec()-started)/1000.,"events":events})
		if mode==4:await capture("mode4_actual_water_and_tree")
		check(demo.state.snapshot()==saved,"actual pointer music never edits author content or historical ledgers "+str(mode))
		print("COMPOSITE_MODE_DONE ",mode)
	Import.discard(demo.music,demo.music.get_meta("authored_score"))
	check(originals.keys().all(func(k):return not str(k).get_slice("/",0).is_valid_int() or demo.music._harmony_streams[k]==originals[k]),"all ten original mode catalogues restore exact original stream identities")
	check(not demo.music.has_meta("score_cue_originals") and demo.music._edit_streams.values().all(func(w):return not w.has_meta("master_score_signature")),"retire clears original snapshots and all active short aliases")
	check(Import._request_data(demo.music,Master.section(1,4)).ok,"real background job starts before city swap")
	var legacy:=State.new();legacy.initialize();await show(legacy,Vector2(-5,0),"过期结果撤回");quiet();demo.life.set_process(false)
	var reader:Node=demo.music.get_node("AuthoredScore");check(await wait_for(func():return reader.worker==null,60000),"same live worker completes after city replacement")
	check(not demo.music.has_meta("authored_score") and not demo.music.has_meta("score_cue_originals") and demo.music._harmony_streams.values().all(func(w):return not w.has_meta("master_score_signature")),"stale complete short catalogue cannot publish into replacement city")
	check(pool()==original_pool,"original twelve long four short six buses two nature players unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes untouched")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SCORE_CUE_BANK_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
