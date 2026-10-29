extends RefCounted
const Base=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const ORIGIN=Base.ORIGIN
static func build(kind:String="mismatch",yaw:float=0.)->Dictionary:
	var city:=Base.State.new();city.initialize_free();Base.Brush.select(city,"pastoral","townhouse");var ok:=true
	if kind=="high":ok=city.add_terrain_stroke([ORIGIN+Vector2(.9,2.2).rotated(-yaw)] as Array[Vector2],"plateau",6.,1.,2).ok and ok
	var cells:Array=[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"}]
	ok=city.add_house_stroke(ORIGIN,cells).ok and ok;ok=city.rotate_house("h1",yaw).ok and ok
	var upper:=ORIGIN+Vector2(1.8,4.4).rotated(-yaw)
	if kind=="mismatch":ok=city.add_terrain_stroke([upper] as Array[Vector2],"raise",3.,1.,2).ok and ok
	ok=city.add_house_stroke(upper,cells).ok and ok;ok=city.rotate_house("h2",yaw+PI).ok and ok
	var points:Array[Vector2]=[]
	for at:Vector2 in [Vector2(-2.,2.2),Vector2(4.,2.2)]:points.append(ORIGIN+at.rotated(-yaw))
	ok=city.add_road(points,"path","none").ok and ok
	return {"city":city,"ok":ok}
