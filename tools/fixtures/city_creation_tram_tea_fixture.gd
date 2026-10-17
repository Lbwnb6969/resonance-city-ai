extends RefCounted
const Clockwork=preload("res://tests/test_city_creation_clockwork.gd")
static func city()->RefCounted:
	var result:RefCounted=Clockwork.fixture()
	var ids:Array[String]=[]
	for house:Dictionary in result.houses:
		if house.id not in ["h1","h2","h3","h4"]:ids.append(house.id)
	for id:String in ids:result.remove_house(id)
	result.set_house_role("h2","bakery");result.set_house_role("h3","garden_cafe");result.set_house_role("h4","residential")
	var points:Array[Vector2]=[Vector2(-16,0),Vector2(-1,0)];result.add_road(points,"tram")
	for id:String in ["h1","h2","h3","h4"]:result.set_house_era(id,"clockwork")
	return result
