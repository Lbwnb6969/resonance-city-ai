extends SceneTree
## Public music begins only after real walking and finishes after a real dwell.
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String] = []
var events: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _fixture() -> RefCounted:
	var city := State.new()
	city.initialize()
	var original: Array[Dictionary] = city.houses.duplicate(true)
	city.houses.clear()
	for index in range(3):
		var house: Dictionary = original[[0,2,3][index]].duplicate(true)
		house.origin = [-14.0 + index * 4.0, -2.0]
		house.cells = [house.cells[0].duplicate(true)]
		house.cells[0].x = 0
		house.cells[0].z = 0
		house.cells[0].level = 0
		house.role = "venue" if index == 1 else "residential"
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
	life.concert_callback = func(event:String, _venue:String) -> void: events.append(event)
	return life

func _tick(life: Node3D, seconds: float) -> void:
	for step in range(roundi(seconds / 0.1)): life._process(0.1)

func _until_playing(life: Node3D) -> bool:
	for ignored in range(500):
		if str(life.concert_status().phase) == "playing": return true
		life._process(0.1)
	return false

func _save_resume(city: RefCounted, life: Node3D, label: String) -> Dictionary:
	_check(city.set_journey_checkpoint(life.checkpoint()).ok, label + " checkpoint accepted")
	var path := "user://city_creation_concert_%s_%d.json" % [label, Time.get_ticks_usec()]
	_check(city.save_city(path).ok, label + " city saves")
	var loaded := State.new()
	_check(loaded.load_city(path).ok, label + " city reloads")
	return {"city":loaded,"life":_life(loaded)}

func _run() -> void:
	var city := _fixture()
	var venue := str(city.houses[1].id)
	var life := _life(city)
	_check(life.residents.size() == 2, "fixture has two actual travelers")
	_check(life.invite_concert(venue).ok, "invitation starts a real shared trip")
	var before: Dictionary = life.checkpoint()
	_check(city.set_journey_checkpoint(before).ok,"checkpoint stores actual in-flight invitation")
	for field: String in ["position","wait","daily_snapshot","participants","duration"]:
		var corrupt: Dictionary = city.snapshot()
		match field:
			"position": corrupt.journey_checkpoint.residents[0].position = [999,0]
			"wait": corrupt.journey_checkpoint.residents[0].wait = -1
			"daily_snapshot": corrupt.journey_checkpoint.residents[0].daily_snapshot.yaw = "not_a_number"
			"participants": corrupt.journey_checkpoint.concert.participants = ["h999"]
			"duration": corrupt.journey_checkpoint.concert.duration = 0
		var intact: Dictionary = city.snapshot()
		_check(not city.restore(corrupt).ok and city.snapshot() == intact,"bad %s checkpoint rejected atomically" % field)
	_check(not life.invite_concert(venue).ok and life.checkpoint() == before, "repeated invitation is zero-write")
	_check(str(life.concert_status().phase) == "gathering" and int(life.concert_status().arrived) == 0, "invitation alone does not start music")
	_tick(life, 1.0)
	var walking: Dictionary = _save_resume(city, life, "walking")
	_check(walking.life.residents[0].node.position == life.residents[0].node.position and walking.life.residents[0].destination_id == venue, "reload preserves walking position and destination")
	_check(str(walking.life.concert_status().phase) == "gathering", "midwalk reload remains gathering")
	_check(_until_playing(walking.life), "every participant really arrives before playing")
	_check(int(walking.life.concert_status().arrived) == 2 and int(walking.city.life_progress.concerts) == 0, "arrival alone does not count a concert")
	_check(int(walking.city.life_progress.gatherings) == 0, "concert arrival is not an ordinary gathering")
	_tick(walking.life, 4.0)
	var elapsed := float(walking.life.concert_status().elapsed)
	var playing: Dictionary = _save_resume(walking.city, walking.life, "playing")
	_check(str(playing.life.concert_status().phase) == "playing" and is_equal_approx(float(playing.life.concert_status().elapsed), elapsed), "reload preserves concert dwell time")
	var position: Vector3 = playing.life.residents[0].node.position
	playing.city.set_house_name(str(playing.city.houses[0].id), "赴约的家")
	playing.life._sync()
	_check(playing.life.residents[0].node.position == position and is_equal_approx(float(playing.life.concert_status().elapsed), elapsed), "rename cannot restart or finish concert")
	var separate_road: Array[Vector2] = [Vector2(-16,-12), Vector2(-14,-12)]
	playing.city.add_road(separate_road)
	playing.life._sync()
	_check(str(playing.life.concert_status().phase) == "playing" and is_equal_approx(float(playing.life.concert_status().elapsed), elapsed), "unrelated road edit preserves actual dwell")
	_tick(playing.life, 19.0)
	_check(int(playing.city.life_progress.concerts) == 0, "less than one musical loop never completes concert")
	_tick(playing.life, 1.2)
	_check(int(playing.city.life_progress.concerts) == 1 and str(playing.life.concert_status().phase) == "idle", "one real twenty-four-second performance records once")
	playing.life._process(0.0)
	_check(int(playing.city.life_progress.concerts) == 1, "finished performance does not count twice")
	for resident: Dictionary in playing.life.residents:
		_check(not resident.has("daily_snapshot") and resident.service_pending != "concert", "finished performance returns to daily travel")
	var finished: Dictionary = _save_resume(playing.city, playing.life, "finished")
	_tick(finished.life, 14.0)
	_check(int(finished.city.life_progress.concerts) == 1 and str(finished.life.concert_status().phase) == "idle", "completed save cannot replay completion")
	# A genuine ordinary visit also preserves pending completion and wait time.
	var daily_city := _fixture()
	var daily := _life(daily_city)
	for ignored in range(500):
		if daily.residents[0].service_pending == "venue": break
		daily._process(0.1)
	_tick(daily, 1.0)
	var old_wait := float(daily.residents[0].wait)
	var daily_saved: Dictionary = _save_resume(daily_city, daily, "daily")
	_check(daily_saved.life.residents[0].node.position == daily.residents[0].node.position and is_equal_approx(float(daily_saved.life.residents[0].wait), old_wait) and daily_saved.life.residents[0].service_pending == "venue", "ordinary pending dwell resumes exact remaining wait")
	var count := int(daily_saved.city.life_progress.gatherings)
	daily_saved.life._process(old_wait + 0.01)
	daily_saved.life._process(0.0)
	_check(int(daily_saved.city.life_progress.gatherings) > count, "resumed dwell completes only after remaining wait")
	# Purpose and road invalidation cancel the shared invitation, never pay it.
	_check(life.invite_concert(venue).ok == false, "original in-flight invitation remains independent")
	city.roads.clear()
	city.revision += 1
	life._sync()
	_check(str(life.concert_status().phase) == "idle" and int(city.life_progress.concerts) == 0 and events.has("cancelled"), "removed street cancels concert without phantom completion")
	_check(not life.invite_concert(venue).ok, "disconnected venue cannot invite")
	var paused: Dictionary = _save_resume(city, life, "paused")
	_check(paused.life.residents.size() == 2 and paused.life.residents[0].paused, "saved disconnected residents remain paused at their own homes")
	var role_city := _fixture()
	var role_life := _life(role_city)
	role_life.invite_concert(str(role_city.houses[1].id))
	role_city.set_house_role(str(role_city.houses[1].id), "residential")
	role_life._sync()
	_tick(role_life, 20.0)
	_check(str(role_life.concert_status().phase) == "idle" and int(role_city.life_progress.concerts) == 0, "removed venue purpose cancels without counting")
	_route_component_case()
	var cancel_city := _fixture()
	var cancel_life := _life(cancel_city)
	cancel_life.invite_concert(str(cancel_city.houses[1].id))
	_check(cancel_life.cancel_concert().ok and int(cancel_city.life_progress.concerts) == 0 and str(cancel_life.concert_status().phase) == "idle","player cancellation releases life without completion")
	cancel_life.free()
	for node: Node in [life,walking.life,playing.life,finished.life,daily,daily_saved.life,paused.life,role_life]: node.free()
	if failures.is_empty():
		print("CITY_CREATION_CONCERT PASS: real invitation, walking, shared dwell, exact-once completion, save/resume and cancellation")
		quit(0)
	else:
		for failure: String in failures: push_error(failure)
		quit(1)

func _route_component_case() -> void:
	var city := _fixture()
	var life := _life(city)
	# The closest isolated strip must not hide a reachable street within .9m.
	life.graph = {"a":{"b":4.0},"b":{"a":4.0},"c":{"d":4.0},"d":{"c":4.0}}
	life.positions = {"a":Vector3(0,.055,0),"b":Vector3(4,.055,0),"c":Vector3(0,.055,.4),"d":Vector3(4,.055,.4)}
	# This synthetic graph also owns its component and attachment caches.
	life._network.graph=life.graph;life._network.positions=life.positions
	life._network.component_of={"a":"a","b":"a","c":"c","d":"c"}
	life._network._route_cache.clear()
	life._network._build_attachment_index()
	_check(not life._route_from_position(Vector3(2,.155,.3), "b").is_empty(), "nearest disconnected edge does not suppress a truly reachable local component")
	_check(life._route_from_position(Vector3(2,.155,2), "b").is_empty(), "route cannot jump from a far road across open ground")
	life.free()

func _check(condition: bool, label: String) -> void:
	if not condition: failures.append(label)
