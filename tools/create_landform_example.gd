extends SceneTree
## Separate editable landscape; existing examples and personal cities stay intact.
const State=preload("res://scripts/world/city_creation_state.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
const Outcrops=preload("res://scripts/visual/city_creation_outcrops.gd")
const DEST="res://数据/地貌河湾样例.json"
func _initialize() -> void: _run.call_deferred()
func _run() -> void:
	assert(not FileAccess.file_exists(DEST))
	var city=State.new()
	assert(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/庭院河湾样例.json"))).ok)
	var ridge: Array[Vector2]=[Vector2(6.7,11.5),Vector2(10.0,12.0),Vector2(13.5,10.6)]
	for i in range(3): assert(city.add_terrain_stroke(ridge,"raise",2.0,1.0).ok)
	var spur: Array[Vector2]=[Vector2(13.5,6.5),Vector2(14.0,8.5),Vector2(13.5,10.6)]
	for i in range(2): assert(city.add_terrain_stroke(spur,"raise",2.0,1.0).ok)
	var northern: Array[Vector2]=[Vector2(-15.8,-12.5),Vector2(-12.5,-12.5)]
	for i in range(3): assert(city.add_terrain_stroke(northern,"raise",2.0,1.0).ok)
	var pool: Array[Vector2]=[Vector2(12.0,7.8)]
	var water: Dictionary=city.add_water(pool,2.8,"pond")
	if not water.ok:
		push_error(str(water));quit(1);return
	city.prepare_ground_height()
	var stones:=0
	var kinds: Dictionary={}
	for z in range(-2,2):
		for x in range(-3,3):
			var block:=Vector2i(x,z)
			var mask=Mask.new();mask.setup(city,block)
			var records: Dictionary=Outcrops.records(city,block,mask,Outcrops.plant_rows(city,block))
			for part: String in records:
				stones+=records[part].size()
				if not records[part].is_empty(): kinds[part]=true
	assert(stones>0,"real rock slopes must generate finite companion stones")
	assert(city.save_city(DEST).ok)
	var restored=State.new()
	assert(restored.load_city(DEST).ok)
	restored.prepare_ground_height()
	assert(city._ground_terrain.vertices==restored._ground_terrain.vertices)
	print("LANDFORM_EXAMPLE ",JSON.stringify({"houses":city.houses.size(),"strokes":city.terrain_strokes.size(),"waters":city.waters.size(),"stones":stones,"kinds":kinds.keys()}))
	quit()
