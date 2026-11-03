extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
static func build(era:String="renaissance",yaw:float=0.,chosen:bool=true,floors:int=2,terrace:bool=false)->Dictionary:
	var city:=State.new();city.initialize_free();var ok:=Brush.select(city,era,"recessed_townhouse" if chosen else "townhouse")
	var cells:Array=[]
	for level in range(floors):cells.append({"x":0,"z":0,"level":level,"kind":"room"})
	if terrace:cells.append({"x":0,"z":1,"level":1,"kind":"terrace"})
	ok=city.add_house_stroke(Vector2(-28,-20),cells).ok and ok
	ok=city.rotate_house("h1",yaw).ok and ok
	return {"city":city,"ok":ok}
