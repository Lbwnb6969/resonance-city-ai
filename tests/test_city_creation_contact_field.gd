extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Field = preload("res://scripts/visual/city_creation_contact_field.gd")
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	var city := State.new()
	city.initialize()
	var original := city.snapshot()
	var field := Field.new()
	field.prepare(city)
	print("CONTACT_INITIAL ",field.stats)
	_check(city.snapshot() == original,"visual preparation preserves authored city")
	_check(field.texture == null and field.pixels.size() == Field.WIDTH*Field.HEIGHT*4,"CPU preparation owns no image or RID")
	_compare(field,city)
	field.upload()
	var initial_texture := field.texture
	var initial_pixels := field.pixels.duplicate()
	var distant_bytes:PackedByteArray=field.tiled.images[63].get_data()
	field.prepare(city)
	field.upload()
	_check(field.stats.texels == 0 and field.texture == initial_texture,"unchanged geometry neither calculates nor uploads")
	city.houses[0].name = "改名"
	city.houses[0].cells.append({"x":0,"z":0,"level":2,"kind":"room","id":"contact_fixture_upper"})
	field.prepare(city)
	_check(field.stats.texels == 0,"name and upper floor do not invalidate ground")
	city.houses[0].cells.pop_back()
	var old_pixels := field.pixels.duplicate()
	city.roads.append({"id":"contact_fixture_road","points":[[-15.0,-11.0],[-13.5,-11.3]],"width":1.25})
	var fork := Field.new()
	fork.copy_cpu_from(field)
	var thread := Thread.new()
	thread.start(fork.prepare.bind(city))
	thread.wait_to_finish()
	_check(field.pixels == old_pixels and field.texture == initial_texture,"worker fork cannot mutate visible pixels or texture")
	_check(fork.texture == null and fork.stats.changed,"worker computes only CPU payload")
	_check(fork.stats.texels < 6000,"short new road touches local field tiles")
	print("CONTACT_LOCAL_ROAD ",fork.stats)
	_compare(fork,city)
	var changed_pixels := 0
	for offset in range(0,old_pixels.size(),4):
		if old_pixels.slice(offset,offset+4) != fork.pixels.slice(offset,offset+4): changed_pixels += 1
	_check(changed_pixels > 0 and changed_pixels < fork.stats.texels,"local upload retains untouched field")
	field.prepare(city)
	_check(field.pixels == fork.pixels,"synchronous and worker preparation agree byte-for-byte")
	field.upload()
	_check(field.texture == initial_texture and field.tiled.images[63].get_data()==distant_bytes and field.stats.uploaded_layers<8,"local upload retains texture identity and distant layers")
	city.roads.pop_back()
	field.prepare(city)
	_check(field.pixels == initial_pixels,"remove road clears prior contact without ghosts")
	city.houses.clear()
	city.roads.clear()
	city.plants.clear()
	field.prepare(city)
	_check(field.sample_world(Vector2.ZERO) == Vector3.ONE,"empty parcel is neutral")
	_compare(field,city)
	print("CONTACT_FIELD_RESULT ",checks," checks, ",failures.size()," failures")
	for failure: String in failures: push_error(failure)
	quit(0 if failures.is_empty() else 1)

func _compare(field: RefCounted, city: RefCounted) -> void:
	var rng := RandomNumberGenerator.new()
	rng.seed = 20261015
	var junctions: RefCounted=city.road_junctions()
	for index in range(320):
		var pixel := Vector2i(rng.randi_range(0,Field.WIDTH-1),rng.randi_range(0,Field.HEIGHT-1))
		var at: Vector2 = field.pixel_world(pixel)
		var expected := _oracle(at,city,junctions)
		var actual: Vector3 = field._pixel(pixel)*Field.RANGE
		_check(expected.distance_to(actual) <= sqrt(3.0)*Field.RANGE/255.0,"exact texel "+str(index))
		var world := Vector2(rng.randf_range(-28.0,28.0),rng.randf_range(-26.0,26.0))
		var difference: Vector3 = (field.sample_world(world)*Field.RANGE-_oracle(world,city,junctions)).abs()
		_check(maxf(difference.x,maxf(difference.y,difference.z)) <= Field.INTERPOLATION_ERROR+0.00001,"bounded bilinear error "+str(index))

func _oracle(at: Vector2, city: RefCounted,junctions: RefCounted) -> Vector3:
	var distances := Vector3.ONE*Field.RANGE
	for house: Dictionary in city.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level) != 0: continue
			var center := Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			var nearest := at.clamp(center-Vector2.ONE*0.9,center+Vector2.ONE*0.9)
			distances.x = minf(distances.x,at.distance_to(nearest))
	for road: Dictionary in city.roads:
		for index in range(maxi(1,road.points.size()-1)):
			var a := Vector2(road.points[index][0],road.points[index][1])
			var next := mini(index+1,road.points.size()-1)
			var b := Vector2(road.points[next][0],road.points[next][1])
			var nearest := Geometry2D.get_closest_point_to_segment(at,a,b)
			distances.y = minf(distances.y,maxf(0.0,at.distance_to(nearest)-float(road.get("width",1.25))*0.5))
		# The real street is its unchanged authored capsule plus derived optional
		# junction polygons. Keep the independent original capsule oracle above.
		for polygon: PackedVector2Array in junctions.additions(str(road.id)):
			if Geometry2D.is_point_in_polygon(at,polygon): distances.y=0.0
			else:
				for index in range(polygon.size()):
					var edge:=Geometry2D.get_closest_point_to_segment(at,polygon[index],polygon[(index+1)%polygon.size()])
					distances.y=minf(distances.y,at.distance_to(edge))
	for plant: Dictionary in city.plants:
		var radius := (0.20 if plant.kind == "shrub" else 0.12)*float(plant.get("scale",1.0))
		distances.z = minf(distances.z,maxf(0.0,at.distance_to(Vector2(plant.position[0],plant.position[1]))-radius))
	return distances

func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label)
