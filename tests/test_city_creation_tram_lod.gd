extends SceneTree
const Fixture=preload("res://tests/test_city_creation_tram.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _life(city: RefCounted)->Node3D:
	var result:=Life.new();root.add_child(result);result.set_process(false);result.setup(city);return result
func _run()->void:
	var original:=Fixture.fixture();original.set_house_role("h2","bakery")
	var initial_purchases: int=original.life_progress.purchases
	var city:=State.new();city.restore(original.snapshot())
	var full:=_life(original);var hidden:=_life(city)
	var camera:=Camera3D.new();root.add_child(camera);camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=9.;camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30));camera.current=true;hidden.view_camera=camera
	for life: Node3D in [full,hidden]:
		for person: Dictionary in life.residents:person.wait=0.
	var max_gap:=0.;var matching:=true;var deferred_with_tram:=false;var frozen_transform:=false
	var sampled: Dictionary={};var node_at:=Vector3.ZERO;var logical_at:=Vector3.ZERO
	for tick in range(2400):
		full._process(.05);hidden._process(.05)
		for i in range(full.residents.size()):
			var a: Dictionary=full.residents[i];var b: Dictionary=hidden.residents[i]
			max_gap=maxf(max_gap,full.citizen_position(a).distance_to(hidden.citizen_position(b)))
			matching=matching and a.destination_id==b.destination_id and a.dwell_id==b.dwell_id and a.service_pending==b.service_pending and absf(float(a.wait)-float(b.wait))<.001
			var motion: RefCounted=b.get("offscreen_motion")
			if motion!=null and motion.deferred and not hidden.tram.cars.is_empty():
				deferred_with_tram=true
				if sampled.is_empty():sampled=b;node_at=b.node.position;logical_at=hidden.citizen_position(b)
				elif b==sampled and b.node.position==node_at and hidden.citizen_position(b).distance_to(logical_at)>.15:frozen_transform=true
	_check(deferred_with_tram and frozen_transform,"an actual active tram does not disable scheduled hidden walking or force scene-transform writes")
	_check(matching and max_gap<.015,"two minutes of scheduled and fully visible tram-city life preserve routes, waits, service states and current logical positions")
	_check(original.life_progress==city.life_progress and original.bakery_supply==city.bakery_supply and int(city.life_progress.purchases)>initial_purchases,"actual bread and gathering ledgers agree exactly once across simulation detail levels")
	_check(hidden.citizen_lod_stats.scheduled_steps>0,"hidden long legs really use scheduled updates rather than just hiding the mesh")
	var person: Dictionary={}
	for candidate: Dictionary in hidden.residents:
		if candidate.has("offscreen_motion") and candidate.offscreen_motion.deferred:person=candidate;break
	_check(not person.is_empty(),"a sampled hidden actor is available for return-to-view validation")
	if not person.is_empty():
		var at: Vector3=hidden.citizen_position(person);var identity: int=person.node.get_instance_id()
		camera.position=at+Vector3(0,12,8);camera.look_at(at)
		for i in range(hidden.residents.size()/16+2):hidden._process(.001)
		_check(not person.has("offscreen_motion") and person.node.get_child(0).visible and person.node.get_instance_id()==identity and person.node.position.distance_to(at)<.05,"returning camera publishes current sampled position continuously on the original actor")
		camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30))
		for i in range(20):hidden._process(.01)
		at=hidden.citizen_position(person)
		city.set_house_name(str(person.home_id),"调度后的同行");hidden._sync()
		_check(person.node.get_instance_id()==identity and person.node.position.distance_to(at)<.002,"editing settles sampled position before route publication without teleport or actor replacement")
	var saved: Dictionary=city.snapshot();saved.journey_checkpoint=hidden.checkpoint()
	var loaded:=State.new()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"scheduled residents save through existing journey schema without runtime clocks")
	# Exercise the eligible branch too: align an actual service car, then let
	# real production invitations board, ride and alight on the hidden scene.
	var ride_city:=Fixture.fixture();var ride:=_life(ride_city);ride.view_camera=camera
	var initial_concerts: int=ride_city.life_progress.concerts
	var station: String=ride._network._key(Vector2(-16,0))
	for i in range(1000):
		var car: Dictionary=ride.tram.cars[0]
		if car.key==station and float(car.wait)>.1:break
		ride.tram.tick(.05)
	var invitation: Dictionary=ride.invite_concert("h4");var boarded:=false;var moved:=false;var previous:=Vector3.ZERO
	for i in range(2200):
		ride._process(.05)
		var ticket: Dictionary=ride.tram.tickets.get("h1",{})
		if ticket.get("state","")=="onboard":
			var at: Vector3=ticket.resident.node.position
			if boarded and previous.distance_to(at)>.01:moved=true
			boarded=true;previous=at
		if ride.tram.completed>0:break
	_check(invitation.ok and boarded and moved and ride.tram.completed==1,"an eligible offscreen listener still boards, follows the moving car and alights exactly once")
	_check(int(ride_city.life_progress.concerts)==initial_concerts,"hidden transport cannot award the twenty-four-second concert early")
	print("TRAM_LOD ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"max_gap":max_gap,"scheduled":hidden.citizen_lod_stats.scheduled_steps,"boarded":ride.tram.boarded,"completed":ride.tram.completed}));quit(0 if failures.is_empty() else 1)
