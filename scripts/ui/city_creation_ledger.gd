extends RefCounted
## A read-only account of completed city life and the current business shelves.
const UI = preload("res://scripts/ui/valley_ui_theme.gd")
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
var panel: Control
var paper: PanelContainer
var close_button: Button
var guide_button: Button
var scroll: ScrollContainer
var body: RichTextLabel
var rows: Array[Dictionary] = []
var _last_refresh: int = -500
var _text: String = ""

func setup(owner: Node3D, parent: Control) -> void:
	demo = owner
	button = demo._button("生活账本 · L", open_panel)
	button.name = "CityLedger"
	button.tooltip_text = "看看各家的库存与河湾已经发生的日常 · L"
	demo.gallery_button.get_parent().add_child(button)
	panel = Control.new()
	panel.name = "LifeLedger"
	parent.add_child(panel)
	panel.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	panel.mouse_filter = Control.MOUSE_FILTER_STOP
	panel.theme = UI.make_theme()
	var shade := ColorRect.new()
	shade.color = Color(0.08, 0.16, 0.14, 0.56)
	shade.mouse_filter = Control.MOUSE_FILTER_IGNORE
	panel.add_child(shade)
	shade.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	paper = PanelContainer.new()
	paper.name = "LedgerPaper"
	paper.add_theme_stylebox_override("panel", UI.panel(24))
	panel.add_child(paper)
	paper.set_anchors_and_offsets_preset(Control.PRESET_CENTER)
	var column := VBoxContainer.new()
	column.add_theme_constant_override("separation", 12)
	paper.add_child(column)
	var heading := HBoxContainer.new()
	heading.add_theme_constant_override("separation", 12)
	column.add_child(heading)
	var title: Label = demo._label("生活账本", 24)
	title.size_flags_horizontal = Control.SIZE_EXPAND_FILL
	heading.add_child(title)
	guide_button = demo._button("营造手札 · F1", func() -> void:
		if demo.get("guide") != null: demo.guide.open_panel(1))
	guide_button.name = "OpenGuideFromLedger"
	guide_button.focus_mode = Control.FOCUS_NONE
	guide_button.tooltip_text = "查看经营闭环、工坊加持与建筑 1–5 级进化指南 · F1"
	heading.add_child(guide_button)
	close_button = demo._button("回到河湾 · Esc", close_panel)
	close_button.name = "CloseLedger"
	close_button.focus_mode = Control.FOCUS_ALL
	heading.add_child(close_button)
	var subtitle: Label = demo._label("一炉面包，一桌茶，一场演出，慢慢记在这里。", 15)
	subtitle.add_theme_color_override("font_color", UI.MUTED)
	column.add_child(subtitle)
	column.add_child(HSeparator.new())
	scroll = ScrollContainer.new()
	scroll.name = "LedgerScroll"
	scroll.size_flags_vertical = Control.SIZE_EXPAND_FILL
	scroll.horizontal_scroll_mode = ScrollContainer.SCROLL_MODE_DISABLED
	scroll.focus_mode = Control.FOCUS_ALL
	column.add_child(scroll)
	body = RichTextLabel.new()
	body.name = "LedgerEntries"
	body.bbcode_enabled = false
	body.fit_content = true
	body.scroll_active = false
	body.selection_enabled = true
	body.custom_minimum_size.x = 320
	body.size_flags_horizontal = Control.SIZE_EXPAND_FILL
	body.add_theme_font_size_override("normal_font_size", 16)
	body.add_theme_color_override("default_color", UI.INK)
	body.add_theme_constant_override("line_separation", 5)
	scroll.add_child(body)
	var note: Label = demo._label("门路只表示门前已接通道路；成绩只记实际完成的日常。", 13)
	note.add_theme_color_override("font_color", UI.MUTED)
	column.add_child(note)
	panel.resized.connect(_fit)
	_fit()
	panel.hide()

func _fit() -> void:
	var dimensions := Vector2(minf(900.0, panel.size.x - 48.0), minf(680.0, panel.size.y - 64.0))
	paper.offset_left = -dimensions.x * 0.5
	paper.offset_right = dimensions.x * 0.5
	paper.offset_top = -dimensions.y * 0.5
	paper.offset_bottom = dimensions.y * 0.5

func open_panel() -> void:
	if demo.edit_pending() or demo.gallery.busy: return
	demo._cancel_draft()
	demo.orbiting = false
	demo.panning = false
	demo.town.clear_preview()
	panel.show()
	_last_refresh = -500
	refresh()
	close_button.grab_focus()

func close_panel() -> void:
	panel.hide()
	close_button.release_focus()
	demo.preview_key = ""

func visible() -> bool:
	return panel.visible

func refresh() -> void:
	if not panel.visible: return
	var now: int = Time.get_ticks_msec()
	if now - _last_refresh < 500: return
	_last_refresh = now
	var progress: Dictionary = demo.state.life_progress
	var bakery_members: Dictionary = _worker_counts(demo.life.bakery.workers, "bakery_id")
	var workshop_members: Dictionary = _worker_counts(demo.life.workshop.workers, "workshop_id")
	var lines := PackedStringArray()
	lines.append("【河湾已经发生的日常】")
	lines.append("采购 %d 次    ·    茶聚 %d 桌 / %d 人次" % [int(progress.get("purchases", 0)), int(progress.get("tea_parties", 0)), int(progress.get("tea_visits", 0))])
	lines.append("街坊小聚 %d 次" % int(progress.get("gatherings", 0)))
	lines.append("演出 %d 场    ·    其中自发邀演 %d 场" % [int(progress.get("concerts", 0)), int(progress.get("auto_concerts", 0))])
	lines.append("工作成员：面包坊 %d 人    ·    工坊 / 书院 / 钟表 %d 人" % [demo.life.bakery.workers.size(), demo.life.workshop.workers.size()])
	var harmony: Dictionary = demo.state.city_harmony_summary()
	lines.append("居所共鸣 %.1f / 3 阶    ·    百鸟和鸣 %d 户" % [float(harmony.average_tier), int(harmony.tier_counts[3])])
	lines.append("\n【各家的日常】")
	rows.clear()
	for house: Dictionary in demo.state.houses:
		var role: String = str(house.get("role", "residential"))
		var id: String = str(house.id)
		var title: String = str(house.get("name", ""))
		var tier: int = demo.state.level_tier(id)
		var tier_name: String = demo.state.Quality.NAMES[clampi(tier - 1, 0, demo.state.Quality.NAMES.size() - 1)]
		if role == "residential":
			var home_harmony: Dictionary = demo.state.house_harmony(id)
			lines.append("\n%s · 共鸣 %d / 3 阶 · %s（Lv.%d %s）" % [title, int(home_harmony.tier), str(home_harmony.title), tier, tier_name])
			lines.append("%s 麦香温饱    ·    %s 茶叙雅集    ·    %s 匠心风物" % ["已满足" if home_harmony.food else "待采购", "已满足" if home_harmony.social else "待茶叙", "已满足" if home_harmony.craft else "待送装"])
			continue
		var role_name: String = str(ROLE_NAMES.get(role, "街坊之家"))
		if title.is_empty(): title = role_name
		var connected: bool = demo.life.house_connected(id)
		lines.append("\n%s · %s（Lv.%d %s）" % [title, role_name, tier, tier_name])
		lines.append("门前已有道路；经营还需与居所步行相通" if connected else "门前尚未接路")
		var status: Dictionary = {}
		match role:
			"bakery":
				status = demo.life.bakery_status(id)
				lines.append("柜台 %d / %d    ·    已出炉 %d    ·    已售出 %d" % [int(status.stock), int(status.capacity), int(status.produced), int(status.served)])
				lines.append("%s    ·    工作成员 %d 人" % ["开门营业" if bool(status.open) else "暂停营业", int(bakery_members.get(id, 0))])
				lines.append(business_activity("bakery", status))
				lines.append(str(demo.state.site_blessing(id).label))
				lines.append("每炉 %d 份 · 到岗烘焙 %.2f 秒" % [int(status.batch_size), 6.0 / float(demo.state.production_multiplier(id))])
			"workshop", "atelier", "clockmaker":
				status = demo.life.workshop_status(id)
				var transit: Dictionary = status.transit
				var item_label := "画作" if role == "atelier" else ("钟表工艺" if role == "clockmaker" else "木饰")
				lines.append("在库 %d / %d    ·    已制成 %d    ·    已送达 %d" % [int(status.stock), int(status.capacity), int(status.produced), int(status.delivered)])
				lines.append("%s    ·    %s    ·    工作成员 %d 人" % ["开门营业" if bool(status.open) else "暂停营业", "有一份%s正在运送" % item_label if not transit.is_empty() else "当前没有运送中的物件", int(workshop_members.get(id, 0))])
				lines.append(business_activity(role, status))
				lines.append(str(demo.state.site_blessing(id).label))
				lines.append("到岗制作 %.2f 秒 · 普通%s送往22米内邻屋，节庆订单沿路送达" % [8.0 / float(demo.state.production_multiplier(id)), item_label])
			"venue", "symphony_hall":
				status = demo.state.festival_status(id)
				var preparation: String = "尚无待备的节庆布置"
				if bool(status.ready): preparation = "节庆布置已备妥"
				elif bool(status.pending): preparation = "节庆布置等待送达"
				lines.append("%s    ·    已使用 %d 份" % [preparation, int(status.used)])
			"garden_cafe":
				status = demo.life.cafe_status(id)
				lines.append("已开茶局 %d 桌    ·    已招待 %d 人次" % [int(status.get("groups", 0)), int(status.get("visits", 0))])
				lines.append(cafe_activity(status))
				lines.append(str(demo.state.site_blessing(id).label))
		rows.append({"id": id, "role": role, "connected": connected, "status": status.duplicate(true)})
	if rows.is_empty(): lines.append("\n河湾里还没有开张的店家。建一间面包坊，日常就有了香气。")
	var next_text: String = "\n".join(lines)
	if next_text == _text: return
	_text = next_text
	body.text = _text

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
