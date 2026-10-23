extends RefCounted
const State = preload("res://scripts/world/city_creation_state.gd")
const Canon = preload("res://tools/fixtures/city_creation_canon_fixture.gd")
static func build() -> Dictionary:
	var city: RefCounted = preload("res://tests/test_city_creation_eras.gd").fixture()
	var court: Array[String] = []
	for row: Array in [[Vector2(-2.7,-2.7),Canon._row(2)],[Vector2(.9,-2.7),Canon._row(2)],[Vector2(-2.7,2.7),Canon._row(4)],[Vector2(-2.7,-.9),Canon._row(2,true)],[Vector2(2.7,-.9),Canon._row(2,true)]]:
		var built: Dictionary = city.add_house_stroke(Canon.COURT+row[0],row[1]); assert(built.ok,str(built))
		var id: String = built.house_id; court.append(id)
		var house: Dictionary = city.houses[-1]
		for cell: Dictionary in house.cells.duplicate(true): assert(city.add_cell(id,cell.x,cell.z,1).ok)
		if court.size()%2==0: city.set_house_era(id,"renaissance")
	var approach: Array[Vector2] = [Vector2(-25.9,-13),Vector2(-25.9,-22.3)]
	assert(city.add_road(approach,"cobble").ok)
	var halls: Array[String] = []
	for row: Array in [[Vector2(-26,-8),"venue",1],[Vector2(-19,-8),"bakery",3],[Vector2(-10,-8),"garden_cafe",3]]:
		var built: Dictionary = city.add_house_stroke(row[0],Canon._row(row[2])); assert(built.ok,str(built)); halls.append(built.house_id)
		assert(city.set_house_role(built.house_id,row[1]).ok)
	var studios: Array[String] = []
	for row: Array in [[Vector2(-26,8),false],[Vector2(-17,8),true]]:
		var built: Dictionary = city.add_house(row[0]); assert(built.ok,str(built)); var id: String = built.house_id; studios.append(id)
		assert(city.set_house_era(id,"renaissance").ok); assert(city.set_house_role(id,"atelier").ok)
		if row[1]:
			for xz: Vector2i in [Vector2i.RIGHT,Vector2i.DOWN,Vector2i.ONE]: assert(city.add_cell(id,xz.x,xz.y,0).ok)
	return {"city":city,"court_ids":court,"hall_ids":halls,"studio_ids":studios}
