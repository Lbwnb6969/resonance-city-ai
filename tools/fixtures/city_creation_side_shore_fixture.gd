extends RefCounted
const Base=preload("res://tools/fixtures/city_creation_waterfront_contract_fixture.gd")
static func point(at:Vector2,yaw:float)->Vector2:return Base.ORIGIN+at.rotated(-yaw)
static func stroke(raw:Array,yaw:float)->Array[Vector2]:
	var points:Array[Vector2]=[]
	for at:Vector2 in raw:points.append(point(at,yaw))
	return points
static func build(kind:String="wrap",yaw:float=0.)->Dictionary:
	var f:=Base.build("back",yaw);var city:RefCounted=f.city;var ok:bool=f.ok
	if kind=="gap":
		ok=city.add_water(stroke([Vector2(9,-.6)],yaw),1.2,"pond").ok and ok
		ok=city.add_water(stroke([Vector2(9,-.6),Vector2(5.7,-.6)],yaw),1.2,"channel").ok and ok
	if kind=="arch_wrap":
		Base.Base.Brush.select(city,"pastoral","townhouse")
		ok=city.add_house(point(Vector2(6.5,-.6),yaw)).ok and ok
		ok=city.rotate_house("h2",yaw).ok and ok
	if kind=="disconnected":
		ok=city.add_road(stroke([Vector2(-2,-2.2),Vector2(4,-2.2)],yaw),"path","none").ok and ok
	else:
		ok=city.add_road(stroke([Vector2(6,1.9),Vector2(6.5,1.9),Vector2(6.5,-2.2),Vector2(-2,-2.2)],yaw),"path","none").ok and ok
	return {"city":city,"ok":ok}
