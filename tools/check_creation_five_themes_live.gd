extends SceneTree
## Godot Window input injection, not OS keystrokes: actual OptionButton popup
## handlers and item_selected callbacks feed a complete device-clock concert.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const OUTPUT="res://验证记录/五音乐主题_2026-10-16/live"
var demo: Node3D
var checks:=0
var failures: Array[String]=[]
var selections: Array[Dictionary]=[]
var concert_sources: Array[Dictionary]=[]
var measurements: Array[Dictionary]=[]
var identity: Array=[]
var frames: Array[float]=[]
var last_usec:=0
var sampling:=false
var max_draw:=0.0

func _initialize() -> void: _run.call_deferred()
func _process(_delta: float) -> bool:
	var now:=Time.get_ticks_usec()
	if sampling and last_usec>0:
		frames.append((now-last_usec)/1000.0)
		max_draw=maxf(max_draw,Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	last_usec=now
	return false
func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)
func _identity() -> Array:
	var result: Array=[]
	for key: String in Music.STEMS:
		var player: AudioStreamPlayer=demo.music._players[key]
		result.append([key,player.get_instance_id(),player.stream.get_instance_id()])
	for effect: AudioStreamPlayer in demo.music._effects: result.append(effect.get_instance_id())
	return result
func _mouse(at: Vector2) -> void:
	var motion:=InputEventMouseMotion.new()
	motion.position=at
	motion.global_position=at
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event:=InputEventMouseButton.new()
		event.position=at
		event.global_position=at
		event.button_index=MOUSE_BUTTON_LEFT
		event.pressed=pressed
		root.push_input(event)
		await process_frame
func _key(code: int,target: Window=null) -> void:
	if target==null: target=root
	for pressed: bool in [true,false]:
		var event:=InputEventKey.new()
		event.keycode=code
		event.pressed=pressed
		if target is PopupMenu:
			# Input dispatch routes keys to the active native popup, then calls
			# Window::_window_input / PopupMenu::_input_from_window. A direct
			# Viewport.push_input bypasses that handler; window_input.emit also
			# skips it. This is the public input route, never a business signal.
			event.window_id=target.get_window_id()
			Input.parse_input_event(event)
		else: target.push_input(event)
		await process_frame
func _wait_edit() -> void:
	var until:=Time.get_ticks_msec()+10000
	while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.edit_pending(),"latest scene edit publishes")
func _capture(label: String) -> void:
	await process_frame
	await process_frame
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")
func _start_sampling() -> void:
	frames.clear()
	max_draw=0.0
	last_usec=Time.get_ticks_usec()
	sampling=true
func _finish_sampling(label: String) -> void:
	sampling=false
	frames.sort()
	measurements.append({"label":label,"frames":frames.size(),"wall_p95_ms":frames[int((frames.size()-1)*0.95)] if not frames.is_empty() else 0.0,"wall_max_ms":frames[-1] if not frames.is_empty() else 0.0,"max_draw_calls":max_draw})
func _same_authoring(before: Dictionary) -> bool:
	return demo.state.houses==before.houses and demo.state.roads==before.roads and demo.state.plants==before.plants and demo.state.waters==before.waters and demo.state.life_progress==before.life_progress
func _choose_style(index: int) -> bool:
	# Input starts well inside a real phrase so the previous source can be
	# observed before the next downbeat, without a synthetic music view.
	var until:=Time.get_ticks_msec()+3500
	while (fposmod(demo.music._playback_clock(),3.0)<0.35 or fposmod(demo.music._playback_clock(),3.0)>0.85) and Time.get_ticks_msec()<until: await process_frame
	var old: Dictionary=demo.music.daily_source().duplicate(true)
	var before: Dictionary=demo.state.snapshot()
	var requested: String=demo.DISTRICT_STYLES[index]
	await _mouse(demo.district_style_picker.get_global_rect().get_center())
	var popup: PopupMenu=demo.district_style_picker.get_popup()
	_check(popup.visible,"actual style button opens five-item popup")
	if not popup.visible: return false
	# PopupMenu supports ui_up/down/accept, not Home. Avoid wrapping from
	# index zero by sending only as many Up events as its focused index.
	if popup.get_focused_item()<0: await _key(KEY_DOWN,popup)
	for ignored in range(popup.get_focused_item()): await _key(KEY_UP,popup)
	for ignored in range(index): await _key(KEY_DOWN,popup)
	await _key(KEY_ENTER,popup)
	demo.district_style_picker.release_focus()
	await _wait_edit()
	var pending: Dictionary=demo.music.district_music_report()
	var selected: bool=demo.district_style_picker.selected==index and str(demo.state.districts[0].style)==requested
	_check(selected,"real popup chooses "+requested)
	if not selected: return false
	_check(str(demo.music.daily_source().style)==str(old.style) and str(demo.music.daily_source().source_id)==str(old.source_id) and bool(pending.pending),"previous audible source retained while "+requested+" waits for boundary")
	_check(_same_authoring(before),"style choice preserves all geometry, identities and progress")
	var begin:=Time.get_ticks_msec()
	until=begin+4100
	while str(demo.music.daily_source().style)!=requested and Time.get_ticks_msec()<until: await process_frame
	var boundary: float=fposmod(demo.music._playback_clock(),3.0)
	_check(str(demo.music.daily_source().style)==requested and boundary<0.18,"actual audio downbeat commits "+requested)
	until=Time.get_ticks_msec()+1600
	var track: String=Music.STYLE_TRACKS[requested]
	while demo.music._players[track].volume_db<=-30.0 and Time.get_ticks_msec()<until: await process_frame
	for ignored in range(3): await process_frame
	var source: Dictionary=demo.music.daily_source()
	var rig: Dictionary=demo.town.resonance.diagnostics()
	_check(bool(source.audible) and demo.music._players[track].volume_db>-30.0 and str(source.district_id)==str(demo.state.districts[0].id),"real "+requested+" PCM voice becomes audible for a member house")
	_check(str(rig.lead_id)==str(source.source_id) and float(rig.houses[str(source.source_id)].lead)>0.5,"audible "+requested+" source owns its house rig")
	_check(_identity()==identity,"nine PCM/player identities remain stable after "+requested)
	selections.append({"style":requested,"boundary_phase":boundary,"latency_ms":Time.get_ticks_msec()-begin,"source":source,"pending_before":pending,"gain_db":demo.music._players[track].volume_db})
	if requested in ["market","sylvan"]: await _capture("daily_"+requested)
	return true

func _abort_menu() -> void:
	if sampling: _finish_sampling("aborted_menu_input")
	var report: Dictionary={"ok":false,"checks":checks,"failures":failures,"aborted":"popup input did not select requested style; concert intentionally not started","input":"Godot Input.parse_input_event with native popup window_id; root Viewport.push_input for mouse","display":DisplayServer.get_name(),"selections":selections,"performance":measurements,"music":demo.music.music_report()}
	var file:=FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("FIVE_THEMES_LIVE_RESULT ",JSON.stringify(report))
	demo.queue_free()
	await process_frame
	quit(1)

func _run() -> void:
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.life.set_process(false)
	for house: Dictionary in demo.state.houses: house.auto_matinee=false
	demo.focus=Vector3(-8,0.7,0)
	demo.zoom=22
	demo.pitch=0.70
	demo._update_camera()
	var points: Array[Vector2]=[Vector2(-10,-8),Vector2(0,-8),Vector2(0,8),Vector2(-10,8),Vector2(-10,-8)]
	var added: Dictionary=demo.state.add_district(points,6.0,"warm")
	_check(added.ok,"real district encloses the five left-bank houses")
	demo._after_edit(added,"terrace")
	await _wait_edit()
	demo.selected_district=str(added.get("district_id",""))
	demo.select_tool(7)
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty(),"production nine-theme PCM bank loads")
	if demo.music.audio_report.is_empty(): quit(1); return
	_check(demo.music._players.size()==9 and demo.music._effects.size()==4 and demo.district_style_picker.item_count==5,"actual UI and audio budgets expose five choices, nine loops, four effects")
	identity=_identity()
	until=Time.get_ticks_msec()+4000
	while not bool(demo.music.daily_source().audible) and Time.get_ticks_msec()<until: await process_frame
	_start_sampling()
	for index in [1,2,0,3,4]:
		var selected: bool=await _choose_style(index)
		if not selected:
			await _abort_menu()
			return
	_finish_sampling("five_real_menu_choices")
	# Leave the main district in market and give only actual h1 a woodland
	# identity. Concert membership continues to come from real life/routes.
	var market_selected: bool=await _choose_style(3)
	if not market_selected:
		await _abort_menu()
		return
	var woodland: Array[Vector2]=[Vector2(-8,-6)]
	added=demo.state.add_district(woodland,3.2,"sylvan")
	demo._after_edit(added,"terrace")
	await _wait_edit()
	_check(demo.state.district_members(str(added.get("district_id","")))==["h1"],"woodland reply belongs to exactly one real house")
	var save_path:=OUTPUT+"/five_themes_city.json"
	var saved: Dictionary=demo.state.save_city(save_path)
	var loaded:=State.new()
	var restored: Dictionary=loaded.load_city(save_path)
	_check(saved.ok and restored.ok and loaded.districts==demo.state.districts and loaded.houses==demo.state.houses,"five-style actual city saves and reloads with exact source identities")
	demo.selected_house="h4"
	demo.select_tool(4)
	demo._refresh_place()
	await process_frame
	await _mouse(demo.concert_button.get_global_rect().get_center())
	_check(str(demo.life.concert_status().phase)=="gathering","actual invite button starts real neighborhood journeys")
	for tick in range(4000):
		var status: Dictionary=demo.life.concert_status()
		if int(status.arrived)==int(status.invited): break
		demo.life._process(0.1)
	_check(int(demo.life.concert_status().invited)>0 and int(demo.life.concert_status().arrived)==int(demo.life.concert_status().invited),"all actual residents walk to the venue before performance")
	demo.life.set_process(true)
	until=Time.get_ticks_msec()+7500
	while str(demo.life.concert_status().phase)!="playing" and Time.get_ticks_msec()<until: await process_frame
	_check(str(demo.life.concert_status().phase)=="playing","real device-aligned downbeat begins concert")
	var start:=Time.get_ticks_usec()
	var start_clock: float=demo.music._playback_clock()
	var count_before: int=demo.state.life_progress.concerts
	var seen_market:=false
	var seen_sylvan:=false
	var seen_finale:=false
	var last_phrase:=-1
	_start_sampling()
	until=Time.get_ticks_msec()+28000
	while str(demo.life.concert_status().phase)=="playing" and Time.get_ticks_msec()<until:
		await process_frame
		var source: Dictionary=demo.music.active_source()
		var phrase: int=source.get("phrase",-1)
		var status: Dictionary=demo.life.concert_status()
		var inside: float=fposmod(float(status.elapsed),3.0)
		if inside<0.9: continue
		if phrase!=last_phrase:
			last_phrase=phrase
			concert_sources.append({"source":source.duplicate(true),"status":status.duplicate(true),"clock":demo.music._playback_clock(),"gains":demo.music.music_report().gains_db})
		if str(source.get("style",""))=="market" and str(source.get("role",""))=="lead" and bool(source.audible):
			seen_market=seen_market or demo.music._players.wood_market.volume_db>-30.0
		if str(source.get("style",""))=="sylvan" and str(source.get("role",""))=="answer" and bool(source.audible):
			if not seen_sylvan: await _capture("concert_sylvan_answer")
			seen_sylvan=seen_sylvan or demo.music._players.wood_sylvan.volume_db>-30.0
		if phrase==7 and bool(source.audible):
			if not seen_finale: await _capture("concert_nine_voice_finale")
			var all_open:=true
			for key: String in Music.STEMS: all_open=all_open and demo.music._players[key].volume_db>-32.0
			seen_finale=seen_finale or all_open
	_finish_sampling("real_twenty_four_second_concert")
	var duration_ms: float=(Time.get_ticks_usec()-start)/1000.0
	_check(seen_market and seen_sylvan and seen_finale,"real performance hears market lead, woodland house reply and nine-voice finale")
	_check(demo.state.life_progress.concerts==count_before+1 and str(demo.life.concert_status().phase)=="idle" and duration_ms>=23800.0,"one complete actual 24-second performance ends exactly once")
	_check(demo.music._playback_clock()-start_clock>=23.8 and _identity()==identity,"full performance retains real transport and all voice/stream identities")
	until=Time.get_ticks_msec()+4000
	while not bool(demo.music.daily_source().audible) and Time.get_ticks_msec()<until: await process_frame
	_check(bool(demo.music.daily_source().audible) and not demo.music.concert_active,"completed concert returns to audible everyday theme")
	var clock: float=demo.music._playback_clock()
	await _mouse(demo.music_button.get_global_rect().get_center())
	for ignored in range(3): await process_frame
	var silent: bool=demo.music.muted
	for player: AudioStreamPlayer in demo.music._players.values(): silent=silent and player.volume_linear==0.0
	var cleared:=not bool(demo.town.resonance.diagnostics().audible)
	for row: Dictionary in demo.town.resonance.rigs.values(): cleared=cleared and is_zero_approx(float(row.material.get_shader_parameter("response")))
	_check(silent and cleared,"actual mute button immediately silences loops and clears musical rig response")
	await _mouse(demo.music_button.get_global_rect().get_center())
	until=Time.get_ticks_msec()+1600
	while not bool(demo.music.daily_source().audible) and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.muted and demo.music._playback_clock()>clock and _identity()==identity,"actual unmute preserves advancing transport and nine shared loops")
	await _capture("returned_daily_after_concert")
	var report: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"input":"Godot Input.parse_input_event with native popup window_id; root Viewport.push_input for mouse","display":DisplayServer.get_name(),"selections":selections,"concert_sources":concert_sources,"concert_duration_ms":duration_ms,"performance":measurements,"music":demo.music.music_report()}
	var file:=FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("FIVE_THEMES_LIVE_RESULT ",JSON.stringify(report))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
