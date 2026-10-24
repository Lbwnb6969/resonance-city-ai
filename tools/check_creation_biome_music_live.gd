extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const OUT="res://验证记录/地貌调式与石阶琴键_2026-10-21"
var demo
var checks:=0
var failures:Array[String]=[]
var peaks:Dictionary={}
var ids:Array=[]
var keyboard_road:=""
var pointer_note:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading or not demo.ambience._ready_pcm:await process_frame
	for i in range(12):await process_frame
func build(id:String)->Dictionary:
	var city:=State.new();var valid:bool=city.Biomes.create(city,id).ok
	for i in range(10):valid=city.add_house(Vector2(-6.-3.6*float(i),0)).ok and valid
	for line:Array in [[Vector2(-39.3,1.55),Vector2(-3.8,1.55)],[Vector2(-3.8,0),Vector2(8,0)],[Vector2(-3.8,1.55),Vector2(-3.8,0)]]:
		var points:Array[Vector2]=[];points.assign(line);valid=city.add_road(points).ok and valid
	city.Signatures.refresh(city)
	var placed:Dictionary=city.place_signature("bell_keep",Vector2(-7.8,-3.2))
	valid=placed.ok and valid
	if placed.ok:valid=city.add_road([Vector2(-7.8,-1.65),Vector2(-7.8,1.55)] as Array[Vector2]).ok and valid
	if id=="terraced_peaks":
		var road:Dictionary=city.add_road([Vector2(-32,13),Vector2(-20,13),Vector2(-8,13)] as Array[Vector2])
		valid=road.ok and valid;keyboard_road=str(road.get("road_id",""))
	check(valid,"author ten real homes, roads, bridge and an earned tower in "+id)
	return {"city":city,"venue":str(placed.get("house_id",""))}
func show_city(city:RefCounted,id:String)->void:
	var chosen:={"ok":true,"id":"music_"+id,"title":id,"world":city.snapshot(),"view":{"focus":[-11.,1.,0.],"yaw":demo.yaw,"pitch":demo.pitch,"zoom":24.,"evening":false,"light_phase":0}}
	await demo.gallery._open_chosen(chosen);demo.life.set_process(false);await settle()
func start_record()->AudioEffectRecord:
	var record:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,record);record.set_recording_active(true);return record
func end_record(record:AudioEffectRecord,name:String)->float:
	record.set_recording_active(false);var wave:AudioStreamWAV=record.get_recording();var peak:=0.
	if wave!=null:
		var pcm:PackedByteArray=wave.data
		for i in range(pcm.size()/2):peak=maxf(peak,absf(float(pcm.decode_s16(i*2))/32768.))
		wave.save_to_wav(OUT+"/"+name+".wav")
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==record:AudioServer.remove_bus_effect(0,i)
	peaks[name]=peak;return peak
func capture(name:String)->void:
	demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+name+".png")
func selected_streams(mode:int,stage:bool)->bool:
	var okay:bool=demo.music.harmony_mode()==mode
	for key:String in demo.music.HarmonicEmergence.LEADS:
		var active:String=demo.music._variation_active.get(key,"")
		okay=okay and active.begins_with(key+"/" if mode==0 else "%d/%s/"%[mode,key])
		okay=okay and demo.music._variation_streams.get(active)==demo.music._players[key].stream
	for key:String in ["foundation","air","terrace","concert"]:okay=okay and demo.music._players[key].stream==demo.music._harmony_streams["%d/%s"%[mode,key]]
	return okay
func run()->void:
	if "--fixture-only" in OS.get_cmdline_user_args():
		for id:String in ["sunny_banks","misty_archipelago","sylvan_sanctuary","starlight_nocturne","terraced_peaks"]:
			var fixture:=build(id);var city:RefCounted=fixture.city
			var life=load("res://scripts/world/city_creation_life.gd").new();root.add_child(life);life.set_process(false);life.setup(city)
			var invited:Dictionary=life.invite_landmark_movement(fixture.venue)
			check(invited.ok,"real prepared fixture can invite: "+id+" "+str(invited))
			print("MODAL_FIXTURE ",id," homes=",city.houses.size()," connected=",life.connected_houses.size()," venue=",fixture.venue," rights=",city.signature_unlocks)
			life.free()
		print("MODAL_FIXTURES ",checks-failures.size(),"/",checks," ",failures);quit(0 if failures.is_empty() else 1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=120
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/隔离作品";root.add_child(demo);demo.life.set_process(false);await settle()
	for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
	var cases:Array=["terraced_peaks"] if "--keyboard-only" in OS.get_cmdline_user_args() else ["sunny_banks","misty_archipelago","sylvan_sanctuary","starlight_nocturne","terraced_peaks"]
	for id:String in cases:
		var scene:=build(id);await show_city(scene.city,id)
		var mode:int=Palette.BIOME_MODES[int(demo.state.Biomes.profile(demo.state.biome_seed).voice)]
		var adopt_until:=Time.get_ticks_msec()+26000
		while not selected_streams(mode,false) and Time.get_ticks_msec()<adopt_until:await process_frame
		var clock:float=demo.music._playback_clock();var record:=start_record();await create_timer(3.3).timeout
		var peak:=end_record(record,id+"_日常")
		check(selected_streams(mode,false) and demo.music._players.wood.volume_db>-45.,"actual audible long players use the selected biome key: "+id)
		check(peak>.0001 and peak<.99 and demo.music._playback_clock()>clock+3.,"recorded daily music is audible, unclipped and keeps the transport: "+id)
		demo.select_tool(4);var serial:int=demo.music._pluck_serial;demo.music.play_house("h1")
		var end:=Time.get_ticks_msec()+1800
		while demo.music._pluck_serial==serial and Time.get_ticks_msec()<end:await process_frame
		var report:Dictionary=demo.music.house_pluck_report()
		check(demo.music._pluck_serial>serial and posmod(int(report.get("midi",-1)),12) in Palette.KEY_TONES[mode],"actual roof voice uses the modal note bank: "+id)
		var bar:int=posmod(floori(demo.music._playback_clock()/3.),8)
		demo.music.play_edit("room");await process_frame
		var note:Dictionary=demo.music.get_meta("construction_last_note",{})
		var room_wave:AudioStreamWAV=demo.music._edit_streams.get(str(note.get("stream_key","")))
		check(demo.music._effects.any(func(player):return player.playing and player.stream==room_wave),"actual construction voice uses the same key: "+id)
		await capture(id)
		var invited:Dictionary=demo.life.invite_landmark_movement(scene.venue)
		check(invited.ok,"earned tower invites a real audience: "+id)
		if not invited.ok:continue
		for i in range(1500):
			if demo.life.concert_status().phase!="gathering":break
			demo.life._process(.25);await process_frame
		check(demo.life.concert_status().phase=="playing","real audience reaches the modal landmark: "+id)
		await create_timer(.18).timeout
		check(selected_streams(mode,true),"all native stage voices stay in the biome key: "+id)
		var before:int=demo.state.life_progress.concerts
		if id=="misty_archipelago":
			check(demo.state.set_journey_checkpoint(demo.life.checkpoint()).ok and State.new().restore(demo.state.snapshot()).ok,"real modal movement checkpoint validates with its seed")
			record=start_record();var phrases:Dictionary={};demo.life.set_process(true)
			while demo.life.concert_status().phase!="idle":
				await process_frame
				var playing:Dictionary=demo.music.grand_festival_report()
				if playing.active:phrases[int(playing.phrase)]=str(playing.era)
			demo.life.set_process(false);peak=end_record(record,id+"_真实24秒乐章")
			check(phrases.size()==8 and phrases.get(6)=="tutti" and phrases.get(7)=="tutti" and demo.state.life_progress.concerts==before+1,"real B-Dorian movement completes eight phrases and two tutti once")
			check(peak>.0001 and peak<.99,"real modal landmark recording is audible and unclipped")
		else:
			record=start_record();await create_timer(1.2).timeout;peak=end_record(record,id+"_地标")
			demo.life.cancel_concert();await process_frame
			check(peak>.0001 and peak<.99 and demo.state.life_progress.concerts==before,"real modal stage is audible and cancellation grants no completion: "+id)
		print("MODAL_CITY ",id," mode=",mode)
	# The last world has real terrace stairs and actual returning residents.
	var stairs:Array=demo.life.travel.sites.values().filter(func(site):return site.kind=="stair" and site.road_id==keyboard_road)
	check(not stairs.is_empty() and demo.town.find_child("PianoIvory",true,false)!=null and demo.town.find_child("PianoBasalt",true,false)!=null,"real rendered stone treads contain ivory and basalt piano keys")
	if not stairs.is_empty():
		var stair:Dictionary=stairs[int(stairs.size()/2)]
		demo.focus=Vector3(stair.at.x,float(stair.height),stair.at.y);demo.zoom=14.;demo._update_camera();demo.select_tool(4);demo.spatial_popover.close();await settle()
		var pointer_clock:float=demo.music._playback_clock()
		var move:=InputEventMouseMotion.new();move.position=demo.camera.unproject_position(Vector3(stair.at.x,float(stair.height)+.01,stair.at.y));move.global_position=move.position;root.push_input(move)
		var end:=Time.get_ticks_msec()+1800
		while float(demo.music.get_meta("world_pluck",{}).get("clock",0.))<=pointer_clock and Time.get_ticks_msec()<end:await process_frame
		pointer_note=demo.music.get_meta("world_pluck",{}).duplicate()
		await RenderingServer.frame_post_draw
		var touched:bool=pointer_note.get("kind","")=="stair" and float(pointer_note.get("clock",0.))>pointer_clock and pointer_note.get("source_id")==stair.id
		check(touched and is_instance_valid(demo.world_toys.key_flash) and demo.world_toys.key_flash.is_visible_in_tree(),"this pointer motion plays and visibly lights its exact real stair key")
		if not touched:print("STAIR_PICK ",{"screen":move.position,"pointer":demo.pointer,"ground":demo._ground_at(move.position),"site":stair,"picked":demo.life.travel.point_stair(demo._ground_at(move.position)),"hovered":str(root.gui_get_hovered_control()),"mode":demo.music.attention.report(),"note":pointer_note,"before_clock":pointer_clock})
		await capture("石阶琴键_实际触摸")
		demo.select_tool(0)
		var crossings:={"count":0};demo.life.travel_callback=func(actor,kind,source,at):
			if kind=="stair":crossings.count+=1
			demo.music.queue_travel(actor,kind,source,at)
		demo.focus=Vector3(-23,1.,6);demo.zoom=28.;demo._update_camera();await process_frame
		var record:=start_record();var start_clock:float=demo.music._playback_clock()
		var sculpt_at:float=demo.music.attention.last_sculpt_sec
		for i in range(800):
			demo.life._process(.05);await process_frame
			if crossings.count>=4 and float(demo.music.get_meta("world_pluck",{}).get("clock",0.))>start_clock+1.35:break
		var peak:=end_record(record,"居民真实踏阶")
		check(crossings.count>0 and float(demo.music.get_meta("world_pluck",{}).get("clock",0.))>start_clock and peak>.0001 and peak<.99,"real resident routes cross and play the physical keyboard without an extra voice pool")
		check(demo.music.attention.last_sculpt_sec==sculpt_at and demo.music.attention.current_mode!=demo.music.AttentionMixer.Mode.SCULPTING,"automatic footsteps keep the city choir and its backing gain in ordinary listening mode")
	var after:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():after.append(player.get_instance_id())
	check(after==ids and after.size()==12 and demo.music._effects.size()==4,"all biome keys, landmark music and footsteps reuse the same twelve plus four nodes")
	if "--keyboard-only" in OS.get_cmdline_user_args():
		var spatial:Dictionary=await preload("res://tools/fixtures/city_creation_spatial_metronomes_live.gd").new().run(demo)
		for label:String in spatial.checks:check(spatial.checks[label],"M07 spatial: "+label)
	var result:={"checks":checks,"failures":failures,"ok":failures.is_empty(),"peaks":peaks,"pointer_note":pointer_note}
	FileAccess.open(OUT+("/keyboard_report.json" if "--keyboard-only" in OS.get_cmdline_user_args() else "/report.json"),FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("BIOME_MUSIC_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
