extends RefCounted
## Exact street geometry and shortest paths on an isolated data snapshot.
## Thread preparation owns this instance and its State; no SceneTree/Node/RID.
const Frontage := preload("res://scripts/world/city_creation_frontage.gd")
const Passage := preload("res://scripts/world/city_creation_passage.gd")
const State := preload("res://scripts/world/city_creation_state.gd")
const Travel := preload("res://scripts/world/city_creation_travel.gd")
const CafeLayout=preload("res://scripts/world/city_creation_cafe_layout_context.gd")
var prepared_cafe_context:RefCounted=CafeLayout.new()
const NETWORK_BIN_SIZE := 2.0
const ROUTE_CACHE_LIMIT := 1024
const ROUTE_SEARCH_LIMIT := 32
var state: RefCounted
var graph: Dictionary = {}
var positions: Dictionary = {}
var connected_houses: Dictionary = {}
var selected_entrances: Dictionary = {}
var component_of: Dictionary = {}
var _edge_bins: Dictionary = {}
var _wall_bins: Dictionary = {}
var _attachment_cache: Dictionary = {}
var attachment_stats := {"queries":0,"cache_hits":0,"edge_projections":0,"wall_tests":0}
var _route_cache: Dictionary = {}
var _service_routes: Dictionary = {}
var _route_cache_entries := 0
var _route_searches: Dictionary = {}
var prepared_positions: Dictionary = {}
var prepared_street_heights:Dictionary={}
var prepared_home_stops:Dictionary={}
var prepared_exterior: Dictionary = {}
var prepared_travel: RefCounted
var travel_prepare_ms := 0.0
var route_counting := false
var route_cache_stats := {"hits":0,"misses":0,"invalid":0}
var prepare_stats: Dictionary = {}
var _roundabout_markers: Array[Dictionary]=[]

func prepare(snapshot: Dictionary, prior: Dictionary, actors: Array[Dictionary]) -> RefCounted:
	var started := Time.get_ticks_usec()
	prepare_stats = {}
	state = State.new()
	state.houses.assign(snapshot.houses)
	state.roads.assign(snapshot.roads)
	state.waters.assign(snapshot.waters)
	state.districts.assign(snapshot.get("districts",[]))
	state.terrain_strokes.assign(snapshot.get("terrain_strokes",[]))
	if snapshot.has("ground_cache"):
		# The request owns this cache; it was copied before starting the thread.
		state._ground_terrain = snapshot.ground_cache
	if snapshot.has("protection_cache"):
		state._terrain_protection = snapshot.protection_cache
	if snapshot.has("road_height_cache"):state._road_heights=snapshot.road_height_cache
	prepared_cafe_context.restore_city(snapshot.get("cafe_context",{}),state)
	connected_houses = prior
	var stage_started := Time.get_ticks_usec()
	_build_graph()
	prepare_stats["graph_ms"] = float(Time.get_ticks_usec()-stage_started)/1000.0
	prepare_stats["terrain_changed_vertices"] = int(state._ground_terrain.stats.get("raw_changed_vertices",0))
	stage_started = Time.get_ticks_usec()
	# Warm only source queries needed by live actors and every surviving door.
	# Attachment depends on the planar origin and component, never its old Y.
	var services: Dictionary = {}
	var service_ports: Dictionary = {}
	for house: Dictionary in state.houses:
		if str(house.get("role","residential")) == "residential": continue
		services[str(house.id)] = true
		if connected_houses.has(house.id): service_ports[str(connected_houses[house.id])] = true
	var origins: Dictionary = {}
	var origin_points: Dictionary = {}
	var cafe_routes:=0
	for actor: Dictionary in actors:
		var point: Vector3 = actor.point
		var targets := services.duplicate()
		for id: String in actor.targets: targets[id] = true
		var pkey := _key(Vector2(point.x,point.z))
		if not origins.has(pkey):
			origins[pkey] = {}
			origin_points[pkey] = point
		origins[pkey].merge(targets)
	for id: String in connected_houses:
		var at := Vector3(positions[connected_houses[id]])+Vector3(0,0.10,0)
		var pkey := _key(Vector2(at.x,at.z))
		if not origins.has(pkey):
			origins[pkey] = {}
			origin_points[pkey] = at
		origins[pkey].merge(services)
		origins[pkey][id] = true
	for pkey: String in origins:
		var point: Vector3 = origin_points[pkey]
		var routes: Dictionary = {}
		var exterior: Dictionary = {}
		for id: String in connected_houses:
			if not origins[pkey].has(id): continue
			var finish := str(connected_houses[id])
			var route := _route_from_position(point,finish)
			routes[finish] = route
			if route.is_empty():
				if _prepare_cafe_attachment(point,finish,snapshot.get("cafe_layouts",{})):cafe_routes+=1
				else:exterior[finish] = _exterior_route_from_position(point,finish)
		prepared_positions[pkey] = routes
		if not exterior.is_empty(): prepared_exterior[pkey] = exterior
	# Only actual service pairs support job selection and homecoming. Two
	# unrelated homes never need an all-pairs route table during an edit.
	prepare_stats["origins_ms"] = float(Time.get_ticks_usec()-stage_started)/1000.0
	prepare_stats["cafe_attachments"]=cafe_routes
	stage_started = Time.get_ticks_usec()
	for start: String in connected_houses.values():
		for finish: String in connected_houses.values():
			if start != finish and not service_ports.has(start) and not service_ports.has(finish): continue
			var route:=_route(start,finish)
			if not _service_routes.has(start):_service_routes[start]={}
			_service_routes[start][finish]=route
	prepare_stats["pairs_ms"] = float(Time.get_ticks_usec()-stage_started)/1000.0
	stage_started=Time.get_ticks_usec()
	_prepare_home_stops(snapshot.get("resident_stops",{}))
	prepare_stats["home_stops_ms"]=float(Time.get_ticks_usec()-stage_started)/1000.
	var travel_started := Time.get_ticks_usec()
	prepared_travel=Travel.new()
	prepared_travel.sync(state)
	travel_prepare_ms=float(Time.get_ticks_usec()-travel_started)/1000.0
	prepare_stats["travel_ms"] = travel_prepare_ms
	stage_started=Time.get_ticks_usec()
	if not actors.is_empty():
		# Actors are held at these exact planar points until publication. Use
		# the original protected street-height solver, including cafe/venue
		# pads and roundabouts; navigation's raw-height fallback is different.
		state.prepare_ground_height()
		for actor:Dictionary in actors:
			var point:Vector3=actor.point;var at:=Vector2(point.x,point.z)
			if not prepared_street_heights.has(at):prepared_street_heights[at]=state.street_height(at)
	prepare_stats["actor_heights_ms"]=float(Time.get_ticks_usec()-stage_started)/1000.
	prepare_stats["total_ms"] = float(Time.get_ticks_usec()-started)/1000.0
	return self

func _prepare_home_stops(previous:Dictionary)->void:
	var shops:Array[String]=[];var venues:Array[String]=[];var homes:Array[String]=[]
	for house:Dictionary in state.houses:
		var id:=str(house.id);var role:=str(house.get("role","residential"))
		if role=="residential":homes.append(id)
		elif connected_houses.has(id):
			if role=="bakery":shops.append(id)
			elif role in ["venue","symphony_hall"]:venues.append(id)
	for serial in range(homes.size()):
		var home:=homes[serial];var stops:Array[String]=[home]
		if connected_houses.has(home):
			for candidates:Array[String] in [shops,venues]:
				var chosen:=""
				for candidate:String in previous.get(home,[]):
					if candidates.has(candidate) and not _route(connected_houses[home],connected_houses[candidate]).is_empty():chosen=candidate;break
				if chosen.is_empty():
					for offset in range(candidates.size()):
						var candidate:=candidates[(serial+offset)%candidates.size()]
						if not _route(connected_houses[home],connected_houses[candidate]).is_empty():chosen=candidate;break
				if not chosen.is_empty():stops.append(chosen)
		prepared_home_stops[home]=stops

func _prepare_cafe_attachment(point:Vector3,finish:String,layouts:Dictionary)->bool:
	# Preserve Cafe.street_attachment's order and exact planar route. The
	# joined context is adopted before residents resume; live heights are
	# applied by the original cafe code after terrain publication.
	var planar:=Vector2(point.x,point.z)
	for id:String in layouts:
		if layouts[id].is_empty() or planar.distance_to(layouts[id].center)>2.4 or not connected_houses.has(id):continue
		var continuation:=_route(str(connected_houses[id]),finish)
		if continuation.is_empty():continue
		var door:Vector3=positions[connected_houses[id]]
		if not prepared_cafe_context.route(state,id,planar,Vector2(door.x,door.z)).is_empty():return true
	return false

func _key(p: Vector2) -> String:
	return "%d,%d" % [roundi(p.x*1000.0),roundi(p.y*1000.0)]

func _build_graph() -> void:
	_roundabout_markers=State.Roundabouts.all(state.roads)
	var ground_started := Time.get_ticks_usec()
	# Navigation only needs the raw sculpt field and road profiles. The full
	# protected field is prepared and published by the owning State/render
	# pipeline; rebuilding it here duplicated 37k samples on every edit.
	state._prepare_raw_height()
	state._road_heights.prepare(state)
	prepare_stats["road_profiles"]=state._road_heights.stats.duplicate()
	prepare_stats["ground_ms"] = float(Time.get_ticks_usec()-ground_started)/1000.0
	var prior := connected_houses.duplicate()
	graph.clear()
	positions.clear()
	connected_houses.clear()
	selected_entrances.clear()
	_route_cache.clear()
	_service_routes.clear()
	_route_cache_entries = 0
	_route_searches.clear()
	prepared_positions.clear()
	prepared_street_heights.clear()
	prepared_home_stops.clear()
	prepared_exterior.clear()
	component_of.clear()
	_edge_bins.clear()
	_wall_bins.clear()
	_attachment_cache.clear()
	attachment_stats = {"queries":0,"cache_hits":0,"edge_projections":0,"wall_tests":0}
	var ports: Dictionary = {}
	var door_links: Array[Dictionary] = []
	var segments: Array[Dictionary] = []
	for road: Dictionary in State.Roundabouts.routing_roads(state.roads):
		for i in range(1, road.points.size()):
			var a := Vector2(road.points[i-1][0],road.points[i-1][1])
			var b := Vector2(road.points[i][0],road.points[i][1])
			if a.distance_to(b) < 0.001: continue
			segments.append({"a":a,"b":b,"splits":[a,b],"width":float(road.width),"road_id":str(road.id)})
	var connectors: Array[Dictionary] = []
	var bins: Dictionary = {}
	for i in range(segments.size()):
		var segment_bounds := Rect2(Vector2(segments[i].a),Vector2.ZERO).expand(segments[i].b).grow(float(segments[i].width)*0.5)
		var candidates: Dictionary = {}
		var first_bin := Vector2i(floori(segment_bounds.position.x/NETWORK_BIN_SIZE),floori(segment_bounds.position.y/NETWORK_BIN_SIZE))
		var last_bin := Vector2i(floori(segment_bounds.end.x/NETWORK_BIN_SIZE),floori(segment_bounds.end.y/NETWORK_BIN_SIZE))
		for x in range(first_bin.x,last_bin.x+1):
			for z in range(first_bin.y,last_bin.y+1):
				var bin := Vector2i(x,z)
				for index: int in bins.get(bin,[]): candidates[index]=true
				if not bins.has(bin): bins[bin]=[]
				bins[bin].append(i)
		# Only discard spatially impossible pairs. Keep the original i/j order,
		# exact centre intersections, endpoint-width tests and connector order.
		var ordered_candidates: Array = candidates.keys()
		ordered_candidates.sort()
		for j: int in ordered_candidates:
			var intersection: Variant = Geometry2D.segment_intersects_segment(segments[i].a,segments[i].b,segments[j].a,segments[j].b)
			if intersection != null:
				segments[i].splits.append(intersection)
				segments[j].splits.append(intersection)
			# A free stroke can start anywhere on the physical street strip.
			# Split collinear overlaps and connect nearby centres within the width.
			for pair: Array in [[i,j],[j,i]]:
				var first: Dictionary = segments[int(pair[0])]
				var second: Dictionary = segments[int(pair[1])]
				for endpoint: Vector2 in [first.a,first.b]:
					var nearest := Geometry2D.get_closest_point_to_segment(endpoint,second.a,second.b)
					if endpoint.distance_to(nearest) > minf(float(first.width),float(second.width))*0.5: continue
					if _crosses_island(endpoint,nearest): continue
					second.splits.append(nearest)
					connectors.append({"a":endpoint,"b":nearest,"splits":[endpoint,nearest]})
	var raw_segment_count := segments.size()
	segments.append_array(connectors)
	# Entrances use exactly the same segment list and original tie order, but
	# need not project onto thousands of distant or duplicate join segments.
	for index in range(raw_segment_count,segments.size()):
		var bounds := Rect2(Vector2(segments[index].a),Vector2.ZERO).expand(segments[index].b)
		for x in range(floori(bounds.position.x/NETWORK_BIN_SIZE),floori(bounds.end.x/NETWORK_BIN_SIZE)+1):
			for z in range(floori(bounds.position.y/NETWORK_BIN_SIZE),floori(bounds.end.y/NETWORK_BIN_SIZE)+1):
				var bin := Vector2i(x,z)
				if not bins.has(bin): bins[bin]=[]
				bins[bin].append(index)
	for house: Dictionary in state.houses:
		var candidates: Array[Dictionary] = []
		for entrance: Dictionary in state.house_entrances(str(house.id)):
			var best_distance := 0.82
			var best_segment := -1
			var best := Vector2.ZERO
			var nearby: Dictionary = {}
			var at: Vector2 = entrance.at
			for x in range(floori((at.x-0.82)/NETWORK_BIN_SIZE),floori((at.x+0.82)/NETWORK_BIN_SIZE)+1):
				for z in range(floori((at.y-0.82)/NETWORK_BIN_SIZE),floori((at.y+0.82)/NETWORK_BIN_SIZE)+1):
					for index: int in bins.get(Vector2i(x,z),[]): nearby[index]=true
			var nearby_indices: Array = nearby.keys()
			nearby_indices.sort()
			for index: int in nearby_indices:
				if entrance.active and str(segments[index].get("road_id",""))!=str(entrance.road_id): continue
				var nearest := Geometry2D.get_closest_point_to_segment(entrance.at,segments[index].a,segments[index].b)
				var distance := nearest.distance_to(entrance.at)
				if distance < best_distance:
					best_distance=distance
					best_segment=index
					best=nearest
			if best_segment<0: continue
			segments[best_segment].splits.append(best)
			# A side porch has a real outside walking leg, never a house-internal
			# connector between otherwise disconnected roads.
			var target: Vector2 = entrance.at if entrance.active and entrance.side!=Vector2i(0,1) else best
			if target.distance_to(best)>0.0005:
				door_links.append({"a":best,"b":target,"splits":[best,target]})
			candidates.append({"key":_key(target),"entrance":entrance,"distance":best_distance})
		ports[str(house.id)]=candidates
	segments.append_array(door_links)
	var height_positions: Dictionary = {}
	for segment: Dictionary in segments:
		var unique: Dictionary = {}
		for point: Vector2 in segment.splits: unique[point]=true
		var splits: Array = unique.keys()
		splits.sort_custom(func(a: Vector2,b: Vector2) -> bool: return a.distance_squared_to(segment.a) < b.distance_squared_to(segment.a))
		for i in range(1,splits.size()):
			var a: Vector2 = splits[i-1]
			var b: Vector2 = splits[i]
			if a.distance_to(b) < 0.0005: continue
			var ka := _key(a)
			var kb := _key(b)
			if not height_positions.has(a): height_positions[a]=Vector3(a.x,_navigation_height(a),a.y)
			if not height_positions.has(b): height_positions[b]=Vector3(b.x,_navigation_height(b),b.y)
			positions[ka] = height_positions[a]
			positions[kb] = height_positions[b]
			if not graph.has(ka): graph[ka] = {}
			if not graph.has(kb): graph[kb] = {}
			graph[ka][kb] = a.distance_to(b)
			graph[kb][ka] = a.distance_to(b)

	var components: Dictionary = {}
	var component_sizes: Dictionary = {}
	var component_houses: Dictionary = {}
	for start: String in graph:
		if components.has(start): continue
		var queue: Array[String]=[start]
		var size := 0
		while not queue.is_empty():
			var current: String=queue.pop_back()
			if components.has(current): continue
			components[current]=start
			size+=1
			for neighbor: String in graph[current]:
				if not components.has(neighbor): queue.append(neighbor)
		component_sizes[start]=size
		component_houses[start]={}
	for house_id: String in ports:
		for port: Dictionary in ports[house_id]:
			if components.has(port.key): component_houses[components[port.key]][house_id]=true
	for house_id: String in ports:
		var best: Dictionary={}
		var best_score := -INF
		for port: Dictionary in ports[house_id]:
			if not components.has(port.key): continue
			var component: String=components[port.key]
			# Prefer a component serving the neighborhood. Keep the existing door
			# inside that component so an added secondary porch cannot teleport
			# a baker or reset a completed visit at the surviving old entrance.
			var score: float=component_houses[component].size()*100000+component_sizes[component]*100
			if str(prior.get(house_id,""))==str(port.key): score+=50
			if port.entrance.side==Vector2i(0,1): score+=10
			score-=float(port.distance)
			if score>best_score:
				best_score=score
				best=port
		if not best.is_empty():
			connected_houses[house_id]=best.key
			selected_entrances[house_id]=best.entrance
	component_of = components
	_build_attachment_index()

func _build_attachment_index() -> void:
	# Preserve graph edge order so equal-distance attachment ties retain their
	# original route choice. Each segment is indexed across its full extent.
	_edge_bins.clear()
	_wall_bins.clear()
	_attachment_cache.clear()
	for start: String in graph:
		var a: Vector3 = positions[start]
		for end: String in graph[start]:
			if start > end: continue
			var b: Vector3 = positions[end]
			var pa := Vector2(a.x,a.z)
			var pb := Vector2(b.x,b.z)
			var bounds := Rect2(pa,Vector2.ZERO).expand(pb).grow(0.900001)
			var edge := {"start":start,"end":end,"a":pa,"b":pb,"component":str(component_of[start])}
			for x in range(floori(bounds.position.x/NETWORK_BIN_SIZE),floori(bounds.end.x/NETWORK_BIN_SIZE)+1):
				for z in range(floori(bounds.position.y/NETWORK_BIN_SIZE),floori(bounds.end.y/NETWORK_BIN_SIZE)+1):
					var bin := Vector2i(x,z)
					if not _edge_bins.has(bin): _edge_bins[bin]=[]
					_edge_bins[bin].append(edge)
	for house: Dictionary in state.houses:
		var passages: Array[Dictionary] = state.house_passages(str(house.id))
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var bounds := Rect2(Passage.center(house,cell)-Vector2.ONE*0.89,Vector2.ONE*1.78)
			var wall := {"house":house,"cell":cell,"passages":passages}
			for x in range(floori(bounds.position.x/NETWORK_BIN_SIZE),floori(bounds.end.x/NETWORK_BIN_SIZE)+1):
				for z in range(floori(bounds.position.y/NETWORK_BIN_SIZE),floori(bounds.end.y/NETWORK_BIN_SIZE)+1):
					var bin := Vector2i(x,z)
					if not _wall_bins.has(bin): _wall_bins[bin]=[]
					_wall_bins[bin].append(wall)

func _route(start: String, finish: String) -> Array[Vector3]:
	var result: Array[Vector3] = []
	if not graph.has(start) or not graph.has(finish):
		if route_counting: route_cache_stats.invalid+=1
		return result
	if component_of.get(start,"") != component_of.get(finish,""):
		return result
	# These exact home/service pairs were prepared for this graph. Keep them
	# independently of the bounded cache of transient street attachments: a
	# large town can need more than 1024 service pairs during publication.
	var prepared:Dictionary=_service_routes.get(start,{})
	if prepared.has(finish):
		if route_counting:route_cache_stats.hits+=1
		result.assign(prepared[finish])
		return result
	var destinations: Dictionary = _route_cache.get(start,{})
	if destinations.has(finish):
		if route_counting: route_cache_stats.hits+=1
		result.assign(destinations[finish])
		return result
	if route_counting: route_cache_stats.misses+=1
	# Resume the original sorted-queue Dijkstra from its last requested stop.
	# This keeps its exact tie order, unlike replacing it with a new A*/heap
	# ordering. Nearby attachment endpoints reuse already settled prefixes.
	if not _route_searches.has(start):
		if _route_searches.size() >= ROUTE_SEARCH_LIMIT: _route_searches.erase(_route_searches.keys()[0])
		var initial_queue: Array[String] = [start]
		_route_searches[start] = {"distances":{start:0.0},"previous":{},"queue":initial_queue,"visited":{},"pending":""}
	var search: Dictionary = _route_searches[start]
	var distances: Dictionary = search.distances
	var previous: Dictionary = search.previous
	var queue: Array[String] = search.queue
	var visited: Dictionary = search.visited
	# An early destination was marked settled before the original break;
	# expand its neighbors only when a later query needs the search to continue.
	if not visited.has(finish) and not str(search.pending).is_empty():
		var pending: String = search.pending
		search.pending = ""
		_expand_route_node(pending,distances,previous,queue)
	while not visited.has(finish) and not queue.is_empty():
		_sort_route_queue(queue,distances)
		var current: String = queue.pop_front()
		if visited.has(current): continue
		visited[current] = true
		if current == finish:
			search.pending = current
			break
		_expand_route_node(current,distances,previous,queue)
	if not visited.has(finish): return result
	var current := finish
	result.push_front(positions[current]+Vector3(0,0.10,0))
	while current != start:
		current = str(previous[current])
		result.push_front(positions[current]+Vector3(0,0.10,0))
	if _route_cache_entries >= ROUTE_CACHE_LIMIT:
		_route_cache.clear()
		_route_cache_entries = 0
		destinations = {}
	destinations[finish] = result.duplicate()
	_route_cache[start] = destinations
	_route_cache_entries += 1
	return result

func _expand_route_node(current: String,distances: Dictionary,previous: Dictionary,queue: Array[String]) -> void:
	for neighbor: String in graph[current]:
		var distance := float(distances[current])+float(graph[current][neighbor])
		if distance < float(distances.get(neighbor,INF)):
			distances[neighbor] = distance
			previous[neighbor] = current
			queue.append(neighbor)

func _sort_route_queue(queue: Array[String],distances: Dictionary) -> void:
	# Native float sorting avoids a GDScript callback for every comparison.
	# Equal costs belonging to different nodes retain the original sort path,
	# including its tie permutation. Repeated entries of one node are identical.
	var costs: Array[float] = []
	costs.resize(queue.size())
	var by_cost: Dictionary = {}
	for index in range(queue.size()):
		var node: String = queue[index]
		var cost := float(distances[node])
		if by_cost.has(cost) and str(by_cost[cost]) != node:
			queue.sort_custom(func(a:String,b:String)->bool: return float(distances[a])<float(distances[b]))
			return
		by_cost[cost]=node
		costs[index]=cost
	costs.sort()
	for index in range(queue.size()): queue[index]=by_cost[costs[index]]

func _attachments_for_planar(planar: Vector2) -> Dictionary:
	attachment_stats.queries += 1
	var pkey := _key(planar)
	if _attachment_cache.has(pkey):
		attachment_stats.cache_hits += 1
		return _attachment_cache[pkey]
	var bin := Vector2i(floori(planar.x/NETWORK_BIN_SIZE),floori(planar.y/NETWORK_BIN_SIZE))
	var by_component: Dictionary = {}
	var best_distances: Dictionary = {}
	for edge: Dictionary in _edge_bins.get(bin,[]):
		attachment_stats.edge_projections += 1
		var projected := Geometry2D.get_closest_point_to_segment(planar,edge.a,edge.b)
		var distance := planar.distance_squared_to(projected)
		var component: String = edge.component
		var best_distance: float = best_distances.get(component,INF)
		if distance > 0.81 or distance > best_distance + 0.000001: continue
		if _attachment_crosses_wall(planar,projected): continue
		if distance < best_distance - 0.000001:
			by_component[component] = []
		# Keep the original tolerance and scan order, including near-equal ties.
		best_distances[component] = distance
		if not by_component.has(component): by_component[component] = []
		by_component[component].append({"start":edge.start,"end":edge.end,
			"projection":Vector3(projected.x,_navigation_height(projected)+0.10,projected.y)})
	_attachment_cache[pkey] = by_component
	return by_component

func _route_from_position(point: Vector3, finish: String) -> Array[Vector3]:
	var best: Array[Vector3] = []
	if not graph.has(finish): return best
	var component := str(component_of.get(finish,""))
	if component.is_empty(): return best
	var by_component := _attachments_for_planar(Vector2(point.x,point.z))
	var best_length := INF
	for attachment: Dictionary in by_component.get(component,[]):
		var projection: Vector3 = attachment.projection
		for endpoint: String in [str(attachment.start),str(attachment.end)]:
			var candidate := _route(endpoint,finish)
			if candidate.is_empty(): continue
			var length := projection.distance_to(candidate[0])
			for i in range(1,candidate.size()): length += candidate[i-1].distance_to(candidate[i])
			if length < best_length:
				best_length = length
				best = candidate
				best.push_front(projection)
	return best

func _exterior_route_from_position(point: Vector3, finish: String) -> Array[Vector3]:
	var planar := Vector2(point.x,point.z)
	var best: Array[Vector3] = []
	var best_length := INF
	if best.is_empty():
		# This walking prefix stays outside one building. It does not add an
		# edge to the street graph or connect two house doors globally.
		for house: Dictionary in state.houses:
			var house_id := str(house.id)
			if not connected_houses.has(house_id): continue
			var continuation := _route(str(connected_houses[house_id]),finish)
			if continuation.is_empty(): continue
			var target: Vector3=positions[connected_houses[house_id]]
			var local: Array[Vector2]=Frontage.exterior_route(house,planar,Vector2(target.x,target.z),state)
			if local.is_empty(): continue
			var candidate: Array[Vector3]=[]
			var length := 0.0
			for at: Vector2 in local:
				candidate.append(Vector3(at.x,_navigation_height(at)+0.10,at.y))
			candidate.append_array(continuation)
			for index in range(1,candidate.size()): length+=candidate[index-1].distance_to(candidate[index])
			if length<best_length:
				best_length=length
				best=candidate
	return best

func _navigation_height(at: Vector2) -> float:
	for marker: Dictionary in _roundabout_markers:
		if at.distance_to(marker.center)<=marker.radius: return state._ground_terrain.raw_height_at(marker.center)+.075
	var clearance: float = state.water_clearance(at)
	var legacy: float = 0.055+0.185*(1.0-smoothstep(-0.05,0.65,clearance))
	return state._road_heights.height_at(at,maxf(state._ground_terrain.raw_height_at(at)+0.075,legacy))

func _attachment_crosses_wall(a: Vector2,b: Vector2) -> bool:
	if _crosses_island(a,b): return true
	var bounds := Rect2(a,Vector2.ZERO).expand(b)
	var seen: Dictionary = {}
	for x in range(floori(bounds.position.x/NETWORK_BIN_SIZE),floori(bounds.end.x/NETWORK_BIN_SIZE)+1):
		for z in range(floori(bounds.position.y/NETWORK_BIN_SIZE),floori(bounds.end.y/NETWORK_BIN_SIZE)+1):
			for wall: Dictionary in _wall_bins.get(Vector2i(x,z),[]):
				var id := str(wall.house.id)+"|"+str(wall.cell.id)
				if seen.has(id): continue
				seen[id] = true
				attachment_stats.wall_tests += 1
				if Passage.segment_blocked(wall.house,wall.cell,a,b,wall.passages): return true
	return false

func _crosses_island(a: Vector2,b: Vector2) -> bool:
	for marker: Dictionary in _roundabout_markers:
		if Geometry2D.get_closest_point_to_segment(marker.center,a,b).distance_to(marker.center)<State.Roundabouts.INNER_RADIUS+.04: return true
	return false
