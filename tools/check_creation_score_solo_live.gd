extends "res://tools/check_creation_close_life_audio_live.gd"
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const Master=preload("res://scripts/audio/city_creation_master_score.gd")
const ScoreSolo=preload("res://scripts/audio/city_creation_score_solo.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
func key_event(code:Key,down:bool)->void:
	var event:=InputEventKey.new();event.device=92;event.keycode=code;event.physical_keycode=code;event.pressed=down;root.push_input(event);await process_frame
func click_house(id:String)->void:
	var h:Dictionary=demo.town._house_record(id);var at:Vector2=demo.camera.unproject_position(Vector3(h.origin[0],float(h.get("base_y",0.))+1.2,h.origin[1]))
	var move:=InputEventMouseMotion.new();move.device=92;move.position=at;move.global_position=at;root.push_input(move);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.pressed=down;event.button_index=MOUSE_BUTTON_LEFT;root.push_input(event);await process_frame
func start_solo(id:String)->void:
	await key_event(KEY_P,true);await click_house(id);await key_event(KEY_P,false)
func adopt(data:Dictionary)->void:
	check(Import._request_data(demo.music,data).ok,"production worker queues actual mother score")
	check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==data.signature,60000),"mother worker finishes with actual short / long score data")
	check(await wait_for(func():return ScoreSolo.voice(demo.music).has("player"),20000),"actual pooled lead reaches stable mother waveform")
func run()->void:
	OUT="res://验证记录/M84/master_solo_20261029/live_initial"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	var city:=State.new();city.initialize_free();var built:=true
	for i in range(6):
		built=Brush.select(city,"clockwork" if i<3 else "renaissance","sawtooth_atrium" if i<3 else "rotunda") and built
		built=city.add_house(Vector2(-30+i*4.,-20)).ok and built
	built=city.add_road([Vector2(-32,-18.1),Vector2(-8,-18.1)] as Array[Vector2],"path","none").ok and built
	check(built,"public automatic-purpose workshops / ateliers and connecting road")
	await show(city,Vector2(-29,-20),"母曲原领唱独奏");quiet();demo.life.set_process(false);demo.zoom=28.;demo._update_camera();await settle()
	check(demo.music.audio_report.get("bank_source")=="precompiled","unchanged formal precompiled bank in clean full-repository worktree")
	var solo=demo.get_meta("solo_spotlight");var data:=Master.section(0,4);await adopt(data)
	check(demo.life.residents.is_empty() and demo.life.workshop.workers.is_empty(),"real fixture has no assigned residents or workers")
	check(demo.life.house_connected("h4") and solo.eligible("h4"),"free connected atelier is eligible without producing stock or waiting for a worker")
	var saved:Dictionary=demo.state.snapshot();var selected:=ScoreSolo.voice(demo.music);var lead:AudioStreamPlayer=selected.player;var original_stream:AudioStream=lead.stream
	var phase_before:=wrapf(lead.get_playback_position()-demo.music._playback_clock(),-12.,12.)
	var record:=Span.start();await start_solo("h4")
	check(solo.active() and solo.source=="h4" and solo.player==lead and solo.report().shared_master,"native P and picked atelier spotlight the existing mother lead")
	check(lead.stream==original_stream and absf(wrapf(lead.get_playback_position()-demo.music._playback_clock(),-12.,12.)-phase_before)<.05,"native start neither seeks nor replaces current mother PCM")
	check(demo.music._effects.all(func(p):return p.stream!=lead.stream),"no short player receives a second long lead waveform")
	var next:=Master.section(1,8);check(Import._request_data(demo.music,next).ok,"request actual new mother section and mode during twelve-second solo")
	var samples:Array=[];var swapped:=false;var wrong_leads:=0;var pictured:=false;var deadline:=Time.get_ticks_msec()+16000
	while solo.active() and Time.get_ticks_msec()<deadline:
		await process_frame
		if not solo.active():break
		swapped=swapped or lead.stream!=original_stream
		var melodic:=0
		for stem:String in demo.music._players:
			var active:=str(demo.music._variation_active.get(stem,""));var voice:AudioStreamPlayer=demo.music._players[stem]
			var is_lead:bool=active.ends_with("/lead") if active.begins_with("study1/") or active.begins_with("core1/") else stem in demo.music.HarmonicEmergence.LEADS+["concert"] and active not in ["","original"] and not "chamber_counter_" in active
			if is_lead and voice.playing and voice.volume_db> -45.:melodic+=1
		wrong_leads+=int(melodic!=1 or solo.player!=lead or solo.stream!=lead.stream)
		if samples.is_empty() or demo.music._playback_clock()-float(samples[-1].clock)>.4:samples.append({"clock":demo.music._playback_clock(),"player_id":lead.get_instance_id(),"stream_id":lead.stream.get_instance_id(),"gain_db":lead.volume_db,"pcm_peak_bound":solo.pcm_peak,"shared_master":solo.report().shared_master,"stem":solo.track,"active_id":demo.music._variation_active.get(solo.track,""),"transition":lead.stream.get_meta("transition",false)})
		if not pictured and demo.music._playback_clock()-float(solo.started)>2.:pictured=true;await capture("shared_solo_active")
	facts.pcm=Span.finish(record,OUT+"/solo_and_worker_Master.wav");facts.samples=samples;facts.swapped=swapped
	check(not solo.active() and not solo.events.is_empty() and solo.events[-1].kind=="finished" and absf(float(solo.events[-1].duration)-12.)<.15,"real transport completes the original twelve-second spotlight")
	check(wrong_leads==0,"every sampled frame retains exactly one actual long lead and one shared wave")
	check(swapped,"active spotlight follows the original player's real prepared transition without replaying an old theme")
	check(lead.playing and not demo.music.has_meta("score_solo") and demo.music.get_meta("solo_duck_db")==0.,"natural completion restores backing without stopping mother playback")
	check(facts.pcm.ok,"actual solo / worker / return Master PCM remains nonzero and unclipped")
	await capture("after_shared_solo")
	check(await wait_for(func():return ScoreSolo.voice(demo.music).has("player"),20000),"second mother section settles after shared spotlight")
	await start_solo("h4");check(solo.active() and solo.report().shared_master,"native shared spotlight can restart on the new mode")
	await create_timer(.5).timeout;var held_player:AudioStreamPlayer=solo.player;var held_stream:AudioStream=held_player.stream;await key(KEY_ESCAPE)
	check(not solo.active() and held_player.playing and held_player.stream==held_stream and not demo.music.has_meta("score_solo"),"native Escape retires spotlight without stopping or replacing the long player")
	check(demo.state.snapshot()==saved,"mother solo and camera-follow leave real inventory, author state and preferences unchanged")
	var legacy:=State.new();legacy.initialize();legacy.add_road([Vector2(-11,3.5),Vector2(7,3.5),Vector2(7,5.2),Vector2(9,5.2),Vector2(9,4.45)] as Array[Vector2]);await show(legacy,Vector2(-10,-2),"经典独奏保持");quiet();demo.life.set_process(false)
	check(not ScoreSolo.enabled(demo.music) and ScoreSolo.voice(demo.music).is_empty(),"classic city retains its original short-player solo implementation")
	for i in range(400):
		if solo.eligible("h2"):break
		demo.life._process(.1)
	demo.focus=Vector3(-10,.8,-2);demo.zoom=13.;demo._update_camera();await settle();await start_solo("h2")
	check(solo.active() and not solo.report().shared_master and solo.player in demo.music._effects,"native classic bakery solo still owns one original short player")
	await create_timer(.4).timeout;var old_short:AudioStreamPlayer=solo.player;await key(KEY_ESCAPE)
	check(not solo.active() and not old_short.playing,"classic Escape still stops its owned short solo")
	await start_solo("h2");check(solo.active() and solo.player in demo.music._effects,"real independent solo is active before switching to a mother")
	old_short=solo.player;var entered:=Master.section(0,0);check(Import._request_data(demo.music,entered).ok,"actual worker prepares mother while old independent solo is running")
	check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==entered.signature,60000),"mother becomes available during original solo")
	await process_frame
	check(not solo.active() and not old_short.playing and solo.events[-1].kind=="context","new mother retires independent old theme before creating a second lead")
	check(pool()==voices,"original twelve long four short six buses two nature identities preserved")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SCORE_SOLO_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
