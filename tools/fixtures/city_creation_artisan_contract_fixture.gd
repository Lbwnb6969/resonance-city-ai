extends RefCounted
const Base=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const ORIGIN=Base.ORIGIN
static func build(kind:String="workshop",yaw:float=0.,road:bool=true)->Dictionary:
	var city:=Base.State.new();city.initialize_free()
	var prototype:String="clock_turret" if kind=="clock" else "townhouse" if kind=="label" else "sawtooth_atrium"
	var ok:bool=Base.Brush.select(city,"pastoral" if kind=="label" else "clockwork",prototype)
	ok=city.add_house_stroke(ORIGIN,[{"x":0,"z":0,"level":0,"kind":"room"}]).ok and ok
	ok=city.rotate_house("h1",yaw).ok and ok
	if kind=="label":ok=city.set_house_role("h1","workshop").ok and ok
	if kind=="wall":
		Base.Brush.select(city,"pastoral","townhouse")
		ok=city.add_house(ORIGIN+Vector2(0,3.5).rotated(-yaw)).ok and ok
		ok=city.rotate_house("h2",yaw).ok and ok
	if kind=="water":ok=city.add_water([ORIGIN+Vector2(0,3.5).rotated(-yaw)] as Array[Vector2],2.,"pond").ok and ok
	if road and kind!="water":
		ok=city.add_road([ORIGIN+Vector2(-3,1.9).rotated(-yaw),ORIGIN+Vector2(3,1.9).rotated(-yaw)] as Array[Vector2],"path","none").ok and ok
	return {"city":city,"ok":ok}
