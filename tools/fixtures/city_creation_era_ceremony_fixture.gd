extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
static func fill(city:RefCounted,count:int)->void:
	for z in range(-32,-11,4):
		for x in range(-34,-13,4):
			if city.houses.size()>=count:return
			city.add_house(Vector2(x,z))
static func before(era:String)->RefCounted:
	if era=="modern_eco":
		var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").city()
		city.link_districts(str(city.districts[0].id),str(city.districts[1].id));city.link_districts(str(city.districts[1].id),str(city.districts[2].id));return city
	if era=="clockwork":
		var city:RefCounted=preload("res://tests/test_city_creation_eras.gd").fixture();fill(city,28)
		city.add_district([Vector2(-14,-2)] as Array[Vector2],3.6,"warm");city.add_district([Vector2(-10,-2)] as Array[Vector2],3.6,"deep");return city
	var city:=State.new();city.initialize();city.set_house_role("h4","garden_cafe");fill(city,14)
	var first:Dictionary=city.add_district([Vector2(-8,-6)] as Array[Vector2],4.4,"warm")
	var second:Dictionary=city.add_district([Vector2(-2.4,1)] as Array[Vector2],4.4,"deep")
	city.link_districts(str(first.district_id),str(second.district_id));return city
