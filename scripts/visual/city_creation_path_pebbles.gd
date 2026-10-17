extends RefCounted
const DetailLod=preload("res://scripts/visual/city_creation_detail_lod.gd")
## Original low-poly stones. The local Tiny Glade path_pebbles compute shader
## informs stable scatter + path/water masking; no recovered mesh is used.
const State := preload("res://scripts/world/city_creation_state.gd")
const Frontage := preload("res://scripts/world/city_creation_frontage.gd")
const BLOCK_SIZE := 8.0
const VARIANTS := 3
var city: RefCounted
var footprints: Array[Rect2] = []
var doors: Array[Vector2] = []
var segments: Array[Dictionary] = []
var meshes: Array[Mesh] = []
var material: ShaderMaterial
var detail := 1.0
var batches:Array[WeakRef]=[]
var _geometry: Array = []
var _layout_cache: Dictionary = {}
var _record_cache: Dictionary = {}
var _junction_bins: Dictionary = {}

func prepare(city_state: RefCounted) -> void:
	city = city_state
	var junctions: RefCounted = city.road_junctions()
	var geometry: Array = []
	for house: Dictionary in city.houses:
		var cells: Array = []
		for cell: Dictionary in house.cells:
			if int(cell.level) == 0: cells.append([cell.x, cell.z, cell.kind])
		geometry.append([house.id, house.origin, cells])
	for road: Dictionary in city.roads: geometry.append([road.id, road.points, road.width,junctions.signature(str(road.id))])
	for water: Dictionary in city.waters: geometry.append([water.id, water.points, water.width])
	for road: Dictionary in city.roads: geometry.append(city.road_profile(road).signature)
	if geometry == _geometry: return
	_geometry = geometry.duplicate(true)
	_record_cache.clear()
	footprints.clear()
	doors.clear()
	segments.clear()
	_junction_bins.clear()
	for house: Dictionary in city.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level) == 0:
				footprints.append(Rect2(Frontage.center(house, cell) - Vector2.ONE * 0.9, Vector2.ONE * 1.8))
		for entrance: Dictionary in city.house_entrances(str(house.id)):
			doors.append(entrance.clearance_at)
	for road: Dictionary in city.roads:
		var points := _points(road.points)
		for index in range(1, points.size()):
			segments.append({"id": str(road.id), "a": points[index - 1], "b": points[index], "radius": float(road.width) * 0.5 + 0.10})
		for polygon: PackedVector2Array in junctions.additions(str(road.id)):
			var bounds:=Rect2(polygon[0],Vector2.ZERO)
			for point: Vector2 in polygon: bounds=bounds.expand(point)
			# Pebble candidate radii are <=.12m. Bin a conservative envelope so
			# per-stone checks use prepared polygons, never prepare the city again.
			var envelope:=bounds.grow(0.23)
			var record: Dictionary={"id":str(road.id),"polygon":polygon,"bounds":bounds}
			for y in range(floori(envelope.position.y),floori(envelope.end.y)+1):
				for x in range(floori(envelope.position.x),floori(envelope.end.x)+1):
					var key:=Vector2i(x,y)
					if not _junction_bins.has(key): _junction_bins[key]=[]
					_junction_bins[key].append(record)
	var live := {}
	for road: Dictionary in city.roads: live[str(road.id)] = true
	for id: String in _layout_cache.keys():
		if not live.has(id): _layout_cache.erase(id)

func signature(road: Dictionary) -> Array:
	# Fingerprint actual survivors, not every distant object. A changed doorway,
	# room, junction or pond invalidates only roads whose stones really change.
	return [hash(records(road))]

func set_view_scale(zoom: float) -> void:
	# Continuous shrink below the turf, without mesh replacement or random drift.
	var next:=1.0-smoothstep(16.0,28.0,zoom)
	if next==detail:return
	detail=next
	if material != null: material.set_shader_parameter("detail", detail)
	apply_view_detail()

func apply_view_detail()->void:
	var live:Array[WeakRef]=[]
	for entry:WeakRef in batches:
		var multi:MultiMesh=entry.get_ref()
		if multi!=null:multi.visible_instance_count=0 if detail<=0. else -1;live.append(entry)
	batches=live

func build(_renderer: Node3D, road: Dictionary, parent: Node3D) -> Dictionary:
	var candidates := layout(road)
	var rows := records(road)
	var groups := {}
	for record: Dictionary in rows:
		var block := Vector2i(floori(record.at.x / BLOCK_SIZE), floori(record.at.y / BLOCK_SIZE))
		var key := Vector3i(block.x, block.y, int(record.variant))
		if not groups.has(key): groups[key] = []
		groups[key].append(record)
	for key: Vector3i in groups:
		var block_origin := Vector3(float(key.x) * BLOCK_SIZE, 0, float(key.y) * BLOCK_SIZE)
		var multi := MultiMesh.new()
		multi.transform_format = MultiMesh.TRANSFORM_3D
		multi.use_colors = true
		multi.mesh = _mesh(key.z)
		multi.instance_count = groups[key].size()
		var bounds := AABB(Vector3(-0.14,-0.1,-0.14),Vector3(8.28,0.25,8.28))
		for index in range(groups[key].size()):
			var record: Dictionary = groups[key][index]
			var transform: Transform3D = record.transform
			transform.origin -= block_origin
			bounds=bounds.expand(transform.origin+Vector3.UP*0.10).expand(transform.origin-Vector3.UP*0.10)
			multi.set_instance_transform(index, transform)
			multi.set_instance_color(index, record.tint)
		multi.custom_aabb=bounds
		var instance := MultiMeshInstance3D.new()
		instance.name = "PathPebbles_%d_%d_%d" % [key.x, key.y, key.z]
		DetailLod.bind(instance,DetailLod.PEBBLES)
		multi.visible_instance_count=0 if detail<=0. else -1
		batches.append(weakref(multi))
		instance.position = block_origin
		instance.multimesh = multi
		instance.material_override = _material()
		instance.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
		parent.add_child(instance)
	parent.set_meta("path_pebbles_records", rows)
	return {"instances": rows.size(), "batches": groups.size(), "candidates": candidates.size()}

func records(road: Dictionary) -> Array[Dictionary]:
	var id := str(road.id)
	var fingerprint := hash([road.points, road.width])
	var cached: Dictionary = _record_cache.get(id, {})
	if cached.get("fingerprint", -1) == fingerprint: return cached.records
	var result: Array[Dictionary] = []
	for record: Dictionary in layout(road):
		if _clear(record, str(road.id)):
			var elevated := record.duplicate(true)
			var transform: Transform3D=elevated.transform
			transform.origin.y=city.street_height(record.at)+0.006
			elevated.transform=transform
			result.append(elevated)
	_record_cache[id] = {"fingerprint": fingerprint, "records": result}
	return result

func layout(road: Dictionary) -> Array[Dictionary]:
	var id := str(road.id)
	var fingerprint := hash([road.points, road.width])
	var cached: Dictionary = _layout_cache.get(id, {})
	if cached.get("fingerprint", -1) == fingerprint: return cached.records
	var points := _points(road.points)
	var result: Array[Dictionary] = []
	if points.size() < 2: return result
	var lengths: Array[float] = [0.0]
	for index in range(1, points.size()):
		lengths.append(lengths[-1] + points[index - 1].distance_to(points[index]))
	for side: int in [-1, 1]:
		var rng := RandomNumberGenerator.new()
		# Redundant collinear samples are removed before seeding and sampling.
		# Masking never consumes random values, so edits cannot shift survivors.
		rng.seed = hash([str(road.id), points, road.width, side, 41917])
		var distance := rng.randf_range(0.20, 0.65)
		var index := 1
		while distance < lengths[-1] - 0.15:
			while index < points.size() - 1 and lengths[index] < distance: index += 1
			var tangent := (points[index] - points[index - 1]).normalized()
			var center := points[index - 1].lerp(points[index], (distance - lengths[index - 1]) / (lengths[index] - lengths[index - 1]))
			var offset := float(road.width) * 0.5 * 0.88 + rng.randf_range(-0.045, 0.045)
			var at := center + Vector2(-tangent.y, tangent.x) * float(side) * offset
			var skip := rng.randf() < 0.30
			var scale_value := Vector3(rng.randf_range(0.065, 0.12), rng.randf_range(0.021, 0.036), rng.randf_range(0.045, 0.085))
			var yaw := rng.randf_range(0.0, TAU)
			var variant := rng.randi_range(0, VARIANTS - 1)
			var tint := Color("b8b097").srgb_to_linear().lerp(Color("d1c7aa").srgb_to_linear(), rng.randf())
			if not skip:
				result.append({"at": at, "arc": distance, "side": side, "variant": variant,
					"radius": maxf(scale_value.x, scale_value.z), "tint": tint,
					"transform": Transform3D(Basis(Vector3.UP, yaw).scaled(scale_value), Vector3(at.x, 0.061, at.y))})
			distance += rng.randf_range(0.45, 0.95)
	_layout_cache[id] = {"fingerprint": fingerprint, "records": result}
	return result

func _clear(record: Dictionary, own_id: String) -> bool:
	var at: Vector2 = record.at
	var radius: float = record.radius
	if not State.WORLD_RECT.grow(-radius).has_point(at): return false
	# The meandering analytic river's distance field is at most 1.004-Lipschitz;
	# authored capsule distances are 1-Lipschitz. This conservative circle covers
	# every point of the ellipse, including segments between sampled vertices.
	# The extra .65 m also keeps pebbles off raised bridge approach ramps.
	if city.water_clearance(at) <= 0.65 + radius * 1.005: return false
	for footprint: Rect2 in footprints:
		if footprint.grow(radius + 0.06).has_point(at): return false
	for door: Vector2 in doors:
		if at.distance_to(door) <= 0.95 + radius + 0.03: return false
	for segment: Dictionary in segments:
		if str(segment.id) == own_id: continue
		if at.distance_to(Geometry2D.get_closest_point_to_segment(at, segment.a, segment.b)) <= float(segment.radius) + radius: return false
	for junction: Dictionary in _junction_bins.get(Vector2i(floori(at.x),floori(at.y)),[]):
		if str(junction.id)==own_id or not junction.bounds.grow(radius+0.10).has_point(at): continue
		var polygon: PackedVector2Array=junction.polygon
		if Geometry2D.is_point_in_polygon(at,polygon): return false
		for index in range(polygon.size()):
			var nearest:=Geometry2D.get_closest_point_to_segment(at,polygon[index],polygon[(index+1)%polygon.size()])
			if at.distance_to(nearest)<=radius+0.10: return false
	return true

func _points(raw: Array) -> Array[Vector2]:
	var result: Array[Vector2] = []
	for row: Array in raw:
		var at := Vector2(float(row[0]), float(row[1]))
		if not result.is_empty() and at.distance_squared_to(result[-1]) < 0.00000001: continue
		while result.size() > 1:
			var a := result[-1] - result[-2]
			var b := at - result[-1]
			if a.dot(b) <= 0 or absf(a.cross(b)) > 0.000001 * a.length() * b.length(): break
			result.pop_back()
		result.append(at)
	return result

func _mesh(variant: int) -> Mesh:
	while meshes.size() < VARIANTS:
		var shape := SphereMesh.new()
		shape.radius = 1.0
		shape.height = 2.0
		shape.radial_segments = 8
		shape.rings = 3
		var arrays := shape.surface_get_arrays(0)
		var vertices: PackedVector3Array = arrays[Mesh.ARRAY_VERTEX]
		for index in range(vertices.size()):
			var at := vertices[index]
			var factor := 0.92 + 0.065 * sin(at.x * 4.1 + at.z * 3.6 + float(meshes.size()) * 2.1)
			vertices[index] *= factor
		arrays[Mesh.ARRAY_VERTEX] = vertices
		var mesh := ArrayMesh.new()
		mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES, arrays)
		meshes.append(mesh)
	return meshes[variant]

func _material() -> ShaderMaterial:
	if material != null: return material
	var shader := Shader.new()
	shader.code = """
shader_type spatial;
render_mode diffuse_burley, specular_disabled;
uniform float detail = 1.0;
varying vec4 tint;
void vertex() {
	tint = COLOR;
	VERTEX *= detail;
}
void fragment() {
	ALBEDO = tint.rgb;
	ROUGHNESS = 0.95;
}
"""
	material = ShaderMaterial.new()
	material.shader = shader
	material.set_shader_parameter("detail", detail)
	return material
