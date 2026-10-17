extends SceneTree
## Bounded CPU stage timings on independent copies; no SceneTree or user save.
const State = preload("res://scripts/world/city_creation_state.gd")
const Terrain = preload("res://scripts/world/city_creation_terrain.gd")
var rows: Array = []
var failures: Array[String] = []
func _initialize() -> void: _run.call_deferred()
func _profile(city: RefCounted,label: String) -> void:
	var started := Time.get_ticks_usec();var stamp := started;var times := {"label":label}
	city._prepare_raw_height()
	times.raw_ms=float(Time.get_ticks_usec()-stamp)/1000.0;stamp=Time.get_ticks_usec()
	city._road_heights.prepare(city)
	times.roads_ms=float(Time.get_ticks_usec()-stamp)/1000.0;stamp=Time.get_ticks_usec()
	var protection: Array = city._terrain_protection.build(city,city._road_heights.profiles)
	times.protection_ms=float(Time.get_ticks_usec()-stamp)/1000.0;stamp=Time.get_ticks_usec()
	city._ground_terrain.prepare(city.waters,city.water_clearance,city.terrain_strokes,protection)
	city._ground_revision=city.revision
	times.apply_ms=float(Time.get_ticks_usec()-stamp)/1000.0
	times.total_ms=float(Time.get_ticks_usec()-started)/1000.0
	times.protection_rows=protection.size();times.vertices=city._ground_terrain.vertices.size();times.changed_vertices=city._ground_terrain.stats.changed_vertices
	rows.append(times)
func _run() -> void:
	var out := "res://验证记录/地形准备优化_2026-10-16/分段_最新.json"
	for argument: String in OS.get_cmdline_user_args():
		if argument.begins_with("--out="): out=argument.trim_prefix("--out=")
	var snapshot: Dictionary = JSON.parse_string(FileAccess.get_file_as_string("res://数据/经营河湾样例.json"))
	var city := State.new();city.restore(snapshot);_profile(city,"cold city")
	var seed := Terrain.new();seed.copy_cache_from(city._ground_terrain)
	var protection_seed: RefCounted = city._terrain_protection.get_script().new()
	protection_seed.copy_cache_from(city._terrain_protection)
	var points: Array[Vector2] = [Vector2(-12,-10.45)]
	city.add_terrain_stroke(points,"raise",2,1,2)
	var network_city := State.new()
	network_city.houses.assign(city.houses.duplicate(true));network_city.roads.assign(city.roads.duplicate(true));network_city.waters.assign(city.waters.duplicate(true));network_city.terrain_strokes.assign(city.terrain_strokes.duplicate(true))
	network_city._ground_terrain=seed
	network_city._terrain_protection=protection_seed
	_profile(city,"incremental renderer city")
	_profile(network_city,"network captured seeds")
	var fresh := State.new();fresh.restore(city.snapshot());fresh.prepare_ground_height()
	if city._ground_terrain.vertices!=fresh._ground_terrain.vertices or network_city._ground_terrain.vertices!=fresh._ground_terrain.vertices: failures.append("stage pipeline height differs from complete State preparation")
	if city._road_heights.profiles!=fresh._road_heights.profiles or network_city._road_heights.profiles!=fresh._road_heights.profiles: failures.append("stage pipeline road profiles differ from fresh State")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out.get_base_dir()))
	var result := {"ok":failures.is_empty(),"rows":rows,"failures":failures,"scope":"one CPU timing per stage; full height and road-profile parity with fresh State, no audio or render timing"}
	FileAccess.open(out,FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("GROUND_STAGES ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
