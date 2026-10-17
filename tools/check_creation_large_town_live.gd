extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_large_town_fixture.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/四库路线_2026-10-17/Phase10"
class FixtureInput extends Node:
	func _input(event:InputEvent)->void:get_viewport().set_input_as_handled()
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+120000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _capture(label:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func _metrics(samples:Array[float])->Dictionary:
	samples.sort();var sum:=0.
	for value:float in samples:sum+=value
	return {"mean_ms":sum/samples.size(),"p95_ms":samples[int(samples.size()*.95)],"max_ms":samples[-1]}
func _run()->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var city:=Fixture.build(300,true);print("LARGE_FIXTURE_READY ",city.houses.size())
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);root.add_child(FixtureInput.new());demo.life.set_process(false)
	var restored:Dictionary=demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(restored.ok,"three hundred authored four-era buildings restore through actual production schema")
	demo._after_edit(restored,"history");await _wait();print("LARGE_RENDER_READY")
	demo.remove_child(demo.life);demo.life.queue_free();demo._setup_life();demo.life.set_process(false)
	demo.ui_layer.visible=false;demo.focus=Vector3(0,0,0);demo.zoom=94;demo.yaw=.4;demo.pitch=.83;demo._update_camera();demo.town.clear_preview()
	var eras:Dictionary={}
	for house:Dictionary in demo.state.houses:eras[demo.state.house_era(house)]=true
	_check(demo.town.buildings.get_child_count()==300 and eras.size()==4,"all three hundred real rendered buildings coexist in four district eras on eighty-metre canvas")
	var deadline:=Time.get_ticks_msec()+90000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	await _capture("01_three_hundred_buildings_four_eras_full_canvas")
	var overview:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(180):
		await process_frame;var now:=Time.get_ticks_usec();demo.life._process((now-last)/1000000.);overview.append((Time.get_ticks_usec()-last)/1000.);last=Time.get_ticks_usec()
	demo.focus=Vector3(-25,0,-25);demo.zoom=12;demo.yaw=.45;demo.pitch=.65;demo._update_camera()
	var moving:=0;var origins:Dictionary={}
	for resident:Dictionary in demo.life.residents:
		if not resident.paused and resident.route.size()>1:resident.wait=0.;moving+=1
		origins[resident.home_id]=demo.life.citizen_position(resident)
	_check(demo.life.residents.size()>=200 and moving>=200,"at least two hundred actual residents depart concurrently along existing connected service routes")
	var stages:Dictionary={};demo.life.profile_tick=true
	for i in range(180):
		await process_frame;var now:=Time.get_ticks_usec();demo.life._process((now-last)/1000000.);last=Time.get_ticks_usec()
		for key:String in demo.life.tick_profile:stages[key]=float(stages.get(key,0.))+float(demo.life.tick_profile[key])/180000.
	demo.life.profile_tick=false
	print("LIFE_STAGES ",stages)
	var frames:Array[float]=[];var cpu:Array[float]=[];last=Time.get_ticks_usec()
	for i in range(600):
		await process_frame;var now:=Time.get_ticks_usec();var began:=Time.get_ticks_usec()
		demo.life._process((now-last)/1000000.);cpu.append((Time.get_ticks_usec()-began)/1000.);frames.append((Time.get_ticks_usec()-last)/1000.);last=Time.get_ticks_usec()
	var moved:=0;var deferred:=0
	for resident:Dictionary in demo.life.residents:
		var point:Vector3=demo.life.citizen_position(resident)
		if point.distance_to(origins[resident.home_id])>.1:moved+=1
		if resident.has("offscreen_motion") and point.distance_to(resident.node.position)>.1:deferred+=1
	_check(moved>=200 and deferred>=150,"over two hundred residents truly travel while hidden actors leave scene transforms deferred")
	await _capture("02_active_large_city_near_view_and_scalar_citizens")
	var cpu_metrics:=_metrics(cpu);var frames_metrics:=_metrics(frames)
	_check(cpu_metrics.mean_ms<1.,"production life mean CPU remains below one millisecond with over two hundred actual simultaneous travellers")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"production scale validation preserves personal saved city bytes")
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"houses":demo.state.houses.size(),"residents":demo.life.residents.size(),"moving":moving,"moved":moved,"deferred":deferred,"lod":demo.life.citizen_lod_stats,"life_stages_ms":stages,"life_cpu":cpu_metrics,"near_frames":frames_metrics,"overview_frames":_metrics(overview)}
	FileAccess.open(OUT+"/large_town_live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("LARGE_TOWN_LIVE ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
