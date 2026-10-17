extends SceneTree
## Pure CPU fixture. Never instantiates the demo or reads/writes personal saves.
const State = preload("res://scripts/world/city_creation_state.gd")
const Terrain = preload("res://scripts/world/city_creation_terrain.gd")
const A := Vector2(12,-9)
const B := Vector2(11,-8)
const OUTPUT := "res://验证记录/地形笔刷_2026-10-16/state.json"
var checks: Array = []
var failures: Array = []
var evidence: Dictionary = {}

func _initialize() -> void:
	_run.call_deferred()

func _check(condition: bool,label: String) -> void:
	checks.append({"label":label,"passed":condition})
	if not condition:
		failures.append(label)
		push_error(label)

func _city():
	var city = State.new()
	city.initialize()
	city.prepare_ground_height()
	return city

func _digest(buffer: PackedFloat32Array) -> String:
	var hashing := HashingContext.new()
	hashing.start(HashingContext.HASH_SHA256)
	hashing.update(buffer.to_byte_array())
	return hashing.finish().hex_encode()

func _grid(city) -> Dictionary:
	city.prepare_ground_height()
	return {"vertices":_digest(city._ground_terrain.vertices),"offsets":_digest(city._ground_terrain.offsets)}

func _fresh_matches(city,label: String) -> void:
	var incremental := _grid(city)
	var fresh = State.new()
	var restored: Dictionary = fresh.restore(city.snapshot())
	_check(bool(restored.ok),label+" snapshot validates")
	_check(incremental==_grid(fresh),label+" local grid/offset bytes equal fresh full build")
	evidence[label] = incremental

func _unchanged_failure(city,result: Dictionary,before: String,history: Array,label: String) -> void:
	_check(not bool(result.ok) and JSON.stringify(city.snapshot())==before and [city._undo.size(),city._redo.size()]==history,label+" rejects without state/history mutation")

func _run() -> void:
	var city = _city()
	var initial := _grid(city)
	_check(int(city.snapshot().schema)==1,"unsculpted city keeps legacy schema 1")
	# Load the exact frozen pre-change terrain, not a hand-written baseline.
	var zip := ZIPReader.new()
	var opened := zip.open("res://备份/地形笔刷前_20261016/原源码与设计.zip")
	_check(opened==OK,"pre-change terrain backup readable")
	if opened==OK:
		var old_script := GDScript.new()
		old_script.source_code = zip.read_file("scripts/world/city_creation_terrain.gd").get_string_from_utf8()
		zip.close()
		var compiled := old_script.reload()
		_check(compiled==OK,"frozen pre-change terrain compiles")
		if compiled==OK:
			var old = old_script.new()
			old.prepare(city.waters,city.water_clearance)
			_check(old.vertices.to_byte_array()==city._ground_terrain.vertices.to_byte_array(),"default no-stroke grid preserves old terrain bytes")
			for point: Vector2 in [A,B,Vector2(3,0),Vector2(-23.2,18.7)]:
				_check(absf(city.ground_height(point)-float(old.height_at(point)))<0.000001,"old actual triangle height preserved at "+str(point))
	_check(city._ground_terrain.offsets.count(0.0)==Terrain.COLUMNS*Terrain.ROWS,"no strokes produce zero offsets")
	var baseline_a: float = city.ground_height(A)
	var far_region := Rect2(-17,10,2,2)
	var far_signature: int = city._ground_terrain.region_signature(far_region)
	_check(city.add_terrain_stroke([A,B],"raise").ok,"raise east-bank multi-point stroke")
	_check(int(city.snapshot().schema)==2,"authored terrain upgrades snapshot to schema 2")
	var raised := _grid(city)
	_check(absf(city.ground_height(A)-baseline_a-0.65)<0.000001 and absf(city._ground_terrain.offset_at(B)-0.65)<0.000001,"multi-point stroke raises both endpoints once")
	_check(city._ground_terrain.region_signature(far_region)==far_signature,"local brush leaves distant region signature unchanged")
	_check(int(city._ground_terrain.stats.changed_vertices)<Terrain.COLUMNS*Terrain.ROWS,"brush prepares local vertices")
	_fresh_matches(city,"raised")
	var repeated = _city()
	_check(repeated.add_terrain_stroke([A,B,A,B],"raise").ok,"repeated samples accepted in one stroke")
	_grid(repeated)
	_check(absf(repeated.ground_height(A)-city.ground_height(A))<0.000001 and absf(repeated.ground_height(B)-city.ground_height(B))<0.000001,"one stroke uses closest segment instead of accumulating point count")
	_check(city.undo().ok and _grid(city)==initial,"undo restores full pre-stroke grid")
	_check(city.redo().ok and _grid(city)==raised,"redo restores identical raised grid")
	_check(city.add_terrain_stroke([A,B],"lower").ok,"lower applies second ordered stroke")
	_check(absf(city.ground_height(A)-baseline_a)<0.000001,"opposite equal strokes cancel at center")
	_fresh_matches(city,"raise_lower")
	_check(city.add_terrain_stroke([A,B],"raise").ok and city.add_terrain_stroke([A,B],"reset").ok,"raise then reset uses ordered history")
	_check(absf(city.ground_height(A)-baseline_a)<0.000001,"reset restores base height at brush center")
	_fresh_matches(city,"reset")
	var lower = _city()
	_check(lower.add_terrain_stroke([B],"lower").ok and absf(lower.ground_height(B)-baseline_a+0.65)<0.000001,"standalone lower creates real negative offset")
	# Test a nonvertex point on each side of the real a-c diagonal.
	var terrain = repeated._ground_terrain
	for fractional: Vector2 in [Vector2(0.17,0.09),Vector2(0.09,0.17)]:
		var point: Vector2 = A+fractional
		var grid: Vector2 = (point-Terrain.LAND_RECT.position)/Terrain.STEP
		var ix := floori(grid.x)
		var iz := floori(grid.y)
		var x := grid.x-ix
		var z := grid.y-iz
		var a: float = terrain.vertices[iz*Terrain.COLUMNS+ix]
		var b: float = terrain.vertices[iz*Terrain.COLUMNS+ix+1]
		var c: float = terrain.vertices[(iz+1)*Terrain.COLUMNS+ix+1]
		var d: float = terrain.vertices[(iz+1)*Terrain.COLUMNS+ix]
		var expected := (1.0-x)*a+(x-z)*b+z*c if z<=x else (1.0-z)*a+x*c+(z-x)*d
		_check(absf(float(terrain.height_at(point))-expected)<0.000001,"height matches actual triangle barycentrics "+str(fractional))
	var encoded := JSON.stringify(repeated.snapshot(),"",true,true)
	var loaded = State.new()
	var loaded_result: Dictionary=loaded.restore(JSON.parse_string(encoded))
	evidence.json_restore=loaded_result
	if loaded_result.ok: evidence.json_grids=[_grid(loaded),_grid(repeated)]
	_check(loaded_result.ok and _grid(loaded)==_grid(repeated),"JSON roundtrip preserves complete terrain/offset bytes")
	var old_data: Dictionary = _city().snapshot()
	old_data.erase("terrain_strokes")
	old_data.schema = 1
	var legacy = State.new()
	_check(legacy.restore(old_data).ok and legacy.terrain_strokes.is_empty() and _grid(legacy)==initial,"old schema without terrain_strokes retains default heights")
	var before := JSON.stringify(repeated.snapshot())
	var history := [repeated._undo.size(),repeated._redo.size()]
	var downgraded: Dictionary = repeated.snapshot()
	downgraded.schema = 1
	_unchanged_failure(repeated,repeated.restore(downgraded),before,history,"schema 1 cannot carry nonempty terrain strokes")
	_unchanged_failure(repeated,repeated.add_terrain_stroke([Vector2(NAN,0)],"raise"),before,history,"NaN point")
	_unchanged_failure(repeated,repeated.add_terrain_stroke([],"raise"),before,history,"empty points")
	_unchanged_failure(repeated,repeated.add_terrain_stroke([Vector2(99,0)],"raise"),before,history,"out-of-world point")
	_unchanged_failure(repeated,repeated.add_terrain_stroke([A],"invalid"),before,history,"unknown mode")
	for invalid_radius: float in [0.5,6.1,NAN,INF]:
		_unchanged_failure(repeated,repeated.add_terrain_stroke([A],"raise",invalid_radius),before,history,"invalid radius "+str(invalid_radius))
	_unchanged_failure(repeated,repeated.add_terrain_stroke([A],"raise",3.5,NAN),before,history,"NaN strength")
	var malformed: Dictionary = repeated.snapshot()
	malformed.terrain_strokes[0].points = [["bad",0]]
	_unchanged_failure(repeated,repeated.restore(malformed),before,history,"malformed snapshot points")
	# Build/remove real structures; no fabricated protection masks.
	var house_city = _city()
	house_city.add_terrain_stroke([A,B],"raise")
	var hill := _grid(house_city)
	var added_house: Dictionary = house_city.add_house(A)
	_check(added_house.ok,"real house can be added on a sculpted hill")
	if added_house.ok:
		_check(absf(house_city.ground_height(A)-baseline_a)<0.000001,"new house derives a flat protected foundation")
		_fresh_matches(house_city,"new_house_pad")
		_check(house_city.remove_house(str(added_house.house_id)).ok and _grid(house_city)==hill,"deleting house restores original sculpted hill")
		_check(house_city.undo().ok and absf(house_city.ground_height(A)-baseline_a)<0.000001,"undo removal restores flat foundation")
		_check(house_city.undo().ok and _grid(house_city)==hill,"undo building restores exact hill grid")
	var road_city = _city()
	road_city.add_terrain_stroke([A,B],"raise")
	var road_hill := _grid(road_city)
	var added_road: Dictionary = road_city.add_road([Vector2(10,-9),Vector2(14,-9)])
	_check(added_road.ok,"real road can be added over a sculpted hill")
	if added_road.ok:
		_check(absf(road_city.ground_height(A)-baseline_a)<0.000001,"new road keeps its real centerline platform flat")
		_fresh_matches(road_city,"new_road_pad")
		_check(road_city.remove_road(str(added_road.road_id)).ok and _grid(road_city)==road_hill,"removing road restores sculpted hill")
	var water_city = _city()
	water_city.add_terrain_stroke([A,B],"raise")
	var dry_grid := _grid(water_city)
	var water: Dictionary = water_city.add_water([Vector2(9,-10),Vector2(14,-10)],2.4,"pond")
	_check(water.ok,"real water stroke crosses sculpted ground")
	if water.ok:
		water_city.prepare_ground_height()
		_check(water_city.water_clearance(A)<0.35 and absf(water_city._ground_terrain.offset_at(A))<0.000001,"water footprint attenuates authored hill offset")
		_fresh_matches(water_city,"water_attenuation")
		_check(water_city.undo().ok and _grid(water_city)==dry_grid,"undo water restores exact dry hill bytes")
	var cafe_city = _city()
	_check(cafe_city.set_house_role("h6","garden_cafe").ok,"actual garden cafe role supplies its activity footprint")
	var plan: Dictionary=cafe_city._terrain_protection.cafes.layout(cafe_city,"h6")
	_check(not plan.is_empty(),"real cafe layout has outdoor furniture and seats")
	if not plan.is_empty():
		var strokes: Array[Vector2]=[plan.center]
		cafe_city.add_terrain_stroke(strokes,"raise",5.0)
		var maximum:=0.0
		for i in range(24):
			var at: Vector2=Vector2(plan.center)+Vector2(cos(i*TAU/24.0),sin(i*TAU/24.0))*2.1
			cafe_city.prepare_ground_height()
			maximum=maxf(maximum,absf(cafe_city._ground_terrain.offset_at(at)))
		_check(maximum<0.000001,"real cafe furniture, seats and outer planters keep a complete flat clearing")
		_fresh_matches(cafe_city,"cafe_clearing")
	var venue_city = _city()
	venue_city.set_house_role("h1","venue")
	venue_city.add_terrain_stroke([Vector2(-5,-2)],"raise",5.0)
	_grid(venue_city)
	venue_city.remove_cell("h1",str(venue_city.houses[0].cells[0].id))
	_fresh_matches(venue_city,"multi_cell_venue_removal")
	var sample = State.new()
	var sample_result: Dictionary=sample.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/创作河湾样例.json")))
	_check(sample_result.ok and sample.houses.size()==6 and sample.terrain_strokes.size()==4 and sample.ground_height(Vector2(12,-8))>1.0,"authored example opens with real editable hills and existing six-house town")
	var output := {"passed":failures.is_empty(),"checks":checks.size(),"failures":failures,"results":checks,"grids":evidence,"scope":"CPU State/Terrain and real water/protection; no personal persistence, rendering or performance claim"}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT.get_base_dir()))
	var file := FileAccess.open(OUTPUT,FileAccess.WRITE)
	if file!=null:
		file.store_string(JSON.stringify(output,"\t",true,true))
		file.close()
	else:
		push_error("Cannot write terrain CPU fixture report")
		quit(1)
		return
	print("TERRAIN_BRUSH_STATE ","PASS" if failures.is_empty() else "FAIL"," checks=",checks.size()," failures=",failures)
	quit(0 if failures.is_empty() else 1)
