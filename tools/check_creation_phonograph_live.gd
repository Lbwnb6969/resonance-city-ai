extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Archive=preload("res://scripts/world/city_creation_acoustic_archive.gd")
const Fixture=preload("res://tools/fixtures/city_creation_chord_fixture.gd")
const Phono=preload("res://scripts/audio/city_creation_phonograph.gd")
const OUT="res://验证记录/留声机与名胜图鉴_2026-10-22"
var demo
var checks:=0
var failures:Array[String]=[]
var player_ids:Array=[]
var collection:=""
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for i in range(5):await process_frame
func click(control:Control)->void:
	var scroll:ScrollContainer=demo.gallery.panel.scroll
	if scroll.is_ancestor_of(control):scroll.ensure_control_visible(control);await process_frame
	var at:=control.get_global_rect().get_center()
	var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.pressed=pressed;event.button_index=MOUSE_BUTTON_LEFT;root.push_input(event);await process_frame
func capture(name:String)->void:
	demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+name+".png")
func delay(seconds:float)->void:
	var end:=Time.get_ticks_msec()+int(seconds*1000.)
	while Time.get_ticks_msec()<end:await process_frame
func paint_present(id:String)->bool:
	return mesh_has(demo.town.FINISH_PALETTES[id][0])
func mesh_has(wanted:Color)->bool:
	var root_node:Node3D=demo.town.house_roots.h1
	for node:Node in root_node.find_children("*","MeshInstance3D",true,false):
		if not node.mesh is ArrayMesh:continue
		for surface in range(node.mesh.get_surface_count()):
			var arrays:Array=node.mesh.surface_get_arrays(surface)
			if arrays[Mesh.ARRAY_COLOR]==null:continue
			for color:Color in arrays[Mesh.ARRAY_COLOR]:
				if color.is_equal_approx(wanted):return true
	return false
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	collection=OUT+"/live_"+str(Time.get_ticks_usec())
	var archive:=Archive.new();archive.enabled=true;archive.directory=collection+"/声学图鉴"
	for city:RefCounted in [Fixture.pastoral(),Fixture.highland(),Fixture.renaissance(),Fixture.clockwork(),Fixture.chrono()]:check(archive.observe(city).ok,"seed archive from actual chord geometry")
	# Earn the second record through the same real attendance/completion path.
	var city:=State.new();city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json")))
	var life=load("res://scripts/world/city_creation_life.gd").new();root.add_child(life);life.set_process(false);life.setup(city)
	var venue:=""
	for house:Dictionary in city.houses:
		if house.get("signature","")=="floating_amphitheater":venue=str(house.id)
	check(life.invite_landmark_movement(venue).ok,"prepare actual hundred-house symphony")
	var concerts:=int(city.life_progress.concerts)
	for i in range(1800):
		life._process(.5)
		if int(city.life_progress.concerts)>concerts:break
	check(archive.observe(city,life.last_completed_movement).ok and archive.awards.size()==2,"both archive rewards earned before launching the new bay")
	life.free()
	demo=Scene.instantiate();demo.persistence=false;demo.archive_persistence=true;demo.start_empty=true;demo.collection_directory=collection;root.add_child(demo);demo.life.set_process(false);await settle()
	for player:AudioStreamPlayer in demo.music._players.values():player_ids.append(player.get_instance_id())
	if "--heritage-only" in OS.get_cmdline_user_args():
		var heritage:Dictionary=await preload("res://tools/fixtures/city_creation_heritage_life_live.gd").new().run(demo)
		check(heritage.ok,"focused heritage and ledger capture")
		quit(0 if failures.is_empty() else 1);return
	check(demo.state.archive_unlocks.size()==2 and demo.state.growth_memories.is_empty(),"new bay inherits archive rewards without inventing native chapters")
	var town:=State.new();town.initialize();town.apply_archive_unlocks(archive.awards);town.set_music_mode("gong_pentatonic");town.set_house_finish("h1","river_jade")
	for x:float in [-23.,-19.4,-15.8]:check(town.add_house(Vector2(x,-6)).ok,"legal recorded choir home: "+str(x))
	check(int(town.natural_clusters().h7.get("size",0))==3,"record an actual three-house choir rather than an isolated-house rest")
	demo._after_edit(demo.state.restore(town.snapshot()),"history");await settle();demo.life.set_process(false);demo.focus=Vector3(-10,.7,-1);demo.zoom=24.;demo._update_camera();await delay(3.3)
	check(demo.music.harmony_mode()==8 and paint_present("river_jade"),"C gong key and actual jade wall vertex colors are installed")
	demo.gallery.open_panel();await process_frame
	var first:Dictionary=await demo.gallery._capture("宫商河湾","manual")
	check(first.ok,"normal collection saves first reward-key work")
	var saved:Dictionary=demo.gallery.library.read(str(first.id))
	check(saved.ok and Phono.valid(saved.phonograph_mix) and int(saved.phonograph_mix.mode)==8,"saved work includes exact bounded bank identities and current key")
	check(float(saved.phonograph_mix.tracks.foundation.db)>-40.,"saved foundation belongs to the actual audible choir")
	demo.gallery._refresh();demo.gallery.panel.tabs.current_tab=2
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;for i in range(7):await process_frame
		var paper:Rect2=demo.gallery.panel.panel.get_global_rect()
		check(Rect2(Vector2.ZERO,Vector2(resolution)).encloses(paper),"archive card gallery fits "+str(resolution))
		check(not demo.gallery.panel.mode_buttons.impressionist_major7.disabled,"actual earned impressionist button enabled at "+str(resolution))
		await capture("图鉴_"+str(resolution.x))
	await click(demo.gallery.panel.mode_buttons.impressionist_major7);await settle();await delay(3.3)
	check(demo.state.music_mode=="impressionist_major7" and demo.music.harmony_mode()==9,"mouse chooses F major seventh for the actual current town")
	demo.gallery.close_panel();demo.selected_house="h1";demo.spatial_popover.open_for_house("h1");demo.spatial_popover._toggle_colors();await delay(.6)
	await click(demo.spatial_popover.reward_buttons.opal);await settle()
	check(demo.state.houses[0].get("finish","")=="opal" and paint_present("opal"),"mouse applies unlocked opal palette to real geometry")
	demo._after_edit(demo.state.set_house_colors("h1",Color("5793b8"),Color("79506e")),"terrace",false);await settle()
	check(mesh_has(Color("5793b8")) and int(demo.town.house_roots.h1.get_meta("house_color_cache").index)==10,"custom color fast path uses its own slot beyond all six reward finishes")
	demo._after_edit(demo.state.undo(),"history",false);await settle()
	check(paint_present("opal") and demo.state.houses[0].get("finish","")=="opal","undo custom paint restores actual earned opal colors through the fast path")
	demo.spatial_popover.close();demo.gallery.open_panel();await process_frame
	var second:Dictionary=await demo.gallery._capture("印象河湾","manual");check(second.ok,"second uniquely mixed work is saved independently")
	demo.gallery._refresh();demo.gallery.panel.tabs.current_tab=0;for i in range(5):await process_frame
	var bytes_before:=FileAccess.get_file_as_bytes(saved.path)
	var paused_position:float=demo.music._players.concert.get_playback_position()
	var streams:Dictionary={}
	for stem:String in demo.music.STEMS:streams[stem]=demo.music._players[stem].stream
	demo.life.set_process(true)
	await click(demo.gallery.panel.preview_buttons[str(first.id)])
	var live_before:Dictionary=demo.state.snapshot();var time_before:float=demo.life.time
	check(demo.gallery.preview_id==first.id and not demo.life.is_processing() and demo.music.phonograph.active,"mouse starts first historical mix and pauses current city")
	var exact:=true
	for stem:String in demo.music.STEMS:
		var row:Dictionary=saved.phonograph_mix.tracks[stem]
		var bank:Dictionary={"original":demo.music._original_streams,"variations":demo.music._variation_streams,"harmony":demo.music._harmony_streams}[row.bank]
		exact=exact and demo.music._players[stem].stream==bank[row.key]
	check(exact and demo.state.music_mode=="impressionist_major7","historical C-key streams play while current F-key city remains intact")
	var clock_cycles:int=demo.music._clock_cycles
	var record:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,record);record.set_recording_active(true);await delay(25.3)
	check(demo.state.snapshot()==live_before and demo.life.time==time_before,"preview advances no city, achievements, saves or concert rewards")
	check(FileAccess.get_file_as_bytes(saved.path)==bytes_before,"historical work bytes remain immutable during playback")
	await capture("回放_1024")
	record.set_recording_active(false);var wave:AudioStreamWAV=record.get_recording();var peak:=0.
	if wave!=null:
		var pcm:PackedByteArray=wave.data
		for i in range(pcm.size()/2):peak=maxf(peak,absf(float(pcm.decode_s16(i*2))/32768.))
		wave.save_to_wav(OUT+"/历史混音回放.wav")
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==record:AudioServer.remove_bus_effect(0,i)
	check(peak>.001 and peak<1.,"native recorded historical mix is audible and unclipped")
	check(wave!=null and wave.get_length()>24. and demo.music._clock_cycles==clock_cycles,"full historical loop wraps without advancing the original transport clock")
	await click(demo.gallery.panel.stop_button)
	var resumed:bool=demo.life.is_processing() and not demo.music.phonograph.active and demo.gallery.preview_id.is_empty()
	for stem:String in demo.music.STEMS:resumed=resumed and demo.music._players[stem].stream==streams[stem]
	check(resumed,"stop needle restores actual original streams and life processing")
	check(absf(fposmod(float(demo.music._players.concert.get_playback_position())-paused_position+12.,24.)-12.)<.4,"original music resumes at its paused phase after a complete historical loop")
	demo.life.set_process(false)
	var legacy:=State.new();legacy.initialize()
	var cover:=Image.create(32,24,false,Image.FORMAT_RGB8);cover.fill(Color("638b75"))
	var old:Dictionary=demo.gallery.library.save("老河湾",legacy.snapshot(),demo.gallery._view(),cover)
	check(old.ok,"legacy seven-field collection version remains supported")
	demo.gallery.play_work(str(old.id));await process_frame
	check(demo.music.phonograph.active and Phono.valid(demo.music.phonograph.mix),"old collection reconstructs a playable city-specific score")
	demo.music.set_muted(true);await process_frame
	check(demo.music._players.values().all(func(player):return player.volume_db<=-79.),"mute still silences every historical voice")
	demo.gallery.close_panel();await process_frame
	check(demo.music._players.values().all(func(player):return player.volume_db<=-79.),"lifting the needle preserves the player's mute preference")
	demo.music.set_muted(false)
	check(not demo.music.phonograph.active and not demo.gallery.panel.visible,"closing gallery always lifts the needle and resumes original mix")
	var stable:bool=demo.music._players.size()==12 and demo.music._effects.size()==4
	for player:AudioStreamPlayer in demo.music._players.values():stable=stable and player.get_instance_id() in player_ids
	check(stable,"all preview and tonal changes retain the original twelve long/four short nodes")
	var heritage:Dictionary=await preload("res://tools/fixtures/city_creation_heritage_life_live.gd").new().run(demo)
	for label:String in heritage.checks:check(bool(heritage.checks[label]),"M20: "+label)
	var report:Dictionary={"checks":checks,"failures":failures,"peak":peak,"ok":failures.is_empty(),"archive":demo.gallery.archive.summary()}
	FileAccess.open(OUT+"/live_report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PHONOGRAPH_LIVE ",JSON.stringify(report))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
