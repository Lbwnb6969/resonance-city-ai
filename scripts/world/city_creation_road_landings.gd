extends RefCounted
## Road height anchors follow the same exact intersections and endpoint-width
## connections as Network/Junctions. This derives heights, never a new graph.
const Junctions=preload("res://scripts/world/city_creation_junctions.gd")
static func connections(a:Vector2,b:Vector2,c:Vector2,d:Vector2,reach:float)->Array[Vector2]:
	var intersection:Variant=Geometry2D.segment_intersects_segment(a,b,c,d)
	if intersection is Vector2:return [intersection]
	var result:Array[Vector2]=[]
	for pair:Array in [[a,b,c,d],[c,d,a,b]]:
		for endpoint:Vector2 in [pair[0],pair[1]]:
			var nearest:=Geometry2D.get_closest_point_to_segment(endpoint,pair[2],pair[3])
			if endpoint.distance_to(nearest)<=reach:result.append((endpoint+nearest)*.5)
	return result
static func prepare(city:RefCounted)->Dictionary:
	var result:Dictionary={};var segments:Array=[];var bins:Dictionary={};var seen:Dictionary={}
	for road:Dictionary in city.roads:
		for i in range(road.points.size()-1):
			var a:=Vector2(float(road.points[i][0]),float(road.points[i][1]))
			var b:=Vector2(float(road.points[i+1][0]),float(road.points[i+1][1]))
			var segment:={"a":a,"b":b,"id":str(road.id),"width":float(road.width)}
			# Near endpoints may lie on opposite sides of a 4m bin boundary.
			var bounds:=Rect2(a,Vector2.ZERO).expand(b).grow(float(road.width)*.5)
			var candidates:Dictionary={}
			for z in range(floori(bounds.position.y/4.),floori(bounds.end.y/4.)+1):
				for x in range(floori(bounds.position.x/4.),floori(bounds.end.x/4.)+1):
					var key:=Vector2i(x,z)
					for index:int in bins.get(key,[]):candidates[index]=true
					if not bins.has(key):bins[key]=[]
					bins[key].append(segments.size())
			for index:int in candidates:
				var other:Dictionary=segments[index]
				if str(other.id)==str(road.id):continue
				for at:Vector2 in connections(a,b,other.a,other.b,minf(float(road.width),float(other.width))*.5):
					var ids:Array=[str(road.id),str(other.id)];ids.sort()
					var identity:=str(ids)+str(at)
					if seen.has(identity):continue
					seen[identity]=true
					var legacy:=.055+.185*(1.-smoothstep(-.05,.65,float(city.water_clearance(at))))
					var y:=maxf(float(city._ground_terrain.raw_height_at(at))+.075,legacy)
					var landing:={"at":at,"y":y,"radius":maxf(float(road.width),float(other.width))*.5+Junctions.EXTRA+.45}
					for id:String in ids:
						if not result.has(id):result[id]=[]
						result[id].append(landing)
			segments.append(segment)
	return result
