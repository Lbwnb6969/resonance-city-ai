extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
static func build(count:int=225, four_eras:bool=false)->RefCounted:
	var city:RefCounted
	if four_eras:city=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
	else:city=State.new();city.initialize()
	var last_z:=-36.
	for z in range(-36,37,4):
		if city.houses.size()>=count:break
		var points:Array[Vector2]=[Vector2(-38,z+1.52),Vector2(38,z+1.52)]
		city.add_road(points,"cobble")
		last_z=z+1.52
		for x in range(-36,37,4):
			if city.houses.size()>=count:break
			city.add_house(Vector2(x,z))
	var spine:Array[Vector2]=[Vector2(-38,-34.48),Vector2(-38,last_z)]
	city.add_road(spine,"cobble")
	# Connect the authored original service street into the large town graph.
	var service:Array[Vector2]=[Vector2(-38,0),Vector2(-16,0)];city.add_road(service,"cobble")
	if four_eras:
		city.set_house_role("h2","bakery");city.set_house_role("h3","venue")
		for i in range(4):
			var points:Array[Vector2]=[Vector2(-29.+i*20.,-36),Vector2(-29.+i*20.,36)]
			var district:Dictionary=city.add_district(points,10.,"warm")
			city.set_district_era(district.district_id,["pastoral","renaissance","clockwork","modern_eco"][i])
		for i in range(0,city.houses.size(),15):
			city.add_cell(str(city.houses[i].id),0,0,1)
	return city
