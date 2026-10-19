extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
static func build()->Dictionary:
	var city:=State.new();var points:Array[Vector2]=[Vector2(-20,12)]
	assert(city.add_terrain_stroke(points,"plateau",6.,1.,2).ok)
	var homes:Array[String]=[]
	for at:Vector2 in [Vector2(-20,-16),Vector2(18,-16),Vector2(-20,12),Vector2(18,12)]:
		var house:Dictionary=city.add_house(at);assert(house.ok);homes.append(str(house.house_id))
	var shop:Dictionary=city.add_house(Vector2(-24,-16));assert(shop.ok);assert(city.set_house_role(str(shop.house_id),"workshop").ok)
	points=[Vector2(22,12)];assert(city.add_water(points,2.4,"pond").ok)
	points=[Vector2(-28,-14),Vector2(24,-14)];assert(city.add_road(points).ok)
	points=[Vector2(-22.5,-14),Vector2(-22.5,14),Vector2(-20,14)];var high:Dictionary=city.add_road(points);assert(high.ok)
	points=[Vector2(15.5,-14),Vector2(15.5,14),Vector2(18,14)];assert(city.add_road(points).ok)
	var districts:Array[String]=[];var styles:=State.DISTRICT_STYLES
	for i in range(homes.size()):
		var house:Dictionary=city.houses[city._house_index(homes[i])]
		points=[Vector2(house.origin[0],house.origin[1])]
		var district:Dictionary=city.add_district(points,5.,styles[i]);assert(district.ok);districts.append(str(district.district_id))
	return {"city":city,"homes":homes,"districts":districts,"shop":str(shop.house_id),"high_road":str(high.road_id)}
