extends RefCounted
const State = preload("res://scripts/world/city_creation_state.gd")
const Modern = preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const Legacy = preload("res://tests/test_city_creation_eras.gd")
static func load_city(name: String) -> RefCounted:
	var city := State.new()
	assert(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/"+name+".json"))).ok)
	return city
static func building(kind: String) -> Dictionary:
	var city: RefCounted; var hid := "h1"; var target := {}
	if kind == "courtyard":
		city = load_city("庭院河湾样例"); hid = "h7"
		for item: Dictionary in city.houses:
			if item.id != hid: continue
			for cell: Dictionary in item.cells:
				if cell.x == 4 and cell.z == 1 and cell.level == 0: target = cell.duplicate(true); break
		assert(city.remove_cell(hid,target.id).ok)
	elif kind == "arcade":
		city = Legacy.fixture(); city.set_house_era(hid,"renaissance")
		target = {"x":0,"z":0,"level":1,"kind":"room"}
	elif kind == "conservatory":
		city = Legacy.fixture()
		assert(city.add_cell(hid,1,0,0).ok)
		assert(city.add_cell(hid,0,0,1,"terrace").ok)
		target = {"x":1,"z":0,"level":1,"kind":"terrace"}
	elif kind == "skybridge":
		city = Modern.architecture(); hid = "h2"
		for cell: Dictionary in city.houses[1].cells:
			if cell.x == 0 and cell.z == 0 and cell.level == 1: target = cell.duplicate(true); break
		assert(city.remove_cell(hid,target.id).ok)
	var check: Dictionary = city.validate_add_cell(hid,int(target.x),int(target.z),int(target.level),str(target.kind))
	assert(check.ok)
	city.prepare_ground_height()
	return {"city":city,"candidate":{"house_id":hid,"cell":target,"valid":true}}
static func road(kind: String) -> Dictionary:
	var city: RefCounted; var points: Array[Vector2] = []; var width := 1.9; var style := "promenade"
	if kind == "bridge":
		city = State.new(); city.initialize(); points.assign([Vector2(-11,9),Vector2(15,9)])
	else:
		city = load_city("高地河湾样例"); style = "path"; width = 1.25
		for row: Dictionary in city.roads:
			if city.road_profile(row).treads.is_empty(): continue
			for at: Array in row.points: points.append(Vector2(at[0],at[1]))
			width = float(row.width); style = str(row.get("style","path"))
			assert(city.remove_road(str(row.id)).ok); break
	assert(not points.is_empty()); city.prepare_ground_height()
	return {"city":city,"points":points,"width":width,"style":style}
