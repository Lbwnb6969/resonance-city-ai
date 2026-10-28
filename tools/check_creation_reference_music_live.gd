extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
## Capture existing player-facing recipes. No gain overrides or reference samples.
func record_recipe(label:String,seconds:float)->Dictionary:
	var effect:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,effect);effect.set_recording_active(true)
	var began:=Time.get_ticks_usec();var next:=0.;var samples:Array=[];var start_clock:float=demo.music._playback_clock()
	while (Time.get_ticks_usec()-began)/1000000.<seconds:
		await process_frame
		var elapsed:float=(Time.get_ticks_usec()-began)/1000000.
		if elapsed<next:continue
		next+=1.
		var voices:Dictionary={}
		for track:String in demo.music._players:
			var player:AudioStreamPlayer=demo.music._players[track]
			voices[track]={"gain_db":player.volume_db,"stream":str(demo.music._variation_active.get(track,"original"))}
		samples.append({"seconds":elapsed,"clock":demo.music._playback_clock(),"source":demo.music.daily_source(),"score_signature":demo.music.get_meta("authored_score",{}).get("signature","bank"),"score_id":demo.music.get_meta("authored_score",{}).get("document",{}).get("id",""),"section":demo.music.get_meta("orchestration_plan",{}).duplicate(true),"initialization_fade":elapsed<1.5,"form":demo.music.ClusterHarmony.Tide.LongForm.view(demo.music._playback_clock(),demo.music.emergence.score),"harmony_mode":demo.music.harmony_mode(),"roles":demo.music.get_meta("chamber_roles",{}).duplicate(true),"voices":voices})
		if floori(elapsed)%24==0:print("REFERENCE_MUSIC_CAPTURE ",label," ",floori(elapsed),"s")
	effect.set_recording_active(false);var stopped:=Time.get_ticks_usec();var end_clock:float=demo.music._playback_clock();var wave:AudioStreamWAV=effect.get_recording();var peak:=0.;var clipped:=0
	check(wave!=null and wave.save_to_wav(OUT+"/"+label+".wav")==OK,"actual Master saved: "+label)
	if wave!=null:
		var pcm:=wave.data
		for i in range(pcm.size()/2):var value:=absi(pcm.decode_s16(i*2));peak=maxf(peak,value/32768.);clipped+=int(value>=32767)
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==effect:AudioServer.remove_bus_effect(0,i)
	var pcm_seconds:float=float(wave.data.size())/float(wave.mix_rate*(4 if wave.stereo else 2)) if wave!=null else 0.
	var result:={"requested_seconds":seconds,"seconds":pcm_seconds,"pcm_seconds":pcm_seconds,"wall_seconds":(stopped-began)/1000000.,"alignment":"transport and explicit section markers; not file-zero alignment","peak":peak,"clipped_samples":clipped,"start_clock":start_clock,"end_clock":end_clock,"samples":samples,"source_signature":demo.music.BankCache.source_signature()}
	# Dummy callbacks advance less PCM than wall time; report the measured length.
	check(result.seconds>seconds*.95 and peak>.01 and clipped==0,"continuous audible unclipped production recording: "+label)
	check(samples.filter(func(row):return not row.initialization_fade).all(func(row):return row.source.get("audible",false)),"sampled daily sources audible after initial gain fade: "+label)
	FileAccess.open(OUT+"/"+label+"_runtime.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	return result
func run()->void:
	OUT="res://验证记录/音乐参考_20261027/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var city:=State.new();city.initialize_empty()
	for i in range(5):check(city.add_house(Vector2(-30+i*3.,-20)).ok,"public five-house recipe")
	var road:Array[Vector2]=[Vector2(-33,-17.5),Vector2(-15,-17.5)];check(city.add_road(road).ok,"actual street connecting the five-house scene")
	await show(city,Vector2(-24,-20),"参考音乐组合对照");quiet();demo.life.set_process(true);demo.ui_layer.hide();demo.zoom=26.;demo._set_light_phase(0);demo._update_camera()
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source","")=="precompiled","real OpenGL and production precompiled bank")
	check(await wait_for(func():return demo.music.daily_source().get("audible",false)),"ordinary five-house melody becomes audible")
	await capture("day_five_house_recipe")
	var day:Dictionary=await record_recipe("day_andante_26m",48.)
	for house:Dictionary in demo.state.houses:check(demo.state.set_house_temperament(str(house.id),"largo").ok,"public largo house temperament")
	demo._after_edit({"ok":true,"message":"五屋慢板夜曲"},"history");await settle();quiet();demo.life.set_process(true);demo.ui_layer.hide();demo.zoom=14.;demo._set_light_phase(2);demo._update_camera()
	check(await wait_for(func():return demo.music._variation_active.values().any(func(id):return str(id).ends_with("/nocturne")),28000),"actual existing nocturne bank swapped onto original player")
	await capture("night_largo_14m_recipe")
	var night:Dictionary=await record_recipe("night_largo_14m",148.8)
	var world:Dictionary=demo.state.snapshot();var reader:=State.new()
	check(demo.state.save_city(OUT+"/recipe_city.json").ok and reader.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/recipe_city.json"))).ok and reader.snapshot()==world,"reference recipe is a normal cold-loadable city")
	check(pool()==voices and voices.long.size()==12 and voices.short.size()==4 and voices.nature.size()==2 and voices.buses==6,"original bounded production voice pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal city save byte-identical")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"day":{"seconds":day.seconds,"peak":day.peak,"clipped_samples":day.clipped_samples},"night":{"seconds":night.seconds,"peak":night.peak,"clipped_samples":night.clipped_samples},"source_reference_audio_loaded":false}
	FileAccess.open(OUT+"/reference_capture.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("REFERENCE_MUSIC_LIVE ",JSON.stringify(report))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
