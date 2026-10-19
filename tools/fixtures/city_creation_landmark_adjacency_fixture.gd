extends RefCounted
const Botanical=preload("res://tools/fixtures/city_creation_botanical_fixture.gd")
const Ordinary=preload("res://tests/test_city_creation_signatures.gd")

static func build(tree:SceneTree)->RefCounted:
	var scene:=Botanical.build(tree);var city:RefCounted=scene.city
	scene.life.free()
	for at:Vector2 in [Vector2(-32,-20),Vector2(-28,-20),Vector2(-24,-20),Vector2(-20,-20)]:assert(city.add_house(at).ok)
	var a:Dictionary=city.add_district([Vector2(-8,-6)] as Array[Vector2],3.6,"warm")
	var b:Dictionary=city.add_district([Vector2(9,3)] as Array[Vector2],3.6,"deep")
	assert(a.ok and b.ok and city.link_districts(a.district_id,b.district_id).ok)
	assert(city.record_district_answer(a.district_id,b.district_id))
	assert(city.set_house_role("h3","workshop").ok)
	city.set_journey_checkpoint({})
	return city

static func neighborhood(city:RefCounted)->Dictionary:
	var keep:Dictionary=city.place_signature("bell_keep",Vector2(-23,0))
	var palace:Dictionary=city.place_signature("botanical_palace",Vector2(-15.5,-2))
	var academy:Dictionary=city.place_signature("music_academy",Vector2(-18,15))
	var mill:Dictionary=city.place_signature("watermill",Ordinary.mill_site(city))
	assert(keep.ok and palace.ok and academy.ok and mill.ok)
	var points:Array[Vector2]=[Vector2(-18,15),Vector2(-8,0)]
	assert(city.add_district(points,4.,"weave").ok)
	var entrance:Dictionary=city.house_entrances(str(mill.house_id))[0]
	var at:Vector2=entrance.at
	points=[at,Vector2(-11,at.y),Vector2(-11,-4.45)]
	assert(city.add_road(points).ok)
	return {"keep":str(keep.house_id),"palace":str(palace.house_id),"academy":str(academy.house_id),"mill":str(mill.house_id)}
