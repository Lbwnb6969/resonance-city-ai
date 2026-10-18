extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _values(renderer:Node3D)->PackedByteArray:
	var rows:Array=[]
	for field:String in renderer.budget_rebuild.ROAD_FIELDS+renderer.budget_rebuild.VEGETATION_FIELDS+["house_fingerprints","road_fingerprints"]:rows.append(renderer.get(field))
	return var_to_bytes(rows)
func _wait(renderer:Node3D,commit:bool)->Dictionary:
	var deadline:=Time.get_ticks_msec()+60000;var report:Dictionary={}
	while Time.get_ticks_msec()<deadline:
		report=renderer.poll_budget_rebuild(3.5,commit)
		if report.get("ready",false) or not report.pending:break
		await process_frame
	return report
func _run()->void:
	Engine.max_fps=180;var city:=State.new();city.initialize();var renderer:=Renderer.new();root.add_child(renderer);renderer.setup(city)
	var published:Dictionary=renderer.budget_rebuild._published_snapshot.duplicate(true);var before:=_values(renderer)
	var points:Array[Vector2]=[Vector2(-16,0),Vector2(-16,7)]
	_check(city.add_road(points).ok,"actual new street changes layout dependencies")
	renderer.request_budget_rebuild();var report:Dictionary=await _wait(renderer,false)
	_check(report.get("ready",false) and _values(renderer)==before,"private topology rebuild leaves every published road/vegetation geometry record byte-identical")
	_check(renderer.budget_rebuild._published_snapshot==published,"held worker does not advance the actual published baseline")
	var staged:Node3D=renderer.budget_rebuild.staging
	_check(is_same(staged.state.houses[0],staged.get_meta("snapshot").houses[0]) and not is_same(staged.state.houses[0],city.houses[0]),"worker and immutable transaction baseline share one detached authored capture, never live city rows")
	var input:Dictionary=staged.get_meta("snapshot").duplicate(true)
	_check(input.houses==city.houses and input.roads==city.roads,"all captured authored geometry remains unchanged throughout real preparation")
	report=renderer.poll_budget_rebuild(3.5,true)
	_check(report.get("committed",false) and renderer.budget_rebuild._published_snapshot==input,"publication adopts the exact completed transaction baseline")
	var baseline:Dictionary=renderer.budget_rebuild._published_snapshot
	_check(city.undo().ok,"actual street undo")
	renderer.request_budget_rebuild();await _wait(renderer,false);renderer.cancel_budget_rebuild()
	_check(renderer.budget_rebuild._published_snapshot==baseline,"cancelled undo cannot mutate the shared published transaction snapshot")
	print("RENDERER_SEED_OWNERSHIP ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));renderer.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
