extends "res://tools/check_creation_placed_landmarks_live.gd"
const AudioProbe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
const Cache=preload("res://scripts/audio/city_creation_core_score_cache.gd")
const Phono=preload("res://scripts/audio/city_creation_phonograph.gd")
func history()->Dictionary:
	return {"journey":demo.state.harmony_journey.duplicate(true),"memories":demo.state.growth_memories.duplicate(),"archive":demo.state.archive_unlocks.duplicate(),"life":demo.state.life_progress.duplicate(true)}
func native_at(at:Vector2)->void:
	var motion_event:=InputEventMouseMotion.new();motion_event.device=92;motion_event.position=at;motion_event.global_position=at;root.push_input(motion_event);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func open_modes()->void:
	if not demo.gallery.panel.visible:await ui_click(demo.gallery_button);await settle()
	var tabs:TabBar=demo.gallery.panel.tabs
	if tabs.current_tab!=2:await native_at(tabs.global_position+tabs.get_tab_rect(2).get_center());await settle()
	check(demo.gallery.panel.visible and tabs.current_tab==2,"native collection opens mode page")
func reveal_mode(id:String)->void:
	demo.gallery.panel.scroll.ensure_control_visible(demo.gallery.panel.mode_buttons[id]);await settle()
func sounding(mode:int)->bool:
	var id:String=demo.music._variation_active.get("foundation","")
	var data:=Cache.parse(id)
	return demo.music.harmony_mode()==mode and ((not data.is_empty() and data.mode==mode) or id==str(mode)+"/foundation") and demo.music._players.foundation.stream==demo.music._harmony_streams.get(id)
func run()->void:
	OUT="res://验证记录/M84/free_mode_access_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	var city:=State.new();city.initialize_free()
	for x:float in [-25.,-21.4,-17.8]:check(city.add_house(Vector2(x,-12)).ok,"public free choir house")
	await show(city,Vector2(-21.4,-12),"自由调式");quiet();var original:=history();var recordings:Dictionary={}
	check(DisplayServer.get_name()!="headless" and AudioServer.get_driver_name()=="WASAPI","actual OpenGL and WASAPI")
	await open_modes();var panel:Control=demo.gallery.panel
	check(panel.mode_buttons.values().all(func(button):return not button.disabled) and original.archive.is_empty(),"native free mode choices require no awards")
	panel.set_busy(true);check(panel.mode_buttons.values().all(func(button):return button.disabled),"busy disables actual mode controls")
	panel.set_busy(false);check(panel.mode_buttons.values().all(func(button):return not button.disabled),"busy release keeps free choices open")
	for id:String in ["gong_pentatonic","impressionist_major7"]:
		var mode:int=8 if id=="gong_pentatonic" else 9
		await reveal_mode(id);await ui_click(panel.mode_buttons[id]);await settle();quiet()
		check(demo.state.music_mode==id and demo.music.harmony_mode()==mode,"native button chooses actual mode "+id)
		check(await wait_for(func():return sounding(mode),28000),"same production player installs mode foundation "+id)
		var roles:Dictionary=demo.music.get_meta("chamber_roles",{})
		check(int(roles.get("mode",-1))==mode and roles.get("roles",{}).values().filter(func(r):return r.get("layer",0)==3).size()<=1,"shared mode and unique lead budget "+id)
		var bar:int=demo.music.CueGrid.bar(demo.music._playback_clock())
		check(demo.music._edit_streams.room==demo.music._harmony_streams["%d/edit/room/%d"%[mode,bar]],"actual construction cue stream uses selected mode "+id)
		var serial:int=demo.music._pluck_serial;var queued:bool=demo.music.play_house("h1")
		check(queued and await wait_for(func():return demo.music._pluck_serial>serial and demo.music._pluck_active.get("house_id","")=="h1",2000),"actual quantized house note plays in selected context "+id)
		var pluck:Dictionary=demo.music._pluck_active
		check(not pluck.is_empty() and posmod(int(pluck.get("midi",-1)),12) in demo.music.Palette.KEY_TONES[mode] and demo.music._pluck_player.stream==demo.music._edit_streams.get(pluck.get("stream_key","")),"actual pooled note has selected scale and stream "+id)
		var mix:Dictionary=Phono.capture(demo.music)
		check(Phono.valid(mix) and int(mix.mode)==mode,"work mix retains selected mode "+id)
		recordings[id]={"pcm":await AudioProbe.record(OUT+"/"+id+".wav",3.2),"foundation":demo.music._variation_active.get("foundation",""),"mix":mix}
		check(recordings[id].pcm.ok,"actual unclipped PCM "+id)
		var cold:=State.new();var path:=OUT+"/"+id+".json"
		check(demo.state.save_city(path).ok and cold.load_city(path).ok and cold.music_mode==id and cold.archive_unlocks.is_empty(),"native chosen mode survives disk without award "+id)
		await capture("mode_"+id)
		await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();quiet();check(demo.state.music_mode!=id,"native Undo reverses selected mode "+id)
		await key(KEY_Y,true);await settle();quiet();check(demo.state.music_mode==id,"native Redo restores selected mode "+id)
		await open_modes()
	check(history()==original,"mode selections and Undo never invent XP, award, chapter or activity")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await settle();await reveal_mode("impressionist_major7")
		check(Rect2(Vector2.ZERO,Vector2(size)).encloses(panel.mode_buttons.impressionist_major7.get_global_rect()),"actual mode control fits "+str(size.x));await capture("mode_controls_"+str(size.x))
	await reveal_mode("");await ui_click(panel.mode_buttons[""]);await settle();quiet();check(demo.state.music_mode.is_empty(),"native automatic option restores neutral choice")
	await key(KEY_ESCAPE)
	var cold:=State.new();check(cold.load_city(OUT+"/impressionist_major7.json").ok,"independent chosen mode reload")
	await show(cold,Vector2(-21.4,-12),"调式冷读");quiet();check(await wait_for(func():return sounding(9),28000),"cold mode reconstructs actual matching stream")
	var classic:=State.new();classic.initialize_empty();await show(classic,Vector2(-21.4,-12),"经典调式");quiet();await open_modes()
	check(panel.mode_buttons.gong_pentatonic.disabled and panel.mode_buttons.impressionist_major7.disabled,"legacy switch retains original mode locks")
	panel.set_busy(true);panel.set_busy(false);check(panel.mode_buttons.gong_pentatonic.disabled,"legacy busy release cannot grant mode")
	await key(KEY_ESCAPE);var converted:Dictionary=demo.state.CreationPolicy.convert(demo.state,OUT+"/converted.json")
	demo._after_edit(converted,"history");await settle();quiet();await open_modes()
	check(converted.ok and not panel.mode_buttons.gong_pentatonic.disabled and not panel.mode_buttons.impressionist_major7.disabled,"same-city conversion refreshes actual permissions")
	await key(KEY_ESCAPE);await show(cold,Vector2(-21.4,-12),"自由调式恢复");quiet()
	check(demo.state.music_mode=="impressionist_major7" and history()==original,"return to work retains chosen mode and exact history")
	check(pool()==voices and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"original voice pool and personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"recordings":recordings,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.,"bank_signature":demo.music.BankCache.source_signature()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("FREE_MODE_ACCESS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
