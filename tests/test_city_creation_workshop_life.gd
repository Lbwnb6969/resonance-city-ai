extends SceneTree
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	_run.call_deferred()

func _fixture() -> RefCounted:
	var city := State.new()
	city.initialize()
	var original: Array[Dictionary] = city.houses.duplicate(true)
	city.houses.clear()
	for index in range(4):
		var house: Dictionary = original[[0, 1, 3, 2][index]].duplicate(true)
		house.origin = [-14.0 + index * 4.0, -2.0]
		house.cells = [house.cells[0].duplicate(true)]
		house.cells[0].x = 0
		house.cells[0].z = 0
		house.cells[0].level = 0
		city.houses.append(house)
	city.roads.assign([{"id":"r1", "points":[[-16.0,0.0],[-1.0,0.0]], "width":1.25, "bridge":false, "source":"seed"}])
	city.plants.clear()
	city.set_house_role("h2", "workshop")
	city.revision += 1
	return city

func _life(city: RefCounted) -> Node3D:
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	return life

func _to_phase(life: Node3D, worker: Dictionary, phase: String) -> bool:
	for ignored in range(1600):
		if str(worker.phase) == phase: return true
		life._process(0.1)
	return false

func _run() -> void:
	var city := _fixture()
	var life := _life(city)
	_check(life.workshop.workers.size() == 1 and life.residents.size() == 2, "one working household member and two independent daily residents")
	if life.workshop.workers.is_empty():
		_finish()
		return
	var worker: Dictionary = life.workshop.workers[0]
	var identity: int = worker.node.get_instance_id()
	var home := str(worker.home_id)
	_check(str(home) == "h1" and not worker.carry.visible, "nearest reachable home sends an artisan without cargo")
	life._process(1.0)
	_check(int(city.workshop_status("h2").produced) == 0, "commuting cannot produce instruments")
	_check(_to_phase(life, worker, "crafting"), "artisan reaches workshop on real road")
	life._process(3.0)
	var elapsed := float(worker.elapsed)
	var position: Vector3 = worker.node.position
	city.set_house_name("h2", "制琴工坊")
	life._sync()
	city.set_workshop_open("h2", false)
	life._process(12.0)
	_check(worker.node.get_instance_id() == identity and worker.node.position == position and float(worker.elapsed) == elapsed and int(city.workshop_status("h2").produced) == 0, "rename and paused bench retain exact work and identity")
	city.set_workshop_open("h2", true)
	life._process(4.99)
	_check(int(city.workshop_status("h2").produced) == 0, "attended crafting needs all eight base seconds")
	life._process(0.02)
	_check(int(city.workshop_status("h2").produced) == 1 and int(city.workshop_status("h2").stock) == 1, "completed craft creates one finite inventory item")
	life._process(0.0)
	_check(str(worker.phase) == "to_target" and worker.carry.visible and int(city.workshop_status("h2").stock) == 0 and not city.workshop_status("h2").transit.is_empty(), "onsite pickup reserves exactly one visible cargo")
	var target := str(worker.target_id)
	_check(city.improvement_level(target) == 0, "departure never installs remotely")
	city.set_workshop_open("h2", false)
	life._process(0.4)
	var cargo_position: Vector3 = worker.node.position
	var roads: Array[Dictionary] = city.roads.duplicate(true)
	city.roads.clear()
	city.revision += 1
	life._process(10.0)
	_check(str(worker.phase) == "paused" and str(worker.resume_phase) == "to_target" and worker.node.position == cargo_position and worker.carry.visible, "broken road strands actual cargo and keeps physical position")
	_check(city.improvement_level(target) == 0 and int(city.workshop_status("h2").stock) == 0, "road edits cannot deliver or duplicate reserved stock")
	var saved: Dictionary = life.checkpoint()
	_check(city.set_journey_checkpoint(saved).ok, "paused cargo checkpoint passes State structural validation")
	var path := "user://creation_workshop_life_%d.json" % Time.get_ticks_usec()
	_check(city.save_city(path).ok, "mid-cargo snapshot saves")
	var loaded := State.new()
	_check(loaded.load_city(path).ok, "mid-cargo snapshot loads")
	var resumed := _life(loaded)
	_check(resumed.workshop.workers.size() == 1, "saved disconnected cargo retains its worker")
	var restored: Dictionary = resumed.workshop.workers[0]
	_check(restored.node.position == cargo_position and str(restored.phase) == "paused" and restored.carry.visible and not loaded.workshop_status("h2").transit.is_empty(), "load preserves position, pause and exact reservation")
	loaded.roads.assign(roads)
	loaded.revision += 1
	resumed._sync()
	_check(restored.node.position == cargo_position and str(restored.phase) == "to_target", "repair resumes from checkpoint without teleport")
	_check(_to_phase(resumed, restored, "installing"), "carried chime reaches its real destination")
	resumed._process(1.99)
	_check(loaded.improvement_level(target) == 0, "installation needs two full onsite seconds")
	resumed._process(0.02)
	_check(loaded.improvement_level(target) == 1 and int(loaded.workshop_status("h2").delivered) == 1 and loaded.workshop_status("h2").transit.is_empty() and not restored.carry.visible, "onsite installation consumes reservation and advances exactly one visible tier")
	resumed._process(0.0)
	_check(loaded.improvement_level(target) == 1 and int(loaded.workshop_status("h2").delivered) == 1, "zero tick cannot repeat installation")
	_check(_to_phase(resumed, restored, "crafting"), "artisan returns physically to paused workshop")
	resumed._process(15.0)
	_check(int(loaded.workshop_status("h2").produced) == 1, "paused bench does not resume craft after delivery")
	loaded.set_workshop_open("h2", true)
	_check(_to_phase(resumed, restored, "resting"), "three actual deliveries send artisan physically home")
	_check(int(restored.deliveries) == 3 and int(loaded.workshop_status("h2").delivered) == 3 and restored.node.position.distance_to(resumed.workshop._target(home)) < 0.15, "rest follows three deliveries at the actual home")
	resumed._process(3.99)
	_check(str(restored.phase) == "resting", "rest retains full four second duration")
	resumed._process(0.02)
	_check(str(restored.phase) == "to_workshop" and int(restored.deliveries) == 0, "rested artisan starts next commute")
	# New baker assignment cannot steal an already working household.
	var preserved: int = restored.node.get_instance_id()
	loaded.set_house_role("h4", "bakery")
	resumed._sync()
	_check(restored.node.get_instance_id() == preserved and str(restored.home_id) == home and resumed.bakery.workers.size() == 1 and str(resumed.bakery.workers[0].home_id) != home, "bakery and workshop share one second member per household without stealing an artisan")
	var duplicate := false
	for baker: Dictionary in resumed.bakery.workers:
		for artisan: Dictionary in resumed.workshop.workers:
			if baker.home_id == artisan.home_id: duplicate = true
	_check(not duplicate, "working households never appear twice")
	# Finite capacity preserves partial effort, including exact afterglow expiry.
	var bonus_city := _fixture()
	for id in ["h1", "h3", "h4"]: bonus_city.house_improvements[id] = 3
	var bonus_life := _life(bonus_city)
	var bonus_worker: Dictionary = bonus_life.workshop.workers[0]
	_check(_to_phase(bonus_life, bonus_worker, "crafting"), "bonus fixture arrives at bench")
	bonus_city.resonance_afterglow["h2"] = 1.0
	bonus_life._process(7.74)
	_check(int(bonus_city.workshop_status("h2").produced) == 0 and is_equal_approx(float(bonus_worker.elapsed), 7.99), "one-second afterglow speeds only its exact active duration")
	bonus_life._process(0.02)
	_check(int(bonus_city.workshop_status("h2").produced) == 1, "expired afterglow returns to base craft speed")
	bonus_life._process(2.0)
	elapsed = float(bonus_worker.elapsed)
	bonus_city.produce_craft("h2", 4 - int(bonus_city.workshop_status("h2").stock))
	bonus_life._process(20.0)
	_check(float(bonus_worker.elapsed) == elapsed and int(bonus_city.workshop_status("h2").stock) == 4, "full inventory retains work without overproduction")
	# A claimed installation away from target cannot mint an improvement;
	# invalid reservation is refunded so future work does not deadlock.
	var forged_city := _fixture()
	var forged_life := _life(forged_city)
	var forged_worker: Dictionary = forged_life.workshop.workers[0]
	_check(_to_phase(forged_life, forged_worker, "to_target"), "forged checkpoint fixture picks a real item")
	var forged: Dictionary = forged_life.checkpoint()
	forged.workshop_workers[0].phase = "installing"
	forged.workshop_workers[0].resume_phase = "installing"
	forged.workshop_workers[0].position = [-16.0, 0.0]
	forged.workshop_workers[0].elapsed = 1.9
	forged_life.restore_checkpoint(forged)
	_check(int(forged_city.workshop_status("h2").delivered) == 0 and forged_city.workshop_status("h2").transit.is_empty() and int(forged_city.workshop_status("h2").stock) == 1, "remote installation checkpoint refunds cargo without granting a tier")
	# Repeated setup/restore must retain valid reservation rather than orphan
	# refunding before its physical checkpoint is inspected.
	var valid_city := _fixture()
	valid_city.produce_craft("h2", 3)
	for ignored in range(3):
		valid_city.reserve_craft("h2", "h1", "h1")
		valid_city.complete_craft("h2", "h1", "h1")
	var valid_life := _life(valid_city)
	var valid_worker: Dictionary = valid_life.workshop.workers[0]
	_check(_to_phase(valid_life, valid_worker, "to_target"), "connected reload fixture reserves cargo")
	valid_city.set_journey_checkpoint(valid_life.checkpoint())
	var valid_position: Vector3 = valid_worker.node.position
	var valid_reload := _life(valid_city)
	_check(not valid_city.workshop_status("h2").transit.is_empty() and int(valid_city.workshop_status("h2").stock) == 0 and valid_reload.workshop.workers[0].node.position == valid_position and valid_reload.workshop.workers[0].carry.visible, "fresh setup restores reservation before orphan recovery")
	var live_worker: Dictionary = valid_reload.workshop.workers[0]
	var live_identity: int = live_worker.node.get_instance_id()
	var live_target := str(live_worker.target_id)
	_check(valid_city.set_house_role(live_target, "bakery").ok, "carried target role edit commits")
	valid_reload._sync()
	_check(valid_city.workshop_status("h2").transit.is_empty() and int(valid_city.workshop_status("h2").stock) == 1 and str(live_worker.target_id).is_empty() and not live_worker.carry.visible and live_worker.node.position == valid_position and live_worker.node.get_instance_id() == live_identity, "invalid recipient refunds once and replans same physical worker")
	_check(valid_city.undo().ok, "target role edit can be undone")
	valid_reload._sync()
	_check(valid_city.workshop_status("h2").transit.is_empty() and int(valid_city.workshop_status("h2").stock) == 1 and not live_worker.carry.visible and str(live_worker.target_id).is_empty() and live_worker.node.position == valid_position, "undo restores recipient role without duplicating the already refunded physical item")
	var competition_city := _fixture()
	competition_city.set_house_role("h4", "workshop")
	competition_city.produce_craft("h2", 2)
	for ignored in range(2):
		competition_city.reserve_craft("h2", "h1", "h1")
		competition_city.complete_craft("h2", "h1", "h1")
	competition_city.produce_craft("h4", 3)
	for ignored in range(2):
		competition_city.reserve_craft("h4", "h3", "h3")
		competition_city.complete_craft("h4", "h3", "h3")
	var competition_life := _life(competition_city)
	_check(competition_life.workshop.workers.size() == 2, "two reachable households support two separate workshops")
	var first: Dictionary = competition_life.workshop.workers[0]
	_check(competition_life.workshop._recipient(first) == "h1", "nearest equal-tier recipient wins before other reservation")
	_check(competition_city.reserve_craft("h4", "h3", "h1"), "other workshop reserves final available tier")
	_check(competition_life.workshop._recipient(first) == "h3", "reserved final tier is skipped immediately in favor of another reachable recipient")
	life.free()
	resumed.free()
	bonus_life.free()
	forged_life.free()
	valid_life.free()
	valid_reload.free()
	competition_life.free()
	_finish()

func _check(value: bool, label: String) -> void:
	checks += 1
	if not value: failures.append(label)

func _finish() -> void:
	if failures.is_empty():
		print("CITY_CREATION_WORKSHOP_LIFE PASS: %d real attendance, inventory, carried cargo, installation, rest, checkpoint, jobs and exact bonus checks" % checks)
		quit(0)
	else:
		for failure: String in failures: push_error(failure)
		quit(1)
