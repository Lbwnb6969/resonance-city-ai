extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Frontage=preload("res://scripts/world/city_creation_frontage.gd")
const Boundary=preload("res://scripts/world/city_creation_shore_boundary.gd")
const Height=preload("res://scripts/world/city_creation_entry_height.gd")
const Approach=preload("res://scripts/world/city_creation_shore_approach.gd")
const Route=preload("res://scripts/world/city_creation_public_shore_route.gd")
static func faces(city:RefCounted,house:Dictionary,obstacles:Array,water_distance:Callable)->Array:
	var result:Array=[]
	for cell:Dictionary in house.cells:
		if cell.level!=0 or cell.kind!="room":continue
		for side:Vector2i in Frontage.SIDES:
			if not Frontage.exposed(house,cell,side):continue
			var normal:=Frame.direction(house,Vector2(side),cell);var wall:=Frame.center(house,cell)+normal*.9
			for shore:Dictionary in Boundary.candidates(city,wall):
				var delta:Vector2=shore.bank-wall
				if delta.length()>5.2 or delta.length()<.36 or delta.normalized().dot(normal)<.72:continue
				var start:=wall+delta.normalized()*.18;var end:Vector2=shore.bank-delta.normalized()*.18;var tangent:=Vector2(-delta.y,delta.x).normalized()*.35
				var shape:={"polygon":PackedVector2Array([start-tangent,start+tangent,end+tangent,end-tangent])}
				if obstacles.any(func(o):return Frame.boxes_overlap(shape,o)) or float(water_distance.call(shape))<.05:continue
				if city.ground_height(shore.wet)>city.Terrain.WATER_LEVEL+.005:continue
				result.append({"cell_id":cell.id,"wall_at":wall,"bank":shore.bank,"wet_at":shore.wet,"water_id":shore.water_id,"water_ids":shore.water_ids,"polygon":shape.polygon})
	return result
static func ports(city:RefCounted,house:Dictionary)->Array:
	var result:Array=[]
	for entry:Dictionary in city.house_entrances(house.id):
		if entry.get("passage",false):continue
		for road:Dictionary in city.roads:
			if entry.active and entry.road_id!=road.id:continue
			for i in range(1,road.points.size()):
				var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1]);var at:=Geometry2D.get_closest_point_to_segment(entry.at,a,b)
				if at.distance_to(entry.at)>=.82 or Frame.normal(entry).dot(at-Vector2(entry.wall_at))<=0.:continue
				var access:=Height.assess(city,house,entry,at,road)
				if access.ok and access.get("scope","")!="unchanged":result.append({"entry":entry,"street_at":at,"road_id":road.id,"height_access":access})
	return result
static func derive(city:RefCounted,house:Dictionary,member:Dictionary,faces:Array,geometry:Array,water_distance:Callable)->Dictionary:
	var entries:Array=[];var rejected:Array=[];var sources:Array=[]
	if not member.connected:return {"entries":entries,"rejected":rejected,"sources":sources}
	var starts:=ports(city,house)
	var route_obstacles:=Route.Walk.obstacles(city)
	for face:Dictionary in faces:
		for road:Dictionary in city.roads:
			for i in range(1,road.points.size()):
				var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
				var probe:Vector2=face.wall_at+(face.bank-Vector2(face.wall_at)).normalized()*.62
				var at:=Geometry2D.get_closest_point_to_segment(probe,a,b)
				if not Frame.contains(face,at):continue
				var shore:=Approach.assess(city,at,face.bank,road)
				for port:Dictionary in starts:
					var path:Dictionary=Route.find(city,member.component,port.street_at,at,port.road_id,road.id,route_obstacles) if shore.ok else {"ok":false,"reason":shore.reason}
					var row:={"house_id":house.id,"cell_id":port.entry.cell_id,"face_cell_id":face.cell_id,"road_id":port.road_id,"face_road_id":road.id,"water_id":face.water_id,"at":port.entry.at,"street_at":port.street_at,"face_street_at":at,"height_access":port.height_access,"ground_access":path.ok and shore.ok,"shore_access":shore,"street_path":path}
					if not row.ground_access:
						if not rejected.has(row):rejected.append(row)
						continue
					entries.append(row)
					for id:String in path.road_ids+face.water_ids+path.clearance_source_ids:
						if not sources.has(id):sources.append(id)
	return {"entries":entries,"rejected":rejected,"sources":sources}
