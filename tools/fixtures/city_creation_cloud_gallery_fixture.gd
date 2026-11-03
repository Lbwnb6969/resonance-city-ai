extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
static func city(gap:float=8.5,yaw:float=0.,floors:int=3)->RefCounted:
	var result:=State.new();result.initialize_free();Brush.select(result,"modern_eco","")
	var origin:=Vector2(-30,-20);var cells:Array=[]
	for level in range(floors):cells.append({"x":0,"z":0,"level":level,"kind":"room"})
	for at:Vector2 in [origin,origin+Vector2.RIGHT.rotated(-yaw)*gap]:
		result.add_house_stroke(at,cells);result.rotate_house(str(result.houses[-1].id),yaw)
	return result
