extends RefCounted
## Minimalist in-game reference & acoustic lexicon modal (F1 / button in Journal & Ledger).
const UI = preload("res://scripts/ui/valley_ui_theme.gd")
const Copy = preload("res://scripts/ui/city_creation_copy.gd")

var demo: Node3D
var panel: Control
var paper: PanelContainer
var tabs: TabBar
var body: RichTextLabel
var close_button: Button
var _current_tab: int = 0

func setup(owner: Node3D, parent: Control) -> void:
	demo = owner
	panel = Control.new()
	panel.name = "CreationGuide"
	panel.z_index = 190
	parent.add_child(panel)
	panel.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	panel.mouse_filter = Control.MOUSE_FILTER_STOP
	panel.theme = UI.make_theme()
	var shade := ColorRect.new()
	shade.color = Color(0.08, 0.16, 0.14, 0.58)
	shade.mouse_filter = Control.MOUSE_FILTER_IGNORE
	panel.add_child(shade)
	shade.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	paper = PanelContainer.new()
	paper.name = "GuidePaper"
	paper.add_theme_stylebox_override("panel", UI.panel(24))
	panel.add_child(paper)
	paper.set_anchors_and_offsets_preset(Control.PRESET_CENTER)
	var column := VBoxContainer.new()
	column.add_theme_constant_override("separation", 12)
	paper.add_child(column)
	var heading := HBoxContainer.new()
	heading.add_theme_constant_override("separation", 14)
	column.add_child(heading)
	var title_box := VBoxContainer.new()
	title_box.size_flags_horizontal = Control.SIZE_EXPAND_FILL
	title_box.add_theme_constant_override("separation", 2)
	heading.add_child(title_box)
	title_box.add_child(demo._label("营造与乐理手札", 24))
	var subtitle: Label = demo._label("一砖一瓦皆有回响 · 建筑涌现、街坊烟火与四温区声场指南", 14)
	subtitle.add_theme_color_override("font_color", UI.MUTED)
	title_box.add_child(subtitle)
	close_button = demo._button("回到河湾 · Esc", close_panel)
	close_button.name = "CloseGuide"
	close_button.focus_mode = Control.FOCUS_ALL
	heading.add_child(close_button)
	tabs = TabBar.new()
	tabs.name = "GuideTabs"
	for tab_title: String in Copy.GUIDE_TABS:
		tabs.add_tab(tab_title)
	tabs.current_tab = 0
	tabs.tab_changed.connect(_select_tab)
	column.add_child(tabs)
	var scroll := ScrollContainer.new()
	scroll.name = "GuideScroll"
	scroll.size_flags_vertical = Control.SIZE_EXPAND_FILL
	scroll.horizontal_scroll_mode = ScrollContainer.SCROLL_MODE_DISABLED
	column.add_child(scroll)
	body = RichTextLabel.new()
	body.name = "GuideBody"
	body.bbcode_enabled = false
	body.fit_content = true
	body.scroll_active = false
	body.selection_enabled = true
	body.custom_minimum_size.x = 320
	body.size_flags_horizontal = Control.SIZE_EXPAND_FILL
	body.add_theme_font_size_override("normal_font_size", 15)
	body.add_theme_color_override("default_color", UI.INK)
	body.add_theme_constant_override("line_separation", 6)
	scroll.add_child(body)
	var footer: Label = demo._label("提示：按 F1 可随时打开或收起本手札 · 按 J 查看河湾手记 · 按 L 查看生活账本", 13)
	footer.add_theme_color_override("font_color", UI.MUTED)
	column.add_child(footer)
	preload("res://scripts/ui/city_creation_creation_options.gd").install(demo,column)
	preload("res://scripts/ui/city_creation_music_preferences.gd").install(demo,column)
	panel.resized.connect(_fit)
	_select_tab(0)
	_fit()
	panel.hide()

func _fit() -> void:
	if paper == null or panel == null: return
	var dimensions := Vector2(minf(860.0, panel.size.x - 48.0), minf(660.0, panel.size.y - 64.0))
	paper.offset_left = -dimensions.x * 0.5
	paper.offset_right = dimensions.x * 0.5
	paper.offset_top = -dimensions.y * 0.5
	paper.offset_bottom = dimensions.y * 0.5

func _select_tab(index: int) -> void:
	_current_tab = clampi(index, 0, Copy.GUIDE_TABS.size() - 1)
	if body != null:
		body.text = preload("res://scripts/ui/city_creation_creation_options.gd").guide_text(demo,_current_tab,Copy.guide_tab_text(_current_tab))

func open_panel(tab_index: int = -1) -> void:
	if demo.edit_pending() or (demo.gallery != null and demo.gallery.busy): return
	demo._cancel_draft()
	demo.orbiting = false
	demo.panning = false
	demo.town.clear_preview()
	if demo.journal != null and demo.journal.panel.visible:
		demo.journal.close_panel()
	if demo.ledger != null and demo.ledger.visible():
		demo.ledger.close_panel()
	if tab_index >= 0:
		tabs.current_tab = clampi(tab_index, 0, Copy.GUIDE_TABS.size() - 1)
	_select_tab(tabs.current_tab)
	demo.ui_layer.visible = true
	panel.show()
	_fit()
	close_button.grab_focus()

func close_panel() -> void:
	panel.hide()
	close_button.release_focus()
	demo.preview_key = ""

func visible() -> bool:
	return panel != null and panel.visible
