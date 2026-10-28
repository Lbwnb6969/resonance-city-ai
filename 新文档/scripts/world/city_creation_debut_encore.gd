extends RefCounted
## M46: 3-Tier Cozy Civic Supply Chain (Primary Gather -> Secondary Salon -> Tempo Hub),
## All-Role 0.2s Instant Debut Burst, 3-Tier Roguelite Rarity Drafting (Silver/Gilded/Prismatic
## with Pity Counter & Legendary Wonder Unlocks) + Ambient & Brush-to-Encore Celebration.

const Wonders = preload("res://scripts/visual/city_creation_street_wonders.gd")
const ENCORE_COOLDOWN_SEC := 18.0
const AMBIENT_ENCORE_PERIOD_SEC := 48.0
const ENCORE_XP := 25
const SUPPLY_RADIUS := 12.0
const CLOCK_AURA_RADIUS := 14.0

const LEGENDARY_WONDERS := {
	"waterside": {"id": "poseidon_harp_lighthouse", "title": "海神竖琴灯塔", "buff": "waterside_omni_link"},
	"terrace": {"id": "celestial_armillary_odeon", "title": "天顶浑天仪歌咏台", "buff": "terrace_double_echo"},
	"courtyard": {"id": "hanging_symphony_conservatory", "title": "悬浮巴比伦交响花苑", "buff": "courtyard_eternal_bloom"},
	"guild": {"id": "perpetual_golden_astronomical_clock", "title": "永动黄金天文大钟楼", "buff": "guild_golden_tempo"}
}

static func role_wish_kind(role: String) -> String:
	return {
		"bakery": "water",
		"workshop": "tree",
		"garden_cafe": "bloom",
		"atelier": "arcade",
		"clockmaker": "chime"
	}.get(role, "")

static func _has_nearby_wonder(city: RefCounted, house: Dictionary, at: Vector2, max_dist: float) -> bool:
	var wonders: Dictionary = Wonders.derive_wonders(city)
	for pier: Dictionary in wonders.get("piers", []):
		if str(pier.get("house_id", "")) == str(house.get("id", "")) or at.distance_to(pier.get("at", Vector2.INF)) <= max_dist:
			return true
	for pocket: Dictionary in wonders.get("pockets", []):
		if str(pocket.get("house_id", "")) == str(house.get("id", "")) or at.distance_to(pocket.get("at", Vector2.INF)) <= max_dist:
			return true
	for fountain: Dictionary in wonders.get("fountains", []):
		if at.distance_to(fountain.get("center", Vector2.INF)) <= float(fountain.get("radius", 2.0)) + max_dist:
			return true
	var blessings: Dictionary = city.harmony_journey.get("vignette_blessings", {}) if "harmony_journey" in city else {}
	return not blessings.get(str(house.get("id", "")), []).is_empty()

static func role_satisfied(city: RefCounted, house_id: String, kind: String) -> bool:
	var index: int = city._house_index(house_id)
	if index < 0:
		return false
	var house: Dictionary = city.houses[index]
	var at := Vector2(float(house.origin[0]), float(house.origin[1]))
	match kind:
		"water":
			if bool(city.site_blessing(house_id).get("blessed", false)):
				return true
			return city.water_clearance(at) <= 3.2
		"tree":
			var needed: int = preload("res://scripts/world/city_creation_tradition_rules.gd").tree_count(city)
			var bonus := 1 if _has_nearby_wonder(city, house, at, 6.0) else 0
			return int(city.site_blessing(house_id).get("trees", 0)) + bonus >= needed
		"bloom":
			if city.water_clearance(at) <= 6.0 or _has_nearby_wonder(city, house, at, 6.5):
				return true
			for plant: Dictionary in city.plants:
				if at.distance_to(Vector2(float(plant.position[0]), float(plant.position[1]))) <= 6.5 and city.vegetation_visible(plant):
					return true
			return false
		"arcade":
			if house.get("architecture", "") in ["portico", "peristyle", "rotunda", "guildhall", "venetian_loggia", "belvedere_villa"]:
				return true
			if _has_nearby_wonder(city, house, at, 6.0):
				return true
			return not preload("res://scripts/world/city_creation_arcade_plan.gd").for_house(city, house).is_empty() or not city.courtyard_plans().is_empty()
		"chime":
			for cell: Dictionary in house.cells:
				if int(cell.level) >= 1:
					return true
			for road: Dictionary in city.roads:
				if road.get("style", "") == "tram" and city._water_stroke_distance(at, road.points) <= 6.5:
					return true
			if _has_nearby_wonder(city, house, at, 7.5):
				return true
			return house.get("architecture", "") in ["clock_turret", "sawtooth_atrium", "iron_conservatory", "guild_arcade"]
	return false

static func civic_supply_status(city: RefCounted, house_id: String) -> Dictionary:
	var index: int = city._house_index(house_id)
	if index < 0:
		return {"tier": 0, "tempo_mult": 1.0, "supplied_by": ""}
	var house: Dictionary = city.houses[index]
	var role := str(house.get("role", "residential"))
	var kind := role_wish_kind(role)
	if kind.is_empty() or not role_satisfied(city, house_id, kind):
		return {"tier": 0, "tempo_mult": 1.0, "supplied_by": ""}
	var at := Vector2(float(house.origin[0]), float(house.origin[1]))
	var tier := 1
	var supplied_by := ""
	var tempo_mult := 1.0
	for other: Dictionary in city.houses:
		var oid := str(other.get("id", ""))
		if oid == house_id:
			continue
		var orole := str(other.get("role", "residential"))
		var oat := Vector2(float(other.origin[0]), float(other.origin[1]))
		var dist := at.distance_to(oat)
		if dist <= SUPPLY_RADIUS:
			if (role == "garden_cafe" and orole == "bakery" and role_satisfied(city, oid, "water")) or \
					(role == "atelier" and orole == "workshop" and role_satisfied(city, oid, "tree")) or \
					(role == "bakery" and orole == "garden_cafe" and role_satisfied(city, oid, "bloom")) or \
					(role == "workshop" and orole == "atelier" and role_satisfied(city, oid, "arcade")):
				tier = 2
				supplied_by = oid
		if dist <= CLOCK_AURA_RADIUS and orole == "clockmaker" and role_satisfied(city, oid, "chime"):
			tempo_mult = maxf(tempo_mult, 1.35)
			if role == "clockmaker":
				tier = 2
	return {"tier": tier, "tempo_mult": tempo_mult, "supplied_by": supplied_by}

static func roll_card_rarity(city: RefCounted, school_affinity_count: int, roll_01: float) -> Dictionary:
	var pity: int = int(city.get_meta("prismatic_pity_count", 0)) if city != null else 0
	var legendary_chance := clampf(0.10 + 0.08 * float(school_affinity_count), 0.10, 0.38)
	var is_prismatic := pity >= 2 or roll_01 < legendary_chance
	if is_prismatic:
		if city != null:
			city.set_meta("prismatic_pity_count", 0)
		return {"rarity": "prismatic", "tier": 3, "xp_mult": 2.0, "unlocks_wonder": true}
	if city != null:
		city.set_meta("prismatic_pity_count", pity + 1)
	if roll_01 < legendary_chance + 0.30:
		return {"rarity": "gilded", "tier": 2, "xp_mult": 1.45, "unlocks_wonder": false}
	return {"rarity": "silver", "tier": 1, "xp_mult": 1.0, "unlocks_wonder": false}

static func can_trigger_encore(city: RefCounted, house_id: String, now_sec: float) -> bool:
	var index: int = city._house_index(house_id)
	if index < 0:
		return false
	var house: Dictionary = city.houses[index]
	if str(house.get("role", "residential")) == "residential":
		return false
	var cooldowns: Dictionary = city.get_meta("encore_cooldowns", {})
	return now_sec >= float(cooldowns.get(house_id, -INF))

static func should_auto_encore(city: RefCounted, house_id: String, now_sec: float) -> bool:
	if not can_trigger_encore(city, house_id, now_sec):
		return false
	var status := civic_supply_status(city, house_id)
	if int(status.get("tier", 0)) <= 0:
		return false
	var period := AMBIENT_ENCORE_PERIOD_SEC / float(status.get("tempo_mult", 1.0))
	var last_auto: Dictionary = city.get_meta("encore_auto_timestamps", {})
	return now_sec >= float(last_auto.get(house_id, 0.0)) + period

static func record_encore(city: RefCounted, house_id: String, now_sec: float, is_ambient: bool = false) -> Dictionary:
	if not can_trigger_encore(city, house_id, now_sec):
		return {"ok": false}
	var status := civic_supply_status(city, house_id)
	var tier_mult := 1.4 if int(status.get("tier", 1)) >= 2 else 1.0
	var cooldowns: Dictionary = city.get_meta("encore_cooldowns", {})
	cooldowns[house_id] = now_sec + ENCORE_COOLDOWN_SEC / float(status.get("tempo_mult", 1.0))
	city.set_meta("encore_cooldowns", cooldowns)
	if is_ambient:
		var last_auto: Dictionary = city.get_meta("encore_auto_timestamps", {})
		last_auto[house_id] = now_sec
		city.set_meta("encore_auto_timestamps", last_auto)
	return {"ok": true, "house_id": house_id, "xp": int(round(float(ENCORE_XP) * tier_mult)), "ambient": is_ambient, "supply_tier": status.get("tier", 1)}
