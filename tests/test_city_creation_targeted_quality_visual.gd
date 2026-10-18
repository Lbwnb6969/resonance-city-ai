extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const OLD="res://废弃/居民高度后台准备_前_2026-10-18_cc5e59b1/"
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _values(parent:Node)->Array:
	var result:Array=[]
	for child:Node in parent.get_children():
		var row:Array=[child.get_class()]
		if child is Node3D:row.append(child.transform)
		if child is MeshInstance3D:
			for surface in range(child.mesh.get_surface_count()):row.append(child.mesh.surface_get_arrays(surface))
		if child is MultiMeshInstance3D:row.append(child.multimesh.buffer)
		row.append(_values(child));result.append(row)
	return result
func _run()->void:
	var quality_script:=GDScript.new();quality_script.source_code=FileAccess.get_file_as_string(OLD+"city_creation_quality_visual.gd.txt")
	var craft_script:=GDScript.new();craft_script.source_code=FileAccess.get_file_as_string(OLD+"city_creation_craft.gd.txt")
	_check(quality_script.reload()==OK and craft_script.reload()==OK,"independent frozen quality and exhaustive craft-placement sources compile")
	var renderer_script:=GDScript.new();renderer_script.source_code=FileAccess.get_file_as_string("res://scripts/visual/city_creation_renderer.gd").replace("class_name CityCreationRenderer","").replace("var craft := Craft.new()","var craft:RefCounted=Craft.new()")
	_check(renderer_script.reload()==OK,"isolated comparison renderer allows both independently compiled craft implementations")
	var city:=State.new();city.initialize();var renderer:Node3D=renderer_script.new();root.add_child(renderer);renderer.setup(city);renderer.set_process(false);renderer.wildlife.set_process(false)
	var old:RefCounted=quality_script.new();old.setup(renderer)
	var original_craft:RefCounted=craft_script.new();original_craft.setup(renderer);var current_craft:RefCounted=renderer.craft
	# Visual-only tier fixtures exercise every production renderer branch;
	# earned-service and save legality are covered by the real Quality/Life tests.
	for tier in range(2,6):
		city.building_quality.h1={"level_tier":tier,"source_id":"h1","street":true,"amenity":true}
		renderer.quality_visual.flash(renderer,[{"house_id":"h1","from":tier-1,"to":tier}])
		renderer.craft=original_craft;old.progress(renderer);renderer.craft=current_craft
		_check(_values(renderer.quality_visual.roots.h1)==_values(old.roots.h1),"tier %d keeps exact original surfaces, normals, transforms and complete decor"%tier)
		_check(renderer.quality_visual.roots.h1.get_meta("features")==old.roots.h1.get_meta("features"),"tier %d retains every original visible feature"%tier)
	city.building_quality.h3={"level_tier":2,"source_id":"h3","street":true,"amenity":false};renderer.quality_visual.progress(renderer)
	var unrelated:int=renderer.quality_visual.roots.h3.get_instance_id();var unrelated_values:=_values(renderer.quality_visual.roots.h3)
	city.building_quality.h1.level_tier=4;renderer.quality_visual.flash(renderer,[{"house_id":"h1","from":3,"to":4}])
	_check(renderer.quality_visual.roots.h3.get_instance_id()==unrelated and _values(renderer.quality_visual.roots.h3)==unrelated_values,"one actual upgrade leaves the unrelated household root and geometry unchanged")
	renderer.quality_visual.flash(renderer,[{"house_id":"h999999","from":1,"to":2}])
	_check(renderer.quality_visual.roots.has("h1") and renderer.quality_visual.roots.h3.get_instance_id()==unrelated,"a removed event target never clears unrelated quality roots")
	city.building_quality.clear();renderer.quality_visual.progress(renderer)
	_check(renderer.quality_visual.roots.is_empty(),"clearing real quality records still removes old visual roots through the full refresh API")
	city.building_quality.h1={"level_tier":2,"source_id":"h1","street":true,"amenity":false};renderer.quality_visual.flash(renderer,[])
	_check(renderer.quality_visual.roots.has("h1"),"empty-event flash retains the original full-refresh API behavior")
	renderer.free();print("TARGETED_QUALITY_VISUAL ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
