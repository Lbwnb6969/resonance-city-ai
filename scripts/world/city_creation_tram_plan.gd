extends RefCounted
## A rail is an actual street graph edge lying on a tram centreline.
## No car can use an ordinary road to connect two disconnected rail strokes.
const Roundabouts=preload("res://scripts/world/city_creation_roundabouts.gd")

static func from_network(city: RefCounted,network: RefCounted)->Dictionary:
	var rails: Array=[]
	for road: Dictionary in city.roads:
		if str(road.get("style","path"))=="tram":rails.append(road)
	var result: Dictionary={"graph":{},"positions":{},"edges":[],"lines":[],"stations":[],"station_keys":{},"length":0.0}
	if rails.is_empty():return result
	var markers:=Roundabouts.all(city.roads)
	for a: String in network.graph:
		for b: String in network.graph[a]:
			if a>=b:continue
			var aa: Vector3=network.positions[a];var bb: Vector3=network.positions[b]
			var p:=Vector2(aa.x,aa.z);var q:=Vector2(bb.x,bb.z)
			var owner:=_owner(p,q,rails,markers)
			if owner.is_empty():continue
			if not result.graph.has(a):result.graph[a]={}
			if not result.graph.has(b):result.graph[b]={}
			var distance:=p.distance_to(q)
			result.graph[a][b]=distance;result.graph[b][a]=distance
			result.positions[a]=aa;result.positions[b]=bb
			result.edges.append({"a":aa,"b":bb,"owner":owner,"length":distance})
			result.length+=distance
	var visited: Dictionary={}
	var keys: Array=result.graph.keys();keys.sort()
	for key: String in keys:
		if result.graph[key].size()!=2 or network.graph[key].size()>2 or key in network.connected_houses.values():result.station_keys[key]=true
	for key: String in keys:
		if visited.has(key):continue
		var tour: Array[String]=[]
		_walk(key,"",result.graph,visited,tour)
		var length:=0.
		for i in range(1,tour.size()):length+=float(result.graph[tour[i-1]][tour[i]])
		if length<7.2:continue
		var has_station := false
		for stop: String in tour:
			if result.station_keys.has(stop):has_station=true;break
		if not has_station:result.station_keys[key]=true
		result.lines.append({"id":key,"tour":tour,"length":length})
	result.lines.sort_custom(func(a:Dictionary,b:Dictionary)->bool:return float(a.length)>float(b.length) if not is_equal_approx(a.length,b.length) else str(a.id)<str(b.id))
	for key: String in result.station_keys:result.stations.append({"key":key,"at":result.positions[key],"junction":result.graph[key].size()>2})
	return result

static func _walk(key: String,parent: String,graph: Dictionary,visited: Dictionary,tour: Array[String])->void:
	visited[key]=true;tour.append(key)
	var neighbors: Array=graph[key].keys();neighbors.sort()
	for next: String in neighbors:
		if next==parent:continue
		if visited.has(next):
			# One traversal of every non-tree edge covers real rail loops too.
			if key<next:tour.append(next);tour.append(key)
			continue
		_walk(next,key,graph,visited,tour);tour.append(key)

static func _owner(a: Vector2,b: Vector2,roads: Array,markers: Array)->String:
	var midpoint: Vector2=(a+b)*.5
	for road: Dictionary in roads:
		for index in range(road.points.size()-1):
			var p:=Vector2(road.points[index][0],road.points[index][1]);var q:=Vector2(road.points[index+1][0],road.points[index+1][1])
			if Geometry2D.get_closest_point_to_segment(a,p,q).distance_to(a)<.025 and Geometry2D.get_closest_point_to_segment(b,p,q).distance_to(b)<.025:return str(road.id)
	for marker: Dictionary in markers:
		if absf(a.distance_to(marker.center)-Roundabouts.ROUTE_RADIUS)>.04 or absf(b.distance_to(marker.center)-Roundabouts.ROUTE_RADIUS)>.04:continue
		for road: Dictionary in roads:
			for point: Array in road.points:
				if Vector2(point[0],point[1]).distance_to(marker.center)<float(marker.radius)+.1:return str(road.id)
			for index in range(road.points.size()-1):
				var p:=Vector2(road.points[index][0],road.points[index][1]);var q:=Vector2(road.points[index+1][0],road.points[index+1][1])
				if Geometry2D.get_closest_point_to_segment(marker.center,p,q).distance_to(marker.center)<.025:return str(road.id)
	return ""
