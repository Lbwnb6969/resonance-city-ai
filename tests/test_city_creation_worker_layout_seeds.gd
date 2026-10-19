extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Changes=preload("res://scripts/world/city_creation_change_set.gd")
const Junctions=preload("res://scripts/world/city_creation_junctions.gd")
const Cafes=preload("res://scripts/visual/city_creation_cafe.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=State.new();city.initialize();assert(city.set_house_role("h4","garden_cafe").ok)
	var town:=Renderer.new();root.add_child(town);town.setup(city)
	var published:=var_to_bytes([city._frontage_cache,city._junctions._input,city._junctions._extras,city._junctions._bins])
	var old_front:Dictionary=city._frontage_cache.h1
	_check(city.add_cell("h1",0,0,1).ok,"actual upper floor edit succeeds")
	var worker:Node3D=town.budget_rebuild._context(town,Changes.snapshot(city))
	_check(not is_same(worker.state._frontage_cache,city._frontage_cache) and is_same(worker.state._frontage_cache.h1,old_front),"worker owns the frontage map and retains immutable published records")
	_check(worker.state.house_entrances("h1")==city.house_entrances("h1") and is_same(worker.state._frontage_cache.h1,old_front),"upper floor preserves original real entrances without rebuilding them")
	var junctions:RefCounted=worker.state.road_junctions()
	_check(not junctions.stats.has("graph_ms"),"unchanged worker directly retains prepared road mouths")
	var prepared:Dictionary=worker.cafes.prepare(worker)
	_check(prepared.changes.is_empty() and worker.cafes.layout_api.stats.context_queries==0,"upper floor does not redo cafe placement or visibility routing")
	var points:Array[Vector2]=[Vector2(-16,-6),Vector2(-9.15,-6)]
	_check(worker.state.add_road(points).ok,"private worker edit genuinely changes a west-facing porch")
	var active:=false
	for entry:Dictionary in worker.state.house_entrances("h1"):
		if entry.active and entry.side==Vector2i.LEFT:active=true
	_check(active and not is_same(worker.state._frontage_cache.h1,old_front),"changed porch replaces only the worker's cached frontage")
	junctions=worker.state.road_junctions()
	var fresh:=Junctions.new();fresh.prepare(worker.state)
	_check(junctions._extras==fresh._extras and junctions._signatures==fresh._signatures and junctions._bins==fresh._bins,"changed seeded junctions match every cold polygon signature and query bucket")
	var changed:Dictionary=worker.cafes.prepare(worker)
	var cold:=Cafes.new();cold.layout_api=cold.Layout.create_context();var expected:Dictionary=cold.prepare(worker)
	var same:=true
	for id:String in expected.changes:
		if changed.changes.has(id):same=same and changed.changes[id]==expected.changes[id]
		else:same=same and worker.cafes.fingerprints.get(id,-1)==expected.changes[id].fingerprint
	_check(same and worker.cafes.placement_inputs==cold.placement_inputs,"changed seeded cafes match cold actual furniture flower and fountain plans")
	_check(published==var_to_bytes([city._frontage_cache,city._junctions._input,city._junctions._extras,city._junctions._bins]),"worker changes preserve every published frontage mouth and query byte")
	town.budget_rebuild._dispose_context(worker);town.queue_free();await process_frame
	print("WORKER_LAYOUT_SEEDS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
