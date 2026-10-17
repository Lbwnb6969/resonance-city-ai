extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
var checks := 0
var failures: Array[String] = []


func _initialize() -> void:
	var city := _city()
	_check(city.venue_commissions.is_empty() and not city.festival_status("h4").pending, "new town invents no commissions")
	_check(city.record_concert_completion("h1") == 60.0 and city.record_concert_completion("missing") == 60.0 and city.life_progress.concerts == 0, "only a real venue records completion")
	_check(not city.reserve_craft("h2", "h1", "h4", "festival"), "no festival cargo before a completed concert")
	_check(city.record_concert_completion("h4") == 60.0 and city.life_progress.concerts == 1 and city.festival_status("h4").pending, "first real completion issues one demand")
	_check(city.record_concert_completion("h4") == 60.0 and city.venue_commissions.h4.requested == 1 and city.life_progress.concerts == 2, "unfinished demand never blocks another performance or grows a queue")
	_check(not city.reserve_craft("h2", "h1", "h3", "festival") and not city.reserve_craft("h2", "h1", "h4", "unknown"), "festival requires venue demand and a known cargo kind")
	_check(city.reserve_craft("h2", "h1", "h4", "festival"), "existing stock can supply festival demand")
	_check(city.workshop_status("h2").transit == {"home_id":"h1","target_id":"h4","kind":"festival"}, "cargo kind is authoritative in supply ledger")
	_check(not city.reserve_craft("h5", "h3", "h4", "festival"), "other workshop cannot duplicate the reserved commission")
	var in_transit := city.snapshot()
	_check(State.new().restore(JSON.parse_string(JSON.stringify(in_transit))).ok, "festival in transit survives JSON persistence")
	_check(not city.complete_craft("h2", "h3", "h4") and city.snapshot() == in_transit, "wrong carrier cannot settle the commission")
	_check(city.complete_craft("h2", "h1", "h4") and city.improvement_level("h4") == 0 and city.festival_status("h4").ready, "actual gift delivery prepares next concert without adding a permanent tier")
	_check(not city.complete_craft("h2", "h1", "h4") and not city.reserve_craft("h5", "h3", "h4", "festival"), "delivered gift is never duplicated")
	_check(city.festival_ready_venues() == ["h4"], "view includes prepared real venue")
	var prepared := city.snapshot()
	var restored := State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(prepared))).ok and restored.snapshot() == prepared, "prepared gift roundtrip is exact")
	_check(restored.venue_commissions.h4.delivered is int, "JSON commission counters normalize to integers")
	_check(city.set_house_name("h4", "庆典庭").ok and city.undo().ok and city.festival_status("h4").ready, "construction undo never consumes a prepared gift")
	_check(city.record_concert_completion("h4") == 90.0 and city.venue_commissions.h4 == {"requested":2,"delivered":1,"used":1}, "next completed concert consumes gift once and requests its successor")
	city.grant_resonance_afterglow(["h4"], 90.0)
	_check(city.afterglow_remaining("h4") == 90.0, "prepared concert can grant ninety seconds")
	city.grant_resonance_afterglow(["h4"], 60.0)
	_check(city.afterglow_remaining("h4") == 90.0, "ordinary concert preserves a longer afterglow")
	city.grant_resonance_afterglow(["h4"], 150.0)
	_check(city.afterglow_remaining("h4") == 120.0, "all afterglow remains bounded at existing tea limit")
	_check(city.record_concert_completion("h4") == 60.0 and city.venue_commissions.h4.used == 1, "unprepared concert does not reuse the consumed gift")
	_check(city.reserve_craft("h2", "h1", "h4", "festival") and city.set_house_role("h4", "residential").ok, "venue role can change during delivery")
	_check(city.workshop_status("h2").transit.is_empty() and city.workshop_status("h2").stock == 7 and not city.festival_status("h4").pending, "lost venue role refunds cargo and suspends historical demand")
	_check(city.undo().ok and city.festival_status("h4").pending and city.workshop_status("h2").transit.is_empty(), "undo restores venue demand without resurrecting refunded cargo")
	_check(city.reserve_craft("h5", "h3", "h4", "festival") and city.complete_craft("h5", "h3", "h4"), "another workshop can complete the repeated commission")
	_check(city.remove_house("h4").ok and city.festival_ready_venues().is_empty() and city.venue_commissions.h4.delivered == 2, "deleted venue retains its earned gift but cannot expose it")
	_check(State.new().restore(city.snapshot()).ok and city.undo().ok and city.festival_status("h4").ready, "dormant commission saves and resumes when original identity returns")
	_test_upgrade_coexistence()
	_test_invalid(in_transit, prepared)
	_test_legacy()
	if failures.is_empty():
		print("CITY_CREATION_COMMISSIONS PASS: %d checks; recurring demand, physical cargo, prepared concert, dormant history, strict persistence" % checks)
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)


func _city() -> CityCreationState:
	var city := State.new()
	city.initialize()
	city.set_house_role("h2", "workshop")
	city.set_house_role("h5", "workshop")
	city.produce_craft("h2", 8)
	city.produce_craft("h5", 4)
	return city


func _test_upgrade_coexistence() -> void:
	var city := _city()
	for tier in range(2):
		city.reserve_craft("h2", "h1", "h4")
		city.complete_craft("h2", "h1", "h4")
	city.record_concert_completion("h4")
	_check(city.reserve_craft("h2", "h1", "h4", "festival") and city.reserve_craft("h5", "h3", "h4"), "festival and final upgrade reserve independently")
	_check(State.new().restore(city.snapshot()).ok, "mixed cargo reservations conserve their distinct targets")
	_check(city.complete_craft("h5", "h3", "h4") and city.improvement_level("h4") == 3 and city.complete_craft("h2", "h1", "h4"), "festival is deliverable after three permanent tiers")
	_check(State.new().restore(city.snapshot()).ok, "permanent levels plus festival deliveries equal workshop outputs")
	city.record_concert_completion("h4")
	_check(city.reserve_craft("h2", "h1", "h4", "festival") and city.complete_craft("h2", "h1", "h4") and not city.reserve_craft("h5", "h3", "h4"), "fully upgraded venue supports repeat festival work only")


func _test_invalid(in_transit: Dictionary, prepared: Dictionary) -> void:
	var city := State.new()
	city.restore(prepared)
	var cases: Array[Dictionary] = []
	for value in [null, [], "ledger"]:
		var bad := prepared.duplicate(true)
		bad.venue_commissions = value
		cases.append(bad)
	for key in ["requested", "delivered", "used"]:
		for value in [-1, 0.5, true, "1", null, INF, NAN]:
			var bad := prepared.duplicate(true)
			bad.venue_commissions.h4[key] = value
			cases.append(bad)
	for row in [{"requested":2,"delivered":1,"used":0},{"requested":0,"delivered":1,"used":0},{"requested":1,"delivered":1,"used":2},{"requested":1,"delivered":1,"used":0,"extra":0}]:
		var bad := prepared.duplicate(true)
		bad.venue_commissions.h4 = row
		cases.append(bad)
	for id in ["h0", "h01", "h999", "c1", 1]:
		var bad := prepared.duplicate(true)
		bad.venue_commissions[id] = {"requested":0,"delivered":0,"used":0}
		cases.append(bad)
	var bad := prepared.duplicate(true)
	bad.life_progress.concerts = 0
	cases.append(bad)
	bad = prepared.duplicate(true)
	bad.venue_commissions.h4.delivered = 0
	cases.append(bad)
	for kind in ["unknown", 1, null, true]:
		bad = in_transit.duplicate(true)
		bad.workshop_supply.h2.transit.kind = kind
		cases.append(bad)
	bad = in_transit.duplicate(true)
	bad.workshop_supply.h5.stock -= 1
	bad.workshop_supply.h5.transit = {"home_id":"h3","target_id":"h4","kind":"festival"}
	cases.append(bad)
	bad = in_transit.duplicate(true)
	bad.workshop_supply.h2.transit.target_id = "h3"
	cases.append(bad)
	for candidate in cases:
		_check(not city.restore(candidate).ok and city.snapshot() == prepared, "malformed or duplicated commission is rejected with zero writes")
	bad = in_transit.duplicate(true)
	for house in bad.houses:
		if house.id == "h4": house.role = "residential"
	_check(city.restore(bad).ok and city.workshop_status("h2").transit.is_empty() and city.workshop_status("h2").stock == 8, "obsolete saved assignment refunds once on restore")


func _test_legacy() -> void:
	var city := _city()
	city.reserve_craft("h2", "h1", "h3")
	var legacy := city.snapshot()
	legacy.erase("venue_commissions")
	_check(State.new().restore(JSON.parse_string(JSON.stringify(legacy))).ok, "old two-field upgrade cargo and schema remain compatible")
	city.record_concert_completion("h4")
	city.initialize()
	_check(city.venue_commissions.is_empty(), "new town clears commission progress")


func _check(condition: bool, label: String) -> void:
	checks += 1
	if not condition: failures.append(label)
