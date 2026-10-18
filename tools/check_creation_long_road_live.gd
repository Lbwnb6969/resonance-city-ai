extends SceneTree
## Real viewport gestures on the preserved long-road city; never personal saves.
const Scene=preload("res://scenes/city_creation.tscn")
const SOURCE="res://tools/fixtures/long_road_baseline.json"
var output:="res://验证记录/长曲路性能_2026-10-15/live"
class FixtureInput extends Node:
	func _input(event: InputEvent) -> void:
		if event.device!=92: get_viewport().set_input_as_handled()
var demo: Node3D
var failures: Array[String]=[]
var checks:=0
var preview_ms: Array[float]=[]
var junction_profile_ms: Array[float]=[]
var junction_mesh_ms: Array[float]=[]
var brush_timings: Dictionary={}

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)

func _key(code: int,ctrl: bool=false) -> void:
	var event:=InputEventKey.new()
	event.device=92
	event.keycode=code
	event.pressed=true
	event.ctrl_pressed=ctrl
	root.push_input(event)
	await process_frame
	await physics_frame

func _mouse(at: Vector3,pressed: bool) -> void:
	var event:=InputEventMouseButton.new()
	event.device=92
	event.position=demo.camera.unproject_position(at)
	event.global_position=event.position
	event.button_index=MOUSE_BUTTON_LEFT
	event.pressed=pressed
	root.push_input(event)

func _capture(label: String) -> void:
	await process_frame
	await process_frame
	root.get_texture().get_image().save_png(output+"/"+label+".png")

func _wait_edit() -> void:
	var until:=Time.get_ticks_msec()+20000
	while demo.has_method("edit_pending") and demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.has_method("edit_pending") or not demo.edit_pending(),"latest visible edit completes")

func _draft(points: Array[Vector3]) -> void:
	_mouse(points[0],true)
	await process_frame
	for point: Vector3 in points:
		var event:=InputEventMouseMotion.new()
		event.device=92
		event.position=demo.camera.unproject_position(point)
		event.global_position=event.position
		root.push_input(event)
		# Product updates the held brush in _process; time that same actual
		# preview once, then its ordinary frame sees no new pointer point.
		var started:=Time.get_ticks_usec()
		demo._append_road_point()
		preview_ms.append((Time.get_ticks_usec()-started)/1000.0)
		for key: String in demo.town.preview.get_meta("brush_timings",{}):
			if not brush_timings.has(key):brush_timings[key]=[]
			brush_timings[key].append(float(demo.town.preview.get_meta("brush_timings")[key]))
		junction_profile_ms.append(float(demo.town.preview.get_meta("junction_profile_ms",0.0)))
		junction_mesh_ms.append(float(demo.town.preview.get_meta("junction_mesh_ms",0.0)))
		await process_frame

func _run() -> void:
	var args:=OS.get_cmdline_user_args()
	if not args.is_empty(): output=str(args[0])
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	root.add_child(FixtureInput.new())
	demo.life.set_process(false)
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	var original: Dictionary=JSON.parse_string(FileAccess.get_file_as_string(SOURCE))
	original.journey_checkpoint={}
	for house: Dictionary in original.houses: house.auto_matinee=false
	var restored: Dictionary=demo.state.restore(original)
	_check(restored.ok,"preserved ten-road player city validates")
	demo._after_edit(restored,"history")
	await _wait_edit()
	demo.ui_layer.visible=false
	demo.focus=Vector3(-7,0.5,0)
	demo.zoom=34.0
	demo._update_camera()
	await physics_frame
	await _capture("01_original_long_roads")
	var original_roads: Array=demo.state.roads.duplicate(true)
	var identities: Dictionary={}
	for key: String in demo.music.STEMS: identities[key]=[demo.music._players[key].get_instance_id(),demo.music._players[key].stream.get_instance_id()]
	var clock_before: float=demo.music._playback_clock()
	var points: Array[Vector3]=[]
	for index in range(71):
		var t:=index/70.0
		points.append(Vector3(-15.5+1.7*sin(t*TAU*2.0),0.12,-9.0+17.0*t))
	await _key(KEY_3)
	await _draft(points)
	_check(demo.road_drawing and demo.road_preview.size()>100,"actual pointer gesture creates a long smooth draft")
	_check(demo.state.roads==original_roads,"live preview preserves original authored roads")
	await _capture("02_actual_long_curve_preview")
	await _key(KEY_ESCAPE)
	_mouse(points[-1],false)
	await process_frame
	_check(not demo.road_drawing and demo.state.roads==original_roads and demo.state._undo.is_empty(),"Escape cancels with no geometry or history writes")
	await _draft(points)
	var expected: Array[Vector2]=demo.road_preview.duplicate()
	var started:=Time.get_ticks_usec()
	_mouse(points[-1],false)
	var commit_ms: float=(Time.get_ticks_usec()-started)/1000.0
	await process_frame
	_check(demo.state.roads.size()==11 and not demo.state._undo.is_empty(),"release commits one complete long road")
	var actual: Dictionary=demo.state.roads[-1]
	var exact: bool=actual.points.size()==expected.size()
	for index in range(mini(actual.points.size(),expected.size())):
		exact=exact and Vector2(float(actual.points[index][0]),float(actual.points[index][1]))==expected[index]
	_check(exact,"commit preserves every smoothed draft point")
	var committed: Array=demo.state.roads.duplicate(true)
	await _wait_edit()
	await _capture("03_committed_long_curve")
	await _key(KEY_Z,true)
	_check(demo.state.roads==original_roads and demo.state._undo.is_empty(),"one actual Ctrl-Z restores all original ten roads exactly")
	await _key(KEY_Y,true)
	_check(demo.state.roads==committed,"actual Ctrl-Y restores stable road ID and every original point")
	await _wait_edit()
	_check(demo.music._playback_clock()>clock_before,"real PCM music clock advances throughout drawing and history")
	for key: String in demo.music.STEMS:
		_check(identities[key]==[demo.music._players[key].get_instance_id(),demo.music._players[key].stream.get_instance_id()] and demo.music._players[key].playing,"same playing PCM and voice identity "+key)
	demo.life.set_process(true)
	demo.frame_samples.clear()
	for frame in range(360): await process_frame
	var frames: Array=demo.frame_samples.duplicate()
	frames.sort()
	var steady: Dictionary={"fps":Engine.get_frames_per_second(),"delta_p95_ms":frames[int(frames.size()*0.95)],"draw_calls":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME),"triangles":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_PRIMITIVES_IN_FRAME)}
	await _capture("04_residents_resume_on_the_long_road_city")
	preview_ms.sort()
	var report: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"mode":DisplayServer.get_name(),"source":SOURCE,"preview_samples":preview_ms.size(),"preview_median_ms":preview_ms[preview_ms.size()/2],"preview_p95_ms":preview_ms[int(preview_ms.size()*0.95)],"preview_max_ms":preview_ms[-1],"commit_ms":commit_ms,"authored_points":expected.size(),"roads":demo.state.roads.size(),"graph_nodes":demo.life.graph.size(),"render":demo.town.rebuild_stats.duplicate(true),"steady":steady,"audio":demo.music.audio_report}
	if demo.has_method("edit_budget_report"): report.budget=demo.edit_budget_report()
	junction_profile_ms.sort()
	junction_mesh_ms.sort()
	report["junction_profile_p95_ms"]=junction_profile_ms[int(junction_profile_ms.size()*0.95)]
	report["junction_mesh_p95_ms"]=junction_mesh_ms[int(junction_mesh_ms.size()*0.95)]
	for key: String in brush_timings:
		brush_timings[key].sort();report[key+"_p95"]=brush_timings[key][int(brush_timings[key].size()*.95)]
	var file:=FileAccess.open(output+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("LONG_ROAD_LIVE ",JSON.stringify(report))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
