extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
static func fresh(free:bool=true)->RefCounted:
	var city:=State.new()
	if free:city.initialize_free()
	else:city.initialize_empty()
	assert(city.add_water([Vector2(-22,-15)] as Array[Vector2],3.2,"pond").ok)
	assert(city.add_house(Vector2(-22,-10.9)).ok)
	assert(city.add_house(Vector2(-25.7,-15)).ok)
	var added:Dictionary=city.add_house(Vector2(-32,-32));assert(added.ok)
	var id:=str(added.house_id)
	assert(city.add_cell(id,1,0,0).ok)
	assert(city.set_house_architecture(id,"ionic_stoa").ok)
	return city
