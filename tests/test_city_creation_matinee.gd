extends SceneTree
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	_run.call_deferred()

func _check(value: bool, message: String) -> void:
	checks += 1
	if not value:
		failures.append(message)
		push_error(message)

func _life(city: RefCounted) -> Node3D:
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	return life

func _until(life: Node3D, predicate: Callable, seconds: float = 500.0) -> bool:
	for ignored in range(ceili(seconds / 0.05)):
		if predicate.call(): return true
		life._process(0.05)
	return false

func _advance(life: Node3D, seconds: float) -> void:
	for ignored in range(ceili(seconds / 0.05)): life._process(0.05)

func _saved(city: RefCounted, life: Node3D) -> Dictionary:
	_check(city.set_journey_checkpoint(life.checkpoint()).ok, "live checkpoint structurally valid")
	var data: Dictionary = JSON.parse_string(JSON.stringify(city.snapshot()))
	var validation: Dictionary = city._validate_snapshot(data)
	_check(validation.ok, "full JSON snapshot validates: " + str(validation.get("message", "")))
	return data

func _run() -> void:
	var city := State.new()
	city.initialize()
	_check(not city.houses[3].get("auto_matinee", false), "old/default venue never starts without player opt-in")
	_check(not city.set_auto_matinee("h1", true).ok, "only actual venue accepts resident scheduling")
	_check(city.set_house_role("h4", "garden_cafe").ok and city.set_house_role("h3", "venue").ok, "real cafe plus separate venue")
	_check(city.set_auto_matinee("h3", true).ok, "venue opt-in is construction transaction")
	city.undo()
	_check(not city.houses[2].auto_matinee, "undo disables future invitations")
	city.redo()
	_check(city.houses[2].auto_matinee, "redo restores the same venue setting")
	var life := _life(city)
	life._network.route_counting=true
	var route_counts: Dictionary=life._network.route_cache_stats.duplicate()
	_check(life.matinee_status("h3").ready == 0, "zero true tea visits means zero inspiration")
	_check(life._network.route_cache_stats==route_counts,"matinee reachability uses published components without solving any home-to-venue route")
	life._network.route_counting=false
	_check(_until(life, func(): return str(life.cafe_status("h4").phase) == "tea"), "actual worker bakes, two residents buy bread and walk to tea")
	_check(int(city.life_progress.purchases) >= 2 and int(city.life_progress.tea_parties) == 0 and life.concert_status().phase == "idle", "purchase and tea arrival alone cannot start a concert")
	_advance(life, 5.5)
	_check(city.matinee_credits.is_empty() and life.concert_status().phase == "idle", "less than real simultaneous six-second tea grants nothing")
	_check(_until(life, func(): return int(city.life_progress.tea_parties) == 1, 1.0), "actual tea completion grants finite inspiration")
	var homes: Array = life.cafe_status("h4").participants.duplicate()
	for home in homes:
		_check(city.has_matinee_credit(str(home)) and city.matinee_credits[home].earned == 1, "one completed tea grants one unspent household inspiration")
	_check(life.concert_status().phase == "idle" and life.matinee_status("h3").phase == "tea", "automatic concert respects real tea departure")
	_check(_until(life, func(): return life.concert_status().phase == "gathering", 40.0), "after guests physically leave the city spontaneously invites")
	_check(life.concert_status().source == "auto" and life.concert_status().sponsors.size() >= 2, "automatic invitation owns at least two fresh sponsors")
	_check(city.matinee_pending.venue_id == "h3" and city.life_progress.auto_concerts == 0, "reservation neither spends inspiration nor counts attendance")
	var source_data := _saved(city, life)
	var original_position: Vector3 = life.cafe._resident(str(homes[0])).node.position
	var saved_city := State.new()
	_check(saved_city.restore(source_data).ok, "actual invitation restores through public atomic API")
	var saved_life := _life(saved_city)
	_check(saved_life.concert_status().source == "auto" and saved_life.cafe._resident(str(homes[0])).node.position.distance_to(original_position) < 0.001, "loading keeps automatic source and physical walking position")
	_check(city.set_auto_matinee("h3", false).ok, "pause future invitations while current party walks")
	life._process(0.0)
	_check(life.concert_status().phase == "gathering", "disabling automation leaves existing invitation intact")
	_check(_until(life, func(): return life.concert_status().phase == "playing", 100.0), "all actual residents arrive before performance starts")
	_check(life.concert_status().arrived == life.concert_status().invited and city.life_progress.auto_concerts == 0, "arrival is no completed concert")
	var playing_data := _saved(city, life)
	_advance(life, 23.5)
	_check(city.life_progress.auto_concerts == 0, "automatic performance needs full twenty-four seconds")
	_check(_until(life, func(): return int(city.life_progress.auto_concerts) == 1, 1.0), "full automatic performance settles once")
	_check(city.life_progress.concerts == 1 and city.matinee_progress.h3.completed == 1 and city.matinee_pending.is_empty(), "automatic completion joins existing concert total and strict venue ledger")
	for home in homes: _check(not city.has_matinee_credit(str(home)), "successful performance consumes each actual sponsor exactly once")
	_check(city.matinee_cooldown > 59.8 and life.matinee_status("h3").completed == 1, "completion starts sixty seconds of real rest")
	var completed_data := _saved(city, life)
	city.undo()
	_check(city.houses[2].auto_matinee and city.life_progress.auto_concerts == 1 and city.matinee_credits[homes[0]].spent == 1, "construction undo restores only future setting, never spent inspiration or completed event")
	life._process(0.0)
	var rebuilds := int(life.matinee.connectivity_rebuilds)
	_advance(life, 10.0)
	_check(life.concert_status().phase == "idle" and city.matinee_cooldown > 49.7, "cooldown blocks immediate perpetual encore")
	_check(life.matinee.connectivity_rebuilds == rebuilds, "one-second scheduling does not repeat graph search on an unchanged town")
	var resting_data := _saved(city, life)
	var resting_city := State.new()
	resting_city.restore(resting_data)
	var resting := _life(resting_city)
	_check(absf(resting_city.matinee_cooldown - city.matinee_cooldown) < 0.001, "loading preserves remaining cooldown with no offline advance")
	_advance(resting, 3.0)
	_check(absf(resting_city.matinee_cooldown - city.matinee_cooldown + 3.0) < 0.001, "loaded cooldown advances only from actual simulation")
	# Cancel the real saved walking invitation; no sponsor is spent and no reward.
	_check(saved_life.cancel_concert().ok and saved_city.matinee_cooldown == 60.0, "player cancellation imposes the same rest")
	for home in homes: _check(saved_city.has_matinee_credit(str(home)), "canceled actual walk preserves each unused inspiration")
	_check(saved_city.life_progress.auto_concerts == 0 and saved_city.life_progress.concerts == 0, "cancellation invents no reward")
	_advance(saved_life, 5.0)
	_check(saved_life.concert_status().phase == "idle", "enabled scheduler does not immediately re-invite after player ends")
	_check(saved_life.invite_concert("h3").ok and saved_life.concert_status().source == "manual", "manual invitation remains available during automatic cooldown")
	_check(saved_city.matinee_pending.is_empty(), "manual invitation never reserves household inspiration")
	var manual_data := _saved(saved_city, saved_life)
	saved_city.set_auto_matinee("h3", false)
	_check(_until(saved_life, func(): return int(saved_city.life_progress.concerts) == 1, 150.0), "manual performance can finish with unpaid inspiration still available")
	_check(saved_city.life_progress.auto_concerts == 0 and saved_city.matinee_progress.is_empty(), "manual completion never claims an automatic reward")
	for home in homes: _check(saved_city.has_matinee_credit(str(home)), "manual performance never consumes a resident's future automatic sponsorship")
	var bad := manual_data.duplicate(true)
	bad.journey_checkpoint.concert.source = "auto"
	bad.journey_checkpoint.concert.sponsors = homes.duplicate()
	var unchanged: Dictionary = saved_city.snapshot()
	_check(not saved_city.restore(bad).ok and saved_city.snapshot() == unchanged, "forged automatic source is atomically rejected without live mutation")
	bad = source_data.duplicate(true)
	bad.journey_checkpoint.concert.sponsors[1] = bad.journey_checkpoint.concert.sponsors[0]
	bad.matinee_pending.sponsors = bad.journey_checkpoint.concert.sponsors.duplicate()
	_check(not city._validate_snapshot(bad).ok, "one household cannot sponsor twice")
	bad = source_data.duplicate(true)
	bad.matinee_credits[homes[0]].earned += 5
	_check(not city._validate_snapshot(bad).ok, "inspiration cannot exceed actual per-household tea visits or one unused slot")
	bad = completed_data.duplicate(true)
	bad.life_progress.auto_concerts += 1
	_check(not city._validate_snapshot(bad).ok, "completed automatic count cannot escape strict venue and sponsor ledgers")
	bad = source_data.duplicate(true)
	bad.matinee_cooldown = 61.0
	_check(not city._validate_snapshot(bad).ok, "invalid persisted rest is rejected")
	# A structurally valid remote playing pose is canceled by actual geometry.
	bad = playing_data.duplicate(true)
	for resident in bad.journey_checkpoint.residents:
		if resident.has("daily_snapshot"): resident.position = [-11.0, -9.0]
	var remote_city := State.new()
	_check(remote_city.restore(bad).ok, "remote-pose fixture reaches semantic restoration")
	var remote := _life(remote_city)
	_check(remote.concert_status().phase == "idle" and remote_city.matinee_pending.is_empty() and remote_city.life_progress.auto_concerts == 0, "forged offsite playing pose cancels authorization without a reward")
	for home in homes: _check(remote_city.has_matinee_credit(str(home)), "semantic cancellation refunds the actual unused inspiration")
	var capped_city := State.new()
	capped_city.restore(completed_data)
	var capped := _life(capped_city)
	_check(_until(capped, func(): return int(capped_city.life_progress.tea_parties) >= 3, 700.0), "disabled venue leaves real bread and tea operating over several cycles")
	for home in homes:
		_check(capped_city.matinee_credits[home].earned == 2 and capped_city.matinee_credits[home].spent == 1, "repeated true tea visits cannot accumulate more than one unused inspiration")
	_check(capped_city.life_progress.auto_concerts == 1 and capped_city.matinee_pending.is_empty(), "automation opt-out prevents scheduling even with ready inspiration")
	_saved(capped_city, capped)
	var broken_city := State.new()
	broken_city.restore(source_data)
	var broken := _life(broken_city)
	_check(broken_city.remove_road("r4").ok, "remove actual venue access while automatic guests walk")
	broken._process(0.0)
	_check(broken.concert_status().phase == "idle" and broken_city.matinee_pending.is_empty() and broken_city.matinee_cooldown == 60.0, "real broken access cancels the invitation and starts rest")
	for home in homes: _check(broken_city.has_matinee_credit(str(home)), "road cancellation does not spend a sponsor's inspiration")
	_saved(broken_city, broken)
	# Fresh rounds require another actual bread-and-tea chain.
	_check(_until(life, func(): return int(city.life_progress.auto_concerts) == 2, 700.0), "second automatic performance needs and completes a fresh physical bread-tea cycle")
	_check(city.life_progress.tea_parties >= 2 and city.matinee_credits[homes[0]].earned >= 2 and city.matinee_credits[homes[0]].spent == 2, "new purchases and tea replenish, rather than recycling global historical totals")
	_saved(city, life)
	# Two reachable enabled venues rotate from the last actual finished host.
	var new_house: Dictionary = city.add_house(Vector2(-7.0, -11.0))
	_check(new_house.ok, "build a second real performance venue")
	var other := str(new_house.get("house_id", ""))
	if new_house.ok:
		_check(city.set_house_role(other, "venue").ok and city.add_road([Vector2(-11,-9),Vector2(-7,-9.45)]).ok and city.set_auto_matinee(other, true).ok, "new venue connects to the same real street network")
		_check(_until(life, func(): return life.concert_status().phase != "idle", 700.0), "another fresh social cycle starts a future automatic performance")
		_check(life.concert_status().venue_id == other, "last host yields to the next reachable enabled venue")
		life.cancel_concert()
		_saved(city, life)
	# Old schema has no automatic behavior and no synthetic historical inspiration.
	var legacy := State.new()
	legacy.initialize()
	var legacy_data: Dictionary = legacy.snapshot()
	for key in ["matinee_credits", "matinee_progress", "matinee_pending", "matinee_cooldown", "matinee_last_venue"]: legacy_data.erase(key)
	legacy_data.life_progress.erase("auto_concerts")
	for house in legacy_data.houses: house.erase("auto_matinee")
	_check(legacy.restore(legacy_data).ok and legacy.matinee_credits.is_empty() and not legacy.houses[3].auto_matinee, "old schema restores opt-out with no fabricated progress")
	for node in [life, saved_life, resting, remote, capped, broken]: node.queue_free()
	print("AUTO MATINEE: %s (%d checks)" % ["PASS" if failures.is_empty() else "FAIL", checks])
	quit(0 if failures.is_empty() else 1)
