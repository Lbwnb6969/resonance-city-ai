extends RefCounted
const Modern=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const BridgePlan=preload("res://scripts/world/city_creation_bridge_plan.gd")
static func build()->Dictionary:
	var city:RefCounted=Modern.architecture()
	var points:Array[Vector2]=[Vector2(10,15),Vector2(36,15)]
	var street:Dictionary=city.add_road(points,"avenue")
	var zones:Array[String]=[]
	for row:Array in [[17.,19.,"renaissance"],[25.,27.,"clockwork"],[33.,36.,"modern_eco"]]:
		points=[Vector2(row[0],15),Vector2(row[1],15)]
		var zone:Dictionary=city.add_district(points,6.,"warm");city.set_district_era(zone.district_id,row[2]);zones.append(zone.district_id)
	points=[Vector2(-11,9),Vector2(15,9)];var bridge:Dictionary=city.add_road(points,"tram")
	var road:Dictionary=city.roads[-1];var profile:Dictionary=city.road_profile(road);var run:Dictionary=profile.bridge_runs[0]
	var center:Vector2=BridgePlan._point(profile.samples,(float(run.start)+float(run.end))*.5).at
	points=[center];var district:Dictionary=city.add_district(points,8.,"deep");city.set_district_era(district.district_id,"modern_eco")
	return {"city":city,"street":street,"bridge":bridge,"zones":zones,"bridge_district":district.district_id,"bridge_center":center}
