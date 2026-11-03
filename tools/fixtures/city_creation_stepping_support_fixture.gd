extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
static func build()->RefCounted:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","townhouse")
	assert(city.add_water([Vector2(3,-11.5),Vector2(-10,-11.5)] as Array[Vector2],1.2,"channel").ok)
	assert(city.add_house(Vector2(-8,-14)).ok)
	assert(city.add_road([Vector2(-8,-12.8),Vector2(-8,-8)] as Array[Vector2],"path","none").ok)
	return city
