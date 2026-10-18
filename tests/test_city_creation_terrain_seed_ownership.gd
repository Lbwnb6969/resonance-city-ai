extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_large_town_fixture.gd")
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _capture(city:RefCounted)->PackedByteArray:
	return var_to_bytes([city.snapshot(),city._ground_terrain.vertices,city._ground_terrain.raw_vertices,city._ground_terrain._previous_waters,city._ground_terrain._previous_strokes,city._ground_terrain._previous_protection,city._terrain_protection._house_pads,city._terrain_protection._court_pads])
func _run()->void:
	var city:=Fixture.build(300,true);city.prepare_ground_height();var before:=_capture(city)
	var worker:=State.new();worker.restore(city.snapshot())
	worker._ground_terrain.copy_cache_from(city._ground_terrain)
	worker._terrain_protection.copy_cache_from(city._terrain_protection)
	worker._road_heights.copy_cache_from(city._road_heights)
	_check(is_same(worker._ground_terrain._previous_protection,city._ground_terrain._previous_protection),"worker starts from the identical immutable protection history without deep cloning it")
	_check(is_same(worker._terrain_protection._house_pads,city._terrain_protection._house_pads),"worker shares immutable layout records while keeping its own planner")
	var points:Array[Vector2]=[Vector2(-25,29)]
	_check(worker.add_terrain_stroke(points,"raise",1.,1.,2).ok,"actual private sculpt changes worker state")
	var thread:=Thread.new();thread.start(worker.prepare_ground_height)
	while thread.is_alive():await process_frame
	thread.wait_to_finish()
	_check(_capture(city)==before,"actual threaded field preparation preserves every published grid, authored record, historical pad and layout byte")
	var cold:=State.new();cold.restore(worker.snapshot());cold.prepare_ground_height()
	_check(worker._ground_terrain.vertices==cold._ground_terrain.vertices and worker._ground_terrain.raw_vertices==cold._ground_terrain.raw_vertices,"private incremental height field exactly matches independent full recomputation")
	var frozen:=_capture(worker)
	_check(city.set_house_role("h2","workshop").ok,"actual owning-city role edit invalidates activity pad layout")
	city.prepare_ground_height()
	_check(_capture(worker)==frozen,"later owner layout replacement cannot modify completed worker histories or grids")
	_check(not is_same(worker._terrain_protection._house_pads,city._terrain_protection._house_pads),"changed owner geometry publishes a new pad array instead of editing shared records")
	print("TERRAIN_SEED_OWNERSHIP ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
