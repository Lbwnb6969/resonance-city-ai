extends SceneTree
## Actual GL A/B of the one shared ground material; isolated authored cities.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT = "res://验证记录/草岩高度过渡_2026-10-16"
const SOURCES = ["res://数据/台地河湾样例.json","res://数据/地貌河湾样例.json"]
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {"views":[]}
var personal: PackedByteArray
var sources: Dictionary = {}

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _sha(bytes: PackedByteArray) -> String:
	var context := HashingContext.new();context.start(HashingContext.HASH_SHA256);context.update(bytes)
	return context.finish().hex_encode()
func _identity() -> Array:
	var result: Array = []
	for id: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[id]
		result.append([id,player.get_instance_id(),player.stream.get_instance_id(),_sha(player.stream.data)])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _terrain() -> Dictionary:
	var rows: Array[String] = []
	for key: Vector2i in demo.town.terrain_surface.blocks:
		var block: Node3D = demo.town.terrain_surface.blocks[key]
		var mesh: MeshInstance3D = block.get_node("GroundMesh")
		var body: StaticBody3D = block.get_node("GroundPick")
		var shapes: Array = []
		for child: Node in body.get_children():
			if child is CollisionShape3D: shapes.append(child.shape.get_faces())
		rows.append(_sha(var_to_bytes([key,mesh.mesh.surface_get_arrays(0),shapes])))
	rows.sort()
	return {"height":_sha(var_to_bytes(demo.state._ground_terrain.vertices)),"mesh_collision":rows}
func _nodes() -> Array:
	var ids: Array = []
	for block: Node3D in demo.town.terrain_surface.blocks.values():
		ids.append([block.get_instance_id(),block.get_node("GroundMesh").mesh.get_instance_id(),block.get_node("GroundPick").get_instance_id()])
	return ids
func _wait() -> void:
	var deadline := Time.get_ticks_msec()+25000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"terrain publication complete")
	await physics_frame;await process_frame
func _sample() -> Dictionary:
	for ignored in range(12): await process_frame
	var frames: Array[float] = [];var draws: Array[float] = [];var previous := Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now := Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	frames.sort();draws.sort()
	return {"p95_ms":frames[113],"max_ms":frames[-1],"draws_median":draws[60],"frames":120}
func _image(label: String) -> Image:
	await process_frame;await RenderingServer.frame_post_draw
	var result := root.get_texture().get_image()
	_check(result.save_png(OUT+"/"+label+".png")==OK,"GL screenshot saved: "+label)
	return result
func _pixels(before: Image,after: Image,center: Vector2) -> Dictionary:
	var transition: Array[float] = [];var flat: Array[float] = [];var steep: Array[float] = []
	for x in range(-28,29):
		for z in range(-28,29):
			var at := center+Vector2(x,z)*.2
			var slope: float = demo.state._ground_terrain.gradient_at(at).length()
			var world := Vector3(at.x,demo.state.ground_height(at),at.y)
			var screen: Vector2 = demo.camera.unproject_position(world)
			if not Rect2(Vector2(4,4),Vector2(root.size)-Vector2(8,8)).has_point(screen): continue
			var origin: Vector3 = demo.camera.project_ray_origin(screen)
			var direction: Vector3 = demo.camera.project_ray_normal(screen)
			var hit: Dictionary = demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(origin,origin+direction*150.0,7))
			if hit.is_empty() or not hit.collider.get_meta("ground",false) or Vector3(hit.position).distance_to(world)>.035: continue
			var pixel := Vector2i(screen);var a := before.get_pixelv(pixel);var b := after.get_pixelv(pixel)
			var delta := (absf(a.r-b.r)+absf(a.g-b.g)+absf(a.b-b.b))/3.0
			var normal: Vector3 = hit.normal
			var face_slope := Vector2(normal.x,normal.z).length()/maxf(normal.y,.001)
			if slope>.80 and slope<1.20: transition.append(delta)
			elif slope<.25 and face_slope<.25: flat.append(delta)
			elif slope>1.4 and face_slope>1.4: steep.append(delta)
	var result := {}
	for pair: Array in [["transition",transition],["flat",flat],["steep",steep]]:
		var sum := 0.0;var changed := 0
		for value: float in pair[1]:
			sum+=value
			if value>.008: changed+=1
		result[pair[0]]={"count":pair[1].size(),"mean_delta":sum/maxi(1,pair[1].size()),"changed_over_008":changed}
	return result
func _view(label: String,center: Vector2,zoom_value: float,yaw_value: float,pitch_value: float) -> void:
	demo.focus=Vector3(center.x,.9,center.y);demo.zoom=zoom_value;demo.yaw=yaw_value;demo.pitch=pitch_value;demo._update_camera();demo.town.clear_preview()
	var state: Dictionary = demo.state.snapshot();var terrain := _terrain();var nodes := _nodes()
	var material: ShaderMaterial = demo.town.ground_material
	material.set_shader_parameter("cliff_height_blend_enabled",false)
	var old_perf := await _sample();var old_image := await _image(label+"_原坡度混色")
	material.set_shader_parameter("cliff_height_blend_enabled",true)
	var new_perf := await _sample();var new_image := await _image(label+"_岩纹高度过渡")
	var pixels := _pixels(old_image,new_image,center)
	_check(pixels.transition.count>=8 and pixels.transition.changed_over_008>=4,label+" changes visible real transition pixels")
	_check(pixels.flat.count>=8 and pixels.flat.mean_delta<.006,label+" preserves flat ground within live wind drift")
	_check(demo.state.snapshot()==state and _terrain()==terrain and _nodes()==nodes,label+" A/B preserves exact city, height, mesh/collision bytes and node identities")
	facts.views.append({"label":label,"before":old_perf,"after":new_perf,"pixels":pixels,"camera":{"center":center,"zoom":zoom_value,"yaw":yaw_value,"pitch":pitch_value}})
func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	for path: String in SOURCES: sources[path]=FileAccess.get_file_as_bytes(path)
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var deadline := Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL and fixed production PCM ready")
	if demo.music.audio_report.is_empty(): await _finish();return
	var audio := _identity();var clock: float = demo.music._playback_clock()
	_check(demo.town.ground_material.get_shader_parameter("cliff_height_blend_enabled")==true,"production material explicitly enables height blending")
	for i in range(SOURCES.size()):
		var restored: Dictionary = demo.state.restore(JSON.parse_string(sources[SOURCES[i]].get_string_from_utf8()))
		_check(restored.ok,"authored landform restores")
		demo._after_edit(restored,"history");await _wait()
		if i==0: await _view("01_台地",Vector2(-15,-2),14.0,-1.6,.65)
		else: await _view("02_石坡",Vector2(-14.2,-12.5),12.0,1.4,.72)
	var before := _terrain();var snapshot: Dictionary = demo.state.snapshot();var points: Array[Vector2] = [Vector2(10,12)]
	var edited: Dictionary = demo.state.add_terrain_stroke(points,"raise",1.5,.2)
	demo._after_edit(edited,"terrain");await _wait()
	_check(edited.ok and _terrain().height!=before.height,"actual terrain edit changes shared height")
	var shared := true
	for block: Node3D in demo.town.terrain_surface.blocks.values(): shared=shared and block.get_node("GroundMesh").material_override==demo.town.ground_material
	_check(shared and demo.town.ground_material.get_shader_parameter("cliff_height_blend_enabled")==true,"new terrain chunks retain the one height-blended material")
	var undone: Dictionary = demo.state.undo();demo._after_edit(undone,"history");await _wait()
	_check(undone.ok and _terrain()==before and demo.state.terrain_strokes==snapshot.terrain_strokes,"undo restores exact height, mesh and collision bytes")
	_check(_identity()==audio and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock+2.0,"nine PCM streams, four short players and advancing music clock retained")
	_check(demo.state.life_progress==snapshot.life_progress,"paused life creates no false business progress")
	await _finish()
func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city untouched")
	for path: String in sources: _check(FileAccess.get_file_as_bytes(path)==sources[path],"authored sample bytes untouched: "+path)
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"scope":"1440x900 Compatibility GL, VSync off, 180FPS cap, 12 warm +120 sampled frames per setting; live grass/water; Life paused. Render evidence, not near-road prepare or economy benchmark."}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("CLIFF_HEIGHT ",JSON.stringify(report))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	for player: AudioStreamPlayer in demo.ambience.players.values(): player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout
	quit(0 if failures.is_empty() else 1)
