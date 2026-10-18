extends RefCounted
## A fresh town with real authored houses/cafe/districts and no earned services.
const State=preload("res://scripts/world/city_creation_state.gd")
static func build(count: int=14)->RefCounted:
	var city:=State.new();city.initialize()
	for z in [-24.,-20.,-16.]:
		for x in [-32.,-28.,-24.,-20.]:
			if city.houses.size()>=count: break
			assert(city.add_house(Vector2(x,z)).ok)
	assert(city.houses.size()==count)
	assert(city.set_house_role("h4","garden_cafe").ok)
	var first: Array[Vector2]=[Vector2(-8,-6)]
	var second: Array[Vector2]=[Vector2(-7,6)]
	var a: Dictionary=city.add_district(first,3.6,"warm")
	var b: Dictionary=city.add_district(second,3.6,"deep")
	assert(a.ok and b.ok and city.link_districts(a.district_id,b.district_id).ok)
	return city
