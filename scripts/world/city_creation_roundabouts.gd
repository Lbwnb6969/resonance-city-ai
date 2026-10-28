extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Saved intent lives on a real owning road; circular coverage, routes and
## scenery are derived. No synthetic road IDs or changes to house entrances.
const RADIUS := 2.4
const INNER_RADIUS := 1.22
const ROUTE_RADIUS := 1.82
const SIDES := 48

static func all(roads: Array) -> Array[Dictionary]:
	var result: Array[Dictionary]=[]
	for road: Dictionary in roads:
		for marker: Dictionary in road.get("roundabouts",[]):
			result.append({"owner_id":str(road.id),"center":Vector2(marker.center[0],marker.center[1]),"radius":float(marker.radius)})
	return result

static func polygon(center: Vector2,radius: float) -> PackedVector2Array:
	var points:=PackedVector2Array()
	for i in range(SIDES): points.append(center+Vector2.from_angle(float(i)*TAU/SIDES)*radius)
	return points

static func preview(city: RefCounted,point: Vector2) -> Dictionary:
	var selected: Dictionary={};var nearest:=1.1
	for first in range(city.roads.size()):
		var a: Dictionary=city.roads[first]
		for second in range(first+1,city.roads.size()):
			var b: Dictionary=city.roads[second]
			for i in range(a.points.size()-1):
				for j in range(b.points.size()-1):
					var crossing: Variant=Geometry2D.segment_intersects_segment(Vector2(a.points[i][0],a.points[i][1]),Vector2(a.points[i+1][0],a.points[i+1][1]),Vector2(b.points[j][0],b.points[j][1]),Vector2(b.points[j+1][0],b.points[j+1][1]))
					if crossing is Vector2 and point.distance_to(crossing)<nearest:
						nearest=point.distance_to(crossing);selected={"owner_id":str(a.id),"center":crossing,"radius":RADIUS}
	if selected.is_empty(): return {"ok":false,"message":"点击两条道路的真实交叉口"}
	if city.PlacedLandmarks.occupies(city,selected.center,RADIUS+.4):return city._fail("环岛需要避开传世地标")
	for marker: Dictionary in all(city.roads):
		if marker.center.distance_to(selected.center)<RADIUS*2+.5: return {"ok":false,"message":"这里已邻近环岛广场"}
	var valid:=site(city,selected.center,RADIUS,city.houses,city.waters)
	valid.merge(selected)
	return valid

static func site(city: RefCounted,center: Vector2,radius: float,houses: Array,waters: Array) -> Dictionary:
	if not city.WORLD_RECT.grow(-radius).has_point(center): return {"ok":false,"message":"环岛需要完整的河湾用地"}
	for house: Dictionary in houses:
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var at:=Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			if Frame.distance(Frame.footprint(house,cell),center)<radius+.3: return {"ok":false,"message":"环岛需要避开房屋与门前"}
	for at: Vector2 in polygon(center,radius+.15):
		if city._water_clearance_in(at,waters)<.25: return {"ok":false,"message":"环岛需要干燥的岸上路口"}
	if city._water_clearance_in(center,waters)<radius+.25: return {"ok":false,"message":"环岛需要干燥的岸上路口"}
	return {"ok":true,"message":"圆形石板环岛与中心涌泉已就绪"}

static func routing_roads(roads: Array) -> Array:
	var markers:=all(roads)
	if markers.is_empty(): return roads
	var segments: Array=[]
	for road: Dictionary in roads:
		for i in range(road.points.size()-1): segments.append({"id":road.id,"a":Vector2(road.points[i][0],road.points[i][1]),"b":Vector2(road.points[i+1][0],road.points[i+1][1]),"width":float(road.width)})
	for marker: Dictionary in markers:
		var center: Vector2=marker.center
		var kept: Array=[];var angles: Array[float]=[]
		for i in range(SIDES): angles.append(float(i)*TAU/SIDES)
		for segment: Dictionary in segments:
			var a: Vector2=segment.a;var b: Vector2=segment.b;var direction:=b-a
			var length2:=direction.length_squared()
			if length2<.000001: continue
			var relative:=a-center
			var projection:=relative.dot(direction)/length2
			var discriminant:=projection*projection-(relative.length_squared()-ROUTE_RADIUS*ROUTE_RADIUS)/length2
			if discriminant<=0.0: kept.append(segment);continue
			var t0:=maxf(0.0,-projection-sqrt(discriminant));var t1:=minf(1.0,-projection+sqrt(discriminant))
			if t0>=t1: kept.append(segment);continue
			for part: Array in [[0.0,t0],[t1,1.0]]:
				if part[1]-part[0]<.00001: continue
				var p:=a+direction*float(part[0]);var q:=a+direction*float(part[1])
				kept.append({"id":segment.id,"a":p,"b":q,"width":segment.width})
				for endpoint: Vector2 in [p,q]:
					if absf(endpoint.distance_to(center)-ROUTE_RADIUS)<.0001: angles.append(fposmod((endpoint-center).angle(),TAU))
		angles.sort()
		var unique: Array[float]=[]
		for angle: float in angles:
			if unique.is_empty() or angle-unique[-1]>.00001: unique.append(angle)
		for i in range(unique.size()):
			kept.append({"id":marker.owner_id,"a":center+Vector2.from_angle(unique[i])*ROUTE_RADIUS,"b":center+Vector2.from_angle(unique[(i+1)%unique.size()])*ROUTE_RADIUS,"width":1.0})
		segments=kept
	var result: Array=[]
	for segment: Dictionary in segments: result.append({"id":segment.id,"points":[[segment.a.x,segment.a.y],[segment.b.x,segment.b.y]],"width":segment.width})
	return result
