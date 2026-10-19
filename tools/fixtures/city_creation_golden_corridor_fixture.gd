extends RefCounted
const Tea=preload("res://tools/fixtures/city_creation_tram_tea_fixture.gd")

static func build()->Dictionary:
	var city:RefCounted=Tea.city()
	var points:Array[Vector2]=[Vector2(-36,0),Vector2(-16,0)]
	var rail:Dictionary=city.add_road(points,"tram");assert(rail.ok)
	var home:Dictionary=city.add_house(Vector2(-34,-2));assert(home.ok)
	city.Signatures.refresh(city)
	var depot:Dictionary=city.place_signature("clockwork_depot",Vector2(-22,-5.15));assert(depot.ok)
	var at:Vector2=city.house_entrances(str(depot.house_id))[0].at
	points=[at,Vector2(at.x,0)];assert(city.add_road(points).ok)
	return {"city":city,"home":str(home.house_id),"depot":str(depot.house_id),"left_rail":str(rail.road_id),"cafe":"h3"}
