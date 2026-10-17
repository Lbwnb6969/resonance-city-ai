extends SceneTree
## One integrated play contract: real viewport input, physics picking and life.
const Scene = preload("res://scenes/city_creation.tscn")
var failures: Array[String] = []
var demo: Node3D

func _initialize() -> void:
	_run.call_deferred()

func _expect(value: bool, message: String) -> void:
	if not value: failures.append(message)

func _wait_edit() -> void:
	# Geometry is versioned: next interactions need the published picking/world,
	# not an assumed two-frame delay. Superseding input is tested separately.
	var until := Time.get_ticks_msec()+20000
	while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_expect(not demo.edit_pending(),"Latest edit must publish before the next complete interaction")

func _click_world(point: Vector3) -> void:
	var position: Vector2 = demo.camera.unproject_position(point)
	var motion := InputEventMouseMotion.new()
	motion.position = position
	motion.global_position = position
	root.push_input(motion)
	await process_frame
	var down := InputEventMouseButton.new()
	down.position = position
	down.global_position = position
	down.button_index = MOUSE_BUTTON_LEFT
	down.pressed = true
	root.push_input(down)
	var up := InputEventMouseButton.new()
	up.position = position
	up.global_position = position
	up.button_index = MOUSE_BUTTON_LEFT
	root.push_input(up)
	await physics_frame
	await process_frame
	await _wait_edit()

func _key(code: int, control: bool = false, shift: bool = false) -> void:
	var event := InputEventKey.new()
	event.keycode = code
	event.pressed = true
	event.ctrl_pressed = control
	event.shift_pressed = shift
	root.push_input(event)
	await physics_frame
	await process_frame
	await _wait_edit()

func _drag_world(points: Array[Vector3], cancel: bool = false, erase_plants: bool = false) -> void:
	var position: Vector2 = demo.camera.unproject_position(points[0])
	var down := InputEventMouseButton.new()
	down.position = position
	down.global_position = position
	down.button_index = MOUSE_BUTTON_LEFT
	down.pressed = true
	down.shift_pressed = erase_plants
	root.push_input(down)
	for point in points:
		var motion := InputEventMouseMotion.new()
		motion.position = demo.camera.unproject_position(point)
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
	await _wait_edit()

func _run() -> void:
	root.size = Vector2i(1440,900)
	root.content_scale_size = Vector2i(1440,900)
	root.content_scale_mode = Window.CONTENT_SCALE_MODE_CANVAS_ITEMS
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	await physics_frame
	await process_frame
	demo.music.set_muted(true)
	var batch_probe := Node3D.new()
	demo.add_child(batch_probe)
	var quad: MeshInstance3D = demo.town._quad(batch_probe,Vector3(0,0,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,0),Color("d3c5a5"))
	var cylinder: MeshInstance3D = demo.town._cylinder(batch_probe,0.4,0.4,0.02,Vector3.ZERO,demo.town._material(Color("d3c5a5")),8)
	var expected_faces: int = quad.mesh.get_faces().size()+cylinder.mesh.get_faces().size()
	_expect(quad.mesh.surface_get_arrays(0)[Mesh.ARRAY_NORMAL][0].y > 0.99, "Authored street must face upward with Godot winding")
	demo.town._merge_meshes(batch_probe)
	_expect(batch_probe.get_child_count() == 1 and batch_probe.get_child(0).mesh.get_faces().size() == expected_faces, "Material batching must preserve both street triangles and indexed junction primitives")
	batch_probe.queue_free()
	var original: Dictionary = demo.state.snapshot()
	var unchanged_house_id: int = demo.town.house_roots["h1"].get_instance_id()
	var unchanged_road_id: int = demo.town.road_roots["r1"].get_instance_id()
	var idle_count: int = demo.state.houses.size()
	var idle_cells: int = demo.state.houses[2].cells.size()
	for i in range(12): await process_frame
	_expect(demo.state.houses.size() == idle_count and demo.state.houses[2].cells.size() == idle_cells, "Idle time must not grow the town")
	await _click_world(Vector3(-5.299,0.9,0.0))
	_expect(demo.state.houses[2].cells.size() == idle_cells+1, "Visible +x wall must expand h3 with real mouse input")
	var added: Dictionary = demo.state.houses[2].cells[-1]
	_expect(added.x == 2 and added.level == 0, "Wall pick must resolve the intended stable local cell")
	_expect(demo.town.house_roots["h1"].get_instance_id() == unchanged_house_id and demo.town.road_roots["r1"].get_instance_id() == unchanged_road_id, "Local edit must retain unrelated house and road geometry")
	_expect(int(demo.town.rebuild_stats.roads_changed) == 0 and int(demo.town.rebuild_stats.houses_changed) <= 2, "Local edit must only rebuild the affected house and actual clearance dependencies")
	demo.yaw = 0.0
	demo.pitch = 0.95
	demo._update_camera()
	await _click_world(Vector3(-4.4,1.701,0.0))
	_expect(demo.state.houses[2].cells.size() == idle_cells+2, "Top pick must raise the selected room immediately")
	await _key(KEY_2)
	await _click_world(Vector3(-6.2,1.701,0.0))
	var terrace_id := ""
	for cell: Dictionary in demo.state.houses[2].cells:
		if cell.kind == "terrace": terrace_id = str(cell.id)
	_expect(not terrace_id.is_empty(), "Terrace tool must create a roof garden")
	var before_remove: Dictionary = demo.state.snapshot()
	await _key(KEY_4)
	await _click_world(Vector3(-6.2,1.885,0.0))
	_expect(demo._find_cell("h3",terrace_id).is_empty(), "Erase must pick and remove the terrace, not another house")
	await _key(KEY_Z,true)
	_expect(not demo._find_cell("h3",terrace_id).is_empty(), "Ctrl+Z must restore the same stable module ID")
	await _key(KEY_Z,true,true)
	_expect(demo._find_cell("h3",terrace_id).is_empty(), "Ctrl+Shift+Z must redo removal")
	await _key(KEY_Z,true)
	_expect(demo.state.snapshot().houses == before_remove.houses, "Undo must recover exact geometry and source")
	await _key(KEY_3)
	var road_count: int = demo.state.roads.size()
	var road_revision: int = demo.state.revision
	var old_road_fingerprints: Dictionary = demo.town.road_fingerprints.duplicate()
	await _drag_world([Vector3(-11,0,9),Vector3(-11,0,11),Vector3(9,0,11),Vector3(9,0,4.55)],true)
	_expect(demo.state.roads.size() == road_count and demo.state.revision == road_revision, "Cancelling a street preview must write nothing")
	await _drag_world([Vector3(-11,0,8.993),Vector3(-11,0,11),Vector3(9,0,11),Vector3(9,0,4.55)])
	_expect(demo.state.roads.size() == road_count+1 and demo.state.revision == road_revision+1, "One continuous road stroke must publish exactly one operation")
	_expect(bool(demo.state.roads[-1].get("bridge",false)), "A transverse road must create a real bridge")
	var changed_roads: Array = []
	for id: String in demo.town.road_fingerprints:
		if old_road_fingerprints.get(id) != demo.town.road_fingerprints[id]: changed_roads.append(id)
	# The 1.4 m mouth at the main-road end also meets r6's existing mouth.
	# r2-r5 are remote branches of the same main road and must stay cached.
	_expect(changed_roads == ["r1","r6",str(demo.state.roads[-1].id)] and int(demo.town.rebuild_stats.roads_changed) == 3, "Rebuild only the new road, main junction and overlapping nearby mouth; preserve all remote branch caches")
	await _key(KEY_Z,true)
	_expect(demo.state.roads.size() == road_count, "A whole road stroke must undo in one step")
	await _key(KEY_Z,true,true)
	_expect(demo.state.roads.size() == road_count+1, "Road redo must recover the complete continuous path")
	demo.life._sync()
	_expect(demo.life.residents.size() == 4, "A bridge starting inside a real road strip must connect the right-bank resident")
	await _key(KEY_5)
	await _click_world(Vector3(-2.4,0.9,1.9))
	_expect(demo.selected_house == "h4" and demo.place_panel.visible, "Use tool must select one stable house")
	var revision: int = demo.state.revision
	demo.place_name.grab_focus()
	await _key(KEY_1)
	await _key(KEY_Z,true)
	_expect(demo.tool == 4 and demo.state.revision == revision, "Name entry must isolate gameplay hotkeys")
	demo.place_name.release_focus()
	await _key(KEY_6)
	demo.focus = Vector3(-5,0,0)
	demo.zoom = 40.0
	demo._update_camera()
	demo.vegetation_kind = "shrub"
	var plants_before: Array = demo.state.plants.duplicate(true)
	var resident_id: int = demo.life.residents[0].node.get_instance_id()
	var plant_revision: int = demo.state.revision
	await _drag_world([Vector3(-14,0,12),Vector3(-11,0,12)],true)
	_expect(demo.state.revision == plant_revision and demo.state.plants == plants_before, "Esc must cancel vegetation without changing IDs or seed stream")
	await _drag_world([Vector3(-14,0,12),Vector3(-11,0,12)])
	var planted: Array = demo.state.plants.duplicate(true)
	_expect(planted.size()>plants_before.size() and demo.state.revision == plant_revision+1, "A real vegetation stroke must be one immediate transaction")
	_expect(demo.town.rebuild_stats.houses_changed == 0 and demo.town.rebuild_stats.roads_changed == 0 and demo.town.rebuild_stats.vegetation_blocks_changed <= 4, "A garden stroke must only dirty its vegetation blocks")
	_expect(demo.life.residents[0].node.get_instance_id() == resident_id, "Planting must preserve an in-flight resident")
	await _key(KEY_Z,true)
	_expect(demo.state.plants == plants_before, "One undo must remove the whole tree stroke")
	await _key(KEY_Z,true,true)
	_expect(demo.state.plants == planted, "Vegetation redo must recover identical plants and seeds")
	await _drag_world([Vector3(-14,0,12),Vector3(-11,0,12)],false,true)
	_expect(demo.state.plants.size() < planted.size(), "Shift brush must erase existing plants")
	await _key(KEY_Z,true)
	_expect(demo.state.plants == planted, "Vegetation erase undo must restore precise instances")
	await _key(KEY_3)
	var road_mode: OptionButton = demo.road_panel.find_child("RoadMode",true,false)
	road_mode.select(1)
	road_mode.item_selected.emit(1)
	var straight_count: int = demo.state.roads.size()
	await _drag_world([Vector3(-15,0,11),Vector3(-13,0,8),Vector3(-15,0,4)])
	_expect(demo.state.roads.size() == straight_count+1 and demo.state.roads[-1].points.size() == 2 and absf(demo.state.roads[-1].points[0][0]-demo.state.roads[-1].points[1][0]) < 0.0001, "Straight mode ignores the intermediate pointer trail and commits exactly two endpoints")
	await _key(KEY_Z,true)
	_expect(demo.state.roads.size() == straight_count, "Straight road undoes as one stroke")
	await _key(KEY_7)
	_expect(demo.tool == 6 and demo.water_panel.visible, "Water shortcut must select the visible shoreline options")
	var water_revision: int = demo.state.revision
	var water_road_id: int = demo.town.road_roots["r1"].get_instance_id()
	await _drag_world([Vector3(-15,0,-9),Vector3(-15,0,-7)],true)
	_expect(demo.state.waters.is_empty() and demo.state.revision == water_revision, "Esc cancels water before any identity or geometry is committed")
	await _drag_world([Vector3(-15,0,-9),Vector3(-15,0,-7)])
	var waters: Array = demo.state.waters.duplicate(true)
	_expect(waters.size() == 1 and demo.state.revision == water_revision+1, "A real shoreline stroke is one immediate transaction")
	_expect(demo.town.house_roots["h1"].get_instance_id() == unchanged_house_id and demo.town.road_roots["r1"].get_instance_id() == water_road_id, "Remote water edit preserves unrelated buildings and road geometry")
	await _key(KEY_Z,true)
	_expect(demo.state.waters.is_empty(), "Water stroke undoes in one step")
	await _key(KEY_Z,true,true)
	_expect(demo.state.waters == waters, "Water redo preserves precise shoreline, seed and ID")
	await _drag_world([Vector3(-15,0,-8)],false,true)
	_expect(demo.state.waters.is_empty(), "Shift clicking water fills the authored stroke")
	await _key(KEY_Z,true)
	_expect(demo.state.waters == waters, "Undo fill restores water")
	var save_path := "user://city_creation_play_contract.json"
	var saved: Dictionary = demo.state.save_city(save_path)
	_expect(saved.ok, "Integrated town must save successfully")
	var copy = preload("res://scripts/world/city_creation_state.gd").new()
	var restored: Dictionary = copy.load_city(save_path)
	_expect(restored.ok and copy.snapshot().houses == demo.state.snapshot().houses and copy.snapshot().roads == demo.state.snapshot().roads and copy.snapshot().plants == demo.state.snapshot().plants and copy.snapshot().waters == waters, "Integrated geometry bridge, water and garden must restore exactly")
	demo.life.set_process(false)
	for i in range(900): demo.life._process(0.2)
	_expect(demo.life.purchases > 0 and demo.life.gatherings > 0, "Residents must complete reachable bakery and venue visits")
	var life = preload("res://scripts/world/city_creation_life.gd").new()
	root.add_child(life)
	copy.roads.clear()
	life.setup(copy)
	life.set_process(false)
	for i in range(80): life._process(0.5)
	_expect(not life.residents.is_empty() and life.residents.all(func(person:Dictionary)->bool:return person.paused and person.route.is_empty()) and life.purchases == 0 and life.gatherings == 0, "Disconnected neighbors stay at home without phantom trips or completed services")
	var report := {"ok":failures.is_empty(),"failures":failures,"real_input":true,"houses":demo.state.houses.size(),"cells":demo.state.houses[2].cells.size(),"purchases":demo.life.purchases,"gatherings":demo.life.gatherings,"revision":demo.state.revision}
	print("CITY_CREATION_PLAY ",JSON.stringify(report))
	life.queue_free()
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
