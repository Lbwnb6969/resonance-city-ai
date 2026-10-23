extends RefCounted
const Modern = preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const Alpine = preload("res://scripts/world/city_creation_alpine_plan.gd")
const Eco = preload("res://scripts/visual/city_creation_modern_archetypes.gd")
static func build() -> Dictionary:
	var city: RefCounted = Modern.earned_city()
	for old: Dictionary in city.houses.duplicate(true): assert(city.remove_house(str(old.id)).ok)
	var flat: Array[String]=[]; var raised: Array[String]=[]; var kinds: Dictionary={}; var gardens: Dictionary={}
	for index in range(6):
		var built: Dictionary=city.add_house(Vector2(-29+index%3*7,-20+index/3*10)); assert(built.ok,str(built))
		city.set_house_era(built.house_id,"modern_eco"); flat.append(built.house_id)
		var house: Dictionary=city.houses[-1]; kinds[Alpine.kind_for(house)]=house.id
	assert(kinds.has(0) and kinds.has(1),str(kinds))
	var chalet: String=kinds[0]
	assert(city.add_cell(chalet,1,0,0).ok); assert(city.add_cell(chalet,2,0,0).ok)
	for index in range(12):
		var at:=Vector2(10+index%4*5,-20+index/4*5)
		var points: Array[Vector2]=[at]
		assert(city.add_terrain_stroke(points,"plateau",3.6,.6,2).ok)
		var built: Dictionary=city.add_house(at); assert(built.ok,str(built))
		assert(city.set_house_era(built.house_id,"modern_eco").ok); raised.append(built.house_id)
		var house: Dictionary=city.houses[-1]; assert(float(house.base_y)>=.6)
		gardens[Eco.roof_kind(house,house.cells[0])]=house.id
		if gardens.size()==4: break
	assert(gardens.size()==4,str(gardens))
	var points: Array[Vector2]=[Vector2(15,-26),Vector2(15,-21.3)]
	var stairs: Dictionary=city.add_road(points,"cobble"); assert(stairs.ok,str(stairs))
	points=[Vector2(-34,-17.5),Vector2(-8,-17.5)]; assert(city.add_road(points,"cobble").ok)
	return {"city":city,"flat":flat,"raised":raised,"kinds":kinds,"gardens":gardens,"chalet":chalet,"stairs":stairs.road_id}
