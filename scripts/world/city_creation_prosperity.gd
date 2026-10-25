class_name CityCreationProsperity
extends RefCounted
const Rules=preload("res://scripts/world/city_creation_tradition_rules.gd")
const Wonders=preload("res://scripts/world/city_creation_street_wonder_plan.gd")
## Foundation-inspired Site Blessings & Household Harmony Tiers (SEMANTIC_GUIDE.md).
## Purely positive emergent rules: water/forest/promenade proximity boosts workshops,
## and fulfilled resident needs (Food + Tea + Craft) elevate household harmony tiers (0..3).

static func bakery_blessing(state: RefCounted, bakery_id: String) -> Dictionary:
	for house: Dictionary in state.houses:
		if str(house.id) != bakery_id:
			continue
		var origin := Vector2(float(house.origin[0]), float(house.origin[1]))
		var water_dist := float(state.water_clearance(origin))
		var near_water := water_dist < Rules.water_radius(state)
		var near_fountain := false
		for court: Dictionary in ([] if near_water else state.courtyard_plans()):
			var fountain: Dictionary = court.get("fountain", {})
			if not fountain.is_empty() and (bakery_id in court.get("members", []) or origin.distance_to(Vector2(fountain.at)) < Rules.water_radius(state)):
				near_fountain = true
				break
		var scenic := Wonders.supports(state,bakery_id)
		var active := near_water or near_fountain or scenic
		return {
			"blessed": active,
			"kind": "water_mill" if near_water else ("courtyard_spring" if near_fountain else "street_spring" if scenic else "none"),
			"speed_multiplier": 1.+.35*float(state.biome_bonus(bakery_id).get("water_bonus",1.)) if active else 1.0,
			"bonus_batch": int(state.biome_bonus(bakery_id).get("water_bonus",1.)) if active else 0,
			"label": ("沙洲活水加持 · 烘焙提速70% · 每炉+2份" if float(state.biome_bonus(bakery_id).get("water_bonus",1.))>1. else "💧 活水磨坊加持 · 烘焙提速35% · 每炉+1份") if active else "靠近河岸或喷泉内院可获活水磨坊加持",
		}
	return {"blessed": false, "speed_multiplier": 1.0, "bonus_batch": 0, "label": ""}

static func workshop_blessing(state: RefCounted, workshop_id: String) -> Dictionary:
	for house: Dictionary in state.houses:
		if str(house.id) != workshop_id:
			continue
		var origin := Vector2(float(house.origin[0]), float(house.origin[1]))
		var trees := 0
		for plant: Dictionary in state.plants:
			if str(plant.get("kind", "")) in ["olive", "cypress", "golden_tree"]:
				var pt := Vector2(float(plant.position[0]), float(plant.position[1]))
				if pt.distance_to(origin) <= Rules.tree_radius(state) and bool(state.vegetation_visible(plant)):
					trees += 1
		var palace:=bool(state.planning_bonus(workshop_id).get("natural",false))
		var scenic := Wonders.supports(state,workshop_id)
		var active := trees >= Rules.tree_count(state) or palace or scenic
		return {
			"blessed": active,
			"trees": trees,
			"speed_multiplier": 1.35 if active else 1.0,
			"label": "翡翠花海良木加持" if palace else ("街角共创加持 · 匠作提速35%" if scenic and trees<Rules.tree_count(state) else "良木已成 · %d棵相伴"%trees if active else "种下%d棵乔木唤醒良木（当前%d/%d）"%[Rules.tree_count(state),trees,Rules.tree_count(state)]),
		}
	return {"blessed": false, "speed_multiplier": 1.0, "label": ""}

static func house_harmony(state: RefCounted, house_id: String) -> Dictionary:
	# Credits are earned by this household's real visits, including spent credits.
	# A citywide purchase or tea gathering must never upgrade unrelated homes.
	var food_credit: Dictionary = state.cafe_credits.get(house_id, {})
	var tea_credit: Dictionary = state.matinee_credits.get(house_id, {})
	var has_food := int(food_credit.get("earned", 0)) > 0
	var has_social := int(food_credit.get("spent", 0)) > 0 or int(tea_credit.get("earned", 0)) > 0 or float(state.afterglow_remaining(house_id)) > 0.0
	var craft_level := int(state.improvement_level(house_id))
	var has_craft := craft_level >= 1
	var tier := int(has_food) + int(has_social) + int(has_craft)
	var titles := ["静候晨曲", "麦香初暖", "茶叙繁花", "百鸟和鸣"]
	return {
		"house_id": house_id,
		"tier": tier,
		"title": titles[clampi(tier, 0, 3)],
		"food": has_food,
		"social": has_social,
		"craft": has_craft,
		"craft_level": craft_level,
		"harmonic_gain_db": 3.5 if tier >= 2 else 0.0,
	}

static func city_harmony_summary(state: RefCounted) -> Dictionary:
	var total_tier := 0
	var count := 0
	var tier_counts := {0: 0, 1: 0, 2: 0, 3: 0}
	for house: Dictionary in state.houses:
		if str(house.get("role", "residential")) != "residential":
			continue
		var info := house_harmony(state, str(house.id))
		var t := int(info.tier)
		total_tier += t
		count += 1
		tier_counts[t] = int(tier_counts.get(t, 0)) + 1
	var avg := float(total_tier) / float(maxi(1, count))
	return {
		"residential_count": count,
		"average_tier": avg,
		"tier_counts": tier_counts,
		"terrace_stem_bonus_db": 3.5 if count > 0 and avg >= 2.0 else 0.0,
	}


static func cafe_blessing(state: RefCounted, cafe_id: String) -> Dictionary:
	for house: Dictionary in state.houses:
		if str(house.id) != cafe_id: continue
		var origin := Vector2(float(house.origin[0]), float(house.origin[1]))
		var active := Wonders.supports(state,cafe_id)
		for road: Dictionary in state.roads:
			if str(road.get("style", "path")) not in ["promenade","avenue"] or float(road.width)<1.75: continue
			if float(state._water_stroke_distance(origin, road.points)) < float(road.width) * 0.5 + 3.0:
				active = true
				break
		if not active:
			for water: Dictionary in state.waters:
				if str(water.get("kind", "channel")) == "pond" and float(state._water_stroke_distance(origin, water.points)) - float(water.width) * 0.5 < 4.5:
					active = true
					break
		return {"blessed":active, "afterglow_extension":45.0 if active else 30.0, "label":"雅集风光加持 · 茶叙余韵延长45秒" if active else "临石板灯街或池塘可让茶叙余韵延长45秒"}
	return {"blessed":false, "afterglow_extension":30.0, "label":""}
