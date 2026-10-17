extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")
var output := "res://验证记录/道路门廊_2026-10-14/live"
var demo: Node3D
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	_run.call_deferred()

func _check(value: bool, message: String) -> void:
	checks += 1
	if not value: failures.append(message)

func _key(code: int, ctrl: bool = false, shift: bool = false) -> void:
	var event := InputEventKey.new()
	event.keycode = code
	event.pressed = true
	event.ctrl_pressed = ctrl
	event.shift_pressed = shift
	root.push_input(event)
	await process_frame
	await physics_frame

func _capture(label: String) -> void:
	await process_frame
	await process_frame
	if DisplayServer.get_name() != "headless":
		root.get_texture().get_image().save_png(output+"/"+label+".png")

func _drag(points: Array[Vector3], preview_label: String = "") -> void:
	var before: Dictionary = demo.state.snapshot()
	var event := InputEventMouseButton.new()
	event.position = demo.camera.unproject_position(points[0])
	event.global_position = event.position
	event.button_index = MOUSE_BUTTON_LEFT
	event.pressed = true
	root.push_input(event)
	for point: Vector3 in points:
		var motion := InputEventMouseMotion.new()
		motion.position = demo.camera.unproject_position(point)
		motion.global_position = motion.position
		root.push_input(motion)
		await process_frame
	if not preview_label.is_empty():
		_check(demo.state.snapshot()==before,"porch preview never mutates authored state or consumes IDs")
		_check(int(demo.town.preview.get_meta("porch_previews",0))==1,"wall draft explicitly previews one derived porch")
		print("FRONTAGE_DRAFT ",JSON.stringify({"raw":demo.road_points,"preview":demo.road_preview,"pointer_world":demo._road_pointer_at(),"check":demo.state.preview_road(demo.road_preview)}))
		await _capture(preview_label)
	event = InputEventMouseButton.new()
	event.position = demo.camera.unproject_position(points[-1])
	event.global_position = event.position
	event.button_index = MOUSE_BUTTON_LEFT
	root.push_input(event)
	await physics_frame
	await process_frame

func _erase(point: Vector3) -> void:
	var position: Vector2 = demo.camera.unproject_position(point)
	var motion := InputEventMouseMotion.new()
	motion.position = position
	motion.global_position = position
	root.push_input(motion)
	var event := InputEventMouseButton.new()
	event.position = position
	event.global_position = position
	event.button_index = MOUSE_BUTTON_LEFT
	event.pressed = true
	event.shift_pressed = true
	root.push_input(event)
	event = InputEventMouseButton.new()
	event.position = position
	event.global_position = position
	event.button_index = MOUSE_BUTTON_LEFT
	root.push_input(event)
	await physics_frame
	await process_frame

func _side_door() -> Dictionary:
	for entrance: Dictionary in demo.state.house_entrances("h6"):
		if entrance.side == Vector2i.RIGHT and entrance.active: return entrance
	return {}

func _person(home: String) -> Dictionary:
	for person: Dictionary in demo.life.residents:
		if person.home_id == home: return person
	return {}

func _run() -> void:
	if "--soft-path" in OS.get_cmdline_user_args(): output="res://验证记录/柔和路缘_2026-10-15/frontage"
	root.size = Vector2i(1440,900)
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.ui_layer.visible = false
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	await physics_frame
	await process_frame
	var original: Dictionary = _person("h6")
	var resident_id: int = original.node.get_instance_id()
	var original_position: Vector3 = original.node.position
	_check(original.paused, "old right-bank home begins unserved")
	var retained_house: int = demo.town.house_roots.h1.get_instance_id()
	await _key(KEY_3)
	demo.focus = Vector3(0,0.7,5)
	demo.zoom = 40
	demo._update_camera()
	demo.road_straight = true
	await _drag([Vector3(-11,0,9),Vector3(9,0,11)])
	_check(bool(demo.state.roads[-1].bridge), "real mouse stroke creates the bridge")
	demo.road_straight = false
	await _capture("01_bridge_before_side_door")
	var roads_before: int = demo.state.roads.size()
	await _drag([Vector3(9,0,11),Vector3(12,0,11),Vector3(12,0,3),Vector3(9.9,0.62,3)],"02_wall_approach_preview")
	_check(demo.state.roads.size() == roads_before+1, "real curved wall approach commits one road")
	_check(not _side_door().is_empty(), "east wall becomes a real derived entrance")
	var edited_road: String = str(demo.state.roads[-1].id)
	var edit_stats: Dictionary = demo.town.rebuild_stats.duplicate()
	_check(demo.town.house_roots.h1.get_instance_id() == retained_house, "side door preserves unrelated house GPU root")
	var wall: Node = demo.town.house_roots.h6.find_child("Entrance_1_0",true,false)
	_check(wall != null and wall.get_meta("porch_steps",0) == 3 and wall.get_meta("door_lamp",false), "active wall renders three treads and a door lantern")
	_check(demo.life.selected_entrances.has("h6") and demo.life.selected_entrances.h6.side == Vector2i.RIGHT, "life selects the actual east-only access")
	var resident: Dictionary = _person("h6")
	_check(resident.node.get_instance_id() == resident_id, "same old unserved inhabitant receives the new connection")
	_check(resident.node.position.distance_to(original_position) < 0.02 and not resident.paused and resident.route.size() > 1, "old south-door inhabitant starts an exterior walk without teleporting")
	demo.focus = Vector3(9,0.7,3)
	demo.zoom = 11
	demo._update_camera()
	await _capture("03_live_east_porch")
	var began: Vector3 = resident.node.position
	for tick in range(30): demo.life._process(0.1)
	_check(resident.node.position.distance_to(began)>0.25, "connected inhabitant physically progresses along the new path")
	var purchases_before: int = demo.life.purchases
	for tick in range(1000): demo.life._process(0.2)
	_check(demo.life.purchases>purchases_before and not resident.paused, "connected town continues actual stock-backed purchases")
	var saved: Dictionary = demo.state.snapshot()
	await _erase(Vector3(11.4,0,3))
	_check(demo.state.roads.size()==roads_before and _side_door().is_empty(), "Shift clicking the real road removes its derived side door")
	_check(not demo.life.connected_houses.has("h6"), "road removal truly disconnects the east-only home")
	await _capture("04_erased_road_wall_restored")
	await _key(KEY_Z,true)
	_check(demo.state.roads.size()==roads_before+1 and not _side_door().is_empty(), "undo restores the whole road and porch together")
	_check(str(demo.state.roads[-1].id)==edited_road and demo.state.houses==saved.houses, "undo retains identities and authored houses")
	await _capture("05_undo_restored_porch")
	await _key(KEY_Z,true,true)
	_check(_side_door().is_empty(), "redo removes porch with the same street")
	await _key(KEY_Z,true)
	var path := "user://city_creation_frontage_live_contract.json"
	_check(demo.state.save_city(path).ok, "wall approach saves through symmetric house-road validation")
	var copy = preload("res://scripts/world/city_creation_state.gd").new()
	_check(copy.load_city(path).ok and copy.house_entrances("h6")==demo.state.house_entrances("h6"), "restored city derives identical actual entry geometry")
	demo.life.set_process(true)
	var started := Time.get_ticks_msec()
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()-started<12000: await process_frame
	demo.frame_samples.clear()
	for frame in range(540): await process_frame
	var diagnostics: Dictionary = demo.diagnostics()
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"real_viewport_input":true,"mode":DisplayServer.get_name(),"porch_rebuild":edit_stats,"fps":diagnostics.fps,"frame_p95_ms":diagnostics.frame_p95_ms,"audio":diagnostics.audio,"plants":demo.state.plants.size(),"meadow":diagnostics.meadow,"shore":diagnostics.shore}
	var file := FileAccess.open(output+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("CREATION_FRONTAGE_LIVE ",JSON.stringify(report))
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
