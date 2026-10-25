extends RefCounted
## Environmental transitions grant one conserved first batch; loading grants none.
var life: Node3D
var pending: Dictionary = {}
var observed: Dictionary = {}
var epoch := -1
var observed_revision := -1
var published_houses: Array = []
var published_roads: Array = []
const Debut=preload("res://scripts/world/city_creation_debut_encore.gd")
const LOCK := "first_blessing_burst"
func _init(owner: Node3D) -> void:
	life = owner
	epoch = life.state._wish_epoch
	remember_geometry()
	observe(true)
func remember_geometry() -> void:
	published_houses = life.state.houses.duplicate(true)
	published_roads = life.state.roads.duplicate(true)
func on_edit(result: Dictionary) -> void:
	# Planting/water changes can reward against the still-published street graph.
	# Existing workers stay on their exact real route while geometry rebuilds.
	reset_if_loaded()
	var sites: Dictionary = {}
	for house: Dictionary in life.state.houses:
		var kind: String = {"bakery":"water","workshop":"tree"}.get(str(house.role),"")
		if kind.is_empty() or house.has("signature"): continue
		var id := str(house.id)
		var key := id+":"+kind
		if not observed.has(key) and satisfied(life.state,id,kind) and not consumed(life.state,id,kind):pending[id]=kind
		sites[key] = observed[key] if observed.has(key) else satisfied(life.state,id,kind)
	observed = sites
	if not (result.has("plant_ids") or result.has("water_id")):
		if Debut.same_geometry(life.state,published_houses,published_roads):poll(true)
		return
	observe()
	if life.state.houses == published_houses and life.state.roads == published_roads: poll(true)
func observe(baseline: bool = false) -> void:
	if baseline:Debut.observe(life,true)
	if observed_revision == life.state.revision: return
	var current: Dictionary = {}
	for house: Dictionary in life.state.houses:
		var kind: String = {"bakery":"water", "workshop":"tree"}.get(str(house.role), "")
		if kind.is_empty() or house.has("signature"): continue
		var id := str(house.id)
		var key := id + ":" + kind
		var ready := satisfied(life.state, id, kind)
		current[key] = ready
		if not baseline and observed.has(key) and not observed[key] and ready and not consumed(life.state, id, kind): pending[id] = kind
	observed = current
	observed_revision = life.state.revision
func arm(id: String, kind: String) -> void:
	reset_if_loaded()
	if kind not in ["water", "tree"] or consumed(life.state, id, kind): return
	var index: int = life.state._house_index(id)
	if index < 0 or str(life.state.houses[index].role) != ("bakery" if kind == "water" else "workshop"): return
	if not satisfied(life.state, id, kind): pending[id] = kind
func reset_if_loaded() -> void:
	if epoch == life.state._wish_epoch: return
	pending.clear()
	observed.clear()
	observed_revision = -1
	epoch = life.state._wish_epoch
	observe(true)
func poll(immediate: bool = false) -> void:
	reset_if_loaded()
	if not immediate and life.last_revision != life.state.revision: return
	if life.last_revision == life.state.revision and observed_revision != life.state.revision: remember_geometry()
	observe()
	Debut.poll(life)
	for id: String in pending.keys():
		var kind := str(pending[id])
		var index: int = life.state._house_index(id)
		if index < 0 or str(life.state.houses[index].role) != ("bakery" if kind == "water" else "workshop") or consumed(life.state, id, kind):
			pending.erase(id)
			continue
		if not life.house_connected(id) or not satisfied(life.state, id, kind): continue
		var quantity := grant(life.state, id, kind)
		if quantity == 0: continue
		pending.erase(id)
		if kind == "water":
			if life.production_callback.is_valid(): life.production_callback.call(id, quantity)
		else:
			if life.craft_callback.is_valid(): life.craft_callback.call("crafted", id, "", quantity)
			for worker: Dictionary in life.workshop.workers:
				if str(worker.workshop_id) == id and str(worker.phase) == "crafting":
					life.worker_lod.flush(worker)
					life.workshop._craft(worker, 0.)
		if life.wish_callback.is_valid(): life.wish_callback.call(id, kind, quantity)
static func supply(city: RefCounted, kind: String) -> Dictionary:
	return city.bakery_supply if kind == "water" else city.workshop_supply
static func consumed(city: RefCounted, id: String, kind: String) -> bool:
	return bool(supply(city, kind).get(id, {}).get(LOCK, false)) or city.wish_rewards.get(id, {}).has(kind)
static func satisfied(city: RefCounted, id: String, kind: String) -> bool:
	var blessing: Dictionary = city.site_blessing(id)
	return bool(blessing.get("blessed", false)) if kind == "water" else int(blessing.get("trees", 0)) >= preload("res://scripts/world/city_creation_tradition_rules.gd").tree_count(city)
static func grant(city: RefCounted, id: String, kind: String) -> int:
	if kind not in ["water", "tree"] or consumed(city, id, kind): return 0
	var index: int = city._house_index(id)
	if index < 0 or city.houses[index].has("signature") or str(city.houses[index].role) != ("bakery" if kind == "water" else "workshop") or not satisfied(city, id, kind): return 0
	var quantity := 2 if kind == "water" else 1
	if not (city.produce_bread(id, quantity) if kind == "water" else city.produce_craft(id, quantity)): return 0
	supply(city, kind)[id][LOCK] = true
	var row: Dictionary = city.wish_rewards.get(id, {})
	row[kind] = quantity
	city.wish_rewards[id] = row
	city._craft_changed()
	return quantity
static func keep_burst(rows: Dictionary, id: String, next: Dictionary) -> Dictionary:
	if rows.get(id, {}).has(LOCK): next[LOCK] = rows[id][LOCK]
	return next
static func valid_supply_row(row: Variant, fields: int, schema: int) -> bool:
	return row is Dictionary and row.size() == fields + (1 if row.has(LOCK) else 0) and (not row.has(LOCK) or (schema >= 19 and row[LOCK] is bool))
static func write_snapshot(city: RefCounted, result: Dictionary) -> void:
	for rows: Dictionary in [city.bakery_supply, city.workshop_supply]:
		for row: Dictionary in rows.values():
			if row.has(LOCK): result.schema = city.PERSONALIZATION_SCHEMA; return
static func restore_locks(city: RefCounted) -> void:
	# Pre-M02 accepted-wish saves already recorded real rewards; migrate only locks.
	for id: String in city.wish_rewards:
		for kind: String in city.wish_rewards[id]: supply(city, kind)[id][LOCK] = true
static func validate(city: RefCounted, data: Dictionary, issued: int) -> Dictionary:
	var rows: Variant = data.get("wish_rewards", {})
	if not rows is Dictionary or (data.has("wish_rewards") and data.schema < 19): return city._fail("心愿履历版本或结构无效")
	for id: Variant in rows:
		if not city._valid_id(id, "h", {}) or int(str(id).substr(1)) > issued: return city._fail("心愿工坊身份无效")
		var row: Variant = rows[id]
		if not row is Dictionary or row.is_empty() or row.size() > 2: return city._fail("心愿领取字段无效")
		for kind: Variant in row:
			if kind not in ["water", "tree"] or not city._is_integer(row[kind]) or int(row[kind]) <= 0: return city._fail("心愿领取数量无效")
			var entry: Dictionary = data.get("bakery_supply" if kind == "water" else "workshop_supply", {}).get(id, {})
			if int(entry.get("produced", 0)) < int(row[kind]): return city._fail("心愿领取缺少实际入库记录")
	for kind: String in ["water", "tree"]:
		for id: String in data.get("bakery_supply" if kind == "water" else "workshop_supply", {}):
			var entry: Dictionary = data["bakery_supply" if kind == "water" else "workshop_supply"][id]
			if bool(entry.get(LOCK, false)) and int(entry.produced) < 1: return city._fail("首炉锁缺少真实生产记录")
			if entry.has(LOCK) and not entry[LOCK] and rows.get(id, {}).has(kind): return city._fail("首炉锁与领取履历不一致")
	return {"ok":true}
