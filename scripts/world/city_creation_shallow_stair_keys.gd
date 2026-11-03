extends RefCounted
## Explicit free presentation; original terrain, treads and old card remain intact.
const SCHEMA:=32
const FIELD:="shallow_stair_keys"
static func selected(city)->bool:return city.CreationPolicy.is_free(city) and city.creative_settings.get("presentation",{}).get(FIELD,false)
static func minimum_rise(city)->float:return .65 if selected(city) else preload("res://scripts/world/city_creation_tradition_rules.gd").stair_rise(city)
static func choose(city,value:Variant)->Dictionary:
	if not value is bool or not city.CreationPolicy.is_free(city):return city._fail("自由创作可选择浅阶琴键")
	if selected(city)==value:return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot();var prefs:Dictionary=city.creative_settings.presentation.duplicate(true)
	if value:prefs[FIELD]=true
	else:prefs.erase(FIELD)
	var result:Dictionary=city.CreationPolicy.set_preferences(city,{"presentation":prefs})
	if result.ok:result.before_upgrade=before if value and before.schema<SCHEMA else {};result.message="浅阶琴键已开启；真实坡段高差至少0.65米时呈现" if value else "已恢复原石阶琴键规则"
	return result
static func write(city,result:Dictionary)->void:
	if city.creative_settings.get("presentation",{}).has(FIELD):result.schema=maxi(int(result.schema),SCHEMA)
static func validate(city,data:Dictionary)->Dictionary:
	var settings:Variant=data.get("creative_settings",{})
	if not settings is Dictionary:return city._fail("创作偏好字段无效")
	var presentation:Variant=settings.get("presentation",{})
	if not presentation is Dictionary:return city._fail("街景偏好字段无效")
	if presentation.has(FIELD) and (data.schema<SCHEMA or not city.CreationPolicy.data_is_free(data) or presentation[FIELD]!=true):return city._fail("浅阶琴键需要自由创作版本32及显式选择")
	return {"ok":true}
