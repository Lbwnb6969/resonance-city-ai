extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
static func candidate(city,id:String,angle:float)->Dictionary:
	var index:int=city._house_index(id)
	if index<0:return {"ok":false,"message":"房屋不存在"}
	if not is_finite(angle):return {"ok":false,"message":"转向角度无效"}
	var house:Dictionary=city.houses[index].duplicate(true);var value:=wrapf(angle,-PI,PI)
	if absf(value)<.000001:house.erase("yaw")
	else:house.yaw=value
	if city._house_overlaps(house,id):return {"ok":false,"message":"转向后与其他房屋重叠"}
	var valid:Dictionary=city._validate_house_site(house)
	if not valid.ok:return valid
	return {"ok":true,"house":house,"index":index}
static func set_angle(city,id:String,angle:float)->Dictionary:
	var result:=candidate(city,id,angle)
	if not result.ok:return result
	if is_equal_approx(Frame.yaw(result.house),Frame.yaw(city.houses[result.index])):return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot();city.houses[result.index]=result.house
	city._commit(before,"旋转房屋")
	return {"ok":true,"house_id":id,"message":"房屋朝向 %d°"%roundi(rad_to_deg(Frame.yaw(result.house)))}
static func site(city,house:Dictionary,roads:Array,waters:Array)->Dictionary:
	for cell:Dictionary in house.cells:
		var box:Variant=Frame.footprint(house,cell);var poly:=Frame.corners(box);var bounds:=Frame.bounds(box)
		for at:Vector2 in poly:
			if not city.WORLD_RECT.has_point(at):return city._fail("这里超出了河湾范围")
		# Sample the river across the actual polygon, including curved bank extrema.
		for i in range(ceili(bounds.size.y/.12)+1):
			var z:=minf(bounds.end.y,bounds.position.y+i*.12);var x:float=city.river_x(z)
			if Frame.segment(box,Vector2(x-city.RIVER_HALF_WIDTH,z),Vector2(x+city.RIVER_HALF_WIDTH,z)):return city._fail("房屋不能建在河水中")
		for water:Dictionary in waters:
			if Frame.stroke_hits(house,cell,water.points,float(water.width)*.5):return city._fail("房屋不能建在水域中")
		if int(cell.level)!=0:continue
		for marker:Dictionary in city.Roundabouts.all(roads):
			if Frame.distance(box,Vector2(marker.center))<float(marker.radius)+.3:return city._fail("请给环岛广场留出空间")
		for road:Dictionary in roads:
			if city.Frontage.road_cell_conflict(house,cell,road.points,float(road.width)):return city._fail("转向后需要给道路留出空间")
	if house.get("signature","")=="floating_amphitheater" and city.AmphitheaterPlan.for_house(city,house,waters).is_empty():return city._fail("将剧场沿岸放置，让水上舞台伸入水面")
	return {"ok":true,"message":""}
