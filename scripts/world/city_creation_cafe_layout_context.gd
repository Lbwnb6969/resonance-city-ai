extends RefCounted
## A derived, shared footprint for both actual guests and their garden furniture.
## No camera or renderer data enters this plan.
const Frontage = preload("res://scripts/world/city_creation_frontage.gd")
const SEAT_RADIUS := 0.90
const TABLE_RADIUS := 0.43
const CHAIR_RADIUS := 0.29
const GUEST_RADIUS := 0.14
var _cache: Dictionary = {}
var _contexts: Dictionary = {}

func snapshot_city(city:RefCounted)->Dictionary:
	var key:=city.get_instance_id();var plans:Dictionary={};var prefix:=str(key)+":"
	for plan_key:String in _cache:
		if plan_key.begins_with(prefix):plans[plan_key.trim_prefix(prefix)]=_cache[plan_key].duplicate(true)
	var context:Dictionary=_contexts.get(key,{}).duplicate(true);context.erase("owner")
	return {"context":context,"plans":plans}

func restore_city(data:Dictionary,city:RefCounted)->void:
	var context:Dictionary=data.get("context",{})
	if context.is_empty():return
	context.owner=weakref(city);_contexts[city.get_instance_id()]=context
	for id:String in data.get("plans",{}):_cache[str(city.get_instance_id())+":"+id]=data.plans[id]

func rebind_city(source:RefCounted,target:RefCounted)->void:
	# A joined worker transfers its private, geometry-identical visibility
	# graphs to the live city. The records contain values and one weak owner.
	var source_id:=source.get_instance_id();var target_id:=target.get_instance_id()
	if _contexts.has(source_id):
		var context:Dictionary=_contexts[source_id];_contexts.erase(source_id)
		context.owner=weakref(target);_contexts[target_id]=context
	var prefix:=str(source_id)+":"
	for key:String in _cache.keys():
		if not key.begins_with(prefix):continue
		var record:Dictionary=_cache[key];_cache.erase(key)
		_cache[str(target_id)+":"+key.trim_prefix(prefix)]=record

func _context(city) -> Dictionary:
	var geometry: Array = []
	for row: Dictionary in city.houses: geometry.append([row.id,row.origin,row.cells,row.get("role",""),float(row.get("base_y",0.0))])
	var signature := hash([geometry,city.roads,city.waters])
	var key: int = city.get_instance_id()
	if _contexts.has(key) and _contexts[key].signature==signature: return _contexts[key]
	for old_id: int in _contexts.keys():
		if _contexts[old_id].owner.get_ref()!=null: continue
		_contexts.erase(old_id)
		for plan_key: String in _cache.keys():
			if plan_key.begins_with(str(old_id)+":"): _cache.erase(plan_key)
	# A single current geometry snapshot owns all derived routing data. Progress,
	# names and tea status never retain old visibility graphs or invalidate it.
	var context := {"owner":weakref(city),"signature":signature,"footprints":[],"obstacles":[],"corners":{},"entries":[],"roads":[],"graphs":{}}
	for row: Dictionary in city.houses:
		var corners: Array[Vector2] = []
		for cell: Dictionary in row.cells:
			if int(cell.level)!=0: continue
			var footprint := Rect2(Frontage.center(row,cell)-Vector2.ONE*0.9,Vector2.ONE*1.8)
			context.footprints.append([Frontage.center(row,cell),Vector2.ONE*0.9])
			var rect := footprint.grow(GUEST_RADIUS)
			context.obstacles.append(rect)
			var walk := rect.grow(0.05)
			corners.append_array([walk.position,Vector2(walk.end.x,walk.position.y),walk.end,Vector2(walk.position.x,walk.end.y)])
		context.corners[str(row.id)]=corners
		context.entries.append_array(city.house_entrances(str(row.id)))
	for road: Dictionary in city.roads:
		for index in range(1,road.points.size()):
			context.roads.append([Vector2(road.points[index-1][0],road.points[index-1][1]),Vector2(road.points[index][0],road.points[index][1]),float(road.width)*0.5])
	_contexts[key]=context
	return context

func layout(city, id: String) -> Dictionary:
	var house := _house(city,id)
	if house.is_empty() or str(house.get("role","")) != "garden_cafe": return {}
	var context := _context(city)
	var signature: int = context.signature
	var key := str(city.get_instance_id())+":"+id
	if _cache.has(key) and _cache[key].signature == signature: return _cache[key].value.duplicate(true)
	var occupied: Array = []
	for row: Dictionary in city.houses:
		if str(row.get("role",""))=="garden_cafe" and str(row.id)<id:
			var earlier := layout(city,str(row.id))
			if not earlier.is_empty(): occupied.append(earlier)
	var entries: Array = city.house_entrances(id)
	var door: Dictionary = {}
	for entry: Dictionary in entries:
		if bool(entry.get("passage",false)): continue
		if door.is_empty() or (entry.active and not door.active): door = entry
	if door.is_empty(): return {}
	var result := {}
	for entry: Dictionary in entries:
		if bool(entry.get("passage",false)): continue
		var normal := Vector2(entry.side)
		var tangent := Vector2(normal.y,-normal.x)
		for distance: float in [2.6,3.2,3.8]:
			for offset: float in [0.0,1.4,-1.4,2.5,-2.5]:
				var at: Vector2 = entry.wall_at+normal*distance+tangent*offset
				var reserved := false
				for other: Dictionary in occupied:
					if at.distance_to(Vector2(other.center))<2.5: reserved=true
				if reserved: continue
				var seats: Array[Vector2] = []
				var yaw := atan2(normal.x,normal.y)
				for index in range(3): seats.append(at+Vector2(sin(yaw+index*TAU/3.0),cos(yaw+index*TAU/3.0))*SEAT_RADIUS)
				if not _clear(city,context,at,TABLE_RADIUS+0.05): continue
				var valid := true
				for seat: Vector2 in seats:
					if not _clear(city,context,seat,CHAIR_RADIUS+0.05): valid = false
				if not valid: continue
				var plan := {"center":at,"seats":seats,"entrance":Vector2(door.at),"yaw":yaw,"cell_id":str(entry.cell_id),"side":entry.side,"base_y":float(house.get("base_y",0.0))}
				for seat: Vector2 in seats:
					if _route(city,house,plan,door.at,seat,occupied,context).is_empty(): valid = false
				if not valid: continue
				result = plan
				break
			if not result.is_empty(): break
		if not result.is_empty(): break
	# Keep just one revision per state/house, rather than retaining every edit.
	_cache[key] = {"signature":signature,"value":result.duplicate(true)}
	return result

func clear(city, at: Vector2, radius: float) -> bool:
	return _clear(city,_context(city),at,radius)

func _clear(city, context: Dictionary, at: Vector2, radius: float) -> bool:
	if not city.WORLD_RECT.grow(-radius).has_point(at) or city.water_clearance(at)<=radius: return false
	for footprint: Array in context.footprints:
		var delta: Vector2 = (at-Vector2(footprint[0])).abs()-Vector2(footprint[1])
		if Vector2(maxf(delta.x,0),maxf(delta.y,0)).length()<radius: return false
	for entry: Dictionary in context.entries:
		if at.distance_to(Vector2(entry.clearance_at))<0.46+radius: return false
	for segment: Array in context.roads:
		if at.distance_to(Geometry2D.get_closest_point_to_segment(at,segment[0],segment[1]))<float(segment[2])+radius: return false
	return true

func route(city, id: String, from: Vector2, to: Vector2) -> Array[Vector2]:
	var plan := layout(city,id)
	if plan.is_empty(): return []
	return _route(city,_house(city,id),plan,from,to,_other_plans(city,id))

func route_with_plan(city, id: String, plan: Dictionary, from: Vector2, to: Vector2) -> Array[Vector2]:
	# Cancellation keeps the former furniture detour and actual saved entrance,
	# while current buildings and water still determine whether a leg is dry.
	return _route(city,_house(city,id),plan,from,to,_other_plans(city,id))

func _other_plans(city, id: String) -> Array:
	var result: Array=[]
	for row: Dictionary in city.houses:
		if str(row.id)==id or str(row.get("role",""))!="garden_cafe": continue
		var other:=layout(city,str(row.id))
		if not other.is_empty(): result.append(other)
	return result

func _house(city, id: String) -> Dictionary:
	for row: Dictionary in city.houses:
		if str(row.id)==id: return row
	return {}

func _route(city, house: Dictionary, plan: Dictionary, from: Vector2, to: Vector2, other_plans: Array=[], context: Dictionary={}) -> Array[Vector2]:
	if context.is_empty(): context=_context(city)
	var graph_key := hash([house.get("id",""),plan,other_plans])
	var graph: Dictionary
	if context.graphs.has(graph_key): graph=context.graphs[graph_key]
	else:
		var core: Array[Vector2] = []
		core.append_array(context.corners.get(str(house.get("id","")),[]))
		for index in range(18): core.append(Vector2(plan.center)+Vector2(sin(index*TAU/18.0),cos(index*TAU/18.0))*1.40)
		for other: Dictionary in other_plans:
			for index in range(12): core.append(Vector2(other.center)+Vector2(sin(index*TAU/12.0),cos(index*TAU/12.0))*1.45)
		graph={"points":core,"edges":{},"routes":{}}
		# Invalid placement candidates do not accumulate beyond this edit.
		if context.graphs.size()>=48: context.graphs.clear()
		context.graphs[graph_key]=graph
	var endpoint_key := Vector4(from.x,from.y,to.x,to.y)
	if graph.routes.has(endpoint_key): return graph.routes[endpoint_key].duplicate()
	if graph.routes.size()>=256: graph.routes.clear()
	var points: Array[Vector2] = [from,to]
	# Corners lead around real buildings. A generous ring leads around the table;
	# chairs are obstacles except the actual seat being entered or vacated.
	var obstacles: Array = context.obstacles
	points.append_array(graph.points)
	# Straight visibility is the optimal route. It needs no graph traversal.
	if _leg(city,plan,from,to,from,to,obstacles,other_plans):
		graph.routes[endpoint_key]=points.slice(0,2)
		return points.slice(0,2)
	var seat_mask := 0
	for seat_index in range(plan.seats.size()):
		var seat: Vector2=plan.seats[seat_index]
		if seat.distance_to(from)<0.31 or seat.distance_to(to)<0.31: seat_mask|=1<<seat_index
	var distances := {0:0.0}
	var previous := {}
	var visited := {}
	var queue: Array[int] = [0]
	while not queue.is_empty():
		queue.sort_custom(func(a,b): return float(distances[a])<float(distances[b]))
		var index: int = queue.pop_front()
		if visited.has(index): continue
		visited[index] = true
		if index==1: break
		for other in range(points.size()):
			if visited.has(other) or other==index: continue
			var visible: bool
			if index>=2 and other>=2:
				# Direction is retained: water samples start at a, and chairs are
				# exempt only for this route's actual entered/vacated seat mask.
				var edge_key := Vector3i(index,other,seat_mask)
				if not graph.edges.has(edge_key): graph.edges[edge_key]=_leg(city,plan,points[index],points[other],from,to,obstacles,other_plans)
				visible=graph.edges[edge_key]
			else: visible=_leg(city,plan,points[index],points[other],from,to,obstacles,other_plans)
			if not visible: continue
			var distance: float = distances[index]+points[index].distance_to(points[other])
			if distance<float(distances.get(other,INF)):
				distances[other]=distance
				previous[other]=index
				queue.append(other)
	if not visited.has(1):
		var empty: Array[Vector2]=[]
		graph.routes[endpoint_key]=empty
		return []
	var result: Array[Vector2] = [to]
	var index := 1
	while index!=0:
		index=int(previous[index])
		result.push_front(points[index])
	graph.routes[endpoint_key]=result.duplicate()
	return result

func _leg(city, plan: Dictionary, a: Vector2, b: Vector2, from: Vector2, to: Vector2, obstacles: Array, other_plans: Array) -> bool:
	if not city.WORLD_RECT.grow(-GUEST_RADIUS).has_point(a) or not city.WORLD_RECT.grow(-GUEST_RADIUS).has_point(b): return false
	for obstacle: Rect2 in obstacles:
		if Frontage.hits_rect(a,b,obstacle): return false
	var center: Vector2 = plan.center
	if center.distance_to(Geometry2D.get_closest_point_to_segment(center,a,b))<TABLE_RADIUS+GUEST_RADIUS: return false
	for seat: Vector2 in plan.seats:
		if seat.distance_to(from)<0.31 or seat.distance_to(to)<0.31: continue
		if seat.distance_to(Geometry2D.get_closest_point_to_segment(seat,a,b))<CHAIR_RADIUS+GUEST_RADIUS: return false
	for other: Dictionary in other_plans:
		var table:Vector2=other.center
		if table.distance_to(Geometry2D.get_closest_point_to_segment(table,a,b))<TABLE_RADIUS+GUEST_RADIUS: return false
		for seat:Vector2 in other.seats:
			if seat.distance_to(Geometry2D.get_closest_point_to_segment(seat,a,b))<CHAIR_RADIUS+GUEST_RADIUS: return false
	for step in range(ceili(a.distance_to(b)/0.12)+1):
		if city.water_clearance(a.move_toward(b,step*0.12))<=GUEST_RADIUS: return false
	return true
