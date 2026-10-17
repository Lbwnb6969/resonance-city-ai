extends SceneTree
## Real trips + whole-neighborhood membership + persistent, finite afterglow.
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String] = []
var checks := 0
var gate_open := false

func _initialize() -> void:
	_run.call_deferred()

func _fixture() -> RefCounted:
	var city := State.new()
	city.initialize()
	var origins := [[-14.0,-2.0],[-2.0,-2.0],[-6.0,-2.0],[-10.0,-2.0],[14.0,13.0],[14.0,-13.0]]
	for index in range(city.houses.size()):
		var house: Dictionary = city.houses[index]
		house.origin = origins[index]
		house.cells = [house.cells[0].duplicate(true)]
		house.cells[0].x = 0
		house.cells[0].z = 0
		house.cells[0].level = 0
	city.roads.assign([{"id":"r1","points":[[-16.0,0.0],[-2.0,0.0]],"width":1.25,"bridge":false,"source":"seed"}])
	city.plants.clear()
	city.revision += 1
	return city

func _life(city: RefCounted) -> Node3D:
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	return life

func _tick(life: Node3D, seconds: float) -> void:
	for ignored in range(roundi(seconds / 0.05)): life._process(0.05)

func _run() -> void:
	var city := _fixture()
	var life := _life(city)
	_check(life.invite_concert("h4").ok, "real reachable homes accept invitation")
	var view: Dictionary = life.concert_view()
	_check(view.chorus_house_ids == ["h1","h2","h3","h4"], "chorus includes nearby bakery and venue as well as participants")
	_check(view.ambient_house_ids == ["h5","h6"] and not view.participants.has("h5"), "unconnected farther homes breathe without becoming phantom attendees")
	var builds := int(life.resonance_membership_rebuilds)
	for ignored in range(20): life.concert_view()
	_check(life.resonance_membership_rebuilds == builds, "stable views reuse membership cache")
	view.chorus_house_ids.clear()
	_check(life.concert_view().chorus_house_ids.size() == 4, "returned membership is isolated from caller mutation")
	city.houses[5].origin = [16.0, -13.0]
	_check(life.concert_view().ambient_house_ids.has("h6"), "direct position mutation invalidates derived membership without revision")
	city.houses[5].origin = [30.0, 14.0]
	_check(not life.concert_view().ambient_house_ids.has("h6"), "house beyond 32m leaves ambient after direct mutation")
	city.houses[5].origin = [14.0,-13.0]
	var district_points: Array[Vector2] = [Vector2(-10,-2),Vector2(14,13)]
	_check(city.add_district(district_points,3.2).ok, "real district joins far home and venue")
	view = life.concert_view()
	_check(view.chorus_house_ids.has("h5") and not view.ambient_house_ids.has("h5"), "same nonempty district extends full chorus past 22m")
	city.districts[0].points = [[-10.0,-2.0],[14.0,-13.0]]
	view = life.concert_view()
	_check(view.chorus_house_ids.has("h6") and not view.chorus_house_ids.has("h5"), "direct district geometry mutation replaces cached membership")
	city.districts[0].points = [[-10.0,-2.0],[14.0,13.0]]
	life.concert_start_gate = func() -> bool: return gate_open
	for ignored in range(1200):
		life._process(0.05)
		view = life.concert_view()
		if int(view.arrived) == int(view.invited): break
	_check(int(view.arrived) == int(view.invited) and view.phase == "gathering", "all actual arrivals wait for optional music bar gate")
	_check(not view.wake_house_ids.is_empty() and view.wake_house_ids.has("h4"), "actual traveling neighbors wake passed houses")
	var gathering_checkpoint: Dictionary = life.checkpoint()
	_check(city.set_journey_checkpoint(gathering_checkpoint).ok, "actual awakened-house checkpoint validates")
	var gathering_city := State.new()
	_check(gathering_city.restore(city.snapshot()).ok, "gathering snapshot with wake IDs reloads")
	var gathering_life := _life(gathering_city)
	_check(gathering_life.concert_view().wake_house_ids == view.wake_house_ids, "reload preserves actual invitation wake progress")
	gathering_life.free()
	var bad_wake: Dictionary = city.snapshot()
	bad_wake.journey_checkpoint.concert.wake_house_ids = ["h999"]
	_check(not gathering_city.restore(bad_wake).ok, "checkpoint cannot mint unknown awakened house")
	_tick(life,1.0)
	_check(life.concert_status().phase == "gathering" and city.resonance_afterglow.is_empty(), "waiting at bar gate cannot count or pay rewards")
	gate_open = true
	life._process(0.05)
	_check(life.concert_status().phase == "playing" and float(life.concert_status().elapsed) == 0.0, "music gate starts a fresh full 24 seconds")
	_tick(life,23.95)
	_check(int(city.life_progress.concerts) == 0 and city.resonance_afterglow.is_empty(), "partial concert grants no afterglow")
	life._process(0.051)
	_check(int(city.life_progress.concerts) == 1 and life.concert_status().phase == "idle", "actual completed full performance counts exactly once")
	_check(city.resonance_afterglow.size() == 5 and absf(city.afterglow_remaining("h2")-60.0)<0.01 and city.afterglow_remaining("h6") == 0.0, "completion grants 60s minus actual tick remainder to whole chorus including bakery and far same-district home")
	_check(life.concert_view().wake_house_ids.is_empty() and life.concert_view().afterglow_house_ids.size() == 5, "finished view separates afterglow from invitation wake")
	city.set_house_name("h1","余韵之家")
	life._process(1.25)
	var remaining := float(city.afterglow_remaining("h1"))
	_check(city.undo().ok and is_equal_approx(city.afterglow_remaining("h1"),remaining), "undo preserves real elapsed afterglow")
	_check(city.redo().ok and is_equal_approx(city.afterglow_remaining("h1"),remaining), "redo cannot rewind afterglow")
	_check(city.set_journey_checkpoint(life.checkpoint()).ok, "afterglow journey checkpoint accepted")
	var loaded := State.new()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok, "afterglow reload validates canonical JSON snapshot")
	_check(is_equal_approx(loaded.afterglow_remaining("h1"),remaining), "reload preserves remaining seconds without offline reward")
	var old: Dictionary = city.snapshot()
	old.erase("resonance_afterglow")
	var migrated := State.new()
	_check(migrated.restore(old).ok and migrated.resonance_afterglow.is_empty(), "old schema1 without afterglow migrates empty")
	for invalid in [-1.0,0.0,120.01,INF,NAN,"60"]:
		var corrupt: Dictionary = city.snapshot()
		corrupt.resonance_afterglow.h1 = invalid
		var before: Dictionary = loaded.snapshot()
		_check(not loaded.restore(corrupt).ok and loaded.snapshot() == before, "invalid bonus %s rejected atomically" % str(invalid))
	var corrupt: Dictionary = city.snapshot()
	corrupt.resonance_afterglow.h999 = 20.0
	_check(not loaded.restore(corrupt).ok, "unissued house cannot receive saved bonus")
	city.remove_cell("h5",str(city.houses[4].cells[0].id))
	_check(city.afterglow_remaining("h5") == 0.0, "removed house prunes afterglow")
	city.undo()
	_check(city.afterglow_remaining("h5") == 0.0, "undo removal does not mint lost bonus time")
	life._process(60.0)
	_check(city.resonance_afterglow.is_empty(), "real life clock expires all afterglow")
	life.free()
	_cancel_cases()
	_bakery_cases()
	if failures.is_empty():
		print("CITY_CREATION_RESONANCE_LIFE PASS: %d checks; whole neighborhood, actual wake/arrival/bar gate, full24s, finite persistent60s, exact bakery work" % checks)
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)

func _cancel_cases() -> void:
	for reason in ["player","road","role"]:
		var city := _fixture()
		var life := _life(city)
		life.invite_concert("h4")
		match reason:
			"player": life.cancel_concert()
			"road": city.remove_road("r1")
			"role": city.set_house_role("h4","residential")
		life._process(0.1)
		_check(city.resonance_afterglow.is_empty() and int(city.life_progress.concerts) == 0 and life.concert_status().phase == "idle", "%s cancellation grants no bonus" % reason)
		life.free()

func _bakery_cases() -> void:
	var city := _fixture()
	var life := _life(city)
	var worker: Dictionary = life.bakery.workers[0]
	for ignored in range(1200):
		if worker.phase == "baking": break
		life._process(0.05)
	_check(worker.phase == "baking", "bonus baker really reaches oven first")
	for resident: Dictionary in life.residents: resident.paused = true
	worker.elapsed = 0.0
	city.grant_resonance_afterglow(["h2"], 1.0)
	life._process(2.0)
	_check(is_equal_approx(float(worker.elapsed),2.25) and city.afterglow_remaining("h2") == 0.0, "expiry inside tick integrates one boosted plus one normal second")
	city.grant_resonance_afterglow(["h2"],60.0)
	var status: Dictionary = life.bakery_status("h2")
	_check(status.bonus and status.production_multiplier == 1.25 and status.duration == 6.0, "UI exposes active bonus while elapsed keeps base6s contract")
	worker.elapsed = 0.0
	worker.batches = 0
	life._process(4.8)
	_check(int(city.bakery_status("h2").produced) == 1 and is_zero_approx(float(worker.elapsed)), "25 percent faster work completes exact batch in4.8s")
	worker.elapsed = 0.0
	worker.batches = 0
	life._process(10.0)
	_check(int(city.bakery_status("h2").produced) == 3 and is_equal_approx(float(worker.elapsed),0.5), "long boosted tick retains second-batch and residual work")
	city.set_bakery_open("h2",false)
	life._process(2.0)
	_check(is_equal_approx(float(worker.elapsed),0.5), "player-paused oven retains progress during bonus")
	city.set_bakery_open("h2",true)
	city.produce_bread("h2",int(city.bakery_status("h2").capacity)-int(city.bakery_status("h2").stock))
	life._process(1.0)
	_check(is_equal_approx(float(worker.elapsed),0.5), "full shelf cannot produce bonus bread or consume saved work")
	var before := int(city.bakery_status("h2").produced)
	city.remove_road("r1")
	life._process(2.0)
	_check(worker.phase == "paused" and int(city.bakery_status("h2").produced) == before and is_equal_approx(float(worker.elapsed),0.5), "stranded worker gains no production")
	var supply: Dictionary = city.bakery_status("h2")
	_check(int(supply.stock) == int(supply.produced)-int(supply.served), "bonus production preserves exact stock conservation")
	city.dirty=false
	city.advance_resonance_afterglow(0.25)
	_check(city.dirty,"timer alone marks the city for autosave even when every resident and worker is paused")
	city.dirty=false
	city.advance_resonance_afterglow(60.0)
	_check(city.dirty and city.resonance_afterglow.is_empty(),"expiry alone persists without relying on resident movement")
	life.free()

func _check(condition: bool, label: String) -> void:
	checks += 1
	if not condition: failures.append(label)
