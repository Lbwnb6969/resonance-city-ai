extends RefCounted
## Legacy-earned era rights; construction uses the normal authoring APIs.
const Legacy=preload("res://tests/test_city_creation_eras.gd")
static func build()->Dictionary:
	var city: RefCounted=Legacy.fixture()
	assert(city.set_house_role("h2","residential").ok)
	var east: Dictionary=city.add_house(Vector2(10,-5))
	assert(east.ok)
	var atelier: String=east.house_id
	assert(city.set_house_role(atelier,"atelier").ok)
	for cell: Vector2i in [Vector2i(1,0),Vector2i(0,1),Vector2i(1,1)]: assert(city.add_cell(atelier,cell.x,cell.y,0).ok)
	for cell: Vector2i in [Vector2i.ZERO,Vector2i(1,0),Vector2i(0,1),Vector2i(1,1)]: assert(city.add_cell(atelier,cell.x,cell.y,1).ok)
	assert(city.add_house(Vector2(16,-5)).ok)
	var points: Array[Vector2]=[Vector2(-14,-2),Vector2(-2,-2)]
	var west: Dictionary=city.add_district(points,5.6,"warm")
	points=[Vector2(10,-5),Vector2(16,-5)]
	var zone: Dictionary=city.add_district(points,6.,"warm")
	assert(west.ok and zone.ok and city.set_district_era(zone.district_id,"renaissance").ok)
	assert(city.set_district_name(west.district_id,"西岸木石老城").ok)
	assert(city.set_district_name(zone.district_id,"东岸人文书院").ok)
	assert(city.set_house_name(atelier,"河湾穹顶书院").ok)
	assert(city.link_districts(west.district_id,zone.district_id).ok)
	points=[Vector2(-16,0),Vector2(18,0)]
	var bridge: Dictionary=city.add_road(points,"promenade")
	assert(bridge.ok,JSON.stringify(bridge))
	points=[Vector2(10,0),Vector2(10,-1.65)]
	assert(city.add_road(points,"path").ok)
	points=[Vector2(16,0),Vector2(16,-3.45)]
	assert(city.add_road(points,"path").ok)
	return {"city":city,"atelier":atelier,"west":west.district_id,"east":zone.district_id}
