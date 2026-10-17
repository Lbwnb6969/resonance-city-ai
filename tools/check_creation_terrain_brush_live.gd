extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT = "res://验证记录/地形笔刷_2026-10-16"
var demo
var checks:=0
var failures: Array[String]=[]
var facts: Dictionary={}
var edit_times: Array[float]=[]
func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)
func _key(code: int,ctrl: bool=false,shift: bool=false) -> void:
	for down: bool in [true,false]:
		var key:=InputEventKey.new()
		key.keycode=code;key.ctrl_pressed=ctrl;key.shift_pressed=shift;key.pressed=down
		root.push_input(key)
		await process_frame
func _motion(at: Vector2) -> void:
	var motion:=InputEventMouseMotion.new()
	motion.position=at;motion.global_position=at
	root.push_input(motion)
	await process_frame
func _button(down: bool,shift: bool=false) -> void:
	var event:=InputEventMouseButton.new()
	event.position=demo.pointer;event.global_position=demo.pointer;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;event.shift_pressed=shift
	root.push_input(event)
	await process_frame
func _at(at: Vector2) -> Vector2:
	return demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
func _stroke(points: Array[Vector2],shift: bool=false,cancel: bool=false) -> void:
	await _motion(_at(points[0]))
	await _button(true,shift)
	for at: Vector2 in points: await _motion(_at(at))
	if cancel: await _key(KEY_ESCAPE)
	var started:=Time.get_ticks_usec()
	await _button(false,shift)
	await _wait()
	edit_times.append(float(Time.get_ticks_usec()-started)/1000.0)
func _wait() -> void:
	var deadline:=Time.get_ticks_msec()+20000
	while demo.edit_pending() and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending(),"latest world publication finishes")
	await physics_frame
	await process_frame
func _capture(name_value: String) -> void:
	demo.town.clear_preview()
	await process_frame
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")
func _ray_height(at: Vector2) -> float:
	var query:=PhysicsRayQueryParameters3D.create(Vector3(at.x,10,at.y),Vector3(at.x,-5,at.y),2)
	var hit: Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(query)
	_check(not hit.is_empty(),"true terrain physics exists below the authored point")
	return hit.position.y if not hit.is_empty() else -100.0
func _roots() -> Dictionary:
	var result: Dictionary={}
	for block in demo.town.terrain_surface.blocks: result[block]=demo.town.terrain_surface.blocks[block].get_instance_id()
	return result
func _grounded() -> void:
	var grass_count:=0
	var tree_count:=0
	var max_grass:=0.0
	var max_tree:=0.0
	for root_node in demo.town.meadow.blocks.values():
		var lawn: MultiMeshInstance3D=root_node.get_node_or_null("Meadow_lawn")
		if lawn==null: continue
		for index in range(0,lawn.multimesh.instance_count,19):
			var pos: Vector3=lawn.global_transform*lawn.multimesh.get_instance_transform(index).origin
			max_grass=maxf(max_grass,absf(pos.y-demo.state.ground_height(Vector2(pos.x,pos.z))-0.017))
			grass_count+=1
	for root_node in demo.town.vegetation_blocks.values():
		for child in root_node.get_children():
			if not child is MultiMeshInstance3D: continue
			for index in range(child.multimesh.instance_count):
				var pos: Vector3=child.global_transform*child.multimesh.get_instance_transform(index).origin
				max_tree=maxf(max_tree,absf(pos.y-demo.state.ground_height(Vector2(pos.x,pos.z))-0.02))
				tree_count+=1
	_check(grass_count>100 and max_grass<0.001,"actual GPU lawn transform roots follow the published terrain")
	_check(tree_count>10 and max_tree<0.001,"actual planted tree batches follow the published terrain")
	facts.grounding={"grass_samples":grass_count,"tree_parts":tree_count,"grass_max_error_m":max_grass,"tree_max_error_m":max_tree}
func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/作品库"
	root.add_child(demo)
	demo.life.set_process(false)
	demo.focus=Vector3(3,0.7,-2);demo.zoom=31;demo._update_camera()
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var identity: Array=[]
	for player in demo.music._players.values(): identity.append([player.get_instance_id(),player.stream.get_instance_id()])
	await _motion(demo.tool_buttons[8].get_global_rect().get_center());await _button(true);await _button(false)
	_check(demo.tool==8 and demo.terrain_brush.panel.visible,"actual ninth toolbar button opens the terrain brush")
	await _key(KEY_1);await _key(KEY_9)
	_check(demo.tool==8,"actual KEY9 reselects terrain tool")
	demo.terrain_brush.radius_picker.select(2);demo.terrain_brush.radius_picker.item_selected.emit(2)
	_check(demo.terrain_brush.radius==5.0,"real radius picker selects five metre brush")
	var before: Dictionary=demo.state.snapshot()
	await _stroke([Vector2(10,-9),Vector2(13,-8)],false,true)
	_check(demo.state.snapshot()==before,"Escape cancels terrain drag with zero authored writes")
	await _capture("01_塑形前")
	var roots_before:=_roots()
	for i in range(3): await _stroke([Vector2(10,-9),Vector2(13,-8),Vector2(12,-5)])
	_check(demo.state.terrain_strokes.size()==3 and demo.state.ground_height(Vector2(12,-8))>1.0,"actual three drags build a visible east-bank grass hill")
	var expected: PackedFloat32Array=demo.state._ground_terrain.vertices.duplicate()
	await _key(KEY_Z,true)
	_check(demo.state.terrain_strokes.size()==2,"actual Ctrl+Z removes exactly one terrain gesture")
	await _key(KEY_Z,true,true)
	_check(demo.state._ground_terrain.vertices==expected,"actual redo restores exact same terrain vertices")
	var changed:=0
	for block in roots_before:
		if roots_before[block]!=demo.town.terrain_surface.blocks[block].get_instance_id(): changed+=1
	_check(changed>0 and changed<16,"local sculpt retains unrelated real terrain chunks")
	facts.changed_terrain_blocks=changed
	var peak:=Vector2(12.27,-7.81)
	_check(absf(_ray_height(peak)-demo.state.ground_height(peak))<0.001,"physics picking follows the exact sloped terrain triangle")
	_grounded()
	await _stroke([Vector2(12,10)],true)
	_check(demo.state.ground_height(Vector2(12,10))< -0.4,"Shift at mouse-down creates an actual shallow depression")
	await _capture("02_草丘与洼地")
	var old_focus: Vector3=demo.focus
	demo.ui_layer.visible=false;demo.focus=Vector3(11,0.8,-7);demo.zoom=18;demo.pitch=0.43;demo.yaw=0.85;demo._update_camera()
	for i in range(20): await process_frame
	await _capture("02b_草丘近景")
	demo.ui_layer.visible=true;demo.focus=old_focus;demo.zoom=31;demo.pitch=0.64;demo.yaw=0.62;demo._update_camera()
	demo.terrain_brush.mode_picker.select(2);demo.terrain_brush.mode_picker.item_selected.emit(2)
	var reset_before: PackedFloat32Array=demo.state._ground_terrain.vertices.duplicate()
	await _stroke([Vector2(12,-8)])
	_check(absf(demo.state._ground_terrain.offset_at(Vector2(12,-8)))<0.001,"actual restore mode returns the brush center to original terrain")
	await _key(KEY_Z,true)
	_check(demo.state._ground_terrain.vertices==reset_before,"undo of a local restore returns exact prior hills")
	demo.music.play_edit("terrain")
	var heard:=false
	for player in demo.music._effects:
		if player.playing and player.stream==demo.music._edit_streams.road: heard=true
	_check(heard and demo.music.get_child_count()==13,"terrain gesture reuses the existing harmonious edit cue and fixed voice pool")
	# A future building levels its own pad; unrelated hill records remain.
	var built: Dictionary=demo.state.add_house(Vector2(12,-8))
	_check(built.ok,"authoritative building can be placed on the authored hill")
	demo._after_edit(built,"house");await _wait()
	_check(absf(demo.state.ground_height(Vector2(12,-8))+0.02)<0.001,"new house receives a real level pad rather than floating")
	# This real road takes total road points beyond the production budget gate.
	var road_points: Array[Vector2]=[Vector2(8,-8),Vector2(16,-8)]
	var road: Dictionary=demo.state.add_road(road_points)
	_check(road.ok,"real road traverses the new house as a true passage")
	demo._after_edit(road,"road")
	_check(demo.edit_pending(),"road-induced terrain clearing uses the real background edit pipeline")
	await _wait()
	_check(absf(_ray_height(Vector2(10,-8))-demo.state.ground_height(Vector2(10,-8)))<0.001,"budget publication updates ground picking alongside flattened road")
	_check(absf(demo.state._ground_terrain.offset_at(Vector2(10,-8)))<0.001,"road and its true arch remain on a continuous flat clearing")
	_grounded()
	await _capture("03_新屋与小路留出平地")
	# Opening a collected work must restore authored hills as well as town life.
	await demo.gallery.save_work("起伏的河湾")
	_check(not demo.gallery.last_saved_id.is_empty() and demo.gallery.library.read(demo.gallery.last_saved_id).ok,"new terrain city saves as a complete named work")
	var saved_id: String=demo.gallery.last_saved_id
	var terrain_before: PackedFloat32Array=demo.state._ground_terrain.vertices.duplicate()
	var extra_points: Array[Vector2]=[Vector2(14,10)]
	demo._after_edit(demo.state.add_terrain_stroke(extra_points,"raise",3.5),"terrain")
	await _wait()
	await demo.gallery.open_work(saved_id)
	await _wait()
	demo.life.set_process(false)
	_check(demo.state._ground_terrain.vertices==terrain_before,"opening the named work restores exact authored hills and pads")
	_check(demo._rendered_terrain==demo.state.terrain_strokes,"collection restoration updates the published terrain transaction marker")
	var toolbar: Control=demo.ui_layer.get_child(0).find_child("Toolbar",true,false)
	root.size=Vector2i(1024,768)
	for i in range(4): await process_frame
	_check(toolbar.get_global_rect().position.x>=0 and toolbar.get_global_rect().end.x<=1024,"all nine tools and history remain inside 1024 viewport")
	facts.toolbar_1024={"rect":str(toolbar.get_global_rect()),"buttons":demo.tool_buttons.size()}
	await _capture("04_九工具小窗口")
	root.size=Vector2i(1440,900)
	for i in range(4): await process_frame
	var frames: Array[float]=[]
	var previous:=Time.get_ticks_usec()
	for i in range(150):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
	frames.sort()
	facts.performance={"wall_p95_ms":frames[142],"wall_max_ms":frames[-1],"draws":Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME),"edit_including_frame_wait_ms":edit_times}
	var index:=0
	for player in demo.music._players.values():
		_check([player.get_instance_id(),player.stream.get_instance_id()]==identity[index],"geometry and collection keep the existing PCM player and stream")
		index+=1
	_check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal city bytes remain unchanged")
	var report: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	var file:=FileAccess.open(OUT+"/live.json",FileAccess.WRITE);file.store_string(JSON.stringify(report,"\t"));file.close()
	print("CREATION_TERRAIN_BRUSH_LIVE ",JSON.stringify(report))
	demo.music.set_process(false)
	for player in demo.music._players.values(): player.stop()
	for player in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
