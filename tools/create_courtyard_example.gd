extends SceneTree
## Author a separate, editable example through the real construction APIs.
const State=preload("res://scripts/world/city_creation_state.gd")
const DEST="res://数据/庭院河湾样例.json"
func _initialize() -> void: _run.call_deferred()
func _run() -> void:
	assert(not FileAccess.file_exists(DEST),"existing authored example must be preserved before regenerating")
	var city=State.new()
	var original: Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/创作河湾样例.json"))
	assert(city.restore(original).ok)
	var ring: Array[Dictionary]=[]
	for x in range(5):
		for z in range(5):
			if x==0 or z==0 or x==4 or z==4: ring.append({"x":x,"z":z,"level":0,"kind":"room"})
	var built: Dictionary=city.add_house_stroke(Vector2(7.9,-12.8),ring)
	assert(built.ok,str(built))
	var cross: Array[Vector2]=[Vector2(-11,-8.8),Vector2(6,-9.2),Vector2(16.8,-9.2)]
	var road: Dictionary=city.add_road(cross)
	assert(road.ok,str(road))
	var link: Array[Vector2]=[Vector2(9,4.55),Vector2(16.8,4.55),Vector2(16.8,-9.2)]
	road=city.add_road(link)
	assert(road.ok,str(road))
	var plans: Array=city.courtyard_plans()
	assert(plans.size()==1,"one real courtyard expected")
	assert(not plans[0].fountain.is_empty(),"example must show the original extracted fountain")
	city.set_house_name(str(built.house_id),"听泉长院")
	var saved: Dictionary=city.save_city(DEST)
	assert(saved.ok,str(saved))
	var check=State.new()
	assert(check.load_city(DEST).ok and check.courtyard_plans()==city.courtyard_plans())
	print("COURTYARD_EXAMPLE ",JSON.stringify({"house":built.house_id,"houses":city.houses.size(),"roads":city.roads.size(),"plan":plans[0],"schema":city.snapshot().schema}))
	quit()
