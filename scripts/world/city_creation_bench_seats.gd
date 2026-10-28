extends RefCounted
## The exact published promenade records define every seat; no synthetic furniture.
const Promenade=preload("res://scripts/visual/city_creation_promenade.gd")
static func plans(city:RefCounted)->Dictionary:
	var key:Array=[city.get_instance_id(),city.revision]
	var saved:Dictionary=city.get_meta("bench_seat_plan",{})
	if saved.get("key",[])==key:return saved.seats
	var seats:Dictionary={};var planner:=Promenade.new()
	for road:Dictionary in city.roads:
		for record:Dictionary in planner.prepare({"state":city},road):
			if record.kind!="bench":continue
			var id:="bench/%s/%.2f/%d"%[road.id,record.arc,record.side]
			var face:=Vector2(cos(float(record.yaw)),-sin(float(record.yaw)))*float(record.side)
			seats[id]={"id":id,"road_id":str(road.id),"at":record.at,"y":float(record.y),"face":face,"approach":Vector2(record.at)+face*.75,"signature":hash([record,road.points,road.width])}
			var best:=INF
			for i in range(1,road.points.size()):
				var at:=Geometry2D.get_closest_point_to_segment(record.at,Vector2(road.points[i-1][0],road.points[i-1][1]),Vector2(road.points[i][0],road.points[i][1]))
				if at.distance_squared_to(record.at)<best:best=at.distance_squared_to(record.at);seats[id].street=at
	city.set_meta("bench_seat_plan",{"key":key,"seats":seats});return seats
static func occupied(life,id:String)->bool:
	if life.get_meta("player_bench","")==id:return true
	return life.residents.any(func(r):return r.get("bench_visit",{}).get("seat","")==id)
static func clear_leg(city:RefCounted,a:Vector2,b:Vector2)->bool:
	if city.PlacedLandmarks.stroke_conflicts(city,[[a.x,a.y],[b.x,b.y]],.16):return false
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)==0 and city.Rotation.Frame.segment(city.Rotation.Frame.footprint(house,cell,.16),a,b):return false
	for i in range(ceili(a.distance_to(b)/.15)+1):
		if city.water_clearance(a.move_toward(b,i*.15))<.14:return false
	return true
static func approach(life,point:Vector3,seat:Dictionary)->Array[Vector3]:
	var result:Array[Vector3]=[];var best:=INF;var projected:Dictionary=life._network._attachments_for_planar(seat.street)
	for component:String in projected:
		for link:Dictionary in projected[component]:
			for endpoint:String in [link.start,link.end]:
				var path:Array[Vector3]=life._route_from_position(point,endpoint)
				if path.is_empty():continue
				var tail:=Vector2(link.projection.x,link.projection.z)
				var tangent:=Vector2(-seat.face.y,seat.face.x)*.85
				var corner:Vector2=seat.at+tangent
				var front:Vector2=seat.approach+tangent
				if not clear_leg(life.state,tail,corner) or not clear_leg(life.state,corner,front) or not clear_leg(life.state,front,seat.approach) or not clear_leg(life.state,seat.approach,seat.at):continue
				path.append(link.projection)
				for at:Vector2 in [corner,front,seat.approach]:path.append(Vector3(at.x,life.state.street_height(at)+.1,at.y))
				path.append(Vector3(seat.at.x,float(seat.y)+.075,seat.at.y))
				var distance:=point.distance_to(path[0])
				for i in range(1,path.size()):distance+=path[i-1].distance_to(path[i])
				if distance<best and distance<=20.:best=distance;result=path
	return result
