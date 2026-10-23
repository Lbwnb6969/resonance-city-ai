extends RefCounted
## All rules derive from existing authored cards. No second card or save ledger.
static func has(city:RefCounted,id:String)->bool:
	return id in city.harmony_journey.get("traditions",[]) or id in city.era_modifiers
static func stair_rise(city:RefCounted)->float:
	return .65 if has(city,"stone_step_carillon") else 1.
static func water_radius(city:RefCounted)->float:
	return 6. if has(city,"warm_hearth_ballad") or has(city,"lantern_bridge_echo") else 4.5
static func tree_count(city:RefCounted)->int:
	return 2 if has(city,"sylvan_luthier_guild") else 3
static func tree_radius(city:RefCounted)->float:
	return 10. if has(city,"woodland_workbench") else 8.
static func bridge_distance(city:RefCounted)->float:
	return 9. if has(city,"cloud_gallery") else 7.2
static func geometry_key(city:RefCounted)->Array:
	return [stair_rise(city),bridge_distance(city),has(city,"garden_salons")]
static func chime_wave(city:RefCounted,wave:Dictionary)->Dictionary:
	if not has(city,"brass_orchard") or wave.is_empty():return wave
	var result:=wave.duplicate()
	for id:String in city.house_clockwork:
		var index:int=city._house_index(id)
		if index<0 or not wave.has(id):continue
		var at:=Vector2(city.houses[index].origin[0],city.houses[index].origin[1])
		for house:Dictionary in city.houses:
			var distance:=at.distance_to(Vector2(house.origin[0],house.origin[1]))
			if distance>12.:continue
			var target:=str(house.id)
			result[target]=maxf(float(result.get(target,0.)),float(wave[id])*(1.-distance/18.))
	return result
static func bridge_walk(city:RefCounted,at:Vector3,travel:RefCounted)->float:
	if not has(city,"lantern_bridge_echo"):return 1.
	for site:Dictionary in travel.sites.values():
		if site.kind=="bridge" and Vector2(at.x,at.z).distance_to(site.at)<2.:return 1.15
	return 1.
