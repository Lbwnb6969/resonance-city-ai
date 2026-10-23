extends RefCounted
const State = preload("res://scripts/world/city_creation_state.gd")
static func city() -> RefCounted:
	var result: RefCounted = preload("res://tests/test_city_creation_eras.gd").fixture()
	var ids: Array[String] = []
	for at: Vector2 in [Vector2(-24,-14),Vector2(-17,-14),Vector2(-10,-14),Vector2(-24,-23),Vector2(-17,-23),Vector2(-10,-23)]:
		ids.append(result.add_house(at).house_id)
	for id: String in [ids[1],ids[4]]:
		result.add_cell(id,1,0,0); result.add_cell(id,2,0,0)
	for id: String in [ids[2],ids[5]]:
		for x in range(2):
			if x>0: result.add_cell(id,x,0,0)
			for level in range(1,4): result.add_cell(id,x,0,level)
	var main: Array[Vector2] = [Vector2(-29,-11.5),Vector2(-5,-11.5)]
	assert(result.add_road(main,"cobble").ok)
	main = [Vector2(-29,-20.5),Vector2(-5,-20.5)]; assert(result.add_road(main,"cobble").ok)
	main = [Vector2(-11.7,-27),Vector2(-11.7,-9)]; assert(result.add_road(main,"cobble").ok)
	# Use earned era rights from the validated historical Schema13 city.
	result.refresh_growth()
	for id: String in [ids[3],ids[4],ids[5]]: result.set_house_era(id,"renaissance")
	return result
