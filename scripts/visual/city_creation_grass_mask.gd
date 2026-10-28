class_name CityCreationGrassMask
extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Dirty-block-only spatial index of production vegetation predicates.
## House neighbours are resolved once, not scanned for each grass candidate.
const State := preload("res://scripts/world/city_creation_state.gd")
const Frontage := preload("res://scripts/world/city_creation_frontage.gd")
const BLOCK_SIZE := 8.0
const BIN_SIZE := 1.0
const BIN_COUNT := 8
const BIN_PADDING := 0.0
const MAX_CLEARANCE := 0.42 * 0.25
const EDGE_DISTANCE := 0.65

class Bin extends RefCounted:
	var footprints: Array = []
	var doors := PackedVector2Array()
	var capsules: Array[Capsule] = []
	var edge_footprints: Array = []
	var edge_doors := PackedVector2Array()
	var edge_capsules: Array[Capsule] = []

class Capsule extends RefCounted:
	var a: Vector2
	var b: Vector2
	var length_squared: float
	var radius: float
	var water: bool

var _origin := Vector2.ZERO
var _bounds := Rect2()
var _bins: Array[Bin] = []
var _stats: Dictionary = {}

func setup(state: RefCounted, block: Vector2i, entrances_by_house: Dictionary = {}, obstacle_index:RefCounted=null) -> void:
	var started := Time.get_ticks_usec()
	_origin = Vector2(block) * BLOCK_SIZE
	_bounds = Rect2(_origin, Vector2.ONE * BLOCK_SIZE)
	_bins.clear()
	for index in range(BIN_COUNT * BIN_COUNT):
		_bins.append(Bin.new())
	if obstacle_index!=null:obstacle_index.populate(self,block)
	else:_collect_legacy(state,entrances_by_house)
	var houses := 0
	var roads := 0
	var waters := 0
	var max_segments := 0
	for bin: Bin in _bins:
		houses += bin.footprints.size()
		for capsule: Capsule in bin.capsules:
			if capsule.water:
				waters += 1
			else:
				roads += 1
		max_segments = maxi(max_segments, bin.capsules.size())
	_stats = {"bins": _bins.size(), "house_references": houses, "road_segments": roads,
		"water_segments": waters, "max_bin_segments": max_segments,
		"setup_ms": float(Time.get_ticks_usec() - started) / 1000.0}

func _collect_legacy(state:RefCounted,entrances_by_house:Dictionary)->void:
	for landmark:Dictionary in state.placed_landmarks:
		var fp:Variant=load("res://scripts/world/city_creation_placed_landmarks.gd").footprint(landmark)
		for index:int in _indices(Frame.bounds(Frame.grow(fp,MAX_CLEARANCE))):_bins[index].footprints.append(fp)
		for index:int in _indices(Frame.bounds(Frame.grow(fp,EDGE_DISTANCE))):_bins[index].edge_footprints.append(fp)
	# Ground solids suppress grass only; authored tree/shrub visibility stays separate.
	for fp:Variant in preload("res://scripts/visual/city_creation_street_furniture_footprints.gd").plans(state):
		for index:int in _indices(Frame.bounds(Frame.grow(fp,MAX_CLEARANCE))):_bins[index].footprints.append(fp)
		for index:int in _indices(Frame.bounds(Frame.grow(fp,EDGE_DISTANCE))):_bins[index].edge_footprints.append(fp)
	var wonders:Dictionary=preload("res://scripts/world/city_creation_street_wonder_plan.gd").derive(state)
	for pocket:Dictionary in wonders.pockets:_add_segment(pocket.at,pocket.at,float(pocket.radius),false)
	for pier:Dictionary in wonders.piers:_add_segment(pier.start,pier.end,.46,false)
	for court: Dictionary in state.courtyard_plans():
		for footprint:Variant in court.tiles:
			for index: int in _indices(Frame.bounds(Frame.grow(footprint,MAX_CLEARANCE))):
				_bins[index].footprints.append(footprint)
			for index: int in _indices(Frame.bounds(Frame.grow(footprint,EDGE_DISTANCE))):
				_bins[index].edge_footprints.append(footprint)
	for house: Dictionary in state.get("houses"):
		for cell: Dictionary in house.cells:
			if int(cell.level) != 0:
				continue
			var at := Vector2(float(house.origin[0]) + int(cell.x) * State.CELL_UNIT, float(house.origin[1]) + int(cell.z) * State.CELL_UNIT)
			var footprint:Variant=Frame.footprint(house,cell)
			for index: int in _indices(Frame.bounds(Frame.grow(footprint,MAX_CLEARANCE))):
				_bins[index].footprints.append(footprint)
			for index: int in _indices(Frame.bounds(Frame.grow(footprint,EDGE_DISTANCE))):
				_bins[index].edge_footprints.append(footprint)
		var key := str(house.get("id",str(house.origin)))
		var entrances: Array = entrances_by_house[key] if entrances_by_house.has(key) else state.house_entrances(str(house.id)) if house.has("id") else Frontage.entrances(house, state.get("roads"))
		for entrance: Dictionary in entrances:
			var radius := 0.95 + MAX_CLEARANCE
			var door: Vector2 = entrance.clearance_at
			var doorway := Rect2(door - Vector2.ONE * radius, Vector2.ONE * radius * 2.0)
			for index: int in _indices(doorway):
				_bins[index].doors.append(door)
			for index: int in _indices(doorway.grow(EDGE_DISTANCE - MAX_CLEARANCE)):
				_bins[index].edge_doors.append(door)
	for road: Dictionary in state.get("roads"):
		for marker: Dictionary in road.get("roundabouts",[]):
			var center:=Vector2(marker.center[0],marker.center[1])
			_add_segment(center,center,float(marker.radius)+.15,false)
		for index in range(1, road.points.size()):
			var a := Vector2(float(road.points[index - 1][0]), float(road.points[index - 1][1]))
			var b := Vector2(float(road.points[index][0]), float(road.points[index][1]))
			_add_segment(a, b, float(road.width) * 0.5 + 0.45, false)
	for water: Dictionary in state.get("waters"):
		for index in range(maxi(1, water.points.size() - 1)):
			var a := Vector2(float(water.points[index][0]), float(water.points[index][1]))
			var next := mini(index + 1, water.points.size() - 1)
			var b := Vector2(float(water.points[next][0]), float(water.points[next][1]))
			_add_segment(a, b, float(water.width) * 0.5, true)

func visible(at: Vector2, scale: float) -> bool:
	if scale <= 0.0 or not _bounds.has_point(at) or not State.WORLD_RECT.has_point(at):
		return false
	var clearance := 0.42 * scale
	if absf(at.x - State.river_x(at.y)) - State.RIVER_HALF_WIDTH <= clearance:
		return false
	var local := at - _origin
	var index := floori(local.y / BIN_SIZE) * BIN_COUNT + floori(local.x / BIN_SIZE)
	var bin: Bin = _bins[index]
	for footprint:Variant in bin.footprints:
		if Frame.contains(Frame.grow(footprint,clearance),at):
			return false
	for door: Vector2 in bin.doors:
		if at.distance_to(door) <= 0.95 + clearance:
			return false
	for capsule: Capsule in bin.capsules:
		var a := capsule.a
		var b := capsule.b
		var length_squared := capsule.length_squared
		var distance := 0.0
		if length_squared <= 0.000001:
			distance = at.distance_to(a)
		else:
			var t := clampf((at - a).dot(b - a) / length_squared, 0.0, 1.0)
			distance = at.distance_to(a.lerp(b, t))
		# Preserve production operation order at capsule boundaries: water
		# uses distance minus half-width, roads use distance <= width+clearance.
		if capsule.water:
			if distance - capsule.radius <= clearance:
				return false
		elif distance <= capsule.radius + clearance:
			return false
	return true

func continuous_edge(at: Vector2) -> Dictionary:
	# Visual influence only. visible() remains the production geometry truth;
	# in particular its square footprint margins are not replaced by this SDF.
	if not _bounds.has_point(at):
		return {"clearance": EDGE_DISTANCE, "push": Vector2.ZERO}
	var best := EDGE_DISTANCE
	var push := Vector2.ZERO
	var river_offset := at.x - State.river_x(at.y)
	var river_distance := absf(river_offset) - State.RIVER_HALF_WIDTH
	if river_distance < best:
		best = river_distance
		push = Vector2.LEFT if river_offset < 0.0 else Vector2.RIGHT
	var local := at - _origin
	var index := floori(local.y / BIN_SIZE) * BIN_COUNT + floori(local.x / BIN_SIZE)
	var bin: Bin = _bins[index]
	for footprint:Variant in bin.edge_footprints:
		var edge := _rect_edge(at, footprint)
		if edge.z < best:
			best = edge.z
			push = Vector2(edge.x, edge.y)
	for door: Vector2 in bin.edge_doors:
		var offset := at - door
		var distance := offset.length() - 0.95
		if distance < best:
			best = distance
			push = offset.normalized() if offset.length_squared() > 0.000001 else Vector2.RIGHT
	for capsule: Capsule in bin.edge_capsules:
		var nearest := capsule.a
		if capsule.length_squared > 0.000001:
			var t := clampf((at - capsule.a).dot(capsule.b - capsule.a) / capsule.length_squared, 0.0, 1.0)
			nearest = capsule.a.lerp(capsule.b, t)
		var offset := at - nearest
		var distance := offset.length() - capsule.radius
		if distance < best:
			best = distance
			if offset.length_squared() > 0.000001:
				push = offset.normalized()
			elif capsule.length_squared > 0.000001:
				var along := capsule.b - capsule.a
				push = Vector2(-along.y, along.x).normalized()
			else:
				push = Vector2.RIGHT
	return {"clearance": best, "push": push}

func _rect_edge(at: Vector2, footprint:Variant) -> Vector3:
	if footprint is Dictionary and footprint.has("polygon"):
		var poly:PackedVector2Array=footprint.polygon;var nearest:=Vector2.ZERO;var best:=INF
		for i in range(poly.size()):
			var p:=Geometry2D.get_closest_point_to_segment(at,poly[i],poly[(i+1)%poly.size()]);var distance:=at.distance_to(p)
			if distance<best:best=distance;nearest=p
		var inside:=Frame.contains(footprint,at);var push:Vector2=(nearest-at if inside else at-nearest).normalized()
		return Vector3(push.x,push.y,-best if inside else best)
	if footprint is Dictionary:
		var edge:=_rect_edge(Frame.local_point(footprint,at),Frame.rect(footprint));var push:=Vector2(edge.x,edge.y).rotated(-float(footprint.angle));return Vector3(push.x,push.y,edge.z)
	var offset:Vector2=at-footprint.get_center()
	var q:Vector2=offset.abs()-footprint.size*.5
	var outside := Vector2(maxf(q.x, 0.0), maxf(q.y, 0.0))
	var distance := outside.length() + minf(maxf(q.x, q.y), 0.0)
	var push := Vector2.ZERO
	if outside.length_squared() > 0.0:
		push = Vector2(outside.x * (-1.0 if offset.x < 0.0 else 1.0), outside.y * (-1.0 if offset.y < 0.0 else 1.0)).normalized()
	elif q.x >= q.y:
		push = Vector2.LEFT if offset.x < 0.0 else Vector2.RIGHT
	else:
		push = Vector2.UP if offset.y < 0.0 else Vector2.DOWN
	return Vector3(push.x, push.y, distance)

func _add_segment(a: Vector2, b: Vector2, radius: float, water: bool) -> void:
	var capsule := Capsule.new()
	capsule.a = a
	capsule.b = b
	capsule.length_squared = a.distance_squared_to(b)
	capsule.radius = radius
	capsule.water = water
	for index: int in _indices(_segment_bounds(a, b, radius + MAX_CLEARANCE)):
		_bins[index].capsules.append(capsule)
	for index: int in _indices(_segment_bounds(a, b, radius + EDGE_DISTANCE)):
		_bins[index].edge_capsules.append(capsule)

func stats() -> Dictionary:
	return _stats.duplicate()

func _segment_bounds(a: Vector2, b: Vector2, radius: float) -> Rect2:
	return Rect2(Vector2(minf(a.x, b.x), minf(a.y, b.y)), Vector2(absf(a.x - b.x), absf(a.y - b.y))).grow(radius)

func _indices(bounds: Rect2) -> Array[int]:
	var result: Array[int] = []
	# Obstacle bounds contain both the supported shrub margin and visual edge.
	# Final predicates keep the production inclusive/exclusive edge behavior.
	var expanded := bounds.grow(BIN_PADDING)
	if not expanded.intersects(_bounds, true):
		return result
	var first := Vector2i(floori((expanded.position.x - _origin.x) / BIN_SIZE), floori((expanded.position.y - _origin.y) / BIN_SIZE))
	var last := Vector2i(floori((expanded.end.x - _origin.x) / BIN_SIZE), floori((expanded.end.y - _origin.y) / BIN_SIZE))
	for z in range(maxi(0, first.y), mini(BIN_COUNT - 1, last.y) + 1):
		for x in range(maxi(0, first.x), mini(BIN_COUNT - 1, last.x) + 1):
			result.append(z * BIN_COUNT + x)
	return result
