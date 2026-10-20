extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_large_town_fixture.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/分档生活调度_2026-10-18"
var demo
var checks: Array=[]
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _metrics(values: Array[float])->Dictionary:
	values.sort();var total:=0.
	for value: float in values:total+=value
	return {"count":values.size(),"mean_ms":total/values.size(),"p95_ms":values[int(values.size()*.95)],"max_ms":values[-1]}
func _wait()->void:
	var until:=Time.get_ticks_msec()+90000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.music.audio_report.is_empty()) and Time.get_ticks_msec()<until:await process_frame
	await physics_frame;await process_frame
func _camera(at: Vector3,zoom_value: float)->void:
	demo.focus=at;demo.zoom=zoom_value;demo.yaw=.4;demo.pitch=.7;demo._update_camera();demo.town.clear_preview()
func _capture(name: String)->void:
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name+".png")
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var city:=Fixture.build(300,true);var rails: Array[Vector2]=[Vector2(-16,0),Vector2(-1,0)]
	assert(city.add_road(rails,"tram").ok)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	demo._after_edit(demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))),"history");await _wait()
	demo.remove_child(demo.life);demo.life.queue_free();demo._setup_life();demo.life.set_process(false)
	demo.ui_layer.visible=false;_camera(Vector3(0,0,0),94.)
	_check(DisplayServer.get_name()!="headless" and demo.town.buildings.get_child_count()==300 and demo.life.residents.size()==298 and demo.life.tram.cars.size()==1,"actual GL scene renders 300 four-era houses, 298 residents and one real streetcar")
	await _capture("300屋四时代电车全景")
	_camera(Vector3(-25,0,-25),12.)
	var origins: Dictionary={};var moving:=0
	for resident: Dictionary in demo.life.residents:
		origins[resident.home_id]=demo.life.citizen_position(resident)
		if not resident.paused and resident.route.size()>1:resident.wait=0.;moving+=1
	var last:=Time.get_ticks_usec()
	for i in range(180):
		await process_frame;var now:=Time.get_ticks_usec();demo.life._process((now-last)/1000000.);last=now
	var cpu: Array[float]=[];var wall: Array[float]=[]
	var stages: Dictionary={};demo.life.profile_tick=true
	for i in range(900):
		await process_frame;var now:=Time.get_ticks_usec();var began:=Time.get_ticks_usec()
		demo.life._process((now-last)/1000000.);cpu.append((Time.get_ticks_usec()-began)/1000.);wall.append((now-last)/1000.);last=now
		for key: String in demo.life.tick_profile:stages[key]=float(stages.get(key,0.))+float(demo.life.tick_profile[key])/900000.
	demo.life.profile_tick=false
	var moved:=0;var deferred:=0;var scheduled:=0;var returning: Dictionary={}
	for resident: Dictionary in demo.life.residents:
		if demo.life.citizen_position(resident).distance_to(origins[resident.home_id])>.1:moved+=1
		if resident.has("offscreen_motion"):
			deferred+=1
			if resident.offscreen_motion.deferred:scheduled+=1;returning=resident
	var life_cpu:=_metrics(cpu);var frame_time:=_metrics(wall)
	_check(moving>=200 and moved>=200 and scheduled>=100,"at least 200 residents physically travel and over 100 hidden long legs use timed sampling")
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"life_cpu":life_cpu,"policy":"reference_only"}))
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"frame_time":frame_time,"policy":"reference_only"}))
	await _capture("300屋视野外按时推算")
	if not returning.is_empty():
		var at: Vector3=demo.life.citizen_position(returning);var id: int=returning.node.get_instance_id()
		_camera(at,10.);last=Time.get_ticks_usec()
		for i in range(24):
			await process_frame;var now:=Time.get_ticks_usec();demo.life._process((now-last)/1000000.);last=now
		_check(not returning.has("offscreen_motion") and returning.node.get_instance_id()==id and returning.node.get_child(0).visible and returning.node.position.distance_to(at)<.35,"camera return shows the original resident at the current sampled position without a jump")
		await _capture("回镜恢复真实居民")
	else:_check(false,"hidden resident is available for actual camera-return check")
	var saved: Dictionary=demo.state.snapshot();saved.journey_checkpoint=demo.life.checkpoint();var restored:=State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"actual scheduled large town saves and validates through the existing journey format")
	_check(demo.music.audio_report.get("bank_source","")=="precompiled" and demo.music._effects.size()==4,"scheduled city keeps the production music bank and four short voices")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated live scale check preserves personal save bytes")
	var report: Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"stages_ms":stages,"life_cpu":life_cpu,"frame_time":frame_time,"moving":moving,"moved":moved,"deferred":deferred,"scheduled":scheduled,"lod":demo.life.citizen_lod_stats,"tram":demo.life.tram.report()}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("SCHEDULED_LIFE_LIVE ",JSON.stringify(report))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
