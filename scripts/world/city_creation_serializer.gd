extends RefCounted
## Save format, JSON decoding and atomic file publication. No retained City,
## SceneTree or derived render/height cache. State owns transactions and history.
const Growth = preload("res://scripts/world/city_creation_growth.gd")
const WORLD_RECT = preload("res://scripts/world/city_creation_bounds.gd").WORLD_RECT

static func snapshot(city: RefCounted) -> Dictionary:
	var result := {"schema": city.TERRAIN_SCHEMA if not city.terrain_strokes.is_empty() else city.SCHEMA, "revision": city.revision, "houses": city.houses.duplicate(true), "roads": city.roads.duplicate(true), "plants": city.plants.duplicate(true), "waters": city.waters.duplicate(true), "terrain_strokes": city.terrain_strokes.duplicate(true), "districts": city.districts.duplicate(true), "next_district_id": city._next_district_id, "next_water_id": city._next_water_id, "next_house_id": city._next_house_id, "next_cell_id": city._next_cell_id, "next_road_id": city._next_road_id, "next_plant_id": city._next_plant_id, "high_watermark": city._high_watermark.duplicate(), "life_progress":city.life_progress.duplicate(),"cafe_credits":city.cafe_credits.duplicate(true),"cafe_progress":city.cafe_progress.duplicate(true),"matinee_credits":city.matinee_credits.duplicate(true),"matinee_progress":city.matinee_progress.duplicate(true),"matinee_pending":city.matinee_pending.duplicate(true),"matinee_cooldown":city.matinee_cooldown,"matinee_last_venue":city.matinee_last_venue,"bakery_supply":city.bakery_supply.duplicate(true),"workshop_supply":city.workshop_supply.duplicate(true),"house_improvements":city.house_improvements.duplicate(),"venue_commissions":city.venue_commissions.duplicate(true),"resonance_afterglow":city.resonance_afterglow.duplicate(),"journey_checkpoint":city.journey_checkpoint.duplicate(true)}
	if not city.growth_memories.is_empty():
		result.growth_memories = city.growth_memories.duplicate()
		result.schema = city.JOURNAL_SCHEMA
	for house: Dictionary in city.houses:
		if house.has("finish"): result.schema = city.JOURNAL_SCHEMA
	for stroke: Dictionary in city.terrain_strokes:
		if stroke.mode=="plateau": result.schema = city.PLATEAU_SCHEMA;break
	for house: Dictionary in city.houses:
		if house.has("style"): result.schema = city.BUILDING_SCHEMA;break
	for house: Dictionary in city.houses:
		if house.has("base_y"): result.schema = city.ELEVATION_SCHEMA;break
	for road: Dictionary in city.roads:
		if road.has("style"): result.schema = city.ROAD_STYLE_SCHEMA;break
	for house: Dictionary in city.houses:
		if house.get("style","")=="round_tower": result.schema = city.ROUND_TOWER_SCHEMA;break
	if not city.musical_links.is_empty():
		result.musical_links = city.musical_links.duplicate(true)
		result.schema = city.MUSICAL_LINK_SCHEMA
	for stroke: Dictionary in city.terrain_strokes:
		if stroke.mode=="smooth": result.schema=city.TERRAIN_SMOOTH_SCHEMA;break
	for stroke: Dictionary in city.terrain_strokes:
		if stroke.has("natural"): result.schema=city.TERRAIN_CONTOUR_SCHEMA;break
	for road: Dictionary in city.roads:
		if road.get("style","") in ["cobble","avenue","tram"] or road.has("roundabouts"): result.schema=city.ROAD_NETWORK_SCHEMA;break
	var era_data: bool = city.era_unlocks.size() > 1 or not city.house_culture.is_empty()
	for house: Dictionary in city.houses:
		if house.has("era_theme") or house.get("role","residential") == "atelier": era_data = true
	for district: Dictionary in city.districts:
		if district.has("era_theme"): era_data = true
	if era_data:
		result.schema = city.ERA_SCHEMA
		result.era_unlocks = city.era_unlocks.duplicate()
		result.house_culture = city.house_culture.duplicate()
	if not city.signature_unlocks.is_empty() or not city.district_answers.is_empty():
		result.signature_unlocks=city.signature_unlocks.duplicate()
		result.district_answers=city.district_answers.duplicate(true)
		result.schema=city.QUALITY_SCHEMA
	if not city.building_quality.is_empty() or not city.house_concerts.is_empty():
		result.schema=city.QUALITY_SCHEMA
		result.building_quality=city.building_quality.duplicate(true)
		result.house_concerts=city.house_concerts.duplicate(true)
	var mechanical: bool=not city.house_clockwork.is_empty()
	if "botanical_palace" in city.signature_unlocks or "clockwork_depot" in city.signature_unlocks:mechanical=true
	for duration: float in city.resonance_afterglow.values():
		if duration>120.0:mechanical=true
	for house: Dictionary in city.houses:
		if house.get("role","")=="clockmaker":mechanical=true
	if mechanical:
		result.schema=city.CLOCKWORK_SCHEMA
		result.house_clockwork=city.house_clockwork.duplicate()
	if not city.era_answers.is_empty() or city.era_unlocks.has("modern_eco"):
		result.schema=city.MODERN_SCHEMA;result.era_answers=city.era_answers.duplicate(true)
	for row: Dictionary in city.building_quality.values():
		if row.has("prestige"):result.schema=city.QUALITY_CONTEXT_SCHEMA;break
	for duration: float in city.resonance_afterglow.values():
		if duration>180.0:result.schema=city.QUALITY_CONTEXT_SCHEMA;break
	for house: Dictionary in city.houses:
		if house.get("signature","")=="watermill" and house.cells.size()==8:result.schema=city.QUALITY_CONTEXT_SCHEMA;break
	if not city.landmark_bread.is_empty():
		result.schema=city.PLANNING_SCHEMA
		result.landmark_bread=city.landmark_bread.duplicate(true)
	if not city.regional_trips.is_empty():
		result.schema=city.PLANNING_SCHEMA;result.regional_trips=city.regional_trips.duplicate(true)
	if not city.regional_replies.is_empty():
		result.schema=city.PLANNING_SCHEMA;result.regional_replies=city.regional_replies.duplicate(true)
	var former_limit:=180. if not city.signature_bonuses().palace_id.is_empty() else 120.
	for id:String in city.resonance_afterglow:
		if float(city.resonance_afterglow[id])>former_limit*(2. if city.level_tier(id)>=5 else 1.):result.schema=city.PLANNING_SCHEMA;break
	for house:Dictionary in city.houses:
		if house.has("yaw") or house.has("custom_colors") or house.has("acoustic_style") or house.has("temperament") or house.has("architecture") or house.has("corner_bevel") or house.has("bend_angle_deg") or house.has("bend_axis") or house.has("organic_manual") or house.has("overhang") or house.has("balcony_arc"):result.schema=city.PERSONALIZATION_SCHEMA;break
	for road:Dictionary in city.roads:
		if road.has("sized") or road.has("decoration") or str(road.get("style","")) in preload("res://scripts/world/city_creation_road_paving.gd").NEW_STYLES:result.schema=city.PERSONALIZATION_SCHEMA;break
	for plant:Dictionary in city.plants:
		if plant.kind not in ["olive","cypress","shrub"]:result.schema=city.PERSONALIZATION_SCHEMA;break
	if city.automatic_neighborhoods:result.automatic_neighborhoods=true;result.schema=city.PERSONALIZATION_SCHEMA
	if not city.microclimate.is_empty():result.microclimate=city.microclimate;result.schema=city.PERSONALIZATION_SCHEMA
	if not city.archive_unlocks.is_empty():result.archive_unlocks=city.archive_unlocks.duplicate();result.schema=city.PERSONALIZATION_SCHEMA
	if not city.music_mode.is_empty():result.music_mode=city.music_mode;result.schema=city.PERSONALIZATION_SCHEMA
	if not city.era_modifiers.is_empty():result.era_modifiers=city.era_modifiers.duplicate();result.schema=city.PERSONALIZATION_SCHEMA
	if not city.biome_seed.is_empty():result.biome_seed=city.biome_seed.duplicate();result.schema=city.PERSONALIZATION_SCHEMA
	if not city.workshop_yield_remainder.is_empty():result.workshop_yield_remainder=city.workshop_yield_remainder.duplicate();result.schema=city.PERSONALIZATION_SCHEMA
	if city.journey_checkpoint.get("concert",{}).get("landmark_movement",false):result.schema=city.PERSONALIZATION_SCHEMA
	if not city.wish_rewards.is_empty():result.wish_rewards=city.wish_rewards.duplicate(true);result.schema=city.PERSONALIZATION_SCHEMA
	if not city.harmony_journey.is_empty():result.harmony_journey=city.harmony_journey.duplicate(true);result.schema=city.PERSONALIZATION_SCHEMA
	city.WishFulfilment.write_snapshot(city,result)
	city.CreationPolicy.Save.write(city,result)
	return result

static func apply_data(city: RefCounted, data: Dictionary, preserve_issued_ids: bool) -> bool:
	city.CreationPolicy.Save.apply(city,data,preserve_issued_ids)
	city.biome_seed=data.get("biome_seed",{}).duplicate();city._biome_revision=-1;city._biome_bonuses={}
	if not preserve_issued_ids:city.archive_unlocks.assign(data.get("archive_unlocks",[]))
	city.music_mode=str(data.get("music_mode",""))
	city.era_modifiers.assign(data.get("era_modifiers",[]))
	city.HarmonyJourney.apply(city,data,preserve_issued_ids)
	city.microclimate=str(data.get("microclimate",""))
	city.automatic_neighborhoods=bool(data.get("automatic_neighborhoods",false))
	# Editing history restores geometry; completed daily visits remain history.
	if not preserve_issued_ids:
		city._transit_corridor_houses.clear();city._transit_corridor_revision=-1
		city._special_sites.clear();city._special_site_key.clear()
		city.signature_unlocks.assign(data.get("signature_unlocks",[]))
		city.district_answers.assign(data.get("district_answers",[]))
		city.era_answers.assign(data.get("era_answers",[]))
		city.regional_trips.assign(data.get("regional_trips",[]))
		city.regional_replies.assign(data.get("regional_replies",[]))
		city._region_network.clear();city._region_network_revision=-1;city._invalidate_regional_echo()
		city._region_plant_visibility={};city._region_visibility_revision=-1
		city.building_quality=data.get("building_quality",{}).duplicate(true)
		for row in city.building_quality.values(): row.level_tier=int(row.level_tier)
		city.house_concerts=data.get("house_concerts",{}).duplicate(true)
		for row in city.house_concerts.values(): row.concerts=int(row.concerts);row.relays=int(row.relays)
		city.era_unlocks.assign(data.get("era_unlocks", ["pastoral"]))
		city.house_clockwork=data.get("house_clockwork",{}).duplicate()
		for id in city.house_clockwork:city.house_clockwork[id]=int(city.house_clockwork[id])
		city.house_culture = data.get("house_culture", {}).duplicate()
		for id in city.house_culture: city.house_culture[id] = int(city.house_culture[id])
		city.growth_memories.assign(data.get("growth_memories", []))
		var progress: Dictionary = data.get("life_progress", {"purchases":0,"gatherings":0})
		city.life_progress = {"purchases":int(progress.get("purchases",0)),"gatherings":int(progress.get("gatherings",0)),"concerts":int(progress.get("concerts",0)),"tea_parties":int(progress.get("tea_parties",0)),"tea_visits":int(progress.get("tea_visits",0)),"auto_concerts":int(progress.get("auto_concerts",0))}
		city.cafe_credits = data.get("cafe_credits", {}).duplicate(true)
		city.cafe_progress = data.get("cafe_progress", {}).duplicate(true)
		city.matinee_credits = data.get("matinee_credits", {}).duplicate(true)
		city.matinee_progress = data.get("matinee_progress", {}).duplicate(true)
		city.matinee_pending = data.get("matinee_pending", {}).duplicate(true)
		city.matinee_cooldown = float(data.get("matinee_cooldown", 0.0))
		city.matinee_last_venue = str(data.get("matinee_last_venue", ""))
		for row in city.matinee_credits.values():
			row.earned = int(row.earned)
			row.spent = int(row.spent)
		for row in city.matinee_progress.values():
			row.completed = int(row.completed)
			row.sponsors = int(row.sponsors)
		for row in city.cafe_credits.values():
			row.earned = int(row.earned)
			row.spent = int(row.spent)
		for row in city.cafe_progress.values():
			row.groups = int(row.groups)
			row.visits = int(row.visits)
		city._wish_epoch+=1
		city.wish_rewards=data.get("wish_rewards",{}).duplicate(true)
		for row:Dictionary in city.wish_rewards.values():
			for kind:String in row:row[kind]=int(row[kind])
		city.bakery_supply = data.get("bakery_supply", {}).duplicate(true)
		city.landmark_bread=data.get("landmark_bread",{}).duplicate(true)
		for row:Dictionary in city.landmark_bread.values():
			row.batches=int(row.batches)
			for id:String in row.gifts:row.gifts[id]=int(row.gifts[id])
		city.workshop_supply = data.get("workshop_supply", {}).duplicate(true)
		city.workshop_yield_remainder=data.get("workshop_yield_remainder",{}).duplicate()
		city.house_improvements = data.get("house_improvements", {}).duplicate()
		city.venue_commissions = data.get("venue_commissions", {}).duplicate(true)
		for row in city.venue_commissions.values():
			for key in ["requested", "delivered", "used"]: row[key] = int(row[key])
		for id in city.house_improvements: city.house_improvements[id] = int(city.house_improvements[id])
		for row in city.workshop_supply.values():
			for key in ["stock", "produced", "delivered"]: row[key] = int(row[key])
		city.resonance_afterglow = data.get("resonance_afterglow", {}).duplicate()
		for row in city.bakery_supply.values():
			for key in ["stock", "produced", "served"]:
				row[key] = int(row[key])
		city.WishFulfilment.restore_locks(city)
		city.journey_checkpoint = data.get("journey_checkpoint",{}).duplicate(true)
		if not city.journey_checkpoint.is_empty():
			city.journey_checkpoint.schema = int(city.journey_checkpoint.schema)
			if city.journey_checkpoint.has("relay"):
				city.journey_checkpoint.relay.index = int(city.journey_checkpoint.relay.index)
				city.journey_checkpoint.relay.concerts_before = int(city.journey_checkpoint.relay.concerts_before)
			for person in city.journey_checkpoint.residents:
				if person.has("cafe_visit"): person.cafe_visit.seat = int(person.cafe_visit.seat)
			for worker in city.journey_checkpoint.get("bakery_workers", []):
				worker.batches = int(worker.batches)
			for worker in city.journey_checkpoint.get("workshop_workers", []):
				worker.deliveries = int(worker.deliveries)
	city.houses.assign(data.houses.duplicate(true))
	city.roads.assign(data.roads.duplicate(true))
	city.terrain_strokes.assign(data.get("terrain_strokes",[]).duplicate(true))
	for stroke: Dictionary in city.terrain_strokes:
		stroke.radius=float(stroke.radius)
		stroke.strength=float(stroke.strength)
		for i in range(stroke.points.size()):
			var point:=Vector2(float(stroke.points[i][0]),float(stroke.points[i][1]))
			stroke.points[i]=[point.x,point.y]
	city.waters.assign(data.get("waters", []).duplicate(true))
	for water in city.waters:
		water.seed = int(water.seed)
		water.width = float(water.width)
		for index in range(water.points.size()):
			var point := Vector2(float(water.points[index][0]), float(water.points[index][1]))
			water.points[index] = [point.x, point.y]
	city._next_water_id = int(data.get("next_water_id", 1))
	city.districts.assign(data.get("districts", []).duplicate(true))
	city.musical_links.assign(data.get("musical_links", []).duplicate(true))
	for district in city.districts:
		district.width = Vector2(float(district.width), 0).x
		for index in range(district.points.size()):
			var point := Vector2(float(district.points[index][0]), float(district.points[index][1]))
			district.points[index] = [point.x, point.y]
	city._next_district_id = int(data.get("next_district_id", 1))
	# JSON numbers enter as floats; restore the authoritative integer fields.
	for house in city.houses:
		if house.has("bend_angle_deg"):house.bend_angle_deg=float(house.bend_angle_deg)
		if house.has("bend_axis"):house.bend_axis=int(house.bend_axis)
		if house.has("corner_bevel"):house.corner_bevel=int(house.corner_bevel)
		for field:String in ["overhang","balcony_arc","organic_facade"]:
			if house.has(field):house[field]=int(house[field])
		if house.has("yaw"):house.yaw=float(house.yaw)
		if house.has("base_y"): house.base_y=float(house.base_y)
		house.name = house.get("name", "石榴巷%s号" % house.id.substr(1))
		house.role = house.get("role", "residential")
		house.bakery_open = house.get("bakery_open", true)
		house.workshop_open = house.get("workshop_open", true)
		house.auto_matinee = house.get("auto_matinee", false)
		house.palette = int(house.palette)
		house.seed = int(house.seed)
		var origin := Vector2(float(house.origin[0]), float(house.origin[1]))
		house.origin = [origin.x, origin.y]
		for cell in house.cells:
			cell.source = cell.get("source", "seed")
			cell.x = int(cell.x)
			cell.z = int(cell.z)
			cell.level = int(cell.level)
	for road in city.roads:
		road.source = road.get("source", "seed")
		road.width = float(road.width)
		road.bridge = road.get("bridge", false)
		for i in range(road.points.size()):
			var point := Vector2(float(road.points[i][0]), float(road.points[i][1]))
			road.points[i] = [point.x, point.y]
	var had_plants := data.get("plants") is Array
	city.plants.clear()
	if had_plants:
		city.plants.assign(data.plants.duplicate(true))
		for plant in city.plants:
			var position := Vector2(float(plant.position[0]), float(plant.position[1]))
			plant.position = [position.x,position.y]
			plant.kind = str(plant.kind)
			plant.scale = Vector2(float(plant.scale),0).x
			plant.seed = int(plant.seed)
			plant.source = plant.get("source", "seed")
	city._next_house_id = int(data.next_house_id)
	city._next_cell_id = int(data.next_cell_id)
	city._next_road_id = int(data.next_road_id)
	var max_plant := 0
	for plant in city.plants:
		max_plant = maxi(max_plant, int(str(plant.id).substr(1)))
	var issued: Dictionary = data.get("high_watermark", {"house": city._next_house_id - 1, "cell": city._next_cell_id - 1, "road": city._next_road_id - 1, "plant": max_plant})
	for kind in ["house", "cell", "road", "plant", "water", "district"]:
		var default_issued := max_plant if kind == "plant" else (int(data.get("next_%s_id" % kind, 1)) - 1)
		var issued_value := int(issued.get(kind, default_issued))
		city._high_watermark[kind] = maxi(int(city._high_watermark.get(kind, 0)), issued_value) if preserve_issued_ids else issued_value
	if data.has("next_plant_id"):
		city._next_plant_id = int(data.next_plant_id)
	else:
		city._next_plant_id = max_plant + 1
	return had_plants

static func validate(city: RefCounted, data: Dictionary) -> Dictionary:
	var creative_check:Dictionary=city.CreationPolicy.Save.validate(city,data)
	if not creative_check.ok:return creative_check
	var progress: Variant = data.get("life_progress", {"purchases":0,"gatherings":0})
	if not progress is Dictionary: return city._fail("城市存档生活进展无效")
	for key in ["purchases", "gatherings", "concerts", "tea_parties", "tea_visits", "auto_concerts"]:
		if not city._is_integer(progress.get(key,0)) or progress.get(key,0) < 0:
			return city._fail("城市存档生活进展无效")
	var journeys: Dictionary = city._validate_journey_checkpoint(data.get("journey_checkpoint",{}), data.get("houses"), progress)
	if not journeys.ok: return journeys
	if not city._is_integer(data.get("schema")) or int(data.schema)<city.SCHEMA or int(data.schema)>city.CreationPolicy.Save.SCHEMA:
		return city._fail("不支持的城市存档版本")
	var unlocks: Variant = data.get("era_unlocks", ["pastoral"])
	if not unlocks is Array or unlocks.is_empty() or unlocks.size() > city.Eras.AVAILABLE_COUNT: return city._fail("时代解锁结构无效")
	for i in range(unlocks.size()):
		if unlocks[i] != city.Eras.IDS[i]: return city._fail("时代必须依次开启")
	if (data.has("era_unlocks") or data.has("house_culture")) and data.schema < city.ERA_SCHEMA: return city._fail("时代作品需要新存档版本")
	if (data.has("building_quality") or data.has("house_concerts") or data.has("signature_unlocks") or data.has("district_answers")) and data.schema < city.QUALITY_SCHEMA: return city._fail("品质作品需要新存档版本")
	if data.has("house_clockwork") and data.schema<city.CLOCKWORK_SCHEMA:return city._fail("钟表工艺需要新存档版本")
	if data.has("biome_seed") and (data.schema<city.PERSONALIZATION_SCHEMA or not city.Biomes.valid(data.biome_seed)):return city._fail("声学地貌存档无效")
	if data.has("microclimate") and (data.schema<city.PERSONALIZATION_SCHEMA or data.microclimate not in city.Microclimate.IDS):return city._fail("四时风物存档无效")
	if data.has("harmony_journey") and (data.schema<19 or not city.HarmonyJourney.validate(data.harmony_journey,unlocks)):return city._fail("河湾共鸣手札存档无效")
	if data.has("era_modifiers") and (data.schema<city.PERSONALIZATION_SCHEMA or not city.ScoreModifiers.valid(data.era_modifiers,unlocks,data.get("harmony_journey",{}) if data.get("harmony_journey",{}) is Dictionary else {})):return city._fail("时代乐章铭牌存档无效")
	for id:String in data.get("harmony_journey",{}).get("traditions",[]):
		if city.ScoreModifiers.CHOICES.has(id) and id not in data.get("era_modifiers",[]):return city._fail("手札与时代章程不一致")
	var archive_check:Dictionary=city.ArchiveRewards.validate(data)
	if not archive_check.ok:return archive_check
	var memories: Variant = data.get("growth_memories", [])
	if not memories is Array or memories.size()>Growth.CHAPTERS.size(): return city._fail("城市成长手记结构无效")
	for index in range(memories.size()):
		if not memories[index] is String or memories[index]!=Growth.CHAPTERS[index]: return city._fail("城市成长手记章节顺序无效")
	if data.has("growth_memories") and data.schema<city.JOURNAL_SCHEMA: return city._fail("成长作品需要新存档版本")
	for key in ["revision", "next_house_id", "next_cell_id", "next_road_id"]:
		if not city._is_integer(data.get(key)) or data[key] < (0 if key == "revision" else 1):
			return city._fail("城市存档计数无效")
	if not city._is_integer(data.get("next_plant_id", 1)):
		return city._fail("城市存档植被身份计数无效")
	var next_plant_id := int(data.get("next_plant_id", 1))
	if not city._is_integer(data.get("next_water_id", 1)) or int(data.get("next_water_id", 1)) < 1:
		return city._fail("城市存档水域身份计数无效")
	var next_water_id := int(data.get("next_water_id", 1))
	if not city._is_integer(data.get("next_district_id", 1)) or int(data.get("next_district_id", 1)) < 1:
		return city._fail("城市存档街坊身份计数无效")
	var next_district_id := int(data.get("next_district_id", 1))
	var issued: Variant = data.get("high_watermark", {"house": data.next_house_id - 1, "cell": data.next_cell_id - 1, "road": data.next_road_id - 1, "plant": next_plant_id - 1})
	if not issued is Dictionary:
		return city._fail("城市存档身份高水位无效")
	for kind in ["house", "cell", "road"]:
		if not city._is_integer(issued.get(kind)) or issued[kind] < data["next_%s_id" % kind] - 1:
			return city._fail("城市存档身份高水位无效")
	if next_plant_id < 1 or not city._is_integer(issued.get("plant", 0)) or int(issued.get("plant", 0)) < next_plant_id - 1:
		return city._fail("城市存档植被身份高水位无效")
	if not city._is_integer(issued.get("water", next_water_id - 1)) or int(issued.get("water", next_water_id - 1)) < next_water_id - 1:
		return city._fail("城市存档水域身份高水位无效")
	if not city._is_integer(issued.get("district", next_district_id - 1)) or int(issued.get("district", next_district_id - 1)) < next_district_id - 1:
		return city._fail("城市存档街坊身份高水位无效")
	if not data.get("districts", []) is Array:
		return city._fail("城市存档街坊结构无效")
	if not data.get("waters", []) is Array:
		return city._fail("城市存档水域结构无效")
	if not data.get("houses") is Array or not data.get("roads") is Array:
		return city._fail("城市存档结构无效")
	if not data.get("terrain_strokes",[]) is Array: return city._fail("城市存档地形结构无效")
	if data.get("schema")==city.SCHEMA and not data.get("terrain_strokes",[]).is_empty(): return city._fail("地形作品需要新存档版本")
	for stroke in data.get("terrain_strokes",[]):
		if not stroke is Dictionary: return city._fail("城市存档地形笔画无效")
		if stroke.get("mode")=="plateau" and data.schema<city.PLATEAU_SCHEMA: return city._fail("台地作品需要新存档版本")
		if stroke.get("mode")=="smooth" and data.schema<city.TERRAIN_SMOOTH_SCHEMA: return city._fail("地形柔化作品需要新存档版本")
		if stroke.has("natural") and data.schema<city.TERRAIN_CONTOUR_SCHEMA: return city._fail("自然轮廓作品需要新存档版本")
		var terrain_check: Dictionary = city._validate_terrain_fields(stroke)
		if not terrain_check.ok: return terrain_check
	var ids: Dictionary = {}
	var max_house := 0
	var max_cell := 0
	var max_road := 0
	var max_plant := 0
	var max_water := 0
	var max_district := 0
	for district in data.get("districts", []):
		if not district is Dictionary or not city._valid_id(district.get("id"), "d", ids):
			return city._fail("城市存档街坊身份无效")
		if district.has("era_theme") and (data.schema < city.ERA_SCHEMA or not city.CreationPolicy.data_can_build_era(data,district.era_theme)): return city._fail("街坊时代尚未开启")
		var district_valid: Dictionary = city._validate_district_fields(district)
		if not district_valid.ok:
			return district_valid
		max_district = maxi(max_district, int(district.id.substr(1)))
	if next_district_id <= max_district:
		return city._fail("城市存档街坊身份计数冲突")
	var links: Variant = data.get("musical_links", [])
	if not links is Array: return city._fail("城市存档共鸣连线结构无效")
	if not links.is_empty() and data.schema < city.MUSICAL_LINK_SCHEMA: return city._fail("共鸣连线需要新存档版本")
	var seen_links := {}
	for link in links:
		if not link is Dictionary or link.size() != 2 or not link.get("from") is String or not link.get("to") is String:
			return city._fail("城市存档共鸣连线字段无效")
		if not ids.has(link.from) or not ids.has(link.to) or link.from == link.to:
			return city._fail("城市存档共鸣连线街坊无效")
		if link != city._canonical_musical_link(link.from, link.to): return city._fail("城市存档共鸣连线顺序无效")
		var link_key: String = link.from + "_" + link.to
		if seen_links.has(link_key): return city._fail("城市存档共鸣连线重复")
		seen_links[link_key] = true
	var water_rows: Array = data.get("waters", [])
	for water in water_rows:
		if not water is Dictionary or not city._valid_id(water.get("id"), "w", ids):
			return city._fail("城市存档水域身份无效")
		if not city._is_integer(water.get("seed")) or water.get("source") != "player":
			return city._fail("城市存档水域来源或种子无效")
		var water_valid: Dictionary = city._validate_water_fields(water)
		if not water_valid.ok:
			return water_valid
		max_water = maxi(max_water, int(water.id.substr(1)))
	if next_water_id <= max_water:
		return city._fail("城市存档水域身份计数冲突")
	for house in data.houses:
		if not house is Dictionary or not city._valid_id(house.get("id"), "h", ids):
			return city._fail("城市存档房屋身份无效")
		for field:String in ["overhang","balcony_arc"]:
			if house.has(field) and (data.schema<city.PERSONALIZATION_SCHEMA or not preload("res://scripts/world/city_creation_balcony_plan.gd").valid(house[field])):return city._fail("外挑字段无效")
		if int(house.get("overhang",0))>0 and int(house.get("balcony_arc",0))>0:return city._fail("外挑与阳台不能占同一立面")
		if int(house.get("overhang",0))+int(house.get("balcony_arc",0))>0 and (not house.has("organic_facade") or not house.has("organic_cell_id")):return city._fail("外挑缺少宿主身份")
		if house.has("organic_facade") and (not city._is_integer(house.organic_facade) or house.organic_facade<0 or house.organic_facade>3):return city._fail("微雕立面无效")
		if house.has("organic_cell_id") and (not house.organic_cell_id is String or not house.get("cells",[]) is Array or not house.get("cells",[]).any(func(c):return c is Dictionary and str(c.get("id",""))==house.organic_cell_id)):return city._fail("微雕宿主无效")
		if house.has("bend_axis") and (data.schema<city.PERSONALIZATION_SCHEMA or not city._is_integer(house.bend_axis) or house.bend_axis<0 or house.bend_axis>3):return city._fail("侧翼铰链字段无效")
		if house.has("bend_angle_deg") and (data.schema<city.PERSONALIZATION_SCHEMA or not preload("res://scripts/world/city_creation_house_hinge.gd").valid(house.bend_angle_deg)):return city._fail("建筑折角字段无效")
		if house.has("organic_manual") and (data.schema<city.PERSONALIZATION_SCHEMA or not house.organic_manual is bool):return city._fail("微雕手选字段无效")
		if house.has("corner_bevel") and (data.schema<city.PERSONALIZATION_SCHEMA or not preload("res://scripts/world/city_creation_organic_form.gd").valid(house.corner_bevel)):return city._fail("墙角微雕字段无效")
		if house.has("yaw") and (data.schema<city.PERSONALIZATION_SCHEMA or not city._is_number(house.yaw) or float(house.yaw)<-PI or float(house.yaw)>=PI):return city._fail("房屋转向字段无效")
		if house.has("acoustic_style"):
			if data.schema<city.PERSONALIZATION_SCHEMA or house.acoustic_style not in city.DISTRICT_STYLES:return city._fail("聚落曲风字段无效")
		if house.has("temperament"):
			if data.schema<city.PERSONALIZATION_SCHEMA or house.temperament not in ["andante","allegro","largo"]:return city._fail("建筑律动字段无效")
		if house.has("architecture"):
			if data.schema<city.PERSONALIZATION_SCHEMA or not preload("res://scripts/world/city_creation_architecture_choice.gd").valid(house.architecture):return city._fail("建筑原型字段无效")
		if house.has("base_y"):
			if data.schema<city.ELEVATION_SCHEMA: return city._fail("高地房屋需要新存档版本")
			if not city._is_number(house.base_y) or float(house.base_y)<0.0 or float(house.base_y)>6.0 or absf(float(house.base_y)/0.05-roundf(float(house.base_y)/0.05))>0.00001: return city._fail("城市存档房屋海拔无效")
		max_house = maxi(max_house, int(house.id.substr(1)))
		if not city._valid_point(house.get("origin")) or not house.get("cells") is Array or not city._is_integer(house.get("palette")) or house.palette < 0 or not city._is_integer(house.get("seed")):
			return city._fail("城市存档房屋字段无效")
		if house.has("finish"):
			if data.schema<city.JOURNAL_SCHEMA: return city._fail("饰色作品需要新存档版本")
			if not house.finish is String or not Growth.FINISHES.has(house.finish): return city._fail("城市存档房屋饰色无效")
			if not city.ArchiveRewards.finish_available(house.finish,memories,data.get("archive_unlocks",[])):return city._fail("城市存档房屋饰色尚未获得")
		if house.has("style"):
			if data.schema<city.BUILDING_SCHEMA: return city._fail("建筑样式作品需要新存档版本")
			if not house.style is String or house.style not in city.HOUSE_STYLES: return city._fail("城市存档建筑样式无效")
			if house.style=="round_tower" and data.schema<city.ROUND_TOWER_SCHEMA: return city._fail("圆塔作品需要新存档版本")
		if not house.get("name", "默认名字") is String or house.get("name", "默认名字").strip_edges().is_empty() or house.get("role", "residential") not in city.HOUSE_ROLES:
			return city._fail("城市存档名字或用途无效")
		if (house.get("role", "") == "atelier" or house.has("era_theme")) and data.schema < city.ERA_SCHEMA: return city._fail("时代房屋需要新存档版本")
		if house.get("role", "") == "atelier" and not city.CreationPolicy.data_can_build_era(data,"renaissance"): return city._fail("书院尚未开启")
		if house.get("role","")=="clockmaker" and (data.schema<city.CLOCKWORK_SCHEMA or not city.CreationPolicy.data_can_build_era(data,"clockwork")) and not (house.get("signature","")=="clockwork_depot" and city.Biomes.grants(data.get("biome_seed",{}),"clockwork_depot")):return city._fail("钟表工坊尚未开启")
		if house.get("role","")=="symphony_hall" and (data.schema<city.MODERN_SCHEMA or not city.CreationPolicy.data_can_build_era(data,"modern_eco")) and not (house.get("signature","")=="floating_amphitheater" and city.Biomes.grants(data.get("biome_seed",{}),"floating_amphitheater")):return city._fail("交响音乐厅尚未开启")
		if house.has("era_theme") and (house.era_theme not in city.Eras.IDS or (not city.CreationPolicy.data_can_build_era(data,house.era_theme) and not city.Biomes.grants(data.get("biome_seed",{}),str(house.get("signature",""))))): return city._fail("房屋时代尚未开启")
		if house.has("signature") and data.schema<city.QUALITY_SCHEMA:return city._fail("地标需要新存档版本")
		if house.has("custom_colors"):
			var colors:Variant=house.custom_colors
			if data.schema<city.PERSONALIZATION_SCHEMA or not colors is Dictionary or colors.size()!=2:return city._fail("自选配色格式无效")
			for part:String in ["wall","roof"]:
				if not colors.get(part) is String or colors[part].length()!=6 or not colors[part].is_valid_hex_number(false):return city._fail("自选配色颜色无效")
		if not house.get("auto_matinee", false) is bool: return city._fail("自动巡演开关无效")
		if not house.get("workshop_open", true) is bool:
			return city._fail("城市存档工坊开关无效")
		if not house.get("bakery_open", true) is bool:
			return city._fail("城市存档烘焙开关无效")
		for cell in house.cells:
			if not cell is Dictionary or not city._valid_id(cell.get("id"), "c", ids):
				return city._fail("城市存档模块身份无效")
			max_cell = maxi(max_cell, int(cell.id.substr(1)))
			for key in ["x", "z", "level"]:
				if not city._is_integer(cell.get(key)):
					return city._fail("城市存档模块坐标无效")
			if cell.level < 0 or cell.get("kind") not in ["room", "terrace"]:
				return city._fail("城市存档模块类型无效")
			if cell.get("source", "seed") not in ["seed", "player", "new_house"]:
				return city._fail("城市存档模块来源无效")
		var valid: Dictionary = city._validate_house(house)
		if not valid.ok:
			return valid
	for i in range(data.houses.size()):
		for j in range(i):
			if city._pair_overlaps(data.houses[i], data.houses[j]):
				return city._fail("城市存档房屋重叠")
	var afterglow: Variant = data.get("resonance_afterglow", {})
	if not afterglow is Dictionary: return city._fail("城市存档共鸣余韵无效")
	var existing_houses := {}
	for house in data.houses: existing_houses[str(house.id)] = true
	for house_id in afterglow:
		var glow_ids := {}
		if not city._valid_id(house_id, "h", glow_ids) or int(house_id.substr(1)) > int(issued.house) or not existing_houses.has(house_id):
			return city._fail("城市存档共鸣余韵房屋无效")
		var maximum: float=180.0 if int(data.schema)>=city.CLOCKWORK_SCHEMA else 120.0
		if int(data.schema)>=city.PLANNING_SCHEMA:maximum*=2.
		if "lasting_resonance" in data.get("era_modifiers",[]):maximum*=1.5
		if "twilight_tea_pavilion" in data.get("harmony_journey",{}).get("traditions",[]):maximum*=1.25
		var quality: Variant=data.get("building_quality",{}).get(house_id,{}) if data.get("building_quality",{}) is Dictionary else {}
		if int(data.schema)>=city.QUALITY_CONTEXT_SCHEMA and quality is Dictionary and city._is_integer(quality.get("level_tier")) and quality.level_tier==5:maximum*=2.
		if not city._is_number(afterglow[house_id]) or float(afterglow[house_id]) <= 0.0 or float(afterglow[house_id]) > maximum:
			return city._fail("城市存档共鸣余韵时间无效")
	var landmark_check:Dictionary=city.SaveValidation._validate_landmark_bread(data,int(issued.house))
	if not landmark_check.ok:return landmark_check
	var trips_check:Dictionary=city.SaveValidation._validate_regional_trips(data,int(issued.get("district",0)))
	if not trips_check.ok:return trips_check
	var cafe_check: Dictionary = city._validate_cafe_progress(data, issued)
	if not cafe_check.ok: return cafe_check
	var matinee_check: Dictionary = city._validate_matinee(data, issued)
	if not matinee_check.ok: return matinee_check
	var supply: Variant = data.get("bakery_supply", {})
	if not supply is Dictionary:
		return city._fail("城市存档面包供给结构无效")
	for house_id in supply:
		var supply_ids := {}
		if not city._valid_id(house_id, "h", supply_ids) or int(house_id.substr(1)) > int(issued.house):
			return city._fail("城市存档面包供给房屋无效")
		var row: Variant = supply[house_id]
		if not city.WishFulfilment.valid_supply_row(row,3,int(data.schema)):
			return city._fail("城市存档面包供给字段无效")
		for key in ["stock", "produced", "served"]:
			if not city._is_integer(row.get(key)) or row[key] < 0:
				return city._fail("城市存档面包供给计数无效")
		if row.served > row.produced or row.stock != row.produced - row.served:
			return city._fail("城市存档面包供给收支不一致")
	var craft_check: Dictionary = city._validate_craft_supply(data, int(issued.house))
	if not craft_check.ok: return craft_check
	var wish_check:Dictionary=city.WishFulfilment.validate(city,data,int(issued.house))
	if not wish_check.ok:return wish_check
	if not preload("res://scripts/world/city_creation_vignette_validation.gd").issued_valid(data.get("harmony_journey",{}),int(issued.house),int(issued.get("plant",0))):return city._fail("林间奇遇引用尚未发出的身份")
	var yields:Variant=data.get("workshop_yield_remainder",{})
	if not yields is Dictionary or (data.has("workshop_yield_remainder") and data.schema<19):return city._fail("工艺产出余数版本或结构无效")
	for id:Variant in yields:
		var used:Dictionary={}
		if not city._valid_id(id,"h",used) or int(id.substr(1))>int(issued.house) or not city._is_number(yields[id]) or float(yields[id])!=.5:return city._fail("工艺产出余数无效")
		if int(data.get("workshop_supply",{}).get(id,{}).get("produced",0))<1:return city._fail("工艺余数缺少真实生产记录")
	var quality_check: Dictionary=city.Quality.validate(city,data,issued)
	if not quality_check.ok: return quality_check
	var era_check:Dictionary=city.Eras.validate_answers(city,data,issued)
	if not era_check.ok:return era_check
	var signature_check: Dictionary=city.Signatures.validate(city,data,issued)
	if not signature_check.ok:return signature_check
	# Old chapter-earned rights remain valid. New rights use the conserved tea
	# and answer ledgers; issued IDs retain history after construction undo.
	if unlocks.size()>1 and not memories.has("dawn"):
		if int(issued.house)<city.Eras.RENAISSANCE_HOUSES or int(progress.get("tea_parties",0))<1 or data.get("district_answers",[]).is_empty():
			return city._fail("文艺复兴尚未达成解锁里程碑")
	var grand_check:Dictionary=city.GrandFestival.validate(city,data)
	if not grand_check.ok:return grand_check
	for road in data.roads:
		if road is Dictionary and road.has("decoration") and (data.schema<city.PERSONALIZATION_SCHEMA or not road.decoration is String or road.decoration not in preload("res://scripts/world/city_creation_road_decoration.gd").IDS):return city._fail("道路街具字段无效")
		if not road is Dictionary or not city._valid_id(road.get("id"), "r", ids):
			return city._fail("城市存档道路身份无效")
		if road.has("roundabouts"):
			if data.schema<city.ROAD_NETWORK_SCHEMA or not road.roundabouts is Array: return city._fail("环岛存档版本或结构无效")
			for marker: Variant in road.roundabouts:
				if not marker is Dictionary or marker.size()!=2 or not city._valid_point(marker.get("center")) or not city._is_number(marker.get("radius")) or not is_equal_approx(float(marker.radius),city.Roundabouts.RADIUS): return city._fail("环岛位置或半径无效")
				var site: Dictionary=city.Roundabouts.site(city,Vector2(marker.center[0],marker.center[1]),float(marker.radius),data.houses,water_rows)
				if not site.ok: return site
		if road.has("style"):
			if str(road.style) in preload("res://scripts/world/city_creation_road_paving.gd").NEW_STYLES and data.schema<city.PERSONALIZATION_SCHEMA:return city._fail("新铺装需要版本19存档")
			if data.schema<city.ROAD_STYLE_SCHEMA: return city._fail("石板宽街需要新存档版本")
			if not road.style is String or road.style not in city.ROAD_STYLES: return city._fail("城市存档道路样式无效")
			if road.style in ["cobble","avenue","tram"] and data.schema<city.ROAD_NETWORK_SCHEMA: return city._fail("新道路样式需要新存档版本")
			var style_width: float=city.RoadUpgrade.width_for(road.style)
			# Earlier authored avenues and tram streets retain their exact footprint.
			var legacy_width: bool=road.style in ["avenue","tram"] and city._is_number(road.get("width")) and is_equal_approx(float(road.width),2.0)
			if not city._is_number(road.get("width")) or (absf(float(road.width)-style_width)>0.00001 and not legacy_width and not (data.schema>=city.PERSONALIZATION_SCHEMA and road.get("sized",false)==true and road.width in city.RoadUpgrade.sizes_for(str(road.style)))): return city._fail("城市存档道路样式与宽度不符")
		if road.has("sized") and (data.schema<city.PERSONALIZATION_SCHEMA or not road.sized is bool or not road.sized or road.get("width") not in city.RoadUpgrade.sizes_for(str(road.get("style","path")))):return city._fail("道路尺寸无效")
		max_road = maxi(max_road, int(road.id.substr(1)))
		if not road.get("points") is Array or road.points.size() < 2 or not city._is_number(road.get("width")) or road.width <= 0:
			return city._fail("城市存档道路字段无效")
		if not road.get("bridge", false) is bool:
			return city._fail("城市存档桥梁字段无效")
		if road.get("source", "seed") not in ["seed", "player"]:
			return city._fail("城市存档道路来源无效")
		for point in road.points:
			if not city._valid_point(point):
				return city._fail("城市存档道路位置无效")
	if data.has("plants"):
		if not data.plants is Array:
			return city._fail("城市存档植被结构无效")
		for plant in data.plants:
			if not plant is Dictionary or not city._valid_id(plant.get("id"), "p", ids):
				return city._fail("城市存档植被身份无效")
			max_plant = maxi(max_plant, int(str(plant.id).substr(1)))
			if not city._valid_point(plant.get("position")) or not WORLD_RECT.has_point(Vector2(float(plant.position[0]), float(plant.position[1]))):
				return city._fail("城市存档植被位置无效")
			if plant.get("kind") not in city.GardenSpecies.IDS or not city._is_number(plant.get("scale")) or float(plant.scale) <= 0.0 or float(plant.scale) > 8.0 or not city._is_integer(plant.get("seed")):
				return city._fail("城市存档植被字段无效")
			if plant.kind not in ["olive","cypress","shrub"] and data.schema<city.PERSONALIZATION_SCHEMA:return city._fail("新植物需要新版存档")
			if plant.get("source", "seed") not in ["seed", "player"]:
				return city._fail("城市存档植被来源无效")
			# Authored plants may be submerged by a later player stroke and
			# retained as hidden intent. The immutable original river has no
			# such edit history, so an initial plant inside it is invalid.
			if city._water_clearance_in(Vector2(float(plant.position[0]), float(plant.position[1])), []) <= 0.0:
				return city._fail("城市存档植被不能位于河水中")
	if data.next_house_id <= max_house or data.next_cell_id <= max_cell or data.next_road_id <= max_road or next_plant_id <= max_plant:
		return city._fail("城市存档身份计数冲突")
	# Validate the candidate world, never the currently open city. Restoring
	# may not bypass the same land, wall-clearance and bridge rules as edits.
	for house in data.houses:
		var site: Dictionary = city._validate_house_site(house, [], water_rows)
		if not site.ok:
			return site
	for road in data.roads:
		var site: Dictionary = city._validate_road_site(road.points, float(road.width), data.houses, water_rows)
		if not site.ok:
			return site
		if road.get("bridge", false) != site.bridge:
			return city._fail("城市存档桥梁标记与占地不一致")
	var neighborhoods:Dictionary=city.AutoNeighborhoods.validate(city,data)
	if not neighborhoods.ok:return neighborhoods
	var movement:Dictionary=city.LandmarkMovement.validate(city,data)
	if not movement.ok:return movement
	var ground_landmarks:Dictionary=city.PlacedLandmarks.validate_geometry(city,data)
	if not ground_landmarks.ok:return ground_landmarks
	return {"ok": true, "message": ""}

static func read(city: RefCounted, path: String) -> Dictionary:
	if not FileAccess.file_exists(path):
		return city._fail("还没有保存的城市")
	var file := FileAccess.open(path, FileAccess.READ)
	if file == null:
		return city._fail("无法读取城市存档")
	var json := JSON.new()
	var error := json.parse(file.get_as_text())
	file.close()
	if error != OK or not json.data is Dictionary:
		return city._fail("城市存档损坏，当前城市已保留")
	var result := validate(city,json.data)
	if result.ok:
		result.data = json.data
	return result

static func write(city: RefCounted, path: String) -> Dictionary:
	var temp_path := path + ".tmp"
	var file := FileAccess.open(temp_path, FileAccess.WRITE)
	if file == null:
		return city._fail("无法写入城市存档")
	file.store_string(JSON.stringify(snapshot(city), "\t", true, true))
	var write_error := file.get_error()
	file.close()
	if write_error != OK:
		return city._fail("城市存档写入失败")
	var check := read(city,temp_path)
	if not check.ok:
		return city._fail("城市存档回读失败")
	var absolute := ProjectSettings.globalize_path(path)
	var backup_dir := absolute.get_base_dir().path_join("废弃/城市存档")
	if DirAccess.make_dir_recursive_absolute(backup_dir) != OK:
		return city._fail("无法创建城市备份目录")
	var backup := backup_dir.path_join(absolute.get_file() + ".previous")
	if FileAccess.file_exists(path):
		if FileAccess.file_exists(backup):
			var archive := backup + ".%d" % Time.get_ticks_usec()
			if DirAccess.rename_absolute(backup, archive) != OK:
				return city._fail("无法保留上一份城市备份")
		if DirAccess.rename_absolute(absolute, backup) != OK:
			return city._fail("无法备份当前城市")
	if DirAccess.rename_absolute(ProjectSettings.globalize_path(temp_path), absolute) != OK:
		if FileAccess.file_exists(backup):
			DirAccess.rename_absolute(backup, absolute)
		return city._fail("无法发布城市存档")
	return {"ok": true, "message": "城市已保存", "path": path}
