extends RefCounted
const Clockwork=preload("res://tests/test_city_creation_clockwork.gd")
static func city(count:int=50)->RefCounted:
	var result:RefCounted=Clockwork.fixture()
	result.set_house_role("h2","residential")
	for z in range(-36,37,4):
		for x in range(-36,37,4):
			if result.houses.size()>=count:break
			result.add_house(Vector2(x,z))
	var points:Array[Vector2]=[Vector2(-6,-2)]
	var third:Dictionary=result.add_district(points,3.6,"weave")
	result.set_district_era(third.district_id,"clockwork")
	return result
static func earned_city()->RefCounted:
	var result:=city()
	var a:String=result.districts[0].id;var b:String=result.districts[1].id;var c:String=result.districts[2].id
	result.record_district_answer(a,b,"pastoral","renaissance");result.record_district_answer(b,c,"renaissance","clockwork")
	return result
static func architecture()->RefCounted:
	var result:=earned_city()
	for id:String in ["h1","h2"]:
		result.set_house_era(id,"modern_eco")
		result.add_cell(id,0,0,1);result.add_cell(id,0,0,2)
	result.set_house_era("h4","renaissance");result.set_house_era("h3","clockwork")
	return result
