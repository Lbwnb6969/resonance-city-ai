extends SceneTree
## Production scene, real PCM clock, actual checkbox and complete resident concert.
const Scene=preload("res://scenes/city_creation.tscn")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const OUT="res://验证记录/街坊自动配器_2026-10-16"
var demo
var checks: Array[Dictionary]=[]
var failures: Array[String]=[]
var facts: Dictionary={}
var identity: Array=[]
var district_id: String
func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"passed":ok,"label":label})
	if not ok:
		failures.append(label)
		push_error(label)
func _identity() -> Array:
	var rows: Array=[]
	for key: String in Music.STEMS:
		var p: AudioStreamPlayer=demo.music._players[key]
		rows.append([p.get_instance_id(),p.stream.get_instance_id()])
	for p: AudioStreamPlayer in demo.music._effects: rows.append(p.get_instance_id())
	return rows
func _house_roots() -> Dictionary:
	var result: Dictionary={}
	for id: String in demo.town.house_roots: result[id]=demo.town.house_roots[id].get_instance_id()
	return result
func _click(control: Control) -> void:
	var at:=control.get_global_rect().get_center()
	var motion:=InputEventMouseMotion.new()
	motion.position=at;motion.global_position=at
	root.push_input(motion)
	await process_frame
	for down: bool in [true,false]:
		var event:=InputEventMouseButton.new()
		event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down
		root.push_input(event)
		await process_frame
func _wait_edit() -> void:
	var until:=Time.get_ticks_msec()+10000
	while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.edit_pending(),"latest scene edit commits")
func _inside_phrase() -> void:
	var until:=Time.get_ticks_msec()+4000
	while (fposmod(demo.music._playback_clock(),3.0)<0.35 or fposmod(demo.music._playback_clock(),3.0)>0.65) and Time.get_ticks_msec()<until: await process_frame
func _next_daily() -> void:
	var old: int=demo.music._daily_phrase
	var until:=Time.get_ticks_msec()+4000
	while demo.music._daily_phrase==old and Time.get_ticks_msec()<until: await process_frame
	_check(demo.music._daily_phrase!=old and fposmod(demo.music._playback_clock(),3.0)<0.2,"change lands on actual PCM phrase boundary")
func _capture(name_value: String) -> void:
	await process_frame
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")
func _gains_match(mix: Dictionary,concert: bool=false) -> bool:
	var gain: float=-21.0 if concert else float(demo.music._targets.wood)
	for style: String in Music.STYLE_TRACKS:
		var key: String=Music.STYLE_TRACKS[style]
		var w: float=mix.weights.get(style,0.0)
		var expected:=maxf(-60,gain+linear_to_db(w)) if w>0 else -60.0
		if absf(demo.music.target_gain_db(key,concert)-expected)>0.00001: return false
	return true
func _personal() -> PackedByteArray:
	return FileAccess.get_file_as_bytes("user://city_creation_v1.json") if FileAccess.file_exists("user://city_creation_v1.json") else PackedByteArray()
func _run() -> void:
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=_personal()
	demo=Scene.instantiate()
	demo.persistence=false
	demo.collection_directory=OUT+"/isolated_collection"
	root.add_child(demo)
	demo.life.set_process(false)
	demo.focus=Vector3(-8,0.7,0);demo.zoom=22;demo._update_camera()
	var points: Array[Vector2]=[Vector2(-6,-8),Vector2(-6,8)]
	var added: Dictionary=demo.state.add_district(points,10.0,"warm")
	district_id=str(added.get("district_id",""))
	demo._after_edit(added,"terrace")
	await _wait_edit()
	demo.selected_district=district_id
	demo.select_tool(7)
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty(),"production PCM bank loads")
	if demo.music.audio_report.is_empty(): quit(1);return
	identity=_identity()
	_check(identity.size()==demo.music.STEMS.size()+4 and demo.music.get_child_count()==demo.music.STEMS.size()+4,"shared loops and four short voices remain fixed")
	await _next_daily()
	_check(demo.music.daily_source().mix.weights=={"warm":1.0} and _gains_match(demo.music.daily_source().mix),"legacy manual district retains original single-theme gains")
	await _inside_phrase()
	var roots:=_house_roots()
	var heard: Dictionary=demo.music.daily_source().mix.duplicate(true)
	await _click(demo.district_adaptive_button)
	_check(bool(demo.state.districts[0].get("adaptive",false)) and demo.district_adaptive_button.button_pressed,"actual checkbox enables adaptive arrangement")
	_check(roots==_house_roots(),"audio-only toggle preserves all existing house roots")
	_check(demo.music.daily_source().mix==heard and demo.music.district_music_report().pending,"toggle waits for next phrase without replacing heard mix")
	await _next_daily()
	var mix: Dictionary=demo.music.daily_source().mix.duplicate(true)
	_check(mix.secondary=="deep" and absf(float(mix.secondary_weight)-1.2/5.8)<0.00001 and _gains_match(mix),"real left-bank roles choose normalized deep answer")
	await create_timer(1.7).timeout
	_check(demo.music._players.wood_deep.volume_db>-33.0 and demo.music.daily_source().audible,"secondary PCM becomes audible alongside chosen base")
	facts.initial_mix=mix
	await _capture("自动配器_暖庭与深流")
	await _inside_phrase()
	demo._after_edit(demo.state.set_house_role("h3","workshop"),"room")
	await _wait_edit()
	demo._after_edit(demo.state.set_house_role("h5","workshop"),"room")
	await _wait_edit()
	_check(demo.music.daily_source().mix==mix and demo.music.district_music_report().pending,"two actual workshop edits keep current phrase and queue new arrangement")
	await _next_daily()
	var working: Dictionary=demo.music.daily_source().mix.duplicate(true)
	_check(working.secondary=="weave" and working.roles.workshop==2 and _gains_match(working),"actual workshop proportion changes next phrase to weave")
	await _inside_phrase()
	demo._after_edit(demo.state.set_workshop_open("h3",false),"room")
	await _wait_edit()
	demo._after_edit(demo.state.set_workshop_open("h5",false),"room")
	await _wait_edit()
	_check(demo.music.daily_source().mix==working,"business pause does not cut current phrase")
	await _next_daily()
	_check(demo.music.daily_source().mix.secondary=="deep","paused workshops lower actual contribution and restore deep answer")
	await _inside_phrase()
	await _click(demo.district_adaptive_button)
	await _next_daily()
	_check(demo.music.daily_source().mix.weights=={"warm":1.0},"actual checkbox restores exact manual theme on next phrase")
	demo._history(false)
	await _wait_edit()
	_check(bool(demo.state.districts[0].get("adaptive",false)),"real undo restores adaptive intent")
	demo._history(true)
	await _wait_edit()
	_check(not bool(demo.state.districts[0].get("adaptive",false)),"real redo restores manual intent")
	demo._after_edit(demo.state.set_district_adaptive(district_id,true),"terrace",false)
	await _next_daily()
	var path:=OUT+"/自动配器河湾.json"
	var saved: Dictionary=demo.state.save_city(path)
	var loaded=demo.state.get_script().new()
	_check(saved.ok and loaded.load_city(path).ok and loaded.districts==demo.state.districts,"actual JSON save restores adaptive intent")
	root.size=Vector2i(1024,768)
	for i in range(6): await process_frame
	demo._refresh_district()
	await process_frame
	var panel: Rect2=demo.district_panel.get_global_rect()
	var toolbar_y: float=demo.tool_buttons[0].get_global_rect().position.y
	_check(panel.position.x>=0 and panel.end.x<=1024 and panel.end.y<toolbar_y and demo.district_adaptive_button.get_global_rect().end.y<panel.end.y,"1024 window fits real adaptive panel above toolbar")
	facts.panel_rect=[panel.position.x,panel.position.y,panel.size.x,panel.size.y]
	await _capture("1024街坊面板")
	root.size=Vector2i(1440,900)
	# Restore residential homes for a complete real resident journey/concert.
	demo._after_edit(demo.state.set_house_role("h3","residential"),"room")
	await _wait_edit()
	demo._after_edit(demo.state.set_house_role("h5","residential"),"room")
	await _wait_edit()
	demo.selected_house="h4";demo.select_tool(4);demo._refresh_place()
	await process_frame
	await _click(demo.concert_button)
	_check(str(demo.life.concert_status().phase)=="gathering","actual invite button starts real residents")
	for i in range(4000):
		var status: Dictionary=demo.life.concert_status()
		if int(status.arrived)==int(status.invited): break
		demo.life._process(0.1)
	_check(int(demo.life.concert_status().invited)>0 and int(demo.life.concert_status().arrived)==int(demo.life.concert_status().invited),"actual invited residents walk all the way to venue")
	demo.life.set_process(true)
	until=Time.get_ticks_msec()+7500
	while str(demo.life.concert_status().phase)!="playing" and Time.get_ticks_msec()<until: await process_frame
	_check(str(demo.life.concert_status().phase)=="playing","real even-bar clock starts performance")
	var began:=Time.get_ticks_msec()
	var concerts: int=demo.state.life_progress.concerts
	var changed:=false
	var observed:=false
	var finale:=false
	var chorus:=false
	var frozen: Dictionary={}
	var sources: Array=[]
	var last_phrase:=-1
	until=Time.get_ticks_msec()+28000
	while str(demo.life.concert_status().phase)=="playing" and Time.get_ticks_msec()<until:
		await process_frame
		var source: Dictionary=demo.music.active_source()
		var phrase:=int(source.phrase)
		var inside: float=fposmod(demo.music._playback_clock()-demo.music._concert_clock_origin,3.0)
		if inside<0.45: continue
		if phrase!=last_phrase:
			last_phrase=phrase;sources.append(source.duplicate(true))
		if phrase==0 and not changed:
			frozen=source.mix.duplicate(true)
			demo._after_edit(demo.state.set_district_adaptive(district_id,false),"terrace",false)
			_check(demo.music.active_source().mix==frozen and demo.music.district_music_report().pending,"concert local phrase latches heard arrangement through edit")
			changed=true
		if phrase==1 and changed and not observed:
			_check(demo.music.active_source().mix.weights=={"warm":1.0} and _gains_match(demo.music.active_source().mix,true),"next actual concert phrase uses new manual arrangement")
			observed=true
		if bool(source.audible) and phrase>0:
			var rig: Dictionary=demo.town.resonance.diagnostics()
			chorus=chorus or (str(rig.lead_id)==str(source.source_id) and rig.houses.size()>=6)
		if phrase==7 and inside>1.0:
			finale=true
			for key: String in Music.STEMS: finale=finale and demo.music._players[key].volume_db>-32.0
	_check(changed and observed and finale and chorus,"real concert retains house response and original shared-voice finale")
	_check(demo.state.life_progress.concerts==concerts+1 and Time.get_ticks_msec()-began>=23800,"actual 24-second performance completes exactly once")
	facts.concert_sources=sources;facts.concert_wall_ms=Time.get_ticks_msec()-began
	_check(_identity()==identity,"all shared PCM streams and fixed player identities survive edits and complete performance")
	await create_timer(1.6).timeout
	var clock: float=demo.music._playback_clock()
	await _click(demo.music_button)
	var silent: bool=demo.music.muted
	for p: AudioStreamPlayer in demo.music._players.values(): silent=silent and p.volume_linear==0
	_check(silent and not demo.town.resonance.diagnostics().audible,"actual mute immediately clears sound and musical response")
	await _click(demo.music_button)
	await create_timer(1.6).timeout
	_check(not demo.music.muted and demo.music._playback_clock()>clock and _identity()==identity,"unmute preserves continuous PCM clock and voice identities")
	_check(_personal()==personal,"personal saved city remains byte-identical")
	facts.music=demo.music.music_report()
	facts.driver=AudioServer.get_driver_name();facts.display=DisplayServer.get_name()
	demo.music.set_process(false)
	for p: AudioStreamPlayer in demo.music._players.values(): p.stop()
	for p: AudioStreamPlayer in demo.music._effects: p.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	var report: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"scope":"Actual Godot window mouse input, production scene/GPU, PCM-driver clock and complete resident concert; Dummy audio does not prove physical listening."}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true)+"\n")
	print("CREATION_ARRANGEMENT_LIVE ","PASS" if failures.is_empty() else "FAIL"," checks=",checks.size()," failures=",failures)
	quit(0 if failures.is_empty() else 1)
