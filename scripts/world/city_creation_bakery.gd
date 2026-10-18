extends RefCounted
## One second household member walks to work; only attended ovens make bread.
const BAKE_DURATION := 6.0
const REST_DURATION := 4.0
const SHIFT_BATCHES := 3
const Frontage := preload("res://scripts/world/city_creation_frontage.gd")
var life: Node3D
var workers: Array[Dictionary] = []

func _init(owner_life: Node3D) -> void:
	life = owner_life

func clear() -> void:
	for worker: Dictionary in workers: worker.node.queue_free()
	workers.clear()

func sync() -> void:
	var occupied_homes := {}
	if life.workshop != null:
		for worker: Dictionary in life.workshop.workers: occupied_homes[worker.home_id] = true
	var occupied_shops := {}
	for index in range(workers.size() - 1, -1, -1):
		var worker: Dictionary = workers[index]
		if str(life._roles.get(worker.home_id, "")) != "residential" or str(life._roles.get(worker.bakery_id, "")) != "bakery":
			worker.node.queue_free()
			workers.remove_at(index)
			continue
		occupied_homes[worker.home_id] = true
		occupied_shops[worker.bakery_id] = true
		_replan(worker)
	var shops: Array = life._roles.keys()
	shops.sort()
	for shop: String in shops:
		if life._roles[shop] != "bakery" or occupied_shops.has(shop) or not life.connected_houses.has(shop): continue
		var home := ""
		var best_length := INF
		var homes: Array = life._roles.keys()
		homes.sort()
		for candidate: String in homes:
			if life._roles[candidate] != "residential" or occupied_homes.has(candidate) or not life.connected_houses.has(candidate): continue
			var route: Array[Vector3] = life._route(str(life.connected_houses[candidate]),str(life.connected_houses[shop]))
			if route.is_empty(): continue
			var length := 0.0
			for at in range(1,route.size()): length += route[at-1].distance_to(route[at])
			if length < best_length - 0.00001:
				best_length = length
				home = candidate
		if home.is_empty(): continue
		var worker := _new_worker(home,shop)
		workers.append(worker)
		_replan(worker)
		occupied_homes[home] = true

func _new_worker(home: String, shop: String) -> Dictionary:
	var node: Node3D = life._person(workers.size())
	node.name = "Baker_" + home + "_" + shop
	# A light apron distinguishes the working household member.
	var cloth: StandardMaterial3D = node.get_child(0).get_child(0).material_override
	cloth.albedo_color = Color("eee0b8")
	life.add_child(node)
	node.position = _target(home) if life.connected_houses.has(home) else _door_position(home)
	return {"node":node,"home_id":home,"bakery_id":shop,"phase":"walking","resume_phase":"walking","elapsed":0.0,"batches":0,"route":[],"index":0}

func _connected(worker: Dictionary) -> bool:
	return life.connected_houses.has(worker.home_id) and life.connected_houses.has(worker.bakery_id) and not life._route(str(life.connected_houses[worker.home_id]),str(life.connected_houses[worker.bakery_id])).is_empty()

func _target(id: String) -> Vector3:
	return life.positions[life.connected_houses[id]] + Vector3(0,0.10,0)

func _door_position(id: String) -> Vector3:
	var entrances: Array[Dictionary] = life.state.house_entrances(id)
	if not entrances.is_empty():
		var at: Vector2 = entrances[0].at
		return Vector3(at.x,life.state.street_height(at)+0.10,at.y)
	return Vector3.ZERO

func _near_door(id: String, point: Vector3) -> bool:
	for entrance: Dictionary in life.state.house_entrances(id):
		if Vector2(entrance.at).distance_to(Vector2(point.x,point.z)) < 0.97: return true
	# A deleted approach leaves the worker physically outside the surviving
	# wall. Validate that paused checkpoint without inventing an active door
	# or allowing attendance to continue while the street is disconnected.
	for house: Dictionary in life.state.houses:
		if str(house.id)!=id: continue
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0 or str(cell.kind)!="room": continue
			for side: Vector2i in Frontage.SIDES:
				if not Frontage.exposed(house,cell,side): continue
				var anchor: Vector2=Frontage.center(house,cell)+Vector2(side)*1.52
				if anchor.distance_to(Vector2(point.x,point.z))<0.15: return true
	return false

func _pause(worker: Dictionary, phase: String) -> void:
	worker.phase = "paused"
	worker.resume_phase = phase
	worker.route = []
	worker.index = 0

func _replan(worker: Dictionary) -> void:
	var phase := str(worker.resume_phase if worker.phase == "paused" else worker.phase)
	if not _connected(worker):
		_pause(worker,phase)
		return
	var destination := str(worker.home_id if phase in ["returning","resting"] else worker.bakery_id)
	var target := _target(destination)
	worker.node.position.y = life.state.street_height(Vector2(worker.node.position.x,worker.node.position.z)) + 0.10
	if phase in ["baking","resting"] and worker.node.position.distance_to(target) < 0.15:
		worker.phase = phase
		worker.resume_phase = phase
		return
	# A moved entrance requires travel again, never a remote oven.
	if phase in ["baking","resting"]:
		phase = "returning" if phase == "resting" else "walking"
		worker.elapsed = 0.0
	var route: Array[Vector3] = life._route_from_position(worker.node.position,str(life.connected_houses[destination]))
	if route.is_empty():
		_pause(worker,phase)
		return
	worker.phase = phase
	worker.resume_phase = phase
	worker.route = route
	worker.index = 0

func tick(delta: float) -> void:
	for worker: Dictionary in workers:
		var phase := str(worker.phase)
		if phase == "paused": continue
		if phase in ["walking","returning"]:
			_walk(worker,delta)
		elif phase == "baking":
			_bake(worker, delta)
		elif phase == "resting":
			worker.elapsed = minf(REST_DURATION,float(worker.elapsed)+delta)
			if float(worker.elapsed) >= REST_DURATION:
				worker.elapsed = 0.0
				worker.batches = 0
				worker.phase = "walking"
				_replan(worker)

func _bake(worker: Dictionary, delta: float) -> void:
	var shop := str(worker.bakery_id)
	var bonus_remaining: float = life.state.afterglow_remaining(shop)
	var site_speed: float = life.state.site_production_multiplier(shop)
	var used := 0.0
	# elapsed remains normalized base-6-second work in saves. Integrate across
	# both afterglow expiry and batch boundaries without extending the bonus
	# over an entire long simulation step or discarding completed work.
	while used < delta and str(worker.phase) == "baking":
		var batch: int = life.state.bakery_batch_size(shop)
		var supply: Dictionary = life.state.bakery_status(shop)
		if not bool(supply.open) or int(supply.stock) + batch > int(supply.capacity): return
		var speed := site_speed * (1.25 if used < bonus_remaining else 1.0)
		var period := delta - used
		if used < bonus_remaining: period = minf(period, bonus_remaining - used)
		var needed := maxf(0.0, BAKE_DURATION - float(worker.elapsed)) / speed
		var step := minf(period, needed)
		worker.elapsed = minf(BAKE_DURATION, float(worker.elapsed) + step * speed)
		used += step
		if float(worker.elapsed) < BAKE_DURATION - 0.000001: continue
		if not life.state.produce_bread(shop, batch): return
		if life.production_callback.is_valid(): life.production_callback.call(shop, batch)
		worker.elapsed = 0.0
		worker.batches = int(worker.batches) + 1
		if int(worker.batches) >= SHIFT_BATCHES:
			worker.phase = "returning"
			_replan(worker)

func _walk(worker: Dictionary, delta: float) -> void:
	var route: Array = worker.route
	var index := int(worker.index)
	if index >= route.size():
		var destination := str(worker.home_id if worker.phase == "returning" else worker.bakery_id)
		if worker.node.position.distance_to(_target(destination)) > 0.15:
			_pause(worker,str(worker.phase))
			return
		worker.phase = "resting" if worker.phase == "returning" else "baking"
		worker.resume_phase = worker.phase
		worker.elapsed = 0.0
		return
	var node: Node3D = worker.node
	var before := Vector2(node.position.x,node.position.z)
	var target: Vector3 = route[index]
	var direction := target - node.position
	var step: float=delta*.83*life.state.walking_multiplier(str(worker.home_id))
	if direction.length() <= step:
		node.position = target
		worker.index = index + 1
	else:
		node.position += direction.normalized() * step
		node.rotation.y = atan2(direction.x,direction.z)
	node.position.y = life.state.street_height(Vector2(node.position.x,node.position.z)) + 0.10
	life.record_travel("baker/"+str(worker.home_id),before,Vector2(node.position.x,node.position.z))
	node.get_child(0).position.y = sin(life.time * 9.0) * 0.025

func status(id: String) -> Dictionary:
	var result: Dictionary = life.state.bakery_status(id).duplicate(true)
	result.afterglow_remaining = life.state.afterglow_remaining(id)
	result.production_multiplier = life.state.production_multiplier(id)
	result.bonus = result.afterglow_remaining > 0.0
	result.merge({"worker_phase":"unassigned","worker_home_id":"","worker_name":"","elapsed":0.0,"duration":BAKE_DURATION,"batches":0})
	for worker: Dictionary in workers:
		if str(worker.bakery_id) != id: continue
		result.worker_phase = str(worker.phase)
		result.worker_home_id = str(worker.home_id)
		result.elapsed = float(worker.elapsed)
		result.duration = REST_DURATION if str(worker.resume_phase if worker.phase == "paused" else worker.phase) == "resting" else BAKE_DURATION
		result.batches = int(worker.batches)
		for house: Dictionary in life.state.houses:
			if str(house.id) == str(worker.home_id): result.worker_name = str(house.name) + "的面包师"
		break
	return result

func checkpoint() -> Array[Dictionary]:
	var result: Array[Dictionary] = []
	for worker: Dictionary in workers:
		var node: Node3D = worker.node
		result.append({"home_id":str(worker.home_id),"bakery_id":str(worker.bakery_id),"position":[node.position.x,node.position.z],"yaw":node.rotation.y,"phase":str(worker.phase),"resume_phase":str(worker.resume_phase if worker.phase == "paused" else worker.phase),"elapsed":float(worker.elapsed),"batches":int(worker.batches)})
	return result

func restore(data: Variant) -> void:
	if not data is Array: return
	var valid: Array[Dictionary] = []
	var homes := {}
	var shops := {}
	for entry: Variant in data:
		if not entry is Dictionary: continue
		var home := str(entry.get("home_id", ""))
		var shop := str(entry.get("bakery_id", ""))
		if homes.has(home) or shops.has(shop) or str(life._roles.get(home,"")) != "residential" or str(life._roles.get(shop,"")) != "bakery": continue
		var craft_home := false
		if life.workshop != null:
			for artisan: Dictionary in life.workshop.workers:
				if str(artisan.home_id) == home: craft_home = true
		if craft_home: continue
		var worker := _new_worker(home,shop)
		if not _restore_worker(worker,entry):
			worker.node.queue_free()
			continue
		valid.append(worker)
		homes[home] = true
		shops[shop] = true
	clear()
	workers = valid
	sync()

func _restore_worker(worker: Dictionary, saved: Dictionary) -> bool:
	var at: Variant = saved.get("position", null)
	if not at is Array or at.size() != 2: return false
	var phase := str(saved.get("phase", ""))
	var resume_phase := str(saved.get("resume_phase", ""))
	var elapsed := float(saved.get("elapsed", -1.0))
	var batches := int(saved.get("batches", -1))
	if phase not in ["walking","baking","returning","resting","paused"] or resume_phase not in ["walking","baking","returning","resting"]: return false
	var effective := resume_phase if phase == "paused" else phase
	if elapsed < 0.0 or elapsed > (REST_DURATION if effective == "resting" else BAKE_DURATION) or batches < 0 or batches > SHIFT_BATCHES: return false
	if effective in ["walking","returning"] and elapsed != 0.0: return false
	if effective in ["returning","resting"] and batches != SHIFT_BATCHES: return false
	if effective in ["walking","baking"] and batches >= SHIFT_BATCHES: return false
	var point := Vector3(float(at[0]),0,float(at[1]))
	if not is_finite(point.x) or not is_finite(point.z) or not is_finite(elapsed): return false
	point.y = life.state.street_height(Vector2(point.x,point.z)) + 0.10
	var destination := str(worker.home_id if effective in ["returning","resting"] else worker.bakery_id)
	if not _connected(worker):
		# A removed street can strand a saved commute. It is legal only as a
		# pause: no arrival or batch is inferred until real attachment returns.
		if phase != "paused" or not life.state.WORLD_RECT.has_point(Vector2(point.x,point.z)): return false
		if effective in ["baking","resting"] and not _near_door(destination,point): return false
		worker.node.position = point
		worker.node.rotation.y = float(saved.get("yaw",0.0))
		worker.phase = "paused"
		worker.resume_phase = effective
		worker.elapsed = elapsed
		worker.batches = batches
		return true
	if effective in ["baking","resting"] and point.distance_to(_target(destination)) > 0.15: return false
	var route: Array[Vector3] = life._route_from_position(point,str(life.connected_houses[destination]))
	if route.is_empty(): return false
	worker.node.position = point
	worker.node.rotation.y = float(saved.get("yaw",0.0))
	worker.phase = effective
	worker.resume_phase = effective
	worker.elapsed = elapsed
	worker.batches = batches
	worker.route = route
	worker.index = 0
	return true
