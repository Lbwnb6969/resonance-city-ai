extends "res://tools/check_creation_close_life_audio_live.gd"
const SpatialFixture=preload("res://tools/fixtures/city_creation_functional_zones_fixture.gd")
func run()->void:
	OUT="res://验证记录/M84/sound_policy_20261029/live"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1024,768);Engine.max_fps=60
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet()
	var original:=pool();var fixture:=SpatialFixture.build();check(fixture.ok,"actual free city built through public author API")
	await show(fixture.city,Vector2(-30,-20),"自由城近景声音");quiet();demo.zoom=9.;demo.life.set_process(true)
	check(demo.music.audio_report.get("bank_source","")=="precompiled","actual scene retains original precompiled bank")
	facts.bank_source=demo.music.audio_report.get("bank_source","");facts.bank_signature=demo.music.BankCache.source_signature()
	var actor:Dictionary=ready_actor("step");check(not actor.is_empty(),"actual free-city resident exists")
	var shorts:=short_recorders();var recording:=Span.start();var until:=Time.get_ticks_msec()+6000
	while Time.get_ticks_msec()<until:
		follow(actor);await process_frame
	facts.free_pcm=Span.finish(recording,OUT+"/free_Master.wav");var free_events:Array=helper().events.duplicate(true);facts.free_events=free_events
	facts.free_short=end_short(shorts,"free");check(facts.free_short.any(func(r):return r.peak>.00001),"actual short buses contain nonzero instrument PCM")
	check(facts.free_pcm.ok and not free_events.is_empty(),"real free-city contacts play actual unclipped instrument PCM")
	check(free_events.all(func(e):return e.get("policy","")=="musical" and e.stream_key.begins_with("house_pluck_")),"default free path exclusively borrows existing instrument streams")
	check(helper().bank.is_empty(),"free path never loads packaged realistic Foley")
	var grid:Array=demo.music.get_meta("cue_grid_events",[])
	check(free_events.all(func(e):return grid.any(func(g):return g.stream_id==e.stream_id and g.serial==e.serial and absf(g.onset/.1875-roundf(g.onset/.1875))<.00001)),"every actual musical contact has shared 187.5ms grid evidence")
	for event:Dictionary in free_events:
		var chords:Array=demo.music.PitchPluck.Palette.chords(maxi(0,int(event.mode)))
		check(chords[int(event.bar)].any(func(n):return posmod(int(event.midi)-int(n),12)==0),"actual contact note belongs to current mode and chord")
	await capture("free_close")
	demo.zoom=24.;demo._update_camera();var count:Dictionary=helper().counts.duplicate();await create_timer(1.).timeout
	check(helper().counts==count and not helper().report().active,"zoom out fades and retires free contact notes")
	demo.zoom=9.;follow(actor);helper().stop()
	if not free_events.is_empty():
		var wave:AudioStreamWAV=demo.music._edit_streams[free_events[-1].stream_key].duplicate();wave.loop_mode=AudioStreamWAV.LOOP_FORWARD;wave.loop_end=wave.data.size()/2
		for player:AudioStreamPlayer in demo.music._effects:player.set_meta("creation_voice_serial",int(player.get_meta("creation_voice_serial",0))+1);player.stream=wave;player.play()
		count=helper().counts.duplicate();var busy:int=helper().skipped_busy;until=Time.get_ticks_msec()+1200
		while Time.get_ticks_msec()<until:follow(actor);await process_frame
		check(helper().counts==count and helper().skipped_busy>busy,"occupied music slots never stolen by free ambience")
		for player:AudioStreamPlayer in demo.music._effects:
			if player.stream==wave:player.stop()
	demo.life.set_process(false)
	var legacy:=State.new();legacy.initialize();await show(legacy,Vector2(-5,0),"经典城近景声音");quiet();demo.zoom=9.;demo.life.set_process(true);actor=ready_actor("step")
	var before:int=helper().events.size();recording=Span.start();until=Time.get_ticks_msec()+4000
	while Time.get_ticks_msec()<until:follow(actor);await process_frame
	facts.classic_pcm=Span.finish(recording,OUT+"/classic_Master.wav");var classic:Array=helper().events.slice(before);facts.classic_events=classic
	check(facts.classic_pcm.ok and not classic.is_empty() and classic.all(func(e):return not e.has("policy")),"classic policy still plays original realistic contacts")
	check(not helper().bank.is_empty(),"classic branch uses actual packaged Foley")
	await capture("classic_close");demo.music.set_muted(true);await process_frame;check(not helper().report().active,"mute stops owned contact voice")
	check(pool()==original and original.long.size()==12 and original.short.size()==4 and original.nature.size()==2 and original.buses==6,"same original bounded pool across policies")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("LIFE_SOUND_POLICY_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
