extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
var OUT="res://验证记录/旗舰示范城_2026-10-18"
var demo
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
var daily_frame_count:=600
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _key(code: int,ctrl: bool=false)->void:
	for pressed: bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.ctrl_pressed=ctrl;event.pressed=pressed;root.push_input(event);await process_frame
func _click(at: Vector2)->void:
	var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	for pressed: bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.global_position=at;event.pressed=pressed;root.push_input(event);await process_frame
func _wait()->void:
	var until:=Time.get_ticks_msec()+90000
	while (demo.gallery.busy or demo.edit_pending() or demo._edit_ui_pending or demo.music.audio_report.is_empty()) and Time.get_ticks_msec()<until:await process_frame
	await physics_frame;await process_frame
func _camera(at: Vector3,zoom_value: float=28.,pitch_value: float=.75,yaw_value: float=.34)->void:
	demo.focus=at;demo.zoom=zoom_value;demo.pitch=pitch_value;demo.yaw=yaw_value;demo._update_camera();demo.town.clear_preview()
func _light(phase: int)->void:
	while demo.light_phase!=phase:demo._toggle_light()
func _capture(name: String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"actual live image saved: "+name)
func _metrics(values: Array[float])->Dictionary:
	values.sort();var total:=0.
	for value: float in values:total+=value
	return {"count":values.size(),"mean_ms":total/values.size(),"p95_ms":values[int(values.size()*.95)],"max_ms":values[-1]}
func _identity()->Array:
	var result: Array=[]
	for key:String in demo.music.STEMS:result.append([demo.music._players[key].get_instance_id(),demo.music._original_streams[key].get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects:result.append(player.get_instance_id())
	return result
func _run()->void:
	if "--native-routes" in OS.get_cmdline_user_args():OUT="res://验证记录/原生寻路_2026-10-18"
	for argument: String in OS.get_cmdline_user_args():
		if argument.begins_with("--out-dir="):OUT=argument.trim_prefix("--out-dir=")
		if argument.begins_with("--daily-frames="):daily_frame_count=argument.trim_prefix("--daily-frames=").to_int()
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var path: String="res://数据/四库共鸣交响大城样例.json";var source:=FileAccess.get_file_as_bytes(path)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);await _wait()
	var identity:=_identity();var original: Dictionary=demo.state.snapshot()
	await _key(KEY_O,true)
	var tabs: TabBar=demo.gallery.panel.tabs;await _click(tabs.global_position+tabs.get_tab_rect(1).get_center());await process_frame
	var button: Button=demo.gallery.panel.open_buttons.get("example_flagship")
	_check(Examples.entries()[0].id=="example_flagship" and button!=null and not button.disabled,"the actual official-examples tab offers flagship first as a valid work")
	if button==null:quit(1);return
	demo.gallery.panel.scroll.ensure_control_visible(button);await process_frame
	await _click(button.get_global_rect().get_center());await _wait();demo.life.set_process(false)
	_check(demo.gallery.last_opened_id=="example_flagship" and demo.town.buildings.get_child_count()==127 and DisplayServer.get_name()!="headless","actual mouse card click opens 127 rendered houses through the production gallery")
	var kept: Dictionary=demo.gallery.library.read(demo.gallery.last_auto_id)
	_check(kept.ok and kept.world.houses==original.houses,"the real switch preserves the previous town in the isolated collection")
	demo.ui_layer.visible=false;_light(0);_camera(Vector3(0,1.2,2),88.,.86)
	await _capture("01_四时代白昼全城")
	var cover: Image=root.get_texture().get_image();cover.resize(480,300,Image.INTERPOLATE_LANCZOS)
	if "--native-routes" not in OS.get_cmdline_user_args():
		_check(cover.save_png("res://资源/界面/示范河湾/example_flagship.png")==OK,"first official card gets an actual 480x300 rendered cover")
	var tours: Array=[
		["02_苔阶高地与毛石台基",Vector3(-25,2,-27),27.,.72,.4],
		["03_圣音书院与喷泉内院",Vector3(-25,1,25),29.,.78,.25],
		["04_铜铃环线与三连拱花房",Vector3(25,1,-20),32.,.72,.4],
		["05_白鹭绿庭与空中连廊",Vector3(23,1,28),29.,.7,.3],
		["06_古钟磨坊与两岸石桥",Vector3(-15,1,8),41.,.8,.6]]
	for tour: Array in tours:_camera(tour[1],tour[2],tour[3],tour[4]);await _capture(tour[0])
	_light(1);_camera(Vector3(0,1.2,2),88.,.86);await _capture("07_四时代暖夕全城")
	_light(2);await _capture("08_四时代星夜全城")
	_camera(Vector3(27,1,-18),25.,.7,.3);await _capture("09_夜色植物宫与总站")
	_light(0);_camera(Vector3(-25,2,-27),23.,.75,.3)
	var wall: Array[float]=[];var cpu: Array[float]=[];var last:=Time.get_ticks_usec()
	facts.slow_daily_ticks=[];facts.quality_callbacks=[];facts.daily_stage_mean_us={};demo.life.profile_tick=true
	demo.town.ecology.stats.max_refresh_us=0
	facts.ecology_before=demo.town.ecology_stats.duplicate()
	facts.purchases_before=int(demo.state.life_progress.purchases)
	for i in range(daily_frame_count):
		await process_frame;var now:=Time.get_ticks_usec();var began:=Time.get_ticks_usec()
		demo.life._process((now-last)/1000000.);cpu.append((Time.get_ticks_usec()-began)/1000.);wall.append((now-last)/1000.);last=now
		for stage:String in ["quality","tram","bakery","workshop","production","lod","citizens","tail","height"]:facts.daily_stage_mean_us[stage]=float(facts.daily_stage_mean_us.get(stage,0.))+float(demo.life.tick_profile.get(stage,0))/daily_frame_count
		if int(demo.life.tick_profile.get("quality_callback",0))>0:facts.quality_callbacks.append(demo.life.tick_profile.duplicate(true))
		if cpu[-1]>4.:facts.slow_daily_ticks.append({"frame":i,"cpu_ms":cpu[-1],"stages_us":demo.life.tick_profile.duplicate(true)})
	demo.life.profile_tick=false
	facts.daily_frames=_metrics(wall);facts.daily_life_cpu=_metrics(cpu)
	facts.position_queries=demo.life._position_cache_stats.duplicate(true)
	facts.ecology=demo.town.ecology_stats.duplicate()
	facts.purchases_after=int(demo.state.life_progress.purchases)
	facts.worker_lod=demo.life.worker_lod.stats.duplicate()
	facts.quality_publication=demo.town.quality_visual.queue_stats.duplicate()
	facts.quality_publication.pending=demo.town.quality_visual.pending_events.size()
	if "--check-quality-queue" in OS.get_cmdline_user_args():
		_check(int(facts.quality_publication.queued)>0 and facts.quality_publication.queued==facts.quality_publication.rendered and int(facts.quality_publication.pending)==0,"actual earned upgrades publish their complete decorations through the frame queue")
	if "--check-palette-views" in OS.get_cmdline_user_args():
		var layout:Dictionary=demo.town.craft.layouts.h61;var entries:Array=demo.town.house_entrances("h61")
		var index:int=demo.state._house_index("h61");var color:int=posmod(int(demo.state.houses[index].palette)+1,4)
		demo._after_edit(demo.state.set_house_palette("h61",color),"history")
		_check(demo.edit_budget_report().mode=="colors" and not demo.edit_pending() and is_same(layout,demo.town.craft.layouts.h61) and is_same(entries,demo.town.house_entrances("h61")),"actual palette fast publication retains prepared craft and entrance geometry")
		facts.palette_publication=demo.edit_budget_report()
	await _capture("10_实际经营与品质刷新")
	_check(demo.life.current_population>=200,"actual flagship daily life supports over 200 inhabitants")
	if "--daily-only" not in OS.get_cmdline_user_args():
		var stage: String=""
		for house: Dictionary in demo.state.houses:
			if house.get("signature","")=="floating_amphitheater":stage=house.id
		demo.ui_layer.visible=true;demo.selected_house=stage;demo.select_tool(4);demo._refresh_place();await process_frame
		_check(demo.concert_button.visible and "跨时代" in demo.concert_button.text,"the actual water-theater panel exposes the grand-symphony action")
		await _click(demo.concert_button.get_global_rect().get_center());demo.ui_layer.visible=false;await process_frame
		_check(demo.life._concert.get("grand_festival",false) and demo.life._concert.era_cast.size()==4,"actual action invites four era sources and their real audience")
		# Prepare the real walk with accelerated simulation only; the complete
		# subsequent 24-second PCM performance runs on unmodified real time.
		for tick in range(7000):
			var status: Dictionary=demo.life.concert_status()
			if status.phase=="playing" or status.arrived==status.invited:break
			demo.life._process(.1)
			if tick%100==0:await process_frame
		var gathered: Dictionary=demo.life.concert_status()
		_check(gathered.arrived==gathered.invited and int(gathered.invited)>=100,"over one hundred actual residents reach the shoreline venue before performance")
		facts.gathered=gathered;facts.tram=demo.life.tram.report()
		_light(1);_camera(Vector3(2,1.2,8),76.,.83,.34)
		var before: int=demo.state.life_progress.concerts;var phrases: Dictionary={};wall.clear();last=Time.get_ticks_usec()
		demo.life.set_process(true);var until:=Time.get_ticks_msec()+40000;var checkpoint_ok:=false
		while Time.get_ticks_msec()<until:
			await process_frame;var now:=Time.get_ticks_usec();wall.append((now-last)/1000.);last=now
			var report: Dictionary=demo.music.grand_festival_report()
			if report.active and float(report.elapsed)>int(report.phrase)*3.+.8 and not phrases.has(int(report.phrase)):
				phrases[int(report.phrase)]={"era":report.era,"source":report.source_id,"audible":demo.music.active_source().audible,"elapsed":report.elapsed,"remote":report.remote}
				if int(report.phrase) in [2,7]:await _capture("10_交响乐句_"+str(report.phrase));last=Time.get_ticks_usec()
			if report.active and report.elapsed>10. and not checkpoint_ok:
				var save: Dictionary=demo.state.snapshot();save.journey_checkpoint=demo.life.checkpoint();var clone:=State.new();checkpoint_ok=clone.restore(JSON.parse_string(JSON.stringify(save,"",true,true))).ok
			if int(demo.state.life_progress.concerts)>before:break
		demo.life.set_process(false)
		_check(phrases.size()==8 and phrases.get(0,{}).get("era","")=="pastoral" and phrases.get(2,{}).get("era","")=="renaissance" and phrases.get(4,{}).get("era","")=="clockwork" and phrases.get(6,{}).get("era","")=="modern_eco" and phrases.get(7,{}).get("era","")=="tutti","actual uninterrupted PCM visits four eras and full tutti over eight real-time phrases")
		var audible:=true
		for phrase: Dictionary in phrases.values():audible=audible and bool(phrase.audible)
		_check(audible and checkpoint_ok and int(demo.state.life_progress.concerts)==before+1,"all phrases are audible, intermediate real save validates and the entire performance settles once")
		facts.phrases=phrases;facts.symphony_frames=_metrics(wall)
	_check(_identity()==identity and demo.music._effects.size()==4,"flagship loading touring and symphony preserve the original fixed music players and bank")
	_check(FileAccess.get_file_as_bytes(path)==source and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"the full real tour preserves both shipped source and personal save bytes")
	var report: Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+("/daily_live.json" if "--daily-only" in OS.get_cmdline_user_args() else "/live.json"),FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("FLAGSHIP_LIVE ",JSON.stringify({"ok":report.ok,"count":checks.size(),"failures":failures,"facts":facts}))
	demo.set_process(false);demo.music.set_process(false);demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
