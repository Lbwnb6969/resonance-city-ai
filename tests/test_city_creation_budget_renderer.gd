extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Layout = preload("res://scripts/world/city_creation_cafe_layout.gd")
const SOURCE := "res://备份/自发巡演前_20261015/额外道路输入实窗/城市作品快照.json"
var checks := 0
var failed := 0
var output: Dictionary = {}

func _initialize() -> void:
	call_deferred("_run")

func check(value: bool, label: String) -> void:
	checks += 1
	if not value:
		failed += 1
		printerr("FAIL "+label)

func _city(data: Dictionary) -> RefCounted:
	var city := State.new()
	check(bool(city.restore(data).ok),"valid captured city")
	return city

func _values(node: Node) -> Array:
	var rows: Array = []
	for child: Node in node.get_children():
		var row: Array = [child.get_class()]
		if child is Node3D: row.append(child.transform)
		if child is MeshInstance3D:
			for surface in range(child.mesh.get_surface_count()): row.append(child.mesh.surface_get_arrays(surface))
		if child is MultiMeshInstance3D:
			row.append(child.multimesh.buffer)
		if child is CollisionShape3D:
			if child.shape is BoxShape3D: row.append(child.shape.size)
			elif child.shape is ConcavePolygonShape3D: row.append(child.shape.get_faces())
		row.append(_values(child))
		rows.append(row)
	return rows

func _run() -> void:
	var original: Dictionary = JSON.parse_string(FileAccess.get_file_as_string(SOURCE))
	var base := original.duplicate(true)
	base.roads = original.roads.slice(0,7).duplicate(true)
	base.next_road_id = 8
	base.high_watermark.road = 7
	base.journey_checkpoint = {}
	var source := FileAccess.get_file_as_string("res://废弃/分帧编辑_2026-10-15/city_creation_renderer.gd.txt").replace("class_name CityCreationRenderer","")
	source = source.replace("var cafes := Cafe.new()","var cafes: RefCounted")
	source = source.replace("var path_edge := PathEdge.new()","var path_edge: RefCounted")
	source = source.replace("const Meadow = preload", "var Meadow = preload")
	source = source.replace("var shore := Shore.new()","var shore: Node3D")
	var legacy := GDScript.new()
	legacy.source_code = source
	check(legacy.reload()==OK,"legacy source compiles")
	var old: Node3D = legacy.new()
	old.cafes = _legacy("city_creation_cafe").new()
	old.path_edge = _legacy("city_creation_path_edge").new()
	old.Meadow = _legacy("city_creation_meadow")
	old.shore = _legacy("city_creation_shore").new()
	var current := Renderer.new()
	root.add_child(old)
	root.add_child(current)
	var old_city := _city(base)
	var current_city := _city(base)
	old.setup(old_city)
	current.setup(current_city)
	await process_frame
	for index in range(7,10):
		var road: Dictionary = original.roads[index]
		var points: Array[Vector2] = []
		for row: Array in road.points: points.append(Vector2(row[0],row[1]))
		check(bool(old_city.add_road(points).ok),"baseline add road")
		check(bool(current_city.add_road(points).ok),"current add road")
		old.rebuild()
		var old_identity: Dictionary = {}
		for id: String in current.road_roots: old_identity[id] = current.road_roots[id].get_instance_id()
		var static_cache_keys: Array = Layout._contexts.keys()
		var static_plan_keys: Array = Layout._cache.keys()
		var token := current.request_budget_rebuild()
		var polls := 0
		var maximum := 0.0
		var ready := false
		var report: Dictionary = {}
		while not ready and polls < 3000:
			report = current.poll_budget_rebuild(3.5,false)
			maximum = maxf(maximum,float(report.work_ms))
			ready = bool(report.ready)
			polls += 1
			if not ready: await process_frame
		check(ready,"budget staging ready "+str(road.id))
		check(Layout._contexts.keys()==static_cache_keys and Layout._cache.keys()==static_plan_keys,"worker never adds a live static layout context")
		for id: String in old_identity: check(current.road_roots[id].get_instance_id()==old_identity[id],"old root preserved until commit "+id)
		report = current.poll_budget_rebuild(3.5,true)
		check(bool(report.committed) and not bool(report.pending),"atomic generation committed")
		check(int(report.committed_generation)==token,"committed latest token")
		for id: String in old.road_roots:
			check(_values(old.road_roots[id])==_values(current.road_roots[id]),"exact road arrays "+str(road.id)+" "+id)
		for id: String in old.house_roots:
			check(_values(old.house_roots[id])==_values(current.house_roots[id]),"exact house geometry "+str(road.id)+" "+id)
		for id: String in old.cafes.roots:
			check(current.cafes.roots.has(id) and _values(old.cafes.roots[id])==_values(current.cafes.roots[id]),"exact cafe geometry "+id)
		check(old.meadow.blocks.keys()==current.meadow.blocks.keys(),"same meadow keys")
		for key: Vector2i in old.meadow.blocks:
			check(_values(old.meadow.blocks[key])==_values(current.meadow.blocks[key]),"exact meadow records "+str(key))
		for key: Vector2i in old.shore.blocks:
			check(current.shore.blocks.has(key) and _values(old.shore.blocks[key])==_values(current.shore.blocks[key]),"exact shore records "+str(key))
		output[str(road.id)] = {"polls":polls,"max_poll_ms":maximum,"commit_ms":report.work_ms,"stats":report.stats}
		print("BUDGET_RENDER_STAGE "+str(road.id)+" "+JSON.stringify(output[str(road.id)]))
	# Replace a running request with undo/redo and retain only its latest city.
	check(bool(current_city.undo().ok),"undo captured road")
	current.request_budget_rebuild()
	check(bool(current_city.redo().ok),"redo captured road")
	var latest := current.request_budget_rebuild()
	var report: Dictionary = {}
	for index in range(4000):
		report = current.poll_budget_rebuild(3.5,true)
		if not report.pending: break
		await process_frame
	check(not report.pending and int(report.committed_generation)==latest,"latest request wins running supersede")
	for id: String in old.road_roots: check(_values(old.road_roots[id])==_values(current.road_roots[id]),"supersede geometry "+id)
	check(bool(current_city.undo().ok),"undo before cancel")
	current.request_budget_rebuild()
	current.cancel_budget_rebuild()
	for index in range(4000):
		report = current.poll_budget_rebuild(3.5,true)
		if not report.pending: break
		await process_frame
	check(not report.pending and int(report.committed_generation)==latest,"cancel discards result")
	check(bool(current_city.redo().ok),"restore canceled road before passage")
	var passage_points: Array[Vector2] = [Vector2(-8,-8),Vector2(-8,-4)]
	check(bool(old_city.add_road(passage_points).ok) and bool(current_city.add_road(passage_points).ok),"actual complete passage road")
	old.rebuild()
	var old_house_id: int = current.house_roots.h1.get_instance_id()
	current.request_budget_rebuild()
	for index in range(4000):
		report = current.poll_budget_rebuild(3.5,false)
		if report.ready: break
		await process_frame
	check(report.ready,"passage staging ready")
	check(current.house_roots.h1.get_instance_id()==old_house_id,"passage preserves old picking root")
	var staged: Node3D = current.budget_rebuild.staging
	for house: Node3D in staged.house_roots.values():
		for body: StaticBody3D in house.find_children("*","StaticBody3D",true,false):
			check(body.collision_layer==0 and body.collision_mask==0,"staged body has no physics participation")
	await physics_frame
	await physics_frame
	var ray := PhysicsRayQueryParameters3D.create(Vector3(-8,0.55,-8),Vector3(-8,0.55,-4),1)
	var before: Dictionary = current.get_world_3d().direct_space_state.intersect_ray(ray)
	check(not before.is_empty() and before.collider.get_meta("house_id","")=="h1","old solid wall persists while ready")
	report = current.poll_budget_rebuild(3.5,true)
	check(report.committed,"passage atomic commit")
	await physics_frame
	await physics_frame
	var after: Dictionary = current.get_world_3d().direct_space_state.intersect_ray(ray)
	check(after.is_empty(),"committed real passage is physically hollow")
	check(_values(old.house_roots.h1)==_values(current.house_roots.h1),"passage house exact arrays and collision shapes")
	var plant_id := str(old.meadow.plant_candidates.keys()[0])
	var plant: Dictionary = {}
	for row: Dictionary in current_city.plants:
		if str(row.id)==plant_id: plant=row
	var erase_points: Array[Vector2] = [Vector2(plant.position[0],plant.position[1])]
	check(old_city.erase_vegetation_stroke(erase_points,0.6).ok and current_city.erase_vegetation_stroke(erase_points,0.6).ok,"erase actual plant")
	old.rebuild()
	await _finish(current)
	check(not current.meadow.plant_candidates.has(plant_id) and not current.meadow.plant_candidate_fingerprints.has(plant_id),"removed plant evicted from geometry caches")
	for key: Vector2i in old.meadow.blocks: check(_values(old.meadow.blocks[key])==_values(current.meadow.blocks[key]),"erased plant meadow exact "+str(key))
	check(old_city.set_house_role("h3","residential").ok and current_city.set_house_role("h3","residential").ok,"remove cafe role")
	old.rebuild()
	await _finish(current)
	check(not current.cafes.roots.has("h3") and not current.cafes.fingerprints.has("h3"),"removed cafe root and fingerprint evicted")
	check(old_city.undo().ok and current_city.undo().ok,"undo cafe removal")
	old.rebuild()
	await _finish(current)
	check(current.cafes.roots.has("h3") and _values(old.cafes.roots.h3)==_values(current.cafes.roots.h3),"same-ID cafe undo restores exact furniture")
	for cycle in range(3):
		var position := Vector2(12.0,-10.0+float(cycle)*3.0)
		var added: Dictionary = current_city.add_house(position)
		check(added.ok,"new real house for cache cycle "+str(cycle))
		await _finish(current)
		var id := str(current_city.houses[-1].id)
		check(current.meadow.entrance_cache.has(id) and current.shore._entrance_cache.has(id),"new house enters current doorway caches")
		check(current_city.remove_house(id).ok,"remove house cache cycle "+str(cycle))
		await _finish(current)
		check(not current.meadow.entrance_cache.has(id) and not current.shore._entrance_cache.has(id),"removed doorway caches are evicted")
		check(current.meadow.entrance_cache.size()==current_city.houses.size() and current.shore._entrance_cache.size()==current_city.houses.size(),"doorway cache size stays bounded by live homes")
	old.queue_free()
	current.queue_free()
	await process_frame
	print("BUDGET_RENDER_RESULT "+JSON.stringify({"ok":failed==0,"checks":checks,"failed":failed,"stages":output}))
	quit(0 if failed==0 else 1)


func _finish(current: Node3D) -> void:
	current.request_budget_rebuild()
	var result := {}
	for index in range(4000):
		result = current.poll_budget_rebuild(3.5,true)
		if not result.pending: break
		await process_frame
	check(not result.pending and result.committed,"additional geometry commit completed")

func _legacy(name: String) -> GDScript:
	var source := FileAccess.get_file_as_string("res://废弃/分帧编辑_2026-10-15/"+name+".gd.txt")
	var script := GDScript.new()
	var lines := source.split("\n")
	if lines[0].begins_with("class_name "): lines[0]=""
	script.source_code = "\n".join(lines)
	check(script.reload()==OK,"archive compiles "+name)
	return script
