extends RefCounted
## Derived paving inside genuinely closed ground-room rings. No authored state,
## height, scene node or rendering resource is changed by this planner.
const Frontage = preload("res://scripts/world/city_creation_frontage.gd")
const CafePlans = preload("res://scripts/world/city_creation_cafe_layout_context.gd")
const Junctions = preload("res://scripts/world/city_creation_junctions.gd")
const UNIT := 1.8
const ALIGN := 0.002
const FOUNTAIN_RADIUS := 0.73
const SIDES := [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]
var rebuild_count := 0
var _signature: Variant = null
var _plant_signature: Variant = null
var _cache: Array[Dictionary] = []
var _holes: Array[Dictionary] = []
var _obstacles: Dictionary = {}


func copy_cache_from(source: RefCounted) -> void:
	# Published arrays/dictionaries are never edited. Each rebuild replaces them.
	_signature = source._signature
	_plant_signature = source._plant_signature
	_cache.assign(source._cache)
	_holes.assign(source._holes)
	_obstacles = source._obstacles.duplicate()
	rebuild_count = source.rebuild_count


func plans(city: RefCounted) -> Array[Dictionary]:
	var geometry: Array = []
	for house: Dictionary in city.houses:
		geometry.append([house.id,house.origin,house.cells,house.get("role",""),house.get("base_y",0.0)])
	var signature := hash([geometry,city.roads,city.waters])
	var plant_signature := hash(city.plants)
	if _signature != signature:
		_signature = signature
		_holes = _find_holes(city)
		_obstacles = _make_obstacles(city)
		rebuild_count += 1
		_plant_signature = null
	# Trees affect only decoration, not room topology or paving. Keep one current
	# result, including when a copied preparation is published in another context.
	if _plant_signature != plant_signature:
		_plant_signature = plant_signature
		var next: Array[Dictionary] = []
		for hole: Dictionary in _holes:
			var plan := hole.duplicate(true)
			plan.planters = _planters(city,plan.tiles)
			plan.fountain = _fountain(city,plan,_obstacles)
			next.append(plan)
		_cache = next
	return _cache.duplicate(true)


func _find_holes(city: RefCounted) -> Array[Dictionary]:
	var rooms: Array[Dictionary] = []
	var footprints: Array[Rect2] = []
	var bins: Dictionary = {}
	for house: Dictionary in city.houses:
		for cell: Dictionary in house.cells:
			var at := Frontage.center(house,cell)
			footprints.append(Rect2(at-Vector2.ONE*0.9,Vector2.ONE*UNIT))
			if int(cell.level)!=0 or str(cell.kind)!="room": continue
			var key := _bin(at)
			if not bins.has(key): bins[key] = []
			bins[key].append(rooms.size())
			rooms.append({"at":at,"house":str(house.id),"base_y":float(house.get("base_y",0.0))})
	var seen: Dictionary = {}
	var result: Array[Dictionary] = []
	for start in range(rooms.size()):
		if seen.has(start): continue
		var group: Array[int] = [start]
		seen[start] = true
		var cursor := 0
		while cursor<group.size():
			var at: Vector2 = rooms[group[cursor]].at
			cursor += 1
			for side: Vector2i in SIDES:
				var target := at+Vector2(side)*UNIT
				var bucket := _bin(target)
				for dx in range(-1,2):
					for dz in range(-1,2):
						for other: int in bins.get(bucket+Vector2i(dx,dz),[]):
							if seen.has(other): continue
							if absf(float(rooms[other].base_y)-float(rooms[start].base_y))>ALIGN: continue
							if (Vector2(rooms[other].at)-target).abs().x>ALIGN or (Vector2(rooms[other].at)-target).abs().y>ALIGN: continue
							seen[other] = true
							group.append(other)
		if group.size()<8: continue
		# The phase belongs to this real room group, not a world-origin grid.
		var anchor: Vector2 = rooms[group[0]].at
		var occupied: Dictionary = {}
		var low := Vector2i.ZERO
		var high := Vector2i.ZERO
		for index: int in group:
			var local := (Vector2(rooms[index].at)-anchor)/UNIT
			var key := Vector2i(roundi(local.x),roundi(local.y))
			# Adjacency is pairwise tolerant; reject accumulated drift rather than
			# silently snapping a long, genuinely misaligned strip into a ring.
			if (Vector2(rooms[index].at)-(anchor+Vector2(key)*UNIT)).abs().x>ALIGN or (Vector2(rooms[index].at)-(anchor+Vector2(key)*UNIT)).abs().y>ALIGN: continue
			occupied[key] = str(rooms[index].house)
			low = Vector2i(mini(low.x,key.x),mini(low.y,key.y))
			high = Vector2i(maxi(high.x,key.x),maxi(high.y,key.y))
		low -= Vector2i.ONE
		high += Vector2i.ONE
		var outside: Dictionary = {}
		_flood(low,low,high,occupied,outside)
		for x in range(low.x+1,high.x):
			for z in range(low.y+1,high.y):
				var key := Vector2i(x,z)
				if occupied.has(key) or outside.has(key): continue
				var hole: Dictionary = {}
				_flood(key,low,high,occupied,hole)
				outside.merge(hole)
				if hole.size()<4: continue
				var plan := _paving(city,anchor,hole,occupied,footprints,float(rooms[start].base_y))
				if not plan.is_empty(): result.append(plan)
	result.sort_custom(func(a: Dictionary,b: Dictionary)->bool: return str(a.id)<str(b.id))
	return result


func _bin(at: Vector2) -> Vector2i:
	return Vector2i(floori(at.x/UNIT),floori(at.y/UNIT))


func _flood(start: Vector2i, low: Vector2i, high: Vector2i, occupied: Dictionary, visited: Dictionary) -> void:
	var queue: Array[Vector2i] = [start]
	visited[start] = true
	var cursor := 0
	while cursor<queue.size():
		var key := queue[cursor]
		cursor += 1
		for side: Vector2i in SIDES:
			var next := key+side
			if next.x<low.x or next.y<low.y or next.x>high.x or next.y>high.y or occupied.has(next) or visited.has(next): continue
			visited[next] = true
			queue.append(next)


func _paving(city: RefCounted, anchor: Vector2, hole: Dictionary, occupied: Dictionary, footprints: Array[Rect2], base_y: float) -> Dictionary:
	var keys: Array = hole.keys()
	keys.sort_custom(func(a: Vector2i,b: Vector2i)->bool: return a.x<b.x or (a.x==b.x and a.y<b.y))
	var ids := PackedStringArray()
	var members: Array[String] = []
	var tiles: Array[Rect2] = []
	var center := Vector2.ZERO
	var bounds := Rect2()
	for key: Vector2i in keys:
		var at := anchor+Vector2(key)*UNIT
		ids.append("%d,%d" % [roundi(at.x*1000.0),roundi(at.y*1000.0)])
		for side: Vector2i in SIDES:
			if occupied.has(key+side) and not members.has(occupied[key+side]): members.append(occupied[key+side])
		var tile := Rect2(at-Vector2.ONE*0.9,Vector2.ONE*UNIT)
		var clear := true
		for footprint: Rect2 in footprints:
			if tile.grow(-ALIGN).intersects(footprint.grow(-ALIGN)):
				clear = false
				break
		if not clear or not _dry_tile(city,tile): continue
		bounds = tile if tiles.is_empty() else bounds.merge(tile)
		tiles.append(tile)
		center += at
	if tiles.size()<4: return {}
	members.sort()
	return {"id":"court_"+(";".join(ids)).sha256_text().left(16),"tiles":tiles,"bounds":bounds,"members":members,"center":center/float(tiles.size()),"base_y":base_y,"fountain":{}}


func _dry_tile(city: RefCounted, tile: Rect2) -> bool:
	for x: float in [0.0,0.5,1.0]:
		for z: float in [0.0,0.5,1.0]:
			if city.water_clearance(tile.position+tile.size*Vector2(x,z))<0.05: return false
	return true


func _make_obstacles(city: RefCounted) -> Dictionary:
	var result := {"rooms":[],"roads":[],"junctions":[],"doors":[],"gatherings":[]}
	var cafes := CafePlans.new()
	for house: Dictionary in city.houses:
		for cell: Dictionary in house.cells:
			result.rooms.append(Rect2(Frontage.center(house,cell)-Vector2.ONE*0.9,Vector2.ONE*UNIT))
		for entry: Dictionary in city.house_entrances(str(house.id)):
			var wall: Vector2 = entry.wall_at
			var at: Vector2 = entry.at
			var direction := (at-wall).normalized()
			if direction.is_zero_approx(): direction = Vector2(entry.side)
			result.doors.append([wall,at+direction*0.5,0.30])
			if str(house.role)=="venue":
				var gathering := wall+Vector2(entry.side)*2.2
				result.gatherings.append([gathering,gathering,3.0])
		if str(house.role)=="garden_cafe":
			var layout := cafes.layout(city,str(house.id))
			if not layout.is_empty():
				result.gatherings.append([layout.center,layout.center,3.0])
				result.gatherings.append([layout.entrance,layout.center,1.2])
	var junctions := Junctions.new()
	junctions.prepare(city)
	for road: Dictionary in city.roads:
		for index in range(1,road.points.size()):
			result.roads.append([_point(road.points[index-1]),_point(road.points[index]),float(road.width)*0.5+0.30])
		for polygon: PackedVector2Array in junctions.additions(str(road.id)):
			result.junctions.append(polygon)
	return result


func _fountain(city: RefCounted, plan: Dictionary, obstacles: Dictionary) -> Dictionary:
	# A union boundary test proves full-circle containment, including nonrectangular
	# courts and tiles removed for water or a detached building in the middle.
	var edges := _boundary(plan.tiles)
	var candidates: Array[Vector2] = [Vector2(plan.center)]
	var bounds: Rect2 = plan.bounds
	var count_x := roundi(bounds.size.x/(UNIT*0.5))
	var count_z := roundi(bounds.size.y/(UNIT*0.5))
	for x in range(1,count_x):
		for z in range(1,count_z): candidates.append(bounds.position+Vector2(x,z)*(UNIT*0.5))
	var center: Vector2 = plan.center
	candidates.sort_custom(func(a: Vector2,b: Vector2)->bool:
		var da := a.distance_squared_to(center)
		var db := b.distance_squared_to(center)
		return da<db if not is_equal_approx(da,db) else (a.x<b.x or (a.x==b.x and a.y<b.y)))
	for at: Vector2 in candidates:
		var inside := false
		for tile: Rect2 in plan.tiles:
			if tile.has_point(at): inside = true; break
		if not inside: continue
		var clear := true
		for edge: Array in edges:
			if _segment_distance(at,edge[0],edge[1])<FOUNTAIN_RADIUS+0.15-0.00001: clear=false; break
		if clear and _fountain_clear(city,at,obstacles): return {"at":at,"radius":FOUNTAIN_RADIUS,"scale":0.16}
	return {}


func _boundary(tiles: Array) -> Array:
	var edges: Dictionary = {}
	for tile: Rect2 in tiles:
		var corners := [tile.position,Vector2(tile.end.x,tile.position.y),tile.end,Vector2(tile.position.x,tile.end.y)]
		for index in range(4):
			var a: Vector2 = corners[index]
			var b: Vector2 = corners[(index+1)%4]
			var pa := Vector2i(roundi(a.x*1000.0),roundi(a.y*1000.0))
			var pb := Vector2i(roundi(b.x*1000.0),roundi(b.y*1000.0))
			var first := pa if pa.x<pb.x or (pa.x==pb.x and pa.y<pb.y) else pb
			var second := pb if first==pa else pa
			var key := "%d,%d:%d,%d" % [first.x,first.y,second.x,second.y]
			if edges.has(key): edges.erase(key)
			else: edges[key] = [a,b]
	return edges.values()


func _fountain_clear(city: RefCounted, at: Vector2, obstacles: Dictionary) -> bool:
	if city.water_clearance(at)<FOUNTAIN_RADIUS+0.05: return false
	for rect: Rect2 in obstacles.rooms:
		if _rect_distance(at,rect)<FOUNTAIN_RADIUS+0.15: return false
	for group: String in ["roads","doors","gatherings"]:
		for capsule: Array in obstacles[group]:
			if _segment_distance(at,capsule[0],capsule[1])<FOUNTAIN_RADIUS+float(capsule[2]): return false
	for polygon: PackedVector2Array in obstacles.junctions:
		if Geometry2D.is_point_in_polygon(at,polygon): return false
		for index in range(polygon.size()):
			if _segment_distance(at,polygon[index],polygon[(index+1)%polygon.size()])<FOUNTAIN_RADIUS+0.30: return false
	for plant: Dictionary in city.plants:
		# Reserve the authored planting base too: shrubs have no trunk, but a
		# fountain must not replace a visible shrub at the same coordinate.
		var radius := (0.42 if str(plant.kind)=="shrub" else 0.20)*float(plant.scale)
		if at.distance_to(_point(plant.position))<FOUNTAIN_RADIUS+radius+0.15: return false
	return true


func _planters(city: RefCounted, tiles: Array) -> Array[Dictionary]:
	var result: Array[Dictionary] = []
	for plant: Dictionary in city.plants:
		var at := _point(plant.position)
		for tile: Rect2 in tiles:
			if not tile.has_point(at): continue
			result.append({"at":at,"radius":clampf(0.30*float(plant.scale),0.25,0.65)})
			break
	return result


func _point(encoded: Array) -> Vector2:
	return Vector2(float(encoded[0]),float(encoded[1]))


func _segment_distance(at: Vector2, a: Vector2, b: Vector2) -> float:
	return at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))


func _rect_distance(at: Vector2, rect: Rect2) -> float:
	var delta := (at-rect.get_center()).abs()-rect.size*0.5
	return Vector2(maxf(delta.x,0.0),maxf(delta.y,0.0)).length()
