extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Stroke = preload("res://scripts/world/city_creation_stroke.gd")
var failures: Array[String] = []
var vertex_checks := 0
var normal_checks := 0
var uv_checks := 0
var mask_checks := 0
var max_position_error := 0.0
var max_normal_error := 0.0

func _initialize() -> void:
	_run.call_deferred()

func _expect(condition: bool, label: String) -> void:
	if not condition and not failures.has(label): failures.append(label)

func _material_key(material: Material) -> String:
	if material is ShaderMaterial: return str(material.shader.resource_path)
	return str(material.albedo_color)

func _surfaces(node: Node3D) -> Dictionary:
	var result := {}
	for instance: MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		# Soft shoulders intentionally replace the old terrestrial box curbs.
		# Keep this frozen comparison on the unchanged road deck and bridge kit.
		if instance.name == "SoftRoadEdge": continue
		if instance.material_override is StandardMaterial3D and instance.material_override.albedo_color == Color("bcb295"): continue
		result[_material_key(instance.material_override)] = instance.mesh.surface_get_arrays(0)
	return result

func _compare_meshes(town: Node3D, legacy: Node3D, label: String) -> void:
	for id: String in town.road_roots:
		var a := _surfaces(town.road_roots[id])
		var b := _surfaces(legacy.road_roots[id])
		_expect(a.size()==b.size(),label+" "+id+" same material batches")
		for key: String in a:
			_expect(b.has(key),label+" same material")
			if not b.has(key): continue
			var arrays_a: Array = a[key]
			var arrays_b: Array = b[key]
			var indices_a: PackedInt32Array = arrays_a[Mesh.ARRAY_INDEX]
			var indices_b: PackedInt32Array = arrays_b[Mesh.ARRAY_INDEX]
			_expect(indices_a.size()==indices_b.size(),label+" "+id+" same triangle count")
			if indices_a.size()!=indices_b.size(): continue
			for offset in range(indices_a.size()):
				var index_a := indices_a[offset]
				var index_b := indices_b[offset]
				var position_error: float = arrays_a[Mesh.ARRAY_VERTEX][index_a].distance_to(arrays_b[Mesh.ARRAY_VERTEX][index_b])
				max_position_error = maxf(max_position_error,position_error)
				_expect(position_error<0.00002,label+" "+id+" triangle positions/order match")
				vertex_checks += 1
				var normal_error: float = arrays_a[Mesh.ARRAY_NORMAL][index_a].distance_to(arrays_b[Mesh.ARRAY_NORMAL][index_b])
				max_normal_error = maxf(max_normal_error,normal_error)
				# One packed octahedral-normal step: applying nonuniform unit-box
				# scale can select the neighboring code while positions remain exact.
				_expect(normal_error<0.0002,label+" "+id+" transformed normals match within packing precision")
				normal_checks += 1
				if arrays_a[Mesh.ARRAY_TEX_UV] is PackedVector2Array:
					_expect(arrays_a[Mesh.ARRAY_TEX_UV][index_a].distance_to(arrays_b[Mesh.ARRAY_TEX_UV][index_b])<0.00001,label+" "+id+" box UV match")
					uv_checks += 1

func _run() -> void:
	# Frozen pre-change renderer is an independent brute-force geometry oracle.
	var script := GDScript.new()
	script.source_code = FileAccess.get_file_as_string("res://废弃/道路直接合批_2026-10-14/city_creation_renderer.gd.txt").replace("class_name CityCreationRenderer","")
	if script.reload()!=OK:
		push_error("Cannot load frozen road geometry oracle")
		quit(1)
		return
	var state := State.new()
	state.initialize()
	var town := Renderer.new()
	var legacy: Node3D = script.new()
	root.add_child(town)
	root.add_child(legacy)
	town.setup(state)
	legacy.setup(state)
	_compare_meshes(town,legacy,"seed")
	var points: Array[Vector2] = [Vector2(3,-10),Vector2(7,-10),Vector2(11,-9)]
	_expect(state.add_water(points,2.8,"channel").ok,"water fixture")
	points = [Vector2(11,-9)]
	_expect(state.add_water(points,4,"pond").ok,"pond fixture")
	var held := {}
	for id: String in town.road_roots: held[id] = town.road_roots[id].get_instance_id()
	points = [Vector2(-11,9),Vector2(-14,9),Vector2(-15,5),Vector2(-14,1)]
	_expect(state.add_road(Stroke.road_points(points)).ok,"curved fixture")
	town.rebuild()
	legacy.rebuild()
	_compare_meshes(town,legacy,"curve")
	for id: String in held:
		if id!="r1": _expect(town.road_roots[id].get_instance_id()==held[id],"curved road keeps unrelated "+id)
	points = [Vector2(-11,11),Vector2(9,11)]
	_expect(state.add_road(points).ok,"bridge fixture")
	town.rebuild()
	legacy.rebuild()
	_compare_meshes(town,legacy,"bridge")
	for road: Dictionary in state.roads:
		_expect(town._road_join_signature(road)==legacy._road_join_signature(road),"exact join dependencies "+str(road.id))
		for other: Dictionary in state.roads:
			_expect(town._roads_touch(road,other)==legacy._roads_touch(road,other),"exact pair touch")
		for z in range(-32,33):
			for x in range(-36,37):
				var at := Vector2(float(x)*0.5+0.017,float(z)*0.5+0.029)
				_expect(town._inside_other_road(at,str(road.id))==legacy._inside_other_road(at,str(road.id)),"indexed curb masking equals brute force")
				mask_checks += 1
		# Exact capsule boundaries, including negative coordinates and bin seams.
		for segment: Dictionary in town.road_geometry_cache[road.id].segments:
			var center: Vector2 = (segment.a+segment.b)*0.5
			var normal: Vector2 = (segment.b-segment.a).normalized().orthogonal()
			for delta in [-0.00001,0.0,0.00001]:
				for side in [-1.0,1.0]:
					var at: Vector2 = center+normal*(float(road.width)*0.5+0.07+delta)*side
					_expect(town._inside_other_road(at,"")==legacy._inside_other_road(at,""),"capsule boundary matches brute force")
					mask_checks += 1
	_expect(state.undo().ok,"bridge undo")
	town.rebuild()
	legacy.rebuild()
	_expect(not town.road_geometry_cache.has("r8"),"removed road clears segment cache")
	_compare_meshes(town,legacy,"undo")
	_expect(state.redo().ok,"bridge redo")
	town.rebuild()
	legacy.rebuild()
	_compare_meshes(town,legacy,"redo")
	# A caller can populate geometry through the height signature before rebuild.
	# The independently keyed outline must still detect changed source points.
	state.roads[0].points[0][1] = float(state.roads[0].points[0][1])-0.15
	town._road_water_signature(state.roads[0])
	town.rebuild()
	legacy.rebuild()
	_compare_meshes(town,legacy,"previsited_geometry")
	var report := {"ok":failures.is_empty(),"failures":failures,"vertex_checks":vertex_checks,"normal_checks":normal_checks,"uv_checks":uv_checks,"mask_checks":mask_checks,"max_position_error":max_position_error,"max_normal_error":max_normal_error}
	var output := "res://验证记录/柔和路缘_2026-10-15/road_core_contract.json"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output.get_base_dir()))
	var file := FileAccess.open(output,FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("CITY_CREATION_ROAD_BATCHES ",JSON.stringify(report))
	town.queue_free()
	legacy.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
