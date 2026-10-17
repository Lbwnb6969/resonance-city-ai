extends RefCounted
## Foundation's fulfilled need becomes a finite, household-owned invitation.
## Graph connectivity is cached; actual body-to-venue routing occurs once on invite.
var life: Node3D
var elapsed := 0.0
var _signature: Array = []
var _reachable: Dictionary = {}
var connectivity_rebuilds := 0

func _init(owner: Node3D) -> void:
	life = owner

func _refresh() -> void:
	if _signature == life._network_signature: return
	_signature = life._network_signature.duplicate(true)
	_reachable.clear()
	connectivity_rebuilds += 1
	for house: Dictionary in life.state.houses:
		if house.role not in ["venue","symphony_hall"] or not life.connected_houses.has(house.id): continue
		var homes: Array[String] = []
		for resident: Dictionary in life.residents:
			var home := str(resident.home_id)
			if life.connected_houses.has(home) and not life._route(str(life.connected_houses[home]), str(life.connected_houses[house.id])).is_empty(): homes.append(home)
		_reachable[house.id] = homes

func _tea_busy() -> bool:
	for group: Dictionary in life.cafe.groups.values():
		if group.phase in ["tea", "leaving"]: return true
	return false

func status(venue_id: String) -> Dictionary:
	_refresh()
	var enabled := false
	var venue := false
	for house: Dictionary in life.state.houses:
		if str(house.id) == venue_id:
			venue = house.role in ["venue","symphony_hall"]
			enabled = venue and bool(house.get("auto_matinee", false))
	var ready := 0
	for resident: Dictionary in life.residents:
		if resident.paused or resident.has("cafe_visit"): continue
		if _reachable.get(venue_id, []).has(str(resident.home_id)) and life.state.has_matinee_credit(str(resident.home_id)): ready += 1
	var concert: Dictionary = life.concert_status()
	var phase := "waiting"
	if concert.phase != "idle": phase = str(concert.phase) if concert.venue_id == venue_id else "busy"
	elif not enabled: phase = "disabled"
	elif not _reachable.has(venue_id): phase = "disconnected"
	elif life.state.matinee_cooldown > 0.0: phase = "cooldown"
	elif _tea_busy(): phase = "tea"
	var row: Dictionary = life.state.matinee_progress.get(venue_id, {})
	return {"enabled":enabled,"phase":phase,"ready":ready,"required":2,"cooldown":float(life.state.matinee_cooldown),"completed":int(row.get("completed", 0)),"sponsors":int(row.get("sponsors", 0)),"source":str(concert.get("source", "manual"))}

func tick(delta: float) -> void:
	elapsed += delta
	if elapsed < 1.0: return
	elapsed = fmod(elapsed, 1.0)
	if not life._concert.is_empty() or life.state.matinee_cooldown > 0.0 or _tea_busy(): return
	_refresh()
	var venues: Array[String] = []
	for house: Dictionary in life.state.houses:
		if house.role in ["venue","symphony_hall"] and house.get("auto_matinee", false): venues.append(str(house.id))
	venues.sort_custom(func(a: String, b: String): return int(a.substr(1)) < int(b.substr(1)))
	var last := str(life.state.matinee_last_venue)
	var next := (venues.find(last) + 1) % maxi(1, venues.size())
	for offset in range(venues.size()):
		var venue := venues[(next + offset) % venues.size()]
		if int(status(venue).ready) < 2: continue
		if life.invite_concert(venue, true).ok: return
