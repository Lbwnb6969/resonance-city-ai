extends RefCounted
## Floating scenery follows actual wet ground and the published street generation.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Street=preload("res://scripts/world/city_creation_street_wonder_plan.gd")
const Terrain=preload("res://scripts/world/city_creation_terrain.gd")
const RADIUS:=.30
const INSET:=.44
static func derive(city:RefCounted)->Array[Dictionary]:
	var rows:Array[Dictionary]=[]
	if not city.CreationPolicy.is_free(city) or not city.creative_settings.presentation.automatic_decoration:return rows
	var zones:Dictionary=city.functional_zones()
	if not zones.network_ready:return rows
	var piers:Array=Street.derive(city).piers;var houses:Array=city.houses.duplicate()
	houses.sort_custom(func(a,b):return str(a.id)<str(b.id))
	for house:Dictionary in houses:
		var zone:Dictionary=zones.houses[house.id]
		if house.has("signature") or not zone.connected or zone.water_distance>5.2:continue
		var candidates:Array[Dictionary]=[]
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0 or cell.kind!="room":continue
			var from:=Frame.center(house,cell);var bank:float=city.river_x(from.y);var side:=signf(from.x-bank)
			candidates.append({"at":Vector2(bank+side*(city.RIVER_HALF_WIDTH-INSET),from.y),"water_id":"river","cell_id":str(cell.id)})
			for water:Dictionary in city.waters:
				var radius:float=float(water.width)*.5
				if radius<INSET:continue
				for i in range(maxi(1,water.points.size()-1)):
					var j:=mini(i+1,water.points.size()-1);var a:=Vector2(water.points[i][0],water.points[i][1]);var b:=Vector2(water.points[j][0],water.points[j][1])
					var near:=Geometry2D.get_closest_point_to_segment(from,a,b)
					candidates.append({"at":near+(from-near).normalized()*(radius-INSET),"water_id":str(water.id),"cell_id":str(cell.id)})
		for row:Dictionary in candidates:
			row.house_id=str(house.id);row.y=Terrain.WATER_LEVEL+.01
			row.distance=Frame.distance(Frame.footprint(house,house.cells.filter(func(c):return str(c.id)==row.cell_id)[0]),row.at)
		candidates.sort_custom(func(a,b):return str(a.water_id)<str(b.water_id) if is_equal_approx(a.distance,b.distance) else a.distance<b.distance)
		for row:Dictionary in candidates:
			if row.distance>5.2+INSET or not clear(city,row.at,rows,piers):continue
			rows.append(row);break
	return rows
static func clear(city:RefCounted,at:Vector2,accepted:Array=[],piers:Array=[])->bool:
	if not city.WORLD_RECT.grow(-RADIUS).has_point(at) or city.water_clearance(at)>-INSET+.001:return false
	for offset:Vector2 in [Vector2.ZERO,Vector2(RADIUS,0),Vector2(-RADIUS,0),Vector2(0,RADIUS),Vector2(0,-RADIUS)]:
		if city.ground_height(at+offset)>Terrain.WATER_LEVEL+.005:return false
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:
			if Frame.distance(Frame.footprint(house,cell),at)<RADIUS+.1:return false
		for door:Dictionary in city.house_entrances(str(house.id)):
			if at.distance_to(Geometry2D.get_closest_point_to_segment(at,door.wall_at,door.at))<RADIUS+.4:return false
	for road:Dictionary in city.roads:
		if city._water_stroke_distance(at,road.points)<float(road.width)*.5+RADIUS+.15:return false
	for pier:Dictionary in piers:
		if at.distance_to(Geometry2D.get_closest_point_to_segment(at,pier.start,pier.end))<RADIUS+.52:return false
	for item:Dictionary in city.placed_landmarks:
		if Frame.distance(city.PlacedLandmarks.footprint(item),at)<RADIUS+.1:return false
	for plant:Dictionary in city.plants:
		if plant.kind in ["olive","cypress"] and at.distance_to(Vector2(plant.position[0],plant.position[1]))<RADIUS+.7 and city.vegetation_visible(plant):return false
	for other:Dictionary in accepted:
		if at.distance_to(Vector2(other.at))<RADIUS*2.+.25:return false
	return true
