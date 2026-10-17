extends SceneTree
## Actual mesh/collision, planted roots, local water edit and three live views.
## Run: Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --max-fps 180 --script res://tools/check_creation_terrain_live.gd
const Scene = preload("res://scenes/city_creation.tscn")
const Terrain = preload("res://scripts/world/city_creation_terrain.gd")
const OUTPUT = "res://验证记录/河谷地貌_2026-10-16/live"
var demo: Node3D
var checks := 0
var failures: Array[String] = []
var views: Array[Dictionary] = []
var ray_samples: Array[Dictionary] = []
var root_samples: Array[Dictionary] = []
var edits: Dictionary = {}

class FrameSampler extends Node:
	var active := false
	var times: Array[float] = []
	var last := Time.get_ticks_usec()
	func _process(_delta: float) -> void:
		var now := Time.get_ticks_usec()
		if active: times.append((now-last)/1000.0)
		last = now

var sampler: FrameSampler

func _initialize() -> void: _run.call_deferred()

func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok:
		failures.append(label)
		push_error(label)

func _wait_edit() -> void:
	var until := Time.get_ticks_msec()+20000
	while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.edit_pending(), "latest terrain and construction edit finishes")
	await physics_frame
	await physics_frame

func _capture(label: String, focus: Vector3, zoom: float) -> void:
	demo.focus = focus
	demo.zoom = zoom
	demo._update_camera()
	demo.town.clear_preview()
	for frame in range(45): await process_frame
	sampler.times.clear()
	sampler.active = true
	for frame in range(150): await process_frame
	sampler.active = false
	var times := sampler.times.duplicate()
	times.sort()
	var report := {"view":label,"zoom":zoom,"wall_p95_ms":times[int((times.size()-1)*0.95)],"wall_max_ms":times[-1],"draw_calls":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME),"triangles":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_PRIMITIVES_IN_FRAME)}
	views.append(report)
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")
	print("TERRAIN_VIEW ",JSON.stringify(report))

func _identity() -> Array:
	var result := []
	for player: AudioStreamPlayer in demo.music._players.values(): result.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result

func _block_ids() -> Dictionary:
	var result := {}
	for key: Vector2i in demo.town.terrain_surface.blocks:
		var node: Node3D = demo.town.terrain_surface.blocks[key]
		result[key] = node.get_instance_id()
	return result

func _geometry() -> Dictionary:
	var result := {}
	for key: Vector2i in demo.town.terrain_surface.blocks:
		var node: Node3D = demo.town.terrain_surface.blocks[key]
		var parts := []
		for child: Node in node.find_children("*","MeshInstance3D",true,false):
			var mesh: MeshInstance3D = child
			parts.append([mesh.global_transform,hash(mesh.mesh.get_faces())])
		result[key] = parts
	return result

func _background_geometry() -> Array:
	var result := []
	for child: Node in demo.town.landscape.get_children():
		if child is MeshInstance3D:
			var mesh: MeshInstance3D = child
			result.append([mesh.global_transform,hash(mesh.mesh.get_faces())])
	return result

func _background_ids() -> Array:
	var result := []
	for child: Node in demo.town.landscape.get_children():
		if child is MeshInstance3D: result.append(child.get_instance_id())
	return result

func _background_heights() -> Array:
	var result := []
	for tree: Dictionary in demo.town.background_trees: result.append(demo.state.ground_height(tree.at))
	return result

func _border_pond() -> void:
	var before_heights := _background_heights()
	var before_signature: int = demo.town.background_height_signature
	var before_geometry := _background_geometry()
	var before_ids := _background_ids()
	var records: Array = demo.town.background_trees.duplicate(true)
	_check(before_signature==hash(before_heights),"background tree signature matches its actual terrain sample heights")
	var pond := Vector2.ZERO
	var nearest := INF
	for candidate: Vector2 in [Vector2(14.5,-12.8),Vector2(13.5,-11.5),Vector2(13,-12)]:
		var stroke: Array[Vector2] = [candidate]
		if not demo.state.preview_water(stroke,4.0,"pond").ok: continue
		for tree: Dictionary in records:
			var distance := candidate.distance_to(tree.at)
			if distance<nearest:
				nearest = distance
				pond = candidate
	_check(is_finite(nearest),"near-boundary pond has an actual legal edit site")
	if not is_finite(nearest): return
	var stroke: Array[Vector2] = [pond]
	var result: Dictionary = demo.state.add_water(stroke,4.0,"pond")
	_check(result.ok,"near-boundary pond is committed through the actual water API")
	if not result.ok: return
	demo._after_edit(result,"water")
	await _wait_edit()
	var after_heights := _background_heights()
	var changed := before_heights!=after_heights
	var after_signature: int = demo.town.background_height_signature
	var after_geometry := _background_geometry()
	var after_ids := _background_ids()
	_check(demo.town.background_trees==records,"near-boundary excavation preserves authored background tree identities")
	_check(after_signature==hash(after_heights),"rebuilt background signature follows the new true height field")
	_check(after_geometry.size()==2,"background trees remain merged into the original two material batches")
	if changed:
		_check(after_signature!=before_signature and after_ids!=before_ids and after_geometry!=before_geometry,"changed tree seat heights rebuild the real merged geometry")
	else:
		_check(after_signature==before_signature and after_ids==before_ids and after_geometry==before_geometry,"unaffected background trees retain both merged mesh identities")
	edits.border_pond = {"at":[pond.x,pond.y],"nearest_background_tree_m":nearest,"sample_height_changed":changed,"before_signature":before_signature,"after_signature":after_signature,"before_heights":before_heights,"after_heights":after_heights,"before_mesh_ids":before_ids,"after_mesh_ids":after_ids}
	# Keep the existing three comparison views and performance records intact.
	demo.focus = Vector3(pond.x,-0.02,pond.y)
	demo.zoom = 15.0
	demo._update_camera()
	demo.town.clear_preview()
	for frame in range(20): await process_frame
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/04_excavated_border_pond.png")
	demo._after_edit(demo.state.undo(),"history")
	await _wait_edit()
	_check(demo.town.background_height_signature==before_signature and _background_heights()==before_heights,"undo restores the exact background height signature and original tree seats")
	_check(_background_geometry()==before_geometry,"undo restores the exact merged background tree triangle hashes")

func _collision_triangles() -> void:
	var matched := 0
	for key: Vector2i in demo.town.terrain_surface.blocks:
		var node: Node3D = demo.town.terrain_surface.blocks[key]
		var meshes := node.find_children("*","MeshInstance3D",true,false)
		var bodies := node.find_children("*","StaticBody3D",true,false)
		_check(meshes.size()==1 and bodies.size()==1,"terrain block owns one visible mesh and one real body: "+str(key))
		if meshes.size()!=1 or bodies.size()!=1: continue
		var body: StaticBody3D = bodies[0]
		_check(body.get_meta("ground",false) and body.collision_layer==2,"terrain picking uses ground metadata and layer two: "+str(key))
		var shapes := body.find_children("*","CollisionShape3D",true,false)
		if shapes.size()!=1:
			_check(false,"terrain block has one collision shape")
			continue
		var collision: CollisionShape3D = shapes[0]
		var mesh: MeshInstance3D = meshes[0]
		var shape := collision.shape as ConcavePolygonShape3D
		_check(shape!=null,"terrain body follows the triangle field")
		if shape==null: continue
		_check(shape.get_faces()==mesh.mesh.get_faces() and collision.global_transform.is_equal_approx(mesh.global_transform),"visible and physical terrain use identical triangles: "+str(key))
		matched += 1
	_check(matched==demo.town.terrain_surface.blocks.size() and matched>0,"every actual terrain block has matching visible and physical triangles")

func _footings() -> void:
	for house: Node3D in demo.town.house_roots.values():
		var bottom := INF
		for body: StaticBody3D in house.find_children("*","StaticBody3D",true,false):
			if int(body.get_meta("cell").level)!=0: continue
			for collision: CollisionShape3D in body.find_children("*","CollisionShape3D",true,false):
				if collision.shape is BoxShape3D:
					bottom = minf(bottom,collision.global_position.y-collision.shape.size.y*0.5)
		_check(bottom<Terrain.BASE_HEIGHT-Terrain.BANK_DEPTH-0.015,"actual house stone footing and collision extend below the deepest bank: "+house.name)

func _ray(at: Vector2, label: String) -> void:
	var expected: float = demo.state.ground_height(at)
	var query := PhysicsRayQueryParameters3D.create(Vector3(at.x,8.0,at.y),Vector3(at.x,-2.0,at.y),2)
	var hit: Dictionary = demo.get_world_3d().direct_space_state.intersect_ray(query)
	_check(not hit.is_empty(),"physical ground ray hits "+label)
	if hit.is_empty(): return
	var error := absf(float(hit.position.y)-expected)
	ray_samples.append({"label":label,"at":[at.x,at.y],"state_height":expected,"physics_height":hit.position.y,"error":error})
	_check(hit.collider.get_meta("ground",false) and error<=0.001,"physical ground agrees with state within one millimetre: "+label)

func _project_picking() -> void:
	var bank_z := -7.13
	var water_z := 0.27
	var points := [
		{"label":"flat","at":Vector2(-15.37,-11.29),"water":false},
		{"label":"hill","at":Vector2(25.37,20.19),"water":false},
		{"label":"bank","at":Vector2(demo.state.river_x(bank_z)+2.49,bank_z),"water":false},
		{"label":"visible_water","at":Vector2(demo.state.river_x(water_z)+0.13,water_z),"water":true}]
	var samples: Array[Dictionary] = []
	for sample: Dictionary in points:
		var at: Vector2 = sample.at
		var height: float = Terrain.WATER_LEVEL if sample.water else demo.state.ground_height(at)
		var point := Vector3(at.x,height,at.y)
		demo.focus = point
		demo.zoom = 9.0
		demo._update_camera()
		await process_frame
		var screen: Vector2 = demo.camera.unproject_position(point)
		var picked: Vector2 = demo._ground_at(screen)
		var error := at.distance_to(picked)
		_check(error<0.002,"actual UI projected picking agrees within two millimetres: "+str(sample.label))
		samples.append({"label":sample.label,"expected":[at.x,at.y],"picked":[picked.x,picked.y],"height":height,"error":error})
	edits.ui_projected_picking = samples

func _plants() -> void:
	var meadow_count := 0
	var bank_meadow_count := 0
	for block: Node3D in demo.town.meadow.blocks.values():
		var lawn := block.get_node_or_null("Meadow_lawn") as MultiMeshInstance3D
		if lawn==null: continue
		for index in range(lawn.multimesh.instance_count):
			var at: Vector3 = lawn.global_transform*lawn.multimesh.get_instance_transform(index).origin
			var height: float = demo.state.ground_height(Vector2(at.x,at.z))
			if absf(height-Terrain.BASE_HEIGHT)<0.003 and meadow_count>=2: continue
			_check(absf(at.y-height-0.017)<=0.001,"actual lawn root retains its authored 1.7cm seat above terrain")
			root_samples.append({"kind":"lawn","at":[at.x,at.y,at.z],"height":height,"offset":at.y-height})
			meadow_count += 1
			if height<Terrain.BASE_HEIGHT-0.003: bank_meadow_count += 1
			if meadow_count>=8: break
		if meadow_count>=8: break
	_check(meadow_count>0,"actual meadow instances are sampled")
	var shore_count := 0
	var slope_shore_count := 0
	for block: Node3D in demo.town.shore.blocks.values():
		for child: Node in block.get_children():
			if not child is MultiMeshInstance3D or child.name=="Shore_stone": continue
			var batch: MultiMeshInstance3D = child
			for index in range(batch.multimesh.instance_count):
				var at: Vector3 = batch.global_transform*batch.multimesh.get_instance_transform(index).origin
				var height: float = demo.state.ground_height(Vector2(at.x,at.z))
				if absf(height-Terrain.BASE_HEIGHT)<0.003: continue
				_check(absf(at.y-height-0.025)<=0.001,"actual shore grass/reed root follows the sloping ground")
				root_samples.append({"kind":str(child.name),"at":[at.x,at.y,at.z],"height":height,"offset":at.y-height})
				shore_count += 1
				slope_shore_count += 1
				if shore_count>=8: break
			if shore_count>=8: break
		if shore_count>=8: break
	_check(slope_shore_count>0,"at least one real shore root follows nonflat terrain")
	edits.plant_root_counts = {"meadow":meadow_count,"bank_meadow":bank_meadow_count,"slope_shore":slope_shore_count}

func _run() -> void:
	root.size = Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.ui_layer.visible = false
	sampler = FrameSampler.new()
	root.add_child(sampler)
	var until := Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty(),"nine shared PCM loops finish preparation")
	_check(demo.town.get("terrain_surface")!=null,"production renderer owns the terrain surface")
	if demo.town.get("terrain_surface")==null:
		await _finish()
		return
	await physics_frame
	await physics_frame
	var identity := _identity()
	var clock_before: float = demo.music._playback_clock()
	var authored: Dictionary = demo.state.snapshot()
	for at: Vector2 in [Vector2(-15.37,-11.29),Vector2(-6.17,9.31),Vector2(12.31,9.17)]:
		_check(absf(demo.state.ground_height(at)-Terrain.BASE_HEIGHT)<=0.00001,"default dry building parcel keeps original flat datum")
		_ray(at,"flat "+str(at))
	for at: Vector2 in [Vector2(-25.17,-21.31),Vector2(25.37,20.19),Vector2(22.23,-23.17)]:
		_check(demo.state.ground_height(at)>1.0,"outer valley hills visibly rise more than one metre")
		_ray(at,"hill "+str(at))
	for z: float in [-8.13,0.27,11.19]:
		var bed := Vector2(demo.state.river_x(z)+0.13,z)
		_check(demo.state.ground_height(bed)<Terrain.WATER_LEVEL,"real riverbed lies below the water surface")
		_ray(bed,"riverbed "+str(z))
		var bank := Vector2(demo.state.river_x(z)+2.3+0.19,z)
		var height: float = demo.state.ground_height(bank)
		_check(height>Terrain.WATER_LEVEL and height<Terrain.BASE_HEIGHT-0.002,"0..0.35m dry shore band exposes a visible sloping bank")
		_ray(bank,"visible bank "+str(z))
	_collision_triangles()
	_footings()
	_plants()
	await _project_picking()
	await _capture("01_default_25",Vector3(-3,0.7,0),25.0)
	await _capture("02_valley_40",Vector3(0,0.7,0),40.0)
	await _capture("03_riverbank_15",Vector3(3.9,0.0,-7),15.0)
	_check(demo.state.snapshot()==authored,"camera observation preserves authored city and life ledger")
	var original_ids := _block_ids()
	var original_geometry := _geometry()
	var original_fingerprints: Dictionary = demo.town.terrain_surface.fingerprints.duplicate(true)
	var pond := Vector2(11,-9)
	var original_height: float = demo.state.ground_height(pond)
	var started := Time.get_ticks_usec()
	var pond_stroke: Array[Vector2] = [pond]
	var added: Dictionary = demo.state.add_water(pond_stroke,4.0,"pond")
	_check(added.ok,"legal pond stroke enters actual state")
	if added.ok:
		demo._after_edit(added,"water")
		await _wait_edit()
		edits.pond_edit_ms = float(Time.get_ticks_usec()-started)/1000.0
		var changed: Array[String] = []
		var retained: Array[String] = []
		for key: Vector2i in original_ids:
			if demo.town.terrain_surface.blocks[key].get_instance_id()!=original_ids[key]: changed.append(str(key))
			else: retained.append(str(key))
		_check(not changed.is_empty() and not retained.is_empty(),"pond rebuild replaces local terrain blocks and retains distant block identity")
		var far := Vector2i(-2,-2)
		_check(original_ids.has(far) and demo.town.terrain_surface.blocks[far].get_instance_id()==original_ids[far],"far northwest terrain keeps its exact original node")
		_check(demo.state.ground_height(pond)<Terrain.WATER_LEVEL and original_height-demo.state.ground_height(pond)>0.2,"new pond excavates the actual shared riverbed")
		_ray(pond+Vector2(0.13,0.17),"new pond non-grid bed")
		edits.changed_blocks = changed
		edits.retained_blocks = retained
		edits.pond_stats = demo.town.terrain_surface.stats.duplicate(true)
		demo._after_edit(demo.state.undo(),"history")
		await _wait_edit()
		_check(_geometry()==original_geometry and demo.town.terrain_surface.fingerprints==original_fingerprints,"undo restores every terrain triangle and local fingerprint exactly")
		_check(absf(demo.state.ground_height(pond)-original_height)<=0.00001,"undo restores authoritative original ground height")
		_ray(pond+Vector2(0.13,0.17),"undo restored dry site")
	await _border_pond()
	var dry_ids := _block_ids()
	demo._after_edit(demo.state.set_house_name("h1","地貌验证小屋"),"history")
	await _wait_edit()
	_check(_block_ids()==dry_ids,"dry construction edit never replaces terrain blocks")
	_check(_identity()==identity and demo.music._players.size()==9 and demo.music._effects.size()==4,"terrain and water edits keep nine PCM and four transient player identities")
	edits.music_clock_elapsed = demo.music._playback_clock()-clock_before
	_check(float(edits.music_clock_elapsed)>1.0,"actual musical transport advances throughout terrain observation")
	await _finish()

func _finish() -> void:
	var result := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"mode":DisplayServer.get_name(),"command":"D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --max-fps 180 --script res://tools/check_creation_terrain_live.gd","views":views,"rays":ray_samples,"roots":root_samples,"edits":edits}
	if demo.town.get("terrain_surface")!=null: result.terrain = demo.town.terrain_surface.stats.duplicate(true)
	var file := FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(result,"\t",true,true))
	file.close()
	print("TERRAIN_LIVE ",JSON.stringify(result))
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
