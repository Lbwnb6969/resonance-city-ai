extends RefCounted
## Stroke v2 changes only plateau height semantics. Shore, smoothing and
## protection remain v1. V3 is a separate wide-smooth rule and schema.
const Smooth=preload("res://scripts/world/city_creation_terrain_smooth_rules.gd")
const VERSION:=2
const SCHEMA:=21
const MIN_HEIGHT:=-.5
const MAX_HEIGHT:=3.5
static func targeted(row:Dictionary)->bool:return row.get("terrain_version",1)==VERSION
static func has_target(rows:Array)->bool:return rows.any(func(row):return row is Dictionary and targeted(row))
static func has_version(rows:Array,version:int)->bool:return rows.any(func(row):return row is Dictionary and row.get("terrain_version",1)==version)
static func schema_for(row:Dictionary)->int:return Smooth.SCHEMA if Smooth.targeted(row) else SCHEMA
static func validate(city:RefCounted,row:Dictionary)->Dictionary:
	if not row.has("terrain_version"):
		return city._fail("地形笔画缺少规则版本") if row.has("target_y") or row.has("kernel_radius") else {"ok":true}
	if city._is_integer(row.terrain_version) and Smooth.targeted(row):return Smooth.validate(city,row)
	if not city._is_integer(row.terrain_version) or row.terrain_version!=VERSION:return city._fail("不支持的地形规则版本")
	if row.get("mode")!="plateau" or row.get("strength")!=1.:return city._fail("定高规则只用于完整台地笔画")
	if row.has("kernel_radius"):return city._fail("定高笔画不使用柔化邻域")
	if not city._is_number(row.get("target_y")) or not is_finite(float(row.target_y)) or row.target_y<MIN_HEIGHT or row.target_y>MAX_HEIGHT:return city._fail("台地绝对高度须在 -0.5 至 3.5 米之间")
	return {"ok":true}
static func height(base:float,current:float,row:Dictionary,weight:float,fade:float)->float:
	# Fade the target once relative to the unsculpted terrain, never multiply
	# the previous offset again. At full-weight dry cores this sets target_y.
	return lerpf(current,lerpf(base,float(row.target_y),fade),weight)
