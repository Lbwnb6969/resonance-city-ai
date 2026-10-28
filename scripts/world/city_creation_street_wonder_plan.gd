extends RefCounted
## Derived scenery shares authored geometry; no new road, resident or save entities.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Frontage=preload("res://scripts/world/city_creation_frontage.gd")
const Cafes=preload("res://scripts/world/city_creation_cafe_layout_context.gd")
static func water_direction(city:RefCounted,at:Vector2)->Vector2:
	var e:=.03
	var gradient:=Vector2(city.water_clearance(at+Vector2(e,0))-city.water_clearance(at-Vector2(e,0)),city.water_clearance(at+Vector2(0,e))-city.water_clearance(at-Vector2(0,e)))
	return -gradient.normalized()
static func derive(city:RefCounted)->Dictionary:
	var key:=[city.revision,city._wish_epoch]
	var cache:Dictionary=city.get_meta("street_wonder_plan",{})
	if cache.get("key",[])==key:return cache
	var data:Dictionary={"key":key,"piers":[],"pockets":[],"fountains":[],"loops":[],"support":{}}
	var obstacles:Dictionary={"boxes":[],"doors":[],"cafes":[],"gardens":[],"piers":[]}
	for landmark:Dictionary in city.placed_landmarks:
		obstacles.boxes.append(load("res://scripts/world/city_creation_placed_landmarks.gd").footprint(landmark))
	var cafe_context:=Cafes.new()
	var legacy:bool=city.creative_settings.get("creation_policy","legacy")=="legacy"
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)==0:obstacles.boxes.append(Frame.footprint(house,cell))
		for entry:Dictionary in city.house_entrances(str(house.id)):obstacles.doors.append(entry)
		if house.role=="garden_cafe":
			var layout:Dictionary=cafe_context.layout(city,str(house.id))
			if not layout.is_empty():obstacles.cafes.append(layout)
	for house:Dictionary in city.houses:
		var id:=str(house.id);var at:=Frame.origin(house)
		if city.water_clearance(at)<=3.2:
			var pier:=_pier(city,house,obstacles)
			if not pier.is_empty():data.piers.append(pier);obstacles.piers.append(pier);data.support[id]=true
		var roadside:bool=city.roads.any(func(road):return not road.get("bridge",false) and city._water_stroke_distance(at,road.points)-float(road.width)*.5<5.)
		if absf(sin(Frame.yaw(house)*2.))>.25 if legacy else roadside:
			var pocket:=_pocket(city,house,obstacles)
			if not pocket.is_empty():data.pockets.append(pocket);obstacles.gardens.append(pocket.at);data.support[id]=true
	for marker:Dictionary in city.Roundabouts.all(city.roads):
		var members:Array=[]
		for house:Dictionary in city.houses:
			if marker.center.distance_to(Frame.origin(house))<=float(marker.radius)+6.5:members.append(str(house.id))
		if members.size()<2:continue
		marker.members=members;data.fountains.append(marker)
		for id:String in members:data.support[id]=true
	for loop:Dictionary in preload("res://scripts/world/city_creation_road_loop_faces.gd").faces(city.roads):
		if not _clear(city,loop.center,1.38,obstacles):continue
		var low:=INF;var high:=-INF
		for i in range(8):
			var y:float=city.ground_height(loop.center+Vector2.from_angle(i*TAU/8.)*1.2);low=minf(low,y);high=maxf(high,y)
		if high-low>.1:continue
		loop.radius=sqrt(float(loop.area)/PI);data.loops.append(loop);obstacles.gardens.append(loop.center)
		for house:Dictionary in city.houses:
			if Frame.origin(house).distance_to(loop.center)<float(loop.radius)+6.5:data.support[str(house.id)]=true
	for landmark:Dictionary in city.placed_landmarks:
		for house:Dictionary in city.houses:
			if Frame.distance(load("res://scripts/world/city_creation_placed_landmarks.gd").footprint(landmark),Frame.origin(house))<=6.5:data.support[str(house.id)]=true
	city.set_meta("street_wonder_obstacles",obstacles)
	city.set_meta("street_wonder_plan",data);return data
static func memorial_socket(city:RefCounted,house:Dictionary,occupied:Array)->Dictionary:
	derive(city)
	var obstacles:Dictionary=city.get_meta("street_wonder_obstacles").duplicate(true)
	obstacles.gardens.append_array(occupied)
	return _pocket(city,house,obstacles)
static func supports(city:RefCounted,id:String)->bool:return derive(city).support.has(id)
static func _clear(city:RefCounted,at:Vector2,radius:float,obstacles:Dictionary,wet:bool=false)->bool:
	if not city.WORLD_RECT.grow(-radius).has_point(at):return false
	if not wet and city.water_clearance(at)<radius+.2:return false
	for box:Variant in obstacles.boxes:
		if Frame.distance(box,at)<radius+.1:return false
	for entry:Dictionary in obstacles.doors:
		if at.distance_to(Geometry2D.get_closest_point_to_segment(at,entry.wall_at,entry.at))<radius+.75:return false
	for road:Dictionary in city.roads:
		if city._water_stroke_distance(at,road.points)<float(road.width)*.5+radius+.18:return false
		for marker:Dictionary in road.get("roundabouts",[]):
			if at.distance_to(Vector2(marker.center[0],marker.center[1]))<float(marker.radius)+radius+.1:return false
	for plan:Dictionary in obstacles.cafes:
		if at.distance_to(Vector2(plan.center))<1.3+radius:return false
		for seat:Vector2 in plan.seats:
			if at.distance_to(Geometry2D.get_closest_point_to_segment(at,plan.entrance,seat))<radius+.3:return false
	for plant:Dictionary in city.plants:
		if at.distance_to(Vector2(plant.position[0],plant.position[1]))<radius+.35:return false
	for garden:Vector2 in obstacles.gardens:
		if at.distance_to(garden)<radius+.7:return false
	for pier:Dictionary in obstacles.piers:
		if at.distance_to(Geometry2D.get_closest_point_to_segment(at,pier.start,pier.end))<radius+.52:return false
	return true
static func _pier(city:RefCounted,house:Dictionary,obstacles:Dictionary)->Dictionary:
	for cell:Dictionary in house.cells:
		if int(cell.level)!=0:continue
		var at:=Frame.center(house,cell);var dir:=water_direction(city,at)
		if dir.length_squared()<.5:continue
		var local:=dir.rotated(Frame.yaw(house));var exit:=.9/maxf(absf(local.x),absf(local.y))
		var start:=at+dir*(exit+.57)
		var shore:=float(city.water_clearance(start))
		if shore<.05 or shore>3.2:continue
		var length:=shore+.8;var end:=start+dir*length
		if city.water_clearance(end)>-.25:continue
		var clear:=true
		for i in range(13):
			var point:=start.lerp(end,float(i)/12.)
			if not _clear(city,point,.42,obstacles,true):clear=false;break
		if not clear:continue
		var y:=float(city.ground_height(start))
		# Steep cliffs need authored stairs, not a floating automatic pier.
		if y>.48:continue
		return {"house_id":str(house.id),"start":start,"end":end,"at":(start+end)*.5,"dir":dir,"length":length,"y":y+.08,"yaw":atan2(dir.x,dir.y)}
	return {}
static func _pocket(city:RefCounted,house:Dictionary,obstacles:Dictionary)->Dictionary:
	for cell:Dictionary in house.cells:
		if int(cell.level)!=0:continue
		for corner:Vector2 in [Vector2(1,1),Vector2(-1,1),Vector2(1,-1),Vector2(-1,-1)]:
			var at:=Frame.center(house,cell)+Frame.direction(house,corner*1.45)
			if city.CreationPolicy.is_free(city) and not city.roads.any(func(road):return not road.get("bridge",false) and city._water_stroke_distance(at,road.points)-float(road.width)*.5<3.5):continue
			if not _clear(city,at,.59,obstacles):continue
			var low:=INF;var high:=-INF
			for i in range(8):
				var y:=float(city.ground_height(at+Vector2.from_angle(i*TAU/8.)*.58));low=minf(low,y);high=maxf(high,y)
			if high-low>.08:continue
			return {"house_id":str(house.id),"at":at,"yaw":Frame.yaw(house),"y":high,"radius":.59}
	return {}
