extends SceneTree
## CPU distribution and geometry contract. Visual quality is checked separately
## with the real OpenGL scene; this fixture does not replace screenshot review.
const State := preload("res://scripts/world/city_creation_state.gd")
const Meadow := preload("res://scripts/visual/city_creation_meadow.gd")
var checks := 0
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _expect(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label)

func _run() -> void:
	var city := State.new()
	var meadow := Meadow.new()
	meadow.setup(city)
	meadow.record_only = true
	var dirty: Array[Vector2i] = []
	var members := {}
	for x in range(-3, 3):
		for z in range(-2, 2):
			var block := Vector2i(x, z)
			dirty.append(block)
			members[block] = []
	meadow.rebuild(members, dirty)
	var occupied := {}
	var mothers := {}
	var count := 0
	var repeatable := true
	var unique := true
	var finite := true
	var species_min := 1.0
	var species_max := 0.0
	var height_min := 10.0
	var height_max := 0.0
	var max_xz := 0.0
	for block: Vector2i in meadow.base_candidates:
		var candidates: Array = meadow.base_candidates[block]
		repeatable = repeatable and candidates == meadow._build_base_candidates(block)
		for candidate: Dictionary in candidates:
			count += 1
			var at: Vector2 = candidate.at
			unique = unique and not occupied.has(at)
			unique = unique and Vector2i(floori(at.x / 8.0), floori(at.y / 8.0)) == block
			occupied[at] = true
			if not mothers.has(candidate.mother): mothers[candidate.mother] = []
			mothers[candidate.mother].append(candidate)
			var transform: Transform3D = candidate.transform
			finite = finite and transform.is_finite() and is_finite(float(candidate.species))
			species_min = minf(species_min, candidate.species)
			species_max = maxf(species_max, candidate.species)
			height_min = minf(height_min, candidate.scale.y)
			height_max = maxf(height_max, candidate.scale.y)
			max_xz = maxf(max_xz, maxf(candidate.scale.x, candidate.scale.z))
	_expect(repeatable, "identical world input reproduces every candidate and property")
	_expect(unique, "final block ownership has neither duplicated nor missing boundary roots")
	_expect(finite, "world candidate transforms and species are finite")
	_expect(count > 10000 and count < 16000, "twenty-four blocks retain the saturated 0.52m two-to-three-child meadow density")
	_expect(species_min < 0.15 and species_max > 0.85, "town includes broad-leaf and narrow-leaf stands")
	_expect(height_min < 0.55 and height_max > 0.85, "actual transforms include short turf beneath tall stands")
	var coherent := true
	var crossed := 0
	for siblings: Array in mothers.values():
		var blocks := {}
		for sibling: Dictionary in siblings:
			coherent = coherent and sibling.species == siblings[0].species and sibling.tint == siblings[0].tint
			coherent = coherent and absf(sibling.yaw - siblings[0].yaw) <= 0.281
			var at: Vector2 = sibling.at
			blocks[Vector2i(floori(at.x / 8.0), floori(at.y / 8.0))] = true
		if blocks.size() > 1: crossed += 1
	_expect(coherent, "real mother children share species, colour and bounded lean")
	_expect(crossed > 5, "shared mothers survive crossing actual eight metre block boundaries")
	var continuous := true
	var patch_min := 1.0
	var patch_max := 0.0
	for z in range(-14, 15):
		for x in range(-17, 17):
			var at := Vector2(x, z)
			var patch: float = meadow._patch_field(at)
			patch_min = minf(patch_min, patch)
			patch_max = maxf(patch_max, patch)
			continuous = continuous and absf(patch - meadow._patch_field(at + Vector2(0.001, 0))) < 0.002
			continuous = continuous and absf(meadow._patch_yaw(at) - meadow._patch_yaw(at + Vector2(0.25, 0))) < 0.035
	_expect(continuous and patch_max - patch_min > 0.5, "nonperiodic world field is continuous with visible broad patch amplitude")
	var mesh: Mesh = meadow._mesh("lawn")
	_expect(mesh == meadow._mesh("grass"), "lawn and woodland fringe share the same cached mesh")
	_expect(mesh.get_surface_count() == 1 and mesh.get_faces().size() / 3 == 35, "seven five-triangle leaves share one draw surface per meadow block")
	var radius := 0.0
	var geometry_finite := true
	var normals_up := true
	var arrays: Array = mesh.surface_get_arrays(0)
	for index in range(arrays[Mesh.ARRAY_VERTEX].size()):
		var vertex: Vector3 = arrays[Mesh.ARRAY_VERTEX][index]
		var normal: Vector3 = arrays[Mesh.ARRAY_NORMAL][index]
		radius = maxf(radius, Vector2(vertex.x, vertex.z).length())
		geometry_finite = geometry_finite and vertex.is_finite() and normal.is_finite()
		normals_up = normals_up and normal.is_normalized() and normal.y > 0.0
	_expect(geometry_finite and normals_up, "shared geometry has finite vertices and continuous upward leaf normals")
	_expect(radius * max_xz <= 0.30, "bowl-shaped seven-leaf clumps retain a bounded thirty-centimetre horizontal reach")
	var cached_species_zero := true
	var record_species := false
	var mask_channels := true
	for block: Vector2i in meadow.sample_bins:
		for bin: Dictionary in meadow.sample_bins[block]:
			for custom: Color in bin.values(): cached_species_zero = cached_species_zero and custom.a == 0.0
	for block: Vector2i in meadow.base_records:
		for record: Array in meadow.base_records[block]:
			var custom: Color = record[2]
			record_species = record_species or custom.a > 0.5
			mask_channels = mask_channels and custom.b >= 0.0 and custom.b <= 1.0
	_expect(cached_species_zero and record_species, "record morphology never mutates cached clearance colours")
	_expect(mask_channels, "species leaves authoritative RGB obstacle channels intact")
	var plant := {"id": "p_test", "kind": "oak", "position": [-12.0, -10.0], "scale": 1.0, "seed": 137}
	var fringe: Array = meadow._build_plant_candidates(plant)
	_expect(fringe == meadow._build_plant_candidates(plant), "woodland skirts are deterministic")
	var fringe_coherent := true
	for index in range(fringe.size()):
		var mother_index := index - index % 3
		fringe_coherent = fringe_coherent and fringe[index][2] == fringe[mother_index][2]
		fringe_coherent = fringe_coherent and fringe[index][5] == fringe[mother_index][5]
		fringe_coherent = fringe_coherent and fringe[index][5] >= 0.6
	_expect(fringe_coherent, "woodland children share a narrow-leaf mother and colour")
	var original_candidates: Dictionary = meadow.base_candidates.duplicate(true)
	var original_records: Dictionary = meadow.base_records.duplicate(true)
	var original_samples: Dictionary = meadow.sample_bins.duplicate(true)
	meadow.rebuild(members, dirty)
	_expect(meadow.last_changed == 0, "idle preparation rebuilds no blocks")
	_expect(original_records == meadow.base_records and original_samples == meadow.sample_bins, "idle preparation preserves exact records and local sample cache")
	var road := city.add_road([Vector2(14, 12), Vector2(16, 12)])
	_expect(road.ok, "far road fixture uses an actual valid construction")
	meadow.rebuild(members, dirty)
	_expect(original_candidates == meadow.base_candidates, "road edits retain every seeded world candidate")
	_expect(meadow.base_records[Vector2i(-2, -1)] == original_records[Vector2i(-2, -1)], "far road preserves exact untouched block records")
	_expect(meadow.sample_bins[Vector2i(-2, -1)] == original_samples[Vector2i(-2, -1)], "far road preserves untouched spatial sample buckets")
	print("CITY_CREATION_MEADOW_DRIFTS ", JSON.stringify({"ok": failures.is_empty(), "checks": checks,
		"failures": failures, "candidates": count, "boundary_mothers": crossed,
		"species_range": [species_min, species_max], "height_range": [height_min, height_max],
		"patch_range": [patch_min, patch_max], "mesh_radius": radius, "max_scaled_radius": radius * max_xz}))
	meadow.free()
	quit(0 if failures.is_empty() else 1)
