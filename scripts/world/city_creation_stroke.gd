class_name CityCreationStroke
extends RefCounted
## One pure path pipeline for both the preview and the committed road.
## Shared, limited Hermite tangents round freehand strokes; there is no grid.
const SPACING := 0.2
const FLATNESS := 0.035
const DUPLICATE_EPSILON_SQUARED := 0.000000000001
const FILLET_RADIUS := 0.85
const FILLET_ANGLE := 75.0
const FILLET_EDGE_SHARE := 0.45

## Locked straight spans retain every authored vertex. No RDP or Hermite pass
## may move a lock, including a deliberately collinear or backtracking lock.
static func polyline_points(raw: Array[Vector2]) -> Array[Vector2]:
	var result: Array[Vector2] = []
	for point in raw:
		if not point.is_finite(): continue
		if result.is_empty() or result[-1] != point: result.append(point)
	return result

static func road_points(raw: Array[Vector2], straight: bool = false) -> Array[Vector2]:
	var clean: Array[Vector2] = []
	for index in range(raw.size()):
		var point := raw[index]
		if not point.is_finite(): continue
		if clean.is_empty() or clean[-1].distance_squared_to(point) > DUPLICATE_EPSILON_SQUARED or (index == raw.size() - 1 and clean[-1] != point):
			clean.append(point)
	if clean.size() < 2: return clean
	if straight:
		if clean[0] == clean[-1]: return [clean[0]]
		return [clean[0],clean[-1]]
	# Removing inserted collinear samples first makes pointer event rate irrelevant
	# for the same authored polyline. The second step removes sub-pixel jitter.
	clean = _collinear(clean)
	clean = _simplify(clean,FLATNESS)
	if clean.size() == 2: return clean
	var tangents := _tangents(clean)
	var fillets := _fillets(clean)
	if not fillets.is_empty(): return _with_fillets(clean,tangents,fillets)
	var fine: Array[Vector2] = [clean[0]]
	for segment in range(clean.size() - 1):
		var length := clean[segment].distance_to(clean[segment + 1])
		var steps := maxi(4,int(ceil(length / 0.04)))
		for step in range(1,steps + 1):
			var t := float(step) / steps
			var t2 := t * t
			var t3 := t2 * t
			var point := (2.0 * t3 - 3.0 * t2 + 1.0) * clean[segment] + (t3 - 2.0 * t2 + t) * tangents[segment] + (-2.0 * t3 + 3.0 * t2) * clean[segment + 1] + (t3 - t2) * tangents[segment + 1]
			if fine[-1].distance_squared_to(point) > DUPLICATE_EPSILON_SQUARED: fine.append(point)
	var result := _arc_sample(fine)
	result[0] = clean[0]
	result[-1] = clean[-1]
	return result

## Only interior corners are trimmed: an authored closed seam remains an exact
## endpoint with its original shared tangent. A 180-degree reversal has no
## finite tangent circle, so it retains the existing stop-at-tip behavior.
static func _fillets(points: Array[Vector2]) -> Dictionary:
	var result := {}
	for index in range(1,points.size() - 1):
		var incoming := points[index] - points[index - 1]
		var outgoing := points[index + 1] - points[index]
		var direction_in := incoming.normalized()
		var direction_out := outgoing.normalized()
		var turn := direction_in.angle_to(direction_out)
		var angle := absf(turn)
		if angle <= deg_to_rad(FILLET_ANGLE) or angle >= PI - 0.0001: continue
		var tangent_factor := tan(angle * 0.5)
		var trim := minf(FILLET_RADIUS * tangent_factor,minf(incoming.length(),outgoing.length()) * FILLET_EDGE_SHARE)
		if trim <= 0.000001: continue
		var radius := trim / tangent_factor
		var entry := points[index] - direction_in * trim
		var exit := points[index] + direction_out * trim
		var center := entry + Vector2(-direction_in.y,direction_in.x) * signf(turn) * radius
		result[index] = {"entry":entry,"exit":exit,"center":center,"radius":radius,"turn":turn,"incoming":direction_in,"outgoing":direction_out}
	return result

static func _with_fillets(points: Array[Vector2], tangents: Array[Vector2], fillets: Dictionary) -> Array[Vector2]:
	var result: Array[Vector2] = [points[0]]
	for segment in range(points.size() - 1):
		for point: Vector2 in segment_points(points,tangents,fillets,segment): _append_unique(result,point)
	result[0] = points[0]
	result[-1] = points[-1]
	return result

## One local span, also used by the live brush after its neighbours settle.
static func segment_points(points: Array[Vector2],tangents: Array[Vector2],fillets: Dictionary,segment: int)->Array[Vector2]:
	var start: Vector2 = fillets[segment].exit if fillets.has(segment) else points[segment]
	var result: Array[Vector2] = [start]
	var end: Vector2 = fillets[segment + 1].entry if fillets.has(segment + 1) else points[segment + 1]
	var length := start.distance_to(end)
	var first_tangent: Vector2 = fillets[segment].outgoing * length * 0.75 if fillets.has(segment) else tangents[segment]
	var last_tangent: Vector2 = fillets[segment + 1].incoming * length * 0.75 if fillets.has(segment + 1) else tangents[segment + 1]
	# Avoid the old ordinary tangent spanning across a newly trimmed corner.
	var original_length := points[segment].distance_to(points[segment + 1])
	if not fillets.has(segment): first_tangent *= length / original_length
	if not fillets.has(segment + 1): last_tangent *= length / original_length
	var fine: Array[Vector2] = [start]
	var steps := maxi(4,int(ceil(length / 0.04)))
	for step in range(1,steps + 1):
		var t := float(step) / steps
		var t2 := t * t
		var t3 := t2 * t
		fine.append((2.0 * t3 - 3.0 * t2 + 1.0) * start + (t3 - 2.0 * t2 + t) * first_tangent + (-2.0 * t3 + 3.0 * t2) * end + (t3 - t2) * last_tangent)
	var connector := _arc_sample(fine)
	# Closed authored seams retain their shared Hermite tangent. Keep one
	# fine sample at each side rather than measuring it with a .2m chord.
	if points[0] == points[-1]:
		if segment == 0 and connector.size() > 1 and fine[1].distance_to(start) < connector[1].distance_to(start): connector.insert(1,fine[1])
		if segment == points.size() - 2 and connector.size() > 1 and fine[-2].distance_to(end) < connector[-2].distance_to(end): connector.insert(connector.size() - 1,fine[-2])
	for point in connector: _append_unique(result,point)
	if fillets.has(segment + 1):
		var arc: Dictionary = fillets[segment + 1]
		var radial: Vector2 = arc.entry - arc.center
		# Sample directly on the circle, preserving radius. Never Hermite or
		# chord-resample the arc afterward; only the connector is Hermite.
		var arc_steps := maxi(2,int(ceil(absf(arc.turn) * arc.radius / SPACING)))
		# Include the midpoint, which is the maximum inward deviation of a
		# symmetric turn and makes left/right evidence independent of parity.
		if arc_steps % 2 != 0: arc_steps += 1
		for step in range(1,arc_steps):
			_append_unique(result,arc.center + radial.rotated(arc.turn * float(step) / arc_steps))
		_append_unique(result,arc.exit)
	return result


static func _append_unique(points: Array[Vector2], point: Vector2) -> void:
	if points[-1].distance_squared_to(point) > DUPLICATE_EPSILON_SQUARED: points.append(point)

static func _collinear(points: Array[Vector2]) -> Array[Vector2]:
	var result: Array[Vector2] = []
	for point in points:
		while result.size() > 1:
			var before := result[-2]
			var middle := result[-1]
			var incoming := middle - before
			var outgoing := point - middle
			if incoming.dot(outgoing) < 0.0: break
			if _segment_distance(middle,before,point) > 0.00005: break
			result.pop_back()
		result.append(point)
	return result

static func _simplify(points: Array[Vector2], tolerance: float) -> Array[Vector2]:
	var keep := PackedByteArray()
	keep.resize(points.size())
	keep[0] = 1
	keep[-1] = 1
	var ranges: Array[Vector2i] = [Vector2i(0,points.size() - 1)]
	while not ranges.is_empty():
		var span: Vector2i = ranges.pop_back()
		var furthest := -1
		var distance := tolerance
		for index in range(span.x + 1,span.y):
			var candidate := _segment_distance(points[index],points[span.x],points[span.y])
			if candidate > distance:
				distance = candidate
				furthest = index
		if furthest >= 0:
			keep[furthest] = 1
			ranges.append(Vector2i(span.x,furthest))
			ranges.append(Vector2i(furthest,span.y))
	var result: Array[Vector2] = []
	for index in range(points.size()):
		if keep[index] != 0: result.append(points[index])
	return result

static func _segment_distance(point: Vector2, first: Vector2, last: Vector2) -> float:
	var segment := last - first
	var length_squared := segment.length_squared()
	if length_squared <= DUPLICATE_EPSILON_SQUARED: return point.distance_to(first)
	return point.distance_to(first + segment * clampf((point - first).dot(segment) / length_squared,0.0,1.0))

static func _tangents(points: Array[Vector2]) -> Array[Vector2]:
	var result: Array[Vector2] = []
	result.resize(points.size())
	var closed := points[0] == points[-1]
	for index in range(points.size()):
		if not closed and index == 0:
			result[index] = (points[1] - points[0]) * 0.75
			continue
		if not closed and index == points.size() - 1:
			result[index] = (points[-1] - points[-2]) * 0.75
			continue
		var previous := points[-2] if index == 0 else points[index - 1]
		var following := points[1] if index == points.size() - 1 else points[index + 1]
		var incoming := points[index] - previous
		var outgoing := following - points[index]
		var incoming_unit := incoming.normalized()
		var outgoing_unit := outgoing.normalized()
		var bisector := incoming_unit + outgoing_unit
		# A turn back onto itself stops at its tip. At a normal bend, both spans
		# share exactly one tangent. Short edges cannot create a long overshoot.
		var turn_weight := sqrt(maxf(0.0,(1.0 + incoming_unit.dot(outgoing_unit)) * 0.5))
		result[index] = bisector.normalized() * minf(incoming.length(),outgoing.length()) * 0.75 * turn_weight
	return result

static func _arc_sample(points: Array[Vector2]) -> Array[Vector2]:
	var result: Array[Vector2] = [points[0]]
	var remaining := SPACING
	for index in range(1,points.size()):
		var start := points[index - 1]
		var end := points[index]
		var distance := start.distance_to(end)
		while distance >= remaining:
			start = start.lerp(end,remaining / distance)
			if result[-1].distance_squared_to(start) > DUPLICATE_EPSILON_SQUARED: result.append(start)
			distance = start.distance_to(end)
			remaining = SPACING
		remaining -= distance
	if result[-1].distance_squared_to(points[-1]) > DUPLICATE_EPSILON_SQUARED:
		result.append(points[-1])
	else:
		result[-1] = points[-1]
	return result
