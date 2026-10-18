extends SceneTree
## Actual viewport gestures; no personal save and no direct State.add_road shortcut.
const Scene := preload("res://scenes/city_creation.tscn")
const State := preload("res://scripts/world/city_creation_state.gd")
var output := "res://验证记录/路口接合_2026-10-15/live"

class FixtureInput extends Node:
	func _input(event: InputEvent) -> void:
		if event.device != 92: get_viewport().set_input_as_handled()

var demo: Node3D
var checks := 0
var failures: Array[String] = []
var input_ms: Array[float] = []
var preview_ms: Array[float] = []
var release_ms: Array[float] = []
var evidence: Dictionary = {}


func _initialize() -> void:
	_run.call_deferred()


func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok:
		failures.append(label)
		push_error(label)


func _button(point: Vector2, pressed: bool) -> void:
	var event := InputEventMouseButton.new()
	event.device = 92
	event.position = demo.camera.unproject_position(Vector3(point.x,demo.state.ground_height(point),point.y))
	event.global_position = event.position
	event.button_index = MOUSE_BUTTON_LEFT
	event.pressed = pressed
	var started := Time.get_ticks_usec()
	root.push_input(event)
	var elapsed := (Time.get_ticks_usec() - started) / 1000.0
	input_ms.append(elapsed)
	if not pressed: release_ms.append(elapsed)


func _motion(point: Vector2) -> void:
	var event := InputEventMouseMotion.new()
	event.device = 92
	event.position = demo.camera.unproject_position(Vector3(point.x,demo.state.ground_height(point),point.y))
	event.global_position = event.position
	var started := Time.get_ticks_usec()
	root.push_input(event)
	input_ms.append((Time.get_ticks_usec() - started) / 1000.0)
	# Time the same product held-brush update used by _process. This consumes
	# the real viewport pointer, not a fixture-supplied road or State call.
	started = Time.get_ticks_usec()
	demo._append_road_point()
	preview_ms.append((Time.get_ticks_usec() - started) / 1000.0)
	await process_frame


func _draft(start: Vector2, finish: Vector2) -> void:
	_button(start, true)
	await process_frame
	await _motion(finish)
	_check(demo.road_drawing and demo.road_preview.size() == 2, "actual straight brush holds exactly two resolved endpoints")


func _key(code: int, ctrl: bool = false) -> void:
	var event := InputEventKey.new()
	event.device = 92
	event.keycode = code
	event.ctrl_pressed = ctrl
	event.pressed = true
	root.push_input(event)
	await process_frame
	await physics_frame


func _wait_edit() -> void:
	var until := Time.get_ticks_msec() + 20000
	while demo.has_method("edit_pending") and demo.edit_pending() and Time.get_ticks_msec() < until:
		await process_frame
	_check(not demo.has_method("edit_pending") or not demo.edit_pending(), "latest real edit publishes before next gesture")


func _exact(record: Dictionary, points: Array[Vector2]) -> bool:
	if record.points.size() != points.size(): return false
	for index in range(points.size()):
		if Vector2(float(record.points[index][0]), float(record.points[index][1])) != points[index]: return false
	return true


func _encoded(points: Array[Vector2]) -> Array:
	var result: Array = []
	for point in points: result.append([point.x, point.y])
	return result


func _run() -> void:
	var args := OS.get_cmdline_user_args()
	if not args.is_empty(): output = str(args[0])
	root.size = Vector2i(1440, 900)
	set_auto_accept_quit(false)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	root.add_child(FixtureInput.new())
	demo.life.set_process(false)
	var until := Time.get_ticks_msec() + 20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec() < until: await process_frame
	_check(not demo.music.audio_report.is_empty(), "real generated music becomes ready")
	demo.ui_layer.visible = false
	demo.select_tool(2)
	demo.road_straight = true
	demo.focus = Vector3(3.0, 0.5, 8.0)
	demo.zoom = 22.0
	demo._update_camera()
	await physics_frame
	await process_frame
	var original: Dictionary = demo.state.snapshot()
	var original_roads: Array = demo.state.roads.duplicate(true)
	var history_before: int = demo.state._undo.size()
	var identities: Dictionary = {}
	for key: String in demo.music.STEMS:
		var player: Variant = demo.music._players.get(key)
		if player != null and player.stream != null:
			identities[key] = [player.get_instance_id(), player.stream.get_instance_id()]
	_check(identities.size() == demo.music.STEMS.size(), "current fixed long PCM voices exist before gestures")
	var clock_before: float = demo.music._playback_clock()
	var river_x := State.river_x(8.0)
	var start := Vector2(river_x - 2.4, 8.0)
	var finish := Vector2(river_x + 2.4, 8.0)
	var raw: Array[Vector2] = [start, finish]
	_check(not demo.state._validate_road_site(_encoded(raw), 1.25).ok, "raw near-bank stroke fails original dry-abutment contract")
	await _draft(start, finish)
	var cancelled: Array[Vector2] = demo.road_preview.duplicate()
	_check(cancelled[0].x < start.x - 0.4 and cancelled[-1].x > finish.x + 0.4, "viewport preview visibly extends both original near-bank endpoints")
	_check(demo.state.snapshot() == original, "live anchored preview consumes no state or identities")
	await _key(KEY_ESCAPE)
	_button(finish, false)
	await process_frame
	_check(not demo.road_drawing and demo.state.snapshot() == original and demo.state._undo.size() == history_before, "actual Escape leaves no road or history write")
	await _draft(start, finish)
	var expected: Array[Vector2] = demo.road_preview.duplicate()
	_check(demo.state.water_clearance(expected[0]) >= 0.665 and demo.state.water_clearance(expected[-1]) >= 0.665, "displayed straight bridge has complete dry abutments")
	_button(finish, false)
	await process_frame
	_check(demo.state.roads.size() == original_roads.size() + 1 and demo.state._undo.size() == history_before + 1, "mouse release commits one complete bridge transaction")
	var bridge: Dictionary = demo.state.roads[-1].duplicate(true)
	_check(bool(bridge.bridge) and _exact(bridge, expected), "actual committed bridge preserves every displayed normalized point exactly")
	await _wait_edit()
	var bridge_roads: Array = demo.state.roads.duplicate(true)
	await _key(KEY_Z, true)
	await _wait_edit()
	_check(demo.state.roads == original_roads, "one real Ctrl-Z removes the complete anchored bridge")
	await _key(KEY_Y, true)
	await _wait_edit()
	_check(demo.state.roads == bridge_roads, "real Ctrl-Y restores identical bridge ID and endpoints")
	evidence.bridge = {"raw": _encoded(raw), "preview": _encoded(expected), "committed": bridge}
	# Empty west-side land; no house frontage can be accidentally selected.
	demo.focus = Vector3(-11.0, 0.5, -2.0)
	demo.zoom = 16.0
	demo._update_camera()
	await physics_frame
	await process_frame
	var joint_start := Vector2(-14.0, -2.0)
	var joint_end := Vector2(-11.55, -2.0)
	await _draft(joint_start, joint_end)
	var joint_expected: Array[Vector2] = demo.road_preview.duplicate()
	_check(joint_expected[-1].x>joint_end.x and joint_expected[-1].x< -11.0 and absf(joint_expected[-1].y+2.0)<.001,"actual outer-zone pointer approaches the existing road continuously and already overlaps its footprint")
	_check(joint_expected[0].distance_to(joint_start) < 0.001, "centerline assistance preserves far endpoint")
	_button(joint_end, false)
	await process_frame
	_check(demo.state.roads.size() == bridge_roads.size() + 1, "viewport release creates the snapped road")
	var joint: Dictionary = demo.state.roads[-1].duplicate(true)
	_check(not bool(joint.bridge) and _exact(joint, joint_expected), "saved dry joint equals the displayed endpoints exactly")
	await _wait_edit()
	var joint_roads: Array = demo.state.roads.duplicate(true)
	await _key(KEY_Z, true)
	await _wait_edit()
	_check(demo.state.roads == bridge_roads, "one real undo removes only the snapped stroke")
	await _key(KEY_Y, true)
	await _wait_edit()
	_check(demo.state.roads == joint_roads, "joint redo retains ID and exact preview endpoints")
	evidence.joint = {"raw": [[joint_start.x, joint_start.y], [joint_end.x, joint_end.y]], "preview": _encoded(joint_expected), "committed": joint}
	var saved: Dictionary = demo.state.snapshot()
	var restored := State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(saved))).ok and restored.roads == demo.state.roads, "committed bridge and joint survive original raw JSON restore contract")
	var snapshot_file := FileAccess.open(output + "/city_snapshot.json", FileAccess.WRITE)
	snapshot_file.store_string(JSON.stringify(saved, "\t", true, true))
	snapshot_file.close()
	var clock_after: float = demo.music._playback_clock()
	_check(clock_after > clock_before, "real PCM clock advances throughout viewport input and history")
	for key: String in demo.music.STEMS:
		var player: Variant = demo.music._players.get(key)
		_check(player != null and player.stream != null and identities.get(key) == [player.get_instance_id(), player.stream.get_instance_id()] and player.playing, "same playing PCM player and stream throughout: " + key)
	var report := {"ok": failures.is_empty(), "checks": checks, "failures": failures,
		"display": DisplayServer.get_name(), "viewport": [root.size.x, root.size.y], "persistence": demo.persistence,
		"input_call_ms": input_ms, "preview_call_ms": preview_ms, "release_call_ms": release_ms,
		"clock_before": clock_before, "clock_after": clock_after, "evidence": evidence,
		"audio": demo.music.audio_report, "roads": demo.state.roads.size()}
	if demo.has_method("edit_budget_report"): report.budget = demo.edit_budget_report()
	var file := FileAccess.open(output + "/report.json", FileAccess.WRITE)
	file.store_string(JSON.stringify(report, "\t", true, true))
	file.close()
	print("ROAD_INTENT_LIVE ", JSON.stringify(report))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
