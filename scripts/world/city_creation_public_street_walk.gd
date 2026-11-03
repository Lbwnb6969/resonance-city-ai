extends RefCounted
const Corridor=preload("res://scripts/world/city_creation_entry_corridor.gd")
const Obstacles=preload("res://scripts/world/city_creation_public_space_obstacles.gd")
static func obstacles(city:RefCounted)->Array:
	var result:Array=Obstacles.collect(city).filter(func(o):return o.attachment or city._house_index(o.owner)<0)
	for house:Dictionary in city.houses:
		var passages:Array=city.house_passages(house.id)
		for cell:Dictionary in house.cells:
			if cell.level!=0:continue
			var cuts:Array=passages.filter(func(p):return p.cell_id==cell.id)
			if cuts.is_empty():result.append({"owner":house.id,"shape":Corridor.Frame.footprint(house,cell)});continue
			for piece:Rect2 in preload("res://scripts/visual/city_creation_architecture.gd").floor_pieces(cuts):
				var center:Vector2=Corridor.Frame.origin(house)+Vector2(cell.x,cell.z)*1.8+piece.get_center()
				result.append({"owner":house.id,"shape":{"center":Corridor.Frame.point(house,center),"half":piece.size*.5,"angle":Corridor.Frame.yaw(house)}})
	return result
static func surface(city:RefCounted,at:Vector2)->Dictionary:
	var nearest:=INF;var selected:Dictionary={}
	for road:Dictionary in city.roads:
		var gap:float=city._water_stroke_distance(at,road.points)
		if gap<=float(road.width)*.5+.002 and gap<nearest:nearest=gap;selected=road
	if selected.is_empty():return {"y":city.ground_height(at),"kind":"road_gap"}
	var deck:Dictionary=city._road_heights.surface_at(at)
	if deck.is_empty() or not deck.get("supported",true):return {"y":city.ground_height(at),"kind":"road_gap"}
	return {"y":deck.get("top_y",city.street_height(at)),"kind":deck.kind,"road_id":deck.road_id}
static func assess(city:RefCounted,points:PackedVector2Array,obstacles:Array)->Dictionary:
	var result:={"ok":false,"path":points,"half_width":.35,"samples":0,"max_rise":0.,"max_grade":0.,"polygons":[],"turn_samples":0,"road_ids":[],"clearance_source_ids":[]}
	var sample:=func(at:Vector2)->Dictionary:
		var row:=surface(city,at)
		if row.has("road_id") and not result.road_ids.has(row.road_id):result.road_ids.append(row.road_id)
		return row
	for i in range(1,points.size()):
		var a:=points[i-1];var b:=points[i];var direction:Vector2=(b-a).normalized();var tangent:=Vector2(-direction.y,direction.x)
		for house:Dictionary in city.houses:
			for passage:Dictionary in city.house_passages(house.id):
				var cell:Dictionary=house.cells.filter(func(c):return c.id==passage.cell_id)[0]
				if not Corridor.Frame.segment(Corridor.Frame.footprint(house,cell),a,b):continue
				for id:String in [str(house.id),str(cell.id)]:
					if not result.clearance_source_ids.has(id):result.clearance_source_ids.append(id)
		var shape:={"polygon":PackedVector2Array([a-tangent*.35,a+tangent*.35,b+tangent*.35,b-tangent*.35])};result.polygons.append(shape.polygon)
		for obstacle:Dictionary in obstacles:
			if Corridor.Frame.boxes_overlap(shape,obstacle.shape):result.reason="solid_obstruction";result.blocker_id=obstacle.owner;return Corridor.diagnostic(result)
		if not Corridor.leg(city,a,b,tangent,city.roads[0],sample,result):return Corridor.diagnostic(result)
	for at:Vector2 in points:
		for obstacle:Dictionary in obstacles:
			if Corridor.Frame.distance(obstacle.shape,at)<.35:result.reason="solid_obstruction";result.blocker_id=obstacle.owner;return Corridor.diagnostic(result)
		if not Corridor.corner(city,at,sample,result):return Corridor.diagnostic(result)
		result.turn_samples+=result.corner_samples
	result.road_ids.sort();result.clearance_source_ids.sort();result.ok=true;result.reason="supported";return Corridor.diagnostic(result)
