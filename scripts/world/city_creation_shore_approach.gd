extends RefCounted
const Corridor=preload("res://scripts/world/city_creation_entry_corridor.gd")
const Obstacles=preload("res://scripts/world/city_creation_public_space_obstacles.gd")
static func surface(city:RefCounted,road:Dictionary,at:Vector2)->Dictionary:
	var result:={"y":city.ground_height(at),"kind":"ground"}
	if city._water_stroke_distance(at,road.points)>float(road.width)*.5+.002:return result
	var deck:Dictionary=city._road_heights.surface_at(at)
	if deck.is_empty():return result
	if not deck.get("supported",true):
		if city.water_clearance(at)<.05:return {"y":deck.y,"kind":"road_gap"}
		return result
	var y:float=deck.get("top_y",city.street_height(at))
	return {"y":y,"kind":deck.kind} if y>=float(result.y) else result
static func assess(city:RefCounted,street:Vector2,bank:Vector2,road:Dictionary)->Dictionary:
	var direction:Vector2=(bank-street).normalized();var end:Vector2=bank-direction*.65
	if (end-street).dot(direction)<=0.:end=street
	var tangent:=Vector2(-direction.y,direction.x)
	var result:={"ok":false,"street_at":street,"bank_at":bank,"standing_at":end,"half_width":Corridor.HALF_WIDTH,"samples":0,"max_rise":0.,"max_grade":0.}
	var shape:={"polygon":PackedVector2Array([street-tangent*.35,street+tangent*.35,end+tangent*.35,end-tangent*.35])}
	result.polygon=shape.polygon
	for obstacle:Dictionary in Obstacles.collect(city):
		if Corridor.Frame.boxes_overlap(shape,obstacle.shape) or Corridor.Frame.distance(obstacle.shape,end)<.35:
			result.reason="solid_obstruction";result.blocker_id=obstacle.owner;return Corridor.diagnostic(result)
	var sample:=func(at:Vector2)->Dictionary:return surface(city,road,at)
	if not Corridor.leg(city,street,end,tangent,road,sample,result):return Corridor.diagnostic(result)
	if not Corridor.corner(city,end,sample,result):return Corridor.diagnostic(result)
	result.ok=true;result.reason="supported"
	return Corridor.diagnostic(result)
