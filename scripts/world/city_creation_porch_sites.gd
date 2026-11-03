extends RefCounted
## Read-only footprints. Authored choices never create a door or a walk surface.
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Surfaces=preload("res://scripts/visual/city_creation_dormer_sites.gd")
const Furniture=preload("res://scripts/visual/city_creation_street_furniture_footprints.gd")
const HALF:=Vector2(.18,.16)
const HEIGHT:=.50
static func signature(city,house:Dictionary)->Array:
	if Choice.porch(house).is_empty() or not Choice.porch_supported(city,house):return []
	var region:=Frame.house_bounds(house).grow(2.);var near:Array=[]
	for other:Dictionary in city.houses:
		if region.intersects(Frame.house_bounds(other),true):near.append([other,city.house_entrances(str(other.id))])
	return [["porch/v1",near,city.roads,city.waters,city.terrain_strokes,city.plants,city.placed_landmarks,city.terrain_policy]]
static func capsule(polygon:PackedVector2Array,a:Vector2,b:Vector2,radius:float)->bool:
	var box:={"polygon":polygon}
	if Frame.segment(box,a,b) or Frame.distance(box,a)<=radius or Frame.distance(box,b)<=radius:return true
	for point:Vector2 in polygon:
		if point.distance_to(Geometry2D.get_closest_point_to_segment(point,a,b))<=radius:return true
	return false
static func clear(city,house:Dictionary,polygon:PackedVector2Array,low:float,diagnostics:Dictionary={})->bool:
	var box:={"polygon":polygon};var center:=Vector2.ZERO
	for point:Vector2 in polygon:center+=point
	center/=polygon.size()
	if city.water_clearance(center)<HALF.length()+.03:diagnostics.water_tight=true;return false
	for other:Dictionary in city.houses:
		for cell:Dictionary in other.cells:
			var bottom:=float(other.get("base_y",0.))+int(cell.level)*1.7
			if bottom<low+HEIGHT and bottom+1.7>low and Frame.boxes_overlap(box,Frame.footprint(other,cell,.025)):diagnostics.house_obstructed=true;return false
		for door:Dictionary in city.house_entrances(str(other.id)):
			if capsule(polygon,door.wall_at,door.clearance_at,.40):diagnostics.entry_clearance=true;return false
	for road:Dictionary in city.roads:
		for i in range(1,road.points.size()):
			if capsule(polygon,Vector2(road.points[i-1][0],road.points[i-1][1]),Vector2(road.points[i][0],road.points[i][1]),float(road.width)*.5+.08):diagnostics.road_tight=true;return false
	for shape:Variant in Furniture.plans(city):
		if Frame.boxes_overlap(box,Frame.grow(shape,.04)):diagnostics.furniture_obstructed=true;return false
	for item:Dictionary in city.placed_landmarks:
		if Frame.boxes_overlap(box,city.PlacedLandmarks.footprint(item)):diagnostics.landmark_obstructed=true;return false
	for plant:Dictionary in city.plants:
		var at:=Vector2(plant.position[0],plant.position[1]);var radius:float=city.GardenSpecies.clearance(plant.kind,plant.scale)
		if Frame.distance(box,at)<radius and city.vegetation_visible(plant):diagnostics.plant_obstructed=true;return false
	return true
static func plan(city,house:Dictionary,pose:Transform3D,occupied:Array[Vector3],diagnostics:Dictionary={})->Array:
	var result:Array=[]
	for x:float in [-.77,.77]:
		for depth:float in [.36,.72,1.02]:
			var candidate:=site(city,house,pose,occupied,x,depth,diagnostics)
			if not candidate.is_empty():result.append(candidate);break
	return result
static func site(city,house:Dictionary,pose:Transform3D,occupied:Array[Vector3],x:float,depth:float,diagnostics:Dictionary={})->Dictionary:
	var local:=Rect2(Vector2(x,depth)-HALF,HALF*2.);var polygon:=PackedVector2Array();var low:=INF;var high:=-INF
	for ix in range(5):
		for iz in range(5):
			var at:=local.position+Vector2(ix,iz)*local.size*.25;var p:=Frame.world3(house,pose*Vector3(at.x,0,at.y));var y:float=city.ground_height(Vector2(p.x,p.z));low=minf(low,y);high=maxf(high,y)
	var support:Array[Vector3]=[]
	for i in range(0,occupied.size(),3):
		var a:=occupied[i];var b:=occupied[i+1];var c:=occupied[i+2];var normal:=(b-a).cross(c-a)
		if absf(normal.y)>.999*normal.length() and maxf(a.y,maxf(b.y,c.y))<=high-pose.origin.y+.20:support.append_array([a,b,c])
	low=INF;high=-INF
	for ix in range(5):
		for iz in range(5):
			var at:=local.position+Vector2(ix,iz)*local.size*.25;var p:=Frame.world3(house,pose*Vector3(at.x,0,at.y));var y:float=maxf(city.ground_height(Vector2(p.x,p.z)),Surfaces.height(support,at)+pose.origin.y);low=minf(low,y);high=maxf(high,y)
	for at:Vector2 in Frame.corners(local):
		var p:=Frame.world3(house,pose*Vector3(at.x,0,at.y));polygon.append(Vector2(p.x,p.z))
	var bottom:float=high-pose.origin.y+.008
	if high-low>.025 or absf(bottom)>.35:diagnostics.ground_support_missing=true;return {}
	if not clear(city,house,polygon,high,diagnostics):return {}
	if Surfaces.blocked(occupied,local.grow(.015),bottom+.003,bottom+HEIGHT):diagnostics.frontage_obstructed=true;return {}
	return {"pose":pose*Transform3D(Basis.IDENTITY,Vector3(x,bottom,depth)),"footprint":polygon,"low":low,"high":high,"samples":25,"side":x}
