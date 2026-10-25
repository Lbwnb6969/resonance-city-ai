extends SceneTree
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String] = []
var checks := 0
var callbacks := 0

func _initialize() -> void:
	_run.call_deferred()

func _life(city: RefCounted) -> Node3D:
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	return life

func _advance(life: Node3D, seconds: float) -> void:
	for index in range(ceili(seconds / 0.05)): life._process(0.05)

func _until(life: Node3D, predicate: Callable, seconds: float = 250.0) -> bool:
	for ignored in range(ceili(seconds / 0.05)):
		if predicate.call(): return true
		life._process(0.05)
	return false

func _run() -> void:
	var city := State.new()
	city.initialize()
	_check(city.set_house_role("h4", "garden_cafe").ok, "fifth role accepted by construction state")
	var life := _life(city)
	life.cafe_callback = func(_id, _homes): callbacks += 1
	_check(life.cafe_status("h4").phase == "waiting", "clear courtyard offers three real seats")
	_check(life.cafe_status("h1").phase == "closed", "ordinary home has no cafe")
	_check(life.bakery.workers.size() == 1 and life.workshop.workers.is_empty(), "cafe creates no new worker")
	_check(not life.cafe.try_visit(life.residents[0]), "no purchased bread means no invitation")
	_check(_until(life, func(): return int(life.cafe_status("h4").invited) > 0), "real bread service creates the first tea guest")
	_check(int(city.life_progress.purchases) >= 1 and int(city.bakery_status("h2").served) >= 1, "tea qualification follows actual stock consumption")
	var first_home := str(life.cafe_status("h4").participants[0])
	var first: Dictionary = life.cafe._resident(first_home)
	var approach_position: Vector3 = first.node.position
	_check(first.cafe_visit.phase == "walking" and approach_position.distance_to(Vector3(life.cafe.layouts.h4.seats[0].x, 0.1, life.cafe.layouts.h4.seats[0].y)) > 1.0, "invitation starts at real bakery position without seat teleport")
	var snapshot := city.snapshot()
	_check(city.set_journey_checkpoint(life.checkpoint()).ok, "in-transit cafe checkpoint validates")
	var before_save := city.snapshot()
	var copy := State.new()
	_check(copy._validate_snapshot(JSON.parse_string(JSON.stringify(before_save))).ok, "JSON checkpoint and qualified ledger validate")
	copy._apply_snapshot(JSON.parse_string(JSON.stringify(before_save)))
	var resumed := _life(copy)
	var resumed_first: Dictionary = resumed.cafe._resident(first_home)
	_check(resumed_first.has("cafe_visit") and resumed_first.node.position.distance_to(approach_position) < 0.001, "loading keeps exact actual approach position")
	_check(_until(resumed, func(): return str(resumed.cafe_status("h4").phase) == "tea"), "two or three actual guests walk around table and sit")
	var status: Dictionary = resumed.cafe_status("h4")
	_check(int(status.arrived) >= 2 and status.arrived == status.invited and status.seated_seats.size() == status.arrived, "all reserved guests really occupy distinct seats before tea")
	for home in status.participants:
		var guest: Dictionary = resumed.cafe._resident(str(home))
		var seat: Vector2 = resumed.cafe.layouts.h4.seats[int(guest.cafe_visit.seat)]
		_check(Vector2(guest.node.position.x, guest.node.position.z).distance_to(seat) < 0.15, "guest body is physically at reserved chair")
		_check(absf(float(guest.node.position.y) + float(guest.node.get_child(0).position.y) + 0.05 - (float(copy.street_height(seat)) + 0.43)) < 0.005, "seated body remains within 5mm breathing motion of chair height without lowering logical root")
	_check(int(copy.life_progress.tea_parties) == 0 and int(copy.life_progress.tea_visits) == 0, "arrival alone earns no gathering")
	var tea_homes: Array = status.participants.duplicate()
	copy.grant_resonance_afterglow([tea_homes[0], "h4"], 60.0)
	copy.set_journey_checkpoint(resumed.checkpoint())
	var tea_data := copy.snapshot()
	_check(copy._validate_snapshot(tea_data).ok, "actual seated group saves")
	var halfway_city := State.new()
	halfway_city._apply_snapshot(tea_data)
	var halfway := _life(halfway_city)
	_advance(halfway, 3.0)
	halfway_city.set_journey_checkpoint(halfway.checkpoint())
	var loaded_half_city := State.new()
	loaded_half_city._apply_snapshot(JSON.parse_string(JSON.stringify(halfway_city.snapshot())))
	var loaded_half := _life(loaded_half_city)
	_check(absf(float(loaded_half.cafe_status("h4").elapsed) - 3.0) < 0.001, "mid-tea loading retains actual simultaneous seated elapsed")
	for home in loaded_half.cafe_status("h4").participants:
		var loaded_guest: Dictionary = loaded_half.cafe._resident(str(home))
		_check(absf(float(loaded_guest.node.get_child(0).position.y) - 0.28) < 0.001, "loading restores the same actual chair-height pose")
	_advance(loaded_half, 2.5)
	_check(int(loaded_half_city.life_progress.tea_parties) == 0, "mid-tea loading cannot settle the remaining time early")
	_advance(loaded_half, 0.6)
	_check(int(loaded_half_city.life_progress.tea_parties) == 1, "mid-tea loading settles once after actual remaining time")
	_advance(resumed, 5.5)
	_check(int(copy.life_progress.tea_parties) == 0, "less than six real seconds cannot settle")
	_check(_until(resumed, func(): return int(copy.life_progress.tea_parties) == 1, 1.0), "six simultaneous seated seconds settle exactly one party")
	_check(int(copy.life_progress.tea_visits) == tea_homes.size(), "one actual qualification consumed per actual visitor")
	_check(resumed.cafe_status("h4").phase == "leaving" and int(resumed.cafe_status("h4").groups) == 1, "completed party remains physical until guests leave")
	_check(copy.afterglow_remaining("h4") > 80.0 and copy.afterglow_remaining(str(tea_homes[0])) > 80.0, "existing afterglow extends thirty seconds after aging")
	for home in tea_homes:
		_check(not copy.has_cafe_credit(str(home)), "one purchased bread cannot fund two parties")
		if home != tea_homes[0]: _check(copy.afterglow_remaining(str(home)) == 0.0, "tea does not invent an absent afterglow")
	_check(not copy.complete_tea("h4", tea_homes), "duplicate settlement rejected after credits consumed")
	var groups_before := int(copy.life_progress.tea_parties)
	copy.undo()
	_check(int(copy.life_progress.tea_parties) == groups_before, "construction undo never rewinds completed tea")
	copy.redo()
	copy.grant_resonance_afterglow(["h4"], 60.0)
	_check(copy.afterglow_remaining("h4") > 80.0, "new concert grant does not shorten earned extended afterglow")
	copy.set_journey_checkpoint(resumed.checkpoint())
	_check(copy._validate_snapshot(copy.snapshot()).ok, "leaving guests and completed ledger save consistently")
	var load_leaving := State.new()
	load_leaving._apply_snapshot(copy.snapshot())
	var leaving := _life(load_leaving)
	_advance(leaving, 10.0)
	_check(int(load_leaving.life_progress.tea_parties) == 1, "loading completed departure cannot replay tea settlement")
	# Continue from a genuine seated group; preemption cancels without spending.
	var cancel_city := State.new()
	cancel_city._apply_snapshot(tea_data)
	var canceled := _life(cancel_city)
	var preserved: Dictionary = canceled.cafe._resident(str(tea_homes[0]))
	var preserved_position: Vector3 = preserved.node.position
	cancel_city.set_house_role("h3", "venue")
	canceled._process(0.0)
	var concert: Dictionary = canceled.invite_concert("h3")
	_check(concert.ok and canceled.cafe.groups.is_empty(), "public concert takes precedence and cancels unfinished tea")
	_check(preserved.node.position.distance_to(preserved_position) < 0.001 and cancel_city.has_cafe_credit(str(tea_homes[0])), "preemption preserves physical position and unspent qualification")
	_check(int(cancel_city.life_progress.tea_parties) == 0, "cancelled tea never settles")
	# Semantically forged distant seated bodies are structurally valid but earn nothing.
	var forged := tea_data.duplicate(true)
	for person in forged.journey_checkpoint.residents:
		if person.has("cafe_visit"): person.position = [-11.0, -8.0]
	var forged_city := State.new()
	_check(forged_city._validate_snapshot(forged).ok, "remote-position fixture reaches semantic validation")
	forged_city._apply_snapshot(forged)
	var forged_life := _life(forged_city)
	_check(forged_life.cafe.groups.is_empty() and int(forged_city.life_progress.tea_parties) == 0, "forged remote seated dwell is canceled, never counted")
	var bad := before_save.duplicate(true)
	bad.cafe_credits[first_home].earned += 20
	_check(not city._validate_snapshot(bad).ok, "forged credit without actual purchase fails snapshot validation")
	bad = tea_data.duplicate(true)
	bad.journey_checkpoint.cafe_groups[0].elapsed = 6.0
	_check(not city._validate_snapshot(bad).ok, "already-completed saved tea cannot be replayed")
	bad = tea_data.duplicate(true)
	bad.journey_checkpoint.residents.filter(func(row): return row.has("cafe_visit"))[1].cafe_visit.seat = 0
	_check(not city._validate_snapshot(bad).ok, "two saved visitors cannot own one chair")
	# A lone purchased qualification can wait, but cannot manufacture company.
	var single_data := tea_data.duplicate(true)
	var only_home := str(tea_homes[0])
	single_data.journey_checkpoint.cafe_groups[0].participants = [only_home]
	single_data.journey_checkpoint.cafe_groups[0].phase = "waiting"
	single_data.journey_checkpoint.cafe_groups[0].elapsed = 0.0
	for person in single_data.journey_checkpoint.residents:
		if person.home_id != only_home:
			person.erase("cafe_visit")
			person.destination_id = person.home_id
			person.dwell_id = ""
			person.service_pending = ""
			person.wait = 0.0
	var single_city := State.new()
	_check(single_city._validate_snapshot(single_data).ok, "one-person waiting checkpoint is valid")
	single_city._apply_snapshot(single_data)
	var single := _life(single_city)
	# Isolate actual waiting from the other ordinary residents' future purchases.
	for resident: Dictionary in single.residents:
		if str(resident.home_id) != only_home: resident.paused = true
	_advance(single, 8.0)
	_check(single.cafe_status("h4").phase == "waitsecond" and single.cafe_status("h4").arrived == 1 and int(single_city.life_progress.tea_parties) == 0, "one seated guest waits without fake partner or settlement")
	var single_position: Vector3 = single.cafe._resident(only_home).node.position
	_check(not single.invite_concert("h4").ok and single.cafe.groups.size() == 1, "invalid concert request preserves actual waiting tea")
	single_city.remove_road("r5")
	single._process(0.0)
	_check(single.cafe.groups.is_empty() and single.cafe._resident(only_home).node.position.distance_to(single_position) < 0.001, "broken cafe spur cancels at actual chair position")
	_check(single_city.has_cafe_credit(only_home) and int(single_city.life_progress.tea_parties) == 0, "interrupted waiting returns qualification without reward")
	# Exact cap and ledger invariants are independent of visual frame timing.
	var cap_city := State.new()
	cap_city._apply_snapshot(tea_data)
	for id in ["h4", tea_homes[0]]: cap_city.resonance_afterglow[id] = 235.0
	_check(cap_city.complete_tea("h4", tea_homes) and cap_city.afterglow_remaining("h4") == 240.0, "earned extensions cap at the expanded two-hundred-forty-second bound")
	_check(cap_city._validate_snapshot(cap_city.snapshot()).ok, "extended afterglow serializes under expanded schema bound")
	var repurpose_city := State.new()
	repurpose_city._apply_snapshot(tea_data)
	var repurposed := _life(repurpose_city)
	var actual_guest: Dictionary = repurposed.cafe._resident(str(tea_homes[0]))
	var real_chair: Vector3 = actual_guest.node.position
	repurpose_city.set_house_role("h4", "residential")
	repurposed._process(0.0)
	_check(not actual_guest.has("cafe_visit") and not actual_guest.paused and actual_guest.node.position.distance_to(real_chair) < 0.001, "repurposed cafe releases seated guests onto actual outward path")
	_advance(repurposed, 1.0)
	_check(actual_guest.node.position.distance_to(real_chair) > 0.1 and int(repurpose_city.life_progress.tea_parties) == 0, "cancelled guests really walk home without settling tea")
	var old := snapshot.duplicate(true)
	old.erase("cafe_credits")
	old.erase("cafe_progress")
	old.journey_checkpoint = {}
	old.life_progress.erase("tea_parties")
	old.life_progress.erase("tea_visits")
	_check(city._validate_snapshot(old).ok, "old schema one saves migrate without invented qualifications")
	for node in [life, resumed, leaving, canceled, forged_life, single, repurposed, halfway, loaded_half]: node.queue_free()
	await process_frame
	if failures.is_empty(): print("PASS garden cafe life ", checks)
	else:
		for failure in failures: push_error(failure)
	quit(0 if failures.is_empty() else 1)

func _check(value: bool, message: String) -> void:
	checks += 1
	if not value: failures.append(message)
