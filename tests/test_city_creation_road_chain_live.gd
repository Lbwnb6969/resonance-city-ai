extends SceneTree
## Full-scene viewport gestures; never writes a personal save or bypasses input
## by constructing a State road. Run in a real 1440 x 900 window.
const Scene := preload("res://scenes/city_creation.tscn")
var output := "res://验证记录/连续直拉_2026-10-15/live"

class FixtureInput extends Node:
	func _input(event: InputEvent) -> void:
		if event.device != 92: get_viewport().set_input_as_handled()

var demo: Node3D
var checks := 0
var failures: Array[String] = []
var preview_ms: Array[float] = []
var release_ms: Array[float] = []
var lock_ms: Array[float] = []
var evidence: Dictionary = {}

func _initialize() -> void:
	_run.call_deferred()

func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok:
		failures.append(label)
		push_error(label)

func _screen(point: Vector2) -> Vector2:
	return demo.camera.unproject_position(Vector3(point.x, demo.state.ground_height(point), point.y))

func _button(point: Vector2, pressed: bool, button: int = MOUSE_BUTTON_LEFT, alt: bool = false) -> void:
	var event := InputEventMouseButton.new()
	event.device = 92
	event.position = _screen(point)
	event.global_position = event.position
	event.button_index = button
	event.pressed = pressed
	event.alt_pressed = alt
	var started := Time.get_ticks_usec()
	root.push_input(event)
	var elapsed := (Time.get_ticks_usec() - started) / 1000.0
	if button == MOUSE_BUTTON_LEFT and not pressed: release_ms.append(elapsed)
	if button == MOUSE_BUTTON_RIGHT and pressed: lock_ms.append(elapsed)

func _motion(point: Vector2) -> void:
	var event := InputEventMouseMotion.new()
	event.device = 92
	event.position = _screen(point)
	event.global_position = event.position
	root.push_input(event)
	# Consume the real viewport pointer using the same held-brush update as
	# _process; there is no fixture-supplied polyline or world-point shortcut.
	if demo.road_drawing:
		var started := Time.get_ticks_usec()
		demo._append_road_point()
		preview_ms.append((Time.get_ticks_usec() - started) / 1000.0)
	await process_frame

func _key(code: int, ctrl: bool = false, echo: bool = false, unicode: int = 0) -> void:
	var event := InputEventKey.new()
	event.device = 92
	event.keycode = code
	event.ctrl_pressed = ctrl
	event.pressed = true
	event.echo = echo
	event.unicode = unicode
	var started := Time.get_ticks_usec()
	root.push_input(event)
	if code == KEY_SPACE and not echo: lock_ms.append((Time.get_ticks_usec() - started) / 1000.0)
	await process_frame
	await physics_frame

func _wait_edit() -> void:
	var until := Time.get_ticks_msec() + 20000
	while demo.edit_pending() and Time.get_ticks_msec() < until: await process_frame
	_check(not demo.edit_pending(), "latest real edit publishes before the next gesture")

func _encoded(points: Array[Vector2]) -> Array:
	var result: Array = []
	for point in points: result.append([point.x, point.y])
	return result

func _exact(record: Dictionary, points: Array[Vector2]) -> bool:
	if record.points.size() != points.size(): return false
	for index in range(points.size()):
		if Vector2(float(record.points[index][0]), float(record.points[index][1])) != points[index]: return false
	return true

func _close(actual: Array[Vector2], expected: Array[Vector2]) -> bool:
	if actual.size() != expected.size(): return false
	for index in range(actual.size()):
		if actual[index].distance_to(expected[index]) > 0.001: return false
	return true

func _draft_is_clear() -> bool:
	return not demo.road_drawing and not demo.road_draft_straight and demo.road_locked_segments == 0 and demo.road_points.is_empty() and demo.road_preview.is_empty()

func _text_focus(control: Control, label: String) -> void:
	root.add_child(control)
	control.position = Vector2(12, 12)
	control.size = Vector2(200, 50)
	control.grab_focus()
	await process_frame
	_check(root.gui_get_focus_owner() == control, label + " owns real viewport keyboard focus")
	var selected: bool = demo.road_straight
	var locked: int = demo.road_locked_segments
	var before: Array[Vector2] = demo.road_points.duplicate()
	var snapshot: Dictionary = demo.state.snapshot()
	await _key(KEY_R, false, false, 114)
	await _key(KEY_SPACE, false, false, 32)
	_check(demo.road_straight == selected and demo.road_locked_segments == locked and demo.road_points == before and demo.road_drawing, label + " R/Space typing preserves the selected mode and active draft")
	_check(demo.state.snapshot() == snapshot, label + " typing writes no city operation")
	_check(str(control.text).contains("r") and str(control.text).contains(" "), label + " receives the actual typed characters")
	control.release_focus()
	control.queue_free()
	await process_frame

func _run() -> void:
	var args := OS.get_cmdline_user_args()
	if not args.is_empty(): output = str(args[0])
	root.size = Vector2i(1440, 900)
	root.content_scale_size = Vector2i(1440, 900)
	root.content_scale_mode = Window.CONTENT_SCALE_MODE_CANVAS_ITEMS
	set_auto_accept_quit(false)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	root.add_child(FixtureInput.new())
	demo.life.set_process(false)
	var until := Time.get_ticks_msec() + 20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec() < until: await process_frame
	_check(not demo.music.audio_report.is_empty(), "real generated PCM music becomes ready")
	demo.ui_layer.visible = false
	demo.focus = Vector3(-14.5, 0.5, -11.5)
	demo.zoom = 16.0
	demo._update_camera()
	await physics_frame
	await process_frame
	var original: Dictionary = demo.state.snapshot()
	var original_roads: Array = demo.state.roads.duplicate(true)
	var history_before: int = demo.state._undo.size()
	var revision_before: int = demo.state.revision
	var identities: Dictionary = {}
	for key: String in demo.music.STEMS:
		var player: Variant = demo.music._players.get(key)
		if player != null and player.stream != null:
			identities[key] = [player.get_instance_id(), player.stream.get_instance_id()]
	_check(identities.size() == 12, "twelve real long PCM voices exist before chained drawing")
	var clock_before: float = demo.music._playback_clock()
	await _key(KEY_3)
	_check(demo.tool == 2 and not demo.road_straight, "real key 3 selects the default freehand road tool")
	await _key(KEY_R)
	_check(demo.road_straight, "real R selects persistent straight road mode")
	var corners: Array[Vector2] = [Vector2(-16, -13), Vector2(-13, -13), Vector2(-13, -10), Vector2(-16, -10)]
	for corner in corners:
		_check(Rect2(Vector2.ZERO, Vector2(root.size)).has_point(_screen(corner)), "authored corner is inside the real viewport")
	_button(corners[0], true)
	await process_frame
	await _motion(corners[1])
	_check(demo.road_drawing and demo.road_draft_straight and _close(demo.road_preview, [corners[0], corners[1]]), "held straight brush displays the first exact segment")
	await _key(KEY_SPACE)
	_check(demo.road_locked_segments == 1 and demo.road_points.size() == 3, "Space locks the first segment and keeps one live tail")
	var first_locked: Array[Vector2] = demo.road_points.duplicate()
	await _key(KEY_SPACE, false, true)
	_check(demo.road_locked_segments == 1 and demo.road_points == first_locked, "keyboard auto-repeat does not lock another segment")
	await _motion(corners[2])
	_check(_close(demo.road_preview, [corners[0], corners[1], corners[2]]), "next drag keeps the first corner sharp and the second segment straight")
	var yaw_before: float = demo.yaw
	_button(corners[2], true, MOUSE_BUTTON_RIGHT)
	await process_frame
	_check(demo.road_locked_segments == 2 and not demo.orbiting and demo.yaw == yaw_before, "right-click locks the second segment without starting camera orbit")
	_button(corners[2], false, MOUSE_BUTTON_RIGHT)
	await _motion(corners[3])
	_check(_close(demo.road_preview, corners), "third live segment retains all four unsmoothed straight vertices")
	_check(demo.state.snapshot() == original and demo.state._undo.size() == history_before, "locked preview consumes no IDs or history")
	var expected: Array[Vector2] = demo.road_preview.duplicate()
	evidence.preview = _encoded(expected)
	await process_frame
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(output + "/locked_preview.png")
	_button(corners[3], false)
	await process_frame
	_check(demo.state.roads.size() == original_roads.size() + 1 and demo.state._undo.size() == history_before + 1 and demo.state.revision == revision_before + 1, "one left release commits the entire three-segment chain in one operation")
	_check(_draft_is_clear() and demo.road_straight, "release clears all transient chain state and retains selected straight mode")
	if demo.state.roads.size() > original_roads.size():
		var road: Dictionary = demo.state.roads[-1].duplicate(true)
		_check(_exact(road, expected), "persisted chain is bit-exact to every displayed preview vertex")
		evidence.committed = road
	await _wait_edit()
	var committed: Array = demo.state.roads.duplicate(true)
	await _key(KEY_Z, true)
	await _wait_edit()
	_check(demo.state.roads == original_roads, "one real undo removes the complete chain")
	await _key(KEY_Y, true)
	await _wait_edit()
	_check(demo.state.roads == committed, "one real redo restores the same ID and every exact vertex")
	# A second chained stroke is cancelled as one whole draft, including locks.
	var before_cancel: Dictionary = demo.state.snapshot()
	var cancel_history: int = demo.state._undo.size()
	_button(Vector2(-16, -7), true)
	await _motion(Vector2(-14, -7))
	await _key(KEY_SPACE)
	await _motion(Vector2(-14, -5))
	await _text_focus(LineEdit.new(), "LineEdit")
	await _text_focus(TextEdit.new(), "TextEdit")
	await _key(KEY_ESCAPE)
	_button(Vector2(-14, -5), false)
	await process_frame
	_check(_draft_is_clear() and demo.state.snapshot() == before_cancel and demo.state._undo.size() == cancel_history, "Escape cancels every locked segment and the eventual mouse release writes nothing")
	await _key(KEY_R)
	_check(not demo.road_straight, "R returns the selected road mode to freehand")
	_button(Vector2(-16, -7), true, MOUSE_BUTTON_LEFT, true)
	await _motion(Vector2(-14, -7))
	_check(demo.road_draft_straight and not demo.road_straight and demo.road_preview.size() == 2, "Alt at actual left press temporarily uses straight drawing without changing the setting")
	await _key(KEY_SPACE)
	await _motion(Vector2(-14, -5))
	_check(demo.road_locked_segments == 1 and demo.road_preview.size() == 3 and not demo.road_straight, "temporary Alt straight drawing also supports a locked corner")
	await _key(KEY_ESCAPE)
	_button(Vector2(-14, -5), false)
	await process_frame
	_check(_draft_is_clear() and not demo.road_straight and demo.state.snapshot() == before_cancel, "cancelling temporary Alt drawing restores freehand without a city operation")
	# M59 freehand uses RDP + centripetal Catmull-Rom rather than fixed-radius fillets.
	_button(Vector2(-16,-7),true)
	await _motion(Vector2(-13,-7))
	await _motion(Vector2(-13,-4))
	var curved: Array[Vector2] = demo.road_preview.duplicate()
	_check(not demo.road_draft_straight and curved.size()>3 and curved.any(func(point):return point.x>-13.8 and point.y<-6.5),"freehand gesture actually interpolates a smooth bend between the mouse controls")
	var curve_count: int = demo.state.roads.size()
	var curve_history: int = demo.state._undo.size()
	_button(Vector2(-13,-4),false)
	await _wait_edit()
	_check(demo.state.roads.size()==curve_count+1 and demo.state._undo.size()==curve_history+1 and _exact(demo.state.roads[-1],curved),"sharp freehand preview commits the exact rounded points as one road")
	evidence["freehand_preview"]=_encoded(curved)
	await _key(KEY_Z,true)
	await _wait_edit()
	_check(demo.state.roads.size()==curve_count,"rounded freehand road undoes in one operation")
	await _key(KEY_R)
	_button(Vector2(-16,-2),true)
	await _motion(Vector2(-11.55,-2))
	await _key(KEY_SPACE)
	var snapped_lock: Array[Vector2] = demo.road_preview.duplicate()
	for frame in range(4): await process_frame
	_check(snapped_lock.size()==2 and snapped_lock[-1].distance_to(Vector2(-11.55,-2))<.55 and demo.road_preview==snapped_lock,"soft-assisted locked endpoint remains stationary without a backwards tail from the unmoved pointer")
	await _key(KEY_ESCAPE)
	_button(Vector2(-11.55,-2),false)
	await _key(KEY_R)
	_button(Vector2(-14, -7), true, MOUSE_BUTTON_RIGHT)
	_check(demo.orbiting, "right-click outside a straight draft retains camera orbit")
	var orbit := InputEventMouseMotion.new()
	orbit.device = 92
	orbit.position = _screen(Vector2(-14, -7))
	orbit.global_position = orbit.position
	orbit.relative = Vector2(12, 3)
	var old_yaw: float = demo.yaw
	root.push_input(orbit)
	_check(demo.yaw != old_yaw, "real right-drag still moves the camera")
	_button(Vector2(-14, -7), false, MOUSE_BUTTON_RIGHT)
	_check(not demo.orbiting, "right release ends orbit")
	var clock_after: float = demo.music._playback_clock()
	_check(clock_after > clock_before, "PCM playback clock advances throughout chained input and history")
	for key: String in demo.music.STEMS:
		var player: Variant = demo.music._players.get(key)
		_check(player != null and player.stream != null and identities.get(key) == [player.get_instance_id(), player.stream.get_instance_id()] and player.playing, "same playing PCM player and stream throughout: " + key)
	var report := {"ok": failures.is_empty(), "checks": checks, "failures": failures,
		"display": DisplayServer.get_name(), "viewport": [root.size.x, root.size.y], "persistence": demo.persistence,
		"preview_call_ms": preview_ms, "release_call_ms": release_ms, "lock_call_ms": lock_ms,
		"clock_before": clock_before, "clock_after": clock_after, "evidence": evidence, "audio": demo.music.audio_report}
	var file := FileAccess.open(output + "/report.json", FileAccess.WRITE)
	file.store_string(JSON.stringify(report, "\t", true, true))
	file.close()
	print("ROAD_CHAIN_LIVE ", JSON.stringify(report))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
