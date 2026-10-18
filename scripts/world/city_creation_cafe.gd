extends RefCounted
## Foundation-style visit: bought bread, walk, occupy a real seat, then finish.
const Layout := preload("res://scripts/world/city_creation_cafe_layout.gd")
var layout_api:RefCounted=Layout.create_context()
const DURATION := 6.0
const SPEED := 0.83
const SEATED_BODY_Y := 0.28
var life: Node3D
var layouts: Dictionary = {}
var groups: Dictionary = {}

func _init(owner: Node3D) -> void:
	life = owner

func clear() -> void:
	groups.clear()
	layouts.clear()

func sync() -> void:
	var previous := layouts.duplicate(true)
	layouts.clear()
	for house: Dictionary in life.state.houses:
		if str(house.role) == "garden_cafe":
			var id := str(house.id)
			var plan: Dictionary = layout_api.layout(life.state, id)
			if not plan.is_empty() and life.connected_houses.has(id):
				var entry: Vector3 = life.positions[life.connected_houses[id]]
				plan.street_entry = Vector2(entry.x, entry.z)
			layouts[id] = plan
	for id in groups.keys():
		if not layouts.has(id) or layouts[id].is_empty() or previous.get(id, {}) != layouts[id] or not life.connected_houses.has(id):
			_cancel(str(id), previous.get(id, {}))
			continue
		var valid := true
		for home in groups[id].participants:
			var resident := _resident(str(home))
			if resident.is_empty() or not resident.has("cafe_visit") or not life.connected_houses.has(home):
				valid = false
				break
			if life._route(str(life.connected_houses[home]), str(life.connected_houses[id])).is_empty(): valid = false
			elif str(resident.cafe_visit.phase) == "walking":
				var route := _approach(resident.node.position, str(id), int(resident.cafe_visit.seat))
				if route.is_empty(): valid = false
				else:
					resident.route = route
					resident.index = 0
		if not valid: _cancel(str(id))

func status(id: String) -> Dictionary:
	var ledger: Dictionary = life.state.cafe_progress.get(id, {})
	var result := {"phase":"closed","arrived":0,"invited":0,"elapsed":0.0,"duration":DURATION,"groups":int(ledger.get("groups", 0)),"visits":int(ledger.get("visits", 0)),"afterglow_extension":life.state.cafe_afterglow_extension(id),"participants":[],"seated_count":0,"seated_seats":[]}
	if not layouts.has(id): return result
	if not life.connected_houses.has(id):
		result.phase = "disconnected"
		return result
	result.phase = "no_space" if layouts[id].is_empty() else "waiting"
	if not groups.has(id): return result
	var group: Dictionary = groups[id]
	result.participants = group.participants.duplicate()
	result.invited = group.participants.size()
	result.elapsed = float(group.elapsed)
	for home in group.participants:
		var resident := _resident(str(home))
		if not resident.is_empty() and resident.has("cafe_visit") and str(resident.cafe_visit.phase) == "seated":
			result.arrived += 1
			result.seated_seats.append(int(resident.cafe_visit.seat))
	result.seated_count = result.arrived
	result.phase = "tea" if group.phase == "tea" else ("leaving" if group.phase == "leaving" else ("gathering" if result.arrived != result.invited else "waiting"))
	if str(result.phase) == "waiting" and int(result.arrived) == 1:
		result.phase = "waitsecond"
	return result

func view() -> Dictionary:
	var result := {}
	for id in layouts: result[id] = status(str(id))
	return result

func _resident(home: String) -> Dictionary:
	for resident: Dictionary in life.residents:
		if str(resident.home_id) == home: return resident
	return {}

func try_visit(resident: Dictionary, reached: String = "") -> bool:
	if resident.has("cafe_visit") or resident.has("daily_snapshot") or not life._concert.is_empty() or not life.state.has_cafe_credit(str(resident.home_id)): return false
	var selected := ""
	var selected_seat := -1
	var selected_route: Array[Vector3] = []
	var best := INF
	for id in layouts:
		if layouts[id].is_empty() or not life.connected_houses.has(id): continue
		var group: Dictionary = groups.get(id, {"phase":"waiting","participants":[]})
		if group.phase != "waiting" or group.participants.size() >= 3: continue
		var occupied := {}
		for home in group.participants:
			var guest := _resident(str(home))
			if guest.has("cafe_visit"): occupied[int(guest.cafe_visit.seat)] = true
		var seat := 0
		while occupied.has(seat): seat += 1
		var route := _approach(resident.node.position, str(id), seat)
		if route.is_empty(): continue
		var length := 0.0
		for index in range(1, route.size()): length += route[index - 1].distance_to(route[index])
		if length > 32.0 or length >= best: continue
		best = length
		selected = str(id)
		selected_seat = seat
		selected_route = route
	if selected.is_empty(): return false
	var stops: Array = resident.stops
	var return_id := str(resident.destination_id)
	if not reached.is_empty(): return_id = str(stops[(stops.find(reached) + 1) % stops.size()])
	if not stops.has(return_id): return_id = str(resident.home_id)
	resident.cafe_visit = {"cafe_id":selected,"seat":selected_seat,"phase":"walking","return_id":return_id}
	resident.destination_id = selected
	resident.dwell_id = ""
	resident.service_pending = ""
	resident.wait = 0.0
	resident.paused = false
	resident.route = selected_route
	resident.index = 0
	if not groups.has(selected): groups[selected] = {"cafe_id":selected,"phase":"waiting","elapsed":0.0,"participants":[]}
	groups[selected].participants.append(str(resident.home_id))
	return true

func _approach(point: Vector3, id: String, seat: int) -> Array[Vector3]:
	var empty: Array[Vector3] = []
	if not life.connected_houses.has(id): return empty
	var route: Array[Vector3] = life._route_from_position(point, str(life.connected_houses[id]))
	if route.is_empty(): return empty
	var door: Vector3 = life.positions[life.connected_houses[id]]
	var local: Array[Vector2] = layout_api.route(life.state, id, Vector2(door.x, door.z), layouts[id].seats[seat])
	if local.is_empty(): return empty
	for at: Vector2 in local: route.append(Vector3(at.x, life.state.street_height(at) + 0.10, at.y))
	return route

func street_attachment(point: Vector3, finish: String) -> Array[Vector3]:
	var empty: Array[Vector3] = []
	var planar := Vector2(point.x, point.z)
	for id in layouts:
		if layouts[id].is_empty() or planar.distance_to(layouts[id].center) > 2.4 or not life.connected_houses.has(id): continue
		var continuation: Array[Vector3] = life._route(str(life.connected_houses[id]), finish)
		if continuation.is_empty(): continue
		var door: Vector3 = life.positions[life.connected_houses[id]]
		var local: Array[Vector2] = layout_api.route(life.state, str(id), planar, Vector2(door.x, door.z))
		if local.is_empty(): continue
		var result: Array[Vector3] = []
		for at: Vector2 in local: result.append(Vector3(at.x, life.state.street_height(at) + 0.10, at.y))
		result.append_array(continuation)
		return result
	return empty

func tick(delta: float) -> void:
	for id in groups.keys():
		if not groups.has(id): continue
		var group: Dictionary = groups[id]
		var was_tea: bool = group.phase == "tea"
		for home in group.participants.duplicate():
			var resident := _resident(str(home))
			if resident.is_empty() or not resident.has("cafe_visit"):
				_cancel(str(id))
				break
			var visit: Dictionary = resident.cafe_visit
			if str(visit.phase) == "seated": continue
			if _walk(resident, delta):
				if visit.phase == "leaving":
					group.participants.erase(home)
					_restore_daily(resident, false)
				else:
					visit.phase = "seated"
					resident.node.get_child(0).position.y = SEATED_BODY_Y
					var to_center: Vector2 = layouts[id].center - layouts[id].seats[int(visit.seat)]
					resident.node.rotation.y = atan2(to_center.x, to_center.y)
		if not groups.has(id): continue
		if group.participants.is_empty():
			groups.erase(id)
			continue
		if was_tea:
			group.elapsed = minf(DURATION, float(group.elapsed) + delta)
			if float(group.elapsed) >= DURATION:
				var homes: Array = group.participants.duplicate()
				if life.state.complete_tea(str(id), homes):
					group.phase = "leaving"
					group.elapsed = 0.0
					for home in homes:
						var resident := _resident(str(home))
						resident.cafe_visit.phase = "leaving"
						resident.node.get_child(0).position.y = 0.0
						_set_exit(resident, str(id))
					if life.cafe_callback.is_valid(): life.cafe_callback.call(str(id), homes)
				else: _cancel(str(id))
		elif group.phase == "waiting":
			var current := status(str(id))
			if int(current.arrived) >= 2 and current.arrived == current.invited:
				group.phase = "tea"
				group.elapsed = 0.0

func _walk(resident: Dictionary, delta: float) -> bool:
	if life.get("tram")!=null and life.tram.intercept(resident,delta):return false
	var route: Array[Vector3] = resident.route
	var index := int(resident.index)
	if index >= route.size(): return true
	var node: Node3D = resident.node
	var before := Vector2(node.position.x,node.position.z)
	var target: Vector3 = route[index]
	var step: float=delta*SPEED*life.state.walking_multiplier(str(resident.home_id))
	if node.position.distance_to(target) < step:
		node.position = target
		resident.index = index + 1
	else:
		var direction := (target - node.position).normalized()
		node.position += direction * step
		node.rotation.y = atan2(direction.x, direction.z)
	node.position.y = life.state.street_height(Vector2(node.position.x, node.position.z)) + 0.10
	life.record_travel("resident/"+str(resident.home_id),before,Vector2(node.position.x,node.position.z))
	node.get_child(0).position.y = sin(life.time * 9.0 + float(resident.phase)) * 0.025
	return false

func _set_exit(resident: Dictionary, id: String) -> void:
	var point := Vector2(resident.node.position.x, resident.node.position.z)
	var entry: Vector3 = life.positions[life.connected_houses[id]]
	var local: Array[Vector2] = layout_api.route(life.state, id, point, Vector2(entry.x, entry.z))
	var route: Array[Vector3] = []
	for at: Vector2 in local: route.append(Vector3(at.x, life.state.street_height(at) + 0.10, at.y))
	resident.route = route
	resident.index = 0

func _restore_daily(resident: Dictionary, exit_first: bool, canceled_plan: Dictionary = {}) -> void:
	var visit: Dictionary = resident.cafe_visit
	var id := str(visit.cafe_id)
	var prefix: Array[Vector3] = []
	if exit_first and layouts.has(id) and not layouts[id].is_empty() and life.connected_houses.has(id):
		_set_exit(resident, id)
		prefix.assign(resident.route)
	elif exit_first and not canceled_plan.is_empty() and canceled_plan.has("street_entry"):
		var planar := Vector2(resident.node.position.x, resident.node.position.z)
		var local: Array[Vector2] = layout_api.route_with_plan(life.state, id, canceled_plan, planar, canceled_plan.street_entry)
		for at: Vector2 in local: prefix.append(Vector3(at.x, life.state.street_height(at) + 0.10, at.y))
	resident.erase("cafe_visit")
	resident.node.get_child(0).position.y = 0.0
	resident.destination_id = str(visit.return_id)
	resident.dwell_id = ""
	resident.service_pending = ""
	resident.wait = 0.0
	resident.paused = false
	if not prefix.is_empty() and life.connected_houses.has(resident.destination_id):
		var onward: Array[Vector3] = life._route_from_position(prefix[-1], str(life.connected_houses[resident.destination_id]))
		if not onward.is_empty():
			prefix.append_array(onward)
			resident.route = prefix
			resident.index = 0
			return
	life._resume(resident)

func _cancel(id: String, canceled_plan: Dictionary = {}) -> void:
	if not groups.has(id): return
	var homes: Array = groups[id].participants.duplicate()
	groups.erase(id)
	for home in homes:
		var resident := _resident(str(home))
		if not resident.is_empty() and resident.has("cafe_visit"): _restore_daily(resident, true, canceled_plan)

func cancel_all() -> void:
	for id in groups.keys(): _cancel(str(id))

func checkpoint() -> Array:
	return groups.values().duplicate(true)

func restore(data: Dictionary) -> void:
	groups.clear()
	var saved_people := {}
	for entry: Dictionary in data.get("residents", []):
		if entry.has("cafe_visit"): saved_people[str(entry.home_id)] = entry
	for saved: Dictionary in data.get("cafe_groups", []):
		var id := str(saved.cafe_id)
		var valid: bool = layouts.has(id) and not layouts[id].is_empty() and life.connected_houses.has(id)
		var candidates: Array[Dictionary] = []
		for home in saved.participants:
			var resident := _resident(str(home))
			if resident.is_empty() or not saved_people.has(home):
				valid = false
				continue
			var entry: Dictionary = saved_people[home]
			var visit: Dictionary = entry.cafe_visit
			var point := Vector3(float(entry.position[0]), life.state.street_height(Vector2(entry.position[0], entry.position[1])) + 0.10, float(entry.position[1]))
			if not valid: continue
			var route: Array[Vector3] = []
			if str(visit.phase) == "walking": route = _approach(point, id, int(visit.seat))
			else:
				var target: Vector2 = layouts[id].seats[int(visit.seat)]
				if str(visit.phase) == "seated" and Vector2(point.x, point.z).distance_to(target) > 0.15: valid = false
				var local: Array[Vector2] = layout_api.route(life.state, id, Vector2(point.x, point.z), Vector2(life.positions[life.connected_houses[id]].x, life.positions[life.connected_houses[id]].z))
				for at: Vector2 in local: route.append(Vector3(at.x, life.state.street_height(at) + 0.10, at.y))
			if route.is_empty() or (visit.phase != "leaving" and not life.state.has_cafe_credit(str(home))) or not resident.stops.has(str(visit.return_id)): valid = false
			candidates.append({"resident":resident,"entry":entry,"point":point,"route":route})
		if not valid or candidates.size() != saved.participants.size():
			# A forged remote dwell cannot create a completed six-second visit.
			for row in candidates:
				var resident: Dictionary = row.resident
				if life.connected_houses.has(resident.home_id) and not life._route_from_position(row.point, str(life.connected_houses[resident.home_id])).is_empty():
					resident.node.position = row.point
					life._resume(resident)
			continue
		groups[id] = saved.duplicate(true)
		for row in candidates:
			var resident: Dictionary = row.resident
			resident.node.position = row.point
			resident.node.rotation.y = float(row.entry.yaw)
			resident.cafe_visit = row.entry.cafe_visit.duplicate(true)
			resident.cafe_visit.seat = int(resident.cafe_visit.seat)
			resident.destination_id = id
			resident.dwell_id = ""
			resident.service_pending = ""
			resident.wait = 0.0
			resident.paused = false
			resident.route = row.route
			resident.index = 0
			if str(resident.cafe_visit.phase) == "seated": resident.node.get_child(0).position.y = SEATED_BODY_Y
