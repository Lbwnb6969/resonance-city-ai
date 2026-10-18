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
	var held_position:Vector3=resident.node.position
	city.prepare_ground_height();var difference:=0.;var unchanged:=true;var index:=0
	for x:int in range(-40,41,2):
		for z:int in range(-40,41,2):
			var height:float=snapshot.street_height(Vector2(x,z));unchanged=unchanged and height==published[index];index+=1
			difference=maxf(difference,absf(height-city.street_height(Vector2(x,z))))
	_check(unchanged and difference>.001 and snapshot.waters==original.waters,"later live preparation changes live heights while preserving every frozen height and water record exactly")
	if pending:
		var deadline:=Time.get_ticks_msec()+30000
		while life._budget_ready_network==null and Time.get_ticks_msec()<deadline:
			life.poll_budget_sync(false);await process_frame
		var ready:RefCounted=life._budget_ready_network;var exact_heights:=ready!=null
		if ready!=null:
			for actor:Dictionary in life.residents:
				var at:=Vector2(actor.node.position.x,actor.node.position.z)
				exact_heights=exact_heights and ready.prepared_street_heights.has(at) and ready.prepared_street_heights[at]==city.street_height(at)
		_check(exact_heights,"joined worker prepares every actual held resident's exact original protected street height")
		_check(snapshot==life._published_surface and resident.node.position==held_position,"held worker preparation leaves the published height reader and real actor posture unchanged")
		if ready!=null:
			var stop_bytes:=var_to_bytes(ready.prepared_home_stops)
			_check(life.commit_budget_sync() and life.budget_commit_stats.prepared_height_hits==life.residents.size() and life.budget_commit_stats.prepared_stop_hits==life.residents.size(),"actual publication adopts every prepared household stop and exact actor height without cold queries")
			life.residents[0].stops.append("h999999")
			_check(var_to_bytes(ready.prepared_home_stops)==stop_bytes,"mutable live household itineraries never poison the prepared stop table")
			_check(city.add_terrain_stroke(stroke,"raise",2.,.2).ok and life.begin_budget_sync(),"second actual sculpt starts a new private routing generation")
			deadline=Time.get_ticks_msec()+30000
			while life._budget_ready_network==null and Time.get_ticks_msec()<deadline:
				life.poll_budget_sync(false);await process_frame
			var network_id:=life._network.get_instance_id();var generation_before:int=life._budget_generation;var revision_before:int=city.revision
			city.roads[0].points[0][0]+=.125
			_check(not life.commit_budget_sync() and city.revision==revision_before and life._network.get_instance_id()==network_id and life._budget_generation>generation_before,"exact captured-geometry validation rejects even a direct road mutation without a revision bump")
	if pending:life.cancel_budget_sync()
	life.queue_free();await process_frame;print("PUBLISHED_STREET_SURFACE ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"changed_height":difference}));quit(0 if failures.is_empty() else 1)
