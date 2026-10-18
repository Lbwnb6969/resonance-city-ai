extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const ClockFixture=preload("res://tests/test_city_creation_clockmaker.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _life(city: RefCounted)->Node3D:
	var result:=Life.new();root.add_child(result);result.set_process(false);result.setup(city);return result
func _run()->void:
	var original:=State.new();original.initialize();original.set_house_role("h3","workshop")
	var hidden:=State.new();check(hidden.restore(original.snapshot()).ok,"actual bakery and workshop city restores")
	var full:=_life(original);var lod:=_life(hidden)
	var camera:=Camera3D.new();root.add_child(camera);camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=8.;camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30));lod.view_camera=camera
	var same:=true;var max_gap:=0.;var max_work:=0.;var slept_with_cargo:=false;var sleeping_bake:=false
	for i in range(2400):
		if i==200:
			original.grant_resonance_afterglow(["h2","h3"],3.25);hidden.grant_resonance_afterglow(["h2","h3"],3.25)
		if i in [400,450]:
			original.set_bakery_open("h2",i==450);hidden.set_bakery_open("h2",i==450)
		if i in [800,850]:
			original.set_workshop_open("h3",i==850);hidden.set_workshop_open("h3",i==850)
		full._process(.05);lod._process(.05)
		for pair: Array in [[full.bakery.workers,lod.bakery.workers],[full.workshop.workers,lod.workshop.workers]]:
			for j in range(pair[0].size()):
				var a: Dictionary=pair[0][j];var b: Dictionary=pair[1][j]
				max_gap=maxf(max_gap,a.node.position.distance_to(lod.worker_lod.position(b)))
				max_work=maxf(max_work,absf(float(a.elapsed)-lod.worker_lod.elapsed(b)))
				same=same and a.phase==b.phase and a.home_id==b.home_id and a.get("target_id","")==b.get("target_id","")
				if b.has("carry") and b.carry.visible and b.has("worker_motion"):slept_with_cargo=true
				if str(b.phase)=="baking" and b.has("worker_work"):sleeping_bake=true
	check(lod.worker_lod.stats.movement_sleeps>0 and lod.worker_lod.stats.work_sleeps>0 and slept_with_cargo and sleeping_bake,"real offscreen commutes, reserved cargo and attended baking all sleep between deadlines")
	check(same and max_gap<.02 and max_work<.002,"two minutes of work, glow expiry and oven pause retain original phases, progress and physical routes")
	check(original.bakery_supply==hidden.bakery_supply and original.workshop_supply==hidden.workshop_supply and original.house_improvements==hidden.house_improvements and int(hidden.workshop_status("h3").delivered)>0,"actual bread, reserved stock and installed upgrades settle exactly once with matching ledgers")
	var worker: Dictionary=lod.workshop.workers[0];var identity: int=worker.node.get_instance_id();var before: Vector3=lod.worker_lod.position(worker)
	camera.position=before+Vector3(0,12,8);camera.look_at(before);lod._process(.01)
	check(not worker.has("worker_motion") and not worker.has("worker_work") and worker.node.get_child(0).visible and worker.node.position.distance_to(before)<.03,"camera return publishes current worker pose and normalized progress without replacing its node")
	camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30));lod._process(.05)
	var current: Vector3=lod.worker_lod.position(worker);hidden.set_house_name(str(worker.home_id),"顺路同行");lod._sync()
	check(worker.node.get_instance_id()==identity and worker.node.position.distance_to(current)<.001,"edit flushes worker scalar pose before route inputs can change")
	var checkpoint: Dictionary=lod.checkpoint();var snapshot: Dictionary=hidden.snapshot();snapshot.journey_checkpoint=checkpoint
	var restored:=State.new();var result: Dictionary=restored.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true)))
	check(result.ok,"hidden work checkpoints through the existing journey schema")
	var resumed:=_life(restored)
	check(resumed.bakery.workers.size()==lod.bakery.workers.size() and resumed.workshop.workers.size()==lod.workshop.workers.size(),"original worker assignments and reservations survive loading")
	var river:=State.new();river.initialize();river.houses.clear();river.roads.clear();river.plants.clear()
	var points: Array[Vector2]=[Vector2(3,-3),Vector2(-8,-3),Vector2(-8,-12)];river.add_water(points,1.6,"channel")
	river.add_house(Vector2(-13,-9));var shop: Dictionary=river.add_house(Vector2(-3,-9));river.set_house_role(shop.house_id,"bakery")
	points=[Vector2(-13,-7.48),Vector2(-3,-7.48)];river.add_road(points)
	var saved_river:=State.new();saved_river.restore(river.snapshot());var bridge_full:=_life(river);var bridge_lod:=_life(saved_river);bridge_lod.view_camera=camera
	var full_cues: Array=[];var lod_cues: Array=[]
	bridge_full.travel_callback=func(actor: String,kind: String,_id: String,_at: Vector2)->void:
		if actor.begins_with("baker/"):full_cues.append(kind)
	bridge_lod.travel_callback=func(actor: String,kind: String,_id: String,_at: Vector2)->void:
		if actor.begins_with("baker/"):lod_cues.append(kind)
	var bridge_gap:=0.;var bridge_planar_gap:=0.;var sensor_sleep:=false
	for i in range(1600):
		bridge_full._process(.05);bridge_lod._process(.05)
		var a: Dictionary=bridge_full.bakery.workers[0];var b: Dictionary=bridge_lod.bakery.workers[0]
		var point: Vector3=bridge_lod.worker_lod.position(b)
		bridge_gap=maxf(bridge_gap,a.node.position.distance_to(point))
		bridge_planar_gap=maxf(bridge_planar_gap,Vector2(a.node.position.x,a.node.position.z).distance_to(Vector2(point.x,point.z)))
		var motion: RefCounted=b.get("worker_motion")
		if motion!=null and motion.deferred and motion.watch_travel:sensor_sleep=true
	check(sensor_sleep and not full_cues.is_empty() and full_cues==lod_cues,"hidden baker crosses an actual raised bridge with the same exact-once music cues")
	check(bridge_planar_gap<.02 and river.bakery_supply==saved_river.bakery_supply,"raised approaches preserve physical routes and conserved baked stock")
	var baker: Dictionary=bridge_lod.bakery.workers[0]
	var shown: Vector3=bridge_lod.worker_lod.position(baker);camera.position=shown+Vector3(0,12,8);camera.look_at(shown);bridge_lod._process(.01)
	check(not baker.has("worker_motion") and absf(float(baker.node.position.y)-saved_river.street_height(Vector2(baker.node.position.x,baker.node.position.z))-.10)<.00001,"camera return resamples exact raised road height before publishing the worker")
	camera.position=Vector3(35,30,35);camera.look_at(Vector3(35,0,30));bridge_lod._process(.05)
	var at: Vector3=bridge_lod.worker_lod.position(baker)
	saved_river.roads.clear();saved_river.revision+=1;bridge_lod._process(.01)
	check(baker.phase=="paused" and baker.node.position.distance_to(at)<.001,"breaking the hidden commute flushes current position before pausing attendance")
	bridge_full.free();bridge_lod.free()
	for role: String in ["atelier","clockmaker"]:
		var craft_city: RefCounted=ClockFixture.fixture()
		check(craft_city.set_house_role("h2",role).ok,"earned-era city assigns actual "+role)
		var craft_copy:=State.new();check(craft_copy.restore(craft_city.snapshot()).ok,"typed craft snapshot restores: "+role)
		var detail:=_life(craft_city);var reduced:=_life(craft_copy);reduced.view_camera=camera
		for i in range(2400):detail._process(.05);reduced._process(.05)
		check(craft_city.workshop_supply==craft_copy.workshop_supply and craft_city.house_culture==craft_copy.house_culture and craft_city.house_clockwork==craft_copy.house_clockwork and int(craft_copy.workshop_status("h2").delivered)>0,"two minutes of real typed production/reservation/installation retain exact ledgers: "+role)
		check(int(reduced.worker_lod.stats.work_sleeps)>0 and int(reduced.worker_lod.stats.movement_sleeps)>0,"typed artisan actually uses hidden movement and work deadlines: "+role)
		detail.free();reduced.free()
	print("WORKER_LOD ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"max_gap":max_gap,"max_work_gap":max_work,"bridge_gap":bridge_gap,"bridge_planar_gap":bridge_planar_gap,"bridge_cues":lod_cues,"stats":lod.worker_lod.stats,"failures":failures,"bread":hidden.bakery_supply,"craft":hidden.workshop_supply}))
	resumed.free();lod.free();full.free();camera.free();quit(0 if failures.is_empty() else 1)
