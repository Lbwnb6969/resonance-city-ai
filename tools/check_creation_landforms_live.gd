extends SceneTree
## Bounded actual terrain/GL verification; no accelerated music or concert view.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Outcrops = preload("res://scripts/visual/city_creation_outcrops.gd")
const OUT := "res://验证记录/露岩草丘_2026-10-16"
const EXAMPLE := "res://数据/地貌河湾样例.json"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {}
var personal := PackedByteArray()
var sample_bytes := PackedByteArray()
var identities: Array = []
var clock_start := 0.0
var release_costs: Array[float] = []


func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _key(code: int,ctrl: bool=false,target: Window=null) -> void:
	for pressed: bool in [true,false]:
		var event := InputEventKey.new()
		event.keycode=code;event.pressed=pressed;event.ctrl_pressed=ctrl
		if target!=null:
			event.window_id=target.get_window_id();Input.parse_input_event(event)
		else: root.push_input(event)
		await process_frame
func _motion(at: Vector2) -> void:
	var event := InputEventMouseMotion.new()
	event.position=at;event.global_position=at;root.push_input(event)
	await process_frame
func _button(pressed: bool) -> void:
	var event := InputEventMouseButton.new()
	event.position=demo.pointer;event.global_position=demo.pointer
	event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event)
	await process_frame
func _screen(at: Vector2) -> Vector2:
	return demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
func _wait() -> void:
	var deadline := Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending and not demo.gallery.busy,"real terrain and following UI transaction complete")
	await physics_frame
	await process_frame
func _stroke(cancel: bool=false) -> void:
	var points: Array[Vector2] = [Vector2(10,10),Vector2(13,9)]
	await _motion(_screen(points[0]));await _button(true)
	_check(demo.terrain_brush.drawing,"real viewport mouse-down begins production terrain gesture")
	_check(demo.terrain_brush.draft_passes==2 and demo.terrain_brush.draft_strength==1.0 and demo.terrain_brush.draft_mode=="raise","real rock gesture freezes two full-strength raise layers before release")
	for at: Vector2 in points: await _motion(_screen(at))
	if cancel: await _key(KEY_ESCAPE)
	var started := Time.get_ticks_usec()
	await _button(false)
	await _wait()
	if not cancel: release_costs.append(float(Time.get_ticks_usec()-started)/1000.0)
func _capture(label: String) -> void:
	demo.town.clear_preview()
	await process_frame
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual GPU screenshot saved: "+label)
func _identity() -> Array:
	var result: Array = []
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[key]
		result.append([key,player.get_instance_id(),player.stream.get_instance_id(),player.stream.data.size()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _roots() -> Dictionary:
	var result := {}
	for key: Vector2i in demo.town.terrain_surface.blocks: result[key]=demo.town.terrain_surface.blocks[key].get_instance_id()
	return result
func _terrain_hash() -> String:
	return var_to_bytes(demo.state._ground_terrain.vertices).hex_encode().sha256_text()
func _rock_hash(renderer: Node3D) -> String:
	var records := PackedStringArray()
	for block: Node3D in renderer.meadow.blocks.values():
		for child: Node in block.get_children():
			if not child is MultiMeshInstance3D or str(child.name) not in ["Meadow_boulder_a","Meadow_boulder_b"]: continue
			var mesh_hash := var_to_bytes(child.multimesh.mesh.get_faces()).hex_encode().sha256_text()
			for index in range(child.multimesh.instance_count):
				records.append(var_to_bytes([str(child.name),mesh_hash,child.global_transform*child.multimesh.get_instance_transform(index),child.multimesh.get_instance_color(index)]).hex_encode())
	records.sort()
	return (";".join(records)).sha256_text()
func _ray(at: Vector2) -> Dictionary:
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,12,at.y),Vector3(at.x,-5,at.y),2))


func _field() -> Dictionary:
	var maximum := -INF
	var steepest := 0.0
	var rockiest := 0.0
	var peak := Vector2.ZERO
	var slope_at := Vector2.ZERO
	for x in range(32):
		for z in range(28):
			var at := Vector2(8.0+x*0.25,6.0+z*0.25)
			var height: float = demo.state.ground_height(at)
			var slope: float = demo.state._ground_terrain.gradient_at(at).length()
			if height>maximum: maximum=height;peak=at
			if slope>steepest: steepest=slope;slope_at=at
			rockiest=maxf(rockiest,float(demo.state._ground_terrain.rockiness_at(at)))
	return {"peak":peak,"maximum_height":maximum,"steepest_at":slope_at,"maximum_slope":steepest,"maximum_rockiness":rockiest}


func _validate_field() -> void:
	var field := _field()
	_check(field.maximum_height>1.8 and field.maximum_slope>0.75 and field.maximum_rockiness>0.0,"hill has real height above 1.8m metric slope above .75 and nonzero shared rockiness")
	var max_error := 0.0
	var hits := 0
	for at: Vector2 in [Vector2(10.13,9.71),Vector2(11.27,9.31),Vector2(13.19,8.77),Vector2(field.steepest_at)+Vector2(0.07,0.03)]:
		var hit := _ray(at)
		if hit.is_empty(): continue
		hits+=1;max_error=maxf(max_error,absf(float(hit.position.y)-float(demo.state.ground_height(at))))
	_check(hits==4 and max_error<0.001,"four real non-grid layer-two rays match exact shared terrain triangles")
	var mesh_error := 0.0
	var vertices := 0
	var block: Node3D = demo.town.terrain_surface.blocks.get(Vector2i.ZERO)
	if block!=null:
		var mesh: MeshInstance3D = block.get_node("GroundMesh")
		var arrays: Array = mesh.mesh.surface_get_arrays(0)
		for local: Vector3 in arrays[Mesh.ARRAY_VERTEX]:
			var at: Vector3 = mesh.global_transform*local
			if not Rect2(8,6,8,8).has_point(Vector2(at.x,at.z)): continue
			vertices+=1;mesh_error=maxf(mesh_error,absf(at.y-float(demo.state.ground_height(Vector2(at.x,at.z)))))
	_check(vertices>100 and mesh_error<0.001,"actual uploaded hillside mesh vertices use the same sampled heights")
	var thinned := 0
	var blue_min := 1.0
	for meadow: Node3D in demo.town.meadow.blocks.values():
		for child: Node in meadow.get_children():
			if not child is MultiMeshInstance3D or str(child.name) not in ["Meadow_lawn","Meadow_grass"]: continue
			for index in range(child.multimesh.instance_count):
				var position: Vector3 = child.global_transform*child.multimesh.get_instance_transform(index).origin
				if not Rect2(8,6,8,8).has_point(Vector2(position.x,position.z)): continue
				var rockiness: float = demo.state._ground_terrain.rockiness_at(Vector2(position.x,position.z))
				var blue: float = child.multimesh.get_instance_custom_data(index).b
				if rockiness>0.1: blue_min=minf(blue_min,blue)
				if rockiness>0.1 and blue<0.4: thinned+=1
	_check(thinned>0,"actual uploaded grass custom-data blue falls below .4 on rocky slope")
	field["ray_max_error_m"]=max_error;field["mesh_max_error_m"]=mesh_error;field["low_blue_grass_instances"]=thinned;field["blue_min"]=blue_min
	facts.field=field


func _rocks() -> Dictionary:
	var counts := {"boulder_a":0,"boulder_b":0}
	var positions: Array[Vector2] = []
	var per_block := {}
	var grounding_error := 0.0
	var normal_error := 0.0
	var visible_and_buried := true
	var bounds_contain := true
	var details: Array = []
	for block_key: Vector2i in demo.town.meadow.blocks:
		var block: Node3D = demo.town.meadow.blocks[block_key]
		var count := 0
		for child: Node in block.get_children():
			if not child is MultiMeshInstance3D or str(child.name) not in ["Meadow_boulder_a","Meadow_boulder_b"]: continue
			var part := str(child.name).trim_prefix("Meadow_")
			var source: Transform3D = demo.town.meadow.meshes.get(part+"_transform",Transform3D.IDENTITY)
			for index in range(child.multimesh.instance_count):
				count+=1;counts[part]+=1
				var installed: Transform3D = child.multimesh.get_instance_transform(index)
				var record: Transform3D = installed*source.affine_inverse()
				var at3: Vector3 = child.global_transform*record.origin
				var at := Vector2(at3.x,at3.z)
				positions.append(at)
				var gradient: Vector2 = demo.state._ground_terrain.gradient_at(at)
				var normal := Vector3(-gradient.x,1.0,-gradient.y).normalized()
				normal_error=maxf(normal_error,record.basis.y.normalized().distance_to(normal))
				var radius: float = Outcrops.RADII[0 if part=="boulder_a" else 1]*record.basis.x.length()+2.19*record.basis.y.length()*Vector2(normal.x,normal.z).length()
				var center_height: float = demo.state.ground_height(at)
				var residual := 0.0
				for sample in range(9):
					var point := at if sample==8 else at+Vector2.from_angle(sample*TAU/8.0)*radius
					residual=minf(residual,float(demo.state.ground_height(point))-center_height-gradient.dot(point-at))
				grounding_error=maxf(grounding_error,absf(at3.y-(center_height+residual-0.07)))
				var local_bounds: AABB = installed*child.multimesh.mesh.get_aabb()
				var world_bounds: AABB = child.global_transform*local_bounds
				var minimum_vertex := INF
				var maximum_vertex := -INF
				var above := 0
				var below := 0
				var strictly_below := 0
				var vertex_count := 0
				for vertex: Vector3 in child.multimesh.mesh.get_faces():
					var position: Vector3 = child.global_transform*installed*vertex
					var delta: float = position.y-float(demo.state.ground_height(Vector2(position.x,position.z)))
					vertex_count+=1
					minimum_vertex=minf(minimum_vertex,delta);maximum_vertex=maxf(maximum_vertex,delta)
					if delta>0.005: above+=1
					if delta<0.01: below+=1
					if delta<0.0: strictly_below+=1
				if above==0 or below==0: visible_and_buried=false
				if not child.multimesh.custom_aabb.grow(0.001).encloses(local_bounds): bounds_contain=false
				details.append({"part":part,"at":at,"normal":normal,"radius":radius,"base_y":at3.y,"center_ground_y":center_height,"minimum_plane_residual":residual,"world_bounds":world_bounds,"vertex_samples":vertex_count,"above_ground_vertices":above,"buried_with_1cm_tolerance_vertices":below,"strictly_below_ground_vertices":strictly_below,"vertex_height_residual_min_m":minimum_vertex,"vertex_height_residual_max_m":maximum_vertex})
		if count>0: per_block[str(block_key)]=count
	var bounded := true
	for count: int in per_block.values():
		if count>4: bounded=false
	return {"counts":counts,"positions":positions,"per_block":per_block,"bounded":bounded,"grounding_error_m":grounding_error,"normal_error":normal_error,"visible_and_buried_vertices":visible_and_buried,"custom_bounds_contain_mesh":bounds_contain,"details":details}


func _near_rock(rocks: Dictionary) -> Dictionary:
	var result := {}
	var best := INF
	for row: Dictionary in rocks.details:
		if int(row.above_ground_vertices)==0: continue
		var at: Vector2 = row.at
		var normal: Vector3 = row.normal
		var yaw := atan2(normal.x,normal.z)
		var toward_camera := Vector2(sin(yaw),cos(yaw))
		var hidden := 0
		for plant: Dictionary in demo.state.plants:
			if not demo.state.vegetation_visible(plant): continue
			var position := Vector2(float(plant.position[0]),float(plant.position[1]))
			var offset := position-at
			var along := offset.dot(toward_camera)
			if along<=0.0 or along>20.0: continue
			var width := (0.65 if str(plant.kind)=="shrub" else 0.95)*float(plant.scale)
			var top: float = demo.state.ground_height(position)+(0.9 if str(plant.kind)=="shrub" else 3.6)*float(plant.scale)
			var view_y: float = demo.state.ground_height(at)+0.3+along*tan(0.65)
			if absf(offset.cross(toward_camera))<width and top>view_y: hidden+=1
		# Prefer an unobstructed real visible mesh, then a larger exposed face.
		var score := float(hidden)*1000.0-float(row.above_ground_vertices)
		if score<best: best=score;result={"at":at,"yaw":yaw,"possible_foreground_plants":hidden,"vertex_residual_max_m":row.vertex_height_residual_max_m}
	return result


func _road_test(rocks: Dictionary) -> void:
	if rocks.positions.is_empty():
		_check(false,"a real hillside outcrop exists for road clearing verification")
		return
	var at := Vector2.ZERO
	var found := false
	for point: Vector2 in rocks.positions:
		if point.x>6.0 and point.y>6.0: at=point;found=true;break
	_check(found,"actual right-bank hill has an outcrop to exercise road clearing")
	if not found: return
	var before := _terrain_hash()
	var rock_before := _rock_hash(demo.town)
	var points: Array[Vector2] = [Vector2(8,at.y),Vector2(15.8,at.y)]
	var result: Dictionary = demo.state.add_road(points)
	_check(result.ok,"real State road crosses current rocky hill without replacing authored strokes")
	if not result.ok: return
	demo._after_edit(result,"road")
	await _wait()
	var ray := _ray(at)
	_check(absf(float(demo.state.ground_height(at))+0.02)<0.001 and not ray.is_empty() and absf(float(ray.position.y)-float(demo.state.ground_height(at)))<0.001,"new road publishes actual flat clearing and matching ground physics on former rock location")
	var after := _rocks()
	var retreated := true
	for point: Vector2 in after.positions:
		if point.distance_to(at)<0.01: retreated=false
	_check(retreated and _rock_hash(demo.town)!=rock_before and after.bounded,"actual uploaded companion stones retreat from new road and retain four-per-block bound")
	await _key(KEY_Z,true);await _wait()
	_check(_terrain_hash()==before and _rock_hash(demo.town)==rock_before,"actual Ctrl+Z restores bit-identical terrain and companion-stone geometry")
	facts.road={"method":"State.add_road + demo._after_edit; undo is actual Godot Window Ctrl+Z","crossed_rock_at":at,"before":rocks.per_block,"with_road":after.per_block}


func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	sample_bytes=FileAccess.get_file_as_bytes(EXAMPLE) if FileAccess.file_exists(EXAMPLE) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false)
	demo.focus=Vector3(11.5,1,9.5);demo.zoom=19;demo.pitch=0.85;demo.yaw=0.62;demo._update_camera()
	var deadline := Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL scene and production PCM bank are ready")
	if demo.music.audio_report.is_empty(): await _finish();return
	identities=_identity();clock_start=demo.music._playback_clock()
	await _key(KEY_9)
	_check(demo.tool==8 and demo.terrain_brush.panel.visible and demo.terrain_brush.mode_picker.item_count==4,"actual key nine opens four-mode terrain tool")
	var picker: OptionButton = demo.terrain_brush.mode_picker
	await _motion(picker.get_global_rect().get_center());await _button(true);await _button(false)
	var popup: PopupMenu = picker.get_popup()
	_check(popup.visible,"actual terrain OptionButton opens native popup")
	if not popup.visible: await _finish();return
	if popup.get_focused_item()<0: await _key(KEY_DOWN,false,popup)
	for ignored in range(popup.get_focused_item()): await _key(KEY_UP,false,popup)
	for ignored in range(3): await _key(KEY_DOWN,false,popup)
	await _key(KEY_ENTER,false,popup)
	picker.release_focus()
	_check(picker.selected==3 and demo.terrain_brush.mode=="rock" and demo.terrain_brush.radius==2.0 and demo.terrain_brush.radius_picker.selected==0,"real popup rock selection chooses two-metre brush")
	var initial: Dictionary = demo.state.snapshot()
	var history: int = demo.state._undo.size()
	await _stroke(true)
	_check(demo.state.snapshot()==initial and demo.state._undo.size()==history,"actual Escape cancels a real terrain drag without authored writes or history")
	var roots_before := _roots()
	var initial_vertices: PackedFloat32Array = demo.state._ground_terrain.vertices.duplicate()
	await _stroke()
	var first: PackedFloat32Array = demo.state._ground_terrain.vertices.duplicate()
	_check(demo.state.terrain_strokes.size()==2 and demo.state._undo.size()==history+1 and demo.state.terrain_strokes[0]==demo.state.terrain_strokes[1] and demo.state.terrain_strokes[-1].mode=="raise" and demo.state.terrain_strokes[-1].strength==1.0,"one real rock gesture commits two existing-format full-strength layers in one history transaction")
	var rocks_first := _rock_hash(demo.town)
	_check(_field().maximum_height>1.8,"one actual overlapping-layer gesture builds approximately two metres of terrain")
	await _key(KEY_Z,true);await _wait()
	_check(demo.state._ground_terrain.vertices==initial_vertices and demo.state.terrain_strokes.is_empty(),"one actual Ctrl+Z restores exact initial terrain and removes both preset layers")
	await _key(KEY_Y,true);await _wait()
	_check(demo.state._ground_terrain.vertices==first and _rock_hash(demo.town)==rocks_first,"actual redo restores exact terrain and deterministic companion geometry")
	var changed := 0
	for key: Vector2i in roots_before:
		if demo.town.terrain_surface.blocks[key].get_instance_id()!=roots_before[key]: changed+=1
	_check(changed>0 and changed<roots_before.size() and demo.town.terrain_surface.blocks[Vector2i(-1,-1)].get_instance_id()==roots_before[Vector2i(-1,-1)],"local hill edits retain the actual distant terrain root")
	facts.interaction={"input":"Godot Window mouse/key dispatch, not OS input","points":[[10,10],[13,9]],"strokes":demo.state.terrain_strokes.duplicate(true),"release_and_publication_wall_ms":release_costs,"wall_cost_scope":"Full mouse release dispatch, synchronous rebuild/publication, physics/frame waits and UI completion; not isolated mouse-handler CPU time.","changed_terrain_blocks":changed}
	if not sample_bytes.is_empty():
		var restored: Dictionary = demo.state.restore(JSON.parse_string(sample_bytes.get_string_from_utf8()))
		_check(restored.ok,"real authored landform example restores through strict State API for presentation")
		if restored.ok: demo._after_edit(restored,"history");await _wait()
		facts.presentation_source=EXAMPLE
	else: facts.presentation_source="one actual two-layer viewport gesture in default riverbay"
	_validate_field()
	var rocks := _rocks()
	_check(rocks.counts.boulder_a>0 and rocks.counts.boulder_b>0,"actual hillside uploads both imported companion boulder variants")
	_check(rocks.bounded and rocks.grounding_error_m<0.001 and rocks.normal_error<0.001 and rocks.visible_and_buried_vertices and rocks.custom_bounds_contain_mesh,"every actual stone has visible and buried mesh vertices follows slope normal and sampled residual minus .07m with bounded AABB and four per block")
	facts.rocks=rocks
	demo.select_tool(0);demo.town.clear_preview()
	demo.focus=Vector3(11,1,9.5);demo.zoom=22;demo.pitch=0.95;demo.yaw=-2.50;demo._update_camera()
	await _capture("01_露岩草丘俯视")
	var close := _near_rock(rocks)
	var near: Vector2 = close.get("at",Vector2(11.5,9.5))
	demo.ui_layer.visible=false;demo.focus=Vector3(near.x,float(demo.state.ground_height(near))+0.3,near.y);demo.zoom=10;demo.pitch=0.65;demo.yaw=float(close.get("yaw",-0.75));demo._update_camera()
	facts.close_camera=close
	await _capture("02_真实石坡与稀草近景")
	demo.ui_layer.visible=true
	await _road_test(rocks)
	var saved: Dictionary = demo.state.snapshot()
	var loaded := State.new()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"full precision State JSON restores actual landform city")
	var fresh := Renderer.new();fresh.visible=false;root.add_child(fresh);fresh.setup(loaded)
	_check(_rock_hash(fresh)==_rock_hash(demo.town) and loaded._ground_terrain.vertices==demo.state._ground_terrain.vertices,"independent fresh production renderer restores exact imported rock geometry and height field from JSON")
	fresh.free();await physics_frame;await process_frame
	demo.focus=Vector3(10,1,10);demo.zoom=16;demo.pitch=0.75;demo._update_camera();demo.life.set_process(true)
	var frames: Array[float] = []
	var draws: Array[float] = []
	var previous := Time.get_ticks_usec()
	for ignored in range(240):
		await process_frame
		var now := Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	frames.sort();draws.sort()
	facts.performance={"frames":240,"wall_p95_ms":frames[228],"wall_max_ms":frames[-1],"draws_median":draws[120],"engine_max_fps":Engine.max_fps,"vsync":DisplayServer.window_get_vsync_mode(),"normal_life_music":demo.life.is_processing() and demo.music.is_processing(),"scope":"180 FPS limited wall-clock reference with VSync disabled; not uncapped throughput."}
	_check(_identity()==identities and demo.music._players.size()==9 and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock_start,"original nine PCM streams and thirteen players survive real edits while actual audio clock advances")
	await _finish()


func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continuing-city bytes remain unchanged")
	if not sample_bytes.is_empty(): _check(FileAccess.get_file_as_bytes(EXAMPLE)==sample_bytes,"authored landform example bytes remain unchanged")
	var result := {"ok":failures.is_empty(),"checks":checks,"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"failures":failures,"facts":facts,"scope":"Actual GL production terrain, four-mode UI and window input, one committed two-layer release transaction and one canceled preview, slope/rockiness, uploaded grass and companion stones, physics, road clearing/history and fresh JSON renderer. Only one 240-frame normal Life+Music sample; no complete economy/concert or large-city claim. Popup and viewport events use Godot dispatch, not OS input.","command":"Godot_v4.7.2-stable_win64_console.exe --max-fps 180 --path . --script tools/check_creation_landforms_live.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("CREATION_LANDFORMS_LIVE ",JSON.stringify(result))
	demo.life.set_process(false);demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
