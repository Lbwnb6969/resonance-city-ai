extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
class CountingRenderer:
	extends "res://scripts/visual/city_creation_renderer.gd"
	var frontage_queries:=0
	func _frontage_signature(house: Dictionary)->Array:
		frontage_queries+=1
		return super._frontage_signature(house)
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
	var city:=State.new();city.initialize();var renderer:=CountingRenderer.new();root.add_child(renderer);renderer.setup(city);renderer.set_process(false);renderer.wildlife.set_process(false)
	# Visual-only tier fixtures exercise every production renderer branch;
	# earned-service and save legality are covered by the real Quality/Life tests.
	for tier in range(2,6):
		renderer.frontage_queries=0
		city.building_quality.h1={"level_tier":tier,"source_id":"h1","street":true,"amenity":true}
		renderer.quality_visual.flash(renderer,[{"house_id":"h1","from":tier-1,"to":tier}])
		_check(renderer.frontage_queries==0,"tier %d reuses published frontage and arcade inputs without querying the city"%tier)
		var warm:=_values(renderer.quality_visual.roots.h1)
		renderer.quality_visual.geometry_inputs.erase("h1");renderer.quality_visual.fingerprints.erase("h1")
		var only: Array[String]=["h1"];renderer.quality_visual.progress(renderer,only)
		_check(warm==_values(renderer.quality_visual.roots.h1),"tier %d cached output matches forced cold frontage/arcade geometry exactly"%tier)
		var features: Array=renderer.quality_visual.roots.h1.get_meta("features")
		_check(features.has("welcome_stones") and features.has("door_flowerpot") and features.has("warm_porch_lamp"),"tier %d retains actual welcome apron, pot and lamp"%tier)
		_check(features.has("flowerbox_shutters")==bool(tier>=3) and features.has("bronze_chime")==bool(tier>=3),"tier %d gates window boxes and chimes at third level"%tier)
		_check(features.has("golden_weather_vane")==bool(tier==5) and features.has("painted_rose_window")==bool(tier==5),"tier %d gates permanent gold vane and rose glazing at fifth level"%tier)
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
	_check(city.add_road([Vector2(-25,12),Vector2(-20,12)]).ok,"real edit changes the scene revision before worker publication")
	var generation: int=renderer.request_budget_rebuild();var deadline:=Time.get_ticks_msec()+30000
	while renderer.budget_rebuild.committed_generation<generation and Time.get_ticks_msec()<deadline:
		renderer.poll_budget_rebuild(3.5);await process_frame
	_check(renderer.budget_rebuild.committed_generation==generation,"actual worker and budget queue publish the edited geometry")
	var same:=true
	for house: Dictionary in city.houses:
		var id:=str(house.id)
		var prepared: int=renderer.quality_visual._geometry_signature(renderer,house)
		var cold:=hash([house,renderer._frontage_signature(house),renderer.ArcadePlan.for_house(city,house)])
		same=same and prepared==cold and renderer.quality_visual.geometry_inputs[id][0]==city.get_instance_id()
	_check(same,"worker geometry cache rebinds original city identity and matches independently recomputed inputs")
	_check(city.undo().ok,"real road edit can be undone")
	renderer.rebuild()
	var house: Dictionary=city.houses[0]
	_check(renderer.quality_visual._geometry_signature(renderer,house)==hash([house,renderer._frontage_signature(house),renderer.ArcadePlan.for_house(city,house)]),"undo rebuild refreshes cached original frontage and arcade geometry")
	renderer.free();print("TARGETED_QUALITY_VISUAL ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
