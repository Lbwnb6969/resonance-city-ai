extends RefCounted
## Stroke v2 changes only plateau height semantics. Shore, smoothing and
## protection remain v1; future changes to those require another explicit version.
const VERSION:=2
const SCHEMA:=21
const MIN_HEIGHT:=-.5
const MAX_HEIGHT:=3.5
static func targeted(row:Dictionary)->bool:return row.get("terrain_version",1)==VERSION
static func has_target(rows:Array)->bool:return rows.any(func(row):return row is Dictionary and targeted(row))
static func validate(city:RefCounted,row:Dictionary)->Dictionary:
	if not row.has("terrain_version"):
		return city._fail("定高笔画缺少规则版本") if row.has("target_y") else {"ok":true}
	if not city._is_integer(row.terrain_version) or row.terrain_version!=VERSION:return city._fail("不支持的地形规则版本")
	if row.get("mode")!="plateau" or row.get("strength")!=1.:return city._fail("定高规则只用于完整台地笔画")
	if not city._is_number(row.get("target_y")) or not is_finite(float(row.target_y)) or row.target_y<MIN_HEIGHT or row.target_y>MAX_HEIGHT:return city._fail("台地绝对高度须在 -0.5 至 3.5 米之间")
	return {"ok":true}
static func height(base:float,current:float,row:Dictionary,weight:float,fade:float)->float:
	# Fade the target once relative to the unsculpted terrain, never multiply
	# the previous offset again. At full-weight dry cores this sets target_y.
	return lerpf(current,lerpf(base,float(row.target_y),fade),weight)
