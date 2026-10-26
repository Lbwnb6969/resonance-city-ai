class_name CityCreationMeadow
extends Node3D
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const SafeInstances = preload("res://scripts/visual/city_creation_safe_instances.gd")
const DetailLod=preload("res://scripts/visual/city_creation_detail_lod.gd")
## Original low-detail meadow exemplars. Tiny Glade's recovered Grass2
## records inform deterministic clumps, obstacle removal and tip-weighted
## wind. CPU meshes and records are authored here; the shared material also
## samples the extracted Grass2 world tint, with its source recorded in 资源.
const BLOCK_SIZE := 8.0
const Bounds := preload("res://scripts/world/city_creation_bounds.gd")
const WORLD_RECT := Bounds.WORLD_RECT
const BASE_SPACING := 0.52
const LAWN_SAMPLE_SCALE := 0.18
const FRINGE_SAMPLE_SCALE := 0.25
const PALACE_FLOWER_RADIUS := 14.0
const GrassMask := preload("res://scripts/visual/city_creation_grass_mask.gd")
const Frontage := preload("res://scripts/world/city_creation_frontage.gd")
const LawnShader = preload("res://scripts/visual/shaders/creation_lawn.gdshader")
const Outcrops = preload("res://scripts/visual/city_creation_outcrops.gd")
const ShorePalette = preload("res://scripts/visual/city_creation_shore_palette.gd")
var state: RefCounted
# CPU preparation owns independent caches and emits records, never GPU objects.
var record_only := false
var prepared_blocks: Dictionary = {}
var blocks: Dictionary = {}
var block_counts: Dictionary = {}
var base_counts: Dictionary = {}
var base_records: Dictionary = {}
var base_candidates: Dictionary = {}
var base_accents: Dictionary = {}
var plant_candidates: Dictionary = {}
var plant_candidate_fingerprints: Dictionary = {}
var query_masks: Dictionary = {}
var query_fingerprints: Dictionary = {}
var sample_bins: Dictionary = {}
var sample_obstacles: Dictionary = {}
var entrance_cache: Dictionary = {}
var base_fingerprints: Dictionary = {}
var fingerprints: Dictionary = {}
var meshes: Dictionary = {}
var materials: Dictionary = {}
var last_changed := 0
var elapsed_ms := 0.0
var detail := 1.0
var water_field: Texture2DArray
var stage_ms: Dictionary = {}
var obstacle_index:RefCounted
var palace_centers: Array[Vector2]=[]
var palace_flower_counts: Dictionary={}

func setup(city_state: RefCounted) -> void:
	state = city_state
	name = "MeadowBlocks"

func rebuild(visible_by_block: Dictionary, dirty: Array[Vector2i], shared_masks: Dictionary = {}, entrances_by_house: Dictionary = {}) -> void:
	var started := Time.get_ticks_usec()
	state.prepare_ground_height()
	last_changed = 0
	stage_ms = {"fingerprint": 0.0, "mask": 0.0, "base": 0.0, "fringe": 0.0, "upload": 0.0}
	# Plant tuples depend on authored seed/position/scale, never on obstacles.
	# Keep them across road edits; discard removed IDs without retaining history.
	var live_plants := {}
	for plant: Dictionary in state.get("plants"): live_plants[str(plant.id)] = true
	for id: String in plant_candidates.keys():
		if not live_plants.has(id):
			_evict_plant_samples(plant_candidates[id])
			plant_candidates.erase(id)
			plant_candidate_fingerprints.erase(id)
	var entrances := _entrances_by_house() if entrances_by_house.is_empty() else entrances_by_house
	var centers: Array[Vector2]=[]
	for house: Dictionary in state.houses:
		if house.get("signature","")=="botanical_palace":centers.append(Frame.point(house,Vector2(house.origin[0],house.origin[1])+Vector2(0,1.8)))
	var candidates: Array[Vector2i]=dirty.duplicate()
	if centers!=palace_centers:
		# Moving/removing a palace invalidates both flower halos, including
		# empty meadow blocks outside the building's ordinary edit bounds.
		for center: Vector2 in centers+palace_centers:
			for x in range(floori((center.x-PALACE_FLOWER_RADIUS)/BLOCK_SIZE),ceili((center.x+PALACE_FLOWER_RADIUS)/BLOCK_SIZE)):
				for z in range(floori((center.y-PALACE_FLOWER_RADIUS)/BLOCK_SIZE),ceili((center.y+PALACE_FLOWER_RADIUS)/BLOCK_SIZE)):
					var block:=Vector2i(x,z)
					if WORLD_RECT.intersects(Rect2(Vector2(block)*BLOCK_SIZE,Vector2.ONE*BLOCK_SIZE)) and not candidates.has(block):candidates.append(block)
	palace_centers=centers
	obstacle_index=preload("res://scripts/visual/city_creation_ground_obstacle_bins.gd").new()
	obstacle_index.prepare(state,entrances)
	for block: Vector2i in candidates:
		var stage_started := Time.get_ticks_usec()
		var members: Array = visible_by_block.get(block, [])
		var obstacles:Array=obstacle_index.fingerprint(block)
		var obstacle_fingerprint := hash(obstacles)
		var height_bounds := Rect2(Vector2(block)*BLOCK_SIZE,Vector2.ONE*BLOCK_SIZE).grow(1.0)
		var height_signature: int = state._ground_terrain.region_signature(height_bounds)
		# Keep planar masking reusable while replacing every height-baked record,
		# including the retained short lawn and its cached flower/grass accents.
		var base_fingerprint := hash([obstacle_fingerprint,height_signature])
		var rock_plants := Outcrops.plant_rows(state,block)
		var local_palaces: Array[Vector2]=[]
		for center: Vector2 in centers:
			if height_bounds.has_point(center) or center.distance_to(center.clamp(height_bounds.position,height_bounds.end))<=PALACE_FLOWER_RADIUS:local_palaces.append(center)
		var fingerprint := hash([members,base_fingerprint,rock_plants,local_palaces])
		stage_ms.fingerprint += float(Time.get_ticks_usec() - stage_started) / 1000.0
		if fingerprints.get(block, -1) == fingerprint:
			continue
		fingerprints[block] = fingerprint
		var retained_lawn: MultiMeshInstance3D
		if not record_only and base_fingerprints.get(block,-1) == base_fingerprint and blocks.has(block):
			retained_lawn = blocks[block].get_node_or_null("Meadow_lawn")
			if retained_lawn != null: blocks[block].remove_child(retained_lawn)
		if not record_only and blocks.has(block):
			var old: Node3D = blocks[block]
			remove_child(old)
			old.queue_free()
			blocks.erase(block)
		block_counts.erase(block)
		base_counts.erase(block)
		var root: Node3D
		if not record_only:
			root = Node3D.new()
			root.name = "Meadow_%d_%d" % [block.x, block.y]
			root.position = Vector3(float(block.x) * BLOCK_SIZE, 0.0, float(block.y) * BLOCK_SIZE)
			root.set_meta("meadow_block", block)
			if retained_lawn != null: root.add_child(retained_lawn)
		var batches := {"lawn": [], "grass": [], "flower": [], "stone": [], "boulder_a":[], "boulder_b":[]}
		# Build a spatial index only on edits; grass samples inspect nearby
		# footprints and segments instead of scanning the whole town.
		var query_state: GrassMask
		stage_started = Time.get_ticks_usec()
		if shared_masks.has(block): query_state = shared_masks[block]
		elif query_fingerprints.get(block, -1) == obstacle_fingerprint:
			query_state = query_masks[block]
		else:
			query_state = GrassMask.new()
			query_state.setup(state,block,entrances,obstacle_index)
		query_masks[block] = query_state
		query_fingerprints[block] = obstacle_fingerprint
		shared_masks[block] = query_state
		_prepare_samples(block, obstacles)
		stage_ms.mask += float(Time.get_ticks_usec() - stage_started) / 1000.0
		stage_started = Time.get_ticks_usec()
		if base_fingerprints.get(block,-1) != base_fingerprint:
			var accents := {"grass": [], "flower": []}
			_add_short_meadow(block,batches.lawn,query_state,accents)
			base_records[block] = batches.lawn
			base_accents[block] = accents
			base_fingerprints[block] = base_fingerprint
		else: batches.lawn = base_records[block]
		for part: String in base_accents.get(block, {}):
			batches[part].append_array(base_accents[block][part])
		base_counts[block] = batches.lawn.size()
		stage_ms.base += float(Time.get_ticks_usec() - stage_started) / 1000.0
		stage_started = Time.get_ticks_usec()
		for plant: Dictionary in members:
			_add_plant_clumps(block, plant, batches, query_state)
		palace_flower_counts[block]=_add_palace_flowers(block,batches.flower,query_state,local_palaces)
		var rocks := Outcrops.records(state,block,query_state,rock_plants)
		batches.boulder_a = rocks.boulder_a
		batches.boulder_b = rocks.boulder_b
		stage_ms.fringe += float(Time.get_ticks_usec() - stage_started) / 1000.0
		stage_started = Time.get_ticks_usec()
		var count := 0
		for part: String in batches:
			var records: Array = batches[part]
			count += records.size()
			if part == "lawn" and retained_lawn != null: continue
			if not record_only: _make_batch(root, part, records)
		stage_ms.upload += float(Time.get_ticks_usec() - stage_started) / 1000.0
		if record_only:
			prepared_blocks[block] = batches
			if count > 0: block_counts[block] = count
		elif count > 0:
			add_child(root)
			blocks[block] = root
			block_counts[block] = count
		else:
			root.free()
		last_changed += 1
	elapsed_ms = float(Time.get_ticks_usec() - started) / 1000.0

func _add_palace_flowers(block: Vector2i,flowers: Array,mask: GrassMask,centers: Array[Vector2])->int:
	if centers.is_empty():return 0
	var original_count:=flowers.size()
	var origin:=Vector2(block)*BLOCK_SIZE
	var palette: Array[Color]=[Color("f6f1de"),Color("f2c14e"),Color("b8a6d9")]
	for index in range(original_count):
		var record: Array=flowers[index]
		var original: Transform3D=record[0]
		var at:=origin+Vector2(original.origin.x,original.origin.z)
		var nearby:=false
		for center: Vector2 in centers:
			if at.distance_squared_to(center)<=PALACE_FLOWER_RADIUS*PALACE_FLOWER_RADIUS:nearby=true;break
		if not nearby:continue
		var seed_value:=_lattice_hash(roundi(at.x*1000.),roundi(at.y*1000.))
		var angle:=float(seed_value&65535)/65535.*TAU
		var twin_at:=at
		for attempt in range(8):
			var candidate:=at+Vector2.from_angle(angle+attempt*TAU/8.)*.16
			if _candidate_visible(block,candidate,mask,FRINGE_SAMPLE_SCALE) and state._ground_terrain.rockiness_at(candidate)<.35:
				twin_at=candidate;break
		var twin:=original
		twin.basis=Basis(Vector3.UP,.7)*original.basis.scaled(Vector3.ONE*.94)
		twin.origin=Vector3(twin_at.x-origin.x,state.ground_height(twin_at)+.014,twin_at.y-origin.y)
		flowers.append([twin,palette[posmod(seed_value,3)],record[2]])
	return flowers.size()-original_count

func diagnostics() -> Dictionary:
	var count := 0
	var short_grass := 0
	for amount: int in block_counts.values():
		count += amount
	for amount: int in base_counts.values():
		short_grass += amount
	return {"blocks": blocks.size(), "instances": count,
		"base_grass": short_grass, "clumps": count - short_grass,
		"last_changed": last_changed, "elapsed_ms": elapsed_ms, "stage_ms": stage_ms.duplicate()}

func set_view_scale(zoom: float) -> void:
	var next_detail := 1.0-smoothstep(16.0,48.0,zoom)
	if detail == next_detail: return
	detail = next_detail
	apply_view_detail()

func apply_view_detail() -> void:
	if materials.has("lawn"): materials.lawn.set_shader_parameter("detail",detail)
	for root: Node3D in blocks.values():
		var lawn := root.get_node_or_null("Meadow_lawn") as MultiMeshInstance3D
		if lawn != null: _apply_lawn_detail(lawn.multimesh)

func _apply_lawn_detail(multi: MultiMesh) -> void:
	multi.mesh = _mesh("lawn_lod" if detail <= 0.84375 else "lawn")
	multi.visible_instance_count = 0 if detail <= 0.0 else int(multi.get_meta("valid_count",multi.instance_count))

func set_water_field(texture: Texture2DArray) -> void:
	water_field = texture
	for part in ["lawn", "grass"]:
		if materials.has(part): materials[part].set_shader_parameter("water_field",texture)

func _add_short_meadow(block: Vector2i, records: Array, query_state: GrassMask, accents: Dictionary = {}) -> int:
	var first := records.size()
	if not base_candidates.has(block):
		base_candidates[block] = _build_base_candidates(block)
	for candidate: Dictionary in base_candidates[block]:
		var at: Vector2 = candidate.at
		var custom := _sample(block, at, query_state, LAWN_SAMPLE_SCALE)
		if custom.b < 0.0: continue
		var rockiness: float = state._ground_terrain.rockiness_at(at)
		if not Outcrops.grass_kept(at,rockiness): continue
		custom.b *= lerpf(1.0,0.25,rockiness)
		# _sample caches obstacle data only. Each record owns its species;
		# never put morphology into the shared clearance cache.
		custom.a = candidate.species
		records.append([_grounded_transform(candidate.transform, at), candidate.tint, custom])
		if not accents.is_empty():
			if candidate.accent:_append(accents.grass, block, at, Vector3(1.0, 0.90, 1.0), candidate.yaw, candidate.tint, -0.003, custom)
			if candidate.wildflower and rockiness<0.35:
				_append(accents.flower, block, at, Vector3.ONE * 0.88,
					candidate.yaw, candidate.flower_tint, -0.003)
	return records.size() - first

func _patch_field(at: Vector2) -> float:
	# World-space value noise has no trigonometric stripes and no block seam.
	# A broad wet/lush field carries a much weaker, shorter-scale variation.
	var broad := _value_noise(at * 0.19 + Vector2(17.3, -23.1))
	var small := _value_noise(at * 0.43 + Vector2(-41.7, 8.2))
	return clampf(0.5 + (broad * 0.76 + small * 0.24 - 0.5) * 1.55, 0.0, 1.0)

func _patch_yaw(at: Vector2) -> float:
	return 0.50 + (_value_noise(at * 0.075 + Vector2(31.1, -17.5)) - 0.5) * 1.2 + \
		(_value_noise(at * 0.13 + Vector2(-7.2, 54.8)) - 0.5) * 0.4

func _species_field(at: Vector2) -> float:
	return smoothstep(0.28, 0.76, _value_noise(at * 0.25 + Vector2(-32.4, 11.9)))

func _value_noise(at: Vector2) -> float:
	var x := floori(at.x)
	var z := floori(at.y)
	var local := at - Vector2(x, z)
	# Quintic interpolation gives a continuous derivative across lattice edges.
	var blend := local * local * local * (local * (local * 6.0 - Vector2.ONE * 15.0) + Vector2.ONE * 10.0)
	var a := float(_lattice_hash(x, z) & 65535) / 65535.0
	var b := float(_lattice_hash(x + 1, z) & 65535) / 65535.0
	var c := float(_lattice_hash(x, z + 1) & 65535) / 65535.0
	var d := float(_lattice_hash(x + 1, z + 1) & 65535) / 65535.0
	return lerpf(lerpf(a, b, blend.x), lerpf(c, d, blend.x), blend.y)

func _build_base_candidates(block: Vector2i) -> Array:
	var records: Array = []
	var origin := Vector2(block) * BLOCK_SIZE
	# Mothers belong to the world lattice, children to their final block.
	# The search margin includes mother jitter and the entire child reach.
	var start_x := floori(origin.x / BASE_SPACING) - 1
	var start_z := floori(origin.y / BASE_SPACING) - 1
	var end_x := ceili((origin.x + BLOCK_SIZE) / BASE_SPACING) + 1
	var end_z := ceili((origin.y + BLOCK_SIZE) / BASE_SPACING) + 1
	var dark := Color("67845b")
	var light := Color("7d9666")
	var flower_palette := [Color("f6f1de"), Color("f2c14e"), Color("b8a6d9"), Color("e8a096")]
	for z in range(start_z, end_z):
		for x in range(start_x, end_x):
			var bits := _lattice_hash(x, z)
			var jitter_x := (float(bits & 1023) / 1023.0 - 0.5) * 0.58
			var jitter_z := (float((bits >> 10) & 1023) / 1023.0 - 0.5) * 0.58
			var mother := Vector2((float(x) + 0.5) * BASE_SPACING + jitter_x,
				(float(z) + 0.5) * BASE_SPACING + jitter_z)
			var patch := _patch_field(mother)
			var density := 0.62 + patch * 0.32
			if float((bits >> 20) & 1023) / 1023.0 > density: continue
			var yaw := _patch_yaw(mother)
			var species := _species_field(mother)
			var tint := dark.lerp(light, patch)
			var rng := RandomNumberGenerator.new()
			rng.seed = bits
			var children := 3 if patch > 0.64 else 2
			var tuft_height := lerpf(0.32, 0.86, smoothstep(0.20, 0.80, patch))
			for child in range(children):
				# Irregular elliptical drifts replace identical left/right wings.
				# The broad patch controls height, not an increased root count.
				var offset_angle := rng.randf() * TAU
				var offset_radius := sqrt(rng.randf())
				var offset := Vector2(cos(offset_angle) * 0.25, sin(offset_angle) * 0.21) * offset_radius
				# Retain the same random draws and child identities; the first child
				# fills its mother's centre instead of drifting away with its siblings.
				if child == 0: offset *= 0.18
				var at := mother + offset.rotated(-yaw)
				var height := tuft_height * rng.randf_range(0.90, 1.08)
				var width := rng.randf_range(0.84, 1.10)*1.18
				var child_yaw := yaw + rng.randf_range(-0.14, 0.14)
				var accent := child == 0 and patch > 0.62 and (bits & 255) < 22
				var flower := (bits >> 8) % 3 != 0
				# Flowers occupy open short meadow too; tall grass accents keep
				# their denser-patch gate. One mother owns each tiny bloom trio.
				var wildflower:=child==0 and patch>.40 and (bits&255)<22 and flower
				if not WORLD_RECT.has_point(at): continue
				if Vector2i(floori(at.x / BLOCK_SIZE), floori(at.y / BLOCK_SIZE)) != block: continue
				var edge := minf(minf(at.x - WORLD_RECT.position.x, WORLD_RECT.end.x - at.x),
					minf(at.y - WORLD_RECT.position.y, WORLD_RECT.end.y - at.y))
				var fade := smoothstep(0.0, 3.6, edge + sin(at.x * 0.6 + at.y * 0.31) * 0.7)
				if float((bits >> 17) & 1023) / 1023.0 > fade: continue
				var scale_value := Vector3(width, height, width)
				var transform := Transform3D(Basis(Vector3.UP, child_yaw).scaled(scale_value),
					Vector3(at.x - origin.x, -0.003, at.y - origin.y))
				records.append({"at": at, "scale": scale_value, "yaw": child_yaw, "transform": transform,
					"tint": tint, "species": species, "mother": Vector2i(x, z), "child": child,
					"accent": accent, "flower": flower, "wildflower":wildflower, "flower_tint": flower_palette[posmod(_lattice_hash(floori(mother.x/4.5),floori(mother.y/4.5)),4)]})
	return records

func _lattice_hash(x: int, z: int) -> int:
	var value := ((x + 8192) * 73856093) ^ ((z + 8192) * 19349663) ^ 261014
	value = ((value ^ (value >> 13)) & 0x7fffffff) * 1274126177
	return (value ^ (value >> 16)) & 0x7fffffff

func _entrances_by_house() -> Dictionary:
	var result := {}
	var roads: Array = state.get("roads")
	var road_rows: Array = []
	for road: Dictionary in roads: road_rows.append([road.get("id", ""), road.points, road.width])
	var road_signature := hash(road_rows)
	for house: Dictionary in state.get("houses"):
		var id := str(house.get("id", str(house.origin)))
		var ground: Array = []
		for cell: Dictionary in house.cells:
			if int(cell.level) == 0: ground.append([cell.x, cell.z, cell.kind, cell.get("id", "")])
		var signature := hash([house.origin, ground, road_signature,Frontage.blocker_signature(house,state.get("houses")) if house.has("id") else []])
		if not entrance_cache.has(id) or entrance_cache[id].signature != signature:
			var records: Array = state.house_entrances(id) if house.has("id") else Frontage.entrances(house, roads)
			entrance_cache[id] = {"signature": signature, "records": records}
		result[id] = entrance_cache[id].records
	for id: String in entrance_cache.keys():
		if not result.has(id): entrance_cache.erase(id)
	return result

func _local_obstacles(block: Vector2i, entrances_by_house: Dictionary = {}) -> Array:
	# The wider water dependency includes the bank profile and the half-metre
	# terrain triangles touching it, even when a grass root stays dry.
	var rect := Rect2(Vector2(block) * BLOCK_SIZE, Vector2.ONE * BLOCK_SIZE).grow(1.0)
	var relevant: Array = []
	for court: Dictionary in state.courtyard_plans():
		for footprint:Variant in court.tiles:
			if rect.intersects(Frame.bounds(footprint)): relevant.append(["courtyard",footprint])
	if entrances_by_house.is_empty(): entrances_by_house = _entrances_by_house()
	for house: Dictionary in state.get("houses"):
		var origin := Vector2(float(house.origin[0]), float(house.origin[1]))
		if house.get("signature","")=="floating_amphitheater":
			var plan:Dictionary=preload("res://scripts/world/city_creation_amphitheater_plan.gd").for_house(state,house)
			for mask:Rect2 in preload("res://scripts/world/city_creation_amphitheater_plan.gd").ground_masks(plan):
				if rect.intersects(mask):relevant.append(["courtyard",mask])
		for cell: Dictionary in house.cells:
			if int(cell.level) != 0:
				continue
			var at := origin + Vector2(float(cell.x), float(cell.z)) * 1.8
			# Full foundation and exposed south doorway define the grass removal
			# domain; upper floors, names and palettes never invalidate grass.
			var footprint:Variant=Frame.footprint(house,cell)
			if rect.intersects(Frame.bounds(Frame.grow(footprint,.12))):
				relevant.append(["house",Frame.box_center(footprint),cell.kind] if footprint is Rect2 else ["house_frame",footprint,cell.kind])
		var entrances: Array = entrances_by_house[str(house.get("id", str(house.origin)))]
		for entrance: Dictionary in entrances:
			var door: Vector2 = entrance.clearance_at
			if rect.intersects(Rect2(door - Vector2.ONE * 1.06, Vector2.ONE * 2.12)):
				relevant.append(["door", door])
	for road: Dictionary in state.get("roads"):
		_collect_segments(relevant, rect, "road", road.points, float(road.width) * 0.5 + 0.56)
		for marker: Dictionary in road.get("roundabouts",[]):
			_collect_segments(relevant,rect,"road",[marker.center],float(marker.radius)+.26)
	for water: Dictionary in state.get("waters"):
		_collect_segments(relevant, rect, "water", water.points, float(water.width) * 0.5 + 1.1)
	return relevant

func _collect_segments(relevant: Array, rect: Rect2, kind: String, points: Array, radius: float) -> void:
	if points.size() == 1:
		var at := Vector2(float(points[0][0]), float(points[0][1]))
		if rect.intersects(Rect2(at - Vector2.ONE * radius, Vector2.ONE * radius * 2.0)):
			relevant.append([kind, at, radius])
	for index in range(1, points.size()):
		var a := Vector2(float(points[index - 1][0]), float(points[index - 1][1]))
		var b := Vector2(float(points[index][0]), float(points[index][1]))
		var swept_bounds := Rect2(Vector2(minf(a.x, b.x), minf(a.y, b.y)),
			Vector2(absf(a.x - b.x), absf(a.y - b.y))).grow(radius)
		if rect.intersects(swept_bounds):
			relevant.append([kind, a, b, radius])

func _build_plant_candidates(plant: Dictionary) -> Array:
	var candidates: Array = []
	var encoded: Array = plant.position
	var center := Vector2(float(encoded[0]), float(encoded[1]))
	var block_origin := Vector2(floorf(center.x / BLOCK_SIZE), floorf(center.y / BLOCK_SIZE)) * BLOCK_SIZE
	var tree_scale := clampf(float(plant.scale), 0.25, 2.5)
	var shrub := str(plant.kind) == "shrub"
	var rng := RandomNumberGenerator.new()
	rng.seed = int(plant.seed) ^ 0x3752a1
	# Three overlapping drifts leave uneven patches of short meadow leaves,
	# rather than isolated tall stalks, a radial lawn or a dark painted disk.
	var angle := rng.randf() * TAU
	var spread := (0.70 if shrub else 1.15) * tree_scale
	var islands: Array[Vector2] = [center + Vector2.from_angle(angle) * spread * 0.20,
		center + Vector2.from_angle(angle + 1.9) * spread * rng.randf_range(0.65, 1.0),
		center + Vector2.from_angle(angle + 4.0) * spread * rng.randf_range(0.72, 1.15)]
	var attempts := rng.randi_range(14, 20) if shrub else rng.randi_range(24, 32)
	var mother := Vector2.ZERO
	var mother_yaw := 0.0
	var species := 0.0
	var mother_tint := Color.WHITE
	var mother_height := 1.0
	for index in range(attempts):
		if index % 3 == 0:
			var island: Vector2 = islands[floori(float(index) / 3.0) % 3]
			mother = island + Vector2(rng.randf_range(-0.38, 0.38), rng.randf_range(-0.32, 0.32)) * tree_scale
			mother_yaw = _patch_yaw(mother) + rng.randf_range(-0.12, 0.12)
			# Tree skirts favour slender grass; shrubs retain broader leaves.
			# Morphology, colour and lean are shared by a real three-child mother.
			species = lerpf(_species_field(mother), 0.40 if shrub else 1.0, 0.60)
			mother_tint = Color("607d55").lerp(Color("76905f"), _patch_field(mother))
			mother_height = rng.randf_range(0.88, 1.14)
		var offset_angle := rng.randf() * TAU
		var offset_radius := sqrt(rng.randf())
		var at := mother + Vector2(cos(offset_angle) * 0.22, sin(offset_angle) * 0.18).rotated(-mother_yaw) * offset_radius
		var yaw := mother_yaw + rng.randf_range(-0.12, 0.12)
		var height := mother_height * rng.randf_range(0.94, 1.05)
		var tint := mother_tint
		# Draw all random choices before the removal test: a new path removes
		# affected clumps but never shifts the survivors' exemplar or transform.
		var flower := rng.randf() < (0.042 if shrub else 0.033)
		var flower_color := int(rng.randf() * 4.0)
		var stone := index == 2 and rng.randf() < 0.18
		var flower_scale := rng.randf_range(0.84, 1.12)
		var stone_tint := Color("aea995").lerp(Color("c5bea7"), rng.randf())
		var local := Vector3(at.x - block_origin.x, -0.004, at.y - block_origin.y)
		var grass_transform := Transform3D(Basis(Vector3.UP, yaw).scaled(Vector3(1.0, height, 1.0)), local)
		var flower_record: Array = []
		if flower:
			local.y = -0.006
			flower_record = [Transform3D(Basis(Vector3.UP, yaw).scaled(Vector3.ONE * flower_scale), local),
				[Color("f6f1de"), Color("f2c14e"), Color("b8a6d9"), Color("e8a096")][flower_color], Color(0.0, 0.0, 1.0, 0.0)]
		var stone_record: Array = []
		if stone:
			local.y = 0.018
			stone_record = [Transform3D(Basis(Vector3.UP, yaw).scaled(Vector3(0.12, 0.058, 0.085)), local),
				stone_tint, Color(0.0, 0.0, 1.0, 0.0)]
		candidates.append([at, grass_transform, tint, flower_record, stone_record, species])
	return candidates

func _add_plant_clumps(block: Vector2i, plant: Dictionary, batches: Dictionary, query_state: GrassMask) -> void:
	var id := str(plant.id)
	var signature := hash([plant.position, plant.scale, plant.kind, plant.seed])
	if plant_candidate_fingerprints.get(id, -1) != signature:
		if plant_candidates.has(id): _evict_plant_samples(plant_candidates[id])
		plant_candidates[id] = _build_plant_candidates(plant)
		plant_candidate_fingerprints[id] = signature
	for candidate: Array in plant_candidates[id]:
		var at: Vector2 = candidate[0]
		if not WORLD_RECT.has_point(at) or Vector2i(floori(at.x / BLOCK_SIZE), floori(at.y / BLOCK_SIZE)) != block: continue
		var custom := _sample(block, at, query_state, FRINGE_SAMPLE_SCALE)
		if custom.b < 0.0: continue
		var rockiness: float = state._ground_terrain.rockiness_at(at)
		if not Outcrops.grass_kept(at,rockiness): continue
		custom.b *= lerpf(1.0,0.25,rockiness)
		custom.a = candidate[5]
		batches.grass.append([_grounded_transform(candidate[1], at), candidate[2], custom])
		if not candidate[3].is_empty() and rockiness<0.35:
			var flower_record: Array = candidate[3].duplicate()
			flower_record[0] = _grounded_transform(flower_record[0], at)
			batches.flower.append(flower_record)
		if not candidate[4].is_empty():
			var stone_record: Array = candidate[4].duplicate()
			stone_record[0] = _grounded_transform(stone_record[0], at, true)
			batches.stone.append(stone_record)

func _evict_plant_samples(candidates: Array) -> void:
	for candidate: Array in candidates:
		var at: Vector2 = candidate[0]
		var block := Vector2i(floori(at.x / BLOCK_SIZE), floori(at.y / BLOCK_SIZE))
		if not sample_bins.has(block): continue
		var local := at - Vector2(block) * BLOCK_SIZE
		sample_bins[block][floori(local.y) * 8 + floori(local.x)].erase(Vector3(at.x, at.y, FRINGE_SAMPLE_SCALE))

func _prepare_samples(block: Vector2i, obstacles: Array) -> void:
	if not sample_bins.has(block):
		var bins: Array[Dictionary] = []
		for index in range(64):
			bins.append({})
		sample_bins[block] = bins
		sample_obstacles[block] = obstacles
		return
	var previous: Array = sample_obstacles[block]
	if previous == obstacles: return
	var old_common: Array = []
	var new_common: Array = []
	var changed: Array = []
	for row: Array in previous:
		if obstacles.has(row): old_common.append(row)
		else: changed.append(row)
	for row: Array in obstacles:
		if previous.has(row): new_common.append(row)
		else: changed.append(row)
	if old_common != new_common:
		# Exact equal-distance edge ties depend on production iteration order.
		for bin: Dictionary in sample_bins[block]: bin.clear()
	else:
		var origin := Vector2(block) * BLOCK_SIZE
		for row: Array in changed:
			var bounds := Rect2()
			if row[0]=="house_frame":bounds=Frame.bounds(Frame.grow(row[1],GrassMask.EDGE_DISTANCE))
			elif row[0] == "house":
				bounds = Rect2(row[1] - Vector2.ONE * 0.9, Vector2.ONE * 1.8).grow(GrassMask.EDGE_DISTANCE)
			elif row[0] == "courtyard":
				bounds=Frame.bounds(Frame.grow(row[1],GrassMask.EDGE_DISTANCE))
			elif row[0] == "door":
				bounds = Rect2(row[1] - Vector2.ONE * (0.95 + GrassMask.EDGE_DISTANCE), Vector2.ONE * (1.9 + GrassMask.EDGE_DISTANCE * 2.0))
			else:
				var a: Vector2 = row[1]
				var b: Vector2 = row[2] if row.size() == 4 else a
				var radius: float = row[3] if row.size() == 4 else row[2]
				# Water's wider dependency also invalidates grounded transforms;
				# the clearance cache still needs only its original mask reach.
				radius += GrassMask.EDGE_DISTANCE - (0.11 if row[0] == "road" else 1.1)
				bounds = Rect2(Vector2(minf(a.x,b.x), minf(a.y,b.y)), (a-b).abs()).grow(radius)
			var first := Vector2i(floori(bounds.position.x-origin.x), floori(bounds.position.y-origin.y))
			var last := Vector2i(floori(bounds.end.x-origin.x), floori(bounds.end.y-origin.y))
			for z in range(maxi(0,first.y), mini(7,last.y)+1):
				for x in range(maxi(0,first.x), mini(7,last.x)+1): sample_bins[block][z*8+x].clear()
	sample_obstacles[block] = obstacles

func _sample(block: Vector2i, at: Vector2, mask: GrassMask, scale_value: float) -> Color:
	var local := at - Vector2(block) * BLOCK_SIZE
	var index := floori(local.y) * 8 + floori(local.x)
	var samples: Dictionary = sample_bins[block][index]
	var key := Vector3(at.x, at.y, scale_value)
	var cached = samples.get(key)
	if cached != null: return cached
	var result := Color(0.0, 0.0, -1.0, 0.0)
	if mask.visible(at, scale_value):
		var edge := mask.continuous_edge(at)
		var push: Vector2 = edge.push
		result = Color(push.x, push.y, smoothstep(0.0, 0.55, float(edge.clearance)), 0.0)
	samples[key] = result
	return result

func _candidate_visible(block: Vector2i, at: Vector2, query_state: GrassMask, clearance_scale: float = 0.25) -> bool:
	if not WORLD_RECT.has_point(at):
		return false
	if Vector2i(floori(at.x / BLOCK_SIZE), floori(at.y / BLOCK_SIZE)) != block:
		return false
	return query_state.visible(at, clearance_scale)

func _append(records: Array, block: Vector2i, at: Vector2, scale_value: Vector3,
		yaw: float, tint: Color, y: float, custom: Color = Color(0.0, 0.0, 1.0, 0.0)) -> void:
	var basis := Basis(Vector3.UP, yaw).scaled(scale_value)
	var local := Vector3(at.x - float(block.x) * BLOCK_SIZE, y, at.y - float(block.y) * BLOCK_SIZE)
	records.append([_grounded_transform(Transform3D(basis, local), at), tint, custom])

func _grounded_transform(transform: Transform3D, at: Vector2, stone: bool = false) -> Transform3D:
	var height: float = state.ground_height(at)
	if stone:
		# Four footprint samples seat the small ellipsoid into a bank instead
		# of leaving its downhill edge suspended; candidate tuples stay flat.
		for axis: Vector3 in [transform.basis.x, transform.basis.z]:
			var offset := Vector2(axis.x, axis.z)
			height = minf(height, state.ground_height(at + offset))
			height = minf(height, state.ground_height(at - offset))
	transform.origin.y += height + 0.02
	return transform

func _make_batch(root: Node3D, part: String, records: Array) -> void:
	if records.is_empty():
		return
	var multi := MultiMesh.new()
	multi.transform_format = MultiMesh.TRANSFORM_3D
	multi.use_colors = true
	multi.use_custom_data = true
	multi.mesh = _mesh(part)
	SafeInstances.initialize(multi,records.size())
	# Actual terrain heights are baked into the transforms; retain extra
	# room for GPU wind, obstacle push and the slender species' taller tips.
	var mesh_bounds := multi.mesh.get_aabb()
	var source_transform: Transform3D = meshes.get(part+"_transform",Transform3D.IDENTITY)
	var bounds := AABB()
	for index in range(records.size()):
		var transform: Transform3D = records[index][0]*source_transform
		var slot:=SafeInstances.append(multi,transform,records[index][1],records[index][2] if records[index].size()>2 else Color(0,0,1,0))
		if slot<0:continue
		bounds = transform*mesh_bounds if slot==0 else bounds.merge(transform*mesh_bounds)
	multi.set_meta("valid_count",multi.visible_instance_count)
	multi.custom_aabb = bounds.grow(0.12)
	# Keep the full seven-leaf bounds, including when installing a far-view
	# mesh. A later camera change only swaps shared meshes and draw counts.
	if part == "lawn": _apply_lawn_detail(multi)
	var instance := MultiMeshInstance3D.new()
	instance.name = "Meadow_%s" % part
	if part in ["lawn","grass"]:DetailLod.bind(instance,DetailLod.FINE_GRASS)
	elif part in ["fern","flower"]:DetailLod.bind(instance,DetailLod.FURNITURE)
	elif part=="stone":DetailLod.bind(instance,DetailLod.PEBBLES)
	instance.multimesh = multi
	instance.material_override = _material(part)
	instance.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	root.add_child(instance)

func _mesh(part: String) -> Mesh:
	if part == "grass": return _mesh("lawn")
	if meshes.has(part):
		return meshes[part]
	if part in ["boulder_a","boulder_b"]:
		Outcrops.load_meshes(meshes)
		return meshes[part]
	var mesh: Mesh
	if part == "stone":
		var stone := SphereMesh.new()
		stone.radius = 1.0
		stone.height = 2.0
		stone.radial_segments = 6
		stone.rings = 2
		mesh = stone
	else:
		var surface := SurfaceTool.new()
		surface.begin(Mesh.PRIMITIVE_TRIANGLES)
		if part in ["grass","lawn","lawn_lod"]:
			# Four low spreading leaves cup three upright leaves. Keep two of
			# each ring in the far mesh; near leaves gain a ridge and basal trefoil.
			for blade in ([0,2,4,6] if part == "lawn_lod" else [0,1,2,3,4,5,6]):
				_ribbon(surface,blade,part!="lawn_lod")
			if part!="lawn_lod":preload("res://scripts/visual/city_creation_meadow_fold.gd").base(surface)
		else:
			# Three blooms remain inside the existing .085m flower footprint.
			for bloom in range(3):
				var angle := float(bloom)*TAU/3.0
				var offset := Vector3(cos(angle)*0.032,0,sin(angle)*0.032)
				var heart: Vector3 = offset+Vector3.UP*float([0.20,0.28,0.24][bloom])
				_triangle(surface,offset-Vector3(0.005,0,0),offset+Vector3(0.005,0,0),heart,Color("92a777"))
				for petal in range(5):
					var theta := float(petal)*TAU/5.0
					var axis := Vector3(cos(theta),0,sin(theta))
					var across := Vector3(-sin(theta),0,cos(theta))
					var a := heart+axis*0.027+across*0.021
					var b := heart+axis*0.049+Vector3.UP*0.006
					var c := heart+axis*0.027-across*0.021
					_triangle(surface,heart,a,b,Color.WHITE)
					_triangle(surface,heart,b,c,Color.WHITE)
		surface.index()
		mesh = surface.commit()
	meshes[part] = mesh
	return mesh

func _ribbon(surface: SurfaceTool, blade: int,folded:bool=true) -> void:
	preload("res://scripts/visual/city_creation_meadow_fold.gd").blade(self,surface,blade,folded)

func _triangle(surface: SurfaceTool, a: Vector3, b: Vector3, c: Vector3, tint: Color, tip_height: float = 0.235, blade_direction: Vector3 = Vector3.ZERO) -> void:
	var normal := (c - a).cross(b - a).normalized()
	for point: Vector3 in [a, b, c]:
		var tip := clampf(point.y / tip_height, 0.0, 1.0)
		# Smooth normals follow a leaf's increasing bend; duplicated vertices
		# across longitudinal triangles retain the same light response.
		var leaf_normal := (Vector3.UP * (0.28 + tip * 0.45) - blade_direction).normalized()
		surface.set_normal(normal if blade_direction == Vector3.ZERO else leaf_normal)
		surface.set_color(tint)
		surface.set_uv(Vector2(0.0, tip))
		surface.add_vertex(point)

func _material(part: String) -> Material:
	if part in ["boulder_a","boulder_b"]:
		if not materials.has("outcrop"):
			var stone := StandardMaterial3D.new()
			stone.albedo_color = Color("9d9b8c")
			stone.vertex_color_use_as_albedo = true
			stone.vertex_color_is_srgb = true
			stone.roughness = 1.0
			materials.outcrop = stone
		return materials.outcrop
	if materials.has(part):
		return materials[part]
	var material: Material
	if part in ["lawn", "grass"]:
		var lawn := ShaderMaterial.new()
		lawn.shader = LawnShader
		ShorePalette.configure(lawn)
		lawn.set_shader_parameter("detail",detail if part == "lawn" else 1.0)
		lawn.set_shader_parameter("water_field",water_field)
		material = lawn
	elif part == "stone":
		var stone := StandardMaterial3D.new()
		stone.vertex_color_use_as_albedo = true
		stone.roughness = 1.0
		material = stone
	else:
		var shader := Shader.new()
		shader.code = """
shader_type spatial;
render_mode cull_disabled, specular_disabled;
varying float tip_weight;
varying vec4 clump_tint;
void vertex() {
	tip_weight = UV.y;
	clump_tint = COLOR;
	vec3 world = (MODEL_MATRIX * vec4(VERTEX, 1.0)).xyz;
	vec3 object_push = inverse(mat3(MODEL_MATRIX)) * vec3(INSTANCE_CUSTOM.r, 0.0, INSTANCE_CUSTOM.g);
	VERTEX.y *= INSTANCE_CUSTOM.b;
	VERTEX += object_push * tip_weight * tip_weight * (1.0 - INSTANCE_CUSTOM.b) * 0.045;
	float breeze = sin(TIME * 0.85 + world.x * 0.37 + world.z * 0.29);
	float small_wave = sin(TIME * 1.23 + world.x * 0.83 - world.z * 0.47);
	VERTEX.x += (breeze * 0.014 + small_wave * 0.006) * tip_weight * tip_weight;
	VERTEX.z += breeze * 0.009 * tip_weight * tip_weight;
}
void fragment() {
	ALBEDO = clump_tint.rgb;
	ROUGHNESS = 1.0;
}
"""
		var foliage := ShaderMaterial.new()
		foliage.shader = shader
		material = foliage
	materials[part] = material
	return material
