extends SceneTree
## One real plateau gesture, one canceled Shift preview and bounded GL evidence.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const OUT := "res://验证记录/平顶台地_2026-10-16"
const EXAMPLE := "res://数据/台地河湾样例.json"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {}
var personal := PackedByteArray()
var sample_bytes := PackedByteArray()
var identities: Array = []
var began_clock := 0.0

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _key(code: int,ctrl: bool=false,target: Window=null) -> void:
	for down: bool in [true,false]:
		var event := InputEventKey.new();event.keycode=code;event.pressed=down;event.ctrl_pressed=ctrl
		if target!=null: event.window_id=target.get_window_id();Input.parse_input_event(event)
		else: root.push_input(event)
		await process_frame
func _motion(at: Vector2) -> void:
	var event := InputEventMouseMotion.new();event.position=at;event.global_position=at
	root.push_input(event);await process_frame
func _button(down: bool,shift: bool=false) -> void:
	var event := InputEventMouseButton.new();event.position=demo.pointer;event.global_position=demo.pointer
	event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;event.shift_pressed=shift
	root.push_input(event);await process_frame
func _screen(at: Vector2) -> Vector2:
	return demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
func _wait() -> void:
	var deadline := Time.get_ticks_msec()+15000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending and not demo.gallery.busy,"latest actual terrain and UI publication finish")
	await physics_frame;await process_frame
func _gesture(cancel: bool=false) -> void:
	await _motion(_screen(Vector2(10,10)));await _button(true,cancel)
	_check(demo.terrain_brush.drawing,"actual viewport mouse-down begins plateau tool gesture")
	if cancel:
		_check(demo.terrain_brush.draft_mode=="lower" and demo.terrain_brush.draft_passes==1 and demo.terrain_brush.draft_strength==0.65,"actual Shift preview retains one ordinary lower layer at .65 strength")
	else:
		_check(demo.terrain_brush.draft_mode=="plateau" and demo.terrain_brush.draft_passes==2 and demo.terrain_brush.draft_strength==1.0,"actual plateau preview freezes two full-strength layers")
	await _motion(_screen(Vector2(13,9)))
	if cancel: await _key(KEY_ESCAPE)
	var started := Time.get_ticks_usec()
	await _button(false,cancel);await _wait()
	if not cancel: facts.release_publication_wall_ms=float(Time.get_ticks_usec()-started)/1000.0
func _identity() -> Array:
	var rows: Array = []
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[key]
		var data: PackedByteArray = player.stream.data
		var digest := HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(data)
		rows.append([key,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player: AudioStreamPlayer in demo.music._effects: rows.append(player.get_instance_id())
	return rows
func _terrain_hash() -> String:
	return var_to_bytes(demo.state._ground_terrain.vertices).hex_encode().sha256_text()
func _mesh_hash(renderer: Node3D) -> String:
	var parts := PackedStringArray()
	for key: Vector2i in renderer.terrain_surface.blocks:
		var block: Node3D = renderer.terrain_surface.blocks[key]
		var mesh: MeshInstance3D = block.get_node("GroundMesh")
		parts.append(var_to_bytes([key,mesh.mesh.surface_get_arrays(0)]).hex_encode())
	parts.sort();return (";".join(parts)).sha256_text()
func _ray(at: Vector2) -> Dictionary:
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,12,at.y),Vector3(at.x,-5,at.y),2))
func _capture(label: String) -> void:
	await _motion(Vector2(100,50))
	demo.town.clear_preview();await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual GPU screenshot saved: "+label)

func _validate_surface() -> void:
	var heights: Array[float] = []
	for at: Vector2 in [Vector2(10.5,9.8),Vector2(11.5,9.5),Vector2(12.5,9.2),Vector2(11.5,10.2)]: heights.append(demo.state.ground_height(at))
	heights.sort()
	var steepest := 0.0
	for x in range(36):
		for z in range(36): steepest=maxf(steepest,demo.state._ground_terrain.gradient_at(Vector2(7+x*0.25,5+z*0.25)).length())
	_check(heights[0]>1.8 and heights[-1]-heights[0]<0.005 and steepest>0.75,"actual stroke has broad equal-height top near two metres and genuinely steep sides")
	var ray_error := 0.0
	var ray_count := 0
	for at: Vector2 in [Vector2(11.27,9.31),Vector2(9.17,11.63),Vector2(14.13,8.77)]:
		var hit := _ray(at)
		if hit.is_empty(): continue
		ray_count+=1;ray_error=maxf(ray_error,absf(float(hit.position.y)-float(demo.state.ground_height(at))))
	var mesh_error := 0.0
	var count := 0
	var mesh: MeshInstance3D = demo.town.terrain_surface.blocks[Vector2i.ZERO].get_node("GroundMesh")
	var arrays: Array = mesh.mesh.surface_get_arrays(0)
	for vertex: Vector3 in arrays[Mesh.ARRAY_VERTEX]:
		var position: Vector3 = mesh.global_transform*vertex
		if not Rect2(7,5,9,9).has_point(Vector2(position.x,position.z)): continue
		count+=1;mesh_error=maxf(mesh_error,absf(position.y-float(demo.state.ground_height(Vector2(position.x,position.z)))))
	_check(ray_count==3 and ray_error<0.001 and count>100 and mesh_error<0.001,"actual non-grid layer-two picks and uploaded plateau vertices match shared height field")
	facts.surface={"top_samples":heights,"top_range_m":heights[-1]-heights[0],"maximum_slope":steepest,"ray_error_m":ray_error,"mesh_error_m":mesh_error}

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false)
	demo.focus=Vector3(11.5,1,9.5);demo.zoom=20;demo.pitch=0.9;demo.yaw=-2.5;demo._update_camera()
	var deadline := Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL scene and production PCM are ready")
	if demo.music.audio_report.is_empty(): await _finish();return
	identities=_identity();began_clock=demo.music._playback_clock()
	await _key(KEY_9)
	var picker: OptionButton = demo.terrain_brush.mode_picker
	_check(demo.tool==8 and picker.item_count==5,"actual key nine opens five-mode terrain tool")
	if picker.item_count!=5: await _finish();return
	await _motion(picker.get_global_rect().get_center());await _button(true);await _button(false)
	var popup: PopupMenu = picker.get_popup()
	_check(popup.visible,"actual terrain PopupMenu opens from mouse input")
	if not popup.visible: await _finish();return
	if popup.get_focused_item()<0: await _key(KEY_DOWN,false,popup)
	for ignored in range(popup.get_focused_item()): await _key(KEY_UP,false,popup)
	for ignored in range(4): await _key(KEY_DOWN,false,popup)
	await _key(KEY_ENTER,false,popup);picker.release_focus()
	_check(picker.selected==4 and demo.terrain_brush.mode=="plateau" and demo.terrain_brush.radius==3.5,"real fifth popup option selects plateau and default three-and-a-half-metre radius")
	var initial: Dictionary = demo.state.snapshot()
	var original_vertices: PackedFloat32Array = demo.state._ground_terrain.vertices.duplicate()
	var depth: int = demo.state._undo.size()
	var far_id: int = demo.town.terrain_surface.blocks[Vector2i(-1,-1)].get_instance_id()
	await _gesture(true)
	_check(demo.state.snapshot()==initial and demo.state._undo.size()==depth,"actual Esc cancels Shift preview with zero state/history writes")
	await _gesture()
	var saved: Dictionary = demo.state.snapshot()
	var plateau := _terrain_hash()
	_check(saved.schema==4 and demo.state.terrain_strokes.size()==2 and demo.state.terrain_strokes[0]==demo.state.terrain_strokes[1] and demo.state.terrain_strokes[0].mode=="plateau" and demo.state._undo.size()==depth+1,"one actual release commits two plateau layers in one history using schema four")
	_validate_surface()
	await _key(KEY_Z,true);await _wait()
	_check(demo.state._ground_terrain.vertices==original_vertices and demo.state.snapshot().schema==1,"one real undo removes both layers and restores exact original terrain/schema")
	await _key(KEY_Y,true);await _wait()
	_check(_terrain_hash()==plateau and demo.town.terrain_surface.blocks[Vector2i(-1,-1)].get_instance_id()==far_id,"actual redo restores deterministic plateau while retaining distant terrain root")
	demo.select_tool(0);demo.focus=Vector3(11.5,1,9.5);demo.zoom=19;demo.pitch=1.05;demo._update_camera()
	await _capture("01_真实单笔平顶与坡面")
	var road_points: Array[Vector2] = [Vector2(8,9.5),Vector2(15.8,9.5)]
	var road: Dictionary = demo.state.add_road(road_points)
	_check(road.ok,"real State road can be built across authored plateau")
	if road.ok:
		demo._after_edit(road,"road");await _wait()
		var hit := _ray(Vector2(11.5,9.5))
		_check(absf(float(demo.state.ground_height(Vector2(11.5,9.5)))+0.02)<0.001 and not hit.is_empty() and absf(float(hit.position.y)+0.02)<0.001,"real road protection flattens plateau and matching terrain collision")
		await _key(KEY_Z,true);await _wait()
		_check(_terrain_hash()==plateau,"actual road undo restores exact plateau geometry")
	var loaded := State.new()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"strict full precision schema-four JSON restores actual plateau city")
	var fresh := Renderer.new();fresh.visible=false;root.add_child(fresh);fresh.setup(loaded)
	_check(loaded._ground_terrain.vertices==demo.state._ground_terrain.vertices and _mesh_hash(fresh)==_mesh_hash(demo.town),"fresh production renderer recreates exact plateau height field and real ground meshes from JSON")
	fresh.free();await physics_frame;await process_frame
	if FileAccess.file_exists(EXAMPLE):
		sample_bytes=FileAccess.get_file_as_bytes(EXAMPLE)
		var restored: Dictionary = demo.state.restore(JSON.parse_string(sample_bytes.get_string_from_utf8()))
		_check(restored.ok,"authored standalone plateau example restores through State API")
		if restored.ok:
			demo._after_edit(restored,"history");await _wait()
			var center := Vector2(11.5,9.5)
			for stroke: Dictionary in demo.state.terrain_strokes:
				if str(stroke.mode)!="plateau": continue
				center=Vector2.ZERO
				for point: Array in stroke.points: center+=Vector2(float(point[0]),float(point[1]))
				center/=float(stroke.points.size());break
			demo.focus=Vector3(center.x,1,center.y);demo.zoom=24;demo.pitch=0.92;demo._update_camera()
			await _capture("02_台地河湾真实样例")
	demo.life.set_process(true)
	var frames: Array[float] = []
	var previous := Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now := Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
	frames.sort()
	facts.performance={"frames":120,"wall_p95_ms":frames[114],"wall_max_ms":frames[-1],"draw_calls":Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME),"engine_max_fps":Engine.max_fps,"vsync":DisplayServer.window_get_vsync_mode(),"normal_life_music":demo.life.is_processing() and demo.music.is_processing()}
	_check(_identity()==identities and demo.music.get_child_count()==13 and demo.music._playback_clock()>began_clock,"real edits and loads preserve original nine PCM resources thirteen players and advancing production music clock")
	facts.release_scope="mouse release dispatch plus rebuilding, publication, physics/frame waits and UI completion; not isolated handler CPU time"
	await _finish()

func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continuing-city bytes remain unchanged")
	if not sample_bytes.is_empty(): _check(FileAccess.get_file_as_bytes(EXAMPLE)==sample_bytes,"authored plateau example bytes remain unchanged")
	var result := {"ok":failures.is_empty(),"checks":checks,"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"failures":failures,"facts":facts,"scope":"Actual GL, Godot Window popup/mouse/key input, one plateau transaction, canceled Shift preview, flat top and steep sides, terrain physics, road protection/history, strict JSON and fresh renderer. One 120-frame normal Life+Music sample at 180 FPS with VSync disabled. No OS input, full economy/concert or large-city claim.","command":"Godot_v4.7.2-stable_win64_console.exe --max-fps 180 --path . --script tools/check_creation_plateau_live.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("CREATION_PLATEAU_LIVE ",JSON.stringify(result))
	demo.life.set_process(false);demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
