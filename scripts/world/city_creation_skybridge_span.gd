extends RefCounted
## Free build availability is separate from historical cloud-gallery rewards.
const SCHEMA:=31
const FIELD:="skybridge_span"
const Rules=preload("res://scripts/world/city_creation_tradition_rules.gd")
const Policy=preload("res://scripts/world/city_creation_creation_policy.gd")
static func selected(house:Dictionary)->bool:return house.has(FIELD)
static func supported(city,house:Dictionary)->bool:
	return Policy.is_free(city) and not house.has("signature") and city.house_era(house)=="modern_eco" and house.cells.any(func(c):return c.kind=="room" and int(c.level) in [1,2])
static func search_distance(city)->float:return 9. if Policy.is_free(city) else Rules.bridge_distance(city)
static func limit(city,house:Dictionary,other:Dictionary)->float:
	return 9. if Policy.is_free(city) and (selected(house) or selected(other)) else Rules.bridge_distance(city)
static func choose(city,id:String,enabled:Variant)->Dictionary:
	var index:int=city._house_index(id)
	if index<0 or not enabled is bool:return city._fail("云廊选择无效")
	var house:Dictionary=city.houses[index]
	if not Policy.is_free(city) or enabled and not supported(city,house):return city._fail("现代高屋可选择九米云廊")
	if selected(house)==enabled:return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot()
	if enabled:house[FIELD]={"version":1,"meters":9}
	else:house.erase(FIELD)
	city._commit(before,"更改云廊跨度")
	return {"ok":true,"house_id":id,"before_upgrade":before if before.schema<SCHEMA and enabled else {},"message":"已选九米云廊；同高对齐、净空足够时相接" if enabled else "已恢复原云廊跨度"}
static func write(city,result:Dictionary)->void:
	if city.houses.any(func(h):return h.has(FIELD)):result.schema=maxi(int(result.schema),SCHEMA)
static func validate(city,data:Dictionary)->Dictionary:
	for house:Variant in data.get("houses",[]):
		if not house is Dictionary or not house.has(FIELD):continue
		var value:Variant=house[FIELD]
		if data.schema<SCHEMA or not Policy.data_is_free(data) or not value is Dictionary or value.size()!=2 or not city._is_integer(value.get("version")) or value.version!=1 or not city._is_integer(value.get("meters")) or value.meters!=9:return city._fail("九米云廊需要自由创作版本31及有效跨度配方")
	return {"ok":true}
