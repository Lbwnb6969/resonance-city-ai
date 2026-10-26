extends "res://tools/check_creation_music_experience_live.gd"
const Gather=preload("res://scripts/world/city_creation_solo_listeners.gd")
const Mix=preload("res://scripts/audio/city_creation_camera_orchestration.gd")
var solo
var arch
func quiet()->void:
	for key:String in ["inspiration_draft","vignette_journey"]:
		var item=demo.get_meta(key);item.poll();item.set_process(false);item.paper.hide()
	demo.spatial_popover.close()
func key_event(code:Key,pressed:bool)->void:
	var event:=InputEventKey.new();event.keycode=code;event.physical_keycode=code;event.pressed=pressed;root.push_input(event);await process_frame
func click_house(id:String)->void:
	var h:Dictionary=demo.town._house_record(id)
	var at:Vector2=demo.camera.unproject_position(Vector3(h.origin[0],float(h.get("base_y",0.))+1.2,h.origin[1]))
	var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
func observe_solo()->void:
	await create_timer(3.1).timeout
	check(solo.active() and solo.player.playing and is_equal_approx(db_to_linear(solo.player.volume_db)*solo.pcm_peak,.18),"actual solo stays on its original short voice with measured .18 peak foreground")
	var music=demo.music;var key:=str(music.emergence.score.get("lead_track","wood"))
	var base:float=music.target_gain_db(key,false);var lift:float=music.Experience.lift(music)
	music.set_meta("solo_duck_db",0.);var unducked:float=music.target_gain_db(key,false);var normal_lift:float=music.Experience.lift(music);music.set_meta("solo_duck_db",4.)
	check(is_equal_approx(unducked-base,4.) and is_equal_approx(lift,normal_lift),"actual target backing drops4dB and peak lift does not undo it")
	facts.duck={"key":key,"solo_target":base,"normal_target":unducked,"solo_lift":lift,"normal_lift":normal_lift}
	var solo_bound:float=music.Experience.LONG_PEAK_BUDGET*db_to_linear(-4.)+.18*1.65+float(music.audio_report.effect_peaks.values().max())*db_to_linear(music.SHORT_GAIN_DB)*3.*1.65+.03
	check(solo_bound<1.,"ducked backing plus normalized solo and three remaining short slots fit full-scale budget");facts.solo_bound=solo_bound
	var saved:Dictionary=demo.state.snapshot();saved.journey_checkpoint=demo.life.checkpoint()
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"native mid-solo daily checkpoint passes cold validation")
	FileAccess.open(OUT+"/mid_solo_world.json",FileAccess.WRITE).store_string(JSON.stringify(saved,"\t",true,true))
	await create_timer(7.9).timeout
	var people:Array=[]
	for r:Dictionary in demo.life.residents:
		if r.has("solo_listen"):people.append({"id":r.home_id,"at":r.node.position,"destination":r.destination_id,"listening":r.node.get_meta("solo_listening",false),"visible_activity":r.node.get_meta("visible_activity","")})
	facts.listeners=people
	check(people.any(func(r):return r.listening and r.visible_activity=="listening"),"real neighbors reach the source and hold their actual listening pose")
	await capture("solo_neighbors_and_gold_notes")
func run()->void:
	OUT="res://验证记录/M57/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	solo=demo.get_meta("solo_spotlight");arch=demo.get_meta("musical_archways")
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=State.new();city.initialize()
	check(city.add_road([Vector2(-11,3.5),Vector2(7,3.5),Vector2(7,5.2),Vector2(9,5.2),Vector2(9,4.45)]).ok,"real complete river road")
	await show(city,Vector2(-10,-2),"桥廊回声与独奏");quiet();demo.life.set_process(false)
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_codec","")=="qoa","actual OpenGL scene and portable QOA playback")
	var ready:=false
	for tick in range(400):
		demo.life._process(.1)
		if solo.eligible("h2"):
			var gathered:=Gather.gather(demo.life,"h2",demo.life.time+12.)
			if not gathered.is_empty():Gather.clear(demo.life);ready=true;break
	check(ready,"active bakery and real nearby walking neighbor")
	demo.focus=Vector3(-10,.8,-2);demo.zoom=13.;demo._update_camera();await settle();quiet()
	var houses:Array=demo.state.houses.duplicate(true);var tool:int=demo.tool
	await key_event(KEY_P,true);await click_house("h2");await key_event(KEY_P,false)
	check(solo.active() and solo.source=="h2" and not demo.strum_hold.active(),"real P+roof click starts solo and release ends strum override")
	check(not solo.listeners.is_empty() and demo.tool==tool and demo.state.houses==houses,"actual click recruits existing residents without authoring or changing the brush")
	facts.solo_start=solo.report();demo.life.set_process(true)
	observe_solo.call_deferred()
	facts.solo_audio=await Probe.record(OUT+"/solo_12s_Master.wav",12.5)
	check(facts.solo_audio.ok,"full twelve second solo and backing actual Master has no clipped samples")
	check(not solo.active() and solo.events[-1].kind=="finished" and absf(float(solo.events[-1].duration)-12.)<.12,"actual music transport ends solo after12seconds")
	check(demo.music.get_meta("solo_duck_db")==0. and demo.life.residents.all(func(r):return not r.has("solo_listen")),"finish restores backing and releases all daily walkers")
	facts.solo_end=solo.report()
	# V-mode click is a real perspective ray; use the same live bakery.
	demo.life.set_process(false);demo.focus=Vector3(-10,1.2,-7);demo.yaw=PI;demo.pitch=.4;demo._update_camera()
	await key_event(KEY_V,true);await key_event(KEY_V,false)
	var target:=Vector3(demo.state.houses[1].origin[0],1.2,demo.state.houses[1].origin[1]);demo.focus=target+Vector3(0,.1,-5.);var look:Vector3=(demo.focus-target).normalized();demo.yaw=atan2(look.x,look.z);demo.pitch=asin(look.y);demo._update_camera();await process_frame
	await click_house("h2");check(demo.camera_rig.strolling and solo.active(),"real V-stroll perspective click starts the same solo")
	await capture("stroll_solo");await key_event(KEY_ESCAPE,true);await key_event(KEY_ESCAPE,false)
	check(not solo.active(),"real Escape cancels solo")
	if demo.camera_rig.strolling:await key_event(KEY_V,true);await key_event(KEY_V,false)
	demo.focus=Vector3(-2.4,.8,-5);demo.zoom=13.;demo._update_camera();await settle()
	check(not solo.start("h1"),"ordinary residential roof cannot become a factory solo")
	check(solo.start("h2"),"same active source can restart")
	demo.music.set_muted(true);await process_frame;check(not solo.active() and demo.music.get_meta("solo_duck_db")==0.,"actual mute cancels owned solo and releases backing")
	demo.music.set_muted(false);await settle();check(solo.start("h2"),"unmuted real source can restart")
	demo._after_edit(demo.state.set_bakery_open("h2",false),"room");await settle();check(not solo.active() and not solo.eligible("h2"),"real production close edit cancels source and blocks inactive factory")
	demo._after_edit(demo.state.undo(),"history");await settle()
	# Actual daily walkers across the bridge, not a synthetic observer probe.
	demo.focus=Vector3(2,.6,3.5);demo.zoom=25.;demo.yaw=0.;demo.pitch=.65;demo._update_camera();await settle();quiet()
	check(arch.layers.size()==1 and arch.sites.values()[0].wet,"actual bridge carries a rendered instrument over real water")
	arch.echo.clear();arch.echo.events.clear();arch.water_due[arch.sites.keys()[0]]=INF
	var walk:=false
	for tick in range(1500):
		demo.life._process(.1)
		if not arch.echo.pending.is_empty():walk=true;break
	check(walk,"real Life daily resident crossing queues the two-bank echo")
	facts.echo_audio=await Probe.record(OUT+"/walk_echo_Master.wav",2.4)
	check(facts.echo_audio.ok,"actual two-bank echo Master")
	var events:Array=arch.echo.events.duplicate(true);facts.walk_echo=events
	check(events.size()>=2 and events[0].source!=events[1].source and events[0].trigger=="walk" and events[0].actor.begins_with("resident/"),"actual walking event plays two different bank buildings")
	if events.size()>=2:check(float(events[0].pan)*float(events[1].pan)<0. and is_equal_approx(float(events[1].due)-float(events[0].due),.75),"source positions really pan to opposite speakers at a four-step answer interval")
	await capture("real_bridge_windchimes")
	demo.focus=Vector3(3,.35,3.5);demo.zoom=7.;demo.pitch=.34;demo._update_camera();await capture("bridge_instrument_close")
	demo.focus=Vector3(2,.6,3.5);demo.zoom=25.;demo.pitch=.65;demo._update_camera();await settle()
	arch.echo.clear();arch.echo.events.clear();arch.water_due.clear()
	await create_timer(.2).timeout
	facts.water_audio=await Probe.record(OUT+"/water_echo_Master.wav",2.)
	facts.water_echo=arch.echo.events.duplicate(true)
	check(facts.water_echo.any(func(e):return e.trigger=="stream"),"actual flowing base river also triggers the bridge echo")
	var road_id:String=arch.sites.values()[0].owner
	demo._after_edit(demo.state.remove_road(road_id),"road");await settle()
	check(arch.layers.is_empty() and arch.echo.pending.is_empty(),"real road deletion cancels geometry and pending voices")
	demo._after_edit(demo.state.undo(),"history");await settle();check(arch.layers.size()==1,"actual Undo republishes the derived bridge instrument")
	var modern:=preload("res://tools/fixtures/city_creation_modern_fixture.gd").architecture()
	await show(modern,Vector2(-12,-2),"空中连廊琴弦");quiet()
	check(arch.sites.values().any(func(row):return row.kind=="skybridge") and arch.layers.size()>0,"real highest skybridge publishes hanging strings")
	demo.focus=Vector3(-12,2.7,-2);demo.zoom=10.;demo.pitch=.42;demo._update_camera();await capture("real_skybridge_strings")
	await finish(personal,voices)
