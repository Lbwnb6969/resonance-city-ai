extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")
const Fixture = preload("res://tools/fixtures/city_creation_neoclassical_fixture.gd")
const Probe = preload("res://tools/fixtures/city_creation_audio_probe.gd")
const State = Fixture.State
var OUT := "res://验证记录/M23"
var demo
var checks: Array = []
var failures: Array = []
var facts: Dictionary = {}
func _initialize() -> void: run.call_deferred()
func check(ok: bool, label: String) -> void:
	checks.append({"label":label,"ok":ok})
	if not ok: failures.append(label); push_error(label)
func settle() -> void:
	var end := Time.get_ticks_msec()+45000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end: await process_frame
	check(not demo.edit_pending() and not demo._edit_ui_pending,"production publication completes")
	for i in range(4): await process_frame
	await physics_frame
func key(code: int, ctrl := false) -> void:
	for down in [true,false]:
		var event := InputEventKey.new(); event.keycode=code; event.pressed=down; event.ctrl_pressed=ctrl
		root.push_input(event); await process_frame
func click(at: Vector2) -> void:
	var motion := InputEventMouseMotion.new(); motion.position=at; root.push_input(motion)
	await process_frame; await RenderingServer.frame_post_draw
	for down in [true,false]:
		var event := InputEventMouseButton.new(); event.position=at; event.global_position=at; event.button_index=MOUSE_BUTTON_LEFT; event.pressed=down
		root.push_input(event); await process_frame
func shot(name: String) -> void:
	demo.toast.hide(); demo.toast_time=0; demo.town.clear_preview()
	await process_frame; await RenderingServer.frame_post_draw
	var frame: Image = root.get_texture().get_image() if name.begins_with("neo_compass") else await preload("res://scripts/ui/city_creation_postcard_stamp.gd").scene_frame(demo)
	check(frame.save_png(OUT+"/"+name+".png")==OK,"native GPU screenshot "+name)
func marks(id: String) -> Array:
	var result: Array = []
	for node: Node3D in demo.town.house_roots[id].find_children("*","Node3D",true,false):
		if node.has_meta("neoclassical_kind"): result.append([node.get_meta("neoclassical_kind"),node.get_meta("story"),node.get_meta("column_floors"),node.has_node("OrielProjection")])
	return result
func voices() -> Array:
	var rows: Array = []
	for player: Node in demo.music.get_children(): rows.append(player.get_instance_id())
	for name: String in demo.music.STEMS:
		var pcm: AudioStreamWAV = demo.music._original_streams[name]
		var digest := HashingContext.new(); digest.start(HashingContext.HASH_SHA256); digest.update(pcm.data)
		rows.append([name,demo.music._players[name].get_instance_id(),pcm.get_instance_id(),digest.finish().hex_encode()])
	for player in demo.music._effects: rows.append(player.get_instance_id())
	return rows
func run() -> void:
	for arg: String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="): OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900); Engine.max_fps=120; DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate(); demo.persistence=false; demo.collection_directory=OUT+"/临时作品库"; root.add_child(demo)
	demo.life.set_process(false)
	var deadline := Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"OpenGL window and real original PCM loaded")
	var audio_ids := voices()
	var city := Fixture.city()
	demo._after_edit(demo.state.restore(city.snapshot()),"history"); await settle()
	demo.life.set_process(false)
	var houses: Array = demo.state.houses.slice(-6)
	var records: Dictionary = {}
	var finite := true; var paper := 0; var actual_bays := 0
	for house: Dictionary in houses:
		records[house.id]=marks(house.id)
		for mesh: MeshInstance3D in demo.town.house_roots[house.id].find_children("*","MeshInstance3D",true,false):
			if mesh.material_override.get_meta("creation_wall_batch",false):
				paper+=1; finite=finite and float(mesh.material_override.get_shader_parameter("micro_normal_strength"))>0
			for point: Vector3 in mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]: finite=finite and point.is_finite()
		actual_bays+=demo.town.house_roots[house.id].find_children("OrielPick","CollisionShape3D",true,false).size()
	check(finite and paper>=12 and actual_bays==6,"six actual upper bays, lit paper/AO batches and all finite vertices")
	facts.architecture=records
	demo.ui_layer.hide(); demo.zoom=8; demo.yaw=-.65
	for size: Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size
		for index in range(houses.size()):
			var house: Dictionary = houses[index]
			demo.focus=Vector3(house.origin[0]+(.9 if index%3==2 else 0),2.8 if index%3==2 else .9,house.origin[1])
			demo.zoom=11 if index%3==2 else 8
			for phase in range(3):
				demo._set_light_phase(phase); demo.pitch=.58; demo._update_camera()
				await shot("neo_%d_kind_%d_phase_%d"%[size.x,index,phase])
			for angle in [5,10,15]:
				demo._set_light_phase(0); demo.pitch=deg_to_rad(angle); demo._update_camera()
				var actual := rad_to_deg(asin(demo.camera.global_basis.z.y))
				check(absf(actual-angle)<.01,"actual camera elevation %d degrees at %d kind %d"%[angle,size.x,index])
				await shot("neo_%d_kind_%d_low_%d"%[size.x,index,angle])
		# Native tool-five pick opens the production hollow roof compass.
		var target: Dictionary = houses[0]
		demo.ui_layer.show(); demo.pitch=.85; demo.focus=Vector3(target.origin[0],.9,target.origin[1]); demo.zoom=14; demo._update_camera()
		demo.select_tool(4); await process_frame
		await click(demo.camera.unproject_position(Vector3(target.origin[0],1.8,target.origin[1])))
		await create_timer(.25).timeout
		check(demo.spatial_popover.target_house_id==target.id and demo.spatial_popover.card.visible and demo.spatial_popover.ring.placement_ok,"native roof pick and unobstructed compass at "+str(size.x))
		await shot("neo_compass_%d"%size.x)
		demo.spatial_popover.close(); demo.ui_layer.hide()
	# Actual protruding bay is pickable and does not add a low pedestrian collider.
	var corner: Dictionary = houses[2]
	var body: StaticBody3D = demo.town.house_roots[corner.id].find_children("OrielPick","CollisionShape3D",true,false)[0].get_parent()
	var shape: CollisionShape3D = body.get_child(0)
	var box: AABB = AABB(shape.position-shape.shape.size*.5,shape.shape.size)
	var center: Vector3 = body.to_global(box.get_center())
	var hit: Dictionary = demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(center+Vector3(0,10,0),center-Vector3(0,.1,0),1))
	check(not hit.is_empty() and hit.collider.get_meta("house_id","")==corner.id and center.y-box.size.y*.5>1.7,"actual bay physics ray resolves original house with street clearance")
	# Grow the real cottage, undo/redo natively, then reopen an isolated saved city.
	root.size=Vector2i(1440,900); demo.ui_layer.show(); demo.pitch=.85
	var target: Dictionary = houses[0]; var id: String = target.id
	demo.focus=Vector3(target.origin[0],.9,target.origin[1]); demo.zoom=14; demo._update_camera()
	demo._after_edit(demo.state.add_cell(id,0,0,1),"room"); await settle()
	var grown := marks(id)
	check(grown.any(func(row):return row[1]==1) and grown.all(func(row):return row[0]==1),"real floor addition changes cottage into townhouse")
	await key(KEY_Z,true); await settle(); check(marks(id)==records[id],"native Ctrl+Z restores original cottage recipe")
	await key(KEY_Y,true); await settle(); check(marks(id)==grown,"native Ctrl+Y restores exact taller hierarchy")
	demo.spatial_popover.open_for_house(id); await create_timer(.25).timeout
	await click(demo.spatial_popover.style_button.get_global_rect().get_center()); await settle()
	check(demo.town.house_roots[id].get_meta("house_style")=="timber" and marks(id).is_empty(),"native compass style button keeps distinct timber construction")
	await key(KEY_Z,true); await settle(); check(marks(id)==grown,"native undo restores neoclassical style and all geometry")
	var saved: Dictionary = demo.state.snapshot()
	check(demo.state.save_city(OUT+"/isolated_city.json").ok,"actual city atomically saved outside personal user storage")
	var loaded := State.new()
	var restored: Dictionary = loaded.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/isolated_city.json")))
	check(restored.ok and loaded.snapshot()==saved,"isolated disk JSON restores complete authored city")
	demo._after_edit(demo.state.restore(loaded.snapshot()),"history"); await settle()
	check(marks(id)==grown and marks(corner.id)==records[corner.id],"actual render reload preserves townhouse and all corner bays")
	facts.audio=await Probe.record(OUT+"/Master.wav",3.2); check(facts.audio.ok,"actual Master audible with zero clipped samples")
	check(voices()==audio_ids and demo.music._players.size()==12 and demo.music._effects.size()==4 and demo.music.spatial._names.size()==6 and demo.ambience.get_child_count()==2,"same fixed original PCM, twelve long/four short/six buses/two nature voices throughout building and reload")
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continuing-city file bytes untouched")
	var result := {"ok":failures.is_empty(),"checks":checks,"check_count":checks.size(),"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("NEOCLASSICAL_LIVE ",JSON.stringify({"ok":result.ok,"checks":checks.size(),"failures":failures,"audio":facts.audio}))
	demo.queue_free(); await process_frame; quit(0 if failures.is_empty() else 1)
