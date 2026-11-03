extends RefCounted
## Optional Schema19 choices leave old works and their automatic recipes intact.
const ALPINE=["chalet","pavilion","terrace","panorama","twin_gable","green_lodge"]
const MODERN_EXTRAS=["cantilever_tea_deck"]
const PASTORAL_EXTRAS=["creek_boathouse"]
const NEO=["portico","townhouse","oriel","peristyle","rotunda","guildhall","recessed_townhouse"]
const CLOCKWORK=["sawtooth_atrium","clock_turret","iron_conservatory","guild_arcade"]
const RENAISSANCE=["venetian_loggia","belvedere_villa","stepped_guildhouse","corner_loggia_tower"]
const ANCIENT=preload("res://scripts/world/city_creation_ancient_extension_plan.gd")
const LABELS=["山墙木屋","单坡玻亭","错层台宅","全景山居","连桥工坊","绿顶山舍","柱廊门庭","分层街屋","转角凸窗","内院连柱","圆厅书院","山花会馆","深窗街屋","折顶天窗","转角铜钟","铁艺花房","红砖拱会"]
static func valid(value: Variant) -> bool:
	return value is String and value in ALPINE+MODERN_EXTRAS+NEO+CLOCKWORK+RENAISSANCE+ANCIENT.IDS+PASTORAL_EXTRAS
static func choices(city, house: Dictionary) -> Array:
	if house.has("signature"): return []
	var era: String=city.house_era(house)
	if era=="modern_eco": return ALPINE+MODERN_EXTRAS+["recessed_townhouse"]
	if era=="clockwork": return CLOCKWORK+["recessed_townhouse"]
	if era not in ["pastoral","renaissance"]: return []
	var result: Array=["portico","townhouse","recessed_townhouse"]
	var Neo=preload("res://scripts/visual/city_creation_neoclassical.gd")
	if house.cells.any(func(c):return int(c.level)>0 and not Neo.corner_sides(city,house,c).is_empty()): result.append("oriel")
	var Civic=preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd")
	if not Civic.terraces(house,preload("res://scripts/world/city_creation_arcade_plan.gd").for_house(city,house)).is_empty(): result.append("peristyle")
	result.append("rotunda")
	if not Civic.guild(city,house,true).is_empty(): result.append("guildhall")
	if era=="renaissance":
		result.append_array(RENAISSANCE)
		if preload("res://scripts/world/city_creation_stepped_guildhouse.gd").layout(house).is_empty():result.erase("stepped_guildhouse")
		if not preload("res://scripts/world/city_creation_corner_loggia.gd").supported(house):result.erase("corner_loggia_tower")
	else:
		result.append_array(PASTORAL_EXTRAS)
		if not ANCIENT.rectangle(house).is_empty():result.append_array(ANCIENT.IDS)
	return result
static func label(key: String) -> String:
	if key=="creek_boathouse":return "溪畔木船坞"
	if key=="corner_loggia_tower":return "街角双向连拱望楼"
	if key=="cantilever_tea_deck":return "悬挑亲水茶台"
	if key in ANCIENT.IDS:return ANCIENT.NAMES[ANCIENT.IDS.find(key)]
	if key in RENAISSANCE:return ["水畔圆廊","观景山庄","阶梯山墙行会"][RENAISSANCE.find(key)]
	var index: int=(ALPINE+NEO+CLOCKWORK).find(key)
	return LABELS[index] if index>=0 else "随形生长"
static func set_choice(city, id: String, key: String) -> Dictionary:
	var index: int=city._house_index(id)
	if index<0:return city._fail("房屋不存在")
	if key!="" and key not in choices(city,city.houses[index]):return city._fail("此房形未具备该风貌的空间")
	if city.houses[index].get("architecture","")==key and not (key=="stepped_guildhouse" and city.houses[index].get("style","") in ["timber","round_tower"]):return {"ok":true,"no_op":true}
	var before: Dictionary=city.snapshot()
	if key=="":city.houses[index].erase("architecture")
	else:
		city.houses[index].architecture=key
		if key in NEO+RENAISSANCE+ANCIENT.IDS+PASTORAL_EXTRAS and city.houses[index].get("style","") in ["timber","round_tower"]:city.houses[index].erase("style")
	if not preload("res://scripts/world/city_creation_wide_passage.gd").preserve(city,before,index):return city._fail("此原型尚未适配宽穿堂，请先移走宽路")
	city._commit(before,"更换建筑原型")
	return {"ok":true,"message":"已换为"+label(key)}
