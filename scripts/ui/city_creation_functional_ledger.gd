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
	var lines:=PackedStringArray(["[b]城市的空间[/b]", "特色来自建筑，成区还需真实公共空间。"])
	if not report.network_ready:lines.append("道路正在更新，空间激活待道路发布。")
	var benefits:Dictionary=widget.demo.state.functional_benefits()
	if not benefits.artisan_sources.is_empty():lines.append("百工正式权益 +35% · 原待领奖励适用" if widget.demo.state.harmony_journey.has("growth_cutoff") else "灵感积累 +35% · 百工匠造")
	var pairs:=0
	for peers:Array in benefits.mutual.values():pairs+=peers.size()
	if pairs>0:lines.append("水岸与栖居互哺 · %d 组沿路邻里"%(pairs/2))
	for chord:String in widget.demo.state.synergy_buffs().active_chords:lines.append("♫ "+str(widget.demo.state.SynergyBuffs.CHORD_NAMES[chord]))
	lines.append("\n[b]场所空间[/b]")
	for space:Dictionary in report.spaces:
		var names:Array=[]
		for id:String in space.members:
			var index:int=widget.demo.state._house_index(id)
			names.append(Safe.safe(str(widget.demo.state.houses[index].name) if index>=0 else str(widget.demo.state.PlacedLandmarks.Legacy.TITLES[widget.demo.state.PlacedLandmarks.row(widget.demo.state,id).blueprint])))
		var stage:String={"trait":"特色","cluster":"局部空间","district":"成区"}[space.stage]
		var detail:String="真实院落 · 公共通口已接通" if space.eligibility.district else "真实院落 · 等待道路发布" if space.eligibility.reason=="network_waiting" else "真实院落 · 院内入口尚未接通公共路网" if space.eligibility.reason=="portal_disconnected" else "真实院落 · 需要通向院内的公共入口" if space.stage=="cluster" else "居住体量 · 尚无已验证院落"
		if space.evidence.geometry=="half_enclosure":detail="半围合 · "+("留有可进入的干地" if space.evidence.open_access else "开口通路受阻")+(" · 道路待更新" if not report.network_ready else "")
		if space.evidence.geometry=="narrow_lane":detail="连续窄巷 · "+("两侧入口与公共路网已接通" if space.eligibility.district else "等待道路发布" if space.eligibility.reason=="network_waiting" else "两侧入口尚未接通公共路网")
		if space.eligibility.reason=="height_access_missing":detail="连续窄巷 · 门前高差尚无可用接续"
		if space.kind=="waterfront":detail="面水公共界面 · "+("入口与公共路网已接通" if space.eligibility.district else "等待道路发布" if space.eligibility.reason=="network_waiting" else "附近尚无真实水域" if space.eligibility.reason=="water_missing" else "尚无可用的面水公共界面" if space.eligibility.reason=="shore_face_missing" else "入口接续尚待验证" if space.eligibility.reason=="entry_support_unverified" else "面水通路地形受阻" if space.eligibility.reason=="ground_access_missing" else "门前高差尚无可用接续" if space.eligibility.reason=="height_access_missing" else "入口尚未接通面水公共道路")
		if space.kind=="artisan":detail="百工前庭 · "+("入口与公共路网已接通" if space.eligibility.district else "等待道路发布" if space.eligibility.reason=="network_waiting" else "钟楼特色尚无已验证作业体量" if space.eligibility.reason=="work_body_missing" else "尚无可用的干地前庭" if space.eligibility.reason=="forecourt_missing" else "门前高差尚无可用接续" if space.eligibility.reason=="height_access_missing" else "入口尚未接通公共道路")
		if space.kind=="civic":detail="礼乐前场 · "+("入口与公共路网已接通" if space.eligibility.district else "等待道路发布" if space.eligibility.reason=="network_waiting" else "柱脚阻挡公共入口" if space.eligibility.reason=="column_obstruction" else "尚无可用的干地前场" if space.eligibility.reason=="forecourt_missing" else "门前高差尚无可用接续" if space.eligibility.reason=="height_access_missing" else "入口尚未接通公共道路")
		lines.append("%s · %s\n%s"%["、".join(names),stage,detail])
	lines.append("\n[b]原有用途与连接[/b]\n接路记录保留原权益，不等同于成区。")
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
