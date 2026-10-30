extends RefCounted
const Base=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const ORIGIN=Base.ORIGIN
static func build(kind:String="shore",yaw:float=0.,road:bool=true)->Dictionary:
	var city:=Base.State.new();city.initialize_free();var ok:=true
	var water_z:float=-5. if kind=="back" else 6.
	if kind!="inland":
		var points:Array[Vector2]=[]
		for x:float in [-3.,7.]:points.append(ORIGIN+Vector2(x,water_z).rotated(-yaw))
		ok=city.add_water(points,2.,"pond").ok and ok
	ok=Base.Brush.select(city,"renaissance","venetian_loggia") and ok
	var cells:Array=[]
	for x in range(3):cells.append({"x":x,"z":0,"level":0,"kind":"room"})
	ok=city.add_house_stroke(ORIGIN,cells).ok and ok;ok=city.rotate_house("h1",yaw).ok and ok
	if kind=="wall":
		Base.Brush.select(city,"pastoral","townhouse")
		ok=city.add_house_stroke(ORIGIN+Vector2(0,3.5).rotated(-yaw),[cells[0]]).ok and ok
		ok=city.rotate_house("h2",yaw).ok and ok
		ok=city.add_cells("h2",cells.slice(1)).ok and ok
	if road:
		var points:Array[Vector2]=[]
		for x:float in [-2.,6.]:points.append(ORIGIN+Vector2(x,1.9).rotated(-yaw))
		ok=city.add_road(points,"path","none").ok and ok
	return {"city":city,"ok":ok}
