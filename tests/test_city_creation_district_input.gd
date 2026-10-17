extends SceneTree
## One isolated real viewport contract for district painting and its edit panel.
const Scene = preload("res://scenes/city_creation.tscn")
var failures: Array[String] = []
var demo: Node3D

func _initialize() -> void:
	_run.call_deferred()

func _expect(condition: bool, message: String) -> void:
	if not condition: failures.append(message)

func _key(code: int, control: bool = false, shift: bool = false) -> void:
	var event := InputEventKey.new()
	event.keycode = code
	event.pressed = true
	event.ctrl_pressed = control
	event.shift_pressed = shift
	root.push_input(event)
	await process_frame

func _stroke(points: Array[Vector3], cancel: bool = false, erase: bool = false) -> void:
	var down := InputEventMouseButton.new()
	down.position = demo.camera.unproject_position(points[0])
	down.global_position = down.position
	down.button_index = MOUSE_BUTTON_LEFT
	down.pressed = true
	down.shift_pressed = erase
	root.push_input(down)
	for at: Vector3 in points:
		var motion := InputEventMouseMotion.new()
		motion.position = demo.camera.unproject_position(at)
		motion.global_position = motion.position
		root.push_input(motion)
		await process_frame
	if cancel: await _key(KEY_ESCAPE)
	var up := InputEventMouseButton.new()
	up.position = demo.camera.unproject_position(points[-1])
	up.global_position = up.position
	up.button_index = MOUSE_BUTTON_LEFT
	root.push_input(up)
	await process_frame

func _run() -> void:
	root.size = Vector2i(1440, 900)
	root.content_scale_size = root.size
	root.content_scale_mode = Window.CONTENT_SCALE_MODE_CANVAS_ITEMS
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	await physics_frame
	await process_frame
	demo.music.set_muted(true)
	demo.focus = Vector3(-5, 0, 0)
	demo.yaw = 0.0
	demo.pitch = 0.95
	demo.zoom = 40.0
	demo._update_camera()
	await _key(KEY_8)
	_expect(demo.tool == 7 and demo.district_panel.visible and demo.town.districts_layer.visible, "8 selects the district tool, its edit panel, and district map layer")
	var before: int = demo.state.revision
	var baseline_houses: Array = demo.state.houses.duplicate(true)
	var baseline_roads: Array = demo.state.roads.duplicate(true)
	var resident_id: int = demo.life.residents[0].node.get_instance_id()
	await _stroke([Vector3(-8, 0, -3.5), Vector3(-8, 0, -1), Vector3(-6, 0, 0)], true)
	_expect(demo.state.revision == before and demo.state.districts.is_empty(), "Esc cancels a real district stroke with no mutation")
	await _stroke([Vector3(-8, 0, -3.5), Vector3(-8, 0, -1), Vector3(-6, 0, 0)])
	_expect(demo.state.revision == before + 1 and demo.state.districts.size() == 1, "Continuous viewport paint commits one complete district transaction")
	var painted: Array = demo.state.districts.duplicate(true)
	var id: String = str(demo.state.districts[0].id)
	_expect(demo.selected_district == id and demo.district_name.editable, "New district is selected and can be named")
	_expect(demo.state.houses == baseline_houses and demo.state.roads == baseline_roads and demo.life.residents[0].node.get_instance_id() == resident_id, "District paint changes membership without rebuilding houses, roads, or resident identity")
	await _key(KEY_Z, true)
	_expect(demo.state.districts.is_empty(), "One Ctrl+Z removes the complete district stroke")
	await _key(KEY_Z, true, true)
	_expect(demo.state.districts == painted, "Redo restores exact district geometry and stable ID")
	var selected_revision: int = demo.state.revision
	await _stroke([Vector3(-8, 0, -1)])
	_expect(demo.state.revision == selected_revision and demo.state.districts.size() == 1 and demo.selected_district == id, "Clicking an existing district selects it rather than stacking another")
	demo.district_style_picker.select(1)
	demo.district_style_picker.item_selected.emit(1)
	_expect(demo.state.districts[0].style == "deep" and demo.state.revision == selected_revision + 1, "Style picker edits the selected district in one reversible transaction")
	demo.district_name.text = "门前深流"
	demo.district_name.text_submitted.emit(demo.district_name.text)
	_expect(demo.state.districts[0].name == "门前深流", "Submitting the name edits the real selected district")
	var named_revision: int = demo.state.revision
	demo.district_name.grab_focus()
	await _key(KEY_1)
	await _key(KEY_Z, true)
	_expect(demo.tool == 7 and demo.state.revision == named_revision, "District name focus isolates tool and undo shortcuts")
	demo.district_name.release_focus()
	_expect(demo.district_description.text.contains("可沿路抵达") and demo.district_description.text.contains("面包坊") and demo.district_description.text.contains("演奏庭"), "Selected district reports actual member roles and road-based service reach")
	_expect(demo._district_home_has_service("h3", "bakery") and demo._district_home_has_service("h3", "venue"), "Service reach includes real connected destinations outside the selected district")
	await _stroke([Vector3(9, 0, 3)])
	_expect(demo.state.districts.size() == 2 and not demo._district_home_has_service("h6", "bakery") and demo.district_description.text.contains("面包坊 0 / 1"), "A painted right-bank residence stays unable to reach services without a real bridge")
	await _key(KEY_Z, true)
	await _stroke([Vector3(-8, 0, -1)])
	await _stroke([Vector3(-8, 0, -1), Vector3(-4, 0, -1)])
	_expect(demo.state.districts.size() == 2, "Dragging from inside an existing district still paints a new district")
	var second: Dictionary = demo.state.districts[-1].duplicate(true)
	await _stroke([Vector3(-4, 0, -1)], false, true)
	_expect(demo.state.districts.size() == 1 and demo.state.districts[0].id == id, "Shift click removes the entire topmost district only")
	await _key(KEY_Z, true)
	_expect(demo.state.districts.size() == 2 and demo.state.districts[-1] == second, "Undo restores the complete removed district")
	await _stroke([Vector3(-14, 0, 7), Vector3(-11, 0, 7)], true)
	await _key(KEY_1)
	_expect(not demo.district_panel.visible and not demo.district_drawing and demo.district_points.is_empty() and not demo.town.districts_layer.visible, "Leaving district tool clears drawing, options, and district map layer")
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	if failures.is_empty():
		print("PASS city creation district viewport input")
		quit(0)
	else:
		for failure: String in failures: push_error(failure)
		quit(1)
