extends SceneTree
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _fixture() -> RefCounted:
	var city := State.new()
	city.initialize()
	var original: Array[Dictionary] = city.houses.duplicate(true)
	city.houses.clear()
	for index in range(3):
		var house: Dictionary = original[[0,1,3][index]].duplicate(true)
		house.origin = [-14.0 + index * 4.0,-2.0]
		house.cells = [house.cells[0].duplicate(true)]
		house.cells[0].x = 0
		house.cells[0].z = 0
		house.cells[0].level = 0
		city.houses.append(house)
	city.roads.assign([{"id":"r1","points":[[-16.0,0.0],[-4.0,0.0]],"width":1.25,"bridge":false,"source":"seed"}])
	city.plants.clear()
	city.revision += 1
	return city

func _life(city: RefCounted) -> Node3D:
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	return life

func _run() -> void:
	var city := _fixture()
	var life := _life(city)
	_check(life.bakery.workers.size() == 1 and life.residents.size() == 1,"one household supplies independent daily resident and baker")
	var worker: Dictionary = life.bakery.workers[0]
	var buyer: Dictionary = life.residents[0]
	_check(worker.home_id == buyer.home_id and worker.node != buyer.node,"baker is the second member, not another concert participant")
	for ignored in range(30): life._process(0.1)
	_check(int(city.bakery_status("h2").produced) == 0 and worker.phase == "walking","walking to work never makes bread")
	var walk_city := _fixture()
	walk_city.roads.clear()
	var walk_checkpoint: Dictionary = life.checkpoint()
	walk_checkpoint.bakery_workers[0].phase = "paused"
	walk_checkpoint.bakery_workers[0].resume_phase = "walking"
	walk_city.journey_checkpoint = walk_checkpoint
	var walk_resume := _life(walk_city)
	_check(walk_resume.bakery.workers.size() == 1,"stranded saved commute retains its second household member")
	if not walk_resume.bakery.workers.is_empty():
		var stranded: Dictionary = walk_resume.bakery.workers[0]
		walk_resume._process(12.0)
		_check(stranded.phase == "paused" and stranded.node.position == worker.node.position and int(walk_city.bakery_status("h2").produced) == 0,"stranded commute restores exact position and never invents oven arrival")
	walk_resume.free()
	_check(_to_phase(life,worker,"baking"),"baker reaches real oven along the street")
	life._process(5.9)
	_check(int(city.bakery_status("h2").produced) == 0 and life.purchases == 0,"oven needs full six seconds; empty shelf cannot count purchases")
	life._process(0.11)
	_check(int(city.bakery_status("h2").produced) == 1,"completed attended batch makes real bread")
	# The buyer may reach the end of its dwell on the next tick.
	for ignored in range(5): life._process(0.1)
	_check(int(city.bakery_status("h2").served) == 1 and life.purchases == 1 and int(city.bakery_status("h2").stock) == 0,"actual purchase consumes exactly one loaf")
	var node_id: int = worker.node.get_instance_id()
	var position: Vector3 = worker.node.position
	var elapsed := float(worker.elapsed)
	city.set_house_name("h1","面包师之家")
	life._sync()
	city.add_cell("h2",0,0,1,"room")
	life._sync()
	var planting: Array[Vector2] = [Vector2(-16,12)]
	city.add_vegetation_stroke(planting,"shrub",1.0)
	life._sync()
	_check(worker.node.get_instance_id() == node_id and worker.node.position == position and float(worker.elapsed) == elapsed,"rename, planting and upper floor retain worker identity and progress")
	_check(int(life.bakery_status("h2").batch_size) == 2 and int(life.bakery_status("h2").capacity) == 12,"room expansion raises actual batch and capacity")
	city.set_bakery_open("h2",false)
	life._process(2.0)
	_check(worker.node.get_instance_id() == node_id and float(worker.elapsed) == elapsed,"oven switch pauses exact progress without respawning")
	city.set_bakery_open("h2",true)
	# Keep consumers still to isolate oven capacity and elapsed evidence.
	life._sync()
	for resident: Dictionary in life.residents: resident.paused = true
	life._process(1.0)
	_check(is_equal_approx(float(worker.elapsed),elapsed+1.0),"reopening resumes retained bake time")
	city.produce_bread("h2",12-int(city.bakery_status("h2").stock))
	elapsed = float(worker.elapsed)
	life._process(20.0)
	_check(float(worker.elapsed) == elapsed and worker.phase == "baking","full shelf pauses oven without losing partial batch")
	city.serve_bread("h2")
	life._process(1.0)
	_check(float(worker.elapsed) == elapsed,"partial capacity cannot fit an entire two-loaf batch")
	city.serve_bread("h2")
	life._process(0.5)
	_check(is_equal_approx(float(worker.elapsed),elapsed+0.5),"enough room resumes batch")
	var roads: Array[Dictionary] = city.roads.duplicate(true)
	position = worker.node.position
	elapsed = float(worker.elapsed)
	var produced := int(city.bakery_status("h2").produced)
	city.roads.clear()
	city.revision += 1
	life._process(10.0)
	_check(worker.phase == "paused" and worker.node.position == position and float(worker.elapsed) == elapsed and int(city.bakery_status("h2").produced) == produced,"disconnected oven preserves worker and progress but produces nothing")
	_check(city.set_journey_checkpoint(life.checkpoint()).ok,"paused worker checkpoint validates")
	var disconnected_copy := _fixture()
	disconnected_copy.roads.clear()
	disconnected_copy.journey_checkpoint = city.journey_checkpoint.duplicate(true)
	var disconnected_life := _life(disconnected_copy)
	_check(disconnected_life.bakery.workers.size() == 1,"saved disconnected stationary worker is retained")
	if not disconnected_life.bakery.workers.is_empty():
		var stopped: Dictionary = disconnected_life.bakery.workers[0]
		disconnected_life._process(20.0)
		_check(stopped.phase == "paused" and stopped.node.position == position and is_equal_approx(float(stopped.elapsed),elapsed) and int(disconnected_copy.bakery_status("h2").produced) == 0,"reload preserves oven pause and never counts disconnected batch")
	disconnected_life.free()
	city.roads.assign(roads)
	city.revision += 1
	life._sync()
	_check(worker.phase == "baking" and worker.node.get_instance_id() == node_id and float(worker.elapsed) == elapsed,"restoring route resumes same stationed baker")
	for resident: Dictionary in life.residents: resident.paused = true
	# A saved batch resumes, and must not appear once on load plus once later.
	var checkpoint: Dictionary = life.checkpoint()
	_check(city.set_journey_checkpoint(checkpoint).ok,"worker checkpoint passes authoritative validator")
	var path := "user://creation_bakery_life_%d.json" % Time.get_ticks_usec()
	_check(city.save_city(path).ok,"supply and worker journey save")
	var loaded := State.new()
	_check(loaded.load_city(path).ok,"supply and worker journey load")
	var resumed := _life(loaded)
	var saved_worker: Dictionary = resumed.bakery.workers[0]
	_check(saved_worker.node.position == worker.node.position and saved_worker.phase == worker.phase and is_equal_approx(float(saved_worker.elapsed),elapsed),"saved oven dwelling resumes exact position and remaining time")
	_check(int(loaded.bakery_status("h2").produced) == produced,"loading never reissues previous batches")
	for resident: Dictionary in resumed.residents: resident.paused = true
	resumed._process(6.0-elapsed+0.01)
	_check(int(loaded.bakery_status("h2").produced) == produced+2,"remaining oven time issues one expanded batch")
	resumed._process(0.0)
	_check(int(loaded.bakery_status("h2").produced) == produced+2,"batch cannot repeat on zero tick")
	# Test the off-duty leg with room on shelves after the third actual batch.
	while int(loaded.bakery_status("h2").stock) > 0: loaded.serve_bread("h2")
	resumed._process(6.01)
	_check(saved_worker.phase == "returning" and int(saved_worker.batches) == 3,"three completed batches end shift and send baker home")
	_check(_to_phase(resumed,saved_worker,"resting"),"baker walks the real route home to rest")
	resumed._process(3.9)
	_check(saved_worker.phase == "resting","rest lasts full four seconds")
	resumed._process(0.11)
	_check(saved_worker.phase == "walking" and int(saved_worker.batches) == 0,"rested worker starts next physical commute")
	var stock := int(loaded.bakery_status("h2").stock)
	loaded.set_house_role("h2","venue")
	_check(loaded.set_journey_checkpoint(resumed.checkpoint()).ok,"immediate save after changing use synchronizes workers before checkpoint validation")
	_check(resumed.bakery.workers.is_empty() and int(loaded.bakery_status("h2").stock) == stock,"changing use releases worker and preserves stored supply")
	var waiting_city := _fixture()
	waiting_city.set_bakery_open("h2",false)
	var waiting_life := _life(waiting_city)
	for ignored in range(200): waiting_life._process(0.1)
	var waiting_buyer: Dictionary = waiting_life.residents[0]
	_check(waiting_buyer.service_pending == "bakery" and float(waiting_buyer.wait) == 0.0 and waiting_life.purchases == 0,"empty shelves retain the finished visit")
	_check(waiting_life.invite_concert("h4").ok and int(waiting_life.concert_status().invited) == 1,"stock waiting buyer can attend concert without inviting baker twice")
	waiting_life.cancel_concert()
	for ignored in range(200): waiting_life._process(0.1)
	_check(waiting_buyer.service_pending == "bakery" and waiting_life.purchases == 0,"cancelled invitation returns to procurement without invented purchase")
	waiting_city.set_bakery_open("h2",true)
	for ignored in range(70): waiting_life._process(0.1)
	_check(waiting_life.purchases == 1,"new attended batch satisfies pending buyer after invitation")
	waiting_life.free()
	var assignment_city := _fixture()
	var assigned_life := _life(assignment_city)
	var original_home := str(assigned_life.bakery.workers[0].home_id)
	_check(_to_phase(assigned_life,assigned_life.bakery.workers[0],"baking"),"assignment fixture reaches oven")
	var closer: Dictionary = assignment_city.add_house(Vector2(-8,-2))
	_check(closer.ok,"closer new household fixture commits")
	assigned_life._sync()
	_check(str(assigned_life.bakery.workers[0].home_id) == original_home,"new closer household never replaces an existing worker")
	assignment_city.set_journey_checkpoint(assigned_life.checkpoint())
	var assignment_reload := _life(assignment_city)
	_check(str(assignment_reload.bakery.workers[0].home_id) == original_home and assignment_reload.bakery.workers[0].phase == "baking","saved assignment wins over a new nearest-home allocation")
	var false_checkpoint: Dictionary = assigned_life.checkpoint()
	false_checkpoint.bakery_workers[0].position = [-16.0,0.0]
	assignment_reload.restore_checkpoint(false_checkpoint)
	_check(assignment_reload.bakery.workers[0].phase == "walking" and int(assignment_city.bakery_status("h2").produced) == 0,"remote claimed oven dwell falls back to legal commute without batch")
	assigned_life.free()
	assignment_reload.free()
	life.free()
	resumed.free()
	if failures.is_empty():
		print("CITY_CREATION_BAKERY_LIFE PASS: actual attendance, finite shelves, honest purchase, retained progress, shift, save/load")
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)

func _to_phase(life: Node3D, worker: Dictionary, phase: String) -> bool:
	for ignored in range(1000):
		if worker.phase == phase: return true
		life._process(0.1)
	return false

func _check(value: bool, label: String) -> void:
	if not value: failures.append(label)
