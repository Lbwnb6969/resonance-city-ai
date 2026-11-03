extends RefCounted
## Author-selected inspiration, independent of progression and derived geometry.
const VERSION:=1
const IDS:=["quiet_corner","roof_walk"]
const CARDS:={
	"quiet_corner":{"title":"给一角留白","text":"找一处你愿意停看的角落，让建筑、树或小路围出一点空处。山坡、平地、无水的小院都可以。\n试着从两个方向看它；保留你喜欢的留白，不必凑固定布局。"},
	"roof_walk":{"title":"沿街看屋顶","text":"选一段你喜欢的小路，沿路看看屋顶的高低与转折。可以改一座房，也可以保留原样，换个角度欣赏。\n不要求店铺、数量或风格；想留下这一刻时，用收藏保存一个新版本。"}
}
static func valid(value:Variant)->bool:
	if not value is Dictionary or value.size()!=2:return false
	var version:Variant=value.get("version")
	return (version is int or version is float) and version==VERSION and value.get("selected") is String and (value.selected.is_empty() or value.selected in IDS)
static func selected(city:RefCounted)->String:
	return str(city.creative_settings.get("inspiration",{}).get("selected",""))
static func choose(city:RefCounted,id:String)->Dictionary:
	if not city.CreationPolicy.is_free(city):return city._fail("创作题签用于自由营造城市")
	if not id.is_empty() and id not in IDS:return city._fail("创作题签不存在")
	if selected(city)==id:return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot()
	var target:Dictionary=city.creative_settings.duplicate(true)
	target.version=2;target.inspiration={"version":VERSION,"selected":id}
	if not city.CreationPolicy.Save.settings_valid(city,target):return city._fail("创作题签字段无效")
	city.creative_settings=target;city._commit(before,"选择创作题签" if not id.is_empty() else "暂不选创作题签")
	var result:={"ok":true,"message":"题签随本城保存；随时可换" if not id.is_empty() else "已放下题签，自由营造"}
	if int(before.creative_settings.version)==1:result.before_upgrade=before
	return result
