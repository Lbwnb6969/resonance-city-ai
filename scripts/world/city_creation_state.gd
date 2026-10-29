class_name CityCreationState
extends RefCounted
signal era_unlocked(era: String)

## Authoritative, immediate state for the independent city creation slice.
const Rotation=preload("res://scripts/world/city_creation_house_rotation.gd")
const LandmarkMovement=preload("res://scripts/world/city_creation_landmark_movement.gd")
const AutoNeighborhoods=preload("res://scripts/world/city_creation_auto_neighborhoods.gd")
var automatic_neighborhoods:=false
const Microclimate=preload("res://scripts/world/city_creation_microclimate.gd")
var microclimate:=""
const Biomes=preload("res://scripts/world/city_creation_biome_seeds.gd")
const ScoreModifiers=preload("res://scripts/world/city_creation_score_modifiers.gd")
const ArchiveRewards=preload("res://scripts/world/city_creation_archive_rewards.gd")
var archive_unlocks:Array[String]=[]
var music_mode:=""
var era_modifiers:Array[String]=[]
const CivicSupply=preload("res://scripts/world/city_creation_civic_supply.gd")
const HarmonyJourney=preload("res://scripts/world/city_creation_harmony_journey.gd")
var harmony_journey:Dictionary={}
var biome_seed:Dictionary={}
var _biome_revision:=-1
var _biome_bonuses:Dictionary={}
const NaturalClusters=preload("res://scripts/world/city_creation_clusters.gd")
var _natural_cluster_key:Variant=null
var _natural_cluster_rows:Dictionary={}

const WishFulfilment=preload("res://scripts/world/city_creation_wish_fulfilment.gd")
var wish_rewards:Dictionary={}
var _wish_epoch:=0
const Serializer = preload("res://scripts/world/city_creation_serializer.gd")
const SaveValidation = preload("res://scripts/world/city_creation_save_validation.gd")
const Frontage := preload("res://scripts/world/city_creation_frontage.gd")
const Passage := preload("res://scripts/world/city_creation_passage.gd")
const RoadIntent := preload("res://scripts/world/city_creation_road_intent.gd")
const RoadUpgrade := preload("res://scripts/world/city_creation_road_upgrade.gd")
const Roundabouts := preload("res://scripts/world/city_creation_roundabouts.gd")
const Junctions := preload("res://scripts/world/city_creation_junctions.gd")
const TerrainProtection := preload("res://scripts/world/city_creation_terrain_protection.gd")
const Terrain := preload("res://scripts/world/city_creation_terrain.gd")
const RoadHeights := preload("res://scripts/world/city_creation_road_heights.gd")
const Growth := preload("res://scripts/world/city_creation_growth.gd")
const Courtyards := preload("res://scripts/world/city_creation_courtyards.gd")
const Prosperity := preload("res://scripts/world/city_creation_prosperity.gd")
const SynergyBuffs := preload("res://scripts/world/city_creation_synergy_buffs.gd")
const RegionalEcho := preload("res://scripts/world/city_creation_regional_echo.gd")
const Eras := preload("res://scripts/world/city_creation_eras.gd")
const CreationPolicy=preload("res://scripts/world/city_creation_creation_policy.gd")
const PlacedLandmarks=preload("res://scripts/world/city_creation_placed_landmarks.gd")
var creative_settings:Dictionary={}
var placed_landmarks:Array[Dictionary]=[]
var _next_landmark_id:=1;var _landmark_high_watermark:=0
func initialize_free(empty:bool=true)->void:CreationPolicy.initialize(self,empty)
func can_build_era(era:String)->bool:return CreationPolicy.can_build_era(self,era)
func can_assign_role(role:String)->bool:return CreationPolicy.can_assign_role(self,role)
func functional_zones()->Dictionary:return preload("res://scripts/world/city_creation_functional_zones.gd").for_city(self)
func functional_benefits()->Dictionary:return preload("res://scripts/world/city_creation_functional_benefits.gd").for_city(self)
const ERA_SCHEMA := 13
const QUALITY_SCHEMA := 14
const CLOCKWORK_SCHEMA := 15
const MODERN_SCHEMA := 16
const QUALITY_CONTEXT_SCHEMA := 17
const PLANNING_SCHEMA := 18
const PERSONALIZATION_SCHEMA := 19
const GardenSpecies=preload("res://scripts/world/city_creation_garden_species.gd")
const Signatures := preload("res://scripts/world/city_creation_signatures.gd")
const AmphitheaterPlan=preload("res://scripts/world/city_creation_amphitheater_plan.gd")
const GrandFestival=preload("res://scripts/world/city_creation_grand_festival.gd")
const Quality := preload("res://scripts/world/city_creation_quality.gd")
const SCHEMA := 1
const TERRAIN_SCHEMA := 2
const JOURNAL_SCHEMA := 3
const PLATEAU_SCHEMA := 4
const BUILDING_SCHEMA := 5
const ELEVATION_SCHEMA := 6
const ROAD_STYLE_SCHEMA := 7
const ROUND_TOWER_SCHEMA := 8
const MUSICAL_LINK_SCHEMA := 9
const TERRAIN_SMOOTH_SCHEMA := 10
const TERRAIN_CONTOUR_SCHEMA := 11
const ROAD_NETWORK_SCHEMA := 12
const ROAD_STYLES := ["path","cobble","promenade","avenue","tram","brick","fanstone","gravel"]
const HOUSE_STYLES := ["classic","timber","stone","round_tower"]
const CELL_UNIT := 1.8
const FLOOR_HEIGHT := 1.7
const DEFAULT_PATH := "user://city_creation_v1.json"
const Bounds := preload("res://scripts/world/city_creation_bounds.gd")
const WORLD_RECT := Bounds.WORLD_RECT
const RIVER_HALF_WIDTH := 2.3
const MAX_PLANTS_PER_STROKE := 160
const HOUSE_ROLES := ["residential", "bakery", "venue", "workshop", "garden_cafe", "atelier", "clockmaker", "symphony_hall"]
const DISTRICT_STYLES := ["warm", "deep", "weave", "market", "sylvan"]
const DISTRICT_STYLE_NAMES := {"warm": "暖声街坊", "deep": "低吟街坊", "weave": "织音街坊", "market": "市集长街", "sylvan": "林间静谧"}
const DIRECTIONS := [Vector2i(1, 0), Vector2i(-1, 0), Vector2i(0, 1), Vector2i(0, -1)]

var houses: Array[Dictionary] = []
var _frontage_cache: Dictionary = {}
var roads: Array[Dictionary] = []
var _junctions := Junctions.new()
var _ground_terrain := Terrain.new()
var _street_marker_revision:=-1
var _street_markers:Array[Dictionary]=[]
var _ground_revision := -1
var _raw_ground_revision := -1
var _road_heights := RoadHeights.new()
var plants: Array[Dictionary] = []
var waters: Array[Dictionary] = []
var terrain_strokes: Array[Dictionary] = []
var _terrain_protection := TerrainProtection.new()
var _courtyards := Courtyards.new()
var _courtyard_revision := -1
var _courtyard_plans_cache: Array = []
var _prosperity_revision := -1
var _site_blessings: Dictionary = {}
var _special_site_key:Array=[]
var _special_sites:Dictionary={}
var _synergy_revision := -1
var _synergy_buffs:Dictionary={}
var _growth_geometry_revision := -1
var _growth_geometry_cache: Dictionary = {}
var districts: Array[Dictionary] = []
var musical_links: Array[Dictionary] = []
var revision := 0
var dirty := false
var life_progress := {"purchases":0,"gatherings":0,"concerts":0,"tea_parties":0,"tea_visits":0,"auto_concerts":0}
var era_unlocks: Array[String] = ["pastoral"]
var house_culture: Dictionary = {}
var house_clockwork: Dictionary = {}
var signature_unlocks: Array[String]=[]
var district_answers: Array[Dictionary]=[]
var era_answers: Array[Dictionary]=[]
var regional_trips:Array[Dictionary]=[]
var regional_replies:Array[Dictionary]=[]
var _region_network:Dictionary={}
var _region_network_revision:=-1
var _regional_echo:Dictionary={}
var _regional_echo_revision:=-1
var _echo_epoch:=0
var regional_prepare_ms:=0.
var _region_plant_visibility:Dictionary={}
var _region_visibility_revision:=-1
var _signature_bonuses_revision := -1
var _signature_bonuses: Dictionary={}
var building_quality: Dictionary = {}
var house_concerts: Dictionary = {}
var _quality_amenities: Dictionary = {}
var _quality_geometry_revision := -1
var growth_memories: Array[String] = []
var cafe_credits: Dictionary = {}
var cafe_progress: Dictionary = {}
var matinee_credits: Dictionary = {}
var matinee_progress: Dictionary = {}
var matinee_pending: Dictionary = {}
var matinee_cooldown := 0.0
var matinee_last_venue := ""
var bakery_supply: Dictionary = {}
var landmark_bread: Dictionary = {}
var workshop_supply: Dictionary = {}
var workshop_yield_remainder:Dictionary={}
var _transit_corridor_houses:Dictionary={}
var _transit_corridor_revision:=-1
var house_improvements: Dictionary = {}
var venue_commissions: Dictionary = {}
var resonance_afterglow: Dictionary = {}
var journey_checkpoint: Dictionary = {}
var life_progress_dirty := false
var _next_house_id := 1
var _next_cell_id := 1
var _next_road_id := 1
var _next_plant_id := 1
var _next_water_id := 1
var _next_district_id := 1
var _high_watermark := {"house": 0, "cell": 0, "road": 0, "plant": 0, "water": 0, "district": 0}
var _undo: Array[Dictionary] = []
var _redo: Array[Dictionary] = []


func initialize_empty()->void:
	initialize()
	microclimate="spring_breeze"
	automatic_neighborhoods=true
	houses.clear();roads.clear();plants.clear();waters.clear();districts.clear();terrain_strokes.clear()
	_next_house_id=1;_next_cell_id=1;_next_road_id=1;_next_plant_id=1;_next_water_id=1;_next_district_id=1
	_high_watermark={"house":0,"cell":0,"road":0,"plant":0,"water":0,"district":0}
	revision+=1;_undo.clear();_redo.clear()

func initialize() -> void:
	remove_meta("functional_zones")
	CreationPolicy.Save.reset(self)
	biome_seed={};_biome_revision=-1;_biome_bonuses={}
	era_modifiers.clear();archive_unlocks.clear();music_mode="";harmony_journey.clear()
	microclimate=""
	automatic_neighborhoods=false
	_prosperity_revision = -1
	_special_sites.clear();_special_site_key.clear()
	_synergy_revision=-1
	_growth_geometry_revision = -1
	_street_marker_revision=-1
	_ground_revision = -1
	_raw_ground_revision = -1
	_road_heights = RoadHeights.new()
	_courtyard_revision = -1
	life_progress = {"purchases":0,"gatherings":0,"concerts":0,"tea_parties":0,"tea_visits":0,"auto_concerts":0}
	era_unlocks.assign(["pastoral"])
	house_culture.clear()
	house_clockwork.clear()
	signature_unlocks.clear();district_answers.clear();era_answers.clear();_signature_bonuses_revision=-1
	regional_trips.clear();regional_replies.clear();_region_network.clear();_region_network_revision=-1;_regional_echo.clear();_echo_epoch+=1
	_region_plant_visibility={};_region_visibility_revision=-1
	building_quality.clear()
	house_concerts.clear()
	_quality_amenities.clear()
	_quality_geometry_revision=-1
	growth_memories.clear()
	cafe_credits.clear()
	cafe_progress.clear()
	matinee_credits.clear()
	matinee_progress.clear()
	matinee_pending.clear()
	matinee_cooldown = 0.0
	matinee_last_venue = ""
	_wish_epoch+=1
	wish_rewards.clear()
	bakery_supply.clear()
	landmark_bread.clear()
	workshop_supply.clear()
	workshop_yield_remainder.clear()
	_transit_corridor_houses.clear();_transit_corridor_revision=-1
	house_improvements.clear()
	venue_commissions.clear()
	resonance_afterglow.clear()
	journey_checkpoint.clear()
	life_progress_dirty = false
	houses.clear()
	roads.clear()
	plants.clear()
	waters.clear()
	terrain_strokes.clear()
	districts.clear()
	musical_links.clear()
	_next_house_id = 1
	_next_cell_id = 1
	_next_road_id = 1
	_next_plant_id = 1
	_next_water_id = 1
	_next_district_id = 1
	_high_watermark = {"house": 0, "cell": 0, "road": 0, "plant": 0, "water": 0, "district": 0}
	var positions := [Vector2(-8.0, -6.0), Vector2(-2.4, -5.0), Vector2(-8.0, 0.0), Vector2(-2.4, 1.0), Vector2(-7.0, 6.0), Vector2(9.0, 3.0)]
	for i in range(positions.size()):
		var house := _make_house(positions[i], i)
		if i == 1:
			house.role = "bakery"
		elif i == 3:
			house.role = "venue"
		if i == 0 or i == 2:
			house.cells.append(_make_cell(1, 0, 0, "room"))
		if i == 1 or i == 3:
			house.cells.append(_make_cell(0, 0, 1, "room"))
		if i == 4:
			house.cells.append(_make_cell(1, 0, 0, "terrace"))
		houses.append(house)
	roads.append({"id": "r1", "points": [[-11.0, -9.0], [-11.0, 9.0]], "width": 1.25, "bridge": false, "source": "seed"})
	_next_road_id = 2
	for house in houses:
		if house.origin[0] > river_x(float(house.origin[1])):
			continue
		var door_z: float = Vector2(0.0, float(house.origin[1]) + 1.55).y
		roads.append({"id": "r%d" % _next_road_id, "points": [[-11.0, door_z], [house.origin[0], door_z]], "width": 1.25, "bridge": false, "source": "seed"})
		_next_road_id += 1
	_high_watermark = {"house": _next_house_id - 1, "cell": _next_cell_id - 1, "road": _next_road_id - 1, "water": 0, "district": 0}
	_generate_initial_plants()
	revision = 0
	dirty = false
	_undo.clear()
	_redo.clear()


func add_cell(house_id: String, x: int, z: int, level: int, kind: String = "room") -> Dictionary:
	var result := validate_add_cell(house_id, x, z, level, kind)
	if not result.ok:
		return result
	var index := _house_index(house_id)
	var before := snapshot()
	var candidate: Dictionary = houses[index].duplicate(true)
	var cell_number := maxi(_next_cell_id, int(_high_watermark.cell) + 1)
	candidate.cells.append({"id": "c%d" % cell_number, "x": x, "z": z, "level": level, "kind": kind, "source": "player"})
	houses[index] = candidate
	_next_cell_id = cell_number + 1
	_high_watermark.cell = cell_number
	_commit(before, "添加露台" if kind == "terrace" else "扩展房屋")
	return {"ok": true, "message": "露台已建成" if kind == "terrace" else "房屋已扩展", "cell_id": candidate.cells[-1].id, "house_id": house_id}


func validate_add_cell(house_id: String, x: int, z: int, level: int, kind: String = "room") -> Dictionary:
	var index := _house_index(house_id)
	if index < 0:
		return _fail("房屋不存在")
	if houses[index].has("signature"):return _fail("地标保留完整结构，可在用途中移动或整体回收")
	if level < 0 or kind not in ["room", "terrace"]:
		return _fail("无效的房屋模块")
	var candidate: Dictionary = houses[index].duplicate(true)
	for cell in candidate.cells:
		if cell.x == x and cell.z == z and cell.level == level:
			return _fail("这里已经有模块")
	candidate.cells.append({"id": "c%d" % maxi(_next_cell_id, int(_high_watermark.cell) + 1), "x": x, "z": z, "level": level, "kind": kind, "source": "player"})
	var result := _validate_house(candidate)
	if not result.ok:
		return result
	if _house_overlaps(candidate, house_id):
		return _fail("这里与另一栋房屋重叠")
	return _validate_house_site(candidate)


## Resolve a complete brush gesture before issuing identities or writing history.
## Existing cells of the same kind are intentional no-ops when a brush returns.
func preview_add_cells(house_id: String, cells: Array) -> Dictionary:
	var index := _house_index(house_id)
	if index < 0:
		return _house_stroke_result(false, "房屋不存在", {"id":house_id,"origin":[]}, [])
	return _preview_house_stroke_cells(houses[index], cells, false)


func add_cells(house_id: String, cells: Array) -> Dictionary:
	var result := preview_add_cells(house_id, cells)
	if not result.ok or result.added_count == 0:
		return result
	var before := snapshot()
	var index := _house_index(house_id)
	var candidate: Dictionary = houses[index].duplicate(true)
	candidate.cells.append_array(result.added_cells.duplicate(true))
	houses[index] = candidate
	_issue_stroke_cells(result.added_cells)
	_commit(before, "连续扩展房屋")
	return result


func preview_house_stroke(position: Vector2, cells: Array) -> Dictionary:
	var house := _new_stroke_house(position)
	if not is_finite(position.x) or not is_finite(position.y):
		return _house_stroke_result(false, "无效的位置", house, [])
	return _preview_house_stroke_cells(house, cells, true)


func add_house_stroke(position: Vector2, cells: Array) -> Dictionary:
	var result := preview_house_stroke(position, cells)
	if not result.ok:
		return result
	var before := snapshot()
	var house := _new_stroke_house(position)
	house.cells.append_array(result.added_cells.duplicate(true))
	houses.append(house)
	preload("res://scripts/world/city_creation_build_brush.gd").apply(self,house)
	var house_number := int(house.id.substr(1))
	_next_house_id = house_number + 1
	_high_watermark.house = house_number
	_issue_stroke_cells(result.added_cells)
	Eras.refresh(self)
	_commit(before, "连续新建房屋")
	return result


func _new_stroke_house(position: Vector2) -> Dictionary:
	var number := maxi(_next_house_id, int(_high_watermark.house) + 1)
	var house:Dictionary={"id":"h%d" % number,"name":"石榴巷%d号" % number,"role":"residential","bakery_open":true,"workshop_open":true,"auto_matinee":false,"origin":[position.x,position.y],"base_y":sample_house_base_y(position) if is_finite(position.x) and is_finite(position.y) else 0.0,"cells":[],"palette":(number - 1) % 6,"seed":81000 + number * 977}
	_inherit_cluster(house)
	return house


func _preview_house_stroke_cells(house: Dictionary, cells: Array, new_house: bool) -> Dictionary:
	var candidate: Dictionary = house.duplicate(true)
	var locations := {}
	for cell in candidate.cells:
		locations[_stroke_cell_key(cell)] = cell.kind
	var added: Array[Dictionary] = []
	var input_cells: Array[Dictionary] = []
	var seen := {}
	var number := maxi(_next_cell_id, int(_high_watermark.cell) + 1)
	var conflict := ""
	for row in cells:
		if not row is Dictionary or not _is_integer(row.get("x")) or not _is_integer(row.get("z")) or not _is_integer(row.get("level")) or row.get("level", -1) < 0 or row.get("kind") not in ["room", "terrace"]:
			return _house_stroke_result(false, "无效的房屋模块", house, added, input_cells)
		var cell := {"x":int(row.x),"z":int(row.z),"level":int(row.level),"kind":row.kind}
		var key := _stroke_cell_key(cell)
		if seen.has(key):
			if seen[key] != cell.kind:
				conflict = "同一位置不能同时建房间和露台"
			continue
		seen[key] = cell.kind
		input_cells.append(cell.duplicate())
		if locations.has(key):
			if locations[key] != cell.kind:
				conflict = "这里已经有另一种模块"
			continue
		cell.id = "c%d" % number
		cell.source = "new_house" if new_house and added.is_empty() else "player"
		number += 1
		added.append(cell)
		candidate.cells.append(cell)
		locations[key] = cell.kind
	if new_house and (input_cells.is_empty() or input_cells[0].x != 0 or input_cells[0].z != 0 or input_cells[0].level != 0 or input_cells[0].kind != "room"):
		conflict = "新房第一格必须是原点的地面房间"
	if not conflict.is_empty():
		return _house_stroke_result(false, conflict, house, added, input_cells)
	var valid := _validate_house(candidate)
	if valid.ok and _house_overlaps(candidate, "" if new_house else str(house.id)):
		valid = _fail("这里与另一栋房屋重叠")
	if valid.ok:
		valid = _validate_house_site(candidate)
	return _house_stroke_result(valid.ok, valid.message if not valid.ok else ("房屋笔画未变" if added.is_empty() else "已建成 %d 个模块" % added.size()), house, added, input_cells)


func _stroke_cell_key(cell: Dictionary) -> String:
	return "%d:%d:%d" % [cell.x, cell.z, cell.level]


func _house_stroke_result(ok: bool, message: String, house: Dictionary, added: Array, input_cells: Array = []) -> Dictionary:
	return {"ok":ok,"message":message,"house_id":house.id,"origin":house.origin.duplicate(),"base_y":float(house.get("base_y",0.0)),"added_cells":added,"added_count":added.size(),"input_cells":input_cells}


func _issue_stroke_cells(cells: Array) -> void:
	var number := int(cells[-1].id.substr(1))
	_next_cell_id = number + 1
	_high_watermark.cell = number


func preview_remove_cell(house_id: String, cell_id: String) -> Dictionary:
	var signature_index:=_house_index(house_id)
	if signature_index>=0 and houses[signature_index].has("signature"):return preview_remove_house(house_id)
	var index := _house_index(house_id)
	if index < 0:
		return _removal_failure("房屋不存在")
	var candidate: Dictionary = houses[index].duplicate(true)
	var found := false
	for i in range(candidate.cells.size() - 1, -1, -1):
		if candidate.cells[i].id == cell_id:
			candidate.cells.remove_at(i)
			found = true
	if not found:
		return _removal_failure("模块不存在")
	# Resolve support dependants in the same transaction, topological order.
	var changed := true
	while changed:
		changed = false
		for i in range(candidate.cells.size() - 1, -1, -1):
			var cell: Dictionary = candidate.cells[i]
			if cell.level > 0 and not _supported(cell, candidate.cells):
				candidate.cells.remove_at(i)
				changed = true
	if not candidate.cells.is_empty():
		var result := _validate_house(candidate)
		if not result.ok:
			return _removal_failure(result.message)
	var kept := {}
	for cell in candidate.cells:
		kept[cell.id] = true
	var removed: Array[Dictionary] = []
	for cell in houses[index].cells:
		if not kept.has(cell.id):
			removed.append(cell.duplicate(true))
	return _removal_preview(removed, candidate.cells.is_empty())


func preview_remove_house(house_id: String) -> Dictionary:
	var index := _house_index(house_id)
	if index < 0:
		return _removal_failure("房屋不存在")
	var removed: Array[Dictionary] = []
	removed.assign(houses[index].cells.duplicate(true))
	return _removal_preview(removed, true)


func remove_cell(house_id: String, cell_id: String) -> Dictionary:
	var index:=_house_index(house_id)
	if index>=0 and houses[index].has("signature"):return remove_house(house_id)
	return _apply_removal(house_id, preview_remove_cell(house_id, cell_id), "移除模块")


func remove_house(house_id: String) -> Dictionary:
	return _apply_removal(house_id, preview_remove_house(house_id), "移除整栋房屋")


func _removal_failure(message: String) -> Dictionary:
	return {"ok":false,"message":message,"removed_cells":[],"removed_count":0,"whole_house":false}


func _removal_preview(removed: Array[Dictionary], whole_house: bool) -> Dictionary:
	return {"ok":true,"message":"已移除整栋房屋（%d 个模块）" % removed.size() if whole_house else "已移除 %d 个模块" % removed.size(),"removed_cells":removed,"removed_count":removed.size(),"whole_house":whole_house}


func _apply_removal(house_id: String, preview: Dictionary, label: String) -> Dictionary:
	if not preview.ok:
		return preview
	var before := snapshot()
	var index := _house_index(house_id)
	if preview.whole_house:
		houses.remove_at(index)
		_prune_missing_journeys()
	else:
		var removed := {}
		for cell in preview.removed_cells:
			removed[cell.id] = true
		var kept: Array[Dictionary] = []
		for cell in houses[index].cells:
			if not removed.has(cell.id):
				kept.append(cell)
		houses[index].cells = kept
	_commit(before, label)
	return preview


func add_house(position: Vector2) -> Dictionary:
	var result := validate_add_house(position)
	if not result.ok:
		return result
	var before := snapshot()
	var house_number := maxi(_next_house_id, int(_high_watermark.house) + 1)
	var cell_number := maxi(_next_cell_id, int(_high_watermark.cell) + 1)
	var house := {"id": "h%d" % house_number, "name": "石榴巷%d号" % house_number, "role": "residential", "bakery_open":true,"workshop_open":true,"auto_matinee":false, "origin": [position.x, position.y], "cells": [{"id": "c%d" % cell_number, "x": 0, "z": 0, "level": 0, "kind": "room", "source": "new_house"}], "palette": (house_number - 1) % 6, "seed": 81000 + house_number * 977}
	house.base_y = sample_house_base_y(position)
	_inherit_cluster(house)
	houses.append(house)
	preload("res://scripts/world/city_creation_build_brush.gd").apply(self,house)
	_next_house_id = house_number + 1
	_next_cell_id = cell_number + 1
	_high_watermark.house = house_number
	_high_watermark.cell = cell_number
	Eras.refresh(self)
	_commit(before, "新建房屋")
	return {"ok": true, "message": "新房屋已建成", "house_id": house.id,"base_y":house.base_y}


func validate_add_house(position: Vector2) -> Dictionary:
	if not is_finite(position.x) or not is_finite(position.y):
		return _fail("无效的位置")
	var house := {"origin": [position.x, position.y], "cells": [{"x": 0, "z": 0, "level": 0, "kind": "room"}]}
	if _house_overlaps(house):
		return _fail("这里与另一栋房屋重叠")
	return _validate_house_site(house)


func set_house_role(house_id: String, role: String) -> Dictionary:
	var index := _house_index(house_id)
	if index < 0:
		return _fail("房屋不存在")
	if houses[index].has("signature") and role!=Signatures.ROLES[str(houses[index].signature)]:return _fail("地标保持专属用途")
	if role not in HOUSE_ROLES:
		return _fail("未知的建筑用途")
	if not can_assign_role(role):return _fail("这个用途所属时代尚未开启，可在手册中开启自由创作")
	if houses[index].role == role:
		return {"ok": true, "message": "建筑用途未变"}
	var before := snapshot()
	return_craft(house_id)
	houses[index].role = role
	_prune_missing_journeys()
	_commit(before, "更改建筑用途")
	return {"ok": true, "message": "建筑用途已更改"}


func refresh_growth(prepared_rows:Array=[]) -> Array[String]:
	var earned: Array[String] = []
	var rows:Array=prepared_rows
	while growth_memories.size()<Growth.CHAPTERS.size():
		if rows.is_empty():rows=Growth.report(self)
		var row: Dictionary = rows[growth_memories.size()]
		if not row.ready: break
		growth_memories.append(str(row.id))
		earned.append(str(row.id))
		rows=[]
	var new_era := Eras.refresh(self)
	if not earned.is_empty() or new_era:
		dirty = true
		life_progress_dirty = true
	return earned


func growth_geometry_summary() -> Dictionary:
	if _growth_geometry_revision != revision:
		_growth_geometry_cache = Growth.geometry_summary(self)
		_growth_geometry_revision = revision
	return _growth_geometry_cache


func set_house_palette(house_id: String, palette: int) -> Dictionary:
	var index := _house_index(house_id)
	if index<0: return _fail("房屋不存在")
	if palette<0 or palette>3: return _fail("请选择现有的四种房屋配色")
	if int(houses[index].palette)==palette and not houses[index].has("finish") and not houses[index].has("custom_colors"):
		return {"ok":true,"message":"房屋配色未变","no_op":true}
	var before := snapshot()
	houses[index].palette = palette
	houses[index].erase("finish")
	houses[index].erase("custom_colors")
	_commit(before,"更改房屋配色")
	return {"ok":true,"message":"房屋已换上配色","appearance_house_id":house_id}


func rotate_house(house_id:String,angle:float)->Dictionary:
	return Rotation.set_angle(self,house_id,angle)

func set_house_colors(house_id:String,wall:Color,roof:Color)->Dictionary:
	var index:=_house_index(house_id)
	if index<0:return _fail("房屋不存在")
	for value:float in [wall.r,wall.g,wall.b,roof.r,roof.g,roof.b]:
		if not is_finite(value):return _fail("配色数值无效")
	var colors:Dictionary={"wall":wall.clamp().to_html(false),"roof":roof.clamp().to_html(false)}
	if houses[index].get("custom_colors",{})==colors:return {"ok":true,"no_op":true,"message":"房屋配色未变"}
	var before:=snapshot()
	houses[index].custom_colors=colors
	houses[index].erase("finish")
	_commit(before,"自选房屋配色")
	return {"ok":true,"message":"已换上自选配色","appearance_house_id":house_id}


func set_house_architecture(house_id: String, key: String) -> Dictionary:
	return preload("res://scripts/world/city_creation_architecture_choice.gd").set_choice(self,house_id,key)
func set_house_style(house_id: String, style: String) -> Dictionary:
	var index := _house_index(house_id)
	if index<0: return _fail("房屋不存在")
	if houses[index].has("signature"):return _fail("地标保留专属建筑样式")
	if style not in HOUSE_STYLES: return _fail("未知的建筑样式")
	if houses[index].get("style","classic")==style: return {"ok":true,"message":"建筑样式未变"}
	var before := snapshot()
	if style=="classic": houses[index].erase("style")
	else: houses[index].style=style
	_commit(before,"更改建筑样式")
	return {"ok":true,"message":"已换为"+{"classic":"河湾灰泥屋","timber":"木构街屋","stone":"石砌街屋","round_tower":"圆塔望楼"}[style]}


func house_temperament(house_id:String)->String:
	var index:=_house_index(house_id)
	return str(houses[index].get("temperament","andante")) if index>=0 else "andante"

func temperament_speed(house_id:String)->float:
	return {"andante":1.,"allegro":1.25,"largo":1./1.3}[house_temperament(house_id)]

func temperament_walk(house_id:String)->float:
	return 1.25 if house_temperament(house_id)=="allegro" else 1.

func grant_temperament_resonance(house_id:String,offset:float=0.)->void:
	if house_temperament(house_id)!="largo":return
	var index:=_house_index(house_id)
	if index<0:return
	var at:=Vector2(houses[index].origin[0],houses[index].origin[1])
	for house:Dictionary in houses:
		if at.distance_squared_to(Vector2(house.origin[0],house.origin[1]))<=225.:
			var id:=str(house.id)
			resonance_afterglow[id]=minf(afterglow_limit(id),maxf(afterglow_remaining(id),offset)+20.)
			life_progress_dirty=true;dirty=true

func set_house_temperament(house_id:String,temperament:String)->Dictionary:
	var index:=_house_index(house_id)
	if index<0:return _fail("房屋不存在")
	if temperament not in ["allegro","andante","largo"]:return _fail("未知的建筑律动")
	if str(houses[index].get("temperament","andante"))==temperament:return {"ok":true,"message":"建筑律动未变","no_op":true}
	var before:=snapshot()
	if temperament=="andante":houses[index].erase("temperament")
	else:houses[index].temperament=temperament
	_commit(before,"更改建筑律动")
	return {"ok":true,"message":"建筑律动已调整"}


func finish_available(finish:String)->bool:
	return ArchiveRewards.finish_available(finish,growth_memories,archive_unlocks)

func apply_archive_unlocks(ids:Array)->void:
	for id:String in ids:
		if id in ArchiveRewards.IDS and id not in archive_unlocks:archive_unlocks.append(id);dirty=true

func set_music_mode(mode:String)->Dictionary:
	if mode!="" and not ArchiveRewards.mode_available(mode,archive_unlocks):return _fail("这个调式尚未在图鉴中解锁")
	if mode==music_mode:return {"ok":true,"no_op":true,"message":"调式未变"}
	var before:=snapshot();music_mode=mode;_commit(before,"选择河湾调式")
	return {"ok":true,"message":"已选择"+str(ArchiveRewards.MODE_NAMES.get(mode,"地貌原声"))}

func set_house_finish(house_id: String, finish: String) -> Dictionary:
	var index := _house_index(house_id)
	if index<0: return _fail("房屋不存在")
	if not Growth.FINISHES.has(finish): return _fail("未知的房屋饰色")
	if not finish_available(finish):return _fail("先在手记或声学图鉴中解锁这款饰色")
	if houses[index].get("finish", "")==finish: return {"ok":true,"message":"房屋饰色未变","no_op":true}
	var before := snapshot()
	houses[index].finish = finish
	houses[index].erase("custom_colors")
	_commit(before,"换上成长饰色")
	return {"ok":true,"message":"已换上"+str(Growth.FINISHES[finish].name),"appearance_house_id":house_id}


func set_house_name(house_id: String, house_name: String) -> Dictionary:
	var index := _house_index(house_id)
	if index < 0:
		return _fail("房屋不存在")
	var clean := house_name.strip_edges()
	if clean.is_empty():
		return _fail("请填写建筑名字")
	if houses[index].name == clean:
		return {"ok": true, "message": "建筑名字未变"}
	var before := snapshot()
	houses[index].name = clean
	_commit(before, "命名建筑")
	return {"ok": true, "message": "建筑名字已保存"}


## A painted community expresses musical intent, separate from construction
## occupancy and road connectivity. Latest stroke owns overlapping origins.
func add_district(points: Array[Vector2], width: float = 5.6, style: String = "warm", adaptive: bool = false) -> Dictionary:
	if not is_finite(width) or width < 3.2 or width > 10.0:
		return _fail("街坊宽度应为3.2至10米")
	var number := maxi(_next_district_id, int(_high_watermark.get("district", 0)) + 1)
	var rows: Array = []
	for point in points:
		rows.append([point.x, point.y])
	var district := {"id": "d%d" % number, "name": "%s%d" % [DISTRICT_STYLE_NAMES.get(style, ""), number], "style": style, "points": rows, "width": Vector2(width, 0).x}
	if adaptive: district.adaptive = true
	var valid := _validate_district_fields(district)
	if not valid.ok:
		return valid
	var before := snapshot()
	districts.append(district)
	_next_district_id = number + 1
	_high_watermark.district = number
	_commit(before, "划定音乐街坊")
	return {"ok": true, "message": "音乐街坊已划定", "district_id": district.id}


func district_at(position: Vector2) -> Dictionary:
	if not is_finite(position.x) or not is_finite(position.y):
		return {}
	for index in range(districts.size() - 1, -1, -1):
		var district: Dictionary = districts[index]
		if district.has("auto_members"):
			for id:String in district.auto_members:
				var index_value:=_house_index(id)
				if index_value>=0 and position.distance_squared_to(Vector2(houses[index_value].origin[0],houses[index_value].origin[1]))<1.44:return district.duplicate(true)
			continue
		if _water_stroke_distance(position, district.points) <= float(district.width) * 0.5:
			return district.duplicate(true)
	return {}


func district_for_house(house_id: String) -> Dictionary:
	var index := _house_index(house_id)
	if index < 0:
		return {}
	var at:=Vector2(float(houses[index].origin[0]),float(houses[index].origin[1]))
	for i:int in range(districts.size()-1,-1,-1):
		var district:Dictionary=districts[i]
		if not district.has("auto_members") and _water_stroke_distance(at,district.points)<=float(district.width)*.5:return district.duplicate(true)
	for district:Dictionary in districts:
		if house_id in district.get("auto_members",[]):return district.duplicate(true)
	return {}


func district_members(district_id: String) -> Array[String]:
	var members: Array[String] = []
	if _district_index(district_id) < 0:
		return members
	for house in houses:
		if district_for_house(house.id).get("id", "") == district_id:
			members.append(house.id)
	return members


func set_district_name(district_id: String, district_name: String) -> Dictionary:
	var index := _district_index(district_id)
	if index < 0:
		return _fail("街坊不存在")
	var clean := district_name.strip_edges()
	if not _valid_district_name(clean):
		return _fail("街坊名字应为1至48个字，不含换行或控制字符")
	if districts[index].name == clean:
		return {"ok": true, "message": "街坊名字未变"}
	var before := snapshot()
	districts[index].name = clean
	_commit(before, "命名音乐街坊")
	return {"ok": true, "message": "街坊名字已保存"}


func set_district_style(district_id: String, style: String) -> Dictionary:
	var index := _district_index(district_id)
	if index < 0:
		return _fail("街坊不存在")
	if style not in DISTRICT_STYLES:
		return _fail("未知的街坊音乐风格")
	if districts[index].style == style:
		return {"ok": true, "message": "街坊风格未变"}
	var before := snapshot()
	districts[index].style = style
	_commit(before, "更改街坊音乐风格")
	return {"ok": true, "message": "街坊音乐风格已更改"}


func can_host_concert(house_id:String)->bool:
	var index:=_house_index(house_id)
	return index>=0 and (houses[index].get("signature","") in Signatures.IDS or houses[index].role in ["venue","symphony_hall"])

func natural_clusters()->Dictionary:
	var input:Array=[]
	for house:Dictionary in houses:
		var ground:Array=[]
		for cell:Dictionary in house.cells:
			if int(cell.level)==0:ground.append([cell.x,cell.z,cell.kind])
		input.append([house.id,house.origin,ground,Rotation.Frame.yaw(house),Rotation.Frame.Hinge.key(house)])
	var key:=hash([input,roads])
	if _natural_cluster_key!=key:
		var doors:Dictionary={}
		for house:Dictionary in houses:doors[house.id]=house_entrances(str(house.id))
		_natural_cluster_rows=NaturalClusters.derive(houses,NaturalClusters.street_members(houses,roads,doors));_natural_cluster_key=key
	return _natural_cluster_rows

func house_acoustic_style(house:Dictionary)->String:
	return preload("res://scripts/world/city_creation_spatial_voice.gd").style(self,house)

func _inherit_cluster(house:Dictionary)->void:
	var at:=Vector2(house.origin[0],house.origin[1]);var best:Dictionary={};var distance:=INF
	for other:Dictionary in houses:
		if other.has("signature"):continue
		var gap:=at.distance_squared_to(Vector2(other.origin[0],other.origin[1]))
		if gap>NaturalClusters.REACH*NaturalClusters.REACH:continue
		if gap<distance or (is_equal_approx(gap,distance) and str(other.id)<str(best.get("id","~"))):best=other;distance=gap
	if best.is_empty():return
	var era:=house_era(best);var style:=house_acoustic_style(best)
	if era!="pastoral":house.era_theme=era
	if style!="warm" and (best.has("acoustic_style") or not automatic_neighborhoods):house.acoustic_style=style

func set_cluster_style(house_id:String,style:String)->Dictionary:
	if style not in DISTRICT_STYLES:return _fail("未知的聚落曲风")
	var group:Dictionary=natural_clusters().get(house_id,{})
	if group.is_empty():return _fail("房屋不存在")
	var before:=snapshot()
	for house:Dictionary in houses:
		if house.id in group.members and not house.has("signature"):house.acoustic_style=style
	_commit(before,"更改聚落曲风")
	return {"ok":true,"message":"整片聚落已换上共同曲风"}

func set_cluster_era(house_id:String,era:String)->Dictionary:
	if not can_build_era(era):return _fail("这个时代尚未开启")
	var group:Dictionary=natural_clusters().get(house_id,{})
	if group.is_empty():return _fail("房屋不存在")
	var before:=snapshot()
	for house:Dictionary in houses:
		if house.id in group.members and not house.has("signature"):house.era_theme=era
	Eras.refresh(self);_commit(before,"更改聚落时代")
	return {"ok":true,"message":"整片聚落已换上共同风貌"}

func house_era(house: Dictionary) -> String:
	return Eras.for_house(self, house)

func preview_signature(kind: String, position: Vector2, moving: String="") -> Dictionary:
	return Signatures.preview(self,kind,position,moving)

func place_signature(kind: String, position: Vector2, moving: String="") -> Dictionary:
	return Signatures.place(self,kind,position,moving)

func record_district_answer(from_id: String,to_id: String,from_era: String="",to_era: String="") -> bool:
	if from_id==to_id or _district_index(from_id)<0 or _district_index(to_id)<0:return false
	var pair:=_canonical_musical_link(from_id,to_id)
	var changed:=false
	if pair not in district_answers:district_answers.append(pair);changed=true
	if can_build_era(from_era) and can_build_era(to_era) and from_era!=to_era:
		var evidence:Dictionary=pair.duplicate()
		evidence.from_era=from_era if pair.from==from_id else to_era
		evidence.to_era=to_era if pair.to==to_id else from_era
		if evidence not in era_answers:era_answers.append(evidence);changed=true
	if not changed:return false
	_invalidate_regional_echo()
	Eras.refresh(self);Signatures.refresh(self);_craft_changed();return true

func reward_completed_district_reply(from_id:String,to_id:String,from_era:String="",to_era:String="")->Dictionary:
	if from_id==to_id or _district_index(from_id)<0 or _district_index(to_id)<0:return {}
	record_district_answer(from_id,to_id,from_era,to_era)
	_record_regional_exchange(from_id,to_id,regional_replies)
	var durations:Dictionary={from_id:30.,to_id:30.};var recipients:Array[String]=[]
	for house:Dictionary in houses:
		if house.get("signature","")!="music_academy":continue
		var did:=str(district_for_house(str(house.id)).get("id",""))
		if durations.has(did):durations[did]=60.
	for house:Dictionary in houses:
		var id:=str(house.id);var did:=str(district_for_house(id).get("id",""))
		if not durations.has(did):continue
		grant_resonance_afterglow([id],float(durations[did]));recipients.append(id)
	return {"durations":durations,"house_ids":recipients}

func signature_bonuses() -> Dictionary:
	if _signature_bonuses_revision!=revision:
		_signature_bonuses_revision=revision;_signature_bonuses={"walking":1.0,"focus_radius":0.0,"bread_batch":0,"baking_speed":1.0,"watermill_id":"","palace_id":"","depot_id":"","afterglow_seconds":0.0,"tram_speed":1.0}
		for house: Dictionary in houses:
			if house.get("signature","")=="bell_keep":_signature_bonuses.walking=1.15;_signature_bonuses.focus_radius=3.0
			if house.get("signature","")=="watermill":_signature_bonuses.bread_batch=1;_signature_bonuses.baking_speed=1.25;_signature_bonuses.watermill_id=str(house.id)
			if house.get("signature","")=="botanical_palace":_signature_bonuses.palace_id=str(house.id);_signature_bonuses.afterglow_seconds=180.0
			if house.get("signature","")=="clockwork_depot":_signature_bonuses.depot_id=str(house.id);_signature_bonuses.tram_speed=1.2
	return _signature_bonuses

func concert_radius(venue_id: String) -> float:
	var index:=_house_index(venue_id)
	if index>=0 and houses[index].get("role","")=="symphony_hall":return service_radius(32. if special_site(venue_id).get("hall_ecology",false) else 22.)
	if special_site(venue_id).get("venue_echo",false):return service_radius(28.)
	return service_radius(38.0 if index>=0 and houses[index].get("signature","")=="music_academy" else 22.0)

func special_site(house_id:String)->Dictionary:
	var key:Array=[revision,_region_network_revision]
	if key!=_special_site_key:_special_sites.clear();_special_site_key=key
	if not _special_sites.has(house_id):
		var row:Dictionary=planning_bonus(house_id).get("site",{}).duplicate()
		var peers:Array=[];var connections:Dictionary=_region_network.get("house_components",{}) if _region_network_revision==revision else {}
		if connections.has(house_id):
			for id:String in row.get("arcade_neighbors",[]):
				if connections.get(id,"")==connections[house_id]:peers.append(id)
		row.arcade_street=peers.size()>=2
		if row.arcade_street:row.label="连拱长廊街 · 两座实际连拱邻屋沿路相通 · 送装提速40%"
		_special_sites[house_id]=row
	return _special_sites[house_id]

func craft_radius(shop_id:String)->float:
	var index:=_house_index(shop_id)
	if index>=0 and houses[index].role=="atelier" and "polyphonic_academy" in era_modifiers:return INF
	return service_radius(30. if special_site(shop_id).get("clock_hub",false) else 22.)

func clockwork_speed_zones()->Array[Dictionary]:
	var zones:Array[Dictionary]=[]
	for house:Dictionary in houses:
		if str(house.role)=="clockmaker" and special_site(str(house.id)).get("clock_hub",false):zones.append({"origin":Vector2(house.origin[0],house.origin[1]),"district_id":str(district_for_house(str(house.id)).get("id",""))})
	return zones

func _invalidate_regional_echo()->void:
	_regional_echo.clear();_echo_epoch+=1;_quality_geometry_revision=-1

func prepare_regional_echo(network:RefCounted)->void:
	var started:=Time.get_ticks_usec()
	_region_network=RegionalEcho.prepare(self,network);_region_network_revision=revision;_invalidate_regional_echo()
	if CreationPolicy.is_free(self):_synergy_revision=-1
	regional_prepare_ms=float(Time.get_ticks_usec()-started)/1000.

func regional_echo()->Dictionary:
	if _regional_echo.is_empty() or _regional_echo_revision!=revision:
		_regional_echo=RegionalEcho.evaluate(_region_network if _region_network_revision==revision else {},regional_replies,regional_trips);_regional_echo_revision=revision
	return _regional_echo

func service_radius(base:float)->float:
	return base*float(regional_echo().range_mult)

func record_completed_tram_commute(home_id:String,target_id:String,from_district:String="")->bool:
	var a:=from_district if not from_district.is_empty() else str(district_for_house(home_id).get("id",""));var b:=str(district_for_house(target_id).get("id",""))
	if a.is_empty() or b.is_empty() or a==b:return false
	return _record_regional_exchange(a,b,regional_trips)

func _record_regional_exchange(a:String,b:String,ledger:Array[Dictionary])->bool:
	if _region_network_revision!=revision:return false
	var nodes:Dictionary=_region_network.get("nodes",{})
	if not nodes.has(a) or not nodes.has(b):return false
	var pair:=_canonical_musical_link(a,b)
	pair.from_voice=nodes[pair.from].identity;pair.to_voice=nodes[pair.to].identity
	pair.from_region=nodes[pair.from].region;pair.to_region=nodes[pair.to].region
	if pair in ledger:return false
	ledger.append(pair);_invalidate_regional_echo();_craft_changed();return true

func walking_multiplier(home_id: String) -> float:
	return ScoreModifiers.walking(self,home_id)*float(signature_bonuses().walking)*(1.08 if level_tier(home_id)>=2 else 1.0)*float(planning_bonus(home_id).get("walking_mult",1.))

func level_tier(house_id: String) -> int:
	return preload("res://scripts/world/city_creation_tradition_economy.gd").shared_tier(self,house_id)

func refresh_quality(connected: Dictionary, workplaces: Dictionary={}, first:int=0, count:int=-1) -> Array[Dictionary]:
	if _quality_geometry_revision!=revision:
		_quality_amenities.clear();_quality_geometry_revision=revision
	if first==0:Signatures.refresh(self)
	return Quality.refresh(self,connected,workplaces,first,count)

func record_concert_participants(venue: String, participants: Array, relay: bool) -> void:
	var seen := {venue:true}
	for id: String in participants: seen[id]=true
	for id: String in seen:
		var row: Dictionary=house_concerts.get(id,{"concerts":0,"relays":0})
		house_concerts[id]={"concerts":int(row.concerts)+1,"relays":int(row.relays)+(1 if relay else 0)}
	_craft_changed()

func culture_level(house_id: String) -> int:
	return int(house_culture.get(house_id, 0))

func set_district_era(district_id: String, era: String) -> Dictionary:
	var index := _district_index(district_id)
	if index < 0: return _fail("街坊不存在")
	if not can_build_era(era): return _fail("这个时代尚未开启")
	if str(districts[index].get("era_theme", "pastoral")) == era: return {"ok":true,"message":"街坊风貌未变"}
	var before := snapshot()
	if era == "pastoral": districts[index].erase("era_theme")
	else: districts[index].era_theme = era
	_commit(before, "更改街坊时代风貌")
	return {"ok":true,"message":"街坊时代风貌已更改"}

func set_house_era(house_id: String, era: String) -> Dictionary:
	var index := _house_index(house_id)
	if index < 0: return _fail("房屋不存在")
	if houses[index].has("signature"):return _fail("地标保留专属时代风貌")
	if era != "district" and not can_build_era(era): return _fail("这个时代尚未开启")
	var before := snapshot()
	if era == "district": houses[index].erase("era_theme")
	else: houses[index].era_theme = era
	preload("res://scripts/world/city_creation_build_brush.gd").align_selected_era(self,houses[index])
	if before == snapshot(): return {"ok":true,"message":"房屋风貌未变"}
	_commit(before,"更改房屋时代风貌")
	return {"ok":true,"message":"房屋风貌已更改"}

func set_district_adaptive(district_id: String, adaptive: bool) -> Dictionary:
	var index := _district_index(district_id)
	if index < 0: return _fail("街坊不存在")
	if bool(districts[index].get("adaptive", false)) == adaptive:
		return {"ok":true,"message":"街坊配器方式未变"}
	var before := snapshot()
	if adaptive: districts[index].adaptive = true
	else: districts[index].erase("adaptive")
	_commit(before, "随用途配器" if adaptive else "保留手动配器")
	return {"ok":true,"message":"街坊会随用途添上伴奏" if adaptive else "街坊保持所选基调"}


func remove_district(district_id: String) -> Dictionary:
	var index := _district_index(district_id)
	if index < 0:
		return _fail("街坊不存在")
	var before := snapshot()
	districts.remove_at(index)
	for link_index in range(musical_links.size() - 1, -1, -1):
		if musical_links[link_index].from == district_id or musical_links[link_index].to == district_id:
			musical_links.remove_at(link_index)
	_commit(before, "移除音乐街坊")
	return {"ok": true, "message": "音乐街坊已移除", "district_id": district_id}


func link_districts(from_id: String, to_id: String) -> Dictionary:
	if from_id == to_id: return _fail("请选择两个不同的音乐街坊")
	if _district_index(from_id) < 0 or _district_index(to_id) < 0: return _fail("音乐街坊不存在")
	var link := _canonical_musical_link(from_id, to_id)
	if _musical_link_index(link) >= 0:
		return {"ok":true,"changed":false,"no_op":true,"message":"这两个街坊已共鸣相连","link":link}
	var before := snapshot()
	musical_links.append(link)
	_commit(before, "连接共鸣街坊")
	return {"ok":true,"changed":true,"no_op":false,"message":"两个街坊已共鸣相连","link":link.duplicate()}


func unlink_districts(from_id: String, to_id: String) -> Dictionary:
	if from_id == to_id: return _fail("请选择两个不同的音乐街坊")
	if _district_index(from_id) < 0 or _district_index(to_id) < 0: return _fail("音乐街坊不存在")
	var link := _canonical_musical_link(from_id, to_id)
	var index := _musical_link_index(link)
	if index < 0:
		return {"ok":true,"changed":false,"no_op":true,"message":"这两个街坊没有共鸣连线","link":link}
	var before := snapshot()
	musical_links.remove_at(index)
	_commit(before, "断开共鸣街坊")
	return {"ok":true,"changed":true,"no_op":false,"message":"街坊共鸣连线已断开","link":link}


func _canonical_musical_link(from_id: String, to_id: String) -> Dictionary:
	return {"from":from_id,"to":to_id} if int(from_id.substr(1)) < int(to_id.substr(1)) else {"from":to_id,"to":from_id}


func _musical_link_index(link: Dictionary) -> int:
	for index in range(musical_links.size()):
		if musical_links[index].from == link.from and musical_links[index].to == link.to: return index
	return -1


func remove_district_at(position: Vector2) -> Dictionary:
	var district := district_at(position)
	if district.is_empty():
		return _fail("这里没有音乐街坊")
	return remove_district(district.id)


func _district_index(district_id: String) -> int:
	for index in range(districts.size()):
		if districts[index].id == district_id:
			return index
	return -1


func _valid_district_name(value: Variant) -> bool:
	if not value is String or value.is_empty() or value.length() > 48 or value.strip_edges() != value:
		return false
	for index in range(value.length()):
		if value.unicode_at(index) < 32 or value.unicode_at(index) == 127:
			return false
	return true


func _validate_district_fields(district: Dictionary) -> Dictionary:
	for field in district:
		if field not in ["id", "name", "style", "points", "width", "adaptive", "era_theme", "auto_members"]:
			return _fail("街坊存在未知字段")
	if district.has("era_theme") and district.era_theme not in Eras.IDS: return _fail("街坊时代风貌无效")
	if district.has("adaptive") and typeof(district.adaptive) != TYPE_BOOL:
		return _fail("街坊配器方式无效")
	if not _valid_district_name(district.get("name")) or district.get("style") not in DISTRICT_STYLES:
		return _fail("街坊名字或音乐风格无效")
	if not _is_number(district.get("width")) or float(district.width) < 3.2 or float(district.width) > 10.0:
		return _fail("街坊宽度应为3.2至10米")
	if not district.get("points") is Array or district.points.is_empty():
		return _fail("街坊范围需要至少一个点")
	var previous: Vector2
	for index in range(district.points.size()):
		var point: Variant = district.points[index]
		if not _valid_point(point):
			return _fail("街坊位置无效")
		var position := Vector2(float(point[0]), float(point[1]))
		if not WORLD_RECT.has_point(position):
			return _fail("街坊笔画超出创作范围")
		if index > 0 and position == previous:
			return _fail("街坊笔画包含重复相邻点")
		previous = position
	return {"ok": true, "message": ""}


## Water is an editable continuous mask, inspired by Tiny Glade's separate
## WaterRas / Terrain fields. Author strokes; derive occupancy and shoreline.
const WaterDistance=preload("res://scripts/world/city_creation_water_distance.gd")
var _water_distance:=WaterDistance.new()

func water_clearance(position: Vector2) -> float:
	var river:=absf(position.x-river_x(position.y))-RIVER_HALF_WIDTH
	if waters.is_empty():return river
	_water_distance.prepare(waters)
	return _water_distance.distance(position,river)


func street_height(position: Vector2) -> float:
	if _ground_revision!=revision: prepare_ground_height()
	if _street_marker_revision!=revision:_street_markers=Roundabouts.all(roads);_street_marker_revision=revision
	for marker: Dictionary in _street_markers:
		if position.distance_to(marker.center)<=marker.radius: return _ground_terrain.raw_height_at(marker.center)+.075
	var road_y:float=_road_heights.height_at(position,NAN)
	if not is_nan(road_y):return road_y
	var legacy := 0.055+0.185*(1.0-smoothstep(-0.05,0.65,water_clearance(position)))
	return maxf(_ground_terrain.height_at(position)+0.075,legacy)

func _prepare_raw_height() -> void:
	if _raw_ground_revision==revision: return
	_ground_terrain.prepare_raw(waters,water_clearance,terrain_strokes)
	_raw_ground_revision = revision

func raw_terrain_height(position: Vector2) -> float:
	_prepare_raw_height()
	return _ground_terrain.raw_height_at(position)

func sample_house_base_y(position: Vector2) -> float:
	return clampf(roundf(raw_terrain_height(position)/0.05)*0.05,0.0,6.0)

func road_profile(road: Dictionary) -> Dictionary:
	if _ground_revision!=revision: prepare_ground_height()
	return _road_heights.profiles.get(str(road.get("id","")),{})


func courtyard_plans() -> Array:
	# Every block reads the same immutable result until a transaction/restore.
	if _courtyard_revision!=revision:
		_courtyard_plans_cache=_courtyards.plans(self)
		_courtyard_revision=revision
	return _courtyard_plans_cache

func prepare_ground_height() -> bool:
	# Transactions/restore invalidate revision just as ground_height() expects.
	# Natural layers share this prepared field; do not rebuild protection per layer.
	if _ground_revision==revision: return false
	_prepare_raw_height()
	_road_heights.prepare(self)
	var protection: Array = _terrain_protection.build(self,_road_heights.profiles)
	var changed: bool = _ground_terrain.prepare(waters,water_clearance,terrain_strokes,protection)
	_ground_revision = revision
	return changed


func ground_height(position: Vector2) -> float:
	if _ground_revision!=revision: prepare_ground_height()
	return _ground_terrain.height_at(position)


func _water_clearance_in(position: Vector2, rows: Array) -> float:
	var distance := absf(position.x - river_x(position.y)) - RIVER_HALF_WIDTH
	for water in rows:
		distance = minf(distance, _water_stroke_distance(position, water.points) - float(water.width) * 0.5)
	return distance


func _water_stroke_distance(position: Vector2, points: Array) -> float:
	var distance := position.distance_to(Vector2(points[0][0], points[0][1]))
	for index in range(1, points.size()):
		distance = minf(distance, _distance_to_segment(position, Vector2(points[index - 1][0], points[index - 1][1]), Vector2(points[index][0], points[index][1])))
	return distance


func preview_water(points: Array[Vector2], width: float = 2.4, kind: String = "channel") -> Dictionary:
	var encoded: Array = []
	for point in points:
		encoded.append([point.x, point.y])
	var valid := _validate_water_fields({"points": encoded, "width": width, "kind": kind})
	if not valid.ok:
		valid.conflicts = []
		return valid
	if kind == "channel":
		if water_clearance(points[0]) > 0.0:
			return {"ok": false, "message": "引水需要从已有水域起笔", "conflicts": []}
		if points.size() < 2 or water_clearance(points[-1]) <= 0.0:
			return {"ok": false, "message": "请将水渠拖到干地", "conflicts": []}
	var conflicts := _water_conflicts(encoded, width, houses, roads)
	return {"ok": conflicts.is_empty(), "message": "水岸可建" if conflicts.is_empty() else "水岸与现有%s冲突" % {"house":"房屋","road":"道路","landmark":"传世地标"}.get(conflicts[0].kind,"建筑"), "conflicts": conflicts}


func add_water(points: Array[Vector2], width: float = 2.4, kind: String = "channel") -> Dictionary:
	var valid := preview_water(points, width, kind)
	if not valid.ok:
		return valid
	var before := snapshot()
	var number := maxi(_next_water_id, int(_high_watermark.get("water", 0)) + 1)
	var encoded: Array = []
	for point in points:
		encoded.append([point.x, point.y])
	var water := {"id": "w%d" % number, "kind": kind, "points": encoded, "width": width, "seed": 261014 + number * 977, "source": "player"}
	waters.append(water)
	_next_water_id = number + 1
	_high_watermark.water = number
	_commit(before, "开挖池塘" if kind == "pond" else "引水")
	return {"ok": true, "message": "池塘已挖好" if kind == "pond" else "水渠已引入", "water_id": water.id, "seed": water.seed, "conflicts": []}


func remove_water_at(position: Vector2) -> Dictionary:
	if not is_finite(position.x) or not is_finite(position.y):
		return _fail("无效的水域位置")
	for index in range(waters.size() - 1, -1, -1):
		var water: Dictionary = waters[index]
		if _water_stroke_distance(position, water.points) > float(water.width) * 0.5:
			continue
		var remaining_waters: Array = waters.duplicate(true)
		remaining_waters.remove_at(index)
		var bridge_flags: Array[bool] = []
		for road in roads:
			var valid := _validate_road_site(road.points, float(road.width), houses, remaining_waters)
			if not valid.ok:
				return _fail("填回后道路 %s 无法完整跨岸：%s" % [road.id, valid.message])
			bridge_flags.append(valid.bridge)
		var before := snapshot()
		waters.remove_at(index)
		# A crossing becomes a ground path after filling. Other crossings keep
		# their bridge flag, and the original river remains immutable.
		for road_index in range(roads.size()):
			roads[road_index].bridge = bridge_flags[road_index]
		_commit(before, "填回水域")
		return {"ok": true, "message": "水域已填回", "water_id": water.id}
	return _fail("这里没有可填回的自建水域")


func _validate_water_fields(water: Dictionary) -> Dictionary:
	if water.get("kind") not in ["channel", "pond"] or not _is_number(water.get("width")) or float(water.width) < 1.2 or float(water.width) > 6.0:
		return _fail("水岸宽度需为 1.2—6 米")
	if not water.get("points") is Array or water.points.is_empty() or (water.kind == "channel" and water.points.size() < 2):
		return _fail("水域笔画无效")
	var inset := WORLD_RECT.grow(-float(water.width) * 0.5)
	var length := 0.0
	for index in range(water.points.size()):
		var point: Variant = water.points[index]
		if not _valid_point(point):
			return _fail("水域位置无效")
		var position := Vector2(float(point[0]), float(point[1]))
		if not inset.has_point(position):
			return _fail("整条水岸需要留在河湾范围内")
		if index > 0:
			length += position.distance_to(Vector2(water.points[index - 1][0], water.points[index - 1][1]))
	if water.kind == "channel" and length < 0.2:
		return _fail("水渠太短")
	return {"ok": true, "message": ""}


func _water_conflicts(points: Array, width: float, house_rows: Array, road_rows: Array) -> Array[Dictionary]:
	var conflicts: Array[Dictionary] = []
	if is_same(house_rows,houses):conflicts.append_array(PlacedLandmarks.water_conflicts(self,points,width))
	for house in house_rows:
		for cell in house.cells:
			var center := Vector2(float(house.origin[0]) + int(cell.x) * CELL_UNIT, float(house.origin[1]) + int(cell.z) * CELL_UNIT)
			var rect := Rect2(center - Vector2.ONE * CELL_UNIT * 0.5, Vector2.ONE * CELL_UNIT)
			if (Rotation.Frame.stroke_hits(house,cell,points,width*.5) if Rotation.Frame.transformed(house) else _stroke_hits_rect(points,width*.5,rect)):
				conflicts.append({"kind": "house", "id": house.id, "name": house.get("name", house.id), "position":[center.x,center.y], "source": cell.get("source", "seed")})
				break
	for road in road_rows:
		var found := false
		var conflict_at := Vector2.ZERO
		for marker: Dictionary in road.get("roundabouts",[]):
			var center:=Vector2(marker.center[0],marker.center[1])
			for index in range(maxi(1,points.size()-1)):
				var a:=Vector2(points[index][0],points[index][1]);var b:=Vector2(points[mini(index+1,points.size()-1)][0],points[mini(index+1,points.size()-1)][1])
				if Geometry2D.get_closest_point_to_segment(center,a,b).distance_to(center)<float(marker.radius)+width*.5:
					found=true;conflict_at=center
		for index in range(maxi(1, points.size() - 1)):
			var a := Vector2(points[index][0], points[index][1])
			var b := Vector2(points[mini(index + 1, points.size() - 1)][0], points[mini(index + 1, points.size() - 1)][1])
			for road_index in range(1, road.points.size()):
				var c := Vector2(road.points[road_index - 1][0], road.points[road_index - 1][1])
				var d := Vector2(road.points[road_index][0], road.points[road_index][1])
				if _segment_distance(a, b, c, d) <= (width + float(road.width)) * 0.5:
					found = true
					conflict_at = Geometry2D.get_closest_point_to_segment(a,c,d)
		if found:
			conflicts.append({"kind": "road", "id": road.id, "position":[conflict_at.x,conflict_at.y], "source": road.get("source", "seed")})
	return conflicts


func _stroke_hits_rect(points: Array, radius: float, rect: Rect2) -> bool:
	for index in range(maxi(1, points.size() - 1)):
		var a := Vector2(points[index][0], points[index][1])
		var b := Vector2(points[mini(index + 1, points.size() - 1)][0], points[mini(index + 1, points.size() - 1)][1])
		if _segment_hits_rect(a, b, rect):
			return true
		var corners := [rect.position, Vector2(rect.end.x, rect.position.y), rect.end, Vector2(rect.position.x, rect.end.y)]
		for corner_index in range(4):
			if _segment_distance(a, b, corners[corner_index], corners[(corner_index + 1) % 4]) <= radius:
				return true
	return false


func _segment_distance(a: Vector2, b: Vector2, c: Vector2, d: Vector2) -> float:
	if Geometry2D.segment_intersects_segment(a, b, c, d) != null:
		return 0.0
	return minf(minf(_distance_to_segment(a, c, d), _distance_to_segment(b, c, d)), minf(_distance_to_segment(c, a, b), _distance_to_segment(d, a, b)))


func preview_road(points: Array[Vector2],style: String = "path",assistance: String="snap",requested_width:float=0.,decoration:String="") -> Dictionary:
	return preload("res://scripts/world/city_creation_road_drawing.gd").preview(self,points,style,assistance,requested_width,decoration)

func road_junctions() -> RefCounted:
	_junctions.prepare(self)
	return _junctions

func road_at(at: Vector2) -> String:
	for marker: Dictionary in Roundabouts.all(roads):
		if at.distance_to(marker.center)<=marker.radius: return marker.owner_id
	for index in range(roads.size()-1,-1,-1):
		var road: Dictionary=roads[index]
		for segment in range(1,road.points.size()):
			var a := Vector2(road.points[segment-1][0],road.points[segment-1][1])
			var b := Vector2(road.points[segment][0],road.points[segment][1])
			if Geometry2D.get_closest_point_to_segment(at,a,b).distance_to(at)<=float(road.width)*0.5:
				return str(road.id)
	return road_junctions().at(at)

func add_roundabout(point: Vector2) -> Dictionary:
	var valid:=Roundabouts.preview(self,point)
	if not valid.ok: return valid
	var before:=snapshot()
	for road: Dictionary in roads:
		if str(road.id)!=str(valid.owner_id): continue
		if not road.has("roundabouts"): road.roundabouts=[]
		road.roundabouts.append({"center":[valid.center.x,valid.center.y],"radius":valid.radius})
	_commit(before,"营建环岛广场")
	return valid

func remove_roundabout(point: Vector2) -> Dictionary:
	for road: Dictionary in roads:
		for i in range(road.get("roundabouts",[]).size()):
			var row: Dictionary=road.roundabouts[i]
			if point.distance_to(Vector2(row.center[0],row.center[1]))>float(row.radius): continue
			var before:=snapshot()
			road.roundabouts.remove_at(i)
			if road.roundabouts.is_empty(): road.erase("roundabouts")
			_commit(before,"还原普通路口")
			return {"ok":true,"message":"环岛已还原为普通路口"}
	return _fail("这里没有环岛")

func remove_road(road_id: String) -> Dictionary:
	for index in range(roads.size()):
		if str(roads[index].id)!=road_id: continue
		var before := snapshot()
		roads.remove_at(index)
		_commit(before,"移除道路")
		return {"ok":true,"message":"道路已移除","road_id":road_id}
	return _fail("道路不存在")

func add_road(points: Array[Vector2],style: String = "path",assistance: String="snap",requested_width:float=0.,decoration:String="") -> Dictionary:
	return preload("res://scripts/world/city_creation_road_drawing.gd").add(self,points,style,assistance,requested_width,decoration)


## Plants are authored in continuous world coordinates. A complete brush
## stroke is one history entry, so deterministic seeds survive undo/redo and
## save/load without re-sampling the scene.
func add_vegetation_stroke(points: Array[Vector2], kind: String, radius: float = 1.4) -> Dictionary:
	var check := _validate_vegetation_stroke(points, kind, radius)
	if not check.ok:
		return check
	var stroke_seed := _vegetation_stroke_seed(points, kind, radius)
	var rng := RandomNumberGenerator.new()
	rng.seed = stroke_seed
	var candidates: Array[Vector2] = _stroke_samples(points, radius)
	var before := snapshot()
	var accepted: Array[Dictionary] = []
	var plant_number := maxi(_next_plant_id, int(_high_watermark.get("plant", 0)) + 1)
	for center in candidates:
		if accepted.size() >= MAX_PLANTS_PER_STROKE:
			break
		# Three nearby samples create a small Tiny Glade-like clump while the
		# spacing gate keeps a stroke bounded and avoids visual overlap.
		var cluster_count := 1 + int(rng.randf() * 3.0)
		for cluster_index in range(cluster_count):
			var angle := rng.randf_range(0.0, TAU)
			var spread := radius * (0.20 + rng.randf() * 0.48)
			var position := center + Vector2(cos(angle), sin(angle)) * spread
			if not WORLD_RECT.has_point(position):
				continue
			var scale_value := _plant_scale(kind, rng)
			var plant_seed := int(rng.randi())
			var candidate := _make_plant("p%d" % plant_number, position, kind, scale_value, plant_seed, "player")
			if not _plant_geometry_compatible(candidate, accepted, true):
				continue
			accepted.append(candidate)
			plant_number += 1
	if accepted.is_empty():
		return _fail("这里没有可种植的空间")
	for plant in accepted:
		plants.append(plant)
	_next_plant_id = plant_number
	_high_watermark["plant"] = maxi(int(_high_watermark.get("plant", 0)), plant_number - 1)
	_commit(before, "种植植被")
	var ids: Array[String] = []
	for plant in accepted:
		ids.append(plant.id)
	return {"ok": true, "message": "已种下 %d 株植被" % accepted.size(), "plant_ids": ids, "added_count": accepted.size(), "seed": stroke_seed}


func place_plant(position:Vector2,kind:String,scale_value:float=1.0)->Dictionary:
	if kind not in GardenSpecies.IDS or not is_finite(scale_value) or scale_value<.4 or scale_value>2.:return _fail("请选择植物和尺寸")
	var number:=maxi(_next_plant_id,int(_high_watermark.get("plant",0))+1)
	var plant:=_make_plant("p%d"%number,position,kind,scale_value,261014+number*977,"player")
	if not _plant_geometry_compatible(plant,[],true):return _fail("这里没有可种植的空间")
	var before:=snapshot()
	plants.append(plant);_next_plant_id=number+1;_high_watermark.plant=number
	_commit(before,"摆放植物")
	return {"ok":true,"message":"已种下"+str(GardenSpecies.NAMES[GardenSpecies.IDS.find(kind)]),"plant_ids":[plant.id],"added_count":1}


func erase_vegetation_stroke(points: Array[Vector2], radius: float) -> Dictionary:
	var check := _validate_erase_stroke(points, radius)
	if not check.ok:
		return check
	var before := snapshot()
	var removed: Array[String] = []
	var kept: Array[Dictionary] = []
	for plant in plants:
		if _distance_to_polyline(Vector2(float(plant.position[0]), float(plant.position[1])), points) <= radius:
			removed.append(plant.id)
		else:
			kept.append(plant)
	if removed.is_empty():
		return {"ok": true, "message": "笔画范围内没有植被", "removed_count": 0, "plant_ids": []}
	plants.assign(kept)
	_commit(before, "移除植被")
	return {"ok": true, "message": "已移除 %d 株植被" % removed.size(), "removed_count": removed.size(), "plant_ids": removed}


## Visibility is intentionally derived. A house or road built after planting
## can hide an instance, while the plant record remains available to undo and
## deterministic replay.
func vegetation_visible(plant: Dictionary, entrances_by_house: Dictionary = {}) -> bool:
	if not _valid_plant_fields(plant):
		return false
	return _plant_geometry_compatible(plant, [], false, entrances_by_house)


func undo() -> Dictionary:
	if _undo.is_empty():
		return _fail("没有可撤销的操作")
	var entry: Dictionary = _undo.pop_back()
	var appearance: Array[String]=_appearance_delta(entry.before)
	if appearance.is_empty(): _apply_snapshot(entry.before, true)
	else: _apply_appearance(entry.before,appearance)
	_redo.append(entry)
	revision += 1
	dirty = true
	return {"ok": true, "message": "已撤销：" + entry.label,"appearance_house_ids":appearance}


func redo() -> Dictionary:
	if _redo.is_empty():
		return _fail("没有可重做的操作")
	var entry: Dictionary = _redo.pop_back()
	var appearance: Array[String]=_appearance_delta(entry.after)
	if appearance.is_empty(): _apply_snapshot(entry.after, true)
	else: _apply_appearance(entry.after,appearance)
	_undo.append(entry)
	revision += 1
	dirty = true
	return {"ok": true, "message": "已重做：" + entry.label,"appearance_house_ids":appearance}

func _appearance_delta(target: Dictionary) -> Array[String]:
	if not CreationPolicy.Save.appearance_compatible(self,target):return []
	# History can restore just colors when every authored spatial field agrees.
	# Keep the already published road/height caches and daily-life progress.
	var changed: Array[String]=[]
	for field: String in ["roads","plants","waters","terrain_strokes","districts","musical_links"]:
		if get(field)!=target.get(field,[]): return changed
	if houses.size()!=target.houses.size(): return changed
	for index in range(houses.size()):
		var current: Dictionary=houses[index].duplicate()
		var chosen: Dictionary=target.houses[index].duplicate()
		var different: bool=current.get("palette",0)!=chosen.get("palette",0) or current.get("finish","")!=chosen.get("finish","") or current.get("custom_colors",{})!=chosen.get("custom_colors",{})
		for field: String in ["palette","finish","custom_colors"]:
			current.erase(field);chosen.erase(field)
		if current!=chosen: return []
		if different: changed.append(str(current.id))
	return changed

func _apply_appearance(target: Dictionary, ids: Array[String]) -> void:
	for index in range(houses.size()):
		if not str(houses[index].id) in ids: continue
		houses[index].palette=target.houses[index].get("palette",0)
		if target.houses[index].has("finish"): houses[index].finish=target.houses[index].finish
		else: houses[index].erase("finish")
		if target.houses[index].has("custom_colors"):houses[index].custom_colors=target.houses[index].custom_colors.duplicate()
		else:houses[index].erase("custom_colors")


func snapshot() -> Dictionary:
	return Serializer.snapshot(self)


func restore(data: Dictionary) -> Dictionary:
	var result := _validate_snapshot(data)
	if not result.ok:
		return result
	_apply_snapshot(data)
	revision = int(data.revision)
	dirty = false
	life_progress_dirty = false
	_undo.clear()
	_redo.clear()
	return {"ok": true, "message": "城市已恢复"}


func save_city(path: String = DEFAULT_PATH) -> Dictionary:
	var result := Serializer.write(self,path)
	if result.ok:
		dirty = false
		life_progress_dirty = false
	return result

func record_life_event(kind: String) -> void:
	if kind not in ["purchases", "gatherings", "concerts"]: return
	life_progress[kind] = int(life_progress[kind])+1
	life_progress_dirty = true
	dirty = true


func bakery_capacity(house_id: String) -> int:
	var index:=_house_index(house_id)
	if index<0:return 0
	var rooms:=0
	for cell:Dictionary in houses[index].cells:
		if cell.kind=="room":rooms+=1
	# Shelves belong to the building, so changing tempo cannot erase stock.
	return maxi(1,rooms)*12


func afterglow_remaining(house_id: String) -> float:
	return float(resonance_afterglow.get(house_id, 0.0))


func production_multiplier(house_id: String) -> float:
	return site_production_multiplier(house_id) * (1.25 if afterglow_remaining(house_id) > 0.0 else 1.0)

func choose_era_modifier(id:String)->Dictionary:
	if not ScoreModifiers.CHOICES.has(id):return _fail("乐章铭牌无效")
	var era:String=ScoreModifiers.CHOICES[id].era
	if era not in era_unlocks:return _fail("这个时代尚未开启")
	if not ScoreModifiers.selected(self,era).is_empty():return _fail("这个时代已选择铭牌，可撤销后重新选择")
	var before:=snapshot()
	era_modifiers.append(id)
	_commit(before,"选择"+str(ScoreModifiers.CHOICES[id].name))
	return {"ok":true,"message":str(ScoreModifiers.CHOICES[id].name)+"已生效"}

func set_microclimate(mode:String)->Dictionary:
	if mode not in Microclimate.IDS:return _fail("四时风物无效")
	if mode==microclimate:return {"ok":true,"no_op":true,"message":"四时未变"}
	var before:=snapshot();microclimate=mode
	_commit(before,"切换四时风物")
	return {"ok":true,"message":Microclimate.NAMES[Microclimate.IDS.find(mode)]}


func site_blessing(house_id: String) -> Dictionary:
	# Geometry-derived only: daily production and credit changes do not rebuild
	# courtyard/vegetation queries. Undo, load and edits invalidate this cache.
	if _prosperity_revision != revision:
		_site_blessings.clear()
		_prosperity_revision = revision
	if not _site_blessings.has(house_id):
		var index := _house_index(house_id)
		var result: Dictionary = {}
		if index >= 0:
			match str(houses[index].role):
				"bakery": result = Prosperity.bakery_blessing(self, house_id)
				"workshop": result = Prosperity.workshop_blessing(self, house_id)
				"garden_cafe": result = Prosperity.cafe_blessing(self, house_id)
		_site_blessings[house_id] = result
	return _site_blessings[house_id]


func site_production_multiplier(house_id: String) -> float:
	var index:=_house_index(house_id)
	var mill: float=float(signature_bonuses().baking_speed) if index>=0 and houses[index].role=="bakery" else 1.0
	var echo:float=float(regional_echo().production_mult) if index>=0 and str(houses[index].role) in ["workshop","atelier","clockmaker"] else 1.
	var weather:float=Microclimate.production(self,houses[index]) if index>=0 else 1.
	return (ScoreModifiers.production(self,houses[index]) if index>=0 else 1.)*float(biome_bonus(house_id).get("production",1.))*transit_efficiency(house_id)*weather*temperament_speed(house_id)*float(site_blessing(house_id).get("speed_multiplier", 1.0)) * (1.25 if level_tier(house_id)>=4 else 1.0)*mill*float(planning_bonus(house_id).get("production_mult",1.0))*echo*CivicSupply.speed(self,house_id)

func biome_bonus(house_id:String)->Dictionary:
	if _biome_revision!=revision:
		_biome_bonuses=Biomes.evaluate(self);_biome_revision=revision
	return _biome_bonuses.get(house_id,{})

func transit_efficiency(house_id:String)->float:
	var index:=_house_index(house_id)
	return 1.3 if _transit_corridor_revision==revision and _transit_corridor_houses.has(house_id) and index>=0 and houses[index].role in ["workshop","atelier","clockmaker","garden_cafe"] else 1.

func cafe_time_multiplier(house_id:String)->float:
	return preload("res://scripts/world/city_creation_tradition_synergy.gd").tea_multiplier(self)*(.9 if "garden_salons" in era_modifiers else 1.)*float(planning_bonus(house_id).get("cafe_duration_mult",1.))/transit_efficiency(house_id)/(1.25 if "tram_promenade" in era_modifiers and transit_efficiency(house_id)>1. else 1.)/CivicSupply.tea_speed(self,house_id)


func synergy_buffs()->Dictionary:
	if _synergy_revision!=revision:
		_synergy_buffs=SynergyBuffs.evaluate(self);_synergy_revision=revision
	return _synergy_buffs


func planning_bonus(house_id:String)->Dictionary:
	return synergy_buffs().houses.get(house_id,{})


func has_chord(house_id:String,chord:String)->bool:
	return planning_bonus(house_id).get("chord_scopes",{}).has(chord)


func shares_chord(first:String,second:String,chord:String)->bool:
	return chord_together([first,second],chord)


func chord_together(house_ids:Array,chord:String)->bool:
	var scopes:Array=planning_bonus(str(house_ids[0])).get("chord_scopes",{}).get(chord,[])
	for scope:String in scopes:
		var shared:=true
		for id:String in house_ids:
			if scope not in planning_bonus(id).get("chord_scopes",{}).get(chord,[]):shared=false;break
		if shared:return true
	return false


func installation_multiplier(shop_id:String,target_id:String)->float:
	var index:=_house_index(shop_id)
	if index<0:return 1.
	var delivery:=preload("res://scripts/world/city_creation_tradition_synergy.gd").delivery_multiplier(self,shop_id)*(1.25 if "craft_federation" in era_modifiers else 1.)*float(planning_bonus(shop_id).get("delivery_mult",1.))*(1.4 if special_site(shop_id).get("arcade_street",false) else 1.)
	var expansion:float=synergy_buffs().expansion_multiplier
	if str(houses[index].role)!="workshop" or level_tier(target_id)>=3:return delivery*expansion
	return delivery*float(planning_bonus(target_id).get("growth_mult",expansion))


func artisan_walking_multiplier(home_id:String,shop_id:String,target_id:String,phase:String)->float:
	var delivery:=installation_multiplier(shop_id,target_id) if phase=="to_target" else ((1.25 if "craft_federation" in era_modifiers else 1.)*float(planning_bonus(shop_id).get("delivery_mult",1.))*(1.4 if special_site(shop_id).get("arcade_street",false) else 1.) if phase=="returning" else 1.)
	return walking_multiplier(home_id)*delivery*temperament_walk(shop_id)


func tram_synergy_houses(at:Vector2,from:Vector2=Vector2.INF)->Array[String]:
	if not from.is_finite():from=at
	var result:Array[String]=[];var buffs:=synergy_buffs();var scopes:Array[String]=[]
	for key:String in buffs.chord_scopes:
		var scope:Dictionary=buffs.chord_scopes[key]
		if "clockwork_waltz" not in scope.chords:continue
		for district:Dictionary in districts:
			if str(district.id) in scope.district_ids and SynergyBuffs._touches([[from.x,from.y],[at.x,at.y]],0.,district):scopes.append(key);break
	if scopes.is_empty():return result
	for house:Dictionary in houses:
		var point:=Vector2(float(house.origin[0]),float(house.origin[1]))
		if point.distance_to(Geometry2D.get_closest_point_to_segment(point,from,at))>10.:continue
		var active:Array=buffs.houses[str(house.id)].chord_scopes.get("clockwork_waltz",[])
		for key:String in scopes:
			if key in active:result.append(str(house.id));break
	return result


func house_harmony(house_id: String) -> Dictionary:
	return Prosperity.house_harmony(self, house_id)


func house_harmony_tier(house_id: String) -> int:
	return int(house_harmony(house_id).tier)


func city_harmony_summary() -> Dictionary:
	return Prosperity.city_harmony_summary(self)


func cafe_afterglow_extension(house_id: String) -> float:
	var base:=float(site_blessing(house_id).get("afterglow_extension",30.))
	var index:=_house_index(house_id)
	if index>=0 and water_clearance(Vector2(houses[index].origin[0],houses[index].origin[1]))<4.5:base=30.+(base-30.)*float(biome_bonus(house_id).get("water_bonus",1.))
	return base*ScoreModifiers.afterglow(self)*(1.25 if microclimate=="spring_breeze" else 1.)


func afterglow_limit(house_id: String) -> float:
	return ScoreModifiers.afterglow(self)*(360.0 if not signature_bonuses().palace_id.is_empty() else 240.0)*(2.0 if level_tier(house_id)>=5 else 1.0)

func grant_concert_afterglow(venue_id:String,members:Array,duration:float,elapsed:float=0.)->void:
	if not special_site(venue_id).get("hall_ecology",false):grant_resonance_afterglow(members,duration,elapsed);return
	var homes:Array[String]=[];var others:Array[String]=[]
	for id:String in members:
		var index:=_house_index(id)
		if index>=0 and str(houses[index].role)=="residential":homes.append(id)
		else:others.append(id)
	grant_resonance_afterglow(homes,duration*2.,elapsed);grant_resonance_afterglow(others,duration,elapsed)

func grant_resonance_afterglow(house_ids: Array, duration: float = 60.0, elapsed: float=0.0) -> void:
	if duration <= 0.0: return
	for house_id in house_ids:
		if _house_index(str(house_id)) >= 0:
			var id:=str(house_id)
			var earned: float=duration*ScoreModifiers.afterglow(self)*(2.0 if level_tier(id)>=5 else 1.0)-elapsed
			if earned>0.0:resonance_afterglow[id] = maxf(afterglow_remaining(id), clampf(earned, 0.0, afterglow_limit(id)))
	if not house_ids.is_empty():
		life_progress_dirty = true
		dirty = true


func advance_resonance_afterglow(delta: float) -> void:
	if delta <= 0.0 or resonance_afterglow.is_empty(): return
	for house_id in resonance_afterglow.keys():
		var remaining := maxf(0.0, float(resonance_afterglow[house_id]) - delta)
		if remaining > 0.0: resonance_afterglow[house_id] = remaining
		else: resonance_afterglow.erase(house_id)
	life_progress_dirty = true
	dirty = true


func _prune_afterglow() -> void:
	var existing := {}
	for house in houses: existing[str(house.id)] = true
	for house_id in resonance_afterglow.keys():
		if not existing.has(house_id): resonance_afterglow.erase(house_id)


func bakery_batch_size(house_id: String) -> int:
	var index := _house_index(house_id)
	if index < 0 or houses[index].role != "bakery":
		return 0
	var rooms := 0
	for cell in houses[index].cells:
		if cell.kind == "room":
			rooms += 1
	var base:=maxi(1,rooms)*2
	var temperament:=house_temperament(house_id)
	base=1 if temperament=="allegro" else base
	return (base+int(site_blessing(house_id).get("bonus_batch",0))+int(signature_bonuses().bread_batch))*(2 if temperament=="largo" else 1)


func bakery_status(house_id: String) -> Dictionary:
	var row: Dictionary = bakery_supply.get(house_id, {})
	var index := _house_index(house_id)
	var opened: bool = index >= 0 and houses[index].role == "bakery" and houses[index].get("bakery_open", true)
	var gifted:=0
	for count in landmark_bread.get(house_id,{}).get("gifts",{}).values():gifted+=int(count)
	return {"stock":int(row.get("stock", 0)), "produced":int(row.get("produced", 0)), "served":int(row.get("served", 0)), "gifted":gifted,"capacity":bakery_capacity(house_id), "batch_size":bakery_batch_size(house_id), "open":opened}


func set_bakery_open(house_id: String, opened: bool) -> Dictionary:
	var index := _house_index(house_id)
	if index < 0 or houses[index].role != "bakery":
		return _fail("只有面包坊可以开关烘焙")
	if houses[index].get("bakery_open", true) == opened:
		return {"ok":true,"message":""}
	var before := snapshot()
	houses[index].bakery_open = opened
	_commit(before, "继续开炉" if opened else "暂停烘焙")
	return {"ok":true,"message":"已继续开炉" if opened else "已暂停烘焙，现有面包继续供应"}


func produce_bread(house_id: String, quantity: int) -> bool:
	var capacity := bakery_capacity(house_id)
	var current := bakery_status(house_id)
	if capacity == 0 or not current.open or quantity <= 0 or quantity > capacity - int(current.stock):
		return false
	bakery_supply[house_id] = WishFulfilment.keep_burst(bakery_supply,house_id,{"stock":int(current.stock) + quantity, "produced":int(current.produced) + quantity, "served":int(current.served)})
	preload("res://scripts/world/city_creation_tradition_economy.gd").produced(self,house_id,"bread")
	var index:=_house_index(house_id)
	if houses[index].get("signature","")=="watermill" and quantity==int(current.batch_size):_mill_batch(house_id)
	life_progress_dirty = true
	dirty = true
	return true


func _mill_batch(house_id:String)->void:
	var row:Dictionary=landmark_bread.get(house_id,{"batches":0,"gifts":{}})
	row.batches=int(row.batches)+1;landmark_bread[house_id]=row
	if int(row.batches)%3!=0:return
	var candidates:Array[Dictionary]=[]
	for house:Dictionary in houses:
		if str(house.role)=="residential" and not has_cafe_credit(str(house.id)):candidates.append(house)
	var salt:=house_id+":"+str(row.batches)
	candidates.sort_custom(func(a:Dictionary,b:Dictionary)->bool:
		var hungry_a:=int(cafe_credits.get(str(a.id),{}).get("earned",0))==0
		var hungry_b:=int(cafe_credits.get(str(b.id),{}).get("earned",0))==0
		if hungry_a!=hungry_b:return hungry_a
		var first:=hash(salt+":"+str(a.id));var second:=hash(salt+":"+str(b.id))
		return first<second if first!=second else str(a.id)<str(b.id))
	for i in range(mini(2,candidates.size())):
		if int(bakery_supply[house_id].stock)<=0:break
		var id:=str(candidates[i].id);var credit:Dictionary=cafe_credits.get(id,{"earned":0,"spent":0})
		bakery_supply[house_id].stock-=1;bakery_supply[house_id].served+=1
		cafe_credits[id]={"earned":int(credit.earned)+1,"spent":int(credit.spent)}
		row.gifts[id]=int(row.gifts.get(id,0))+1


func serve_bread(house_id: String, home_id: String = "") -> bool:
	var current := bakery_status(house_id)
	if bakery_capacity(house_id) == 0 or int(current.stock) <= 0:
		return false
	bakery_supply[house_id] = WishFulfilment.keep_burst(bakery_supply,house_id,{"stock":int(current.stock) - 1, "produced":int(current.produced), "served":int(current.served) + 1})
	record_life_event("purchases")
	var home_index := _house_index(home_id)
	if home_index >= 0 and houses[home_index].role == "residential" and not has_cafe_credit(home_id):
		var credit: Dictionary = cafe_credits.get(home_id, {"earned":0,"spent":0})
		cafe_credits[home_id] = {"earned":int(credit.earned) + 1,"spent":int(credit.spent)}
	return true


func has_cafe_credit(home_id: String) -> bool:
	var row: Dictionary = cafe_credits.get(home_id, {})
	return int(row.get("earned", 0)) > int(row.get("spent", 0))

func set_auto_matinee(house_id: String, enabled: bool) -> Dictionary:
	var index := _house_index(house_id)
	if index < 0 or houses[index].role not in ["venue","symphony_hall"]: return _fail("先选择演奏庭。")
	if houses[index].get("auto_matinee", false) == enabled: return {"ok":true,"message":""}
	var before := snapshot()
	houses[index].auto_matinee = enabled
	_commit(before, "开启常驻巡演" if enabled else "暂停后续巡演")
	return {"ok":true,"message":"街坊获得两份新灵感后会自发赴约。" if enabled else "已暂停后续巡演，本场继续。"}

func has_matinee_credit(home_id: String) -> bool:
	var row: Dictionary = matinee_credits.get(home_id, {})
	return int(row.get("earned", 0)) > int(row.get("spent", 0))

func reserve_matinee(venue_id: String, sponsors: Array) -> bool:
	var index := _house_index(venue_id)
	if not matinee_pending.is_empty() or matinee_cooldown > 0.0 or index < 0 or houses[index].role not in ["venue","symphony_hall"] or not houses[index].get("auto_matinee", false) or sponsors.size() < 2: return false
	var seen := {}
	for home in sponsors:
		var home_index := _house_index(str(home))
		if seen.has(home) or home_index < 0 or houses[home_index].role != "residential" or not has_matinee_credit(str(home)): return false
		seen[home] = true
	matinee_pending = {"venue_id":venue_id,"sponsors":sponsors.duplicate()}
	_touch_matinee()
	return true

func complete_matinee(venue_id: String, sponsors: Array) -> bool:
	if matinee_pending.get("venue_id", "") != venue_id or matinee_pending.get("sponsors", []) != sponsors or sponsors.size() < 2: return false
	for home in sponsors:
		if not has_matinee_credit(str(home)): return false
	for home in sponsors: matinee_credits[home].spent = int(matinee_credits[home].spent) + 1
	var row: Dictionary = matinee_progress.get(venue_id, {"completed":0,"sponsors":0})
	matinee_progress[venue_id] = {"completed":int(row.completed) + 1,"sponsors":int(row.sponsors) + sponsors.size()}
	life_progress.auto_concerts = int(life_progress.auto_concerts) + 1
	matinee_pending.clear()
	_touch_matinee()
	return true

func rest_after_concert(venue_id: String) -> void:
	matinee_pending.clear()
	matinee_cooldown = 45. if special_site(venue_id).get("venue_echo",false) else 60.
	matinee_last_venue = venue_id
	_touch_matinee()

func advance_matinee_rest(delta: float) -> void:
	if matinee_cooldown <= 0.0 or delta <= 0.0: return
	matinee_cooldown = maxf(0.0, matinee_cooldown - delta)
	_touch_matinee()

func _touch_matinee() -> void:
	dirty = true
	life_progress_dirty = true


func complete_tea(cafe_id: String, homes: Array) -> bool:
	var cafe_index := _house_index(cafe_id)
	if cafe_index < 0 or houses[cafe_index].role != "garden_cafe" or homes.size() < 2 or homes.size() > 3: return false
	var unique := {}
	for home in homes:
		var index := _house_index(str(home))
		if unique.has(home) or index < 0 or houses[index].role != "residential" or not has_cafe_credit(str(home)): return false
		unique[home] = true
	for home in homes:
		cafe_credits[home].spent = int(cafe_credits[home].spent) + 1
		if not has_matinee_credit(str(home)):
			var inspiration: Dictionary = matinee_credits.get(home, {"earned":0,"spent":0})
			matinee_credits[home] = {"earned":int(inspiration.earned) + 1,"spent":int(inspiration.spent)}
	var row: Dictionary = cafe_progress.get(cafe_id, {"groups":0,"visits":0})
	cafe_progress[cafe_id] = {"groups":int(row.groups) + 1,"visits":int(row.visits) + homes.size()}
	life_progress.tea_parties = int(life_progress.tea_parties) + 1
	life_progress.tea_visits = int(life_progress.tea_visits) + homes.size()
	Eras.refresh(self)
	var glow_ids := homes.duplicate()
	glow_ids.append(cafe_id)
	var extension := cafe_afterglow_extension(cafe_id)
	if not signature_bonuses().palace_id.is_empty():grant_resonance_afterglow(glow_ids,180.0*(1.25 if microclimate=="spring_breeze" else 1.))
	for id in glow_ids:
		var remaining := afterglow_remaining(str(id))
		if remaining > 0.0: resonance_afterglow[str(id)] = maxf(remaining,minf(afterglow_limit(str(id)), remaining + extension*(2.0 if level_tier(str(id))>=5 else 1.0)))
	life_progress_dirty = true
	dirty = true
	return true


func workshop_batch_size(house_id: String) -> int:
	return maxi(0,floori(_workshop_yield(house_id)+float(workshop_yield_remainder.get(house_id,0.))))

func _workshop_yield(house_id:String)->float:
	var index := _house_index(house_id)
	if index < 0 or houses[index].role not in ["workshop", "atelier", "clockmaker"]: return 0
	var rooms := 0
	for cell in houses[index].cells:
		if cell.kind == "room": rooms += 1
	var temperament:=house_temperament(house_id)
	var base:=1 if temperament=="allegro" else maxi(1,rooms)*(2 if temperament=="largo" else 1)
	return base*int(planning_bonus(house_id).get("batch_mult",1))*float(planning_bonus(house_id).get("yield_mult",1.))

func produce_workshop_batch(house_id:String)->int:
	var earned:float=_workshop_yield(house_id)+float(workshop_yield_remainder.get(house_id,0.))
	var quantity:=floori(earned)
	if not produce_craft(house_id,quantity):return 0
	var remainder:=earned-quantity
	if remainder>0.:workshop_yield_remainder[house_id]=remainder
	else:workshop_yield_remainder.erase(house_id)
	return quantity


func workshop_capacity(house_id: String) -> int:
	var index:=_house_index(house_id)
	if index<0:return 0
	var rooms:=0
	for cell:Dictionary in houses[index].cells:
		if cell.kind=="room":rooms+=1
	return maxi(1,rooms)*int(planning_bonus(house_id).get("batch_mult",1))*4


func workshop_status(house_id: String) -> Dictionary:
	var row: Dictionary = workshop_supply.get(house_id, {})
	var index := _house_index(house_id)
	return {"stock":int(row.get("stock", 0)), "produced":int(row.get("produced", 0)), "delivered":int(row.get("delivered", 0)), "transit":row.get("transit", {}).duplicate(), "batch_size":workshop_batch_size(house_id), "capacity":workshop_capacity(house_id), "open":index >= 0 and houses[index].role in ["workshop", "atelier", "clockmaker"] and houses[index].get("workshop_open", true)}


func improvement_level(house_id: String) -> int:
	return int(house_improvements.get(house_id, 0))


func festival_status(venue_id: String) -> Dictionary:
	var row: Dictionary = venue_commissions.get(venue_id, {})
	var requested := int(row.get("requested", 0))
	var delivered := int(row.get("delivered", 0))
	var used := int(row.get("used", 0))
	var index := _house_index(venue_id)
	var active: bool = index >= 0 and houses[index].role in ["venue","symphony_hall"]
	return {"requested":requested,"delivered":delivered,"used":used,"pending":active and requested > delivered,"ready":active and delivered > used}


func festival_ready_venues() -> Array[String]:
	var result: Array[String] = []
	for venue_id: String in venue_commissions:
		if festival_status(venue_id).ready: result.append(venue_id)
	result.sort()
	return result


## Only a completed performance consumes its prepared gift and issues demand.
func record_concert_completion(venue_id: String) -> float:
	var index := _house_index(venue_id)
	if index>=0 and houses[index].get("signature","") in Signatures.IDS and houses[index].role not in ["venue","symphony_hall"]:
		life_progress.concerts=int(life_progress.concerts)+1
		_craft_changed()
		return 180. if not signature_bonuses().palace_id.is_empty() else 60.
	if index < 0 or houses[index].role not in ["venue","symphony_hall"]: return 60.0
	var status := festival_status(venue_id)
	var duration := 180.0 if not signature_bonuses().palace_id.is_empty() else 90.0 if status.ready else 60.0
	var used: int = status.used + (1 if status.ready else 0)
	var requested: int = status.requested
	if requested == used: requested += 1
	venue_commissions[venue_id] = {"requested":requested,"delivered":status.delivered,"used":used}
	life_progress.concerts = int(life_progress.concerts) + 1
	_craft_changed()
	return duration


func set_workshop_open(house_id: String, opened: bool) -> Dictionary:
	var index := _house_index(house_id)
	if index < 0 or houses[index].role not in ["workshop", "atelier", "clockmaker"]: return _fail("只有制琴工坊可以开关制作")
	if houses[index].get("workshop_open", true) == opened: return {"ok":true,"message":""}
	var before := snapshot()
	houses[index].workshop_open = opened
	_commit(before, "继续制作" if opened else "暂停制作")
	return {"ok":true,"message":"工匠继续制作" if opened else "已暂停制作，已有木饰继续送装"}


func produce_craft(house_id: String, quantity: int) -> bool:
	var status := workshop_status(house_id)
	if not status.open or quantity <= 0 or quantity > status.capacity - status.stock: return false
	workshop_supply[house_id] = WishFulfilment.keep_burst(workshop_supply,house_id,{"stock":status.stock + quantity,"produced":status.produced + quantity,"delivered":status.delivered,"transit":status.transit})
	preload("res://scripts/world/city_creation_tradition_economy.gd").produced(self,house_id,"craft")
	_craft_changed()
	return true


func mechanism_level(house_id: String)->int:
	return int(house_clockwork.get(house_id,0))

func _craft_kind_compatible(shop_id: String,kind: String)->bool:
	var index:=_house_index(shop_id)
	if index<0:return false
	var role:=str(houses[index].role)
	return kind=={"atelier":"art","clockmaker":"musicbox"}.get(role,"upgrade") or (role=="workshop" and kind=="festival")

func _valid_craft_assignment(shop_id: String, home_id: String, target_id: String) -> bool:
	var shop := _house_index(shop_id)
	var home := _house_index(home_id)
	var target := _house_index(target_id)
	return shop >= 0 and home >= 0 and target >= 0 and shop_id != target_id and houses[shop].role in ["workshop", "atelier", "clockmaker"] and houses[home].role == "residential" and houses[target].role in ["residential", "venue", "symphony_hall"]


func reserve_craft(shop_id: String, home_id: String, target_id: String, kind: String = "upgrade") -> bool:
	if not _valid_craft_assignment(shop_id, home_id, target_id): return false
	if kind not in ["upgrade", "festival", "art", "musicbox"]: return false
	if not _craft_kind_compatible(shop_id,kind): return false
	if kind in ["art","musicbox"] and houses[_house_index(target_id)].role != "residential": return false
	var status := workshop_status(shop_id)
	if status.stock <= 0 or not status.transit.is_empty(): return false
	var reserved := 0
	for row in workshop_supply.values():
		if row.transit.get("target_id", "") == target_id and row.transit.get("kind", "upgrade") == kind: reserved += 1
	if kind == "festival":
		if not festival_status(target_id).pending or reserved > 0: return false
	elif kind == "art":
		if culture_level(target_id) + reserved >= 2: return false
	elif kind=="musicbox":
		if mechanism_level(target_id)+reserved>=2:return false
	elif improvement_level(target_id) + reserved >= 3: return false
	var transit := {"home_id":home_id,"target_id":target_id}
	if kind != "upgrade": transit.kind = kind
	workshop_supply[shop_id] = WishFulfilment.keep_burst(workshop_supply,shop_id,{"stock":status.stock - 1,"produced":status.produced,"delivered":status.delivered,"transit":transit})
	_craft_changed()
	return true


func complete_craft(shop_id: String, home_id: String, target_id: String) -> bool:
	if not _valid_craft_assignment(shop_id, home_id, target_id): return false
	var status := workshop_status(shop_id)
	if status.transit.get("home_id", "") != home_id or status.transit.get("target_id", "") != target_id: return false
	var kind: String = status.transit.get("kind", "upgrade")
	if not _craft_kind_compatible(shop_id,kind): return false
	if kind in ["art","musicbox"] and houses[_house_index(target_id)].role != "residential": return false
	if kind == "festival":
		if not festival_status(target_id).pending: return false
	elif kind == "art":
		if culture_level(target_id) >= 2: return false
	elif kind=="musicbox":
		if mechanism_level(target_id)>=2:return false
	elif kind != "upgrade" or improvement_level(target_id) >= 3: return false
	workshop_supply[shop_id] = WishFulfilment.keep_burst(workshop_supply,shop_id,{"stock":status.stock,"produced":status.produced,"delivered":status.delivered + 1,"transit":{}})
	if kind == "festival":
		venue_commissions[target_id].delivered = int(venue_commissions[target_id].delivered) + 1
	elif kind == "art":
		house_culture[target_id] = culture_level(target_id) + 1
	elif kind=="musicbox":
		house_clockwork[target_id]=mechanism_level(target_id)+1
	else:
		house_improvements[target_id] = improvement_level(target_id) + 1
		# A real wood delivery can carry an academy gift. Preserve existing
		# art reservations and record the extra crafted-and-installed object.
		if shares_chord(shop_id,target_id,"renaissance_fugue") and houses[_house_index(target_id)].role=="residential":
			var reserved:=0
			for row:Dictionary in workshop_supply.values():
				if row.transit.get("kind","")=="art" and row.transit.get("target_id","")==target_id:reserved+=1
			if culture_level(target_id)+reserved<2:
				house_culture[target_id]=culture_level(target_id)+1
				workshop_supply[shop_id].produced=int(workshop_supply[shop_id].produced)+1
				workshop_supply[shop_id].delivered=int(workshop_supply[shop_id].delivered)+1
	var gift:=float(regional_echo().delivery_glow)
	preload("res://scripts/world/city_creation_tradition_economy.gd").delivered(self,shop_id,target_id,kind)
	if gift>0.:grant_resonance_afterglow([target_id],gift)
	_craft_changed()
	return true


func return_craft(shop_id: String) -> bool:
	var status := workshop_status(shop_id)
	if status.transit.is_empty(): return false
	workshop_supply[shop_id] = WishFulfilment.keep_burst(workshop_supply,shop_id,{"stock":status.stock + 1,"produced":status.produced,"delivered":status.delivered,"transit":{}})
	_craft_changed()
	return true


func _normalize_craft_transit() -> void:
	for shop_id in workshop_supply:
		var transit: Dictionary = workshop_supply[shop_id].transit
		if transit.is_empty(): continue
		var art := str(transit.get("kind","upgrade")) in ["art","musicbox"]
		if not _valid_craft_assignment(shop_id, transit.home_id, transit.target_id) or (art and houses[_house_index(transit.target_id)].role!="residential") or not _craft_kind_compatible(shop_id,str(transit.get("kind","upgrade"))) or (transit.get("kind", "upgrade") == "festival" and not festival_status(transit.target_id).pending):
			return_craft(shop_id)


func _craft_changed() -> void:
	life_progress_dirty = true
	dirty = true


func _validate_craft_supply(data: Dictionary, issued_house: int) -> Dictionary:
	return SaveValidation._validate_craft_supply(data,issued_house)


func load_city(path: String = DEFAULT_PATH) -> Dictionary:
	var result := _read_snapshot(path)
	if not result.ok:
		return result
	return restore(result.data)

func set_journey_checkpoint(data: Dictionary) -> Dictionary:
	var check := _validate_journey_checkpoint(data)
	if not check.ok: return check
	var grand:Dictionary=GrandFestival.validate(self,{"schema":MODERN_SCHEMA,"houses":houses,"districts":districts,"era_unlocks":era_unlocks,"journey_checkpoint":data})
	if not grand.ok:return grand
	var movement:Dictionary=LandmarkMovement.validate(self,{"schema":PERSONALIZATION_SCHEMA,"houses":houses,"roads":roads,"journey_checkpoint":data})
	if not movement.ok:return movement
	if journey_checkpoint != data:
		journey_checkpoint = data.duplicate(true)
		dirty = true
	return {"ok":true,"message":""}


## Construction history never rewinds actual living progress. Only references
## to removed houses are retired; an interrupted audience resumes from where
## it is now, rather than teleporting to its pre-invitation daily snapshot.
func _prune_missing_journeys() -> void:
	if journey_checkpoint.is_empty():
		return
	var existing := {}
	for house in houses:
		existing[house.id] = house.role
	var retained_cafes: Array = []
	var canceled_cafes := {}
	for group in journey_checkpoint.get("cafe_groups", []):
		var valid: bool = existing.has(group.cafe_id)
		for home in group.participants:
			if not existing.has(home): valid = false
		if valid: retained_cafes.append(group)
		else: canceled_cafes[group.cafe_id] = true
	if journey_checkpoint.has("cafe_groups"): journey_checkpoint.cafe_groups = retained_cafes
	var concert: Dictionary = journey_checkpoint.concert
	var cancel_concert := false
	if concert.get("phase", "idle") != "idle":
		cancel_concert = not can_host_concert(str(concert.get("venue_id", "")))
		if concert.get("grand_festival",false) and not GrandFestival.validate(self,{"schema":MODERN_SCHEMA,"houses":houses,"districts":districts,"era_unlocks":era_unlocks,"journey_checkpoint":journey_checkpoint}).ok:cancel_concert=true
		for home in concert.get("participants", []):
			if not existing.has(home):
				cancel_concert = true
	var people: Array[Dictionary] = []
	for saved in journey_checkpoint.residents:
		if not existing.has(saved.home_id):
			continue
		var resident: Dictionary = saved.duplicate(true)
		if resident.has("cafe_visit") and canceled_cafes.has(resident.cafe_visit.cafe_id):
			resident.erase("cafe_visit")
			resident.destination_id = resident.home_id
			resident.dwell_id = ""
			resident.service_pending = ""
			resident.wait = 0.0
			resident.paused = false
		if cancel_concert and resident.has("daily_snapshot"):
			var daily: Dictionary = resident.daily_snapshot.duplicate(true)
			daily.position = resident.position.duplicate()
			daily.yaw = resident.yaw
			daily.phase = resident.phase
			daily.wait = 0.0
			daily.dwell_id = ""
			daily.service_pending = ""
			daily.paused = false
			resident = daily
		elif cancel_concert and resident.service_pending == "concert":
			resident.destination_id = resident.home_id
			resident.dwell_id = ""
			resident.service_pending = ""
			resident.wait = 0.0
			resident.paused = false
		_prune_resident_targets(resident, existing)
		people.append(resident)
	journey_checkpoint.residents = people
	if cancel_concert:
		if not matinee_pending.is_empty(): rest_after_concert(str(matinee_pending.venue_id))
		journey_checkpoint.concert = {}
		journey_checkpoint.erase("relay")
		journey_checkpoint.schema = 1
	elif concert.has("wake_house_ids"):
		var wake: Array = []
		for id in concert.wake_house_ids:
			if existing.has(id): wake.append(id)
		concert.wake_house_ids = wake
	if journey_checkpoint.has("bakery_workers"):
		var workers: Array[Dictionary] = []
		for worker in journey_checkpoint.bakery_workers:
			if existing.has(worker.home_id) and existing.has(worker.bakery_id):
				workers.append(worker)
		journey_checkpoint.bakery_workers = workers
	if journey_checkpoint.has("workshop_workers"):
		var workers: Array[Dictionary] = []
		for worker in journey_checkpoint.workshop_workers:
			if existing.has(worker.home_id) and existing.has(worker.workshop_id) and (worker.target_id.is_empty() or existing.has(worker.target_id)):
				workers.append(worker)
		journey_checkpoint.workshop_workers = workers


func _prune_resident_targets(resident: Dictionary, existing: Dictionary) -> void:
	if not resident.destination_id.is_empty() and not existing.has(resident.destination_id):
		resident.destination_id = resident.home_id
		resident.dwell_id = ""
		resident.service_pending = ""
		resident.wait = 0.0
		resident.paused = false
	elif not resident.dwell_id.is_empty() and not existing.has(resident.dwell_id):
		resident.dwell_id = ""
		resident.service_pending = ""
		resident.wait = 0.0
	if resident.has("stops"):
		var stops: Array[String] = []
		for stop in resident.stops:
			if existing.has(stop):
				stops.append(stop)
		resident.stops = stops
	if resident.has("daily_snapshot"):
		_prune_resident_targets(resident.daily_snapshot, existing)

func _validate_relay_journey(data: Dictionary, progress: Dictionary) -> Dictionary:
	# Version one cannot silently discard a future itinerary in an old build.
	if data.schema == 1:
		return _fail("庆典接力需要新居民行程版本") if data.has("relay") else {"ok":true}
	var relay: Variant = data.get("relay")
	if not relay is Dictionary or relay.size() != 3 or not relay.get("venues") is Array or relay.venues.size() < 2:
		return _fail("庆典接力队列结构无效")
	if not _is_integer(relay.get("index")) or relay.index < 0 or relay.index >= relay.venues.size(): return _fail("庆典接力站序无效")
	if not _is_integer(relay.get("concerts_before")) or relay.concerts_before < 0: return _fail("庆典接力成绩起点无效")
	if int(progress.get("concerts",0)) != int(relay.concerts_before) + int(relay.index): return _fail("庆典接力站序与完成成绩不符")
	var ids := {}
	for id: Variant in relay.venues:
		if not _valid_id(id,"h",ids): return _fail("庆典接力场地身份无效")
	var concert: Dictionary = data.concert
	if concert.get("phase","idle") not in ["gathering","playing"] or concert.get("source","manual") != "manual" or concert.has("sponsors"):
		return _fail("庆典接力需要真实手动演出")
	if concert.get("venue_id") != relay.venues[int(relay.index)]: return _fail("庆典接力当前庭不符")
	if not _is_number(concert.get("elapsed")) or float(concert.elapsed) >= 24.0 or concert.get("duration") != 24:
		return _fail("庆典接力真实演出时间无效")
	return {"ok":true}


func _validate_journey_checkpoint(data: Variant, house_rows: Variant = null, progress_rows: Variant = null) -> Dictionary:
	if not data is Dictionary: return _fail("居民行程结构无效")
	if data.is_empty(): return {"ok":true}
	if (data.get("schema") != 1 and data.get("schema") != 2) or not data.get("residents") is Array or not data.get("concert") is Dictionary:
		return _fail("居民行程版本或结构无效")
	var relay_check := _validate_relay_journey(data, life_progress if progress_rows == null else progress_rows)
	if not relay_check.ok: return relay_check
	var homes := {}
	for resident in data.residents:
		if not resident is Dictionary or not resident.get("home_id") is String or homes.has(resident.home_id): return _fail("居民行程身份无效")
		homes[resident.home_id] = true
		if not _valid_point(resident.get("position")) or not WORLD_RECT.grow(2).has_point(Vector2(resident.position[0],resident.position[1])): return _fail("居民行程位置无效")
		if not _is_number(resident.get("yaw")) or not _is_number(resident.get("wait")) or resident.wait < 0 or not resident.get("paused") is bool: return _fail("居民行程时间无效")
		if not _is_number(resident.get("phase")): return _fail("居民行程相位无效")
		for key in ["destination_id","dwell_id","service_pending"]:
			if not resident.get(key) is String: return _fail("居民行程目标无效")
		if resident.has("daily_snapshot") and not resident.daily_snapshot is Dictionary: return _fail("居民日常行程无效")
		if resident.has("daily_snapshot"):
			var daily: Dictionary = resident.daily_snapshot
			if daily.has("daily_snapshot"): return _fail("居民日常行程不能递归")
			var daily_check := _validate_journey_checkpoint({"schema":1,"residents":[daily],"concert":{}}, house_rows)
			if not daily_check.ok or daily.get("home_id") != resident.home_id: return _fail("居民日常行程字段无效")
		if resident.has("stops"):
			if not resident.stops is Array: return _fail("居民日常目的地无效")
			for stop in resident.stops:
				if not stop is String: return _fail("居民日常目的地身份无效")
	var tea_check := _validate_cafe_journeys(data, homes)
	if not tea_check.ok: return tea_check
	var concert: Dictionary = data.concert
	if concert.get("source", "manual") not in ["manual", "auto"]: return _fail("街坊演出来源无效")
	if concert.get("source", "manual") == "manual" and concert.has("sponsors"): return _fail("手动演出不能冒充灵感赞助")
	if concert.get("phase","idle") not in ["idle","gathering","playing"]: return _fail("街坊演出状态无效")
	if concert.get("phase","idle") != "idle":
		if not concert.get("venue_id") is String or not concert.get("participants") is Array or concert.participants.is_empty(): return _fail("街坊演出成员无效")
		if not _is_number(concert.get("elapsed")) or concert.elapsed < 0 or not _is_number(concert.get("duration")) or concert.duration <= 0 or concert.elapsed > concert.duration: return _fail("街坊演出时间无效")
		var participants := {}
		for home in concert.participants:
			if not home is String or participants.has(home) or not homes.has(home): return _fail("街坊演出成员身份无效")
			participants[home] = true
		if concert.get("source", "manual") == "auto":
			if not concert.get("sponsors") is Array or concert.sponsors.size() < 2: return _fail("巡演赞助资格无效")
			var sponsors := {}
			for home in concert.sponsors:
				if not home is String or sponsors.has(home) or not participants.has(home): return _fail("巡演赞助成员无效")
				sponsors[home] = true
		if concert.has("wake_house_ids"):
			if not concert.wake_house_ids is Array: return _fail("街坊演出唤醒房屋无效")
			var wake_existing := {}
			var wake_seen := {}
			var wake_rows: Variant = houses if house_rows == null else house_rows
			if not wake_rows is Array: return _fail("街坊演出唤醒房屋无效")
			for house in wake_rows:
				if house is Dictionary: wake_existing[str(house.get("id", ""))] = true
			for id in concert.wake_house_ids:
				if not id is String or not wake_existing.has(id) or wake_seen.has(id): return _fail("街坊演出唤醒房屋无效")
				wake_seen[id] = true
	if data.has("bakery_workers"):
		if not data.bakery_workers is Array:
			return _fail("面包坊工人行程结构无效")
		var worker_homes := {}
		var worker_bakeries := {}
		var existing := {}
		var rows: Variant = houses if house_rows == null else house_rows
		if not rows is Array:
			return _fail("面包坊工人房屋结构无效")
		for house in rows:
			if house is Dictionary and house.get("id") is String:
				existing[house.id] = true
		for worker in data.bakery_workers:
			if not worker is Dictionary or worker.size() != 8:
				return _fail("面包坊工人行程字段无效")
			for key in ["home_id", "bakery_id"]:
				if not worker.get(key) is String or not existing.has(worker[key]):
					return _fail("面包坊工人房屋身份无效")
			if worker_homes.has(worker.home_id) or worker_bakeries.has(worker.bakery_id):
				return _fail("面包坊工人分配重复")
			worker_homes[worker.home_id] = true
			worker_bakeries[worker.bakery_id] = true
			if not _valid_point(worker.get("position")) or not WORLD_RECT.grow(2).has_point(Vector2(worker.position[0], worker.position[1])) or not _is_number(worker.get("yaw")):
				return _fail("面包坊工人位置无效")
			if worker.get("phase") not in ["walking", "baking", "returning", "resting", "paused"] or worker.get("resume_phase") not in ["walking", "baking", "returning", "resting"]:
				return _fail("面包坊工人阶段无效")
			if worker.phase != "paused" and worker.resume_phase != worker.phase:
				return _fail("面包坊工人恢复阶段无效")
			if not _is_number(worker.get("elapsed")) or worker.elapsed < 0 or worker.elapsed > 6:
				return _fail("面包坊工人工作时间无效")
			if worker.resume_phase == "resting" and worker.elapsed > 4 or worker.resume_phase in ["walking", "returning"] and worker.elapsed != 0:
				return _fail("面包坊工人阶段时间无效")
			if not _is_integer(worker.get("batches")) or worker.batches < 0 or worker.batches > 3:
				return _fail("面包坊工人批次无效")
	if data.has("workshop_workers"):
		var craft_check := _validate_workshop_workers(data.workshop_workers, house_rows)
		if not craft_check.ok: return craft_check
		var employed := {}
		for worker in data.get("bakery_workers", []): employed[worker.home_id] = true
		for worker in data.workshop_workers:
			if employed.has(worker.home_id): return _fail("同一位匠人不能同时在两个工坊任职")
	return {"ok":true}


func _validate_workshop_workers(workers: Variant, house_rows: Variant) -> Dictionary:
	if not workers is Array: return _fail("制琴工坊工人行程结构无效")
	var rows: Variant = houses if house_rows == null else house_rows
	if not rows is Array: return _fail("制琴工坊工人房屋结构无效")
	var existing := {}
	for house in rows:
		if house is Dictionary and house.get("id") is String: existing[house.id] = true
	var seen_homes := {}
	var seen_shops := {}
	var phases := ["to_workshop", "crafting", "to_target", "installing", "returning", "to_home", "resting"]
	for worker in workers:
		if not worker is Dictionary or worker.size() != 9: return _fail("制琴工坊工人行程字段无效")
		for key in ["home_id", "workshop_id"]:
			if not worker.get(key) is String or not existing.has(worker[key]): return _fail("制琴工坊工人房屋身份无效")
		if seen_homes.has(worker.home_id) or seen_shops.has(worker.workshop_id): return _fail("制琴工坊工人分配重复")
		seen_homes[worker.home_id] = true
		seen_shops[worker.workshop_id] = true
		if not worker.get("target_id") is String or (not worker.target_id.is_empty() and not existing.has(worker.target_id)): return _fail("制琴工坊运输目标无效")
		if not _valid_point(worker.get("position")) or not WORLD_RECT.grow(2).has_point(Vector2(worker.position[0], worker.position[1])) or not _is_number(worker.get("yaw")): return _fail("制琴工坊工人位置无效")
		if worker.get("resume_phase") not in phases or (worker.get("phase") != "paused" and worker.get("phase") not in phases): return _fail("制琴工坊工人阶段无效")
		if worker.phase != "paused" and worker.resume_phase != worker.phase: return _fail("制琴工坊工人恢复阶段无效")
		var phase: String = worker.resume_phase
		if not _is_number(worker.get("elapsed")) or worker.elapsed < 0: return _fail("制琴工坊工人工作时间无效")
		var duration := 8.0 if phase == "crafting" else (2.0 if phase == "installing" else (4.0 if phase == "resting" else 0.0))
		if worker.elapsed > duration: return _fail("制琴工坊工人阶段时间无效")
		if not _is_integer(worker.get("deliveries")) or worker.deliveries < 0 or worker.deliveries > 3: return _fail("制琴工坊工人送装次数无效")
		if (worker.deliveries == 3) != (phase in ["to_home", "resting"]): return _fail("制琴工坊工人休息阶段无效")
		if (not worker.target_id.is_empty()) != (phase in ["to_target", "installing"]): return _fail("制琴工坊工人送装阶段无效")
	return {"ok":true}


func _generate_initial_plants() -> void:
	# Keep the renderer's authored grove layout deterministic. Consume the same
	# random streams used by _build_landscape before reaching its eight groves.
	var rng := RandomNumberGenerator.new()
	rng.seed = 261014
	for ignored in range(75):
		var x := rng.randf_range(-27.0, 27.0)
		var z := rng.randf_range(-25.0, 25.0)
		if water_clearance(Vector2(x, z)) < 0.3:
			continue
		rng.randf_range(1.0, 3.4)
		for contour in range(10):
			rng.randf_range(0.78, 1.20)
	for ignored in range(34):
		rng.randf_range(-26.0, 26.0)
		rng.randf_range(-1.55, 1.55)
		rng.randf_range(0.15, 0.65)
	var groves := [Vector2(-14, -9), Vector2(-16, 7), Vector2(13, -9), Vector2(14, 8), Vector2(-7, 14), Vector2(8, 17), Vector2(-19, -18), Vector2(18, -19)]
	var number := 1
	for grove: Vector2 in groves:
		for index in range(7):
			var position := grove + Vector2(rng.randf_range(-3.0, 3.0), rng.randf_range(-2.7, 2.7))
			var scale_value := rng.randf_range(0.75, 1.3)
			if not WORLD_RECT.has_point(position):
				continue
			var kind := "cypress" if index % 3 == 0 else "olive"
			var plant := _make_plant("p%d" % number, position, kind, scale_value, 261014 + number * 977, "seed")
			if not _plant_geometry_compatible(plant, plants):
				continue
			plants.append(plant)
			number += 1
	_next_plant_id = number
	_high_watermark["plant"] = number - 1


func _make_plant(id: String, position: Vector2, kind: String, scale_value: float, plant_seed: int, source: String) -> Dictionary:
	return {"id": id, "position": [position.x, position.y], "kind": kind, "scale": scale_value, "seed": plant_seed, "source": source}


func _validate_vegetation_stroke(points: Array[Vector2], kind: String, radius: float) -> Dictionary:
	if points.is_empty() or kind not in GardenSpecies.IDS or not is_finite(radius) or radius <= 0.0 or radius > 8.0:
		return _fail("无效的植被笔画")
	for point in points:
		if not is_finite(point.x) or not is_finite(point.y) or not WORLD_RECT.has_point(point):
			return _fail("植被笔画超出了河湾范围")
	return {"ok": true, "message": ""}


func _validate_erase_stroke(points: Array[Vector2], radius: float) -> Dictionary:
	if points.is_empty() or not is_finite(radius) or radius <= 0.0 or radius > 12.0:
		return _fail("无效的植被擦除笔画")
	for point in points:
		if not is_finite(point.x) or not is_finite(point.y) or not WORLD_RECT.has_point(point):
			return _fail("植被擦除笔画超出了河湾范围")
	return {"ok": true, "message": ""}


func _stroke_samples(points: Array[Vector2], radius: float) -> Array[Vector2]:
	var samples: Array[Vector2] = []
	samples.append(points[0])
	var spacing := maxf(0.65, radius * 0.78)
	var remaining := spacing
	for index in range(1, points.size()):
		var start: Vector2 = points[index - 1]
		var finish: Vector2 = points[index]
		var length := start.distance_to(finish)
		while length >= remaining:
			start = start.move_toward(finish, remaining)
			samples.append(start)
			length = start.distance_to(finish)
			remaining = spacing
			if samples.size() >= MAX_PLANTS_PER_STROKE * 2:
				return samples
		remaining -= length
	if samples[-1].distance_to(points[-1]) >= spacing * 0.5:
		samples.append(points[-1])
	return samples


func _vegetation_stroke_seed(points: Array[Vector2], kind: String, radius: float) -> int:
	var seed_value := 261014 + int(_high_watermark.get("plant", 0)) * 977 + kind.hash() % 997
	seed_value += int(round(radius * 100.0)) * 37
	for point in _stroke_samples(points, radius):
		seed_value = posmod(seed_value * 131 + int(round(point.x * 100.0)) * 17 + int(round(point.y * 100.0)) * 31, 2147483647)
	return maxi(1, seed_value)


func _plant_scale(kind: String, rng: RandomNumberGenerator) -> float:
	if kind == "shrub":
		return rng.randf_range(0.65, 1.05)
	return rng.randf_range(0.78, 1.22)


func _valid_plant_fields(plant: Dictionary) -> bool:
	if not plant.get("id", "") is String or not plant.get("id", "").begins_with("p"):
		return false
	if not _valid_point(plant.get("position")) or plant.get("kind") not in GardenSpecies.IDS:
		return false
	if not _is_number(plant.get("scale")) or float(plant.scale) <= 0.0 or not _is_integer(plant.get("seed")):
		return false
	return plant.get("source", "seed") in ["seed", "player"]


func _plant_geometry_compatible(plant: Dictionary, extra: Array, include_existing: bool = false, entrances_by_house: Dictionary = {}) -> bool:
	if not _valid_plant_fields(plant):
		return false
	var position := Vector2(float(plant.position[0]), float(plant.position[1]))
	if PlacedLandmarks.occupies(self,position,.3):return false
	var scale_value := float(plant.scale)
	var clearance := GardenSpecies.clearance(str(plant.kind),scale_value)
	if not WORLD_RECT.has_point(position):
		return false
	if water_clearance(position) <= clearance:
		return false
	for house in houses:
		if AmphitheaterPlan.occupies(AmphitheaterPlan.for_house(self,house),position,clearance):return false
		for cell in house.cells:
			if cell.level != 0:
				continue
			var center := Vector2(float(house.origin[0]) + int(cell.x) * CELL_UNIT, float(house.origin[1]) + int(cell.z) * CELL_UNIT)
			var footprint:Variant=Rotation.Frame.footprint(house,cell,clearance)
			if Rotation.Frame.contains(footprint,position):
				return false
		# A render pass already resolves these immutable entrances once. Reusing
		# them avoids rebuilding every road/blocker signature for every plant.
		var entrances: Array = entrances_by_house[str(house.id)] if entrances_by_house.has(str(house.id)) else house_entrances(str(house.id))
		for entrance: Dictionary in entrances:
			if position.distance_to(entrance.clearance_at) <= 0.95+clearance: return false
	for road in roads:
		for index in range(1, road.points.size()):
			var a := Vector2(float(road.points[index - 1][0]), float(road.points[index - 1][1]))
			var b := Vector2(float(road.points[index][0]), float(road.points[index][1]))
			if _distance_to_segment(position, a, b) <= float(road.width) * 0.5 + 0.45 + clearance:
				return false
	var all_plants: Array = []
	if include_existing:
		all_plants.append_array(plants)
	all_plants.append_array(extra)
	for other in all_plants:
		if other.get("id", "") == plant.get("id", ""):
			continue
		if not _valid_point(other.get("position")):
			continue
		var other_position := Vector2(float(other.position[0]), float(other.position[1]))
		var other_clearance := GardenSpecies.clearance(str(other.get("kind","olive")),float(other.get("scale",1.0)))
		if position.distance_to(other_position) < clearance + other_clearance + 0.18:
			return false
	return true


func _distance_to_polyline(point: Vector2, points: Array[Vector2]) -> float:
	if points.size() == 1:
		return point.distance_to(points[0])
	var nearest := INF
	for index in range(1, points.size()):
		nearest = minf(nearest, _distance_to_segment(point, points[index - 1], points[index]))
	return nearest


func _distance_to_segment(point: Vector2, a: Vector2, b: Vector2) -> float:
	var length_squared := a.distance_squared_to(b)
	if length_squared <= 0.000001:
		return point.distance_to(a)
	var t := clampf((point - a).dot(b - a) / length_squared, 0.0, 1.0)
	return point.distance_to(a.lerp(b, t))


func _make_house(position: Vector2, palette: int) -> Dictionary:
	var id := "h%d" % _next_house_id
	_next_house_id += 1
	return {"id": id, "name": "石榴巷%d号" % (_next_house_id - 1), "role": "residential", "bakery_open":true,"workshop_open":true,"auto_matinee":false, "origin": [position.x, position.y], "cells": [_make_cell(0, 0, 0, "room")], "palette": palette, "seed": 81000 + palette * 977}


static func river_x(z: float) -> float:
	return 3.0 + sin(z * 0.17) * 0.52


func _make_cell(x: int, z: int, level: int, kind: String) -> Dictionary:
	var id := "c%d" % _next_cell_id
	_next_cell_id += 1
	return {"id": id, "x": x, "z": z, "level": level, "kind": kind, "source": "seed"}


func _commit(before: Dictionary, label: String) -> void:
	preload("res://scripts/world/city_creation_balcony_plan.gd").prune(self)
	preload("res://scripts/world/city_creation_curve_hug.gd").after_placement(self,before,label)
	if journey_checkpoint.get("concert",{}).get("grand_festival",false):_prune_missing_journeys()
	AutoNeighborhoods.refresh(self)
	_prune_afterglow()
	_normalize_craft_transit()
	revision += 1
	dirty = true
	_undo.append({"before": before, "after": snapshot(), "label": label})
	_redo.clear()


var _house_indices:Dictionary={}
func _house_index(id: String) -> int:
	var index:int=_house_indices.get(id,-1)
	# Validate against the actual array: restore, undo and fixture construction
	# can replace or reorder houses without calling an index invalidator.
	if index>=0 and index<houses.size() and houses[index].id==id:return index
	_house_indices={}
	for i in range(houses.size()):
		var key:String=houses[i].id
		if not _house_indices.has(key):_house_indices[key]=i
	return int(_house_indices.get(id,-1))


func _supported(cell: Dictionary, cells: Array) -> bool:
	for other in cells:
		if other.kind != "room":
			continue
		if other.x == cell.x and other.z == cell.z and other.level == cell.level - 1:
			return true
		if cell.kind == "terrace" and other.level == cell.level and abs(other.x - cell.x) + abs(other.z - cell.z) == 1:
			return true
	return false


func _validate_house(house: Dictionary) -> Dictionary:
	if house.cells.is_empty():
		return _fail("保留房屋的最后一块")
	var grounds: Dictionary = {}
	var locations: Dictionary = {}
	for cell in house.cells:
		var location := "%d:%d:%d" % [cell.x, cell.z, cell.level]
		if locations.has(location):
			return _fail("房屋模块重叠")
		locations[location] = true
		if cell.level == 0:
			grounds[Vector2i(int(cell.x), int(cell.z))] = true
		elif not _supported(cell, house.cells):
			return _fail("上层需要下方房间支撑")
	if grounds.is_empty():
		return _fail("房屋需要地基")
	var visited: Dictionary = {}
	var queue: Array = [grounds.keys()[0]]
	while not queue.is_empty():
		var current: Vector2i = queue.pop_back()
		if visited.has(current):
			continue
		visited[current] = true
		for direction in DIRECTIONS:
			var neighbor: Vector2i = current + direction
			if grounds.has(neighbor) and not visited.has(neighbor):
				queue.append(neighbor)
	if visited.size() != grounds.size():
		return _fail("房屋地基需要保持相连")
	return {"ok": true, "message": ""}


func _house_overlaps(candidate: Dictionary, except_id: String = "") -> bool:
	if PlacedLandmarks.hits_house(self,candidate):return true
	for house in houses:
		if house.id == except_id:
			continue
		if _pair_overlaps(candidate, house):
			return true
		if AmphitheaterPlan.hits_house(AmphitheaterPlan.for_house(self,house),candidate) or AmphitheaterPlan.hits_house(AmphitheaterPlan.for_house(self,candidate),house):return true
	return false


func _pair_overlaps(first: Dictionary, second: Dictionary) -> bool:
	if preload("res://scripts/world/city_creation_balcony_plan.gd").conflict(self,first,second):return true
	if Rotation.Frame.transformed(first) or Rotation.Frame.transformed(second):return Rotation.Frame.overlaps(first,second)
	for a in first.cells:
		for b in second.cells:
			if a.level != b.level:
				continue
			var dx: float = abs(float(first.origin[0]) + int(a.x) * CELL_UNIT - float(second.origin[0]) - int(b.x) * CELL_UNIT)
			var dz: float = abs(float(first.origin[1]) + int(a.z) * CELL_UNIT - float(second.origin[1]) - int(b.z) * CELL_UNIT)
			if dx < CELL_UNIT - 0.001 and dz < CELL_UNIT - 0.001:
				return true
	return false


func _apply_snapshot(data: Dictionary, preserve_issued_ids: bool = false) -> void:
	_synergy_revision=-1
	_quality_geometry_revision=-1
	_signature_bonuses_revision=-1
	_prosperity_revision = -1
	_growth_geometry_revision = -1
	_street_marker_revision=-1
	_ground_revision = -1
	_raw_ground_revision = -1
	_road_heights = RoadHeights.new()
	_courtyard_revision = -1
	var had_plants := Serializer.apply_data(self,data,preserve_issued_ids)
	if preserve_issued_ids:
		for id:String in resonance_afterglow:resonance_afterglow[id]=minf(float(resonance_afterglow[id]),afterglow_limit(id))
	if not had_plants:
		var preserved_plant_watermark := int(_high_watermark.get("plant", 0))
		_generate_initial_plants()
		_high_watermark["plant"] = maxi(int(_high_watermark.get("plant", 0)), preserved_plant_watermark)
		_next_plant_id = maxi(_next_plant_id, int(_high_watermark["plant"]) + 1)
	if preserve_issued_ids:
		_prune_missing_journeys()
	_prune_afterglow()
	_normalize_craft_transit()


func _read_snapshot(path: String) -> Dictionary:
	return Serializer.read(self,path)


func _validate_snapshot(data: Dictionary) -> Dictionary:
	return Serializer.validate(self,data)


func house_entrances(house_id: String) -> Array[Dictionary]:
	if has_meta("prepared_frontages"):return preload("res://scripts/visual/city_creation_prepared_frontages.gd").read(self,house_id)
	for house: Dictionary in houses:
		if str(house.id)!=house_id: continue
		var signature: Array=[house.origin.duplicate(),[],Rotation.Frame.yaw(house),Rotation.Frame.Hinge.key(house)]
		for cell: Dictionary in house.cells:
			if int(cell.level)==0:
				signature[1].append([str(cell.id),int(cell.x),int(cell.z),str(cell.kind)])
		for road: Dictionary in roads:
			signature.append([str(road.id),float(road.width),road.points.duplicate(true)])
		signature.append(Frontage.blocker_signature(house,houses))
		var cached: Dictionary=_frontage_cache.get(house_id,{})
		if cached.is_empty() or cached.signature!=signature:
			cached={"signature":signature,"records":Frontage.entrances(house,roads,houses),"passages":Passage.for_house(house,roads)}
			_frontage_cache[house_id]=cached
		var result: Array[Dictionary]=[]
		result.assign(cached.records.duplicate(true))
		return result
	_frontage_cache.erase(house_id)
	return []


func house_passages(house_id: String) -> Array[Dictionary]:
	house_entrances(house_id)
	var result: Array[Dictionary]=[]
	if _frontage_cache.has(house_id): result.assign(_frontage_cache[house_id].passages.duplicate(true))
	return result


func _validate_house_site(house: Dictionary, road_rows: Variant = null, water_rows: Variant = null) -> Dictionary:
	var scene_roads: Array = roads if road_rows == null else road_rows
	if Rotation.Frame.transformed(house):return Rotation.site(self,house,scene_roads,waters if water_rows==null else water_rows)
	for marker: Dictionary in Roundabouts.all(scene_roads):
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var at:=Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*CELL_UNIT
			var offset: Vector2=(at-Vector2(marker.center)).abs()-Vector2.ONE*.9
			if offset.max(Vector2.ZERO).length()<float(marker.radius)+.3: return _fail("请给环岛广场留出空间")
	var scene_waters: Array = waters if water_rows == null else water_rows
	for cell in house.cells:
		var center := Vector2(float(house.origin[0]) + cell.x * CELL_UNIT, float(house.origin[1]) + cell.z * CELL_UNIT)
		var footprint := Rect2(center - Vector2.ONE * CELL_UNIT * 0.5, Vector2.ONE * CELL_UNIT)
		if not WORLD_RECT.encloses(footprint):
			return _fail("这里超出了河湾范围")
		for i in range(5):
			var sample_z := lerpf(footprint.position.y, footprint.end.y, float(i) / 4.0)
			var nearest_to_river := Vector2(clampf(river_x(sample_z), footprint.position.x, footprint.end.x), sample_z)
			if _water_clearance_in(nearest_to_river, scene_waters) < 0.0:
				return _fail("房屋不能建在河水中")
		for water in scene_waters:
			if _stroke_hits_rect(water.points, float(water.width) * 0.5, footprint):
				return _fail("房屋不能建在水域中")
		if cell.level == 0:
			for road in scene_roads:
				if Frontage.road_cell_conflict(house,cell,road.points,float(road.width)):
					return _fail("这里需要给道路留出空间")
	if house.get("signature","")=="floating_amphitheater" and AmphitheaterPlan.for_house(self,house,scene_waters).is_empty():return _fail("将剧场沿岸放置，让水上舞台伸入水面")
	return {"ok": true, "message": ""}


func _validate_road_site(points: Array, width: float, house_rows: Variant = null, water_rows: Variant = null) -> Dictionary:
	if house_rows==null and PlacedLandmarks.stroke_conflicts(self,points,width*.5+.3):return _fail("道路需要避开传世地标")
	var scene_houses: Array = houses if house_rows == null else house_rows
	var scene_waters: Array = waters if water_rows == null else water_rows
	var bridge_valid := _road_water_crossings(points, width, scene_waters)
	if not bridge_valid.ok:
		return bridge_valid
	var bridge: bool = bridge_valid.bridge
	var length := 0.0
	var bounds:=Rect2(Vector2(points[0][0],points[0][1]) if not points.is_empty() else Vector2.ZERO,Vector2.ZERO)
	for point in points:
		bounds=bounds.expand(Vector2(point[0],point[1]))
		if not WORLD_RECT.has_point(Vector2(point[0], point[1])):
			return _fail("道路超出了河湾范围")
	for i in range(1, points.size()):
		length += Vector2(points[i-1][0],points[i-1][1]).distance_to(Vector2(points[i][0],points[i][1]))
	for house in scene_houses:
		for cell in house.cells:
			if int(cell.level)!=0:continue
			var origin: Vector2=Frontage.center(house,cell)
			if not bounds.intersects(Rotation.Frame.bounds(Rotation.Frame.footprint(house,cell,width*.5)),true):continue
			if Frontage.road_cell_conflict(house,cell,points,width):
				return _fail("道路需要正面接门，或从底层房间的相对两面完整穿过")
	if length < 0.2:
		return _fail("道路太短")
	return {"ok": true, "message": "", "bridge": bridge}


## Sample contact over the whole stroke, rather than requiring the entire
## road to start and finish on opposite sides of the immutable base river.
## Each contact run must have dry abutments and cross actual water; a bank
## skim or longitudinal canal path cannot masquerade as a bridge.
func _road_water_crossings(points: Array, width: float, rows: Array) -> Dictionary:
	var samples: Array[Dictionary] = []
	for index in range(1, points.size()):
		var a := Vector2(points[index - 1][0], points[index - 1][1])
		var b := Vector2(points[index][0], points[index][1])
		var count := maxi(1, int(ceil(a.distance_to(b) / 0.12)))
		var direction := (b - a).normalized()
		for step in range(count + 1):
			if index > 1 and step == 0:
				continue
			var position := a.lerp(b, float(step) / float(count))
			var clearance := _water_clearance_in(position, rows)
			if clearance < width * 0.5:
				var base_clearance := absf(position.x - river_x(position.y)) - RIVER_HALF_WIDTH
				if base_clearance < width * 0.5 and (absf(direction.x) < absf(direction.y) * 1.5 or absf(direction.x) < 0.001):
					return _fail("桥梁需要横向跨河，不能沿水面铺路")
				for water in rows:
					if water.points.size() < 2 or _water_stroke_distance(position, water.points) >= (float(water.width) + width) * 0.5:
						continue
					var nearest := INF
					var tangent := Vector2.ZERO
					for water_index in range(1, water.points.size()):
						var c := Vector2(water.points[water_index - 1][0], water.points[water_index - 1][1])
						var d := Vector2(water.points[water_index][0], water.points[water_index][1])
						var distance := _distance_to_segment(position, c, d)
						if distance < nearest and c.distance_squared_to(d) > 0.00001:
							nearest = distance
							tangent = (d - c).normalized()
					if tangent != Vector2.ZERO and absf(direction.dot(tangent)) > 0.8:
						return _fail("桥梁需要横跨水岸，不能沿水域铺路")
			samples.append({"position": position, "clearance": clearance})
	var bridge := false
	var run_start := -1
	var entered_water := false
	for index in range(samples.size()):
		if float(samples[index].clearance) < width * 0.5:
			bridge = true
			if run_start < 0:
				run_start = index
				entered_water = false
			entered_water = entered_water or float(samples[index].clearance) < -0.05
		elif run_start >= 0:
			if run_start == 0 or not entered_water:
				return _fail("桥梁需要完整连接两岸，不能停在水中或擦过岸边")
			run_start = -1
	if run_start >= 0:
		return _fail("桥梁需要完整连接两岸")
	return {"ok": true, "message": "", "bridge": bridge}


func _segment_hits_rect(a: Vector2, b: Vector2, rect: Rect2) -> bool:
	var lower := 0.0
	var upper := 1.0
	for axis in range(2):
		var delta := b[axis] - a[axis]
		if absf(delta) < 0.00001:
			if a[axis] < rect.position[axis] or a[axis] > rect.end[axis]:
				return false
		else:
			var first := (rect.position[axis] - a[axis]) / delta
			var second := (rect.end[axis] - a[axis]) / delta
			lower = maxf(lower, minf(first, second))
			upper = minf(upper, maxf(first, second))
			if lower > upper:
				return false
	return true


func _valid_id(value: Variant, prefix: String, ids: Dictionary) -> bool:
	return SaveValidation._valid_id(value,prefix,ids)


func _valid_point(value: Variant) -> bool:
	return SaveValidation._valid_point(value)


func _is_number(value: Variant) -> bool:
	return SaveValidation._is_number(value)


func _is_integer(value: Variant) -> bool:
	return SaveValidation._is_integer(value)


func _fail(message: String) -> Dictionary:
	return SaveValidation._fail(message)

func _validate_cafe_progress(data: Dictionary, issued: Dictionary) -> Dictionary:
	return SaveValidation._validate_cafe_progress(data,issued)

func _validate_cafe_journeys(data: Dictionary, homes: Dictionary) -> Dictionary:
	var cafe_homes := {}
	for person in data.residents:
		if not person.has("cafe_visit"): continue
		var visit: Variant = person.cafe_visit
		if not visit is Dictionary or visit.size() != 4: return _fail("茶座行程字段无效")
		if not visit.get("cafe_id") is String or not visit.get("return_id") is String or not _is_integer(visit.get("seat")) or visit.seat < 0 or visit.seat > 2 or visit.get("phase") not in ["walking", "seated", "leaving"]: return _fail("茶座行程阶段无效")
		if person.has("daily_snapshot"): return _fail("茶座访客不能同时参加演出")
		cafe_homes[person.home_id] = visit
	var groups: Variant = data.get("cafe_groups", [])
	if not groups is Array: return _fail("茶座聚会结构无效")
	var cafes := {}
	var grouped := {}
	for group in groups:
		if not group is Dictionary or group.size() != 4: return _fail("茶座聚会字段无效")
		if not group.get("cafe_id") is String or cafes.has(group.cafe_id) or group.get("phase") not in ["waiting", "tea", "leaving"] or not _is_number(group.get("elapsed")) or group.elapsed < 0 or group.elapsed >= 6 or not group.get("participants") is Array or group.participants.is_empty() or group.participants.size() > 3: return _fail("茶座聚会时间或阶段无效")
		cafes[group.cafe_id] = true
		var seats := {}
		for home in group.participants:
			if not home is String or not homes.has(home) or not cafe_homes.has(home) or grouped.has(home): return _fail("茶座聚会成员无效")
			var visit: Dictionary = cafe_homes[home]
			if visit.cafe_id != group.cafe_id or seats.has(visit.seat): return _fail("茶座席位重复")
			seats[visit.seat] = true
			grouped[home] = true
			if group.phase == "tea" and visit.phase != "seated" or group.phase == "leaving" and visit.phase != "leaving": return _fail("茶座聚会阶段不符")
		if group.phase == "tea" and group.participants.size() < 2 or group.phase != "tea" and group.elapsed != 0: return _fail("茶座聚会驻留无效")
	if grouped.size() != cafe_homes.size(): return _fail("茶座访客缺少真实聚会")
	return {"ok":true}


func _validate_matinee(data: Dictionary, issued: Dictionary) -> Dictionary:
	return SaveValidation._validate_matinee(data,issued)


func _validate_terrain_fields(stroke: Dictionary) -> Dictionary:
	if stroke.get("mode","") not in ["raise","lower","reset","plateau","smooth"]: return _fail("未知的地形笔刷")
	if stroke.has("natural") and (not stroke.natural is bool or stroke.mode not in ["raise","lower","plateau"]): return _fail("自然轮廓笔刷无效")
	if not _is_number(stroke.get("radius")) or not is_finite(float(stroke.radius)) or float(stroke.radius)<1.0 or float(stroke.radius)>6.0: return _fail("地形笔刷半径无效")
	if not _is_number(stroke.get("strength")) or not is_finite(float(stroke.strength)) or float(stroke.strength)<=0.0 or float(stroke.strength)>1.0: return _fail("地形笔刷力度无效")
	if not stroke.get("points") is Array or stroke.points.is_empty(): return _fail("地形笔画为空")
	for point in stroke.points:
		if not _valid_point(point) or not WORLD_RECT.has_point(Vector2(float(point[0]),float(point[1]))): return _fail("请在河湾草地内塑形")
	return {"ok":true}

func add_terrain_stroke(points: Array[Vector2],mode: String,radius: float = 3.5,strength: float = 0.65,passes: int = 1,natural: bool = false) -> Dictionary:
	var encoded: Array=[]
	for at: Vector2 in points: encoded.append([at.x,at.y])
	var row: Dictionary={"points":encoded,"mode":mode,"radius":radius,"strength":strength}
	if natural: row.natural=true
	var valid:=_validate_terrain_fields(row)
	if not valid.ok: return valid
	if PlacedLandmarks.stroke_conflicts(self,encoded,radius):return _fail("先移动传世地标，再调整它的地基")
	if passes<1 or passes>2: return _fail("地形笔画层数无效")
	var before:=snapshot()
	# A ridge preset lays two existing-format layers in one undo transaction.
	for layer in range(passes): terrain_strokes.append(row.duplicate(true))
	_commit(before,"塑造地貌")
	return {"ok":true,"message":{"raise":"草丘轻轻隆起。","lower":"留下一片浅洼。","reset":"这片土地回到原来的起伏。","plateau":"宽阔台地沿笔触隆起。","smooth":"山坡边缘变得柔和。"}[mode]}
