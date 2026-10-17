extends RefCounted
## A derived recessed facade; authored rooms, entrances and roads stay intact.
const UNIT := 1.8
const FLOOR := 1.7
const RETREAT := 0.38
const SIDES := [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]
const Passage = preload("res://scripts/world/city_creation_passage.gd")

static func for_house(city: RefCounted, house: Dictionary) -> Array[Dictionary]:
	var result: Array[Dictionary] = []
	if str(house.get("style","classic"))=="round_tower": return result
	var passages := Passage.for_house(house,city.roads)
	var courts: Array = city.courtyard_plans()
	var cells: Array = house.cells.duplicate()
	cells.sort_custom(func(a: Dictionary,b: Dictionary)->bool: return str(a.id).naturalnocasecmp_to(str(b.id))<0)
	for cell: Dictionary in cells:
		if int(cell.level)!=0 or str(cell.kind)!="room" or not _upper_room(cells,cell): continue
		var crossed := false
		for passage: Dictionary in passages:
			if str(passage.cell_id)==str(cell.id): crossed=true;break
		if crossed: continue
		var center := _center(house,cell)
		var base := float(house.get("base_y",0.0))
		for side_index in range(SIDES.size()):
			var normal := Vector2(SIDES[side_index])
			var tangent := Vector2(normal.y,-normal.x)
			var wall := center+normal*0.9
			if not _exposed(city.houses,house,cell,wall,normal,tangent,base): continue
			var source := "renaissance" if city.house_era(house)=="renaissance" else ""
			for road: Dictionary in city.roads:
				if str(road.get("style","path")) not in ["promenade","avenue","tram"] or float(road.width)<1.75: continue
				if _street(city,road,wall,normal,tangent,base): source="promenade";break
			if source.is_empty() and _court(courts,wall,normal,tangent,base): source="courtyard"
			if not source.is_empty(): result.append({"cell_id":str(cell.id),"side":SIDES[side_index],"retreat":RETREAT,"source":source})
	return result

static func _upper_room(cells: Array, cell: Dictionary) -> bool:
	for above: Dictionary in cells:
		if int(above.x)==int(cell.x) and int(above.z)==int(cell.z) and int(above.level)==1 and str(above.kind)=="room": return true
	return false

static func _exposed(houses: Array, house: Dictionary, cell: Dictionary, wall: Vector2, normal: Vector2, tangent: Vector2, base: float) -> bool:
	var half_extent := tangent.abs()*0.88+normal.abs()*0.025
	var face := Rect2(wall+normal*0.02-half_extent,half_extent*2.0)
	for other: Dictionary in houses:
		for blocker: Dictionary in other.cells:
			if str(other.id)==str(house.id) and str(blocker.id)==str(cell.id): continue
			if str(blocker.kind)!="room": continue
			var low := float(other.get("base_y",0.0))+int(blocker.level)*FLOOR
			if low+FLOOR<=base+0.002 or low>=base+FLOOR-0.002: continue
			var footprint := Rect2(_center(other,blocker)-Vector2.ONE*0.9,Vector2.ONE*UNIT).grow(-0.002)
			if footprint.intersects(face): return false
	return true

static func _street(city: RefCounted, road: Dictionary, wall: Vector2, normal: Vector2, tangent: Vector2, base: float) -> bool:
	for offset: float in [-0.70,0.0,0.70]:
		var at := wall+tangent*offset
		var matched := false
		for index in range(1,road.points.size()):
			var a := Vector2(float(road.points[index-1][0]),float(road.points[index-1][1]))
			var b := Vector2(float(road.points[index][0]),float(road.points[index][1]))
			if absf((b-a).normalized().dot(tangent))<0.90: continue
			var nearest := Geometry2D.get_closest_point_to_segment(at,a,b)
			var delta := nearest-at
			var gap := delta.dot(normal)-float(road.width)*0.5
			if gap< -0.005 or gap>0.30 or absf(delta.dot(tangent))>0.08: continue
			# Read the already published immutable profile. Calling State's
			# road_profile/street_height here would recurse during preparation.
			var profile: Dictionary = city._road_heights.profiles.get(str(road.id),{})
			var y := _profile_height(profile,nearest)
			if not is_finite(y) and city.terrain_strokes.is_empty() and absf(base)<0.002: y=0.055
			if absf(y-(base+0.055))>0.18: continue
			matched=true;break
		if not matched: return false
	return true

static func _profile_height(profile: Dictionary, at: Vector2) -> float:
	var samples: Array = profile.get("samples",[])
	var best := INF
	var height := INF
	var arc := 0.0
	for index in range(samples.size()-1):
		var a: Dictionary = samples[index]
		var b: Dictionary = samples[index+1]
		var point := Geometry2D.get_closest_point_to_segment(at,a.xz,b.xz)
		var distance := at.distance_squared_to(point)
		if distance>=best: continue
		best=distance
		var t := Vector2(a.xz).distance_to(point)/maxf(0.000001,Vector2(a.xz).distance_to(b.xz))
		height=lerpf(float(a.y),float(b.y),t)
		arc=lerpf(float(a.distance),float(b.distance),t)
	for tread: Dictionary in profile.get("treads",[]):
		if arc>=float(tread.s0)-0.000001 and arc<=float(tread.s1)+0.000001: return float(tread.y)
	return height

static func _court(courts: Array, wall: Vector2, normal: Vector2, tangent: Vector2, base: float) -> bool:
	for court: Dictionary in courts:
		if absf(float(court.get("base_y",0.0))-base)>0.002: continue
		var complete := true
		for offset: float in [-0.70,0.0,0.70]:
			var inside := false
			for tile: Rect2 in court.tiles:
				if tile.has_point(wall+normal*0.16+tangent*offset): inside=true;break
			if not inside: complete=false;break
		if complete: return true
	return false

static func _center(house: Dictionary, cell: Dictionary) -> Vector2:
	return Vector2(float(house.origin[0])+int(cell.x)*UNIT,float(house.origin[1])+int(cell.z)*UNIT)
