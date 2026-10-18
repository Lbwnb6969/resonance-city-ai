extends RefCounted
const Ordinary=preload("res://tests/test_city_creation_signatures.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Quality=preload("res://tools/fixtures/city_creation_quality_fixture.gd")

static func build(tree: SceneTree)->Dictionary:
	var city: RefCounted=Ordinary.ordinary_city()
	assert(city.set_house_role("h4","garden_cafe").ok)
	var life:=Life.new();tree.root.add_child(life);life.set_process(false);life.setup(city)
	for z in range(-35,30,4):
		if city.Signatures.planted_count(city)>=120:break
		var points: Array[Vector2]=[Vector2(12,z),Vector2(36,z)]
		city.add_vegetation_stroke(points,"shrub",1.6)
	# Remove any overshoot through the real eraser, keeping valid identities.
	for plant: Dictionary in city.plants.duplicate(true):
		if city.Signatures.planted_count(city)<=120:break
		if plant.source=="player":
			var points: Array[Vector2]=[Vector2(plant.position[0],plant.position[1])]
			assert(city.erase_vegetation_stroke(points,.001).ok)
	var seventh:=Quality.until(life,func():return int(city.life_progress.tea_parties)>=7,2500.)
	var before_eighth: Dictionary=city.snapshot()
	var tea:=seventh and Quality.until(life,func():return int(city.life_progress.tea_parties)>=8,400.)
	city.Signatures.refresh(city)
	return {"city":city,"life":life,"tea":tea,"before_eighth":before_eighth}
