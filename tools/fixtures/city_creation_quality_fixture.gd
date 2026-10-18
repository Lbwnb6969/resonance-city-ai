extends RefCounted
## Shared real-life fixture: service API calls are performed by actual actors.
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const SignaturesFixture=preload("res://tests/test_city_creation_signatures.gd")

static func until(life: Node3D,condition: Callable,seconds: float=700.0)->bool:
	for i in range(ceili(seconds/.1)):
		if condition.call():return true
		life._process(.1)
	return false

static func build(tree: SceneTree)->Dictionary:
	var city: RefCounted=SignaturesFixture.ordinary_city()
	var life:=Life.new();tree.root.add_child(life);life.set_process(false);life.setup(city)
	var facts:= {}
	facts.bakery=until(life,func():return int(city.bakery_status("h2").produced)>=30)
	facts.first_invite=life.invite_concert("h4").ok
	facts.first_concert=until(life,func():return int(city.life_progress.concerts)>=1)
	city.refresh_growth()
	city.set_house_role("h4","garden_cafe")
	var atelier: Dictionary=city.add_house(Vector2(-15,0))
	var points: Array[Vector2]=[Vector2(-15,1.55),Vector2(-11,1.55)]
	city.add_road(points)
	var venues: Array[String]=[]
	for p: Vector2 in [Vector2(-18,-5),Vector2(-18,5)]:
		var added: Dictionary=city.add_house(p);city.set_house_role(added.house_id,"venue");venues.append(str(added.house_id))
		points=[Vector2(p.x,p.y+1.55),Vector2(-11,p.y+1.55)];city.add_road(points)
	points=[Vector2(-11,-9),Vector2(-11,9)];city.add_road(points,"promenade")
	assert(city.add_house(Vector2(-32,-20)).ok)
	life._sync()
	facts.tea=until(life,func():return int(city.matinee_credits.get("h1",{}).get("earned",0))>0)
	var a: Dictionary=city.add_district([Vector2(-8,-6)] as Array[Vector2],3.6,"warm")
	var b: Dictionary=city.add_district([Vector2(-7,6)] as Array[Vector2],3.6,"deep")
	assert(a.ok and b.ok and city.link_districts(a.district_id,b.district_id).ok)
	# The fixture supplies the completed music event; live PCM is checked separately.
	assert(city.record_district_answer(a.district_id,b.district_id))
	assert(city.set_district_era(a.district_id,"renaissance").ok)
	assert(city.set_house_role(atelier.house_id,"atelier").ok)
	life._sync()
	facts.culture=until(life,func():return city.culture_level("h1")>0)
	life._refresh_quality();facts.before_relay_tier=city.level_tier("h1")
	facts.relay_invite=life.start_relay(venues[0]).ok
	facts.relay=until(life,func():return int(city.life_progress.concerts)>=3 and not life.relay_status().active)
	life._refresh_quality();facts.final_tier=city.level_tier("h1")
	facts.quality=city.building_quality.duplicate(true);facts.performances=city.house_concerts.duplicate(true)
	facts.checkpoint=city.set_journey_checkpoint(life.checkpoint()).ok
	var check: Dictionary=city._validate_snapshot(city.snapshot());facts.save_valid=check.ok
	if not check.ok:facts.save_error=check.message
	return {"city":city,"life":life,"facts":facts,"atelier":str(atelier.house_id),"venues":venues}
