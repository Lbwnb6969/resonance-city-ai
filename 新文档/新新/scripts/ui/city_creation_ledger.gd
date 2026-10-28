extends RefCounted
## A read-only account of completed city life and the current business shelves.
const UI = preload("res://scripts/ui/valley_ui_theme.gd")
const Civic = preload("res://scripts/world/city_creation_civic_supply.gd")
const ROLE_NAMES = {
	"bakery": "面包坊",
	"workshop": "制琴坊",
	"garden_cafe": "花圃茶座",
	"venue": "演奏庭",
	"atelier": "人文书院",
	"clockmaker": "钟表工坊",
	"symphony_hall": "交响音乐厅",
}
var demo: Node3D
var button: Button
var scrollbook
var panel: Control
var paper: PanelContainer
var close_button: Button
var guide_button: Button
var scroll: ScrollContainer
var body: RichTextLabel
var rows: Array[Dictionary] = []
var family_badges:Dictionary={}
var _last_refresh: int = -500
var _text: String = ""

func setup(owner: Node3D, parent: Control) -> void:
	demo = owner
	button = demo._button("生活账本 · L", open_panel)
	button.name = "CityLedger"
	button.tooltip_text = "看看各家的库存与河湾已经发生的日常 · L"
	demo.gallery_button.get_parent().add_child(button)
	preload("res://scripts/ui/city_creation_scroll_pages.gd").ledger(self,parent)

func _fit() -> void:
	scrollbook.fit()

func open_panel() -> void:
	if demo.edit_pending() or demo.gallery.busy: return
	if visible():close_panel();return
	demo._cancel_draft()
	demo.orbiting = false
	demo.panning = false
	demo.town.clear_preview()
	scrollbook.show_page("ledger")
	_last_refresh = -500
	refresh()
	close_button.grab_focus()

func close_panel() -> void:
	scrollbook.close_page("ledger")
	close_button.release_focus()
	demo.preview_key = ""

func visible() -> bool:
	return panel.visible

func refresh() -> void:
	if not panel.visible: return
	var now: int = Time.get_ticks_msec()
	if now - _last_refresh < 500: return
	_last_refresh = now
	var capsules=preload("res://scripts/ui/city_creation_life_capsules.gd")
	capsules.refresh(self)
	var progress:Dictionary=demo.state.life_progress
	var lines:=PackedStringArray(["[font_size=15][color=#284c42]三缕烟火 · 河湾日常[/color][/font_size]"])
	lines.append("采购 %d 次 · 茶聚 %d 桌 / %d 人次"%[int(progress.get("purchases",0)),int(progress.get("tea_parties",0)),int(progress.get("tea_visits",0))])
	lines.append("演出 %d 场 · 自发邀演 %d 场"%[int(progress.get("concerts",0)),int(progress.get("auto_concerts",0))])
	var chord_names:Dictionary=preload("res://scripts/world/city_creation_synergy_buffs.gd").CHORD_NAMES
	var chords:Array=demo.state.synergy_buffs().active_chords
	if not chords.is_empty():lines.append("♪ "+" · ".join(chords.map(func(id):return str(chord_names[id]))))
	rows.clear()
	for house:Dictionary in demo.state.houses:
		var role:=str(house.get("role","residential"));var id:=str(house.id)
		var title:=str(house.get("name",""));var tier:int=demo.state.level_tier(id)
		if title.is_empty():title=str(ROLE_NAMES.get(role,"河湾暖舍"))
		lines.append("\n[font_size=15][color=#284c42]%s[/color][/font_size] · ★%d %s"%[capsules.safe(title),tier,demo.state.Quality.NAMES[clampi(tier-1,0,4)]])
		if role=="residential":
			var harmony:Dictionary=demo.state.house_harmony(id)
			lines.append(capsules.home(harmony));lines.append("共鸣 %d / 3 阶 · %s"%[int(harmony.tier),str(harmony.title)]);continue
		var connected:bool=demo.life.house_connected(id);var status:Dictionary={}
		var civic:=Civic.status(demo.state,id)
		if int(civic.get("tier",0))>0:
			var pill_label:="✦✦ 街坊雅集互哺" if int(civic.tier)==2 else "✦ 晨炉自给"
			if role=="clockmaker":pill_label="🕰️ 律动中枢"
			var tempo_pill:=" " + capsules.pill("🕰️金钟合拍",true) if float(civic.get("tempo_mult",1.))>1. else ""
			lines.append(capsules.pill(pill_label,int(civic.tier)>=2)+tempo_pill)
		if not connected:lines.append("门前尚未接路 · 一条小路，让烟火往来。")
		match role:
			"bakery":
				status=demo.life.bakery_status(id)
				lines.append("柜台 %d / %d · 已出炉 %d · 已售出 %d"%[int(status.stock),int(status.capacity),int(status.produced),int(status.served)-int(status.gifted)])
				lines.append(capsules.safe(business_activity(role,status)))
			"workshop","atelier","clockmaker":
				status=demo.life.workshop_status(id)
				lines.append("在库 %d / %d · 已制成 %d · 已送达 %d"%[int(status.stock),int(status.capacity),int(status.produced),int(status.delivered)])
				lines.append(capsules.safe(business_activity(role,status)))
			"garden_cafe":
				status=demo.life.cafe_status(id)
				lines.append("已开茶局 %d 桌 · 已招待 %d 人次"%[int(status.get("groups",0)),int(status.get("visits",0))]);lines.append(cafe_activity(status))
			"venue","symphony_hall":
				status=demo.state.festival_status(id)
				lines.append("节庆布置已备妥" if status.ready else "等匠人送来节庆布置" if status.pending else "静候下一场街坊相聚")
				lines.append("已使用 %d 份节庆布置"%int(status.used))
		rows.append({"id":id,"role":role,"connected":connected,"status":status.duplicate(true)})
	if rows.is_empty():lines.append("\n添一间面包坊，日常就有了香气。")
	var next_text: String = "\n".join(lines)
	if next_text == _text: return
	_text = next_text;body.text = _text

func _worker_counts(workers: Array, key: String) -> Dictionary:
	var result: Dictionary = {}
	for worker: Dictionary in workers:
		var id: String = str(worker.get(key, ""))
		result[id] = int(result.get(id, 0)) + 1
	return result

static func business_activity(role: String, status: Dictionary) -> String:
	var phase := str(status.get("worker_phase", "unassigned"))
	if phase == "unassigned": return "尚无可沿路到达且未分配工作的居所；连接另一处居所，让街坊来开工。"
	if phase == "paused": return "居所、店家或配送目标之间的步行路线已中断，接回小路后继续。"
	var working := phase == "baking" if role == "bakery" else phase == "crafting"
	if working and not bool(status.open): return "暂停制作中；现有库存仍可采购或配送。"
	if working and int(status.stock) + int(status.batch_size) > int(status.capacity):
		return "面包已备好，等街坊来买，腾出一整炉的位置。" if role == "bakery" else "木饰已备好，等待可达邻屋的送装或节庆订单。"
	var activities := {
		"walking": "面包师正在沿路来开炉。",
		"baking": "面包师已到岗，正在揉面、烘焙。",
		"returning": "正在沿路返回。",
		"resting": "正在家中小歇，稍后继续。",
		"to_workshop": "匠人正在沿路前来开工。",
		"crafting": "匠人已到岗，正在打磨木饰。",
		"to_target": "匠人携着木饰沿真实小路配送。",
		"installing": "匠人已到达目标，正在门前安装。",
		"to_home": "匠人正在沿路收工回家。",
	}
	var activity: String = activities.get(phase, "等待下一次日常。")
	if role == "atelier":
		activity = activity.replace("匠人", "画师").replace("打磨木饰", "绘制挂毯与彩窗").replace("木饰", "画作")
	elif role == "clockmaker":
		activity = activity.replace("匠人", "钟表匠").replace("打磨木饰", "制作八音盒与风向标").replace("木饰", "钟表")
	var worker_name := str(status.get("worker_name", ""))
	return worker_name + " · " + activity if not worker_name.is_empty() else activity

static func cafe_activity(status: Dictionary) -> String:
	var descriptions := {
		"closed": "茶座已经收起。",
		"disconnected": "茶座门前尚未接路；把茶座与住户、面包坊接在能步行相通的小路上。",
		"no_space": "桌椅缺少空地；留出不挡门路的花下空位。",
		"waiting": "让至少两户先买面包，再沿路来茶座品茶。",
		"waitsecond": "一位买过面包的街坊已经入座，等第二位买过面包的街坊沿路来。",
		"gathering": "街坊正沿小路来赴约。",
		"tea": "街坊围坐品茶中，相伴6秒完成茶聚。",
		"leaving": "一桌茶聚已完成，街坊正在沿路离席。",
	}
	return str(descriptions.get(str(status.get("phase", "closed")), "街坊正在赴约。"))

func blocks_world(event:InputEvent)->bool:
	return scrollbook.blocks_world(event)
