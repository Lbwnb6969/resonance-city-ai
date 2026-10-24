class_name CityCreationShore
extends Node3D
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const SafeInstances = preload("res://scripts/visual/city_creation_safe_instances.gd")
const DetailLod=preload("res://scripts/visual/city_creation_detail_lod.gd")
## Original shore exemplars: deterministic placement, obstacle removal and
## tip-weighted wind informed by Tiny Glade's Grass2 report, without assets.
const State := preload("res://scripts/world/city_creation_state.gd")
const GrassMask := preload("res://scripts/visual/city_creation_grass_mask.gd")
const Frontage := preload("res://scripts/world/city_creation_frontage.gd")
const BLOCK_SIZE := 8.0
const SPACING := 0.6
const CLUSTER_GRID := 2.4
const CLUSTER_REACH := 0.78
const Bounds := preload("res://scripts/world/city_creation_bounds.gd")
const LAND_RECT := Bounds.LAND_RECT
var state: RefCounted
var record_only := false
var prepared_blocks: Dictionary = {}
var blocks: Dictionary = {}
var fingerprints: Dictionary = {}
var counts: Dictionary = {}
var meshes: Dictionary = {}
var materials: Dictionary = {}
var detail := 1.0
var last_changed := 0
var elapsed_ms := 0.0
var _geometry: Array = []
var _layout_candidates: Dictionary = {}
var _water_candidates: Dictionary = {}
var _water_fingerprints: Dictionary = {}
var _query_masks: Dictionary = {}
var _query_fingerprints: Dictionary = {}
var _entrance_cache: Dictionary = {}
var _current_entrances: Dictionary = {}

func setup(city_state: RefCounted) -> void:
	state = city_state
	name = "ShoreBlocks"

func rebuild(shared_masks: Dictionary = {}) -> void:
	var started := Time.get_ticks_usec()
	state.prepare_ground_height()
	last_changed = 0
	var geometry := _geometry_signature()
	if geometry == _geometry:
		elapsed_ms = float(Time.get_ticks_usec()-started)/1000.0
		return
	_geometry = geometry
	_current_entrances = _entrances_by_house()
	for z in range(floori(LAND_RECT.position.y / BLOCK_SIZE), ceili(LAND_RECT.end.y / BLOCK_SIZE)):
		for x in range(floori(LAND_RECT.position.x / BLOCK_SIZE), ceili(LAND_RECT.end.x / BLOCK_SIZE)):
			var block := Vector2i(x, z)
			var obstacle_signature := hash(_local_obstacles(block, _current_entrances))
			var height_bounds := Rect2(Vector2(block)*BLOCK_SIZE,Vector2.ONE*BLOCK_SIZE).grow(1.0)
			var height_signature: int = state._ground_terrain.region_signature(height_bounds)
			var signature := hash([obstacle_signature,height_signature])
			if fingerprints.get(block, -1) == signature:
				continue
			fingerprints[block] = signature
			if not record_only and blocks.has(block):
				var old: Node3D = blocks[block]
				remove_child(old)
				old.queue_free()
				blocks.erase(block)
			counts.erase(block)
			var mask := _mask(block, shared_masks, obstacle_signature)
			var records := _candidates(block, mask, shared_masks)
			var root: Node3D
			if not record_only:
				root = Node3D.new()
				root.name = "Shore_%d_%d" % [x, z]
				root.position = Vector3(float(x) * BLOCK_SIZE, 0.0, float(z) * BLOCK_SIZE)
				root.set_meta("candidates", records)
			var amounts := {"grass": 0, "reed": 0, "stone": 0}
			for part: String in amounts:
				var batch: Array = []
				for record: Dictionary in records:
					if record.part == part: batch.append(record)
				amounts[part] = batch.size()
				if not record_only: _make_batch(root, part, batch)
			if record_only:
				prepared_blocks[block] = records
				if not records.is_empty(): counts[block] = amounts
			elif not records.is_empty():
				add_child(root)
				blocks[block] = root
				counts[block] = amounts
			else: root.free()
			last_changed += 1
	elapsed_ms = float(Time.get_ticks_usec() - started) / 1000.0

func _geometry_signature() -> Array:
	var water_rows: Array = []
	var road_rows: Array = []
	var houses: Array = []
	var plant_rows: Array = []
	for water: Dictionary in state.waters: water_rows.append([water.points.duplicate(true),water.width])
	for road: Dictionary in state.roads: road_rows.append([road.points.duplicate(true),road.width])
	for house: Dictionary in state.houses:
		var cells: Array = []
		for cell: Dictionary in house.cells:
			if int(cell.level)==0: cells.append([cell.x,cell.z,cell.kind])
		houses.append([house.origin.duplicate(),cells])
	for plant: Dictionary in state.plants: plant_rows.append([plant.position.duplicate(),plant.kind,plant.scale])
	return [water_rows,road_rows,houses,plant_rows,state._ground_terrain.generation]

func diagnostics() -> Dictionary:
	var totals := {"blocks": blocks.size(), "instances": 0, "reeds": 0, "stones": 0,
		"last_changed": last_changed, "elapsed_ms": elapsed_ms}
	for amounts: Dictionary in counts.values():
		totals.instances += int(amounts.grass) + int(amounts.reed) + int(amounts.stone)
		totals.reeds += int(amounts.reed)
		totals.stones += int(amounts.stone)
	return totals

func set_view_scale(zoom: float) -> void:
	detail = 1.0 - smoothstep(15.0, 42.0, zoom)
	for material: Material in materials.values():
		if material is ShaderMaterial: material.set_shader_parameter("detail", detail)

func _mask(block: Vector2i, shared_masks: Dictionary, signature: int = -1) -> GrassMask:
	if shared_masks.has(block): return shared_masks[block]
	if signature == -1: signature = hash(_local_obstacles(block, _current_entrances))
	var mask: GrassMask
	if _query_fingerprints.get(block, -1) == signature: mask = _query_masks[block]
	else:
		mask = GrassMask.new()
		mask.setup(state, block, _current_entrances)
		_query_masks[block] = mask
		_query_fingerprints[block] = signature
	shared_masks[block] = mask
	return mask

func _build_layout_candidates(block: Vector2i) -> Array:
	var result: Array = []
	var origin := Vector2(block) * BLOCK_SIZE
	for z in range(floori(origin.y / SPACING) - 1, ceili((origin.y + BLOCK_SIZE) / SPACING) + 1):
		for x in range(floori(origin.x / SPACING) - 1, ceili((origin.x + BLOCK_SIZE) / SPACING) + 1):
			var seed_value := _hash(x, z)
			var rng := RandomNumberGenerator.new()
			rng.seed = seed_value
			var at := Vector2((float(x) + 0.5) * SPACING, (float(z) + 0.5) * SPACING)
			at += Vector2(rng.randf_range(-0.22, 0.22), rng.randf_range(-0.22, 0.22))
			# Draw every choice before masking: surviving tuples retain identity.
			var chance := rng.randf()
			var kind_choice := rng.randf()
			var yaw := rng.randf() * TAU
			var width := rng.randf_range(0.8, 1.25)
			var height := rng.randf_range(0.75, 1.3)
			var tint_choice := rng.randf()
			if not LAND_RECT.has_point(at) or Vector2i(floori(at.x / BLOCK_SIZE), floori(at.y / BLOCK_SIZE)) != block: continue
			# Broad drifts leave long empty passages. They never trace a uniform
			# row of equal reeds or a continuous decorative border around ponds.
			var cluster := 0.45 + sin(at.y * 0.43 + at.x * 0.22) * 0.30 + sin(at.y * 0.9 - at.x * 0.35) * 0.22
			var edge := minf(minf(at.x - LAND_RECT.position.x, LAND_RECT.end.x - at.x), minf(at.y - LAND_RECT.position.y, LAND_RECT.end.y - at.y))
			if cluster < 0.40 or chance > smoothstep(0.35, 0.8, cluster) * 0.78 * smoothstep(0.0, 3.0, edge): continue
			result.append({"position": at, "seed": seed_value, "kind_choice": kind_choice,
				"yaw": yaw, "width": width, "height": height, "tint_choice": tint_choice})
	# One fixed root per sparse world-space cell. Water and obstacles only
	# reject it; edits never elect a different surviving point in that cell.
	for z in range(floori(origin.y/CLUSTER_GRID)-1,ceili((origin.y+BLOCK_SIZE)/CLUSTER_GRID)+1):
		for x in range(floori(origin.x/CLUSTER_GRID)-1,ceili((origin.x+BLOCK_SIZE)/CLUSTER_GRID)+1):
			var seed_value := _hash(x,z)^0x4b193d
			var rng := RandomNumberGenerator.new()
			rng.seed=seed_value
			var occupied := rng.randf()<0.58
			var at := (Vector2(x,z)+Vector2(0.5,0.5))*CLUSTER_GRID+Vector2(rng.randf_range(-0.64,0.64),rng.randf_range(-0.64,0.64))
			if not occupied or not LAND_RECT.grow(-CLUSTER_REACH).has_point(at): continue
			if Vector2i(floori(at.x/BLOCK_SIZE),floori(at.y/BLOCK_SIZE))!=block: continue
			result.append({"position":at,"seed":seed_value,"cluster":true,"cluster_id":"shore_%d_%d" % [x,z]})
	return result

func _dry_candidates(block: Vector2i) -> Array:
	var origin := Vector2(block) * BLOCK_SIZE
	var bounds := Rect2(origin, Vector2.ONE * BLOCK_SIZE)
	var local_water: Array = []
	for water: Dictionary in state.get("waters"):
		# Background hill flattening reaches three metres beyond authored water;
		# include touching terrain triangles in the cached height dependency.
		_collect(local_water, bounds, "water", water.points, float(water.width) * 0.5 + 3.8)
	var signature := hash(local_water)
	if _water_fingerprints.get(block, -1) == signature: return _water_candidates[block]
	var result: Array = []
	_water_fingerprints[block] = signature
	# The analytic river meanders only 0.52 m. Its complete shore band and
	# authored footprints bound candidate work without changing any predicate.
	if (bounds.end.x < -0.771 or bounds.position.x > 6.771) and local_water.is_empty():
		_water_candidates[block] = result
		return result
	if not _layout_candidates.has(block): _layout_candidates[block] = _build_layout_candidates(block)
	for candidate: Dictionary in _layout_candidates[block]:
		var at: Vector2 = candidate.position
		var clearance: float = state.water_clearance(at)
		if bool(candidate.get("cluster",false)):
			if clearance>=0.4 and clearance<=0.95: result.append_array(_cluster_records(candidate,origin))
			continue
		if clearance < 0.106 or clearance > 0.9: continue
		var kind_choice: float = candidate.kind_choice
		var width: float = candidate.width
		var height: float = candidate.height
		var yaw: float = candidate.yaw
		var tint_choice: float = candidate.tint_choice
		var part := "stone" if kind_choice < 0.13 and clearance < 0.55 else ("reed" if kind_choice < 0.53 else "grass")
		if part=="stone": continue
		var scale_value := Vector3(width, height, width)
		var tint := Color("759267").srgb_to_linear().lerp(Color("91a776").srgb_to_linear(), tint_choice)
		var y := 0.005
		var edge_points: Array[Vector2] = []
		if part == "stone":
			scale_value = Vector3(0.17 + width * 0.11, 0.055 + height * 0.025, 0.11 + width * 0.08)
			tint = Color("aaa897").srgb_to_linear().lerp(Color("cac3ab").srgb_to_linear(), tint_choice)
			y = 0.025
			# The stone's full ellipse remains dry, rather than checking only
			# its center. Candidate identity and yaw remain independent of water.
			var clear_stone := true
			for edge_step in range(12):
				var angle := float(edge_step) * TAU / 12.0
				var offset := Vector2(cos(angle) * scale_value.x, sin(angle) * scale_value.z).rotated(-yaw)
				var edge_at := at + offset
				edge_points.append(edge_at)
				if state.water_clearance(edge_at) <= 0.01:
					clear_stone = false
					break
			if not clear_stone: continue
		var transform := Transform3D(Basis(Vector3.UP, yaw).scaled(scale_value), Vector3(at.x - origin.x, y, at.y - origin.y))
		result.append({"position": at, "seed": candidate.seed, "part": part, "transform": transform, "tint": tint, "edge_points": edge_points})
	_water_candidates[block] = result
	return result

func _candidates(block: Vector2i, mask: GrassMask, shared_masks: Dictionary = {}) -> Array:
	var result: Array = []
	shared_masks[block] = mask
	var clusters := {}
	var plants := _plant_obstacles(block)
	for candidate: Dictionary in _dry_candidates(block):
		if candidate.has("cluster_id"):
			var id := str(candidate.cluster_id)
			if not clusters.has(id): clusters[id]=[]
			clusters[id].append(candidate)
			continue
		if not _visible(mask, candidate.position): continue
		var clear_stone := true
		for at: Vector2 in candidate.edge_points:
			var edge_block := Vector2i(floori(at.x / BLOCK_SIZE), floori(at.y / BLOCK_SIZE))
			if not _visible(_mask(edge_block, shared_masks), at):
				clear_stone = false
				break
		if clear_stone:
			var at: Vector2 = candidate.position
			var height: float = state.ground_height(at)
			# Reuse the dry-footprint samples already owned by shore stones.
			# The lowest edge seats a bank-side ellipsoid slightly into the slope.
			for edge_at: Vector2 in candidate.edge_points:
				height = minf(height, state.ground_height(edge_at))
			var transform: Transform3D = candidate.transform
			transform.origin.y += height + 0.02
			result.append({"position": candidate.position, "seed": candidate.seed, "part": candidate.part,
				"transform": transform, "tint": candidate.tint})
	for group: Array in clusters.values():
		var accepted: Array = []
		var stones_clear := true
		for candidate: Dictionary in group:
			var clear := _cluster_clear(candidate,shared_masks,plants)
			if not clear and candidate.part=="stone": stones_clear=false; break
			if clear: accepted.append(_ground_cluster_record(candidate))
		if stones_clear: result.append_array(accepted)
	return result

func _cluster_records(root: Dictionary, origin: Vector2) -> Array:
	var result: Array = []
	var at: Vector2 = root.position
	var gradient := Vector2(state.water_clearance(at+Vector2(0.05,0))-state.water_clearance(at-Vector2(0.05,0)),state.water_clearance(at+Vector2(0,0.05))-state.water_clearance(at-Vector2(0,0.05)))
	var normal := gradient.normalized() if gradient.length_squared()>0.000001 else Vector2.RIGHT
	var tangent := Vector2(normal.y,-normal.x)
	var yaw := atan2(normal.x,normal.y)
	var rng := RandomNumberGenerator.new()
	rng.seed=int(root.seed)^0x378bc1
	var companion_count := 3 if rng.randf()<0.25 else 2
	for index in range(1+companion_count+2):
		var grass := index>companion_count
		var offset := Vector2.ZERO
		var scale_value := Vector3(rng.randf_range(0.32,0.39),rng.randf_range(0.09,0.12),rng.randf_range(0.22,0.27))
		var angle := yaw+rng.randf_range(-0.16,0.16)
		if index>0 and not grass:
			var side := -1.0 if index==1 else 1.0
			offset=tangent*side*rng.randf_range(0.40,0.47)+normal*rng.randf_range(0.10,0.20)
			if index==3: offset=tangent*rng.randf_range(-0.12,0.12)+normal*0.44
			scale_value=Vector3(rng.randf_range(0.10,0.16),rng.randf_range(0.045,0.065),rng.randf_range(0.085,0.13))
			angle=yaw+rng.randf_range(-0.8,0.8)
		elif grass:
			var side := -1.0 if index==companion_count+1 else 1.0
			offset=tangent*side*0.25+normal*0.32
			scale_value=Vector3(0.62,rng.randf_range(0.48,0.60),0.62)
			angle=rng.randf()*TAU
		var position := at+offset
		var tint := Color("a3a38f").srgb_to_linear().lerp(Color("c5bda6").srgb_to_linear(),rng.randf())
		if grass: tint=Color("718c5a").srgb_to_linear().lerp(Color("8fa36c").srgb_to_linear(),rng.randf())
		var samples: Array[Vector2] = [position]
		if grass:
			for step in range(12): samples.append(position+Vector2.from_angle(step*TAU/12.0)*0.22)
		else:
			# Dense conservative ellipse samples cover the unit-bounded mother
			# mesh. The .105m mask margin exceeds the inter-sample gaps.
			for z in range(-ceili(scale_value.z/0.08),ceili(scale_value.z/0.08)+1):
				for x in range(-ceili(scale_value.x/0.08),ceili(scale_value.x/0.08)+1):
					var local := Vector2(x*0.08,z*0.08)
					if Vector2(local.x/scale_value.x,local.y/scale_value.z).length_squared()<=1.0: samples.append(position+local.rotated(-angle))
			for step in range(24): samples.append(position+Vector2(cos(step*TAU/24.0)*scale_value.x,sin(step*TAU/24.0)*scale_value.z).rotated(-angle))
		result.append({"position":position,"seed":int(root.seed)+index,"part":"grass" if grass else "stone",
			"transform":Transform3D(Basis(Vector3.UP,angle)*Basis.from_scale(scale_value),Vector3(position.x-origin.x,0,position.y-origin.y)),"tint":tint,"edge_points":samples,
			"cluster_id":str(root.cluster_id),"root_position":at,"cluster_role":"grass" if grass else ("main" if index==0 else "companion"),"cluster_index":index,"cluster_reach":CLUSTER_REACH})
	return result

func _plant_obstacles(block: Vector2i) -> Array:
	var result: Array = []
	var bounds := Rect2(Vector2(block)*BLOCK_SIZE,Vector2.ONE*BLOCK_SIZE).grow(CLUSTER_REACH)
	for plant: Dictionary in state.plants:
		var at := Vector2(plant.position[0],plant.position[1])
		var radius := (0.42 if str(plant.kind)=="shrub" else 0.72)*float(plant.scale)+0.105
		if bounds.intersects(Rect2(at-Vector2.ONE*radius,Vector2.ONE*radius*2),true): result.append([at,radius])
	return result

func _cluster_clear(candidate: Dictionary, shared_masks: Dictionary, plants: Array) -> bool:
	for at: Vector2 in candidate.edge_points:
		if state.water_clearance(at)<=0.105: return false
		var block := Vector2i(floori(at.x/BLOCK_SIZE),floori(at.y/BLOCK_SIZE))
		if not _visible(_mask(block,shared_masks),at): return false
		for plant: Array in plants:
			if at.distance_to(Vector2(plant[0]))<=float(plant[1]): return false
	return true

func _ground_cluster_record(candidate: Dictionary) -> Dictionary:
	var height := INF
	for at: Vector2 in candidate.edge_points: height=minf(height,state.ground_height(at))
	var record := candidate.duplicate(true)
	var transform: Transform3D = record.transform
	transform.origin.y=height+(0.035 if candidate.part=="stone" else 0.02)
	record.transform=transform
	return record

func _hash(x: int, z: int) -> int:
	var value := ((x + 8192) * 73856093) ^ ((z + 8192) * 19349663) ^ 842915
	value = ((value ^ (value >> 13)) & 0x7fffffff) * 1274126177
	return (value ^ (value >> 16)) & 0x7fffffff

func _visible(mask: GrassMask, at: Vector2) -> bool:
	if State.WORLD_RECT.has_point(at): return mask.visible(at, 0.25)
	# Background extends beyond editable bounds. Use the same geometric
	# predicates, including obstacles whose footprints cross those bounds.
	var origin: Vector2 = mask._origin
	var local := at - origin
	var bin: GrassMask.Bin = mask._bins[floori(local.y) * 8 + floori(local.x)]
	const CLEARANCE := 0.105
	for footprint: Rect2 in bin.footprints:
		if footprint.grow(CLEARANCE).has_point(at): return false
	for door: Vector2 in bin.doors:
		if at.distance_to(door) <= 0.95 + CLEARANCE: return false
	for capsule: GrassMask.Capsule in bin.capsules:
		var a: Vector2 = capsule.a
		var b: Vector2 = capsule.b
		var length_squared: float = capsule.length_squared
		var t := 0.0 if length_squared <= 0.000001 else clampf((at - a).dot(b - a) / length_squared, 0.0, 1.0)
		var distance := at.distance_to(a.lerp(b, t))
		var radius: float = capsule.radius
		if capsule.water:
			if distance - radius <= CLEARANCE: return false
		elif distance <= radius + CLEARANCE: return false
	return true

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
		if not _entrance_cache.has(id) or _entrance_cache[id].signature != signature:
			var records: Array = state.house_entrances(id) if house.has("id") else Frontage.entrances(house, roads)
			_entrance_cache[id] = {"signature": signature, "records": records}
		result[id] = _entrance_cache[id].records
	for id: String in _entrance_cache.keys():
		if not result.has(id): _entrance_cache.erase(id)
	return result

func _local_obstacles(block: Vector2i, entrances_by_house: Dictionary = {}) -> Array:
	var rect := Rect2(Vector2(block) * BLOCK_SIZE, Vector2.ONE * BLOCK_SIZE)
	var rows: Array = []
	if entrances_by_house.is_empty(): entrances_by_house = _entrances_by_house()
	for house: Dictionary in state.get("houses"):
		var origin := Vector2(float(house.origin[0]), float(house.origin[1]))
		for cell: Dictionary in house.cells:
			if int(cell.level) != 0: continue
			var at := origin + Vector2(float(cell.x), float(cell.z)) * State.CELL_UNIT
			var footprint:Variant=Frame.footprint(house,cell,CLUSTER_REACH+.105)
			if not rect.intersects(Frame.bounds(footprint),true):continue
			rows.append(["house",Frame.center(house,cell),cell.kind,Frame.yaw(house)])
		var entrances: Array = entrances_by_house[str(house.get("id", str(house.origin)))]
		for entrance: Dictionary in entrances:
			var door: Vector2 = entrance.clearance_at
			var reach := 0.95+CLUSTER_REACH+0.105
			if rect.intersects(Rect2(door - Vector2.ONE * reach, Vector2.ONE * reach*2), true):
				rows.append(["door", door])
	for road: Dictionary in state.get("roads"):
		_collect(rows, rect, "road", road.points, float(road.width) * 0.5 + 0.45+CLUSTER_REACH+0.105)
	for water: Dictionary in state.get("waters"):
		_collect(rows, rect, "water", water.points, float(water.width) * 0.5 + 3.8)
	for plant: Array in _plant_obstacles(block): rows.append(["plant",plant])
	for court: Dictionary in state.courtyard_plans():
		for tile:Variant in court.tiles:
			if rect.intersects(Frame.bounds(Frame.grow(tile,CLUSTER_REACH+0.105)),true): rows.append(["court",tile])
	return rows

func _collect(rows: Array, rect: Rect2, kind: String, raw: Array, radius: float) -> void:
	var points: Array = SafeInstances.clean_path(raw)
	for index in range(maxi(1, points.size() - 1)):
		var a := Vector2(float(points[index][0]), float(points[index][1]))
		var next := mini(index + 1, points.size() - 1)
		var b := Vector2(float(points[next][0]), float(points[next][1]))
		var swept := Rect2(Vector2(minf(a.x, b.x), minf(a.y, b.y)), Vector2(absf(a.x - b.x), absf(a.y - b.y))).grow(radius)
		if rect.intersects(swept, true): rows.append([kind, a, b, radius])

func _make_batch(root: Node3D, part: String, records: Array) -> void:
	if records.is_empty(): return
	var multi := MultiMesh.new()
	multi.transform_format = MultiMesh.TRANSFORM_3D
	multi.use_colors = true
	multi.mesh = _mesh(part)
	SafeInstances.initialize(multi,records.size())
	var mesh_bounds := multi.mesh.get_aabb()
	var bounds := AABB()
	for index in range(records.size()):
		var slot:=SafeInstances.append(multi,records[index].transform,records[index].tint)
		if slot<0:continue
		bounds = records[index].transform*mesh_bounds if slot==0 else bounds.merge(records[index].transform*mesh_bounds)
	# World-space wind remains inside this margin at the widest instance scale.
	multi.custom_aabb = bounds.grow(0.06)
	var instance := MultiMeshInstance3D.new()
	instance.name = "Shore_%s" % part
	DetailLod.bind(instance,72. if part=="reed" else DetailLod.FINE_GRASS if part=="grass" else DetailLod.FLOWERBOX)
	instance.multimesh = multi
	instance.material_override = _material(part)
	instance.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	root.add_child(instance)

func _mesh(part: String) -> Mesh:
	if meshes.has(part): return meshes[part]
	var mesh: Mesh
	if part == "stone":
		var stone := SphereMesh.new()
		stone.radius = 1.0
		stone.height = 2.0
		stone.radial_segments = 8
		stone.rings = 3
		var arrays := stone.surface_get_arrays(0)
		var vertices: PackedVector3Array = arrays[Mesh.ARRAY_VERTEX]
		for index in range(vertices.size()):
			var at := vertices[index]
			vertices[index]*=0.92+0.065*sin(at.x*4.1+at.z*3.6+2.1)
		arrays[Mesh.ARRAY_VERTEX]=vertices
		mesh=ArrayMesh.new()
		mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	else:
		var surface := SurfaceTool.new()
		surface.begin(Mesh.PRIMITIVE_TRIANGLES)
		for blade in range(4 if part == "grass" else 3):
			var angle := float(blade) * 2.39996
			var axis := Vector3(cos(angle), 0, sin(angle))
			var side := Vector3(-sin(angle), 0, cos(angle))
			var base := axis * 0.035
			var height := (0.22 + float(blade % 3) * 0.035) if part == "grass" else (0.36 + float(blade) * 0.065)
			var bend := base + axis * 0.11 + Vector3.UP * height * 0.6
			var tip := base + axis * (0.23 if part == "grass" else 0.13) + Vector3.UP * height
			var width := 0.045 if part == "grass" else 0.018
			_triangle(surface, base - side * width, base + side * width, bend + side * width)
			_triangle(surface, base - side * width, bend + side * width, bend - side * width)
			_triangle(surface, bend - side * width, bend + side * width, tip)
			if part == "reed":
				var leaf := base + Vector3.UP * height * 0.46
				_triangle(surface, leaf, leaf + axis * 0.21 + side * 0.045 + Vector3.UP * 0.11, leaf + axis * 0.32 + Vector3.UP * 0.07)
				_triangle(surface, leaf, leaf + axis * 0.32 + Vector3.UP * 0.07, leaf + axis * 0.21 - side * 0.045 + Vector3.UP * 0.11)
				_triangle(surface, tip - side * 0.023 - Vector3.UP * 0.07, tip + side * 0.023 - Vector3.UP * 0.07, tip + Vector3.UP * 0.065)
		surface.index()
		mesh = surface.commit()
	meshes[part] = mesh
	return mesh

func _triangle(surface: SurfaceTool, a: Vector3, b: Vector3, c: Vector3) -> void:
	for at: Vector3 in [a, b, c]:
		surface.set_normal(Vector3.UP)
		surface.set_uv(Vector2(0, clampf(at.y / 0.7, 0, 1)))
		surface.add_vertex(at)

func _material(part: String) -> Material:
	if materials.has(part): return materials[part]
	var material: Material
	if part == "stone":
		var stone := StandardMaterial3D.new()
		stone.vertex_color_use_as_albedo = true
		stone.roughness = 1.0
		material = stone
	else:
		var shader := Shader.new()
		shader.code = """
shader_type spatial;
render_mode cull_disabled, diffuse_burley, specular_disabled;
uniform float detail = 1.0;
varying vec4 tint;
varying float tip;
void vertex() {
	tint = COLOR;
	tip = UV.y;
	vec3 world = (MODEL_MATRIX * vec4(VERTEX, 1.0)).xyz;
	VERTEX.y *= mix(0.55, 1.0, detail);
	float wind = sin(TIME * 0.8 + world.x * 0.3 + world.z * 0.25);
	VERTEX.x += wind * 0.026 * tip * tip;
	VERTEX.z += wind * 0.013 * tip * tip;
}
void fragment() {
	vec3 up = (VIEW_MATRIX * vec4(0.0, 1.0, 0.0, 0.0)).xyz;
	NORMAL = up / max(length(up), 0.0001);
	ALBEDO = tint.rgb * mix(vec3(0.93, 0.98, 0.90), vec3(1.05), tip);
	ROUGHNESS = 1.0;
}
"""
		var foliage := ShaderMaterial.new()
		foliage.shader = shader
		foliage.set_shader_parameter("detail", detail)
		material = foliage
	materials[part] = material
	return material
