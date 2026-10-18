class_name CityCreationRoadIntent
extends RefCounted

## Authoring assistance only. State's complete road validator remains authoritative.
## Tiny Glade inspires continuous road joints; bank anchoring is a new Godot rule,
## not a claimed port of an unrecovered bridge algorithm.
const SNAP_RADIUS := 0.9
const BANK_RANGE := 0.5
const MAX_ANCHOR := 1.4
const DRY_MARGIN := 0.04


static func resolve(city: RefCounted, points: Array[Vector2], width: float = 1.25, soft_snap: bool=false) -> Dictionary:
	var result := {"points": points.duplicate(), "anchored_start": false, "anchored_end": false,
		"snapped_start": false, "snapped_end": false}
	if points.size() < 2 or not is_finite(width) or width <= 0.0:
		return result
	for point in points:
		if not is_finite(point.x) or not is_finite(point.y):
			return result
	var base: Array[Vector2] = points.duplicate()
	var target := width * 0.5 + DRY_MARGIN
	# The original stroke must actually enter water. Extending a bank skim must
	# never manufacture a crossing that the player did not draw.
	var first_clearance := float(city.water_clearance(points[0]))
	var last_clearance := float(city.water_clearance(points[-1]))
	var near_bank := (first_clearance >= -BANK_RANGE and first_clearance <= BANK_RANGE) or (last_clearance >= -BANK_RANGE and last_clearance <= BANK_RANGE)
	if near_bank and _contains_water_core(city, points):
		base[0] = _bank_anchor(city, points[0], points[0] - points[1], target)
		base[-1] = _bank_anchor(city, points[-1], points[-1] - points[-2], target)
	var starts := _snap_candidates(city, base[0], base[1], width,soft_snap)
	var ends := _snap_candidates(city, base[-1], base[-2], width,soft_snap)
	if base == points and starts.size() == 1 and ends.size() == 1:
		return result
	var base_check := _site_check(city, base, width)
	if not bool(base_check.get("ok", false)):
		# A failed proposed bank extension is not the original stroke's error.
		# Reuse a failure only when this check describes the returned exact points.
		if base == points: result.site_check = base_check
		return result
	result.anchored_start = base[0] != points[0]
	result.anchored_end = base[-1] != points[-1]
	var choices: Array[Dictionary] = []
	for first in starts:
		for last in ends:
			choices.append({"start": first, "end": last,
				"changed": int(first.changed) + int(last.changed),
				"distance": float(first.distance) + float(last.distance),
				"key": str(first.key) + "|" + str(last.key)})
	choices.sort_custom(func(a: Dictionary, b: Dictionary) -> bool:
		if a.changed != b.changed: return int(a.changed) > int(b.changed)
		if absf(float(a.distance) - float(b.distance)) > 0.000001:
			return float(a.distance) < float(b.distance)
		return str(a.key) < str(b.key))
	for choice in choices:
		var candidate: Array[Vector2] = base.duplicate()
		candidate[0] = choice.start.point
		candidate[-1] = choice.end.point
		if int(choice.changed) == 0:
			result.points = base
			result.site_check = base_check
			return result
		if not _endpoint_forward(candidate[0], candidate[1], base[0], base[1]): continue
		if not _endpoint_forward(candidate[-1], candidate[-2], base[-1], base[-2]): continue
		var candidate_check := _site_check(city, candidate, width)
		if not bool(candidate_check.get("ok", false)): continue
		result.points = candidate
		result.site_check = candidate_check
		result.snapped_start = candidate[0] != base[0]
		result.snapped_end = candidate[-1] != base[-1]
		return result
	result.points = base
	result.site_check = base_check
	return result


static func _site_check(city: RefCounted, points: Array[Vector2], width: float) -> Dictionary:
	var encoded: Array = []
	for point in points: encoded.append([point.x, point.y])
	return city._validate_road_site(encoded, width)


static func _contains_water_core(city: RefCounted, points: Array[Vector2]) -> bool:
	# Endpoint-only wet strokes cannot qualify: there must be a genuinely wetter
	# interior, with an original shore-facing endpoint on either side of it.
	var endpoint_depth := minf(float(city.water_clearance(points[0])), float(city.water_clearance(points[-1])))
	if endpoint_depth < -BANK_RANGE: return false
	for index in range(1, points.size()):
		var a := points[index - 1]
		var b := points[index]
		var count := maxi(1, int(ceil(a.distance_to(b) / 0.12)))
		for step in range(count + 1):
			var clearance := float(city.water_clearance(a.lerp(b, float(step) / float(count))))
			if clearance < -0.05 and clearance < endpoint_depth - 0.05:
				return true
	return false


static func _bank_anchor(city: RefCounted, point: Vector2, outward: Vector2, target: float) -> Vector2:
	var clearance := float(city.water_clearance(point))
	if clearance >= target or clearance < -BANK_RANGE or clearance > BANK_RANGE or outward.length_squared() < 0.000001:
		return point
	var direction := outward.normalized()
	# An outward extension must leave this shore immediately. A wet core in a
	# different part of a long stroke does not license drawing a new bridge here.
	if float(city.water_clearance(point + direction * 0.05)) <= clearance + 0.005:
		return point
	# First dry bracket, then deterministic bisection. The small extra margin
	# avoids float32 roundoff making a second resolve extend the point again.
	var lower := 0.0
	for step in range(1, 29):
		var upper := MAX_ANCHOR * float(step) / 28.0
		var sample_clearance := float(city.water_clearance(point + direction * upper))
		if sample_clearance < clearance - 0.005: return point
		if sample_clearance < target + 0.001:
			lower = upper
			continue
		for iteration in range(14):
			var middle := (lower + upper) * 0.5
			if float(city.water_clearance(point + direction * middle)) >= target + 0.001:
				upper = middle
			else:
				lower = middle
		return point + direction * upper
	return point


static func _snap_candidates(city: RefCounted, point: Vector2, neighbor: Vector2, width: float, soft_snap: bool=false) -> Array[Dictionary]:
	var original := {"point": point, "changed": false, "distance": 0.0, "key": "~"}
	var result: Array[Dictionary] = []
	# Preserve an authored door approach / arch entrance instead of dragging it
	# sideways merely because an older road happens to be close to that doorway.
	if _near_ground_house(city, point, width): return [original]
	for road in city.roads:
		var rows: Array = road.points
		for index in range(1, rows.size()):
			var a := Vector2(float(rows[index - 1][0]), float(rows[index - 1][1]))
			var b := Vector2(float(rows[index][0]), float(rows[index][1]))
			if a.distance_squared_to(b) < 0.000001: continue
			var closest := Geometry2D.get_closest_point_to_segment(point, a, b)
			var distance := point.distance_to(closest)
			if distance <= 0.00001: return [original]
			if distance > SNAP_RADIUS or not _endpoint_forward(closest, neighbor, point, neighbor): continue
			# Do not undo a real dry abutment by snapping onto a bridge deck.
			if float(city.water_clearance(point)) >= width * 0.5 + DRY_MARGIN and float(city.water_clearance(closest)) < width * 0.5 + DRY_MARGIN: continue
			var target:=point.lerp(closest,1.0-smoothstep(.18,SNAP_RADIUS,distance)) if soft_snap else closest
			var duplicate := false
			for existing in result:
				if target.distance_squared_to(existing.point) < 0.00000001:
					duplicate = true
					break
			if not duplicate:
				result.append({"point": target, "changed": target!=point, "distance": distance,
					"key": "%s/%08d" % [str(road.id), index]})
	result.append(original)
	return result


static func _endpoint_forward(point: Vector2, neighbor: Vector2, original: Vector2, original_neighbor: Vector2) -> bool:
	var before := original_neighbor - original
	var after := neighbor - point
	return after.length() >= 0.2 and before.dot(after) > 0.0


static func _near_ground_house(city: RefCounted, point: Vector2, width: float) -> bool:
	var constants: Dictionary = city.get_script().get_script_constant_map()
	var unit := float(constants.get("CELL_UNIT", 1.8))
	for house in city.houses:
		var origin := Vector2(float(house.origin[0]), float(house.origin[1]))
		for cell in house.cells:
			if int(cell.level) != 0: continue
			var center := origin + Vector2(float(cell.x), float(cell.z)) * unit
			if Rect2(center - Vector2.ONE * unit * 0.5, Vector2.ONE * unit).grow(width * 0.5 + 0.08).has_point(point):
				return true
	return false
