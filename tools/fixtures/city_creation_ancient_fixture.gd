extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
static func build()->Dictionary:
	var city:=State.new();city.initialize_empty();var ids:Array=[]
	for at:Vector2 in [Vector2(-25,-15),Vector2(-17,-15),Vector2(-25,-5),Vector2(-15,-5)]:
		var result:Dictionary=city.add_house(at);assert(result.ok,str(result));ids.append(result.house_id)
	assert(city.add_cell(ids[0],1,0,0).ok)
	assert(city.set_house_architecture(ids[0],"portico").ok)
	for level in [1,2]:assert(city.add_cell(ids[1],0,0,level).ok)
	assert(city.set_house_architecture(ids[1],"townhouse").ok)
	assert(city.set_house_architecture(ids[2],"rotunda").ok)
	for cell:Vector2i in [Vector2i(1,0),Vector2i(2,0),Vector2i(0,1),Vector2i(2,1),Vector2i(0,2),Vector2i(1,2),Vector2i(2,2)]:assert(city.add_cell(ids[3],cell.x,cell.y,0).ok)
	assert(city.add_cell(ids[3],0,0,1).ok)
	assert(city.add_road([Vector2(-29,-12.6),Vector2(-12,-12.6)] as Array[Vector2]).ok)
	assert(city.add_road([Vector2(-28,1),Vector2(-9,1)] as Array[Vector2]).ok)
	return {"city":city,"ids":ids}

