extends RefCounted
## Free-city L page consumes the same geometry report used by later orchestration.
const Zones=preload("res://scripts/world/city_creation_functional_zones.gd")
const Safe=preload("res://scripts/ui/city_creation_life_capsules.gd")
static func caption(widget:RefCounted)->void:
	var free:bool=widget.demo.state.CreationPolicy.is_free(widget.demo.state)
	widget.button.text="功能区与总谱 · L" if free else "生活账本 · L"
	widget.button.tooltip_text="查看实际空间与当前合奏 · L" if free else "查看真实库存与已发生的日常 · L"
	widget.scrollbook.tabs.ledger.text="总谱" if free else "账本"
static func refresh(widget:RefCounted)->bool:
	var free:bool=widget.demo.state.CreationPolicy.is_free(widget.demo.state)
	var heading:Label=widget.paper.find_child("LedgerHeading",true,false)
	heading.text="功能区与总谱" if free else "生活账本";widget.guide_button.visible=not free
	var entries:Node=widget.scroll.get_child(0)
	for child:Control in entries.get_children():
		if child==widget.body:continue
		if free:
			if not child.has_meta("before_functional_ledger"):child.set_meta("before_functional_ledger",child.visible)
			child.hide()
		elif child.has_meta("before_functional_ledger"):
			child.visible=child.get_meta("before_functional_ledger");child.remove_meta("before_functional_ledger")
	if not free:
		if widget.body.has_meta("before_functional_ledger"):widget.body.visible=widget.body.get_meta("before_functional_ledger");widget.body.remove_meta("before_functional_ledger")
		return false
	if not widget.body.has_meta("before_functional_ledger"):widget.body.set_meta("before_functional_ledger",widget.body.visible)
	widget.body.show();widget.rows.clear()
	var report:Dictionary=widget.demo.state.functional_zones()
	var lines:=PackedStringArray(["[b]城市的四大功能区[/b]", "接通门前小路，让空间相互呼应。"])
	if not report.network_ready:lines.append("道路正在更新，空间激活待道路发布。")
	for kind:String in Zones.NAMES:
		var zones:Array=report.zones.filter(func(z):return z.kind==kind);var active:int=zones.filter(func(z):return z.active).size()
		lines.append("\n[b]%s[/b] · 已接路 %d / %d 处"%[Zones.NAMES[kind],active,zones.size()])
		for zone:Dictionary in zones:
			var titles:Array=[]
			for id:String in zone.members:
				var house:Dictionary=widget.demo.state.houses[widget.demo.state._house_index(id)]
				titles.append(Safe.safe(str(house.name)))
			lines.append(("● " if zone.active else "○ ")+"、".join(titles)+(" · 空间已接通" if zone.active else " · 门前尚未接路"))
	var plan:Dictionary=widget.demo.music.get_meta("orchestration_plan",{})
	lines.append("\n[b]当前合奏[/b]")
	if plan.is_empty():lines.append("落下第一间房屋，静候初吟。")
	else:
		var style:String={"pastoral_breeze":"庭院微风","felt_nocturne":"毡琴夜曲","deep_flow":"低音深流"}.get(str(plan.get("style","")),"当前主题")
		lines.append("%s · 第%d段 / 六段"%[style,int(plan.get("passage",0))+1])
		lines.append("回答声部 · "+("接腔" if plan.get("response",false) else "静候应答"))
	widget._text="\n".join(lines);widget.body.text=widget._text
	return true
