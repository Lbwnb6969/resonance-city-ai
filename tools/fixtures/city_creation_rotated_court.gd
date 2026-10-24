extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
static func build()->Dictionary:
	var city:=State.new();city.initialize_empty();var id:String=city.add_house(Vector2(-25,-6)).house_id
	for cell:Vector2i in [Vector2i(1,0),Vector2i(2,0),Vector2i(3,0),Vector2i(3,1),Vector2i(3,2),Vector2i(3,3),Vector2i(2,3),Vector2i(1,3),Vector2i(0,3),Vector2i(0,2),Vector2i(0,1)]:assert(city.add_cell(id,cell.x,cell.y,0).ok)
	assert(city.add_cell(id,0,0,1).ok)
	assert(city.set_house_role(id,"garden_cafe").ok)
	assert(city.rotate_house(id,.43).ok)
	var entry:Dictionary=city.house_entrances(id).filter(func(e):return e.cell_x==1 and e.cell_z==3 and e.side==Vector2i.DOWN)[0]
	var normal:Vector2=State.Rotation.Frame.normal(entry)
	assert(city.add_road([Vector2(entry.wall_at)+normal*.10,Vector2(entry.wall_at)+normal*7.] as Array[Vector2]).ok)
	return {"city":city,"id":id}
