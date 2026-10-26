extends RefCounted
## Derive wall openings and approach corridors from geometry, never saved flags.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const UNIT := 1.8
const SIDES := [Vector2i(0,1),Vector2i(1,0),Vector2i(-1,0),Vector2i(0,-1)]
const CONTACT := 0.55
const HALF_DOOR := 0.35
const Passage := preload("res://scripts/world/city_creation_passage.gd")

static func ground_geometry(houses:Array,include_overhangs:bool=false)->Array:
	# Ground planners read footprints, door identities, use and base elevation.
	# Upper rooms/roofs never change those inputs. Preserve authored order and
	# complete ground-cell records so identity or kind changes still invalidate.
	var geometry:Array=[]
	for house:Dictionary in houses:
		var cells:Array=[]
		var ground:Dictionary={}
		for cell:Dictionary in house.cells:
			if int(cell.level)==0:cells.append(cell);ground[Vector2i(cell.x,cell.z)]=true
		var row:Array=[house.id,house.origin,cells,house.get("role",""),float(house.get("base_y",0.)),Frame.yaw(house),Frame.Hinge.key(house)]
		if include_overhangs:
			# Courtyard paving/fountains also avoid elevated terrace footprints.
			# Repeated floors over an existing footprint add no new obstruction.
			var extra:Dictionary={}
			for cell:Dictionary in house.cells:
				if not ground.has(Vector2i(cell.x,cell.z)):extra[str(int(cell.x))+":"+str(int(cell.z))]=true
			var overhangs:Array=extra.keys();overhangs.sort();row.append(overhangs)
		geometry.append(row)
	return geometry

static func porch_plan(city: RefCounted,house: Dictionary,entry: Dictionary) -> Dictionary:
	var at: Vector2=entry.wall_at+Frame.normal(entry)*0.78
	var base := float(house.get("base_y",0.0))
	var ground: float=city.street_height(at)
	# Existing level-ground doors keep their original three shallow treads.
	var bottom := minf(0.10,ground-base-0.025)
	var rise := 0.15-bottom
	return {"count":3 if rise<0.20 else clampi(ceili(rise/0.12),1,10),"bottom":bottom,"ground_y":ground,"base_y":base,"at":at}

static func center(house: Dictionary, cell: Dictionary) -> Vector2:
	return Frame.center(house,cell)

static func exposed(house: Dictionary, cell: Dictionary, side: Vector2i) -> bool:
	for other: Dictionary in house.cells:
		if int(other.level)==0 and int(other.x)==int(cell.x)+side.x and int(other.z)==int(cell.z)+side.y: return false
	return true

static func terminal(house: Dictionary, cell: Dictionary, points: Array, at_start: bool) -> Dictionary:
	if int(cell.level)!=0 or str(cell.kind)!="room" or points.size()<2: return {}
	var endpoint := Vector2(points[0][0],points[0][1]) if at_start else Vector2(points[-1][0],points[-1][1])
	var adjacent := Vector2.ZERO
	# Sample the genuine approach direction, rather than a duplicated last point.
	for offset in range(1,points.size()):
		var index := offset if at_start else points.size()-1-offset
		adjacent=Vector2(points[index][0],points[index][1])
		if adjacent.distance_to(endpoint)>0.08: break
	var outgoing := (adjacent-endpoint).normalized()
	var origin := center(house,cell)
	for side: Vector2i in SIDES:
		if not exposed(house,cell,side): continue
		var normal := Frame.direction(house,Vector2(side),cell)
		var wall_at := origin+normal*0.9
		var offset := endpoint-wall_at
		var outward := offset.dot(normal)
		if outward < -0.001 or outward > CONTACT+0.00001: continue
		if absf(offset.cross(normal)) > HALF_DOOR: continue
		if outgoing.dot(normal) < 0.72: continue
		return {"side":side,"wall_at":wall_at,"endpoint":endpoint}
	return {}

static func entrances(house: Dictionary, roads: Array, houses: Array = []) -> Array[Dictionary]:
	var result: Array[Dictionary]=[]
	var passages := Passage.for_house(house,roads)
	for cell: Dictionary in house.cells:
		if int(cell.level)!=0 or str(cell.kind)!="room": continue
		for side: Vector2i in SIDES:
			if not exposed(house,cell,side): continue
			var opening: Dictionary={}
			for passage: Dictionary in passages:
				if passage.cell_id==str(cell.get("id","")) and passage.sides.has(side): opening=passage
			if not opening.is_empty():
				var lateral:Vector2=Frame.direction(house,Vector2(0,float(opening.offset)) if opening.axis.x==1 else Vector2(float(opening.offset),0),cell)
				var wall_at := center(house,cell)+Frame.direction(house,Vector2(side),cell)*0.9+lateral
				result.append({"cell_id":str(cell.get("id","")),"cell_x":int(cell.x),"cell_z":int(cell.z),"side":side,"wall_at":wall_at,"at":wall_at+Frame.direction(house,Vector2(side),cell)*0.62,"clearance_at":wall_at+Frame.direction(house,Vector2(side),cell)*0.65,"active":true,"passage":true,"road_id":str(opening.road_id)})
				continue
			var active := false
			var road_id := ""
			for road: Dictionary in roads:
				for at_start: bool in [true,false]:
					var match := terminal(house,cell,road.points,at_start)
					if not match.is_empty() and match.side==side:
						active=true
						road_id=str(road.get("id",""))
						break
				if active: break
			if not active and side!=Vector2i(0,1): continue
			var wall_at := center(house,cell)+Frame.direction(house,Vector2(side),cell)*0.9
			result.append({"cell_id":str(cell.get("id","")),"cell_x":int(cell.x),"cell_z":int(cell.z),"side":side,"wall_at":wall_at,"at":wall_at+Frame.direction(house,Vector2(side),cell)*0.62,"clearance_at":wall_at+Frame.direction(house,Vector2(side),cell)*0.65,"active":active,"road_id":road_id})
	var outside: Array[Dictionary] = []
	for entrance: Dictionary in result:
		var owner:Dictionary=house.cells.filter(func(c):return str(c.id)==str(entrance.cell_id))[0]
		entrance.outward=Frame.direction(house,Vector2(entrance.side),owner)
		# A true road passage is a portal into a traversable arch, even when the
		# next room belongs to a different household. Ordinary doors need air.
		if entrance.get("passage",false) or approach_clear(house,entrance.wall_at,entrance.at,houses): outside.append(entrance)
	if outside.is_empty():
		# A new neighbor can cover the old south door. Keep a real exposed exit,
		# not a phantom doorway in the shared wall or a renamed household.
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0 or str(cell.kind)!="room": continue
			for side: Vector2i in SIDES:
				if not exposed(house,cell,side): continue
				var wall_at := center(house,cell)+Frame.direction(house,Vector2(side),cell)*0.9
				var at := wall_at+Frame.direction(house,Vector2(side),cell)*0.62
				if not approach_clear(house,wall_at,at,houses): continue
				outside.append({"cell_id":str(cell.get("id","")),"cell_x":int(cell.x),"cell_z":int(cell.z),"side":side,"outward":Frame.direction(house,Vector2(side),cell),"wall_at":wall_at,"at":at,"clearance_at":wall_at+Frame.direction(house,Vector2(side),cell)*0.65,"active":false,"road_id":""})
				return outside
	return outside

static func approach_clear(house: Dictionary, wall_at: Vector2, at: Vector2, houses: Array) -> bool:
	for other: Dictionary in houses:
		if str(other.id)==str(house.id): continue
		for cell: Dictionary in other.cells:
			if int(cell.level)!=0 or str(cell.kind)!="room": continue
			var rect:Variant=Frame.footprint(other,cell,.18)
			if Frame.segment(rect,wall_at,at): return false
	return true

static func blocker_signature(house: Dictionary, houses: Array) -> Array:
	var bounds := Rect2(center(house,house.cells[0]),Vector2.ZERO)
	for cell: Dictionary in house.cells:
		if int(cell.level)==0: bounds=bounds.expand(center(house,cell))
	bounds=bounds.grow(2.0)
	var result: Array = []
	for other: Dictionary in houses:
		if str(other.id)==str(house.id): continue
		for cell: Dictionary in other.cells:
			if int(cell.level)==0 and str(cell.kind)=="room" and bounds.has_point(center(other,cell)):
				result.append([str(other.id),str(cell.id),center(other,cell),float(other.get("base_y",0.0)),Frame.yaw(other),Frame.Hinge.cell_angle(other,cell)])
	return result

static func road_cell_conflict(house: Dictionary, cell: Dictionary, points: Array, width: float) -> bool:
	if Frame.transformed(house):return road_cell_conflict(Frame.zero(house),cell,Frame.points_local(house,points,cell),width)
	if not Passage.for_cell(house,cell,points,width).is_empty(): return false
	var origin := center(house,cell)
	var wall := Rect2(origin-Vector2.ONE*0.9,Vector2.ONE*UNIT)
	var expanded := wall.grow(width*0.5-0.04)
	var authorized: Array[Dictionary]=[]
	for first: bool in [true,false]:
		var contact := terminal(house,cell,points,first)
		if not contact.is_empty(): authorized.append(contact)
	for index in range(1,points.size()):
		var a := Vector2(points[index-1][0],points[index-1][1])
		var b := Vector2(points[index][0],points[index][1])
		if hits_rect(a,b,wall.grow(-0.003)): return true
		if not hits_rect(a,b,expanded): continue
		var allowed := false
		for contact: Dictionary in authorized:
			var normal := Vector2(contact.side)
			var local_a: Vector2=a-contact.wall_at
			var local_b: Vector2=b-contact.wall_at
			# All of the segment approaching this face must stay inside its door
			# corridor. Long segments may extend outward; corners and wall-parallel
			# segments cannot use an unrelated endpoint exemption.
			if minf(local_a.dot(normal),local_b.dot(normal)) < -0.001: continue
			var limit := width*0.5-0.04
			var distance_a := local_a.dot(normal)
			var distance_b := local_b.dot(normal)
			# Only the part inside the expanded wall needs door-width clearance.
			# A diagonal street is free to diverge farther from the building.
			if distance_a>limit and distance_b<limit:
				local_a=local_a.lerp(local_b,(distance_a-limit)/(distance_a-distance_b))
			elif distance_b>limit and distance_a<limit:
				local_b=local_b.lerp(local_a,(distance_b-limit)/(distance_b-distance_a))
			if absf(local_a.cross(normal))>HALF_DOOR or absf(local_b.cross(normal))>HALF_DOOR: continue
			if absf((b-a).normalized().dot(normal))<0.72: continue
			allowed=true
			break
		if not allowed: return true
	return false

static func hits_rect(a: Vector2,b: Vector2,rect: Rect2) -> bool:
	if rect.has_point(a) or rect.has_point(b): return true
	var corners := [rect.position,Vector2(rect.end.x,rect.position.y),rect.end,Vector2(rect.position.x,rect.end.y)]
	for i in range(4):
		if Geometry2D.segment_intersects_segment(a,b,corners[i],corners[(i+1)%4])!=null: return true
	return false

static func exterior_route(house: Dictionary, from: Vector2, to: Vector2, city: RefCounted) -> Array[Vector2]:
	var empty: Array[Vector2]=[]
	# Prove the existing 72cm ownership condition before constructing the
	# global obstacle graph. Distant houses cannot own this exterior prefix.
	var owns:=false
	for room:Dictionary in house.cells:
		if int(room.level)!=0:continue
		var rect:Variant=Frame.footprint(house,room)
		if not Frame.contains(rect,from) and Frame.contains(Frame.grow(rect,.72),from):owns=true;break
	if not owns:return empty
	var nearby := false
	var candidates: Array[Vector2]=[from,to]
	var obstacles:Array=[]
	for row: Dictionary in city.houses:
		for cell: Dictionary in row.cells:
			if int(cell.level)!=0: continue
			var footprint:Variant=Frame.footprint(row,cell)
			obstacles.append(Frame.grow(footprint,.20))
			if str(row.id)!=str(house.id): continue
			if not Frame.contains(footprint,from) and Frame.contains(Frame.grow(footprint,.72),from): nearby=true
			candidates.append_array(Frame.corners(Frame.grow(footprint,.26)))
	if not nearby: return empty
	var points: Array[Vector2]=[]
	for at: Vector2 in candidates:
		var valid: bool = city.WORLD_RECT.has_point(at) and city.water_clearance(at)>0.12
		for obstacle:Variant in obstacles:
			if Frame.contains(obstacle,at): valid=false
		if points.size()<2 and (at==from or at==to) and not valid: return empty
		if valid and not points.has(at): points.append(at)
	if points.size()<2 or points[0]!=from or points[1]!=to: return empty
	var distances := {0:0.0}
	var previous: Dictionary={}
	var queue: Array[int]=[0]
	var visited: Dictionary={}
	while not queue.is_empty():
		queue.sort_custom(func(a: int,b: int) -> bool: return float(distances[a])<float(distances[b]))
		var index: int=queue.pop_front()
		if visited.has(index): continue
		visited[index]=true
		if index==1: break
		for other in range(points.size()):
			if other==index or visited.has(other): continue
			if not _dry_leg(points[index],points[other],obstacles,city): continue
			var distance: float=distances[index]+points[index].distance_to(points[other])
			if distance<float(distances.get(other,INF)):
				distances[other]=distance
				previous[other]=index
				queue.append(other)
	if not visited.has(1): return empty
	var result: Array[Vector2]=[to]
	var index := 1
	while index!=0:
		index=int(previous[index])
		result.push_front(points[index])
	return result

static func _dry_leg(a: Vector2,b: Vector2,obstacles:Array,city: RefCounted) -> bool:
	for obstacle:Variant in obstacles:
		if Frame.segment(obstacle,a,b): return false
	for step in range(ceili(a.distance_to(b)/0.12)+1):
		var at := a.move_toward(b,float(step)*0.12)
		if city.water_clearance(at)<=0.12: return false
	return true
