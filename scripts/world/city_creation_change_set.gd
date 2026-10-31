extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Immutable edit labels for staged simulation/render preparation.
## The producer records both old and new support bounds; consumers decide how
## far to propagate them. This mirrors CS2's explicit change tags without
## sharing live Nodes or GPU resources with worker threads.

const DOMAINS := ["houses", "roads", "waters", "terrain", "plants"]

static func snapshot(state: RefCounted) -> Dictionary:
	return {
		"revision": int(state.revision),
		"terrain_policy":state.terrain_policy,
		"houses": state.houses.duplicate(true),
		"roads": state.roads.duplicate(true),
		"waters": state.waters.duplicate(true),
		"terrain": state.terrain_strokes.duplicate(true),
		"plants": state.plants.duplicate(true),
	}

static func diff(previous: Dictionary, current: Dictionary) -> Dictionary:
	var labels: Array[String] = []
	var counts: Dictionary = {}
	var bounds: Array[Dictionary] = []
	if previous.get("terrain_policy",1)!=current.get("terrain_policy",1):labels.append("terrain");counts.terrain=1;bounds.append({"domain":"terrain","old":preload("res://scripts/world/city_creation_bounds.gd").LAND_RECT,"new":preload("res://scripts/world/city_creation_bounds.gd").LAND_RECT})
	for domain: String in DOMAINS:
		var old_rows: Array = previous.get(domain, [])
		var new_rows: Array = current.get(domain, [])
		var changed := _changed_rows(domain, old_rows, new_rows)
		if changed.is_empty() and not previous.is_empty():
			continue
		labels.append(domain)
		counts[domain] = changed.size() if not previous.is_empty() else maxi(old_rows.size(), new_rows.size())
		if previous.is_empty():
			for row: Dictionary in new_rows:
				bounds.append({"domain": domain, "old": Rect2(), "new": _bounds(domain, row)})
		else:
			for row: Dictionary in changed:
				var key := _row_key(row)
				var old_row: Dictionary = _find(old_rows, key)
				var new_row: Dictionary = _find(new_rows, key)
				bounds.append({"domain": domain, "old": _bounds(domain, old_row), "new": _bounds(domain, new_row)})
	return {
		"labels": labels,
		"counts": counts,
		"bounds": bounds,
		"previous_revision": int(previous.get("revision", -1)),
		"revision": int(current.get("revision", -1)),
	}

static func _changed_rows(domain: String, old_rows: Array, new_rows: Array) -> Array:
	var old_map: Dictionary = {}
	var new_map: Dictionary = {}
	for row: Dictionary in old_rows: old_map[_row_key(row)] = row
	for row: Dictionary in new_rows: new_map[_row_key(row)] = row
	var changed: Array = []
	var keys: Array = old_map.keys()
	for key: Variant in new_map.keys():
		if not keys.has(key): keys.append(key)
	keys.sort()
	for key: Variant in keys:
		if old_map.get(key, null) != new_map.get(key, null):
			changed.append(new_map.get(key, old_map.get(key, {})))
	return changed

static func _find(rows: Array, key: String) -> Dictionary:
	for row: Dictionary in rows:
		if _row_key(row) == key: return row
	return {}

static func _row_key(row: Dictionary) -> String:
	if row.has("id"): return str(row.id)
	return "index:" + str(hash(row))

static func _bounds(domain: String, row: Dictionary) -> Rect2:
	if row.is_empty(): return Rect2()
	var points: Array = row.get("points", [])
	if points.is_empty() and row.has("origin"):
		var origin: Variant = row.origin
		var at := Vector2(float(origin[0]), float(origin[1]))
		var footprint := Rect2(at-Vector2.ONE,Vector2.ONE*2.)
		for cell: Dictionary in row.get("cells",[]):
			if int(cell.level)!=0: continue
			var center := at+Vector2(float(cell.x),float(cell.z))*1.8
			footprint=footprint.merge(Frame.bounds(Frame.footprint(row,cell,.1)))
		return footprint.grow(.5)
	if points.is_empty() and row.has("position"):
		var position: Variant = row.position
		var at := Vector2(float(position[0]), float(position[1]))
		return Rect2(at, Vector2.ZERO).grow(0.5)
	if points.is_empty(): return Rect2()
	var first: Array = points[0]
	var result := Rect2(Vector2(float(first[0]), float(first[1])), Vector2.ZERO)
	for point: Array in points:
		result = result.expand(Vector2(float(point[0]), float(point[1])))
	var radius := float(row.get("radius", 0.0))
	if domain in ["roads", "waters"]: radius += float(row.get("width", 0.0)) * 0.5
	return result.grow(radius)
