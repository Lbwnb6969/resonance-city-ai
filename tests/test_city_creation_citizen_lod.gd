extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _life(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func _run()->void:
	var original:=State.new();original.initialize();var city:=State.new();city.restore(original.snapshot())
	var reference:=_life(original);var scalar:=_life(city)
	var camera:=Camera3D.new();root.add_child(camera);camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=9;camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30));camera.current=true;scalar.view_camera=camera
	var resident:Dictionary=scalar.residents[0];var initial:Vector3=resident.node.position
	for i in range(20):reference._process(.05);scalar._process(.05)
	_check(resident.has("offscreen_motion") and resident.node.position==initial and scalar.citizen_position(resident).distance_to(initial)>.1,"hidden citizen advances scalar route progress without mutating its scene transform")
	_check(not resident.node.get_child(0).visible,"offscreen body animation is hidden while logical travel continues")
	var match_routes:=true;var max_gap:=0.
	for i in range(2400):
		reference._process(.05);scalar._process(.05)
		for j in range(reference.residents.size()):
			var a:Dictionary=reference.residents[j];var b:Dictionary=scalar.residents[j]
			max_gap=maxf(max_gap,reference.citizen_position(a).distance_to(scalar.citizen_position(b)))
			match_routes=match_routes and a.destination_id==b.destination_id and a.dwell_id==b.dwell_id and a.service_pending==b.service_pending and absf(float(a.wait)-float(b.wait))<.001
	_check(match_routes and max_gap<.01,"two minutes of real scalar and full-detail trips preserve positions destinations dwelling and pending services")
	_check(original.life_progress==city.life_progress and original.bakery_supply==city.bakery_supply and int(city.life_progress.purchases)>0,"hidden residents buy actual baked bread and complete gatherings with exactly the same service ledgers")
	var checkpoint:Dictionary=scalar.checkpoint()
	_check(not resident.has("offscreen_motion") and resident.node.get_child(0).visible,"checkpoint publishes authoritative pose and keeps original resident node identity")
	var restored:=State.new();var snapshot:Dictionary=city.snapshot();snapshot.journey_checkpoint=checkpoint
	_check(restored.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true))).ok,"scalar simulation saves through existing journey schema without persisting rendering state")
	scalar._process(.2);var before:Vector3=scalar.citizen_position(resident)
	camera.position=before+Vector3(0,12,8);camera.look_at(before);scalar._process(.2)
	_check(not resident.has("offscreen_motion") and resident.node.get_child(0).visible and resident.node.position.distance_to(before)<.3,"camera returning to citizen publishes the current route pose and resumes full animation")
	camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30));scalar._process(.2)
	var current:Vector3=scalar.citizen_position(resident);var id:int=resident.node.get_instance_id();city.set_house_name(str(resident.home_id),"保留同行");scalar._sync()
	_check(resident.node.get_instance_id()==id and resident.node.position.distance_to(current)<.001,"editing synchronizes hidden position before rebuilding routes without teleporting or replacing the resident")
	_check(original.building_quality==city.building_quality,"incremental quality evaluation retains all actual earned building tiers")
	var river:=State.new();river.initialize();river.houses.clear();river.roads.clear();river.plants.clear()
	var points:Array[Vector2]=[Vector2(3,-3),Vector2(-8,-3),Vector2(-8,-12)];river.add_water(points,1.6,"channel")
	river.add_house(Vector2(-13,-9));var shop:Dictionary=river.add_house(Vector2(-3,-9));river.set_house_role(shop.house_id,"bakery")
	points=[Vector2(-13,-7.48),Vector2(-3,-7.48)];river.add_road(points)
	var hidden:=State.new();hidden.restore(river.snapshot());var full:=_life(river);var lod:=_life(hidden);lod.view_camera=camera
	camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30))
	var full_crossings:Array=[];var lod_crossings:Array=[]
	full.travel_callback=func(_actor:String,kind:String,_source:String,_point:Vector2)->void:full_crossings.append(kind)
	lod.travel_callback=func(_actor:String,kind:String,_source:String,_point:Vector2)->void:lod_crossings.append(kind)
	var river_gap:=0.
	for i in range(1600):
		full._process(.05);lod._process(.05)
		var a:Vector3=full.citizen_position(full.residents[0]);var b:Vector3=lod.citizen_position(lod.residents[0])
		river_gap=maxf(river_gap,Vector2(a.x,a.z).distance_to(Vector2(b.x,b.z)))
	_check(not full_crossings.is_empty() and full_crossings==lod_crossings,"hidden scalar legs retain every actual authored bridge crossing cue")
	_check(river_gap<.015 and river.life_progress==hidden.life_progress,"raised bridge approaches preserve real arrival and bread completion while hidden")
	print("CITIZEN_LOD ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"river_gap":river_gap,"river_progress":river.life_progress,"hidden_progress":hidden.life_progress,"max_position_gap":max_gap,"purchases":city.life_progress.purchases}));quit(0 if failures.is_empty() else 1)
