extends RefCounted
const FIELD:="festival_bunting_and_lights"
static func unlocked(city)->bool:return city.CreationPolicy.is_free(city) and int(city.cozy_progression.get("level",0))>=4
static func enabled(city)->bool:return unlocked(city) and city.creative_settings.presentation.get(FIELD,false) and city.creative_settings.presentation.get("automatic_decoration",true)
static func key(city)->Array:return [unlocked(city),city.creative_settings.get("presentation",{}).get(FIELD,false),city.creative_settings.get("presentation",{}).get("automatic_decoration",true)]
static func festive(city,original:bool)->bool:
	if not city.CreationPolicy.is_free(city):return original
	return (original or enabled(city)) and city.creative_settings.presentation.get("automatic_decoration",true)
static func set_enabled(city,value:Variant)->Dictionary:
	if not value is bool:return city._fail("庆典风物开关需要布尔值")
	if value and not unlocked(city):return city._fail("新账期等级4可选庆典彩旗与水岸暖灯")
	var prefs:Dictionary=city.creative_settings.get("presentation",{}).duplicate(true);prefs[FIELD]=value
	return city.CreationPolicy.set_preferences(city,{"presentation":prefs})
