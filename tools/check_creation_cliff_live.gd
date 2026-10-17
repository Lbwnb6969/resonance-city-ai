extends SceneTree
## Bounded actual-GL cliff A/B and one real terrain gesture. Life stays paused.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT := "res://验证记录/岩壁地貌_2026-10-16"
const CLIFF := "res://资源/自然参考/层理岩壁.png"
const ORIGINAL_CLIFF := "res://参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-textures/png/game/asset/Terrain/Terrain Layers/Layers/Env_Cliff_Surface_01A.data.texture.meta.png"
const EXAMPLES := ["res://数据/台地河湾样例.json","res://数据/地貌河湾样例.json"]
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {"views":[]}
var personal := PackedByteArray()
var originals: Dictionary = {}

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _sha(bytes: PackedByteArray) -> String:
	var context := HashingContext.new();context.start(HashingContext.HASH_SHA256);context.update(bytes)
	return context.finish().hex_encode()
func _key(code: int,ctrl: bool=false,target: Window=null) -> void:
	for down: bool in [true,false]:
		var event := InputEventKey.new();event.keycode=code;event.pressed=down;event.ctrl_pressed=ctrl
		if target!=null: event.window_id=target.get_window_id();Input.parse_input_event(event)
		else: root.push_input(event)
		await process_frame
func _motion(at: Vector2) -> void:
	var event := InputEventMouseMotion.new();event.position=at;event.global_position=at
	root.push_input(event);await process_frame
func _button(down: bool) -> void:
	var event := InputEventMouseButton.new();event.position=demo.pointer;event.global_position=demo.pointer;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down
	root.push_input(event);await process_frame
func _wait() -> void:
	var deadline := Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"real terrain and following UI publication complete")
	await physics_frame;await process_frame
func _identity() -> Array:
	var result: Array = []
	for id: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[id]
		var pcm: PackedByteArray = player.stream.data
		result.append([id,player.get_instance_id(),player.stream.get_instance_id(),_sha(pcm)])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _terrain() -> Dictionary:
	var mesh_rows: Array[String] = []
	var collision_rows: Array[String] = []
	var ids := {}
	for key: Vector2i in demo.town.terrain_surface.blocks:
		var block: Node3D = demo.town.terrain_surface.blocks[key]
		var mesh: MeshInstance3D = block.get_node("GroundMesh")
		mesh_rows.append(var_to_bytes([key,mesh.global_transform,mesh.mesh.surface_get_arrays(0)]).hex_encode())
		var body: StaticBody3D = block.get_node("GroundPick")
		var shapes: Array = []
		for child: Node in body.get_children():
			if child is CollisionShape3D:
				var shape := child.shape as ConcavePolygonShape3D
				shapes.append([child.transform,shape.get_faces(),child.disabled])
		collision_rows.append(var_to_bytes([key,body.global_transform,body.collision_layer,body.collision_mask,shapes]).hex_encode())
		ids[str(key)]=[block.get_instance_id(),mesh.mesh.get_instance_id(),body.get_instance_id()]
	mesh_rows.sort();collision_rows.sort()
	return {"height_sha256":_sha(var_to_bytes(demo.state._ground_terrain.vertices)),"mesh_sha256":"\n".join(mesh_rows).sha256_text(),"collision_sha256":"\n".join(collision_rows).sha256_text(),"ids":ids}
func _camera(center: Vector2,zoom_value: float,yaw_value: float,pitch_value: float) -> void:
	demo.select_tool(0);demo.focus=Vector3(center.x,0.9,center.y);demo.zoom=zoom_value;demo.yaw=yaw_value;demo.pitch=pitch_value;demo._update_camera();demo.town.clear_preview()
func _enabled(value: bool) -> void: demo.town.ground_material.set_shader_parameter("cliff_surface_enabled",value)
func _sample() -> Dictionary:
	for ignored in range(15): await process_frame
	var wall: Array[float] = [];var draws: Array[float] = []
	var previous := Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now := Time.get_ticks_usec();wall.append(float(now-previous)/1000.0);previous=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort()
	return {"frames":120,"warm_frames":15,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draws_median":draws[60],"draws_max":draws[-1]}
func _image(label: String) -> Image:
	await process_frame;await RenderingServer.frame_post_draw
	var result: Image = root.get_texture().get_image()
	_check(result.save_png(OUT+"/"+label+".png")==OK,"actual GL cliff screenshot saved: "+label)
	return result
func _patch(image_value: Image,at: Vector2i) -> Vector3:
	var sum := Vector3.ZERO
	for x in range(-1,2):
		for y in range(-1,2):
			var color: Color = image_value.get_pixel(at.x+x,at.y+y)
			sum+=Vector3(color.r,color.g,color.b)
	return sum/9.0
func _pixels(old_image: Image,new_image: Image,center: Vector2) -> Dictionary:
	var steep: Array[float] = [];var flat: Array[float] = [];var samples: Array = []
	for x in range(-20,21):
		for z in range(-20,21):
			var at := center+Vector2(x,z)*0.25
			var slope: float = demo.state._ground_terrain.gradient_at(at).length()
			if slope<1.0 and slope>0.25: continue
			var world := Vector3(at.x,demo.state.ground_height(at),at.y)
			if demo.camera.is_position_behind(world): continue
			var screen: Vector2 = demo.camera.unproject_position(world)
			if not Rect2(Vector2(4,4),Vector2(root.size)-Vector2(8,8)).has_point(screen): continue
			# Orthographic visibility uses the real pixel ray, not camera-to-point
			# perspective rays. Houses/fountains in front exclude the sample.
			var origin: Vector3 = demo.camera.project_ray_origin(screen)
			var direction: Vector3 = demo.camera.project_ray_normal(screen)
			var hit: Dictionary = demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(origin,origin+direction*150.0,7))
			if hit.is_empty() or not hit.collider.get_meta("ground",false) or Vector3(hit.position).distance_to(world)>0.035: continue
			var normal: Vector3 = hit.normal
			var face_slope := Vector2(normal.x,normal.z).length()/maxf(normal.y,0.001)
			var rocky := slope>=1.0 and face_slope>=1.0
			if not rocky and (slope>0.25 or face_slope>0.25): continue
			var pixel := Vector2i(screen)
			var before := _patch(old_image,pixel);var after := _patch(new_image,pixel)
			var delta := (absf(before.x-after.x)+absf(before.y-after.y)+absf(before.z-after.z))/3.0
			if rocky: steep.append(delta)
			else: flat.append(delta)
			if rocky and samples.size()<12: samples.append({"world":world,"pixel":pixel,"gradient_slope":slope,"actual_hit_slope":face_slope,"old_rgb":before,"new_rgb":after,"delta":delta})
	var steep_sum := 0.0;var flat_sum := 0.0
	for value: float in steep: steep_sum+=value
	for value: float in flat: flat_sum+=value
	return {"visible_steep_count":steep.size(),"visible_flat_count":flat.size(),"steep_mean_rgb_delta":steep_sum/maxi(1,steep.size()),"flat_mean_rgb_delta":flat_sum/maxi(1,flat.size()),"samples":samples,"scope":"3x3 pixel means at actual orthographic terrain-visible hits; steep requires both physical face and shared gradient slope >=1, flat <=.25. Wind/water remain live; no whole-image delta claimed as cliff change."}
func _view(label: String,center: Vector2,zoom_value: float,yaw_value: float,pitch_value: float) -> void:
	_camera(center,zoom_value,yaw_value,pitch_value)
	var snapshot: Dictionary = demo.state.snapshot();var terrain := _terrain()
	_enabled(false);var old_perf: Dictionary = await _sample();var old_image: Image = await _image(label+"_old")
	_enabled(true);var new_perf: Dictionary = await _sample();var new_image: Image = await _image(label+"_cliff")
	var pixels := _pixels(old_image,new_image,center)
	_check(int(pixels.visible_steep_count)>=8 and int(pixels.visible_flat_count)>=8,label+" contains actual visible steep-cliff and flat terrain pixel samples")
	_check(float(pixels.steep_mean_rgb_delta)>0.002 and float(pixels.flat_mean_rgb_delta)<float(pixels.steep_mean_rgb_delta)*0.50+0.003,label+" cliff texture changes actual visible steep faces more than flat-ground animation drift")
	_check(demo.state.snapshot()==snapshot and _terrain()==terrain,label+" material switch preserves exact State, height vertices, mesh/collision bytes and terrain root identities")
	facts.views.append({"label":label,"camera":{"center":center,"zoom":zoom_value,"yaw":yaw_value,"pitch":pitch_value},"old":old_perf,"cliff":new_perf,"pixels":pixels})

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	for path: String in EXAMPLES: originals[path]=FileAccess.get_file_as_bytes(path)
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var deadline := Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL scene and unchanged production PCM are ready with Life paused")
	if demo.music.audio_report.is_empty(): await _finish();return
	var audio := _identity();var clock: float = demo.music._playback_clock()
	var texture: Texture2D = demo.town.ground_material.get_shader_parameter("cliff_surface")
	_check(texture!=null and bool(demo.town.ground_material.get_shader_parameter("cliff_surface_enabled")),"actual ground material enables the real cliff texture")
	if texture==null: await _finish();return
	var image_value := texture.get_image()
	_check(image_value.get_width()==2048 and image_value.get_height()==2048 and image_value.get_mipmap_count()==11,"single actual 2048-square cliff texture has eleven mip levels beyond base")
	var sha := _sha(FileAccess.get_file_as_bytes(CLIFF))
	_check(sha==_sha(FileAccess.get_file_as_bytes(ORIGINAL_CLIFF)),"product cliff PNG is a complete byte-identical copy of recovered Foundation Env Cliff Surface 01A")
	var only_ground := true
	for material: ShaderMaterial in [demo.town.water_material,demo.town.path_edge.material]:
		if material!=null and material.get_shader_parameter("cliff_surface")!=null: only_ground=false
	for part: String in ["lawn","grass"]:
		if demo.town.meadow.materials.has(part) and demo.town.meadow.materials[part].get_shader_parameter("cliff_surface")!=null: only_ground=false
	var shared := true
	for block: Node3D in demo.town.terrain_surface.blocks.values():
		if block.get_node("GroundMesh").material_override!=demo.town.ground_material: shared=false
	_check(only_ground and shared,"only the one shared ground material binds cliff texture; all terrain blocks reuse it")
	facts.texture={"sha256":sha,"resource_path":texture.resource_path,"texture_id":texture.get_instance_id(),"mipmaps":image_value.get_mipmap_count(),"uv_scale":demo.town.ground_material.get_shader_parameter("cliff_uv_scale")}
	for index in range(EXAMPLES.size()):
		var restored: Dictionary = demo.state.restore(JSON.parse_string(originals[EXAMPLES[index]].get_string_from_utf8()))
		demo._after_edit(restored,"history");await _wait()
		_check(restored.ok and demo.town.ground_material.get_shader_parameter("cliff_surface")==texture,"authored landform restore retains original shared cliff texture resource")
		if index==0: await _view("01_台地岩壁",Vector2(-15,-2),14.0,-1.6,0.65)
		else: await _view("02_北岭石坡",Vector2(-14.2,-12.5),12.0,1.4,0.72)
	var before: Dictionary = demo.state.snapshot();var terrain_before := _terrain();var history: int = demo.state._undo.size()
	demo.ui_layer.visible=true;_camera(Vector2(-15,5),14.0,-0.8,0.92)
	await _key(KEY_9)
	var picker: OptionButton = demo.terrain_brush.mode_picker
	await _motion(picker.get_global_rect().get_center());await _button(true);await _button(false)
	var popup: PopupMenu = picker.get_popup()
	_check(demo.tool==8 and popup.visible and picker.item_count==5,"actual key nine and mouse open the five-mode terrain popup")
	if popup.visible:
		if popup.get_focused_item()<0: await _key(KEY_DOWN,false,popup)
		for ignored in range(popup.get_focused_item()): await _key(KEY_UP,false,popup)
		for ignored in range(4): await _key(KEY_DOWN,false,popup)
		await _key(KEY_ENTER,false,popup);picker.release_focus()
		var a := Vector2(-15,5);var b := Vector2(-14.2,5.1)
		var old_height: float = demo.state.ground_height(a)
		await _motion(demo.camera.unproject_position(Vector3(a.x,old_height,a.y)));await _button(true)
		_check(demo.terrain_brush.drawing and demo.terrain_brush.draft_mode=="plateau" and demo.terrain_brush.draft_passes==2,"real viewport mouse-down starts a two-layer plateau gesture")
		await _motion(demo.camera.unproject_position(Vector3(b.x,demo.state.ground_height(b),b.y)));await _button(false);await _wait()
		_check(demo.state.terrain_strokes.size()==before.terrain_strokes.size()+2 and demo.state._undo.size()==history+1 and demo.state.ground_height(a)>old_height+1.0,"actual release commits new physical plateau in one undo step")
		var hit: Dictionary = demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(a.x,15,a.y),Vector3(a.x,-5,a.y),2))
		_check(not hit.is_empty() and absf(float(hit.position.y)-float(demo.state.ground_height(a)))<0.001,"new genuine plateau height agrees with actual layer-two collision ray")
		demo.select_tool(0);demo.ui_layer.visible=false;await _image("03_真实笔画后的岩壁")
		await _key(KEY_Z,true);await _wait()
		var undone := _terrain()
		_check(demo.state.terrain_strokes==before.terrain_strokes and undone.height_sha256==terrain_before.height_sha256 and undone.mesh_sha256==terrain_before.mesh_sha256 and undone.collision_sha256==terrain_before.collision_sha256,"real Ctrl-Z restores original heightfield, mesh and physical collision bytes")
	_check(_identity()==audio and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock+2.0,"two A/B views and genuine edit preserve nine PCM bytes, thirteen players and actual advancing clock")
	_check(demo.state.life_progress==before.life_progress and not demo.life.is_processing(),"paused-Life material and terrain validation invent no completed business events")
	facts.performance_scope="Each camera/setting uses 15 warm plus 120 measured frames at 180 FPS and VSync0. GPU visual sample only, Life paused; not a full economy, physical listening or uncapped-throughput claim."
	await _finish()
func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continuing-city bytes remain untouched")
	var unchanged := true
	for path: String in originals: unchanged=unchanged and FileAccess.get_file_as_bytes(path)==originals[path]
	_check(unchanged,"both authored example files retain their original bytes")
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"facts":facts,"input":"Godot Window keys, popup and mouse events, not OS input","command":"Godot_v4.7.2-stable_win64_console.exe --path . --audio-driver Dummy --max-fps 180 --script tools/check_creation_cliff_live.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("CREATION_CLIFF_LIVE ",JSON.stringify(report))
	demo.life.set_process(false);demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
