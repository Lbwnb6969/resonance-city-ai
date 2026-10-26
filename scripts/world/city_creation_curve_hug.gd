extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Hinge=preload("res://scripts/world/city_creation_house_hinge.gd")
static func nearest(road:Dictionary,at:Vector2)->Dictionary:
	var best:=INF;var result:Dictionary={}
	for i in range(1,road.points.size()):
		var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1]);var length:=a.distance_to(b)
		if length<.01:continue
		var p:=Geometry2D.get_closest_point_to_segment(at,a,b);var distance:=p.distance_to(at)
		if distance<best:best=distance;result={"tangent":(b-a)/length,"edge_distance":distance-float(road.width)*.5,"segment":i-1,"at":p}
	return result
static func sample(city,house:Dictionary)->Dictionary:
	var plan:=Hinge.layout(house)
	if plan.is_empty():return {}
	var axis:Vector2=plan.axis;var low:=INF;var high:=-INF;var first:=Vector2.ZERO;var last:=Vector2.ZERO
	for cell:Dictionary in house.cells:
		var x:=Vector2(cell.x,cell.z).dot(axis)*1.8
		if x<low:low=x;first=Frame.center(house,cell)
		if x>high:high=x;last=Frame.center(house,cell)
	var world_axis:=axis.rotated(-Frame.yaw(house));var best:=INF;var result:Dictionary={}
	for road:Dictionary in city.roads:
		if road.points.size()<4:continue
		var a:=nearest(road,first);var b:=nearest(road,last)
		if a.is_empty() or b.is_empty() or maxf(float(a.edge_distance),float(b.edge_distance))>4.5:continue
		var ta:Vector2=a.tangent;var tb:Vector2=b.tangent
		if ta.dot(world_axis)<0.:ta=-ta
		if tb.dot(world_axis)<0.:tb=-tb
		if minf(ta.dot(world_axis),tb.dot(world_axis))<.65:continue
		var angle:float=-rad_to_deg(ta.angle_to(tb));var distance:float=maxf(float(a.edge_distance),float(b.edge_distance))
		if absf(angle)<8. or absf(angle)>30. or distance>=best:continue
		best=distance;result={"angle":clampf(angle,-Hinge.LIMIT,Hinge.LIMIT),"road_id":str(road.id),"first":a,"last":b}
	return result
static func after_placement(city,before:Dictionary,label:String)->void:
	if label not in ["新建房屋","扩展房屋","连续新建房屋","连续扩展房屋"]:return
	var prior:Dictionary={}
	for house:Dictionary in before.houses:prior[str(house.id)]=house.cells
	for i in range(city.houses.size()):
		var house:Dictionary=city.houses[i]
		if house.has("bend_angle_deg") or house.get("organic_manual",false) or house.cells==prior.get(str(house.id),[]):continue
		city.houses[i]=candidate(city,house)
static func candidate(city,house:Dictionary)->Dictionary:
	if house.has("bend_angle_deg") or house.get("organic_manual",false) or Hinge.layout(house).is_empty() or not preload("res://scripts/world/city_creation_organic_form.gd").supported(city,house):return house
	var hug:=sample(city,house)
	if hug.is_empty():return house
	var result:=house.duplicate(true);result.bend_angle_deg=hug.angle;result.bend_axis=Hinge.axis_id(house);result.corner_bevel=2
	return house if city._house_overlaps(result,str(house.id)) or not city._validate_house_site(result).ok else result
