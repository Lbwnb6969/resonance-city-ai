extends SceneTree
## Production Life earns all credits. Accelerated simulation checks feedback,
## not real-time PCM alignment. Branch fixtures are labelled separately.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Feedback = preload("res://scripts/ui/city_creation_household_feedback.gd")
const OUT = "res://验证记录/住宅共鸣反馈_2026-10-17"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {"milestones":[]}

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _audio() -> Array:
	var rows: Array = []
	for player: AudioStreamPlayer in demo.music._players.values(): rows.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects: rows.append(player.get_instance_id())
	return rows
func _capture(label: String) -> void:
	for ignored in range(4): await process_frame
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual GL capture: "+label)
func _run() -> void:
	if DisplayServer.get_name()=="headless" or "--town-example" not in OS.get_cmdline_user_args():
		push_error("Run with actual GL and -- --town-example");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var deadline := Time.get_ticks_msec()+20000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline: await process_frame
	_check(demo.state.houses.size()==28 and int(demo.state.life_progress.purchases)==0 and demo.state.house_improvements.is_empty(),"business sample starts with empty earned history")
	var audio := _audio();var clock: float=demo.music._playback_clock()
	var home := ""
	for house: Dictionary in demo.state.houses:
		if house.role=="residential" and demo.life.house_connected(str(house.id)): home=str(house.id);break
	_check(not home.is_empty(),"a real connected household is selected")
	demo.selected_house=home;demo.select_tool(4);demo.place_panel.visible=true;demo._refresh_place()
	_check(demo.household_info.visible and demo.household_info.text.contains("0 / 3") and demo.household_info.text.contains("开炉备货"),"initial selected home shows zero needs and actual bread next step")
	await _capture("01_初始住宅下一步")
	# Presentation branches only: keep live state/topology unchanged.
	var fixture := State.new();fixture.houses.assign(demo.state.houses.duplicate(true))
	for house: Dictionary in fixture.houses:
		if house.role=="bakery": house.role="residential"
	_check(Feedback.describe(fixture,demo.life,home).contains("用途设为面包坊"),"missing shop guidance does not tell player merely to wait")
	var door: Variant=demo.life.connected_houses[home];demo.life.connected_houses.erase(home)
	_check(Feedback.describe(demo.state,demo.life,home).contains("接到这户门前"),"unconnected home guidance prioritizes its door")
	demo.life.connected_houses[home]=door
	# No ledger writes or construction: Life alone produces, buys, meets and delivers.
	var geometry: Array=[demo.state.houses.duplicate(true),demo.state.roads.duplicate(true),demo.state.terrain_strokes.duplicate(true)]
	var seen: Dictionary={};var fulfilled := "";var simulated := 0.0
	demo.set_process(false)
	while simulated<360.0 and fulfilled.is_empty():
		demo.life._process(.1);simulated+=.1
		for house: Dictionary in demo.state.houses:
			if house.role!="residential": continue
			var id := str(house.id);var info: Dictionary=demo.state.house_harmony(id)
			var signature := str([info.food,info.social,info.craft])
			if seen.get(id,"")!=signature:
				seen[id]=signature
				facts.milestones.append({"id":id,"at":snappedf(simulated,.1),"harmony":info,"text":Feedback.describe(demo.state,demo.life,id)})
			if info.food and info.social and info.craft and int(demo.state.cafe_credits.get(id,{}).get("spent",0))>0:
				fulfilled=id;break
		if int(roundf(simulated*10))%100==0: await process_frame
	_check(not fulfilled.is_empty(),"production Life actually completes bread tea and delivered craft for one household")
	if not fulfilled.is_empty():
		# Range/component fixtures use this actually earned food/tea history;
		# remove craft only in a separate presentation-state copy.
		fixture.houses.assign(demo.state.houses.duplicate(true))
		fixture.cafe_credits=demo.state.cafe_credits.duplicate(true)
		fixture.matinee_credits=demo.state.matinee_credits.duplicate(true)
		var positions: Dictionary=demo.life.positions.duplicate()
		var components: Dictionary=demo.life._network.component_of.duplicate()
		for house: Dictionary in fixture.houses:
			if house.role!="workshop": continue
			var key: String=str(demo.life.connected_houses[house.id])
			demo.life._network.component_of[key]="fixture_disconnected"
		_check(Feedback.describe(fixture,demo.life,fulfilled).contains("同一条能步行相通的小路"),"shop door on another component does not falsely count as reachable")
		demo.life._network.component_of=components
		for house: Dictionary in fixture.houses:
			if house.role=="workshop": demo.life.positions[demo.life.connected_houses[house.id]]=Vector3(200,0,200)
		_check(Feedback.describe(fixture,demo.life,fulfilled).contains("22米内"),"distant workshop guidance respects actual ordinary-delivery range")
		demo.life.positions=positions
		_check(Feedback.describe(fixture,demo.life,fulfilled).contains("第一件木饰送装"),"reachable workshop guides first real installation")
		demo.selected_house=fulfilled;demo._refresh_place()
		_check(demo.household_info.text.contains("3 / 3") and demo.household_info.text.contains("● 麦香  ● 茶叙  ● 匠心") and demo.household_info.text.contains("三项日常已满足"),"selected fulfilled household shows earned needs and next life goal")
		# Simulate a stale displayed value, then let the production half-second
		# UI timer refresh without reselecting, editing or resetting name focus.
		demo.household_info.text="stale";demo.life_ui_timer=0.0
		demo.place_name.grab_focus();demo.place_name.text="尚未提交的街坊名字"
		demo.set_process(true)
		for ignored in range(3): await process_frame
		_check(demo.household_info.text.contains("3 / 3") and demo.place_name.text=="尚未提交的街坊名字" and demo.place_name.has_focus(),"regular UI timer refreshes needs while preserving focused unsubmitted name")
		demo.place_name.release_focus();demo._refresh_place()
		await _capture("02_真实经营三项满足")
		root.size=Vector2i(1024,768)
		for ignored in range(8): await process_frame
		var scroll: ScrollContainer=demo.household_info.get_parent().get_parent();scroll.ensure_control_visible(demo.household_info)
		await process_frame
		_check(demo.place_panel.get_global_rect().end.y<demo.tool_buttons[0].get_global_rect().position.y and scroll.get_global_rect().encloses(demo.household_info.get_global_rect()),"1024 window shows complete household feedback above tools with scrolling")
		await _capture("03_小窗口住宅反馈")
	for house: Dictionary in demo.state.houses:
		if house.role=="bakery": demo.selected_house=str(house.id);break
	demo._refresh_place()
	_check(not demo.household_info.visible and demo.bakery_info.visible,"business selection hides household card and retains real inventory controls")
	_check([demo.state.houses,demo.state.roads,demo.state.terrain_strokes]==geometry,"feedback and natural Life do not edit authored geometry")
	_check(_audio()==audio and demo.music._playback_clock()>clock,"original nine long streams and four short players retain identity and advancing clock")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save untouched")
	facts["simulated_seconds"]=snappedf(simulated,.1);facts["fulfilled_home"]=fulfilled
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"scope":"Life accelerated at 0.1 seconds; actual GL and real selected-house controls; not wall-clock music synchronization evidence"}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("HOUSEHOLD_FEEDBACK ",JSON.stringify(report))
	demo.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	for player: AudioStreamPlayer in demo.ambience.players.values(): player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout
	quit(0 if failures.is_empty() else 1)
