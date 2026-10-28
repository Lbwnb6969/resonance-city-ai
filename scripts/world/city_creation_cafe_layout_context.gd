extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## A derived, shared footprint for both actual guests and their garden furniture.
## No camera or renderer data enters this plan.
const Frontage = preload("res://scripts/world/city_creation_frontage.gd")
const SEAT_RADIUS := 0.90
const TABLE_RADIUS := 0.43
const CHAIR_RADIUS := 0.29
const GUEST_RADIUS := 0.14
var _cache: Dictionary = {}
var _contexts: Dictionary = {}
var stats:Dictionary={"layout_hits":0,"layout_misses":0,"warm_hits":0,"warm_misses":0,"context_queries":0}

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
	context.seat_revision=city.revision
	# A captured context can seed preparation for changed geometry. It has
	# not yet been validated against that new worker city's authored rows.
	context.validated_revision=-1
	for id:String in data.get("plans",{}):_cache[str(city.get_instance_id())+":"+id]=data.plans[id]

func rebind_city(source:RefCounted,target:RefCounted)->void:
	# A joined worker transfers its private, geometry-identical visibility
	# graphs to the live city. The records contain values and one weak owner.
	var source_id:=source.get_instance_id();var target_id:=target.get_instance_id()
	if _contexts.has(source_id):
		var context:Dictionary=_contexts[source_id];_contexts.erase(source_id)
		context.owner=weakref(target);_contexts[target_id]=context
		context.seat_revision=target.revision
		context.validated_revision=target.revision
	var prefix:=str(source_id)+":"
	for key:String in _cache.keys():
		if not key.begins_with(prefix):continue
		var record:Dictionary=_cache[key];_cache.erase(key)
		_cache[str(target_id)+":"+key.trim_prefix(prefix)]=record

func _context(city) -> Dictionary:
	stats.context_queries+=1
	var geometry:Array=Frontage.ground_geometry(city.houses)
	var signature := hash([geometry,city.roads,city.waters,city.placed_landmarks])
	var key: int = city.get_instance_id()
	if _contexts.has(key) and _contexts[key].signature==signature:
		_contexts[key].validated_revision=city.revision
		return _contexts[key]
	for old_id: int in _contexts.keys():
		if _contexts[old_id].owner.get_ref()!=null: continue
		_contexts.erase(old_id)
		for plan_key: String in _cache.keys():
			if plan_key.begins_with(str(old_id)+":"): _cache.erase(plan_key)
	# A single current geometry snapshot owns all derived routing data. Progress,
	# names and tea status never retain old visibility graphs or invalidate it.
	var context := {"owner":weakref(city),"signature":signature,"validated_revision":city.revision,"footprints":[],"obstacles":[],"corners":{},"entries":[],"roads":[],"graphs":{}}
	for landmark:Dictionary in city.placed_landmarks:
		var fp:Variant=city.PlacedLandmarks.footprint(landmark);context.footprints.append(fp);context.obstacles.append(Frame.grow(fp,GUEST_RADIUS))
	for row: Dictionary in city.houses:
		var corners: Array[Vector2] = []
		for cell: Dictionary in row.cells:
			if int(cell.level)!=0: continue
			var footprint:Variant=Frame.footprint(row,cell)
			context.footprints.append(footprint)
			var rect:Variant=Frame.grow(footprint,GUEST_RADIUS)
			context.obstacles.append(rect)
			corners.append_array(Frame.corners(Frame.grow(rect,.05)))
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
		var normal:=Frame.normal(entry)
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

func prepared_layout(city,id:String)->Dictionary:
	# Network warms every cafe before its geometry-validated publication.
	# Keep layout() as the full authoring validator for cold or edited cities.
	var context:Dictionary=_contexts.get(city.get_instance_id(),{})
	if context.get("seat_revision",-1)==city.revision and context.get("validated_revision",-1)==city.revision:
		var record:Dictionary=_cache.get(str(city.get_instance_id())+":"+id,{})
		if not record.is_empty() and record.signature==context.signature:
			stats.layout_hits+=1;return record.value.duplicate(true)
	stats.layout_misses+=1
	return layout(city,id)

func clear(city, at: Vector2, radius: float) -> bool:
	return _clear(city,_context(city),at,radius)

func _clear(city, context: Dictionary, at: Vector2, radius: float) -> bool:
	if not city.WORLD_RECT.grow(-radius).has_point(at) or city.water_clearance(at)<=radius: return false
	for footprint:Variant in context.footprints:
		if Frame.distance(footprint,at)<radius:return false
	for entry: Dictionary in context.entries:
		if at.distance_to(Vector2(entry.clearance_at))<0.46+radius: return false
	for segment: Array in context.roads:
		if at.distance_to(Geometry2D.get_closest_point_to_segment(at,segment[0],segment[1]))<float(segment[2])+radius: return false
	return true

func route(city, id: String, from: Vector2, to: Vector2) -> Array[Vector2]:
	var plan := layout(city,id)
	if plan.is_empty(): return []
	return _route(city,_house(city,id),plan,from,to,_other_plans(city,id))

func warm_seats(city, entries: Dictionary) -> void:
	if entries.is_empty():return
	var prepared:Dictionary=_contexts.get(city.get_instance_id(),{})
	if prepared.get("seat_revision",-1)==city.revision and prepared.get("validated_revision",-1)==city.revision and prepared.get("seat_entries") == entries:
		stats.warm_hits+=1;return
	stats.warm_misses+=1
	var context:=_context(city)
	context.seat_revision=city.revision
	if context.get("seat_entries")==entries:return
	context.seat_paths={}
	# All neighboring furniture must exist before warming. The actual street
	# port can differ from the facade's provisional entrance used by layout().
	for id: String in entries:
		var plan:=layout(city,id)
		if plan.is_empty():continue
		var paths:Dictionary={}
		for seat: Vector2 in plan.seats:
			var entry:Vector2=entries[id]
			paths[Vector4(entry.x,entry.y,seat.x,seat.y)]=route(city,id,entry,seat)
			paths[Vector4(seat.x,seat.y,entry.x,entry.y)]=route(city,id,seat,entry)
		context.seat_paths[id]=paths
	context.seat_entries=entries.duplicate()

func seat_route(city,id:String,from:Vector2,to:Vector2)->Array[Vector2]:
	# Warmed by Network before publication. Only exact current-revision street
	# port/seat pairs bypass the full geometry validation; free origins use it.
	var context:Dictionary=_contexts.get(city.get_instance_id(),{})
	if context.get("seat_revision",-1)==city.revision:
		var paths:Dictionary=context.get("seat_paths",{}).get(id,{})
		var key:=Vector4(from.x,from.y,to.x,to.y)
		if paths.has(key):
			var result:Array[Vector2]=[];result.assign(paths[key]);return result
	return route(city,id,from,to)

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
		for landmark:Dictionary in city.placed_landmarks:core.append_array(Frame.corners(city.PlacedLandmarks.footprint(landmark,GUEST_RADIUS+.05)))
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
	for obstacle:Variant in obstacles:
		if Frame.segment(obstacle,a,b):return false
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
