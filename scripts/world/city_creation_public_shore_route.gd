extends RefCounted
## Routes use published physical road spans, not component equality alone.
const Walk=preload("res://scripts/world/city_creation_public_street_walk.gd")
static func key(at:Vector2)->Vector2:return at.snapped(Vector2.ONE*.001)
static func cached(city:RefCounted,points:PackedVector2Array,obstacles:Array)->Dictionary:
	var cache:Dictionary=city.get_meta("public_street_proofs",{})
	if cache.get("revision",-1)!=city.revision:cache={"revision":city.revision,"values":{}}
	var identity:=var_to_str(points)
	if not cache.values.has(identity):cache.values[identity]=Walk.assess(city,points,obstacles)
	city.set_meta("public_street_proofs",cache);return cache.values[identity]
static func find(city:RefCounted,component:String,start:Vector2,finish:Vector2,start_road:String,finish_road:String,obstacles:Array)->Dictionary:
	var spans:Array=city._region_network.get("road_spans",[]).filter(func(s):return s.component==component)
	var graph:=AStar2D.new();var ids:Dictionary={};var positions:Array[Vector2]=[];var radii:Array[float]=[];var widths:Dictionary={}
	for road:Dictionary in city.roads:widths[road.id]=float(road.width)
	for span:Dictionary in spans:
		var radius:=0.
		for id:String in span.roads:radius=maxf(radius,float(widths[id])*.5)
		var split:Array[Vector2]=[span.a,span.b]
		for port:Array in [[start,start_road],[finish,finish_road]]:
			if port[1] in span.roads and Vector2(port[0]).distance_to(Geometry2D.get_closest_point_to_segment(port[0],span.a,span.b))<.002:split.append(port[0])
		split.sort_custom(func(a:Vector2,b:Vector2):return a.distance_squared_to(span.a)<b.distance_squared_to(span.a))
		for at:Vector2 in split:
			var identity:=key(at)
			if not ids.has(identity):
				ids[identity]=positions.size();positions.append(at);radii.append(radius);graph.add_point(ids[identity],at)
			else:radii[ids[identity]]=maxf(radii[ids[identity]],radius)
		for i in range(1,split.size()):
			var a:int=ids[key(split[i-1])];var b:int=ids[key(split[i])]
			if a==b:continue
			if not cached(city,PackedVector2Array([positions[a],positions[b]]),obstacles).ok:continue
			graph.connect_points(a,b)
	# Production width connectors can join close endpoints of different spans.
	# Every such connector still needs an actual continuous street footprint.
	for a in range(positions.size()):
		for b in range(a):
			if positions[a].distance_to(positions[b])>minf(radii[a],radii[b]) or graph.are_points_connected(a,b):continue
			if cached(city,PackedVector2Array([positions[a],positions[b]]),obstacles).ok:graph.connect_points(a,b)
	if not ids.has(key(start)) or not ids.has(key(finish)):return {"ok":false,"reason":"street_route_missing"}
	var route:PackedVector2Array=graph.get_point_path(ids[key(start)],ids[key(finish)])
	if route.is_empty():return {"ok":false,"reason":"street_route_missing"}
	var proof:=cached(city,route,obstacles)
	if not proof.ok:return proof
	proof=proof.duplicate(true);var sources:Array[String]=[];sources.assign(proof.road_ids)
	for id:String in [start_road,finish_road]:
		if not sources.has(id):sources.append(id)
	sources.sort();proof.road_ids=sources;return proof
