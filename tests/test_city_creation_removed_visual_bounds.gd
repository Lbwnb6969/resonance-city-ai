extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Changes=preload("res://scripts/world/city_creation_change_set.gd")
const Budget=preload("res://scripts/visual/city_creation_budget_rebuild.gd")
class Context extends Node3D:
	const VEGETATION_BLOCK_SIZE:=8.
	const EDITABLE_WORLD_RECT:=Rect2(-48,-48,96,96)
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var context:=Context.new();var budget:=Budget.new();var city:=State.new();city.initialize_free()
	check(city.add_road([Vector2(-30,-6),Vector2(-25,-6)] as Array[Vector2],"path","none").ok,"real negative-coordinate road")
	var previous:=Changes.snapshot(city)
	check(city.remove_road(str(city.roads[0].id)).ok,"real road deletion")
	var changes:=Changes.diff(previous,Changes.snapshot(city))
	var blocks:=budget._changed_visual_blocks(context,[],[],[],[],changes)
	check(blocks.has(Vector2i(-4,-1)) and blocks.has(Vector2i(-3,-1)),"removed road old support reaches its actual meadow blocks")
	check(not blocks.has(Vector2i(3,3)) and blocks.size()<36,"distant blocks remain outside local invalidation")
	check(city.undo().ok,"public deletion undo")
	check(city.roads==previous.roads,"undo restores original road record")
	for domain:String in ["houses","waters"]:
		var old:=Rect2(-26,-14,3,3)
		blocks=budget._changed_visual_blocks(context,[],[],[],[],{"bounds":[{"domain":domain,"old":old,"new":Rect2()}]})
		check(blocks.has(Vector2i(-4,-2)),"removed "+domain+" also retain old footprint support")
	check(budget._changed_visual_blocks(context,[],[],[],[],{"bounds":[]}).is_empty(),"unchanged world adds no dirty block")
	context.free();print("REMOVED_VISUAL_BOUNDS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
