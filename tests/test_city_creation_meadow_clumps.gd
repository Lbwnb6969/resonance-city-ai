extends SceneTree
const State := preload("res://scripts/world/city_creation_state.gd")
const Meadow := preload("res://scripts/visual/city_creation_meadow.gd")
const Mask := preload("res://scripts/visual/city_creation_grass_mask.gd")
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	_run.call_deferred()

func _expect(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label)

func _members(state: RefCounted, dirty: Array[Vector2i]) -> Dictionary:
	var result := {}
	for block in dirty: result[block] = []
	for plant: Dictionary in state.plants:
		var at := Vector2(float(plant.position[0]), float(plant.position[1]))
		var block := Vector2i(floori(at.x / 8.0), floori(at.y / 8.0))
		if result.has(block) and state.vegetation_visible(plant): result[block].append(plant)
	return result

func _lawn_ids(meadow: Node3D) -> Dictionary:
	var result := {}
	for block: Vector2i in meadow.blocks:
		var lawn: Node = meadow.blocks[block].get_node_or_null("Meadow_lawn")
		if lawn != null: result[block] = lawn.get_instance_id()
	return result

func _run() -> void:
	var state := State.new()
	state.initialize()
	var meadow := Meadow.new()
	meadow.setup(state)
	root.add_child(meadow)
	var dirty: Array[Vector2i] = []
	for x in range(-3, 3):
		for z in range(-2, 2): dirty.append(Vector2i(x, z))
	var members := _members(state, dirty)
	meadow.rebuild(members, dirty)
	var diagnostics := meadow.diagnostics()
	var initial_records: Dictionary = meadow.base_records.duplicate(true)
	var initial_candidates: Dictionary = meadow.base_candidates.duplicate(true)
	var initial_accents: Dictionary = meadow.base_accents.duplicate(true)
	var ids := _lawn_ids(meadow)
	var occupied := {}
	var mothers := {}
	var candidate_count := 0
	var correct_ownership := true
	var repeatable := true
	var clustered := true
	for block: Vector2i in meadow.base_candidates:
		var candidates: Array = meadow.base_candidates[block]
		repeatable = repeatable and candidates == meadow._build_base_candidates(block)
		for candidate: Dictionary in candidates:
			candidate_count += 1
			var at: Vector2 = candidate.at
			correct_ownership = correct_ownership and Vector2i(floori(at.x / 8.0), floori(at.y / 8.0)) == block
			correct_ownership = correct_ownership and not occupied.has(at)
			occupied[at] = true
			if not mothers.has(candidate.mother): mothers[candidate.mother] = []
			mothers[candidate.mother].append(candidate)
	var split_mothers := 0
	for siblings: Array in mothers.values():
		var sibling_blocks := {}
		for candidate: Dictionary in siblings:
			var at: Vector2 = candidate.at
			sibling_blocks[Vector2i(floori(at.x / 8.0), floori(at.y / 8.0))] = true
			clustered = clustered and absf(candidate.yaw - siblings[0].yaw) < 0.361
			clustered = clustered and candidate.tint == siblings[0].tint
		if sibling_blocks.size() > 1: split_mothers += 1
	_expect(correct_ownership, "all child roots uniquely owned by final world block")
	_expect(split_mothers > 5, "ownership includes mothers whose children straddle block boundaries")
	_expect(repeatable, "world seeds reproduce all candidate fields exactly")
	_expect(clustered, "siblings share smooth main direction and colour")
	_expect(candidate_count > 8000 and candidate_count < 18000, "dense mother/child meadow stays bounded over twenty-four blocks")
	var smooth_direction := true
	var patch_min := 1.0
	var patch_max := 0.0
	for z in range(-14, 15):
		for x in range(-17, 17):
			var at := Vector2(x, z)
			smooth_direction = smooth_direction and absf(meadow._patch_yaw(at) - meadow._patch_yaw(at + Vector2(0.25, 0.0))) < 0.035
			var patch: float = meadow._patch_field(at)
			patch_min = minf(patch_min, patch)
			patch_max = maxf(patch_max, patch)
	_expect(smooth_direction and patch_max - patch_min > 0.5, "continuous broad direction/density field varies across town")
	var mesh: Mesh = meadow._mesh("lawn")
	_expect(mesh.get_faces().size() / 3 == 110, "seven V-folded leaves omit collapsed tip faces and retain basal trefoil")
	_expect(meadow._mesh("lawn_lod").get_faces().size()/3 == 20, "far mesh retains two leaves from each ring")
	_expect(mesh == meadow._mesh("lawn") and mesh == meadow._mesh("grass"), "lawn and fringe share one cached ribbon mesh")
	var arrays: Array = mesh.surface_get_arrays(0)
	var tip_points := {}
	var tips := 0
	var low_tips := 0
	var high_tips := 0
	var tip_directions := {}
	var continuous_normals := true
	var creases:=0;var finite_faces:=true;var aligned_faces:=true;var face_ids:PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
	for face in range(0,face_ids.size(),3):
		var a:Vector3=arrays[Mesh.ARRAY_VERTEX][face_ids[face]];var b:Vector3=arrays[Mesh.ARRAY_VERTEX][face_ids[face+1]];var c:Vector3=arrays[Mesh.ARRAY_VERTEX][face_ids[face+2]]
		var area:Vector3=(c-a).cross(b-a)
		finite_faces=finite_faces and area.is_finite() and area.length()>1e-8
		if arrays[Mesh.ARRAY_TEX_UV][face_ids[face]].x>0.:
			for offset in range(3):aligned_faces=aligned_faces and area.normalized().dot(arrays[Mesh.ARRAY_NORMAL][face_ids[face+offset]])>0.
	_expect(finite_faces and aligned_faces,"all actual V triangles have area and clockwise front normals agree with each face")
	var normals_by_vertex := {}
	for index in range(arrays[Mesh.ARRAY_VERTEX].size()):
		var at: Vector3 = arrays[Mesh.ARRAY_VERTEX][index]
		var uv: Vector2 = arrays[Mesh.ARRAY_TEX_UV][index]
		var normal: Vector3 = arrays[Mesh.ARRAY_NORMAL][index]
		continuous_normals = continuous_normals and normal.is_normalized() and normal.is_finite()
		if normals_by_vertex.has(at) and not normal.is_equal_approx(normals_by_vertex[at]):creases+=1
		normals_by_vertex[at] = normal
		var tip := false
		for blade in range(7):
			var angle:float=[.08,.95,2.38,4.12,.45,2.05,3.65][blade]
			var outward:=Vector3(cos(angle),0,sin(angle))
			var height:float=[.16,.19,.17,.18,.22,.27,.245][blade]
			var reach:float=[.16,.17,.165,.175,.07,.06,.075][blade]
			var expected:=preload("res://scripts/visual/city_creation_meadow_fold.gd")._center(outward*.006,outward,height,reach,1.,blade)
			if at.distance_to(expected)<.000001:tip=true
		if tip and not tip_points.has(at):
			tip_points[at]=true
			tips += 1
			if at.y < 0.16: low_tips += 1
			else: high_tips += 1
			tip_directions[Vector2i(signf(at.x),signf(at.z))] = true
	_expect(tips == 7 and low_tips == 4 and high_tips == 3 and tip_directions.size() >= 3, "seven actual tapered tips retain four low outer and three higher inner leaves")
	_expect(continuous_normals and creases>0, "all normals finite and normalized; deliberate ridge keeps distinct slope normals")
	var legal := true
	var custom_matches := true
	var soft_edge := 0
	var lawn_count := 0
	for block: Vector2i in meadow.base_records:
		var mask := Mask.new()
		mask.setup(state, block)
		for record: Array in meadow.base_records[block]:
			lawn_count += 1
			var transform: Transform3D = record[0]
			var at := Vector2(transform.origin.x, transform.origin.z) + Vector2(block) * 8.0
			legal = legal and mask.visible(at, 0.18)
			var edge: Dictionary = mask.continuous_edge(at)
			var custom: Color = record[2]
			custom_matches = custom_matches and absf(custom.b - smoothstep(0.0, 0.55, edge.clearance)) < 0.00001
			custom_matches = custom_matches and Vector2(custom.r, custom.g).distance_to(edge.push) < 0.00001
			if custom.b > 0.0 and custom.b < 0.999: soft_edge += 1
	_expect(legal, "every rendered root retains authoritative obstacle clearance")
	_expect(custom_matches and soft_edge > 30, "many real road/wall/water edge instances encode continuous height and outward push")
	_expect(lawn_count == diagnostics.base_grass, "diagnostics count actual grass instances")
	var first_block: Vector2i = ids.keys()[0]
	var multi: MultiMesh = meadow.blocks[first_block].get_node("Meadow_lawn").multimesh
	var gpu_custom_matches := multi.use_custom_data
	var max_custom_error := 0.0
	for block: Vector2i in ids:
		var gpu: MultiMesh = meadow.blocks[block].get_node("Meadow_lawn").multimesh
		for index in range(gpu.instance_count):
			var actual: Color = gpu.get_instance_custom_data(index)
			var expected: Color = meadow.base_records[block][index][2]
			# Compatibility custom buffers use half-float storage; test every
			# signed component against its bounded representational precision.
			for component in range(4): max_custom_error = maxf(max_custom_error, absf(actual[component] - expected[component]))
			gpu_custom_matches = gpu_custom_matches and max_custom_error <= 0.001
	_expect(gpu_custom_matches, "all signed custom edge values reach actual OpenGL MultiMesh buffer")
	meadow.set_view_scale(25.0)
	_expect(meadow.detail > 0.75 and meadow.detail < 0.90, "default creation camera retains full meadow volume")
	meadow.set_view_scale(50.0)
	_expect(meadow.detail == 0.0, "far camera hides lawn detail without rebuilding")
	meadow.set_view_scale(10.0)
	state.houses[0].name = "草绒河湾"
	state.plants[0].scale = float(state.plants[0].scale) * 0.96
	meadow.rebuild(_members(state, dirty), dirty)
	_expect(ids == _lawn_ids(meadow), "name, plant and view edits retain actual grass GPU nodes")
	_expect(initial_candidates == meadow.base_candidates, "non-obstacle edits retain all world candidates")
	_expect(initial_accents == meadow.base_accents, "plant accents do not mutate or duplicate cached meadow accents")
	var points: Array[Vector2] = [Vector2(-15, -12), Vector2(-14, -8)]
	_expect(state.add_road(points).ok, "real road edit fixture")
	meadow.rebuild(_members(state, dirty), dirty)
	_expect(initial_candidates == meadow.base_candidates, "road edits requery candidates instead of resampling")
	_expect(initial_records != meadow.base_records, "real road changes mask and soft-edge data")
	var changed := meadow.last_changed
	_expect(changed > 0 and changed < dirty.size(), "road updates only dependent grass blocks")
	_expect(state.undo().ok, "road undo fixture")
	meadow.rebuild(_members(state, dirty), dirty)
	_expect(initial_records == meadow.base_records, "undo restores exact transforms/tints/edge values")
	print("CITY_CREATION_MEADOW_CLUMPS ", JSON.stringify({"ok": failures.is_empty(), "checks": checks,
		"failures": failures, "candidates": candidate_count, "lawn_instances": lawn_count,
		"boundary_mothers": split_mothers, "soft_edge_instances": soft_edge,
		"road_changed_blocks": changed, "initial_ms": diagnostics.elapsed_ms,
		"max_custom_gpu_error": max_custom_error}))
	meadow.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
