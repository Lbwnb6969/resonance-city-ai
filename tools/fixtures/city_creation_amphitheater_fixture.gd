extends RefCounted
const Eight=preload("res://tools/fixtures/city_creation_phase_eight_fixture.gd")
const Quality=preload("res://tools/fixtures/city_creation_quality_fixture.gd")
static func build(tree:SceneTree)->Dictionary:
	var scene:=Eight.build(tree);var city:RefCounted=scene.city;var life:Node3D=scene.life
	scene.facts.keep=city.place_signature("bell_keep",Vector2(-31,0))
	city.set_house_role(scene.atelier,"workshop");life._sync()
	scene.facts.festival_crafted=Quality.until(life,func()->bool:return not city.festival_ready_venues().is_empty(),1600.)
	if scene.facts.festival_crafted:
		var venue:String=city.festival_ready_venues()[0];var used:int=city.festival_status(venue).used
		scene.facts.festival_invite=life.invite_concert(venue)
		scene.facts.festival_used=Quality.until(life,func()->bool:return city.festival_status(venue).used>used,700.)
	for z in range(-36,37,4):
		for x in range(-36,37,4):
			if city.houses.size()>=50:break
			city.add_house(Vector2(x,z))
	var points:Array[Vector2]=[Vector2(-18,-5)]
	var third:Dictionary=city.add_district(points,3.6,"weave");city.set_district_era(third.district_id,"clockwork")
	var a:String=city.districts[0].id;var b:String=city.districts[1].id
	# Audio's full natural call/answer attribution is independently exercised in
	# check_creation_modern_unlock_live; this fixture uses that completed-event API.
	city.record_district_answer(a,b,"pastoral","renaissance");city.record_district_answer(b,third.district_id,"renaissance","clockwork")
	city.refresh_growth();city.Signatures.refresh(city)
	scene.facts.chapters=city.growth_memories.duplicate();scene.facts.eras=city.era_unlocks.duplicate()
	return scene
static func site(city:RefCounted)->Vector2:
	for z:float in [12.,16.,20.,24.,28.,4.,-12.]:
		for x:float in [8.,9.,10.,7.,6.,-6.,-7.,-8.,-9.,-10.]:
			var p:=Vector2(x,z)
			if city.preview_signature("floating_amphitheater",p).ok:return p
	return Vector2.INF
static func place_connected(city:RefCounted)->Dictionary:
	var at:=site(city)
	if at==Vector2.INF:return {"ok":false,"message":"no shore site"}
	var result:Dictionary=city.place_signature("floating_amphitheater",at)
	if not result.ok:return result
	var points:Array[Vector2]=[at+Vector2(0,-1.4),at+Vector2(0,-2.2),Vector2(at.x+3.,at.y-2.2),Vector2(at.x+3.,9.)]
	result.access=city.add_road(points,"promenade");result.at=at
	return result
