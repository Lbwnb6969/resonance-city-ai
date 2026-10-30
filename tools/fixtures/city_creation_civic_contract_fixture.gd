extends RefCounted
const Base=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const ORIGIN=Base.ORIGIN
static func build(kind:String="ionic_stoa",yaw:float=0.,road:bool=true)->Dictionary:
	var city:=Base.State.new();city.initialize_free();var ok:=true
	var prototype:String=kind if kind in ["ionic_stoa","roman_basilica","rotunda"] else "townhouse" if kind in ["label","high","guildhall"] else "ionic_stoa"
	if kind in ["high","plateau"]:ok=city.add_terrain_stroke([ORIGIN+Vector2(1.8,1.5).rotated(-yaw)] as Array[Vector2],"plateau",6.,1.,2).ok and ok
	ok=Base.Brush.select(city,"renaissance" if kind=="guildhall" else "pastoral",prototype) and ok
	var cells:Array=[]
	for x in range(1 if kind=="rotunda" else 2 if kind=="columns" else 3):cells.append({"x":x,"z":0,"level":0,"kind":"room"})
	ok=city.add_house_stroke(ORIGIN,cells).ok and ok;ok=city.rotate_house("h1",yaw).ok and ok
	if kind=="guildhall":ok=city.set_house_role("h1","venue").ok and city.set_house_architecture("h1","guildhall").ok and ok
	if kind=="label":ok=city.set_house_role("h1","venue").ok and ok
	if kind=="wall":
		Base.Brush.select(city,"pastoral","townhouse")
		ok=city.add_house_stroke(ORIGIN+Vector2(0,4.3).rotated(-yaw),cells).ok and ok;ok=city.rotate_house("h2",yaw).ok and ok
	if kind=="water":ok=city.add_water([ORIGIN+Vector2(-2,4.3).rotated(-yaw),ORIGIN+Vector2(6,4.3).rotated(-yaw)] as Array[Vector2],2.,"pond").ok and ok
	if road:
		ok=city.add_road([ORIGIN+Vector2(-3,1.9).rotated(-yaw),ORIGIN+Vector2(7,1.9).rotated(-yaw)] as Array[Vector2],"path","none").ok and ok
	return {"city":city,"ok":ok}
