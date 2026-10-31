extends RefCounted
## Detached preview rows reuse immutable terrain caches; no transactions or save IDs.
const State = preload("res://scripts/world/city_creation_state.gd")
const Arcade = preload("res://scripts/world/city_creation_arcade_plan.gd")
const Conservatory = preload("res://scripts/world/city_creation_conservatory_plan.gd")
const Skybridge = preload("res://scripts/world/city_creation_skybridge_plan.gd")
const Shape = preload("res://scripts/world/city_creation_chemistry_shapes.gd")

static func fork(source: RefCounted) -> RefCounted:
	var city := State.new()
	for field: String in ["houses","roads","plants","waters","terrain_strokes","terrain_policy","districts","biome_seed","era_unlocks","creative_settings","placed_landmarks","harmony_journey","era_modifiers","music_mode","revision"]:
		city.set(field,source.get(field).duplicate() if source.get(field) is Array or source.get(field) is Dictionary else source.get(field))
	city._frontage_cache = source._frontage_cache.duplicate()
	city._ground_terrain.copy_cache_from(source._ground_terrain)
	city._ground_revision = source._ground_revision; city._raw_ground_revision = source._raw_ground_revision
	city._road_heights.copy_cache_from(source._road_heights)
	city._terrain_protection.copy_cache_from(source._terrain_protection)
	city._junctions.copy_cache_from(source._junctions)
	return city

static func house(city: RefCounted, id: String) -> Dictionary:
	for row: Dictionary in city.houses:
		if str(row.id) == id: return row
	return {}

static func building(source: RefCounted, candidate: Dictionary) -> Array:
	if not candidate.get("valid",false): return []
	var city := fork(source)
	var changed := {}
	if candidate.has("cell"):
		changed = house(source,str(candidate.house_id)).duplicate(true)
		if changed.is_empty(): return []
		for input: Dictionary in candidate.get("cells",[candidate.cell]):
			var cell: Dictionary = input.duplicate(true); cell.id = "preview_cell_"+str(changed.cells.size())
			changed.cells.append(cell)
		for i in range(city.houses.size()):
			if city.houses[i].id == changed.id: city.houses[i] = changed; break
	elif candidate.has("new_house"):
		var at: Vector2 = candidate.new_house
		changed = {"id":"preview_house","origin":[at.x,at.y],"base_y":candidate.get("base_y",0.),"role":"residential","cells":[{"id":"preview_cell","x":0,"z":0,"level":0,"kind":"room"}]}
		if candidate.has("cells"):
			changed.cells = candidate.cells.duplicate(true)
			for i in range(changed.cells.size()): changed.cells[i].id = "preview_cell_"+str(i)
		city.houses.append(changed)
	else: return []
	var rows: Array = []
	if candidate.has("new_house") or candidate.has("cells") or int(candidate.cell.level) == 0:
		var old := {}
		for court: Dictionary in source.courtyard_plans(): old[court.id] = true
		for court: Dictionary in city.courtyard_plans():
			if not old.has(court.id) and not court.fountain.is_empty(): rows.append(Shape.court(court))
	rows.append_array(_facades(source,city,changed))
	var old_house := house(source,str(changed.id))
	var old_glass := Conservatory.for_house(source,old_house) if not old_house.is_empty() else {}
	var glass := Conservatory.for_house(city,changed)
	if not glass.is_empty() and glass.get("signature") != old_glass.get("signature"): rows.append(Shape.glass(glass))
	var old_bridges := _bridges(source)
	for bridge: Dictionary in _bridges(city):
		if bridge not in old_bridges: rows.append(Shape.skybridge(bridge))
	return rows

static func _bridges(city: RefCounted) -> Array:
	var result: Array = []
	for row: Dictionary in city.houses:
		if city.house_era(row) == "modern_eco": result.append_array(Skybridge.for_house(city,row))
	return result

static func _facades(source: RefCounted, city: RefCounted, changed: Dictionary) -> Array:
	var before := house(source,str(changed.id))
	var old: Array = Arcade.for_house(source,before) if not before.is_empty() else []
	var rows: Array = []
	for face: Dictionary in Arcade.for_house(city,changed):
		if face not in old: rows.append(Shape.arcade(changed,face))
	return rows

static func road(source: RefCounted, points: Array[Vector2], width: float, style: String, valid: bool) -> Array:
	if not valid or points.size() < 2: return []
	var city := fork(source)
	var encoded: Array = []
	for point: Vector2 in points: encoded.append([point.x,point.y])
	var draft := {"id":"preview_road","points":encoded,"width":width,"style":style,"bridge":true}
	city.roads.append(draft)
	var rows: Array = []
	var bounds := Rect2(points[0],Vector2.ZERO)
	for point: Vector2 in points: bounds = bounds.expand(point)
	for row: Dictionary in city.houses:
		var near := false
		for cell: Dictionary in row.cells:
			if bounds.grow(width+2.).has_point(Vector2(row.origin[0]+cell.x*1.8,row.origin[1]+cell.z*1.8)): near = true; break
		if near: rows.append_array(_facades(source,city,row))
	city._road_heights.prepare(city)
	var profile: Dictionary = city.road_profile(draft)
	for run: Dictionary in profile.bridge_runs:
		if int(run.arch_count) == 2: rows.append(Shape.bridge(run))
	if not profile.treads.is_empty(): rows.append(Shape.stairs(profile.treads))
	return rows
