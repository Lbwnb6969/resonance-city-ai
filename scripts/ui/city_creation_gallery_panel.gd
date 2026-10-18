extends Control
## Presentation only: the owner handles every save/open request and disk write.
const UI = preload("res://scripts/ui/valley_ui_theme.gd")
signal save_requested(title: String)
signal open_requested(id: String)
signal example_requested(id: String)
signal close_requested

var title_input: LineEdit
var save_button: Button
var close_button: Button
var cards: Dictionary = {}
var open_buttons: Dictionary = {}
var panel: PanelContainer
var scroll: ScrollContainer
var grid: GridContainer
var status_label: Label
var empty_label: Label
var tabs: TabBar
var footer: Label
var _items: Array = []
var _examples: Array = []
var _examples_selected := false
var _busy := false
var _status := ""
var _covers: Dictionary = {}
var _fit_queued := false

func _ready() -> void:
	name = "CreationGalleryPanel"
	theme = UI.make_theme()
	z_index = 180
	mouse_filter = Control.MOUSE_FILTER_STOP
	set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	var shade := ColorRect.new()
	shade.name = "GalleryShade"
	shade.color = Color(0.09, 0.16, 0.14, 0.66)
	shade.mouse_filter = Control.MOUSE_FILTER_STOP
	shade.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	add_child(shade)
	panel = PanelContainer.new()
	panel.name = "GalleryPaper"
	panel.add_theme_stylebox_override("panel", UI.panel(22))
	add_child(panel)
	var body := VBoxContainer.new()
	body.add_theme_constant_override("separation", 12)
	panel.add_child(body)
	var header := HBoxContainer.new()
	header.add_theme_constant_override("separation", 12)
	body.add_child(header)
	var heading := VBoxContainer.new()
	heading.size_flags_horizontal = Control.SIZE_EXPAND_FILL
	heading.add_theme_constant_override("separation", 4)
	header.add_child(heading)
	heading.add_child(_label("作品收藏", 26, false))
	var subtitle := _label("留下一座河湾，回来继续造 · 亦可切换官方示范河湾体验", 15, false)
	subtitle.add_theme_color_override("font_color", UI.MUTED)
	heading.add_child(subtitle)
	close_button = _button("关闭 · Esc")
	close_button.name = "CloseGallery"
	close_button.pressed.connect(func() -> void: close_requested.emit())
	header.add_child(close_button)
	var save_row := HBoxContainer.new()
	save_row.add_theme_constant_override("separation", 10)
	body.add_child(save_row)
	title_input = LineEdit.new()
	title_input.name = "GalleryTitle"
	title_input.placeholder_text = "给这座河湾起个名字"
	title_input.tooltip_text = "输入河湾名称并按 Enter 或点击右侧「收藏这一刻」，生成独立可编辑版本"
	title_input.max_length = 64
	title_input.clear_button_enabled = true
	title_input.custom_minimum_size.y = 44
	title_input.size_flags_horizontal = Control.SIZE_EXPAND_FILL
	title_input.add_theme_color_override("font_color", UI.INK)
	title_input.add_theme_color_override("font_placeholder_color", UI.MUTED)
	title_input.add_theme_stylebox_override("normal", UI.inset(14, 9, false))
	title_input.add_theme_stylebox_override("focus", UI.inset(14, 9, true))
	title_input.text_submitted.connect(func(_text: String) -> void: _request_save())
	save_row.add_child(title_input)
	save_button = _button("收藏这一刻")
	save_button.name = "SaveGalleryVersion"
	save_button.tooltip_text = "将当前建筑、路网、居民行程与镜头光线完整留存为新版本"
	UI.primary(save_button)
	save_button.pressed.connect(_request_save)
	save_row.add_child(save_button)
	status_label = _label(_status, 14)
	status_label.add_theme_color_override("font_color", UI.MUTED)
	status_label.visible = not _status.is_empty()
	body.add_child(status_label)
	body.add_child(HSeparator.new())
	tabs = TabBar.new()
	tabs.name = "GalleryTabs"
	tabs.add_theme_stylebox_override("tab_selected", UI.button("pressed", true))
	tabs.add_theme_stylebox_override("tab_unselected", UI.button("normal"))
	tabs.add_theme_stylebox_override("tab_hovered", UI.button("hover"))
	tabs.add_theme_stylebox_override("tab_disabled", UI.button("disabled"))
	tabs.add_theme_color_override("font_selected_color", UI.PAPER)
	tabs.add_theme_color_override("font_unselected_color", UI.INK)
	tabs.add_theme_color_override("font_hovered_color", UI.INK)
	tabs.add_tab("我的作品")
	tabs.add_tab("官方示范河湾")
	tabs.current_tab = 1 if _examples_selected else 0
	tabs.tab_changed.connect(func(index: int) -> void:
		_examples_selected = index == 1
		scroll.scroll_vertical = 0
		_render_items())
	body.add_child(tabs)
	scroll = ScrollContainer.new()
	scroll.name = "GalleryScroll"
	scroll.size_flags_vertical = Control.SIZE_EXPAND_FILL
	scroll.size_flags_horizontal = Control.SIZE_EXPAND_FILL
	scroll.custom_minimum_size.y = 140
	scroll.horizontal_scroll_mode = ScrollContainer.SCROLL_MODE_DISABLED
	scroll.vertical_scroll_mode = ScrollContainer.SCROLL_MODE_AUTO
	scroll.follow_focus = true
	body.add_child(scroll)
	var collection := VBoxContainer.new()
	collection.size_flags_horizontal = Control.SIZE_EXPAND_FILL
	scroll.add_child(collection)
	empty_label = _label("这里会留下你造过的河湾。\n为当前作品起名，收藏第一张风景。", 16, false)
	empty_label.horizontal_alignment = HORIZONTAL_ALIGNMENT_CENTER
	empty_label.custom_minimum_size.y = 130
	empty_label.vertical_alignment = VERTICAL_ALIGNMENT_CENTER
	collection.add_child(empty_label)
	grid = GridContainer.new()
	grid.name = "GalleryCards"
	grid.size_flags_horizontal = Control.SIZE_EXPAND_FILL
	grid.add_theme_constant_override("h_separation", 14)
	grid.add_theme_constant_override("v_separation", 14)
	collection.add_child(grid)
	footer = _label("", 13)
	footer.add_theme_color_override("font_color", UI.MUTED)
	body.add_child(footer)
	resized.connect(_queue_fit)
	# Wrapping text is measured again after containers assign a real width.
	# Refit when that minimum settles instead of keeping the first tall box.
	panel.minimum_size_changed.connect(_queue_fit)
	_render_items()
	set_busy(_busy)
	_fit()
	hide()

func refresh(items: Array) -> void:
	_items = items.duplicate(true)
	if is_node_ready(): _render_items()

func refresh_examples(items: Array) -> void:
	_examples = items.duplicate(true)
	if is_node_ready() and _examples_selected: _render_items()

func select_examples() -> void:
	if _busy: return
	_examples_selected = true
	if is_node_ready(): tabs.current_tab = 1

func set_status(text: String) -> void:
	_status = text
	if status_label != null:
		status_label.text = text
		status_label.visible = not text.is_empty()
		_queue_fit()

func set_busy(value: bool) -> void:
	_busy = value
	if save_button == null: return
	save_button.disabled = value
	close_button.disabled = value
	title_input.editable = not value
	for index in range(tabs.tab_count): tabs.set_tab_disabled(index, value)
	for id: String in open_buttons:
		var button: Button = open_buttons[id]
		button.disabled = value or not bool(button.get_meta("valid", false))

func _request_save() -> void:
	if not _busy: save_requested.emit(title_input.text.strip_edges())

func _input(event: InputEvent) -> void:
	if is_visible_in_tree() and event is InputEventKey and event.is_pressed() and not event.is_echo() and event.keycode == KEY_ESCAPE:
		get_viewport().set_input_as_handled()
		if not _busy: close_requested.emit()

func _queue_fit() -> void:
	if _fit_queued: return
	_fit_queued = true
	_fit.call_deferred()

func _fit() -> void:
	_fit_queued = false
	if panel == null: return
	var available := size
	var target := Vector2(minf(1160.0, available.x - 64.0), minf(772.0, available.y - 64.0))
	grid.columns = clampi(floori((target.x - 44.0 - 20.0 + 14.0) / 314.0), 1, 3)
	panel.size = target
	panel.position = (available - panel.size) * 0.5

func _render_items() -> void:
	for child: Node in grid.get_children():
		grid.remove_child(child)
		child.queue_free()
	cards.clear()
	open_buttons.clear()
	var visible_items: Array = _examples if _examples_selected else _items
	empty_label.text = "示范河湾正在准备。" if _examples_selected else "这里会留下你造过的河湾。\n为当前作品起名，收藏第一张风景。"
	empty_label.visible = visible_items.is_empty()
	footer.text = "从示范河湾出发，添上自己的变化，再收藏这一刻。" if _examples_selected else "打开其他作品前，会自动留存当前河湾。\n每次收藏都留下一个新版本，可以随时回来继续造。"
	for item: Dictionary in visible_items:
		var id := str(item.id)
		var valid := bool(item.get("valid", false))
		var card := PanelContainer.new()
		card.name = ("Example_" if _examples_selected else "Work_") + id
		card.size_flags_horizontal = Control.SIZE_EXPAND_FILL
		if _examples_selected: card.custom_minimum_size.y = 310
		card.add_theme_stylebox_override("panel", UI.card(12))
		grid.add_child(card)
		cards[id] = card
		var column := VBoxContainer.new()
		column.add_theme_constant_override("separation", 7)
		card.add_child(column)
		var cover := ColorRect.new()
		cover.color = Color("cbd9c5")
		cover.custom_minimum_size.y = 154
		cover.mouse_filter = Control.MOUSE_FILTER_IGNORE
		cover.clip_contents = true
		column.add_child(cover)
		var picture := TextureRect.new()
		picture.name = "Cover"
		picture.texture = _cover(str(item.get("cover_path", "")))
		picture.expand_mode = TextureRect.EXPAND_IGNORE_SIZE
		picture.stretch_mode = TextureRect.STRETCH_KEEP_ASPECT_COVERED
		picture.mouse_filter = Control.MOUSE_FILTER_IGNORE
		picture.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
		cover.add_child(picture)
		var title := _label(str(item.get("title", "未命名河湾")), 18)
		title.max_lines_visible = 2
		title.text_overrun_behavior = TextServer.OVERRUN_TRIM_ELLIPSIS
		column.add_child(title)
		if _examples_selected:
			var summary := _label(str(item.get("summary", "")), 14)
			summary.name = "ExampleSummary"
			summary.custom_minimum_size.y = 44
			summary.size_flags_vertical = Control.SIZE_EXPAND_FILL
			summary.max_lines_visible = 3
			summary.text_overrun_behavior = TextServer.OVERRUN_TRIM_ELLIPSIS
			summary.tooltip_text = summary.text
			column.add_child(summary)
		else:
			var date := _label(_date(int(item.get("saved_at", 0))), 12)
			date.add_theme_color_override("font_color", UI.MUTED)
			column.add_child(date)
			var stats: Dictionary = item.get("stats", {})
			column.add_child(_label("%d 座房屋 · %d 个房间 · %d 场演出" % [int(stats.get("houses", 0)), int(stats.get("rooms", 0)), int(stats.get("concerts", 0))], 13))
			var reason := _label("手动收藏" if str(item.get("reason", "manual")) == "manual" else "自动留存", 12)
			reason.add_theme_color_override("font_color", UI.MUTED)
			column.add_child(reason)
		if not valid:
			var fallback := "这座示范河湾暂时无法打开。" if _examples_selected else "作品文件损坏，当前无法打开。"
			var message := str(item.get("message", fallback))
			var warning := _label(message if not message.is_empty() else fallback, 13)
			warning.add_theme_color_override("font_color", UI.WARM_WARN)
			column.add_child(warning)
		var is_example := _examples_selected
		var open_button := _button("游玩这座河湾" if is_example else "打开这座河湾")
		open_button.name = "PlayExample" if is_example else "OpenWork"
		open_button.set_meta("valid", valid)
		open_button.disabled = _busy or not valid
		open_button.pressed.connect(func() -> void:
			if _busy: return
			if is_example: example_requested.emit(id)
			else: open_requested.emit(id))
		column.add_child(open_button)
		open_buttons[id] = open_button
	_queue_fit()

func _cover(path: String) -> Texture2D:
	if path.is_empty(): return null
	if not _covers.has(path):
		if FileAccess.file_exists(path):
			var image := Image.load_from_file(path)
			if image != null and not image.is_empty(): _covers[path] = ImageTexture.create_from_image(image)
		elif path.begins_with("res://") and ResourceLoader.exists(path):
			# Exported built-in covers use Godot's imported texture remap.
			_covers[path] = load(path)
	return _covers.get(path)

func _date(saved_at: int) -> String:
	if saved_at <= 0: return "保存时间未知"
	var saved_seconds := floori(float(saved_at) / 1000.0)
	var local_bias: int = Time.get_time_zone_from_system().get("bias", 0)
	return Time.get_datetime_string_from_unix_time(saved_seconds + local_bias * 60).replace("T", " ")

func _label(text: String, font_size: int, wrap: bool = true) -> Label:
	var label := Label.new()
	label.text = text
	label.autowrap_mode = TextServer.AUTOWRAP_WORD_SMART if wrap else TextServer.AUTOWRAP_OFF
	# A wrapping label must have a useful width even on its first layout pass;
	# otherwise an initial zero-width measure turns every glyph into a line.
	if wrap: label.custom_minimum_size.x = 180
	label.add_theme_font_size_override("font_size", font_size)
	label.mouse_filter = Control.MOUSE_FILTER_IGNORE
	return label

func _button(text: String) -> Button:
	var button := Button.new()
	button.text = text
	button.custom_minimum_size.y = 40
	return button
