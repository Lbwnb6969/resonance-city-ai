extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
static func city(strength:float=.8,curved:bool=false)->RefCounted:
	var result:=State.new();result.initialize_free()
	result.add_terrain_stroke([Vector2(-26,-22)] as Array[Vector2],"plateau",2.,strength)
	var points:Array[Vector2]=[Vector2(-32,-22),Vector2(-20,-22)]
	if curved:points.insert(1,Vector2(-27,-21.8))
	result.add_road(points)
	return result
