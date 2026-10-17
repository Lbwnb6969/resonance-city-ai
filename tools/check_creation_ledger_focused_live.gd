extends SceneTree
## Focused production-UI check. Input is injected into the Godot Window.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT := "res://验证记录/经营河湾_2026-10-16/focused"
const EXAMPLE := "res://数据/经营河湾样例.json"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {}
var personal := PackedByteArray()
var sample_bytes := PackedByteArray()
var collection_before: Dictionary = {}
var before: Dictionary = {}

func _initialize() -> void: _run.call_deferred()

func _check(ok: bool, label: String) -> void:
	checks.append({"label":label, "passed":ok})
	if not ok: failures.append(label);push_error(label)

func _key(code: int) -> void:
	for down: bool in [true, false]:
		var event := InputEventKey.new()
		event.keycode = code;event.pressed = down
		root.push_input(event)
		await process_frame

func _mouse(at: Vector2, code: int = MOUSE_BUTTON_LEFT) -> void:
	var motion := InputEventMouseMotion.new()
	motion.position = at;motion.global_position = at
	root.push_input(motion);await process_frame
	for down: bool in [true, false]:
		var event := InputEventMouseButton.new()
		event.position = at;event.global_position = at
		event.button_index = code;event.pressed = down
		root.push_input(event);await process_frame

func _files(path: String) -> Dictionary:
	var result: Dictionary = {}
	var directory := DirAccess.open(path)
	if directory == null: return result
	for name_value: String in directory.get_files():
		result[name_value] = FileAccess.get_file_as_bytes(path.path_join(name_value))
	for name_value: String in directory.get_directories():
		for child: String in _files(path.path_join(name_value)):
			result[name_value.path_join(child)] = FileAccess.get_file_as_bytes(path.path_join(name_value).path_join(child))
	return result

func _capture(name_value: String) -> void:
	await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT.path_join(name_value+".png")) == OK, "actual GL screenshot saved: "+name_value)

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal = FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	sample_bytes = FileAccess.get_file_as_bytes(EXAMPLE)
	root.size = Vector2i(1024, 768)
	Engine.max_fps = 120
	demo = Scene.instantiate()
	demo.persistence = false
	demo.collection_directory = OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo)
	demo.life.set_process(false)
	var restored: Dictionary = demo.state.restore(JSON.parse_string(sample_bytes.get_string_from_utf8()))
	demo._after_edit(restored, "history")
	var deadline: int = Time.get_ticks_msec()+25000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame
	for ignored in range(4): await process_frame
	_check(DisplayServer.get_name() != "headless" and restored.ok and not demo.edit_pending(), "real GL scene loads the unmodified operating-town sample")
	if DisplayServer.get_name() == "headless" or not restored.ok or demo.edit_pending(): await _finish();return
	before = demo.state.snapshot().duplicate(true)
	collection_before = _files(demo.collection_directory)
	facts.state_revision = demo.state.revision
	facts.life_process_paused = not demo.life.is_processing()
	await _key(KEY_L)
	_check(demo.ledger.visible() and demo.ledger.close_button.has_focus(), "new L opening focuses the real return button before any content click")
	await _key(KEY_ENTER)
	_check(not demo.ledger.visible(), "real Enter closes a freshly opened ledger through its focused button")
	await _key(KEY_L)
	var content_at: Vector2 = demo.ledger.scroll.get_global_rect().position+Vector2(90, 35)
	await _mouse(content_at)
	var focused: Control = root.gui_get_focus_owner()
	facts.focus_after_content_click = focused.name if focused != null else "none"
	_check(demo.ledger.visible(), "clicking real ledger text keeps the modal open")
	await _key(KEY_ESCAPE)
	_check(not demo.ledger.visible(), "real Escape closes after a content click without requiring button focus")
	await _key(KEY_L)
	var opened: bool = demo.ledger.visible()
	await _key(KEY_L)
	_check(opened and not demo.ledger.visible(), "real L toggles the ledger open and closed")
	await _key(KEY_L)
	for ignored in range(3): await process_frame
	var viewport_bounds := Rect2(Vector2.ZERO, Vector2(root.size))
	var paper: Rect2 = demo.ledger.paper.get_global_rect()
	var scroll_bounds: Rect2 = demo.ledger.scroll.get_global_rect()
	var bar: VScrollBar = demo.ledger.scroll.get_v_scroll_bar()
	_check(viewport_bounds.encloses(paper) and paper.encloses(scroll_bounds) and paper.encloses(demo.ledger.close_button.get_global_rect()), "1024 by 768 keeps ledger paper scroll and close control inside the viewport")
	_check(demo.ledger.rows.size() == 8 and bar.max_value>bar.page, "eight real business rows overflow into an actual vertical scrollbar")
	await _capture("ledger_1024_top")
	var scroll_start: float = bar.value
	for ignored in range(8): await _mouse(scroll_bounds.get_center(), MOUSE_BUTTON_WHEEL_DOWN)
	_check(bar.value>scroll_start, "real mouse-wheel events scroll the 1024 ledger content")
	facts.layout = {"window":[root.size.x, root.size.y], "paper":str(paper), "scroll":str(scroll_bounds), "scroll_max":bar.max_value, "scroll_page":bar.page, "scroll_before":scroll_start, "scroll_after":bar.value}
	await _capture("ledger_1024_scrolled")
	await _mouse(demo.ledger.close_button.get_global_rect().get_center())
	_check(not demo.ledger.visible(), "actual mouse click on the return button closes the scrolled ledger")
	await _key(KEY_L)
	await _key(KEY_TAB)
	var reached_close: bool = demo.ledger.close_button.has_focus()
	for ignored in range(6):
		if reached_close: break
		await _key(KEY_TAB)
		reached_close = demo.ledger.close_button.has_focus()
	_check(reached_close, "actual Tab traversal can return focus to the close button")
	if reached_close: await _key(KEY_ENTER)
	else: await _key(KEY_ESCAPE)
	_check(not demo.ledger.visible(), "keyboard navigation returns to the city")
	_check(demo.state.snapshot() == before, "all focused ledger interactions perform zero city-state writes")
	_check(_files(demo.collection_directory) == collection_before, "ledger interactions create or modify no work-library files")
	await _finish()

func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()) == personal, "personal continuing-city file bytes remain unchanged")
	_check(FileAccess.get_file_as_bytes(EXAMPLE) == sample_bytes, "authored operating-town sample file bytes remain unchanged")
	var result: Dictionary = {"ok":failures.is_empty(), "check_count":checks.size(), "passed_count":checks.size()-failures.size(), "checks":checks, "failures":failures, "facts":facts, "scope":"Focused actual GL production-scene ledger UI. Godot Window input injection, not OS input. Life processing stays paused to isolate read-only UI state and library checks; no simulated production or completed-business claim. Enter is tested immediately after opening, before a text click; Escape is tested after the text click. Screenshot/report evidence files are intentional fixture writes.", "command":"Godot_v4.7.2-stable_win64_console.exe --path . --script tools/check_creation_ledger_focused_live.gd"}
	FileAccess.open(OUT+"/ledger.json", FileAccess.WRITE).store_string(JSON.stringify(result, "\t", true, true))
	print("CREATION_LEDGER_FOCUSED_LIVE ", JSON.stringify(result))
	if is_instance_valid(demo):
		demo.life.set_process(false);demo.music.set_process(false)
		for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
		for player: AudioStreamPlayer in demo.music._effects: player.stop()
		await create_timer(0.15).timeout
		demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
