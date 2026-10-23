extends RefCounted
## Optional Schema19 choices leave old works and their automatic recipes intact.
const ALPINE=["chalet","pavilion","terrace","panorama","twin_gable","green_lodge"]
const NEO=["portico","townhouse","oriel","peristyle","rotunda","guildhall"]
const LABELS=["山墙木屋","玻璃亭","台地宅","全景山居","连桥工坊","绿顶山舍","柱廊门庭","分层街屋","转角凸窗","内院连柱","圆厅书院","山花会馆"]
static func valid(value: Variant) -> bool:
	return value is String and value in ALPINE+NEO
static func choices(city, house: Dictionary) -> Array:
	if house.has("signature"): return []
	var era: String=city.house_era(house)
	if era=="modern_eco": return ALPINE
	if era not in ["pastoral","renaissance"] or house.get("style","") in ["timber","round_tower"]: return []
	var result: Array=["portico","townhouse"]
	var Neo=preload("res://scripts/visual/city_creation_neoclassical.gd")
	if house.cells.any(func(c):return int(c.level)>0 and not Neo.corner_sides(city,house,c).is_empty()): result.append("oriel")
	var Civic=preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd")
	if not Civic.terraces(house,preload("res://scripts/world/city_creation_arcade_plan.gd").for_house(city,house)).is_empty(): result.append("peristyle")
	if era=="renaissance": result.append("rotunda")
	if not Civic.guild(city,house,true).is_empty(): result.append("guildhall")
	return result
static func label(key: String) -> String:
	var index: int=(ALPINE+NEO).find(key)
	return LABELS[index] if index>=0 else "随形生长"
static func set_choice(city, id: String, key: String) -> Dictionary:
	var index: int=city._house_index(id)
	if index<0:return city._fail("房屋不存在")
	if key!="" and key not in choices(city,city.houses[index]):return city._fail("此房形未具备该风貌的空间")
	if city.houses[index].get("architecture","")==key:return {"ok":true,"no_op":true}
	var before: Dictionary=city.snapshot()
	if key=="":city.houses[index].erase("architecture")
	else:city.houses[index].architecture=key
	city._commit(before,"更换建筑原型")
	return {"ok":true,"message":"已换为"+label(key)}
