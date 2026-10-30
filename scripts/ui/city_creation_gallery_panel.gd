extends Control
## Presentation only: the owner handles every save/open request and disk write.
const UI = preload("res://scripts/ui/valley_ui_theme.gd")
const Biomes=preload("res://scripts/world/city_creation_biome_seeds.gd")
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
signal save_requested(title: String)
signal open_requested(id: String)
signal example_requested(id: String)
signal biome_requested(id:String)
signal preview_requested(id:String)
signal stop_requested
signal mode_requested(mode:String)
signal chord_tour_requested(id:String)
signal close_requested

var title_input: LineEdit
var save_button: Button
var close_button: Button
var cards: Dictionary = {}
var open_buttons: Dictionary = {}
var preview_buttons:Dictionary={}
var mode_buttons:Dictionary={}
var playback_row:HBoxContainer
var playback_title:Label
var playback_progress:ProgressBar
var stop_button:Button
var _archive_data:Dictionary={"chords":[],"landmarks":[],"performances":[],"awards":[]}
var _archive_rewards:Array=[]
var _music_mode:=""
var _archive_free:=false
var _playing_id:=""
var _playing_title:=""
var _playing_mode:=""
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
var _biomes_selected:=false
var biome_button:Button
var biome_buttons:Dictionary={}
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
	biome_button=_button("开启新河湾 · 选择声学地貌")
	biome_button.name="ChooseAcousticBiome"
	biome_button.tooltip_text="先自动收藏当前河湾，再从六种地貌开始建造"
	biome_button.pressed.connect(func()->void:
		_biomes_selected=not _biomes_selected;scroll.scroll_vertical=0;_render_items())
	body.add_child(biome_button)
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
	tabs.add_tab("留声机与名胜图鉴")
	tabs.current_tab = 1 if _examples_selected else 0
	tabs.tab_changed.connect(func(index: int) -> void:
		_biomes_selected=false
		_examples_selected = index == 1
		scroll.scroll_vertical = 0
		_render_items())
	body.add_child(tabs)
	playback_row=HBoxContainer.new();playback_row.add_theme_constant_override("separation",12);body.add_child(playback_row)
	var record:Control=preload("res://scripts/ui/city_creation_phonograph_badge.gd").new();playback_row.add_child(record)
	var playing:=VBoxContainer.new();playing.size_flags_horizontal=Control.SIZE_EXPAND_FILL;playback_row.add_child(playing)
	playback_title=_label("",15);playing.add_child(playback_title)
	playback_progress=ProgressBar.new();playback_progress.max_value=24.;playback_progress.show_percentage=false;playback_progress.custom_minimum_size.y=8;playing.add_child(playback_progress)
	stop_button=_button("停下唱针");stop_button.name="StopPhonograph";stop_button.pressed.connect(func()->void:stop_requested.emit());playback_row.add_child(stop_button)
	playback_row.hide()
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
	biome_button.disabled=value
	for seed_button:Button in biome_buttons.values():seed_button.disabled=value
	for b:Button in preview_buttons.values():b.disabled=value or not bool(b.get_meta("valid",false))
	for id:String in mode_buttons:mode_buttons[id].disabled=value or (id!="" and not preload("res://scripts/world/city_creation_archive_rewards.gd").mode_available(id,_archive_rewards,_archive_free))
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
	biome_buttons.clear();preview_buttons.clear();mode_buttons.clear()
	if _biomes_selected:
		_render_biomes();return
	if tabs.current_tab==2:
		_render_archive();return
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
		if not is_example:
			var listen:=_button("♫ 回放这座河湾" if id!=_playing_id else "♫ 正在回放")
			listen.name="ListenWork";listen.set_meta("valid",valid);listen.disabled=_busy or not valid
			listen.pressed.connect(func()->void:
				if not _busy:preview_requested.emit(id))
			column.add_child(listen);preview_buttons[id]=listen
	_queue_fit()

func _render_biomes()->void:
	empty_label.hide()
	footer.text="选择印章开启新河湾。当前作品会先自动留存，随时可以回来继续。"
	if preload("res://scripts/world/city_creation_archive_rewards.gd").heritage_available(_archive_rewards):footer.text+="\n旧城留下的灵感相伴 · 新河湾任选一页传世手札。"
	for i in range(Biomes.IDS.size()):
		var id:String=Biomes.IDS[i]
		var card:=Button.new();card.name="Biome_"+id
		card.custom_minimum_size=Vector2(250,176);card.size_flags_horizontal=Control.SIZE_EXPAND_FILL
		card.add_theme_stylebox_override("normal",UI.card(14))
		card.add_theme_stylebox_override("hover",UI.button("hover"))
		card.disabled=_busy;card.tooltip_text=Biomes.DESCRIPTIONS[i]
		var column:=VBoxContainer.new();column.mouse_filter=Control.MOUSE_FILTER_IGNORE
		column.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
		column.offset_left=14;column.offset_right=-14;column.offset_top=12;column.offset_bottom=-12
		card.add_child(column)
		var heading:=HBoxContainer.new();heading.mouse_filter=Control.MOUSE_FILTER_IGNORE;column.add_child(heading)
		var seal:=Button.new();seal.set_script(Seal);seal.configure(Biomes.GLYPHS[i],46.)
		seal.mouse_filter=Control.MOUSE_FILTER_IGNORE;heading.add_child(seal)
		heading.add_child(_label(Biomes.NAMES[i],20,false))
		column.add_child(_label(Biomes.DESCRIPTIONS[i],15))
		var music_label:=_label(Biomes.music_name(Biomes.descriptor(id)),13,false)
		music_label.add_theme_color_override("font_color",UI.MUTED);column.add_child(music_label)
		if id=="daily_resonance":column.add_child(_label(Time.get_date_string_from_system(),12,false))
		card.pressed.connect(func()->void:
			if not _busy:biome_requested.emit(id))
		grid.add_child(card);biome_buttons[id]=card
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

func refresh_archive(data:Dictionary,rewards:Array,mode:String,free:bool=false)->void:
	_archive_data=data.duplicate(true);_archive_rewards=rewards.duplicate();_music_mode=mode;_archive_free=free
	if is_node_ready() and tabs.current_tab==2 and not _biomes_selected:_render_items()

func set_playing(id:String,title:String,mode:String)->void:
	_playing_id=id;_playing_title=title;_playing_mode=mode
	playback_row.visible=not id.is_empty()
	playback_title.text="留声机 · "+title+" · "+mode
	for key:String in preview_buttons:preview_buttons[key].text="♫ 正在回放" if key==id else "♫ 回放这座河湾"
	_queue_fit()

func _archive_card(title:String,text:String)->VBoxContainer:
	var card:=PanelContainer.new();card.add_theme_stylebox_override("panel",UI.card(14));card.size_flags_horizontal=Control.SIZE_EXPAND_FILL;grid.add_child(card)
	var column:=VBoxContainer.new();column.add_theme_constant_override("separation",8);card.add_child(column)
	column.add_child(_label(title,18));var copy:=_label(text,14);copy.add_theme_color_override("font_color",UI.MUTED);column.add_child(copy)
	return column

func _render_archive()->void:
	empty_label.hide()
	footer.text="图鉴跨河湾保留。我的作品中点「回放」放下唱针；关闭收藏，继续原来的城市。"
	preload("res://scripts/ui/city_creation_archive_collection.gd").render(self)
	var rewards=preload("res://scripts/world/city_creation_archive_rewards.gd")
	for id:String in rewards.IDS:
		var earned:bool=id in _archive_rewards
		var text:String=("历次河湾收录声学和弦 %d / 5。"%_archive_data.get("chords",[]).size()) if id=="five_chords" else "完成一次至少100屋、四时代参与的24秒地标盛典。"
		text+=("自由创作已可选择对应饰色与调式；图鉴保留真实记录。" if _archive_free else "解锁青瓷与黛瓦、C宫五声。" if id=="five_chords" else "解锁月石与鸢尾、F大七调式。")
		_archive_card(("✓ " if earned else "○ ")+str(rewards.NAMES[id]),text)
	var modes:=_archive_card("为当前河湾选择调式","按下一枚唱片，新的建造、日常合奏与地标乐章一起换调。")
	for id:String in ["","gong_pentatonic","impressionist_major7"]:
		var b:=_button(("✓ " if id==_music_mode else "")+str(rewards.MODE_NAMES.get(id,"地貌原声")))
		b.name="Mode_"+("automatic" if id.is_empty() else id)
		b.disabled=_busy or (not id.is_empty() and not rewards.mode_available(id,_archive_rewards,_archive_free))
		b.tooltip_text="用于当前河湾" if not b.disabled else "达成对应图鉴成就后解锁"
		b.pressed.connect(func()->void:
			if not _busy:mode_requested.emit(id))
		modes.add_child(b);mode_buttons[id]=b
	var signatures=preload("res://scripts/world/city_creation_signatures.gd")
	for id:String in signatures.IDS:
		var built:bool=id in _archive_data.get("landmarks",[])
		var heard:bool=id in _archive_data.get("performances",[])
		_archive_card(("♫ " if heard else "✓ " if built else "○ ")+str(signatures.NAMES[id]),("传世乐章已聆听。" if heard else "已建成；奏响一次完整乐章留下唱片印记。" if built else "尚未在自己的河湾中发现。")+"\n"+str(signatures.LOCAL_EFFECTS[id]))
	_queue_fit()
