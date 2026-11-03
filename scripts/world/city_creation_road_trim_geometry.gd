extends RefCounted
## Metres along the authored polyline; bends and doors do not create junctions.
static func point(row:Array)->Vector2:return Vector2(row[0],row[1])
static func length(road:Dictionary)->float:
	var value:=0.
	for i in range(1,road.points.size()):value+=point(road.points[i-1]).distance_to(point(road.points[i]))
	return value
static func project(road:Dictionary,at:Vector2)->Dictionary:
	var best:={"distance":INF,"arc":0.,"at":Vector2.ZERO};var arc:=0.
	for i in range(1,road.points.size()):
		var a:=point(road.points[i-1]);var b:=point(road.points[i]);var p:=Geometry2D.get_closest_point_to_segment(at,a,b);var gap:=p.distance_to(at)
		if gap<float(best.distance):best={"distance":gap,"arc":arc+a.distance_to(p),"at":p}
		arc+=a.distance_to(b)
	return best
static func at(road:Dictionary,arc:float)->Vector2:
	for i in range(1,road.points.size()):
		var a:=point(road.points[i-1]);var b:=point(road.points[i]);var span:=a.distance_to(b)
		if arc<=span:return a.lerp(b,clampf(arc/maxf(span,.000001),0.,1.))
		arc-=span
	return point(road.points[-1])
static func slice(road:Dictionary,low:float,high:float)->Array:
	var points:Array=[];var start:=at(road,low);points.append([start.x,start.y]);var arc:=0.
	for i in range(1,road.points.size()):
		arc+=point(road.points[i-1]).distance_to(point(road.points[i]))
		if arc>low+.0001 and arc<high-.0001:points.append(road.points[i].duplicate())
	var finish:=at(road,high)
	if finish.distance_to(point(points[-1]))>.0001:points.append([finish.x,finish.y])
	return points
static func profile_y(city:RefCounted,road:Dictionary,at:Vector2)->float:
	var arc:float=project(road,at).arc;var profile:Dictionary=city.road_profile(road)
	for tread:Dictionary in profile.treads:
		if arc>=float(tread.s0) and arc<=float(tread.s1):return tread.y
	for i in range(1,profile.samples.size()):
		var a:Dictionary=profile.samples[i-1];var b:Dictionary=profile.samples[i]
		if arc<=float(b.distance):return lerpf(a.y,b.y,clampf((arc-float(a.distance))/maxf(.000001,float(b.distance)-float(a.distance)),0.,1.))
	return profile.samples[-1].y
static func boundaries(city:RefCounted,road:Dictionary,network:RefCounted)->Array:
	var values:Array=[0.,length(road)]
	# Use actual production graph branches, excluding house/width-only leaves.
	for node:String in network.road_edges:
		var p3:Vector3=network.positions[node];var p:=Vector2(p3.x,p3.z);var projection:=project(road,p)
		if projection.distance>.002:continue
		var directions:Array[Vector2]=[];var owners:Array=[];var edge_sets:Array=[]
		for other:String in network.graph[node]:
			var q3:Vector3=network.positions[other];var q:=Vector2(q3.x,q3.z)
			var edge_owners:Array=network.road_edges.get(node,{}).get(other,[]).duplicate()
			if road.id in edge_owners:
				var ordered:=edge_owners.duplicate();ordered.sort()
				if not edge_sets.has(ordered):edge_sets.append(ordered)
			if edge_owners.is_empty() and p.distance_to(q)<=float(road.width)*.5+.002:
				for peer:String in network.road_edges.get(other,{}):
					for id:String in network.road_edges[other][peer]:
						if id!=road.id and not edge_owners.has(id):edge_owners.append(id)
			for id:String in edge_owners:
				if not owners.has(id):owners.append(id)
				var direction:Vector2=(q-p).normalized()
				if not directions.any(func(d):return d.dot(direction)>.999):directions.append(direction)
		var overlap_boundary:bool=edge_sets.size()>1
		if directions.size()<3 and not overlap_boundary:continue
		var connected:=false
		for id:String in owners:
			if id==road.id:continue
			var rows:Array=city.roads.filter(func(r):return r.id==id)
			if rows.is_empty():continue
			var other:Dictionary=rows[0];var nearest:=project(other,p)
			if absf(profile_y(city,road,p)-profile_y(city,other,nearest.at))<=.14:connected=true
		# A self crossing has four real outgoing road edges, unlike a bend.
		if connected or overlap_boundary or (owners==[road.id] and directions.size()>=4):
			var arc:=0.
			for i in range(1,road.points.size()):
				var a:=point(road.points[i-1]);var b:=point(road.points[i]);var closest:=Geometry2D.get_closest_point_to_segment(p,a,b)
				if closest.distance_to(p)<.002:values.append(arc+a.distance_to(closest))
				arc+=a.distance_to(b)
	for marker:Dictionary in city.Roundabouts.all(city.roads):
		var p:=project(road,marker.center)
		if p.distance<=marker.radius:
			values.append(maxf(0.,p.arc-sqrt(marker.radius*marker.radius-p.distance*p.distance)))
			values.append(minf(length(road),p.arc+sqrt(marker.radius*marker.radius-p.distance*p.distance)))
	values.sort();var result:Array=[]
	for value:float in values:
		if result.is_empty() or value-float(result[-1])>.002:result.append(value)
	return result
