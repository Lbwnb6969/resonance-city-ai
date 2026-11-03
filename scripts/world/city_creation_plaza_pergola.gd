extends RefCounted
## Optional derived furnishing. Author paving alone owns civic/music eligibility.
const FIELD:="plaza_pergola_fountain"
const Plazas=preload("res://scripts/world/city_creation_plaza_loops.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Obstacles=preload("res://scripts/world/city_creation_public_space_obstacles.gd")
static func unlocked(city)->bool:return city.CreationPolicy.is_free(city) and int(city.cozy_progression.get("level",0))>=3
static func key(city)->Array:return [unlocked(city),city.creative_settings.get("presentation",{}).get(FIELD,false),city.creative_settings.get("presentation",{}).get("automatic_decoration",true)]
static func enabled(city)->bool:return key(city)==[true,true,true]
static func set_enabled(city,value:bool)->Dictionary:
	if value and not unlocked(city):return city._fail("新账期等级3可选广场木花架与涌泉")
	var prefs:Dictionary=city.creative_settings.get("presentation",{}).duplicate(true);prefs[FIELD]=value
	return city.CreationPolicy.set_preferences(city,{"presentation":prefs})
static func point(row:Dictionary,local:Vector2)->Vector2:return Vector2(row.center)+local.rotated(-float(row.yaw))
static func local(row:Dictionary,at:Vector2)->Vector2:return (at-Vector2(row.center)).rotated(float(row.yaw))
static func clear(city,at:Vector2,margin:float,obstacles:Array)->bool:
	if not city.WORLD_RECT.has_point(at) or city.water_clearance(at)<margin:return false
	for obstacle:Dictionary in obstacles:
		if Frame.distance(obstacle.shape,at)<=margin:return false
	for plant:Dictionary in city.plants:
		if city.vegetation_visible(plant) and at.distance_to(Vector2(plant.position[0],plant.position[1]))<city.GardenSpecies.clearance(plant.kind,float(plant.scale))+margin:return false
	return true
static func plans(city)->Array[Dictionary]:
	var rows:Array[Dictionary]=[]
	if not enabled(city):return rows
	var stamp:=[city.revision,city._wish_epoch,key(city)];var cached:Dictionary=city.get_meta(FIELD,{})
	if cached.get("stamp",[])==stamp:return cached.rows
	var obstacles:=Obstacles.collect(city)
	for plaza:Dictionary in Plazas.plans(city):
		var row:=plaza.duplicate(true);row.yaw=-(Vector2(row.polygon[1])-Vector2(row.polygon[0])).angle();row.y=city.ground_height(row.center)+.075;var ok:=true;var low:=INF;var high:=-INF
		for x:float in [-1.72,-.86,0.,.86,1.72]:
			for z:float in [-1.72,-.86,0.,.86,1.72]:
				var at:=point(row,Vector2(x,z));var y:float=city.ground_height(at);low=minf(low,y);high=maxf(high,y)
				if not Geometry2D.is_point_in_polygon(at,row.polygon) or not clear(city,at,.18,obstacles):ok=false
		# Reject authored volumes anywhere in the whole furnishing, not only at sample points.
		var fp:={"center":row.center,"half":Vector2.ONE*1.72,"angle":row.yaw}
		for obstacle:Dictionary in obstacles:
			if not Geometry2D.intersect_polygons(Frame.corners(fp),Frame.corners(obstacle.shape)).is_empty():ok=false
		for plant:Dictionary in city.plants:
			if city.vegetation_visible(plant) and Frame.distance(fp,Vector2(plant.position[0],plant.position[1]))<city.GardenSpecies.clearance(plant.kind,float(plant.scale)):ok=false
		if not Geometry2D.clip_polygons(Frame.corners(fp),row.polygon).is_empty():ok=false
		for road:Dictionary in city.roads:
			for i in range(1,road.points.size()):
				if Frame.segment(Frame.grow(fp,float(road.width)*.5+.18),Vector2(road.points[i-1][0],road.points[i-1][1]),Vector2(road.points[i][0],road.points[i][1])):ok=false
		if not ok or high-low>.16:continue
		row.feet=[]
		for x:float in [-1.32,1.32]:
			for z:float in [-1.32,1.32]:
				var at:=point(row,Vector2(x,z));row.feet.append(Vector3(x,city.ground_height(at)+.075-row.y,z))
		rows.append(row)
	city.set_meta(FIELD,{"stamp":stamp,"rows":rows});return rows
static func clear_leg(city,row:Dictionary,a:Vector2,b:Vector2,obstacles:Array)->bool:
	for i in range(ceili(a.distance_to(b)/.16)+1):
		var at:=a.move_toward(b,i*.16)
		if not clear(city,at,.20,obstacles):return false
		var p:=local(row,at)
		if p.length()<1.08:return false
		for foot:Vector3 in row.feet:
			if p.distance_to(Vector2(foot.x,foot.z))<.30:return false
	return true
static func signature(city)->Array:
	return [key(city),city.plaza_loops.duplicate(true),city.plants.duplicate(true),city.placed_landmarks.duplicate(true)] if enabled(city) else [key(city)]
