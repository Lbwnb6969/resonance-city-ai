extends RefCounted
## Read-only free-city guidance; historical business status remains classic-only.
const Zones=preload("res://scripts/world/city_creation_functional_zones.gd")
static func inspector(city:RefCounted,id:String)->Dictionary:
	var result:={"text":"","action":"","tool":-1,"target":id,"command":""}
	var report:Dictionary=city.functional_zones()
	if not report.houses.has(id):return result
	if not report.network_ready:
		result.text="道路正在更新，空间连接即将刷新。";return result
	var house:Dictionary=report.houses[id];var names:PackedStringArray=[]
	for kind:String in house.kinds:names.append(Zones.NAMES[kind])
	result.text=" / ".join(names)
	if not house.connected:
		result.text+=" · 门前尚未接路。";result.action="到门前接路";result.tool=2;return result
	result.text+=" · 门前已接路。"
	result.action="看城市总谱";result.command="spatial_ledger"
	return result
static func hint(_city:RefCounted)->Dictionary:
	return {"stage":"wander","text":"任意画具开局 · Ctrl+Z撤销"}
static func apply(guide:Control)->void:
	guide.bubble.hide()
	for child:Node in guide.markers.get_children():guide.markers.remove_child(child);child.queue_free()
	guide.banner.text=""
	if guide.demo.state.creative_settings.guidance:
		var step:=hint(guide.demo.state);guide.stage=step.stage;guide.banner.text=step.text
	if guide.demo.tactile_dock!=null:guide.demo.tactile_dock.refresh()
