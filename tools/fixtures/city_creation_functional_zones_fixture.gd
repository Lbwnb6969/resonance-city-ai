extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
static func build()->Dictionary:
	var city:=State.new();city.initialize_free();var results:Array=[]
	for row:Array in [["pastoral","townhouse",-30.],["pastoral","townhouse",-26.],["clockwork","sawtooth_atrium",-22.],["pastoral","ionic_stoa",-18.],["renaissance","venetian_loggia",-14.]]:
		results.append(Brush.select(city,row[0],row[1]));results.append(city.add_house(Vector2(row[2],-20)).ok)
	results.append(city.add_road([Vector2(-32,-18.1),Vector2(-11,-18.1)] as Array[Vector2],"path","none").ok)
	# Same road component, but physically separated courtyard membership.
	Brush.select(city,"pastoral","townhouse");results.append(city.add_house(Vector2(-30,-4)).ok)
	results.append(city.add_road([Vector2(-30,-18.1),Vector2(-30,-1.5)] as Array[Vector2],"path","none").ok)
	results.append(city.add_water([Vector2(-14,-25)] as Array[Vector2],2.,"pond").ok)
	return {"city":city,"ok":not results.has(false),"road":"r1"}
