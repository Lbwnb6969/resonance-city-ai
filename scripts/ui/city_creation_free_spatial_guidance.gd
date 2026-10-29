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
	var benefits:Dictionary=city.functional_benefits()
	if id in benefits.artisan_sources:result.text+=" 全城灵感积累 +35%（不叠加）。"
	if not benefits.mutual.get(id,[]).is_empty():result.text+=" 与沿路邻里互哺。"
	result.action="看功能区";result.command="spatial_ledger"
	return result
static func hint(city:RefCounted)->Dictionary:
	if city.houses.is_empty():return {"stage":"houses","text":"选一种风貌，落笔造第一栋小屋。"}
	var report:Dictionary=city.functional_zones()
	if not report.network_ready:return {"stage":"spatial","text":"道路正在更新，稍候看看空间如何相连。"}
	if report.houses.values().any(func(h):return not h.connected):return {"stage":"road","text":"沿屋门接通小路，让实建空间相互呼应。"}
	var active:Array=[]
	for zone:Dictionary in report.zones:
		if zone.active and zone.kind not in active:active.append(zone.kind)
	if "artisan" not in active:return {"stage":"spatial","text":"试试钟楼或工坊原型，接路后获得灵感加成。"}
	if "waterfront" not in active:return {"stage":"spatial","text":"沿水添一座敞廊，让水岸与栖居互相呼应。"}
	return {"stage":"wander","text":"空间已相连，按 L 看功能区；继续造城或坐下观景。"}
static func apply(guide:Control)->void:
	guide.bubble.hide()
	for child:Node in guide.markers.get_children():guide.markers.remove_child(child);child.queue_free()
	guide.banner.text=""
	if guide.demo.state.creative_settings.guidance:
		var step:=hint(guide.demo.state);guide.stage=step.stage;guide.banner.text=step.text
	if guide.demo.tactile_dock!=null:guide.demo.tactile_dock.refresh()
