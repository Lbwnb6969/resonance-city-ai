extends RefCounted
## One terrain gesture stays a preview until its actual mouse release.
const UI = preload("res://scripts/ui/valley_ui_theme.gd")
const MODES := ["raise", "lower", "reset", "rock", "plateau", "smooth"]
const RADII := [2.0, 3.5, 5.0]
const POINT_SPACING := 0.35
const STRENGTH := 0.65
const HINT := "拖出草丘与洼地，再柔化陡峭坡肩。\n房屋、小路、内院和聚会处留平地。\nShift 临时压低，Esc 取消。"
var demo: Node3D
var panel: PanelContainer
var mode_picker: OptionButton
var radius_picker: OptionButton
var natural_picker: CheckBox
var mode := "raise"
var radius := 3.5
var drawing := false
var points: Array[Vector2] = []
var draft_mode := "raise"
var draft_radius := 3.5
var draft_strength := STRENGTH
var draft_passes := 1
var draft_natural := false


func setup(owner: Node3D, parent: Control) -> void:
	demo = owner
	panel = PanelContainer.new()
	panel.name = "TerrainOptions"
	panel.add_theme_stylebox_override("panel", UI.panel(16))
	parent.add_child(panel)
	panel.set_anchors_and_offsets_preset(Control.PRESET_TOP_RIGHT)
	panel.offset_left = -310
	panel.offset_right = -24
	panel.offset_top = 84
	var column := VBoxContainer.new()
	column.add_theme_constant_override("separation", 8)
	panel.add_child(column)
	column.add_child(demo._label("刻出河湾地貌", 18))
	mode_picker = OptionButton.new()
	mode_picker.name = "TerrainMode"
	mode_picker.focus_mode = Control.FOCUS_NONE
	mode_picker.tooltip_text = "选择地形塑形方式：草丘、洼地、还原、露岩、平顶台地或柔化缓坡"
	for label: String in ["抬高 · 草丘", "压低 · 洼地", "还原 · 原地貌", "露岩 · 草丘", "平顶 · 台地", "柔化 · 缓坡"]:
		mode_picker.add_item(label)
	mode_picker.item_selected.connect(func(index: int) -> void:
		demo._cancel_draft()
		mode = MODES[index]
		natural_picker.disabled = mode in ["reset", "smooth"]
		if mode == "rock":
			radius = 2.0
			radius_picker.select(0)
		elif mode == "plateau":
			radius = 3.5
			radius_picker.select(1))
	column.add_child(mode_picker)
	radius_picker = OptionButton.new()
	radius_picker.name = "TerrainRadius"
	radius_picker.focus_mode = Control.FOCUS_NONE
	radius_picker.tooltip_text = "选择地形笔刷影响半径（2米 / 3.5米 / 5米）"
	for label: String in ["小笔刷 · 2 米", "中笔刷 · 3.5 米", "大笔刷 · 5 米"]:
		radius_picker.add_item(label)
	radius_picker.select(1)
	radius_picker.item_selected.connect(func(index: int) -> void:
		demo._cancel_draft()
		radius = RADII[index])
	column.add_child(radius_picker)
	natural_picker = CheckBox.new()
	natural_picker.name = "NaturalContour"
	natural_picker.text = "自然轮廓 · 草丘 / 石坡 / 台地"
	natural_picker.tooltip_text = "启用双层有机噪声收放坡肩，关闭则画出规整圆丘与几何台地"
	natural_picker.button_pressed = true
	natural_picker.focus_mode = Control.FOCUS_NONE
	natural_picker.toggled.connect(func(_enabled: bool) -> void: demo._cancel_draft())
	column.add_child(natural_picker)
	var description: Label = demo._label(HINT, 14)
	description.autowrap_mode = TextServer.AUTOWRAP_WORD_SMART
	description.custom_minimum_size.x = 250
	column.add_child(description)
	var note: Label = demo._label("拖动时描出整笔范围，松手后塑形。\n外圈标最大范围，内圈标保证平顶。\n自然轮廓只改变范围内的坡肩。", 13)
	note.add_theme_color_override("font_color", UI.MUTED)
	column.add_child(note)
	panel.hide()


func select(active: bool) -> void:
	panel.visible = active


func _can_target() -> bool:
	if demo.tool != 8 or not demo.ui_layer.visible or demo.edit_pending(): return false
	if demo.gallery != null and (demo.gallery.busy or demo.gallery.panel.visible): return false
	var viewport := demo.get_viewport()
	var focus: Control = viewport.gui_get_focus_owner()
	if focus is LineEdit or focus is TextEdit: return false
	return viewport.gui_get_hovered_control() == null


func begin(shift_pressed: bool) -> void:
	if not _can_target(): return
	drawing = true
	draft_mode = "lower" if shift_pressed else ("raise" if mode == "rock" else mode)
	draft_strength = 1.0 if mode in ["rock", "plateau"] and not shift_pressed else STRENGTH
	draft_passes = 2 if mode in ["rock", "plateau"] and not shift_pressed else 1
	draft_radius = radius
	draft_natural = natural_picker.button_pressed and draft_mode in ["raise", "lower", "plateau"]
	points.clear()
	append_point()


func append_point() -> void:
	if not drawing: return
	if not _can_target():
		demo.town.clear_preview()
		demo.preview_key = ""
		return
	var at: Vector2 = demo._ground_at(demo.pointer)
	if points.is_empty() or points[-1].distance_to(at) >= POINT_SPACING: points.append(at)
	_preview(points, draft_radius, draft_mode, draft_natural)


func hover() -> void:
	if not _can_target():
		demo.town.clear_preview()
		demo.preview_key = ""
		return
	var at: Vector2 = demo._ground_at(demo.pointer)
	var single: Array[Vector2] = [at]
	var hover_mode := "lower" if demo.removal_shift or Input.is_key_pressed(KEY_SHIFT) else ("raise" if mode == "rock" else mode)
	_preview(single, radius, hover_mode, natural_picker.button_pressed and hover_mode in ["raise", "lower", "plateau"])


func _preview(stroke: Array[Vector2], brush_radius: float, brush_mode: String, natural: bool = false) -> void:
	var key := str(["terrain", stroke, brush_radius, brush_mode, natural])
	if demo.preview_key == key: return
	demo.preview_key = key
	demo.town.show_terrain_brush(stroke, brush_radius, brush_mode, natural)


func finish() -> void:
	if not drawing: return
	if not _can_target():
		demo._cancel_draft()
		return
	append_point()
	var stroke: Array[Vector2] = points.duplicate()
	var stroke_mode := draft_mode
	var stroke_radius := draft_radius
	var stroke_strength := draft_strength
	var stroke_passes := draft_passes
	var stroke_natural := draft_natural
	cancel()
	demo.preview_key = ""
	demo.town.clear_preview()
	if not stroke.is_empty(): demo._after_edit(demo.state.add_terrain_stroke(stroke, stroke_mode, stroke_radius, stroke_strength, stroke_passes, stroke_natural), "terrain")


func cancel() -> void:
	drawing = false
	points.clear()
