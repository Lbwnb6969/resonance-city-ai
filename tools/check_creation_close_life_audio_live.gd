extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
const Span=preload("res://tools/fixtures/city_creation_recording_span.gd")
const Foley=preload("res://scripts/audio/city_creation_close_life_audio.gd")
func helper():return demo.get_meta("close_life_audio")
func actors()->Array:return demo.life.residents+demo.life.bakery.workers+demo.life.workshop.workers
func follow(actor:Dictionary)->void:
	var at:Vector3=actor.node.global_position;demo.focus=Vector3(at.x,.4,at.z);demo._update_camera()
func ready_actor(kind:String)->Dictionary:
	var rows:Array=demo.life.residents if kind in ["step","cup"] else demo.life.bakery.workers if kind=="bread" else demo.life.workshop.workers
	for row:Dictionary in rows:
		if kind=="step" and row.get("cafe_visit",{}).get("phase","")!="seated":return row
		if kind=="cup" and row.get("cafe_visit",{}).get("phase","")=="seated":return row
		if kind=="bread" and row.phase=="baking":return row
		if kind=="wood" and row.phase=="crafting":return row
	return {}
func short_recorders()->Array:
	var result:Array=[]
	for voice:AudioStreamPlayer in demo.music._effects:
		var index:=AudioServer.get_bus_index(voice.bus);var effect:=AudioEffectRecord.new()
		AudioServer.add_bus_effect(index,effect);effect.set_recording_active(true);result.append({"index":index,"effect":effect})
	return result
func end_short(records:Array,label:String)->Array:
	var result:Array=[]
	for i in range(records.size()):
		var row:Dictionary=records[i];row.effect.set_recording_active(false)
		var wave:AudioStreamWAV=row.effect.get_recording();var peak:=0.
		if wave!=null:
			var pcm:=wave.data
			for j in range(pcm.size()/2):peak=maxf(peak,absf(pcm.decode_s16(j*2)/32768.))
			check(wave.save_to_wav(OUT+"/"+label+"_Short"+str(i)+".wav")==OK,"real short bus PCM saved "+label+str(i))
		for j in range(AudioServer.get_bus_effect_count(row.index)-1,-1,-1):
			if AudioServer.get_bus_effect(row.index,j)==row.effect:AudioServer.remove_bus_effect(row.index,j)
		result.append({"bus":AudioServer.get_bus_name(row.index),"peak":peak,"seconds":wave.get_length() if wave!=null else 0.})
	return result
func stage(kind:String)->void:
	var city:=State.new();city.initialize()
	check(city.set_house_role("h4","garden_cafe").ok,"public cafe for "+kind)
	if kind=="wood":check(city.set_house_role("h3","workshop").ok,"public wood workshop")
	await show(city,Vector2(-5,0),kind);quiet();demo.zoom=9.;demo.yaw=.25;demo.pitch=.75;demo._update_camera()
	var actor:Dictionary={};var simulated:=0
	for i in range(6000):
		demo.life._process(.05);simulated=i+1;actor=ready_actor(kind)
		if not actor.is_empty():follow(actor);break
		if i%20==0:await process_frame
	check(not actor.is_empty(),"actual simulation reaches "+kind)
	if actor.is_empty():return
	var pre_pool:=pool();var before:Dictionary=helper().counts.duplicate()
	var recording:=Span.start();var shorts:=short_recorders();var events:Array=[];var seen:Dictionary={};var progressed:=false
	demo.life.set_process(true)
	var deadline:=Time.get_ticks_msec()+7400
	while Time.get_ticks_msec()<deadline:
		follow(actor);await process_frame
		for event:Dictionary in helper().events:
			var token:=str(event.actor_id)+"/"+str(event.life_time)
			if seen.has(token) or event.kind!=kind:continue
			seen[token]=true;events.append(event.duplicate(true))
		var audio=helper()
		if audio._owned() and audio.active.kind==kind and audio.active.player.playing:
			progressed=progressed or audio.active.player.get_playback_position()>.02
	demo.life.set_process(false)
	var master:=Span.finish(recording,OUT+"/"+kind+"_Master.wav");var buses:=end_short(shorts,kind)
	check(master.ok,"actual near "+kind+" Master unclipped")
	check(not events.is_empty() and progressed,"real visible "+kind+" action plays PCM in existing voice")
	var expected:String={"step":"walking","cup":"tea_conversation","bread":"kneading","wood":"crafting"}[kind]
	check(events.all(func(e):return e.activity==expected and e.zoom<18. and e.gain>0. and e.gain<=1.),"all sampled "+kind+" contacts match visible action and close range")
	check(pre_pool==pool(),"source publication preserves every voice and bus "+kind)
	facts[kind]={"master":master,"short_buses":buses,"events":events,"simulated_seconds":simulated*.05,"before":before,"report":helper().report()}
	await capture(kind+"_near")
	# Normal zoom and an off-screen focus must suppress new contacts, not queue them.
	demo.zoom=24.;demo._update_camera();demo.life.set_process(true)
	var count:Dictionary=helper().counts.duplicate();await create_timer(.8).timeout
	check(count==helper().counts and not helper().report().active,"zoom out fades and suppresses "+kind)
	demo.zoom=9.;demo.focus=Vector3(35,0,35);demo._update_camera();await create_timer(.8).timeout
	check(count==helper().counts and helper().memo.is_empty(),"offscreen actors silent "+kind)
	demo.life.set_process(false)
func run()->void:
	OUT="res://验证记录/M74/accepted"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet()
	check(DisplayServer.get_name()!="headless","real OpenGL window")
	var original:=pool();facts.pool_before=original
	for kind:String in ["step","bread","wood","cup"]:await stage(kind)
	check(original==pool(),"fixed 12 long, 4 short, 2 nature and 6 spatial buses retain identity across city swaps")
	check(original.long.size()==12 and original.short.size()==4 and original.nature.size()==2 and original.buses==6,"original pool sizes")
	# Real busy slots: Foley is the lowest-priority borrower and never steals.
	demo.zoom=9.;var actor:Dictionary=ready_actor("step");follow(actor)
	var audio=helper();audio.stop();var wave:AudioStreamWAV=audio._bank("bread",0).duplicate()
	wave.loop_mode=AudioStreamWAV.LOOP_FORWARD;wave.loop_end=wave.data.size()/2
	for player:AudioStreamPlayer in demo.music._effects:
		player.stream=wave;player.play()
	var count:Dictionary=audio.counts.duplicate();var busy:int=audio.skipped_busy;demo.life.set_process(true)
	var end:=Time.get_ticks_msec()+1100
	while Time.get_ticks_msec()<end:follow(actor);await process_frame
	check(count==audio.counts and audio.skipped_busy>busy,"actual walking contacts rejected while all music voices occupied")
	demo.music.set_muted(true);await process_frame
	check(not audio.report().active,"mute stops owned Foley immediately")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains byte identical")
	facts.pool_after=pool();facts.final=audio.report()
	var samples:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(100):
		await process_frame;var now:=Time.get_ticks_usec();samples.append(float(now-last)/1000.);last=now
	samples.sort();facts.frames={"p95_ms":samples[94],"max_ms":samples[-1]}
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/close_life_audio.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("CLOSE_LIFE_AUDIO_LIVE ",JSON.stringify({"ok":result.ok,"checks":checks,"failures":failures}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
