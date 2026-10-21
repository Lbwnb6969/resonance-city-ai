extends RefCounted
## These fixtures author the same rooms, water, roads and districts as players.
const State=preload("res://scripts/world/city_creation_state.gd")
const ClockworkFixture=preload("res://tests/test_city_creation_clockwork.gd")
static func pastoral()->RefCounted:
	var city:=State.new();city.initialize()
	assert(city.set_house_role("h4","garden_cafe").ok)
	var points:Array[Vector2]=[Vector2(-16,8)]
	assert(city.add_water(points,3.,"pond").ok)
	points=[Vector2(-6,-8),Vector2(-6,8),Vector2(-16,8),Vector2(-16,0)]
	assert(city.add_district(points,10.,"warm").ok)
	return city
static func renaissance()->RefCounted:
	var city:=State.new()
	assert(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://tools/fixtures/legacy_renaissance_schema13.json"))).ok)
	var shop:Dictionary=city.add_house(Vector2(-18,-2));assert(shop.ok)
	assert(city.set_house_role(str(shop.house_id),"workshop").ok)
	for id:String in ["h1","h3","h4"]:assert(city.add_cell(id,0,0,1).ok)
	var points:Array[Vector2]=[Vector2(-26,0),Vector2(-1,0)]
	assert(city.add_road(points,"promenade").ok)
	points=[Vector2(-22,-6),Vector2(-22,6)]
	assert(city.add_road(points,"promenade").ok)
	assert(city.add_roundabout(Vector2(-22,0)).ok)
	points=[Vector2(-24,0),Vector2(-2,0)]
	var district:Dictionary=city.add_district(points,8.,"market");assert(district.ok)
	assert(city.set_district_era(str(district.district_id),"renaissance").ok)
	return city
static func clockwork()->RefCounted:
	var city:RefCounted=ClockworkFixture.fixture()
	assert(city.set_house_role("h2","clockmaker").ok)
	for id:String in ["h1","h4"]:
		assert(city.set_house_era(id,"clockwork").ok)
		assert(city.add_cell(id,1,0,0).ok)
		assert(city.add_cell(id,0,0,1).ok)
		assert(city.add_cell(id,1,0,1).ok)
	var points:Array[Vector2]=[Vector2(-18,1),Vector2(-1,1)]
	assert(city.add_road(points,"tram").ok)
	points=[Vector2(-14,0),Vector2(-2,0)]
	var district:Dictionary=city.add_district(points,9.,"weave");assert(district.ok)
	assert(city.set_district_era(str(district.district_id),"clockwork").ok)
	return city
static func highland(levels:int=2)->RefCounted:
	var city:=State.new();var points:Array[Vector2]=[Vector2(-24,-2),Vector2(-20,-2),Vector2(-20,2),Vector2(-24,2)]
	assert(city.add_terrain_stroke(points,"plateau",6.,1.,levels).ok)
	for at:Vector2 in [Vector2(-24,-2),Vector2(-20,-2),Vector2(-24,2),Vector2(-20,2)]:assert(city.add_house(at).ok)
	assert(city.add_cell("h1",0,0,1).ok and city.add_cell("h1",0,0,2).ok)
	points=[Vector2(-30,0),Vector2(-16,0)];assert(city.add_district(points,10.,"deep").ok)
	assert(city.add_road(points).ok)
	return city
static func chrono()->RefCounted:
	var city:=State.new()
	assert(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://tools/fixtures/legacy_renaissance_schema13.json"))).ok)
	assert(city.set_house_role("h2","workshop").ok)
	for at:Vector2 in [Vector2(9,3),Vector2(14,3),Vector2(14,7)]:assert(city.add_house(at).ok)
	var points:Array[Vector2]=[Vector2(-14,-2),Vector2(-2,-2)]
	var west:Dictionary=city.add_district(points,5.6,"warm");assert(west.ok)
	points=[Vector2(9,3),Vector2(14,3),Vector2(14,7)]
	var east:Dictionary=city.add_district(points,5.6,"market");assert(east.ok)
	assert(city.set_district_era(str(east.district_id),"renaissance").ok)
	points=[Vector2(-16,0),Vector2(16,0)];assert(city.add_road(points,"promenade").ok)
	for x:float in [9.,14.]:
		points=[Vector2(x,0),Vector2(x,1.8)];assert(city.add_road(points,"path","none").ok)
	points=[Vector2(14,1.8),Vector2(14,8.55)];assert(city.add_road(points,"path","none").ok)
	assert(city.link_districts(str(west.district_id),str(east.district_id)).ok)
	return city
