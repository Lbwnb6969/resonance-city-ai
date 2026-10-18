extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Motion=preload("res://scripts/world/city_creation_citizen_motion.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	Engine.max_fps=180;var city:=State.new();city.initialize();var life:=Life.new();root.add_child(life);life.setup(city);life.set_process(false)
	var snapshot:RefCounted=life._published_surface;var exact:=true;var published:Array[float]=[]
	for x:int in range(-40,41,2):
		for z:int in range(-40,41,2):
			var height:float=snapshot.street_height(Vector2(x,z));published.append(height);exact=exact and height==city.street_height(Vector2(x,z))
	_check(exact,"frozen published reader exactly matches actual street and ground heights across the complete editable canvas")
	var resident:Dictionary=life.residents[0];var point:Vector3=resident.node.position;var expected:float=snapshot.street_height(Vector2(point.x,point.z))+.1
	resident.offscreen_motion=Motion.new(point,resident.node.rotation.y)
	var original:Dictionary=city.snapshot();var stroke:Array[Vector2]=[Vector2(-8,-2)]
	_check(city.add_terrain_stroke(stroke,"raise",2.,.8).ok,"actual new sculpt invalidates live geometry")
	var generation:int=city._ground_terrain.raw_generation;var revision:int=city._ground_revision
	life.set_budget_hold(true);var pending:=life.begin_budget_sync()
	_check(city._ground_terrain.raw_generation==generation and city._ground_revision==revision,"flushing hidden actors starts preparation without synchronously rebuilding the edited live height field")
	_check(not resident.has("offscreen_motion") and is_equal_approx(resident.node.position.y,expected),"actual actor flush uses the previously published physical height")
	city.prepare_ground_height();var difference:=0.;var unchanged:=true;var index:=0
	for x:int in range(-40,41,2):
		for z:int in range(-40,41,2):
			var height:float=snapshot.street_height(Vector2(x,z));unchanged=unchanged and height==published[index];index+=1
			difference=maxf(difference,absf(height-city.street_height(Vector2(x,z))))
	_check(unchanged and difference>.001 and snapshot.waters==original.waters,"later live preparation changes live heights while preserving every frozen height and water record exactly")
	if pending:life.cancel_budget_sync()
	life.queue_free();await process_frame;print("PUBLISHED_STREET_SURFACE ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"changed_height":difference}));quit(0 if failures.is_empty() else 1)
