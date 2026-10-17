extends SceneTree
## Compare every ordered protection record and complete field to the Git oracle.
const State = preload("res://scripts/world/city_creation_state.gd")
const Terrain = preload("res://scripts/world/city_creation_terrain.gd")
const Protection = preload("res://scripts/world/city_creation_terrain_protection.gd")
const OUT = "res://验证记录/地形准备优化_2026-10-16"
var checks: Array = []
var failures: Array[String] = []
var reference: RefCounted
var source_script: GDScript
func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _compare(city: RefCounted,label: String) -> void:
	city.prepare_ground_height()
	var actual: Array = city._terrain_protection.build(city,city._road_heights.profiles)
	var expected: Array = reference.build(city,city._road_heights.profiles)
	_check(actual==expected,label+": complete ordered house/road/cafe/court protection rows equal original")
	var field := Terrain.new()
	field.prepare(city.waters,city.water_clearance,city.terrain_strokes,expected)
	_check(city._ground_terrain.vertices==field.vertices and city._ground_terrain.offsets==field.offsets,label+": every final height and offset equals cold field with original protection")
func _city(path: String) -> RefCounted:
	var city := State.new()
	_check(bool(city.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok),"real sample restores: "+path)
	return city
func _run() -> void:
	source_script=GDScript.new();source_script.source_code=FileAccess.get_file_as_string(OUT+"/原地形保护算法.gd.txt")
	_check(source_script.reload()==OK,"frozen protection source from Git 4e41ca04 compiles")
	if not failures.is_empty(): _finish();return
	reference=source_script.new()
	var city := _city("res://数据/经营河湾样例.json")
	_compare(city,"cold economy")
	var count: int = city._terrain_protection.layout_rebuilds
	var base: Dictionary = city.snapshot()
	var network_city := State.new();network_city.restore(base)
	network_city._ground_terrain.copy_cache_from(city._ground_terrain)
	network_city._terrain_protection.copy_cache_from(city._terrain_protection)
	var source_pads: Array = city._terrain_protection._house_pads.duplicate(true)
	var points: Array[Vector2] = [Vector2(-12,-10.45)]
	_check(bool(city.add_terrain_stroke(points,"raise",2,1,2).ok) and bool(network_city.add_terrain_stroke(points,"raise",2,1,2).ok),"same genuine near-road brush enters source and worker fork")
	_compare(city,"near-road sculpt")
	_compare(network_city,"copied worker sculpt")
	_check(city._terrain_protection.layout_rebuilds==count and network_city._terrain_protection.layout_rebuilds==count,"height-only edits reuse source and copied layout")
	_check(city._ground_terrain.vertices==network_city._ground_terrain.vertices,"worker fork and owner produce identical complete field")
	city.undo();_compare(city,"undo sculpt")
	city.redo();_compare(city,"redo sculpt")
	_check(city._terrain_protection.layout_rebuilds==count,"undo and redo of height keep structural layout cached")
	_check(bool(city.set_house_role("h1","garden_cafe").ok),"house role changes through State")
	_compare(city,"new tea garden")
	_check(city._terrain_protection.layout_rebuilds==count+1,"role change invalidates structural pads")
	_check(network_city._terrain_protection._house_pads==source_pads and network_city._terrain_protection.layout_rebuilds==count,"source rebuild does not mutate captured worker pads")
	# Geometry mutations exercise the cache key directly, independently of UI.
	city.houses[0].base_y=float(city.houses[0].get("base_y",0.0))+.35;city.revision+=1
	_compare(city,"house base changes")
	city.roads[0].width=float(city.roads[0].width)+.15;city.revision+=1
	_compare(city,"road width changes")
	var pond: Array[Vector2] = [Vector2(25,25)]
	_check(bool(city.add_water(pond,3,"pond").ok),"pond added through State")
	_compare(city,"water geometry changes")
	_check(city._terrain_protection.layout_rebuilds==count+4,"base, road width and water each invalidate cached layout")
	var court := _city("res://数据/庭院河湾样例.json")
	_compare(court,"closed courtyard")
	_check(not court._terrain_protection._court_pads.is_empty(),"courtyard fixture contains actual protected paving")
	var court_count: int = court._terrain_protection.layout_rebuilds
	court.plants.clear();court.revision+=1;_compare(court,"courtyard trees removed")
	_check(court._terrain_protection.layout_rebuilds==court_count,"decorative planting does not invalidate paving layout")
	court.houses[0].cells.remove_at(0);court.revision+=1;_compare(court,"courtyard wall opened")
	_check(court._terrain_protection.layout_rebuilds==court_count+1,"room topology invalidates cached courtyard")
	_finish()
func _finish() -> void:
	var result := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"oracle":"Git 4e41ca04 original protection pipeline; complete ordered rows and 37249 height+offset pairs, not duplicate height math"}
	FileAccess.open(OUT+"/正确性.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("PROTECTION_CACHE ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
