extends SceneTree
## Actual viewport road editing plus independent physics rays through the hole.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Life = preload("res://scripts/world/city_creation_life.gd")
var output := "res://验证记录/穿房拱门_2026-10-15/live"
var demo: Node3D
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	_run.call_deferred()

func _check(value: bool, message: String) -> void:
	checks += 1
	if not value: failures.append(message)

func _capture(label: String) -> void:
	await process_frame
	await process_frame
	if DisplayServer.get_name() != "headless": root.get_texture().get_image().save_png(output+"/"+label+".png")

func _key(code: int, ctrl := false, shift := false) -> void:
	var event := InputEventKey.new()
	event.keycode = code
	event.pressed = true
	event.ctrl_pressed = ctrl
	event.shift_pressed = shift
	root.push_input(event)
	await physics_frame
	await process_frame

func _button(at: Vector3, pressed: bool, shift := false) -> void:
	var event := InputEventMouseButton.new()
	event.position = demo.camera.unproject_position(at)
	event.global_position = event.position
	event.button_index = MOUSE_BUTTON_LEFT
	event.pressed = pressed
	event.shift_pressed = shift
	root.push_input(event)
	await physics_frame
	await process_frame

func _motion(at: Vector3) -> void:
	var event := InputEventMouseMotion.new()
	event.position = demo.camera.unproject_position(at)
	event.global_position = event.position
	root.push_input(event)
	await physics_frame
	await process_frame

func _ray(a: Vector3, b: Vector3) -> Dictionary:
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(a,b))

func _home_person() -> Dictionary:
	for resident: Dictionary in demo.life.residents:
		if str(resident.home_id)=="h6": return resident
	return {}

func _near() -> void:
	demo.focus = Vector3(9,0.8,3)
	demo.zoom = 10
	demo.yaw = 1.15
	demo.pitch = 0.43
	demo._update_camera()

func _wide() -> void:
	demo.focus = Vector3(0,0.7,3)
	demo.zoom = 32
	demo.yaw = 0.0
	demo.pitch = 1.05
	demo._update_camera()

func _draft() -> void:
	await _button(Vector3(-11,0,3),true)
	for x in [-7.0,-1.0,6.0,9.0,12.0]: await _motion(Vector3(x,0,3))

func _run() -> void:
	root.size = Vector2i(1440,900)
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	demo.ui_layer.visible = false
	demo.life.set_process(false)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	await physics_frame
	await process_frame
	# An actual roof click first makes the retained upper room.
	_near()
	await _key(KEY_1)
	await _motion(Vector3(9,1.7,3))
	await _button(Vector3(9,1.7,3),true)
	await _button(Vector3(9,1.7,3),false)
	var original_house: Dictionary = demo.town._house_record("h6").duplicate(true)
	_check(original_house.cells.size()==2,"roof click creates an upper room before the street")
	var person: Dictionary = _home_person()
	var person_id: int = person.node.get_instance_id()
	var start_position: Vector3 = person.node.position
	_check(person.paused,"right bank really starts unserved")
	_check(not _ray(Vector3(11,0.5,3),Vector3(7,0.5,3)).is_empty(),"original room blocks the future corridor")
	await _capture("01_before_solid_room")
	var retained_house: int = demo.town.house_roots.h1.get_instance_id()
	var retained_road: int = demo.town.road_roots.r6.get_instance_id()
	var before: Dictionary = demo.state.snapshot()
	var road_count: int = demo.state.roads.size()
	await _key(KEY_3)
	demo.road_straight = true
	_wide()
	await _draft()
	_check(demo.state.snapshot()==before,"complete draft does not consume IDs or mutate the city")
	_check(int(demo.town.preview.get_meta("passage_previews",0))==1,"draft previews one real ground-room passage")
	_check(demo.road_status.text.contains("石拱"),"road tool explains the resulting passage")
	await _capture("02_passage_preview")
	await _key(KEY_ESCAPE)
	await _button(Vector3(12,0,3),false)
	_check(demo.state.snapshot()==before and not demo.town.preview.has_meta("passage_previews"),"Escape cancels draft and clears arch metadata")
	await _draft()
	await _button(Vector3(12,0,3),false)
	var rebuild: Dictionary = demo.town.rebuild_stats.duplicate()
	_check(demo.state.roads.size()==road_count+1,"real straight drag across bridge and house commits one road")
	var road_id := str(demo.state.roads[-1].id)
	_check(demo.state.roads[-1].bridge,"the same authored road has a true water crossing")
	_check(demo.town._house_record("h6")==original_house,"house ID, cells and upper room stay byte-equivalent")
	_check(demo.state.house_passages("h6").size()==1,"passage derives from the committed geometry")
	_check(demo.town.house_roots.h1.get_instance_id()==retained_house,"unrelated house geometry remains cached")
	_check(demo.town.road_roots.r6.get_instance_id()==retained_road,"distant road core remains cached")
	await physics_frame
	_check(_ray(Vector3(11,0.5,3),Vector3(7,0.5,3)).is_empty(),"physics ray passes through both arch walls and room interior")
	_check(_ray(Vector3(11,0.09,3),Vector3(7,0.09,3)).is_empty(),"foundation leaves the actual road unobstructed")
	var pier := _ray(Vector3(11,0.5,3.82),Vector3(7,0.5,3.82))
	_check(not pier.is_empty() and pier.collider.get_meta("house_id","")=="h6","real side pier remains pickable as the same house")
	var upper := _ray(Vector3(11,2.1,3),Vector3(7,2.1,3))
	_check(not upper.is_empty() and int(upper.collider.get_meta("cell",{}).get("level",-1))==1,"retained upper room still has real collision")
	_check(person.node.get_instance_id()==person_id and person.node.position.is_equal_approx(start_position),"old resident remains at the actual location without teleporting")
	_check(demo.life.connected_houses.has("h6") and not person.paused,"new arch and bridge actually connect the old resident")
	_near()
	await _capture("03_open_arch_with_upper_room")
	var saw_passage := false
	var saw_bridge := false
	var checkpoint_verified := false
	var purchases: int = demo.life.purchases
	for tick in range(2400):
		demo.life._process(0.05)
		var at: Vector3 = person.node.position
		if at.x>8.15 and at.x<9.85 and absf(at.z-3.0)<0.4:
			saw_passage = true
			if not checkpoint_verified:
				var authored: Dictionary = demo.state.snapshot()
				authored.journey_checkpoint=demo.life.checkpoint()
				var reload := State.new()
				_check(reload.restore(JSON.parse_string(JSON.stringify(authored))).ok,"JSON save accepts an active journey inside the arch")
				var resumed := Life.new()
				root.add_child(resumed)
				resumed.set_process(false)
				resumed.setup(reload)
				var restored: Dictionary = {}
				for entry: Dictionary in resumed.residents:
					if entry.home_id=="h6": restored=entry
				_check(not restored.is_empty() and restored.node.position.is_equal_approx(at) and not restored.paused,"reloaded resident resumes the physical corridor position")
				resumed.queue_free()
				checkpoint_verified = true
				await _capture("04_resident_in_passage")
		if at.x>1.5 and at.x<4.5 and at.y>0.2: saw_bridge=true
		if saw_passage and saw_bridge and demo.life.purchases>purchases: break
	_check(saw_passage,"old resident physically walks inside the arch")
	_check(saw_bridge,"old resident physically walks on the bridge")
	_check(demo.life.purchases>purchases,"connected settlement completes real finite-stock purchases")
	var authored_houses: Array = demo.state.houses.duplicate(true)
	_wide()
	await _button(Vector3(11.5,0,3),true,true)
	await _button(Vector3(11.5,0,3),false)
	_check(demo.state.roads.size()==road_count and demo.state.house_passages("h6").is_empty(),"Shift erases the whole street and derived arch together")
	await physics_frame
	_check(not _ray(Vector3(11,0.5,3),Vector3(7,0.5,3)).is_empty(),"erasing street rebuilds an actually solid wall")
	_check(not demo.life.connected_houses.has("h6"),"removed bridge and arch cannot supply fake access")
	_near()
	await _capture("05_removed_street_restores_room")
	await _key(KEY_Z,true)
	_check(demo.state.house_passages("h6").size()==1 and str(demo.state.roads[-1].id)==road_id,"undo restores the same road and derived passage")
	_check(demo.state.houses==authored_houses,"undo never rewrites house identity or room payload")
	await physics_frame
	_check(_ray(Vector3(11,0.5,3),Vector3(7,0.5,3)).is_empty(),"undo restores the real collider opening")
	await _key(KEY_Z,true,true)
	_check(demo.state.house_passages("h6").is_empty(),"redo again restores solid architecture")
	await _key(KEY_Z,true)
	_near()
	await _capture("06_undo_restored_arch")
	# Freehand editing also opens the perpendicular pair of walls, leaving
	# a real four-way arcade rather than a closed floor under two road lines.
	_wide()
	demo.pitch = 1.15
	demo._update_camera()
	demo.road_straight = false
	var before_curve: Dictionary = demo.state.snapshot()
	await _button(Vector3(9,0,-1),true)
	for at: Vector3 in [Vector3(9.05,0,0.3),Vector3(9.10,0,1),Vector3(9.10,0,2.8),Vector3(9.10,0,3.2),Vector3(9.10,0,5),Vector3(9.05,0,5.7),Vector3(9,0,7)]: await _motion(at)
	_check(demo.state.snapshot()==before_curve and int(demo.town.preview.get_meta("passage_previews",0))==1,"free curve draft previews the same room without writes")
	await _button(Vector3(9,0,7),false)
	var curve_rebuild: Dictionary = demo.town.rebuild_stats.duplicate()
	_check(demo.state.roads.size()==road_count+2 and demo.state.house_passages("h6").size()==2,"freehand curve commits the perpendicular arch corridor")
	var lateral_extent := 0.0
	for at: Array in demo.state.roads[-1].points: lateral_extent=maxf(lateral_extent,absf(float(at[0])-9.0))
	_check(demo.state.roads[-1].points.size()>2 and lateral_extent>0.04,"authored freehand road retains a genuine lateral curve")
	_check(demo.town._house_record("h6")==original_house,"four-way arcade keeps both original room identities")
	await physics_frame
	_check(_ray(Vector3(9,0.5,1),Vector3(9,0.5,5)).is_empty() and _ray(Vector3(7,0.5,3),Vector3(11,0.5,3)).is_empty(),"both real corridors stay open after the freehand crossing")
	_near()
	await _capture("07_freehand_four_way_arcade")
	var save_path := "user://city_creation_passage_live_contract.json"
	_check(demo.state.save_city(save_path).ok,"dedicated fixture saves without touching personal work")
	var loaded := State.new()
	_check(loaded.load_city(save_path).ok and loaded.house_passages("h6")==demo.state.house_passages("h6"),"saved authored geometry derives exactly the same passage")
	demo.life.set_process(true)
	var started := Time.get_ticks_msec()
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()-started<12000: await process_frame
	demo.frame_samples.clear()
	for frame in range(300): await process_frame
	var diagnostics: Dictionary = demo.diagnostics()
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"real_viewport_input":true,"display":DisplayServer.get_name(),"arch_rebuild":rebuild,"curve_crossing_rebuild":curve_rebuild,"fps":diagnostics.fps,"frame_p95_ms":diagnostics.frame_p95_ms,"draw_calls":diagnostics.draw_calls,"triangles":diagnostics.triangles,"audio":diagnostics.audio,"passages":demo.state.house_passages("h6"),"edit_rebuild_ms":diagnostics.edit_rebuild_ms}
	var file := FileAccess.open(output+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("CREATION_PASSAGE_LIVE ",JSON.stringify(report))
	for failure: String in failures: push_error(failure)
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
