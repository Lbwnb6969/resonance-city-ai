extends RefCounted
## M47-M48: Zero-UI Emergent Streetscape Wonders, 4-School 3D Vignette Keepsake Resonators,
## Contact Grounding Plinths & 4 Prismatic Legendary Acoustic Wonder Crowns:
## 1. Waterside Wooden Pier & Mooring Lantern (oriented along true house->water vector for waterside houses <= 3.2m)
## 2. Roundabout Fountain Piazza (dual-tier basin & blooms for road roundabouts with >= 2 nearby houses)
## 3. Rotated Corner Pocket Garden (pebbles, bench, stone lantern & wildflowers in Q/E/R angled street pockets)
## 4. 3D Vignette Keepsake Micro-Monuments & Prismatic Legendary Wonder Crowns (Poseidon Harp Lighthouse,
##    Celestial Armillary Odeon, Hanging Symphony Conservatory, Perpetual Golden Astronomical Clock)

const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
const Frame = preload("res://scripts/world/city_creation_house_frame.gd")

static func _water_local_dir(city: RefCounted, house: Dictionary, origin: Vector2) -> Vector2:
	var world_dir := Vector2(signf(city.river_x(origin.y) - origin.x), 0.0)
	if world_dir.length_squared() < 0.01:
		world_dir = Vector2.RIGHT
	var yaw: float = Frame.yaw(house)
	var c := cos(-yaw)
	var s := sin(-yaw)
	var local := Vector2(world_dir.x * c - world_dir.y * s, world_dir.x * s + world_dir.y * c)
	return local.normalized() if local.length_squared() > 0.001 else Vector2(0.0, 1.0)

static func _school_for_vignette(vignette_id: String) -> String:
	var id_lower := vignette_id.to_lower()
	if "water" in id_lower or "river" in id_lower or "bridge" in id_lower or "pond" in id_lower or "lotus" in id_lower:
		return "waterside"
	if "stair" in id_lower or "terrace" in id_lower or "hill" in id_lower or "ridge" in id_lower or "breeze" in id_lower:
		return "terrace"
	if "court" in id_lower or "arcade" in id_lower or "dome" in id_lower or "loggia" in id_lower:
		return "courtyard"
	return "guild"

static func derive_wonders(city: RefCounted) -> Dictionary:
	var piers: Array[Dictionary] = []
	var pockets: Array[Dictionary] = []
	var fountains: Array[Dictionary] = []
	for house: Dictionary in city.houses:
		var id := str(house.id)
		var origin := Vector2(float(house.origin[0]), float(house.origin[1]))
		var clearance: float = city.water_clearance(origin)
		if clearance >= 0.45 and clearance <= 3.2:
			var river_dir := Vector2(signf(city.river_x(origin.y) - origin.x), 0.0)
			if river_dir.length_squared() < 0.01:
				river_dir = Vector2.RIGHT
			piers.append({
				"house_id": id,
				"at": origin + river_dir * 1.35,
				"yaw": atan2(river_dir.x, river_dir.y),
				"acoustic_tag": "waterside_pier"
			})
		var yaw: float = Frame.yaw(house)
		if absf(sin(yaw * 2.0)) > 0.25:
			var corner := origin + Frame.direction(house, Vector2(1.18, 1.18))
			if city.water_clearance(corner) > 1.2:
				pockets.append({
					"house_id": id,
					"at": corner,
					"yaw": yaw,
					"syncopation_ms": roundi(24.0 * absf(sin(yaw * 2.0))),
					"acoustic_tag": "corner_pocket_garden"
				})
	for marker: Dictionary in city.Roundabouts.all(city.roads):
		var center: Vector2 = marker.center
		var near_houses := 0
		for house: Dictionary in city.houses:
			if center.distance_to(Vector2(float(house.origin[0]), float(house.origin[1]))) <= float(marker.radius) + 6.5:
				near_houses += 1
		if near_houses >= 2:
			fountains.append({"center": center, "radius": float(marker.radius), "acoustic_tag": "roundabout_fountain"})
	return {"piers": piers, "pockets": pockets, "fountains": fountains}

static func build_house_wonder(renderer, root: Node3D, city: RefCounted, house: Dictionary) -> void:
	var origin := Vector2(float(house.origin[0]), float(house.origin[1]))
	var wood: Material = Wall.source(Color("9d7754"), null, "component", Wall.Kind.WOOD)
	var stone: Material = Wall.source(Color("d8cbb0"), null, "component", Wall.Kind.STONE)
	var grounding_mat: Material = renderer._material(Color("5c5346"), 0.92)
	var foliage_mat: Material = renderer._material(Color("6c9a5b"), 0.82)
	var bloom_mat: Material = renderer._material(Color("e88d72"), 0.65)
	var gold: Material = renderer._material(Color("f4c975"), 0.35)
	var clearance: float = city.water_clearance(origin)
	if clearance >= 0.45 and clearance <= 3.2:
		var local_dir := _water_local_dir(city, house, origin)
		var pier := Node3D.new()
		pier.name = "EmergentWatersidePier"
		pier.rotation.y = atan2(local_dir.x, local_dir.y)
		root.add_child(pier)
		renderer._box(pier, Vector3(0.92, 0.03, 0.36), Vector3(0.0, 0.015, 0.82), grounding_mat).name = "PierShoreAbutment"
		renderer._box(pier, Vector3(0.84, 0.08, 1.45), Vector3(0.0, 0.12, 1.42), wood).name = "PierDeck"
		for x: float in [-0.34, 0.34]:
			renderer._cylinder(pier, 0.055, 0.055, 0.46, Vector3(x, 0.02, 2.02), wood, 8).name = "MooringPost"
		renderer._box(pier, Vector3(0.11, 0.16, 0.11), Vector3(0.34, 0.32, 2.02), gold).name = "PierLantern"
	var yaw: float = Frame.yaw(house)
	if absf(sin(yaw * 2.0)) > 0.25:
		var pocket := Node3D.new()
		pocket.name = "EmergentCornerPocketGarden"
		root.add_child(pocket)
		renderer._cylinder(pocket, 0.42, 0.46, 0.02, Vector3(1.18, 0.01, 1.18), grounding_mat, 8).name = "PocketContactShadow"
		renderer._cylinder(pocket, 0.38, 0.44, 0.05, Vector3(1.18, 0.025, 1.18), stone, 8).name = "PocketPebbleBase"
		renderer._box(pocket, Vector3(0.46, 0.14, 0.18), Vector3(1.12, 0.11, 1.02), wood).name = "PocketBench"
		renderer._cylinder(pocket, 0.08, 0.10, 0.32, Vector3(1.34, 0.18, 1.28), stone, 6).name = "PocketStoneLantern"
		renderer._box(pocket, Vector3(0.10, 0.11, 0.10), Vector3(1.34, 0.36, 1.28), gold).name = "PocketLanternGlow"
		renderer._cylinder(pocket, 0.14, 0.18, 0.12, Vector3(0.98, 0.08, 1.32), foliage_mat, 7).name = "PocketWildflowerFoliage"
		renderer._cylinder(pocket, 0.08, 0.10, 0.15, Vector3(1.02, 0.13, 1.30), bloom_mat, 6).name = "PocketWildflowerBloom"
	var blessings: Array = city.harmony_journey.get("vignette_blessings", {}).get(str(house.id), [])
	if not blessings.is_empty():
		var school := _school_for_vignette(str(blessings[0]))
		var is_legendary := blessings.size() >= 2 or str(house.get("wonder_rarity", "")) == "prismatic"
		var monument := Node3D.new()
		monument.name = "VignetteKeepsakeMonument"
		monument.set_meta("vignette_ids", blessings.duplicate())
		monument.set_meta("acoustic_school", school)
		monument.set_meta("is_legendary_wonder", is_legendary)
		root.add_child(monument)
		renderer._cylinder(monument, 0.24, 0.27, 0.025, Vector3(-1.05, 0.012, 0.98), grounding_mat, 8).name = "KeepsakeGroundingRing"
		renderer._cylinder(monument, 0.19, 0.23, 0.26, Vector3(-1.05, 0.13, 0.98), stone, 8).name = "KeepsakePlinth"
		match school:
			"waterside":
				renderer._cylinder(monument, 0.07, 0.10, 0.28, Vector3(-1.05, 0.38, 0.98), gold, 8).name = "WatersideHarpLantern"
				if is_legendary:
					renderer._cylinder(monument, 0.13, 0.05, 0.22, Vector3(-1.05, 0.62, 0.98), gold, 8).name = "PoseidonLighthouseCrown"
			"terrace":
				renderer._box(monument, Vector3(0.28, 0.06, 0.28), Vector3(-1.05, 0.44, 0.98), wood).name = "TerraceBellCanopy"
				renderer._cylinder(monument, 0.06, 0.08, 0.18, Vector3(-1.05, 0.33, 0.98), gold, 8).name = "TerraceWindChime"
				if is_legendary:
					renderer._cylinder(monument, 0.16, 0.16, 0.05, Vector3(-1.05, 0.58, 0.98), gold, 10).name = "CelestialArmillaryRing"
			"courtyard":
				renderer._cylinder(monument, 0.15, 0.12, 0.12, Vector3(-1.05, 0.31, 0.98), foliage_mat, 8).name = "CourtyardPlanter"
				renderer._cylinder(monument, 0.04, 0.08, 0.22, Vector3(-1.05, 0.44, 0.98), gold, 6).name = "CourtyardSundialSpire"
				if is_legendary:
					renderer._cylinder(monument, 0.18, 0.14, 0.16, Vector3(-1.05, 0.60, 0.98), bloom_mat, 8).name = "HangingSymphonyCanopy"
			_:
				renderer._cylinder(monument, 0.10, 0.10, 0.24, Vector3(-1.05, 0.38, 0.98), gold, 8).name = "GuildCarillonColumn"
				if is_legendary:
					renderer._box(monument, Vector3(0.22, 0.22, 0.08), Vector3(-1.05, 0.58, 0.98), gold).name = "PerpetualAstronomicalDial"
