extends RefCounted
const SCHEMA:=34
const Plan=preload("res://scripts/world/city_creation_roundabouts.gd")
static func valid(city,data:Dictionary,marker:Dictionary)->bool:
	if is_equal_approx(float(marker.radius),Plan.RADIUS):return true
	return data.schema>=SCHEMA and city.CreationPolicy.data_is_free(data) and is_equal_approx(float(marker.radius),3.8)
static func write(city,result:Dictionary)->void:
	for marker:Dictionary in Plan.all(city.roads):
		if is_equal_approx(float(marker.radius),3.8):result.schema=maxi(int(result.schema),SCHEMA);return
static func add(city,at:Vector2,radius:float=Plan.RADIUS)->Dictionary:
	if radius!=Plan.RADIUS and (radius!=3.8 or not city.CreationPolicy.is_free(city)):return city._fail("宽环岛需自由创作的3.8米半径")
	var valid:Dictionary=Plan.preview(city,at,radius)
	if not valid.ok:return valid
	var before:Dictionary=city.snapshot()
	for road:Dictionary in city.roads:
		if str(road.id)!=str(valid.owner_id):continue
		if not road.has("roundabouts"):road.roundabouts=[]
		road.roundabouts.append({"center":[valid.center.x,valid.center.y],"radius":valid.radius})
	city._commit(before,"营建宽环岛" if radius==3.8 else "营建环岛广场");return valid
