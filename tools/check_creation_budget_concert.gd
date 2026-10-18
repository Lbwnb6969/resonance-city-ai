extends SceneTree
## A real 24-second PCM performance must survive asynchronous street edits.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const SOURCE="res://tools/fixtures/long_road_baseline.json"
const OUTPUT="res://验证记录/分帧编辑_2026-10-15/concert"
class FixtureInput extends Node:
	func _input(event: InputEvent) -> void:
		if event.device!=92: get_viewport().set_input_as_handled()
var demo: Node3D
var checks:=0
var failures: Array[String]=[]
var frames: Array[float]=[]
var previous_usec:=0
var sampling:=false

func _initialize() -> void: _run.call_deferred()
func _process(_delta: float) -> bool:
	var now:=Time.get_ticks_usec()
	if sampling and previous_usec>0: frames.append((now-previous_usec)/1000.0)
	previous_usec=now
	return false
func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)
func _wait_ready() -> void:
	var until:=Time.get_ticks_msec()+20000
	while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.edit_pending(),"latest concert edit finishes")
func _key(code: int) -> void:
	var event:=InputEventKey.new()
	event.device=92
	event.keycode=code
	event.ctrl_pressed=true
	event.pressed=true
	root.push_input(event)
func _capture(label: String) -> void:
	await process_frame
	await process_frame
	root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")

func _run() -> void:
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	root.add_child(FixtureInput.new())
	demo.life.set_process(false)
	var original: Dictionary=JSON.parse_string(FileAccess.get_file_as_string(SOURCE))
	original.journey_checkpoint={}
	for house: Dictionary in original.houses: house.auto_matinee=false
	_check(demo.state.restore(original).ok,"actual ten-road city restores")
	demo._after_edit({"ok":true,"message":"河湾相约"},"history")
	await _wait_ready()
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	var identity: Dictionary={}
	for key: String in demo.music.STEMS: identity[key]=[demo.music._players[key].get_instance_id(),demo.music._players[key].stream.get_instance_id()]
	demo.selected_house="h4"
	demo.select_tool(4)
	_check(demo.life.invite_concert("h4").ok,"real residents invited to connected venue")
	for tick in range(4000):
		var status: Dictionary=demo.life.concert_status()
		if int(status.arrived)==int(status.invited): break
		demo.life._process(0.1)
	_check(int(demo.life.concert_status().arrived)==int(demo.life.concert_status().invited),"all actual listeners arrive via exact road network")
	demo.life.set_process(true)
	until=Time.get_ticks_msec()+8000
	while demo.life.concert_status().phase!="playing" and Time.get_ticks_msec()<until: await process_frame
	_check(demo.life.concert_status().phase=="playing","actual live shared downbeat starts concert")
	var start_usec:=Time.get_ticks_usec()
	var clock_start: float=demo.music._playback_clock()
	var count_before: int=demo.state.life_progress.concerts
	await _capture("01_real_performance_before_edit")
	while Time.get_ticks_usec()-start_usec<2000000: await process_frame
	frames.clear()
	sampling=true
	var points: Array[Vector2]=[]
	for index in range(71):
		var t:=index/70.0
		points.append(Vector2(-15.5+1.7*sin(t*TAU*2.0),-9.0+17.0*t))
	var at:=Time.get_ticks_usec()
	demo._after_edit(demo.state.add_road(points),"road")
	var input_ms: float=(Time.get_ticks_usec()-at)/1000.0
	_check(demo.edit_pending(),"complex road edits while full concert is actually playing")
	var frozen: Array[Vector3]=[]
	for resident: Dictionary in demo.life.residents: frozen.append(resident.node.position)
	await process_frame
	if demo.edit_pending():
		for index in range(demo.life.residents.size()): _check(demo.life.residents[index].node.position==frozen[index],"audience never follows obsolete street graph during preparation")
	await _wait_ready()
	_check(demo.life.concert_status().phase=="playing" and demo.state.life_progress.concerts==count_before,"asynchronous edit never prematurely completes concert")
	var first_budget: Dictionary=demo.edit_budget_report()
	_key(KEY_Z)
	_key(KEY_Y)
	await _wait_ready()
	var second_budget: Dictionary=demo.edit_budget_report()
	_check(demo.life.concert_status().phase=="playing","rapid real undo/redo keeps ongoing performance")
	await _capture("02_concert_after_latest_geometry_commits")
	sampling=false
	var transport_report: Dictionary=demo.music.music_report()
	_check(demo.music._playback_clock()>clock_start,"real PCM transport advances without reset through street rebuilding")
	for key: String in demo.music.STEMS:
		_check(identity[key]==[demo.music._players[key].get_instance_id(),demo.music._players[key].stream.get_instance_id()] and demo.music._players[key].playing,"same seven PCM voice and stream "+key)
	var save_path:="user://frame_budget_concert_%d.json"%Time.get_ticks_usec()
	demo._capture_journeys()
	_check(demo.state.save_city(save_path).ok,"new actual routes and running concert save to isolated test file")
	var loaded:=State.new()
	_check(loaded.load_city(save_path).ok,"saved asynchronous road/actual checkpoint passes full snapshot validation")
	_check(loaded.roads==demo.state.roads and loaded.life_progress==demo.state.life_progress,"saved geometry and real progress remain exact")
	until=Time.get_ticks_msec()+30000
	while demo.life.concert_status().phase=="playing" and Time.get_ticks_msec()<until: await process_frame
	var duration_ms: float=(Time.get_ticks_usec()-start_usec)/1000.0
	_check(demo.state.life_progress.concerts==count_before+1 and demo.life.concert_status().phase=="idle","one full real concert finishes exactly once")
	_check(duration_ms>=23800.0 and duration_ms<27000.0,"edit cannot shorten actual 24-second performance")
	_check(not demo.state.resonance_afterglow.is_empty(),"full completion grants real neighborhood afterglow")
	await _capture("03_full_real_twenty_four_seconds_then_afterglow")
	frames.sort()
	var report: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"duration_ms":duration_ms,"input_ms":input_ms,"edit_wall_p95_ms":frames[int((frames.size()-1)*0.95)],"edit_wall_max_ms":frames[-1],"first_budget":first_budget,"history_budget":second_budget,"transport":transport_report,"roads":demo.state.roads.size(),"mode":DisplayServer.get_name()}
	var file:=FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("BUDGET_CONCERT_RESULT ",JSON.stringify(report))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
