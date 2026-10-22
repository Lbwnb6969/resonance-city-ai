extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Changes = preload("res://scripts/world/city_creation_change_set.gd")
const Dirty = preload("res://scripts/visual/city_creation_road_dirty_cache.gd")
class Context extends Node3D:
	var state: RefCounted
	var road_join_signatures: Dictionary = {}
var checks := 0
var failures: Array[String] = []
func check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label); push_error(label)
func _initialize() -> void:
	var context := Context.new()
	var city := State.new(); city.initialize_empty(); context.state = city
	city.roads.assign([{ "id":"r1","points":[[-30.,-10.],[-20.,-10.]],"width":1. },{"id":"r2","points":[[15.,10.],[25.,10.]],"width":1.},{"id":"r3","points":[[-18.,-8.],[-15.,-8.]],"width":1.}])
	context.road_join_signatures = {"r1":[1],"r2":[2],"r3":[3]}
	var previous := Changes.snapshot(city)
	city.roads[0].points = [[-29.,-10.],[-17.,-10.]]
	var result := Dirty.invalidate(context,Changes.diff(previous,Changes.snapshot(city)))
	check(result.invalidated.has("r1") and result.invalidated.has("r3"),"changed road and neighboring join signatures inside four meters are invalidated")
	check(context.road_join_signatures == {"r2":[2]} and result.retained == 1,"a distant independent street retains its exact cached join signature")
	context.road_join_signatures = {"r1":[1],"r2":[2],"r3":[3]}
	previous = Changes.snapshot(city); city.roads.remove_at(0)
	Dirty.invalidate(context,Changes.diff(previous,Changes.snapshot(city)))
	check(context.road_join_signatures == {"r2":[2]},"deleted roads invalidate their old neighborhood without clearing distant joins")
	var before := context.road_join_signatures.duplicate(true)
	Dirty.invalidate(context,{"bounds":[]})
	check(context.road_join_signatures == before,"unrelated changes retain existing junction cache data")
	var wing:Rect2 = Changes._bounds("houses",{"origin":[0.,0.],"cells":[{"x":8,"z":0,"level":0}]})
	check(wing.has_point(Vector2(14.4,0)),"a long ground-floor wing contributes its actual dirty support beyond the house origin")
	context.free()
	print("ROAD_DIRTY_CACHE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
