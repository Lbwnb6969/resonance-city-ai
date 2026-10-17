extends RefCounted
## Milestones originate in the actual Phase6 life fixture and authored edits.
const Quality=preload("res://tools/fixtures/city_creation_quality_fixture.gd")

static func build(tree: SceneTree)->Dictionary:
	var scene:=Quality.build(tree)
	var city: RefCounted=scene.city;var life: Node3D=scene.life
	scene.facts.ten_tea=Quality.until(life,func()->bool:return int(city.life_progress.tea_parties)>=10,2000.)
	for z in range(-35,30,4):
		if city.Signatures.planted_count(city)>=150:break
		var points: Array[Vector2]=[Vector2(12,z),Vector2(36,z)]
		city.add_vegetation_stroke(points,"shrub",1.6)
	scene.facts.plants=city.Signatures.planted_count(city)
	for z in range(-32,-11,4):
		for x in range(-34,-13,4):
			if city.houses.size()>=28:break
			city.add_house(Vector2(x,z))
	var points: Array[Vector2]=[Vector2(-8,-6)]
	city.add_district(points,3.6,"warm")
	points=[Vector2(-2.4,1)]
	var district: Dictionary=city.add_district(points,3.6,"deep")
	city.set_district_era(district.district_id,"renaissance");city.refresh_growth()
	points=[Vector2(10,12),Vector2(36,12)]
	var street: Dictionary=city.add_road(points,"promenade")
	city.Signatures.refresh(city)
	scene.facts.wide_street=street;scene.facts.metres=city.Signatures.wide_street_metres(city)
	scene.facts.unlocks=city.signature_unlocks.duplicate();scene.facts.eras=city.era_unlocks.duplicate()
	return scene
