extends SceneTree
## Bounded actual-GL A/B. Godot Window injection, not OS mouse/keyboard input.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT := "res://验证记录/湿砂河岸_2026-10-16"
const EXAMPLE := "res://数据/地貌河湾样例.json"
const SAND := "res://资源/自然参考/湿砂河岸.png"
const ORIGINAL_SAND := "res://参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-textures/png/game/asset/Terrain/Terrain Layers/Layers/Sand_01A.data.texture.meta.png"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {"views":[]}
var personal := PackedByteArray()
var sample_bytes := PackedByteArray()
var materials: Dictionary = {}

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool, label: String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _hash(data: PackedByteArray) -> String:
	var context := HashingContext.new()
	context.start(HashingContext.HASH_SHA256);context.update(data)
	return context.finish().hex_encode()
func _identity() -> Array:
	var result: Array = []
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[key]
		var pcm: PackedByteArray = player.stream.data
		result.append([key,player.get_instance_id(),player.stream.get_instance_id(),pcm.size(),_hash(pcm)])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _materials() -> void:
	materials={"ground":demo.town.ground_material,"water":demo.town.water_material,"path_edge":demo.town.path_edge.material}
	for part: String in ["lawn","grass"]:
		if demo.town.meadow.materials.has(part): materials[part]=demo.town.meadow.materials[part]
func _enabled(value: bool) -> void:
	_materials()
	for material: ShaderMaterial in materials.values():
		if material != null: material.set_shader_parameter("bank_sand_enabled",value)
func _key(code: int, ctrl: bool=false) -> void:
	for down: bool in [true,false]:
		var event := InputEventKey.new()
		event.keycode=code;event.pressed=down;event.ctrl_pressed=ctrl
		root.push_input(event);await process_frame
func _motion(at: Vector2) -> void:
	var event := InputEventMouseMotion.new()
	event.position=at;event.global_position=at
	root.push_input(event);await process_frame
func _button(down: bool) -> void:
	var event := InputEventMouseButton.new()
	event.position=demo.pointer;event.global_position=demo.pointer
	event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down
	root.push_input(event);await process_frame
func _screen(at: Vector2) -> Vector2:
	return demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
func _wait() -> void:
	var deadline: int=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"real edit and following UI publication finish")
	await physics_frame;await process_frame
func _camera(at: Vector2, zoom_value: float) -> void:
	demo.focus=Vector3(at.x,0.4,at.y);demo.zoom=zoom_value
	demo.pitch=0.96;demo.yaw=0.52;demo._update_camera()
	demo.town.clear_preview()
func _image() -> Image:
	await process_frame;await RenderingServer.frame_post_draw
	return root.get_texture().get_image()
func _save(image_value: Image, label: String) -> void:
	_check(image_value.save_png(OUT+"/"+label+".png")==OK,"actual GL screenshot saved: "+label)
func _sample_frames() -> Dictionary:
	for ignored in range(15): await process_frame
	var wall: Array[float]=[]
	var draws: Array[float]=[]
	for ignored in range(120):
		var began: int=Time.get_ticks_usec()
		await process_frame
		wall.append(float(Time.get_ticks_usec()-began)/1000.0)
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort()
	return {"frames":120,"warm_frames":15,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draw_median":draws[60],"draw_max":draws[-1]}
func _patch(image_value: Image, pixel: Vector2i) -> Vector3:
	var sum := Vector3.ZERO
	for x in range(-1,2):
		for y in range(-1,2):
			var color: Color=image_value.get_pixel(pixel.x+x,pixel.y+y)
			sum+=Vector3(color.r,color.g,color.b)
	return sum/9.0
func _pixels(old_image: Image, new_image: Image, center: Vector2) -> Dictionary:
	var near: Array[float]=[]
	var far: Array[float]=[]
	var examples: Array=[]
	for ix in range(-18,19):
		for iz in range(-14,15):
			var at: Vector2=center+Vector2(ix,iz)*0.5
			var distance: float=demo.state.water_clearance(at)
			var is_near: bool=distance>=0.10 and distance<=0.78
			if not is_near and distance<2.2: continue
			var world:=Vector3(at.x,demo.state.ground_height(at)+0.008,at.y)
			if demo.camera.is_position_behind(world): continue
			var screen: Vector2=demo.camera.unproject_position(world)
			if not Rect2(Vector2(4,4),Vector2(root.size)-Vector2(8,8)).has_point(screen): continue
			var hit: Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(demo.camera.global_position,world-Vector3(0,0.08,0),7))
			if hit.is_empty() or Vector3(hit.position).distance_to(world)>0.12: continue
			var pixel:=Vector2i(screen)
			var a: Vector3=_patch(old_image,pixel)
			var b: Vector3=_patch(new_image,pixel)
			var delta: float=(absf(a.x-b.x)+absf(a.y-b.y)+absf(a.z-b.z))/3.0
			if is_near: near.append(delta)
			else: far.append(delta)
			if is_near and examples.size()<8: examples.append({"at":[at.x,at.y],"shore_distance":distance,"pixel":[pixel.x,pixel.y],"old_rgb":[a.x,a.y,a.z],"new_rgb":[b.x,b.y,b.z],"delta":delta})
	var near_sum:=0.0
	var far_sum:=0.0
	for value: float in near: near_sum+=value
	for value: float in far: far_sum+=value
	return {"near_count":near.size(),"far_count":far.size(),"near_mean_rgb_delta":near_sum/maxi(1,near.size()),"far_mean_rgb_delta":far_sum/maxi(1,far.size()),"samples":examples,"scope":"Same camera, projected terrain-visible 3x3 pixel means. Wind, water TIME and changing music remain live; far-field deltas are measured, not claimed pixel-identical."}
func _view(label: String, center: Vector2, zoom_value: float) -> void:
	_camera(center,zoom_value)
	_enabled(false)
	var old_perf: Dictionary=await _sample_frames()
	var old_image: Image=await _image()
	_save(old_image,label+"_old")
	_enabled(true)
	var new_perf: Dictionary=await _sample_frames()
	var new_image: Image=await _image()
	_save(new_image,label+"_sand")
	var pixels: Dictionary=_pixels(old_image,new_image,center)
	_check(int(pixels.near_count)>=8 and int(pixels.far_count)>=8,label+" has actual visible near-bank and far-land pixel samples")
	_check(float(pixels.near_mean_rgb_delta)>0.002,label+" A/B actually changes near-bank pixels")
	_check(float(pixels.far_mean_rgb_delta)<float(pixels.near_mean_rgb_delta)*0.75+0.003,label+" near-bank change dominates measured far-land animation drift")
	facts.views.append({"label":label,"center":[center.x,center.y],"zoom":zoom_value,"old":old_perf,"sand":new_perf,"pixels":pixels})
func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	sample_bytes=FileAccess.get_file_as_bytes(EXAMPLE)
	root.size=Vector2i(1440,900);Engine.max_fps=180
	DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false
	demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var restored: Dictionary=demo.state.restore(JSON.parse_string(sample_bytes.get_string_from_utf8()))
	demo._after_edit(restored,"history");await _wait()
	var deadline: int=Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and restored.ok and not demo.music.audio_report.is_empty(),"actual GL landform sample and production PCM bank are ready")
	if DisplayServer.get_name()=="headless" or not restored.ok or demo.music.audio_report.is_empty(): await _finish();return
	var identity: Array=_identity()
	var clock_start: float=demo.music._playback_clock()
	var snapshot: Dictionary=demo.state.snapshot().duplicate(true)
	var vertices: PackedFloat32Array=demo.state._ground_terrain.vertices.duplicate()
	var plants: Array=demo.state.plants.duplicate(true)
	_materials()
	var shared: Texture2D=null
	var textures: Array=[]
	var all_bound: bool=materials.size()==5
	for key: String in materials:
		var material: ShaderMaterial=materials[key]
		if material==null: all_bound=false;continue
		var texture_value: Texture2D=material.get_shader_parameter("bank_sand")
		all_bound=all_bound and texture_value!=null and bool(material.get_shader_parameter("bank_sand_enabled"))
		if texture_value==null: continue
		if shared==null: shared=texture_value
		all_bound=all_bound and texture_value==shared
		textures.append({"part":key,"material_id":material.get_instance_id(),"texture_id":texture_value.get_instance_id()})
	_check(all_bound,"ground water lawn grass and path-edge bind one actual enabled sand texture resource")
	var include_source: String=FileAccess.get_file_as_string("res://scripts/visual/shaders/creation_shore_palette.gdshaderinc")
	_check(shared!=null and shared.get_image().has_mipmaps(),"actual shared sand texture contains mipmaps")
	_check(include_source.contains("source_color, filter_linear_mipmap, repeat_enable"),"actual sampler declares source-color mip filtering and world-UV repeat")
	var sand_sha: String=_hash(FileAccess.get_file_as_bytes(SAND))
	_check(sand_sha==_hash(FileAccess.get_file_as_bytes(ORIGINAL_SAND)),"product sand PNG exactly matches the recovered Foundation Sand01A source SHA256")
	facts.texture={"sha256":sand_sha,"path":SAND,"shared_materials":textures,"mipmaps":shared.get_image().get_mipmap_count() if shared!=null else 0}
	await _view("riverbank",Vector2(demo.state.river_x(-7.0)+1.0,-7.0),15.0)
	await _view("existing_pond",Vector2(12,7.8),12.0)
	_check(demo.state.snapshot()==snapshot and demo.state._ground_terrain.vertices==vertices and demo.state.plants==plants,"material A/B changes no State schema fields terrain vertices or authored plants")
	var pond:=Vector2.ZERO
	var found:=false
	for candidate: Vector2 in [Vector2(11,-8),Vector2(12,-5),Vector2(13,-1),Vector2(-12,10)]:
		var stroke: Array[Vector2]=[candidate,candidate+Vector2(0.8,0.15)]
		if demo.state.preview_water(stroke,3.2,"pond").ok: pond=candidate;found=true;break
	_check(found,"a real empty legal parcel exists for the bounded water gesture")
	if found:
		_camera(pond,12.0);await _key(KEY_7)
		var water_count: int=demo.state.waters.size()
		var height_before: float=demo.state.ground_height(pond)
		await _motion(_screen(pond));await _button(true)
		_check(demo.water_drawing,"actual tool-seven mouse-down starts the production water stroke")
		await _motion(_screen(pond+Vector2(0.8,0.15)))
		await _button(false);await _wait()
		_check(demo.state.waters.size()==water_count+1 and demo.state.ground_height(pond)<height_before-0.1,"actual released water stroke commits a pond and excavates its real bed")
		var field_after: String=_hash(demo.town.water_field.texture.get_image().get_data())
		_enabled(true)
		var edited_image: Image=await _image();_save(edited_image,"new_pond_sand")
		await _key(KEY_Z,true);await _wait();_enabled(true)
		var undone_image: Image=await _image();_save(undone_image,"new_pond_undo")
		_check(demo.state.waters==snapshot.waters and demo.state._ground_terrain.vertices==vertices,"actual Ctrl-Z restores authored water and every original heightfield vertex")
		_check(_hash(demo.town.water_field.texture.get_image().get_data())!=field_after,"undo republishes the actual shared shoreline texture used by sand and grass")
		facts.water_gesture={"at":[pond.x,pond.y],"input":"Godot Window mouse/key events","schema_before":snapshot.schema,"schema_after":demo.state.snapshot().schema,"terrain_restored":demo.state._ground_terrain.vertices==vertices}
	_check(demo.state.plants==plants and demo.state.snapshot().schema==snapshot.schema,"water undo preserves authored plants and State schema")
	_check(_identity()==identity and demo.music._players.size()==9 and demo.music._effects.size()==4,"all thirteen player identities and every actual original long PCM byte digest stay unchanged")
	facts.music_clock_elapsed=demo.music._playback_clock()-clock_start
	_check(float(facts.music_clock_elapsed)>2.0,"actual device transport advances throughout visual A/B and water editing")
	facts.performance_scope="Each old/new camera has 15 warm frames and 120 measured frames, at 180 FPS cap and VSync disabled. Life is paused only to isolate visual A/B; music and shader TIME run normally. This is a bounded scene comparison, not uncapped throughput or a full ecology benchmark."
	await _finish()
func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city-save bytes remain untouched")
	_check(FileAccess.get_file_as_bytes(EXAMPLE)==sample_bytes,"authored landform-example bytes remain untouched")
	var result: Dictionary={"ok":failures.is_empty(),"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"checks":checks,"failures":failures,"facts":facts,"scope":"Actual GL production shore material A/B, projected near/far image measurements and one genuine tool-seven pond/undo. No physical listening claim or OS input claim. Life is paused, original music transport stays live.","command":"Godot_v4.7.2-stable_win64_console.exe --path . --max-fps 180 --script tools/check_creation_sandbank_live.gd -- --landform-example"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("CREATION_SANDBANK_LIVE ",JSON.stringify(result))
	if is_instance_valid(demo):
		demo.life.set_process(false);demo.music.set_process(false)
		for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
		for player: AudioStreamPlayer in demo.music._effects: player.stop()
		await create_timer(0.15).timeout
		demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
