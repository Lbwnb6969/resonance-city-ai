extends RefCounted
## The second household member makes, carries and installs real chimes.
const CRAFT_DURATION := 8.0
const INSTALL_DURATION := 2.0
const REST_DURATION := 4.0
const SHIFT_DELIVERIES := 3
const RANGE := 22.0
const MOVING := ["to_workshop", "to_target", "returning", "to_home"]
const PHASES := ["to_workshop", "crafting", "to_target", "installing", "returning", "to_home", "resting"]
var life: Node3D
var workers: Array[Dictionary] = []
var refund_orphans := false
var _chime_material: StandardMaterial3D
var _recipient_cache := {}

func _init(owner_life: Node3D) -> void:
	life = owner_life
	_chime_material = StandardMaterial3D.new()
	_chime_material.albedo_color = Color("cda15f")
	_chime_material.roughness = 0.85

func clear() -> void:
	for worker: Dictionary in workers: worker.node.queue_free()
	workers.clear()
	_recipient_cache.clear()

func prune() -> void:
	for index in range(workers.size() - 1, -1, -1):
		var worker: Dictionary = workers[index]
		if str(life._roles.get(worker.home_id, "")) == "residential" and str(life._roles.get(worker.workshop_id, "")) == str(worker.service_role): continue
		life.state.return_craft(str(worker.workshop_id))
		worker.node.queue_free()
		workers.remove_at(index)

func sync() -> void:
	prune()
	_recipient_cache.clear()
	var homes := {}
	var shops := {}
	for baker: Dictionary in life.bakery.workers: homes[baker.home_id] = true
	for worker: Dictionary in workers:
		homes[worker.home_id] = true
		shops[worker.workshop_id] = true
		var transit: Dictionary = life.state.workshop_status(str(worker.workshop_id)).transit
		if refund_orphans and not transit.is_empty() and str(transit.home_id) != str(worker.home_id): life.state.return_craft(str(worker.workshop_id))
		_replan(worker)
	var ids: Array = life._roles.keys()
	ids.sort()
	for shop: String in ids:
		if str(life._roles[shop]) not in ["workshop", "atelier", "clockmaker"] or shops.has(shop): continue
		# No accepted checkpoint owns this reservation. Refund before a new
		# household is selected so cargo cannot remain permanently stranded.
		if refund_orphans and not life.state.workshop_status(shop).transit.is_empty(): life.state.return_craft(shop)
		var home := ""
		var length := INF
		for candidate: String in ids:
			if str(life._roles[candidate]) != "residential" or homes.has(candidate): continue
			var route := _between(candidate, shop)
			if route.is_empty(): continue
			var distance := _length(route)
			if distance < length - 0.00001:
				home = candidate
				length = distance
		if home.is_empty(): continue
		var worker := _new_worker(home, shop)
		workers.append(worker)
		homes[home] = true
		_replan(worker)

func _new_worker(home: String, shop: String) -> Dictionary:
	var node: Node3D = life._person(workers.size() + 3)
	node.name = "Artisan_" + home + "_" + shop
	var cloth: StandardMaterial3D = node.get_child(0).get_child(0).material_override
	cloth.albedo_color = Color("6f9e98")
	var artist := str(life._roles.get(shop,"")) == "atelier"
	var mechanic := str(life._roles.get(shop,""))=="clockmaker"
	if artist: cloth.albedo_color = Color("a477a5")
	var carry := Node3D.new()
	carry.name = "CarriedChime"
	carry.position = Vector3(0.12, 0.32, 0.10)
	for index in range(3):
		var tube := MeshInstance3D.new()
		var mesh := CylinderMesh.new()
		mesh.top_radius = 0.018
		mesh.bottom_radius = 0.018
		mesh.height = 0.15 + index * 0.025
		mesh.radial_segments = 5
		tube.mesh = mesh
		tube.material_override = _chime_material
		tube.position.x = (index - 1) * 0.045
		carry.add_child(tube)
	if artist:
		for child in carry.get_children(): child.free()
		var canvas := MeshInstance3D.new()
		var panel := BoxMesh.new(); panel.size = Vector3(.28,.32,.055)
		canvas.mesh = panel
		var paint := StandardMaterial3D.new(); paint.albedo_color = Color("b86665")
		canvas.material_override = paint; carry.add_child(canvas)
		carry.name = "CarriedArtwork"
	if mechanic:
		cloth.albedo_color=Color("aa8956")
		for child in carry.get_children():child.free()
		var box:=MeshInstance3D.new();var mesh:=BoxMesh.new();mesh.size=Vector3(.27,.19,.23);box.mesh=mesh
		var material:=StandardMaterial3D.new();material.albedo_color=Color("b79358");box.material_override=material;carry.add_child(box)
		carry.name="CarriedMusicBox"
	carry.visible = false
	node.get_child(0).add_child(carry)
	life.add_child(node)
	node.position = _target(home) if life.connected_houses.has(home) else life.bakery._door_position(home)
	return {"service_role":str(life._roles[shop]),"node":node,"carry":carry,"home_id":home,"workshop_id":shop,"target_id":"","phase":"to_workshop","resume_phase":"to_workshop","elapsed":0.0,"deliveries":0,"route":[],"index":0}

func _between(from: String, to: String) -> Array[Vector3]:
	if not life.connected_houses.has(from) or not life.connected_houses.has(to): return []
	return life._route(str(life.connected_houses[from]), str(life.connected_houses[to]))

func _length(route: Array[Vector3]) -> float:
	var result := 0.0
	for index in range(1, route.size()): result += route[index - 1].distance_to(route[index])
	return result

func _target(id: String) -> Vector3:
	return life.positions[life.connected_houses[id]] + Vector3(0, 0.10, 0)

func _destination(worker: Dictionary, phase: String) -> String:
	if phase in ["to_home", "resting"]: return str(worker.home_id)
	if phase in ["to_target", "installing"]: return str(worker.target_id)
	return str(worker.workshop_id)

func _cargo(worker: Dictionary) -> bool:
	var transit: Dictionary = life.state.workshop_status(str(worker.workshop_id)).transit
	return not transit.is_empty() and str(transit.home_id) == str(worker.home_id) and str(transit.target_id) == str(worker.target_id)

func _pause(worker: Dictionary, phase: String) -> void:
	worker.phase = "paused"
	worker.resume_phase = phase
	worker.route = []
	worker.index = 0

func _replan(worker: Dictionary) -> void:
	var phase := str(worker.resume_phase if worker.phase == "paused" else worker.phase)
	var transit: Dictionary = life.state.workshop_status(str(worker.workshop_id)).transit
	if not transit.is_empty() and str(transit.home_id) == str(worker.home_id):
		if str(worker.target_id) != str(transit.target_id) or phase not in ["to_target", "installing"]:
			worker.target_id = str(transit.target_id)
			worker.elapsed = 0.0
			phase = "to_target"
		worker.carry.visible = true
	if phase in ["to_target", "installing"] and not _cargo(worker):
		worker.target_id = ""
		worker.carry.visible = false
		worker.elapsed = 0.0
		phase = "to_workshop"
	var destination := _destination(worker, phase)
	if _between(str(worker.home_id), str(worker.workshop_id)).is_empty() or not life.connected_houses.has(destination):
		_pause(worker, phase)
		return
	worker.node.position.y = life.state.street_height(Vector2(worker.node.position.x, worker.node.position.z)) + 0.10
	if phase in ["crafting", "installing", "resting"] and worker.node.position.distance_to(_target(destination)) < 0.15:
		worker.phase = phase
		worker.resume_phase = phase
		return
	if phase in ["crafting", "installing", "resting"]:
		phase = {"crafting":"to_workshop", "installing":"to_target", "resting":"to_home"}[phase]
		worker.elapsed = 0.0
	var route: Array[Vector3] = life._route_from_position(worker.node.position, str(life.connected_houses[destination]))
	if route.is_empty():
		_pause(worker, phase)
		return
	worker.phase = phase
	worker.resume_phase = phase
	worker.route = route
	worker.index = 0

func _recipient(worker: Dictionary) -> String:
	return str(_recipient_order(worker).target)

func _recipient_order(worker: Dictionary) -> Dictionary:
	var shop := str(worker.workshop_id)
	if str(life._roles.get(shop,"")) in ["atelier","clockmaker"]: return _art_order(worker,"musicbox" if life._roles[shop]=="clockmaker" else "art")
	# Geometry/roles change on a revision; installed tiers and reservations
	# change independently during simulation. Reuse real routes between those
	# changes rather than search the city every frame while a shelf is full.
	var signature := [life.last_revision, life.state.house_improvements.hash(), life.state.workshop_supply.hash(), life.state.venue_commissions.hash(),int(worker.deliveries)]
	var cached: Dictionary = _recipient_cache.get(shop, {})
	if cached.get("signature", []) == signature: return cached
	var origin: Vector3 = _target(shop)
	var reserved := {}
	var festival_reserved := {}
	for row: Dictionary in life.state.workshop_supply.values():
		var transit: Dictionary = row.transit
		if transit.is_empty(): continue
		if str(transit.get("kind","upgrade"))=="festival": festival_reserved[str(transit.target_id)]=true
		elif str(transit.get("kind","upgrade")) == "upgrade": reserved[str(transit.target_id)] = int(reserved.get(str(transit.target_id), 0)) + 1
	var best := ""
	var best_level := 4
	var best_length := INF
	var festival := ""
	var festival_length := INF
	var ids: Array = life._roles.keys()
	ids.sort()
	for id: String in ids:
		if str(life._roles[id]) not in ["residential", "venue"] or not life.connected_houses.has(id): continue
		var level: int = life.state.improvement_level(id)
		var pending: bool = str(life._roles[id])=="venue" and bool(life.state.festival_status(id).pending) and not festival_reserved.has(id)
		# Daily improvements stay local; a real festival order can be carried
		# anywhere on this connected street network, including the 80m canvas.
		var upgrade: bool = level + int(reserved.get(id, 0)) < 3 and origin.distance_to(_target(id)) <= RANGE
		if not upgrade and not pending: continue
		var route := _between(shop, id)
		if route.is_empty(): continue
		var length := _length(route)
		if pending and length<festival_length-0.00001:
			festival=id
			festival_length=length
		if upgrade and (level < best_level or (level == best_level and length < best_length - 0.00001)):
			best = id
			best_level = level
			best_length = length
	# One of each three deliveries can answer a festival order while permanent
	# upgrades remain. Once neighbors are complete, every real order is served.
	var use_festival := not festival.is_empty() and (int(worker.deliveries)==1 or best.is_empty())
	_recipient_cache[shop] = {"signature":signature,"target":festival if use_festival else best,"kind":"festival" if use_festival else "upgrade"}
	return _recipient_cache[shop]

func _art_order(worker: Dictionary,kind: String="art") -> Dictionary:
	var shop := str(worker.workshop_id)
	var signature := [life.last_revision, life.state.house_culture.hash(),life.state.house_clockwork.hash(), life.state.workshop_supply.hash()]
	var cached: Dictionary = _recipient_cache.get(shop,{})
	if cached.get("signature",[]) == signature: return cached
	var reserved := {}
	for row: Dictionary in life.state.workshop_supply.values():
		if row.transit.get("kind","") == kind: reserved[row.transit.target_id] = int(reserved.get(row.transit.target_id,0))+1
	var best := ""; var best_level := 3; var best_length := INF
	var ids: Array = life._roles.keys(); ids.sort()
	for id: String in ids:
		if life._roles[id] != "residential" or not life.connected_houses.has(id): continue
		var level: int = life.state.mechanism_level(id) if kind=="musicbox" else life.state.culture_level(id)
		if level + int(reserved.get(id,0)) >= 2 or _target(shop).distance_to(_target(id)) > RANGE: continue
		var route := _between(shop,id)
		if route.is_empty(): continue
		var distance := _length(route)
		if level < best_level or (level == best_level and distance < best_length):
			best = id; best_level = level; best_length = distance
	_recipient_cache[shop] = {"signature":signature,"target":best,"kind":kind}
	return _recipient_cache[shop]

func tick(delta: float) -> void:
	for worker: Dictionary in workers:
		var phase := str(worker.phase)
		if phase == "paused": continue
		if phase in MOVING:
			_walk(worker, delta)
		elif phase == "crafting":
			_craft(worker, delta)
		elif phase == "installing":
			if not _cargo(worker):
				_replan(worker)
				continue
			worker.elapsed = minf(INSTALL_DURATION, float(worker.elapsed) + delta)
			if float(worker.elapsed) < INSTALL_DURATION: continue
			var target := str(worker.target_id)
			var artist := str(life._roles.get(str(worker.workshop_id),"")) == "atelier"
			var mechanic := str(life._roles.get(str(worker.workshop_id),""))=="clockmaker"
			var festival := str(life.state.workshop_status(str(worker.workshop_id)).transit.get("kind","upgrade"))=="festival"
			if not life.state.complete_craft(str(worker.workshop_id), str(worker.home_id), target):
				_replan(worker)
				continue
			worker.carry.visible = false
			worker.deliveries = int(worker.deliveries) + 1
			if life.craft_callback.is_valid(): life.craft_callback.call("mechanism_installed" if mechanic else "art_installed" if artist else "festival" if festival else "installed", str(worker.workshop_id), target, life.state.mechanism_level(target) if mechanic else life.state.culture_level(target) if artist else life.state.improvement_level(target))
			worker.target_id = ""
			worker.elapsed = 0.0
			worker.phase = "to_home" if int(worker.deliveries) >= SHIFT_DELIVERIES else "returning"
			_replan(worker)
		elif phase == "resting":
			worker.elapsed = minf(REST_DURATION, float(worker.elapsed) + delta)
			if float(worker.elapsed) < REST_DURATION: continue
			worker.elapsed = 0.0
			worker.deliveries = 0
			worker.phase = "to_workshop"
			_replan(worker)

func _craft(worker: Dictionary, delta: float) -> void:
	var shop := str(worker.workshop_id)
	var supply: Dictionary = life.state.workshop_status(shop)
	var order := _recipient_order(worker) if int(supply.stock) > 0 else {"target":"","kind":"upgrade"}
	var target := str(order.target)
	if not target.is_empty() and life.state.reserve_craft(shop, str(worker.home_id), target,str(order.kind)):
		worker.target_id = target
		worker.carry.visible = true
		worker.elapsed = 0.0
		worker.phase = "to_target"
		_replan(worker)
		return
	var bonus_remaining: float = life.state.afterglow_remaining(shop)
	var site_speed: float = life.state.site_production_multiplier(shop)
	var used := 0.0
	while used < delta:
		supply = life.state.workshop_status(shop)
		var batch: int = life.state.workshop_batch_size(shop)
		if not bool(supply.open) or int(supply.stock) + batch > int(supply.capacity): return
		var speed := site_speed * (1.25 if used < bonus_remaining else 1.0)
		var period := delta - used
		if used < bonus_remaining: period = minf(period, bonus_remaining - used)
		var step := minf(period, maxf(0.0, CRAFT_DURATION - float(worker.elapsed)) / speed)
		worker.elapsed = minf(CRAFT_DURATION, float(worker.elapsed) + step * speed)
		used += step
		if float(worker.elapsed) < CRAFT_DURATION - 0.000001: continue
		if not life.state.produce_craft(shop, batch): return
		worker.elapsed = 0.0
		if life.craft_callback.is_valid(): life.craft_callback.call("crafted", shop, "", batch)
		# A fresh object is picked up on the next tick, at the actual shop.
		if not _recipient(worker).is_empty(): return

func _walk(worker: Dictionary, delta: float) -> void:
	var route: Array = worker.route
	var index := int(worker.index)
	if index >= route.size():
		var destination := _destination(worker, str(worker.phase))
		if not life.connected_houses.has(destination) or worker.node.position.distance_to(_target(destination)) > 0.15:
			_pause(worker, str(worker.phase))
			return
		worker.phase = {"to_workshop":"crafting", "returning":"crafting", "to_target":"installing", "to_home":"resting"}[str(worker.phase)]
		worker.resume_phase = worker.phase
		worker.elapsed = 0.0
		return
	var node: Node3D = worker.node
	var before := Vector2(node.position.x,node.position.z)
	var direction: Vector3 = route[index] - node.position
	var step: float=delta*.83*life.state.walking_multiplier(str(worker.home_id))
	if direction.length() <= step:
		node.position = route[index]
		worker.index = index + 1
	else:
		node.position += direction.normalized() * step
		node.rotation.y = atan2(direction.x, direction.z)
	node.position.y = life.state.street_height(Vector2(node.position.x, node.position.z)) + 0.10
	life.record_travel("artisan/"+str(worker.home_id),before,Vector2(node.position.x,node.position.z))
	node.get_child(0).position.y = sin(life.time * 9.0) * 0.025

func status(id: String) -> Dictionary:
	var result: Dictionary = life.state.workshop_status(id).duplicate(true)
	result.delivery_kind=str(result.transit.get("kind","upgrade"))
	result.merge({"worker_phase":"unassigned", "worker_home_id":"", "worker_name":"", "elapsed":0.0, "duration":CRAFT_DURATION, "deliveries":0, "target_id":""})
	result.afterglow_remaining = life.state.afterglow_remaining(id)
	result.production_multiplier = life.state.production_multiplier(id)
	for worker: Dictionary in workers:
		if str(worker.workshop_id) != id: continue
		result.worker_phase = str(worker.phase)
		result.worker_home_id = str(worker.home_id)
		result.elapsed = float(worker.elapsed)
		result.deliveries = int(worker.deliveries)
		result.target_id = str(worker.target_id)
		var phase := str(worker.resume_phase if worker.phase == "paused" else worker.phase)
		result.duration = INSTALL_DURATION if phase == "installing" else REST_DURATION if phase == "resting" else CRAFT_DURATION
		for house: Dictionary in life.state.houses:
			if str(house.id) == str(worker.home_id): result.worker_name = str(house.name) + ("的钟表匠" if str(life._roles.get(id,""))=="clockmaker" else "的画师" if str(life._roles.get(id,"")) == "atelier" else "的制琴师")
		break
	return result

func checkpoint() -> Array[Dictionary]:
	var result: Array[Dictionary] = []
	for worker: Dictionary in workers:
		var node: Node3D = worker.node
		result.append({"home_id":str(worker.home_id), "workshop_id":str(worker.workshop_id), "target_id":str(worker.target_id), "phase":str(worker.phase), "resume_phase":str(worker.resume_phase if worker.phase == "paused" else worker.phase), "elapsed":float(worker.elapsed), "deliveries":int(worker.deliveries), "position":[node.position.x,node.position.z], "yaw":node.rotation.y})
	return result

func restore(data: Variant) -> void:
	if not data is Array: return
	var homes := {}
	var shops := {}
	for entry: Variant in data:
		if not entry is Dictionary: continue
		var home := str(entry.get("home_id", ""))
		var shop := str(entry.get("workshop_id", ""))
		if homes.has(home) or shops.has(shop) or str(life._roles.get(home,"")) != "residential" or str(life._roles.get(shop,"")) not in ["workshop", "atelier", "clockmaker"]: continue
		var worker := _new_worker(home, shop)
		if not _restore_worker(worker, entry):
			worker.node.queue_free()
			continue
		workers.append(worker)
		homes[home] = true
		shops[shop] = true

func _restore_worker(worker: Dictionary, saved: Dictionary) -> bool:
	var at: Variant = saved.get("position", null)
	if not at is Array or at.size() != 2: return false
	var phase := str(saved.get("phase", ""))
	var effective := str(saved.get("resume_phase", "")) if phase == "paused" else phase
	if effective not in PHASES or (phase != "paused" and phase not in PHASES): return false
	var elapsed := float(saved.get("elapsed", -1.0))
	var deliveries := int(saved.get("deliveries", -1))
	var duration := INSTALL_DURATION if effective == "installing" else REST_DURATION if effective == "resting" else CRAFT_DURATION
	if not is_finite(elapsed) or elapsed < 0.0 or elapsed > duration or deliveries < 0 or deliveries > SHIFT_DELIVERIES: return false
	if effective in MOVING and elapsed != 0.0: return false
	if (effective in ["to_home", "resting"]) != (deliveries == SHIFT_DELIVERIES): return false
	var target := str(saved.get("target_id", ""))
	worker.target_id = target
	if effective in ["to_target", "installing"]:
		if target.is_empty() or not _cargo(worker): return false
	elif not target.is_empty() or not life.state.workshop_status(str(worker.workshop_id)).transit.is_empty(): return false
	var point := Vector3(float(at[0]), 0, float(at[1]))
	var yaw := float(saved.get("yaw", 0.0))
	if not is_finite(point.x) or not is_finite(point.z) or not is_finite(yaw) or not life.state.WORLD_RECT.has_point(Vector2(point.x,point.z)): return false
	point.y = life.state.street_height(Vector2(point.x,point.z)) + 0.10
	var destination := _destination(worker, effective)
	if effective in ["crafting", "installing", "resting"]:
		if life.connected_houses.has(destination):
			if point.distance_to(_target(destination)) > 0.15: return false
		elif phase != "paused" or not life.bakery._near_door(destination, point): return false
	if phase != "paused":
		if _between(str(worker.home_id), str(worker.workshop_id)).is_empty() or not life.connected_houses.has(destination): return false
		if life._route_from_position(point, str(life.connected_houses[destination])).is_empty(): return false
	worker.node.position = point
	worker.node.rotation.y = yaw
	worker.phase = phase
	worker.resume_phase = effective
	worker.elapsed = elapsed
	worker.deliveries = deliveries
	worker.carry.visible = effective in ["to_target", "installing"]
	_replan(worker)
	return true
