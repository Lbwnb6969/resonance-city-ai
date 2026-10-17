extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _stage(renderer:Node3D,commit:bool)->Dictionary:
	var deadline:=Time.get_ticks_msec()+60000
	var report:Dictionary={}
	while Time.get_ticks_msec()<deadline:
		report=renderer.poll_budget_rebuild(3.5,commit)
		if (not commit and report.get("ready",false)) or not report.pending:break
		await process_frame
	return report
func _run()->void:
	Engine.max_fps=180
	var city:=State.new();city.initialize();var renderer:=Renderer.new();root.add_child(renderer);renderer.setup(city)
	var baseline:Dictionary=renderer.budget_rebuild._published_snapshot.duplicate(true)
	var identities:Dictionary={}
	for id:String in renderer.house_roots:identities[id]=renderer.house_roots[id].get_instance_id()
	var water_rid:=renderer.water_field.texture.get_rid();var water_bytes:PackedByteArray=renderer.water_field.image.get_data()
	var points:Array[Vector2]=[Vector2(27,25)]
	_check(city.add_terrain_stroke(points,"raise",2.,.65).ok,"first actual brush edits distant terrain")
	renderer.request_budget_rebuild()
	var report:Dictionary=await _stage(renderer,false)
	_check(report.get("ready",false) and report.stats.change_labels==["terrain"] and report.stats.change_counts=={"terrain":1},"first edit labels only its actual terrain stroke against the visible initial city")
	_check(renderer.budget_rebuild._published_snapshot==baseline,"held preparation does not advance the published baseline")
	renderer.cancel_budget_rebuild()
	_check(renderer.budget_rebuild._published_snapshot==baseline,"cancelled staging retains the original published baseline")
	renderer.request_budget_rebuild();report=await _stage(renderer,true)
	_check(report.get("committed",false) and renderer.rebuild_stats.houses_changed==0 and renderer.rebuild_stats.roads_changed==0,"reissued brush publishes without rebuilding unrelated structures")
	var same:=true
	for id:String in identities:same=same and renderer.house_roots[id].get_instance_id()==identities[id]
	_check(same and renderer.water_field.texture.get_rid()==water_rid and renderer.water_field.image.get_data()==water_bytes,"untouched picking roots and water field remain identical")
	_check(city.undo().ok,"actual brush undo succeeds")
	renderer.request_budget_rebuild();report=await _stage(renderer,true)
	_check(report.get("committed",false) and report.stats.change_labels==["terrain"] and renderer.budget_rebuild._published_snapshot.terrain==baseline.terrain,"undo compares against the last published brush and restores the exact original authored terrain")
	print("FIRST_LOCAL_EDIT ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"last_stats":report.stats}));renderer.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
