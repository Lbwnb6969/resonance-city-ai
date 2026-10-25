extends "res://tools/check_creation_music_experience_live.gd"
## M45 production bank, real 24m source gates, actual mixer and both UI sizes.
func run()->void:
	OUT="res://验证记录/M45/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source","")=="precompiled","actual GL uses the matching production bank")
	var ids:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
	facts.life_cue_zoom=24.
	var recording:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,recording);recording.set_recording_active(true)
	facts.hybrid=await preload("res://tools/fixtures/city_creation_hybrid_cues_live.gd").run(self)
	check(demo.zoom==24.,"real source-gated bridge, arch, stepping and tram were tested at 24m")
	await capture("stepping_24m_1440")
	var step:Dictionary=facts.hybrid.get("stepping",{}).get("site",{})
	if not step.is_empty():
		var event:={"kind":"stepping","source_id":str(step.id),"position":Vector2(step.at)}
		check(demo.music._travel_eligible(event),"normal 24m view permits a real stepping site")
		demo.zoom=31.;demo._update_camera()
		check(not demo.music._travel_eligible(event),"31m view leaves individual travel cues silent")
		demo.zoom=24.;demo._update_camera()
		var gate:Callable=demo.music.travel_source_gate;demo.music.travel_source_gate=func(_a,_b,_c):return false
		check(not demo.music._travel_eligible(event),"a missing/deleted source still fails its real travel gate")
		demo.music.travel_source_gate=gate
	var city:=State.new();city.initialize_empty()
	for i in range(5):check(city.add_house(Vector2(-22+i*3.,-10)).ok,"real clustered cafe household")
	check(city.set_house_role("h2","garden_cafe").ok,"actual cafe source")
	await show(city,Vector2(-20,-10),"cafe24")
	demo.zoom=24.;demo._update_camera();demo.life.set_process(false);demo.set_process(false)
	demo.music.set_cafe_view({"h2":{"phase":"tea","arrived":2}})
	var before:int=demo.music._cafe_cues
	check(await wait_for(func():return demo.music._cafe_cues>before),"two published tea attendees produce actual flute PCM at 24m")
	check(demo.music._cafe_eligible("h2"),"cafe uses zoom and source/attendance rather than detail mode")
	await capture("cafe_24m_1440")
	root.size=Vector2i(1024,768);await settle();await capture("cafe_24m_1024")
	demo.zoom=31.;demo._update_camera();check(not demo.music._cafe_eligible("h2"),"31m view gates cafe detail")
	demo.zoom=24.;demo._update_camera();demo.set_process(true)
	var stock:Dictionary=demo.state.snapshot()
	var notes:Array=[]
	for i in range(6):
		demo.music.play_edit("room");notes.append(demo.music.get_meta("construction_last_note",{}));await create_timer(.24).timeout
	check(notes.size()==6 and notes.all(func(row):return row.has("midi") and demo.music.CueGrid.snap_to_chord_tone(row.midi,demo.music.Palette.chords(maxi(0,demo.music.harmony_mode()))[row.bar])==row.midi),"six actual construction notes follow the sounding chord")
	check(stock==demo.state.snapshot(),"music playback never mutates city state")
	await create_timer(2.).timeout
	recording.set_recording_active(false)
	var wave:AudioStreamWAV=recording.get_recording();var clipped:=0;var peak:=0.
	var pcm:=wave.data
	for i in range(pcm.size()/2):
		var value:=absi(pcm.decode_s16(i*2));peak=maxf(peak,float(value)/32768.)
		if value>=32767:clipped+=1
	check(wave.save_to_wav(OUT+"/24m_Master.wav")==OK and peak>.01 and clipped==0,"real 24m Master recording contains life music and no clipping")
	facts.recording={"seconds":wave.get_length(),"peak":peak,"clipped_samples":clipped}
	AudioServer.remove_bus_effect(0,AudioServer.get_bus_effect_count(0)-1)
	facts.cue_grid=demo.music.get_meta("cue_grid_events",[])
	check(not facts.cue_grid.is_empty() and facts.cue_grid.all(func(e):return e.delay>=0. and e.delay<.187501 and absf(e.onset/.1875-round(e.onset/.1875))<.00001 and e.preroll>0.),"every real shared-pool cue uses a padded stream and an exact future grid onset")
	await finish(personal,ids)
