extends RefCounted
## One minimalist material language for planning, listening, and the city chrome.
## Warm cotton paper, deep botanical ink, muted sage, and soft brass gold.
const INK := Color("243f3a")
const MUTED := Color("6d7c70")
const PAPER := Color("f6f0e1")
const CARD := Color("ede7d6")
const INSET := Color("faf6ec")
const BORDER := Color("d4cbb6")
const BORDER_SOFT := Color("dfd8c6")
const GREEN := Color("284f46")
const GREEN_SOFT := Color("366358")
const GOLD := Color("c4a568")
const WARM_WARN := Color("946957")

static func panel(padding: float = 20.0) -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	style.bg_color = Color(PAPER.r, PAPER.g, PAPER.b, 0.96)
	style.border_color = BORDER
	style.set_border_width_all(1)
	style.set_corner_radius_all(12)
	style.shadow_color = Color("182e27", 0.16)
	style.shadow_size = 14
	style.shadow_offset = Vector2(0, 5)
	style.content_margin_left = padding
	style.content_margin_right = padding
	style.content_margin_top = padding
	style.content_margin_bottom = padding
	return style

static func card(padding: float = 12.0) -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	style.bg_color = CARD
	style.border_color = BORDER_SOFT
	style.set_border_width_all(1)
	style.set_corner_radius_all(8)
	style.shadow_size = 0
	style.content_margin_left = padding
	style.content_margin_right = padding
	style.content_margin_top = padding
	style.content_margin_bottom = padding
	return style

static func inset(padding_h: float = 12.0, padding_v: float = 8.0, focused: bool = false) -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	style.bg_color = INSET
	style.border_color = GOLD if focused else Color("d5d1bf")
	style.set_border_width_all(2 if focused else 1)
	style.set_corner_radius_all(6)
	style.content_margin_left = padding_h
	style.content_margin_right = padding_h
	style.content_margin_top = padding_v
	style.content_margin_bottom = padding_v
	return style

static func badge(bg: Color = Color("e4eadc")) -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	style.bg_color = bg
	style.border_color = Color("cdd6c4")
	style.set_border_width_all(1)
	style.set_corner_radius_all(6)
	style.content_margin_left = 10
	style.content_margin_right = 10
	style.content_margin_top = 5
	style.content_margin_bottom = 5
	return style

static func toast_style(padding: float = 12.0) -> StyleBoxFlat:
	var style := panel(padding)
	style.bg_color = Color(GREEN.r, GREEN.g, GREEN.b, 0.96)
	style.border_color = GOLD
	style.set_corner_radius_all(10)
	return style

static func button(state: String, primary_mode: bool = false) -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	if primary_mode:
		style.bg_color = GREEN.lightened(0.12) if state == "hover" else GREEN.darkened(0.08) if state == "pressed" else GREEN
		if state == "disabled": style.bg_color = Color("d7ddcc")
		style.border_color = GOLD if state == "focus" else style.bg_color
	else:
		style.bg_color = Color("e7e8d9") if state == "hover" else Color("d8dfcc") if state == "pressed" else Color("f1eddf")
		if state == "disabled": style.bg_color = Color("eae6d8")
		style.border_color = GOLD if state == "focus" else Color("d5d1bf")
	style.set_border_width_all(2 if state == "focus" else 1)
	style.set_corner_radius_all(6)
	style.content_margin_left = 14
	style.content_margin_right = 14
	style.content_margin_top = 8
	style.content_margin_bottom = 8
	return style

static func subtle_button(state: String) -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	style.bg_color = Color("e7e8d9", 0.85) if state == "hover" else Color("d8dfcc", 0.95) if state == "pressed" else Color("f1eddf", 0.55)
	style.border_color = GOLD if state == "focus" else Color("dcd6c4")
	style.set_border_width_all(1)
	style.set_corner_radius_all(6)
	style.content_margin_left = 10
	style.content_margin_right = 10
	style.content_margin_top = 6
	style.content_margin_bottom = 6
	return style

static func progress_bg() -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	style.bg_color = Color("e1dccb")
	style.border_color = Color("d2cbb8")
	style.set_border_width_all(1)
	style.set_corner_radius_all(4)
	return style

static func progress_fill() -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	style.bg_color = GREEN_SOFT
	style.border_color = GOLD
	style.border_width_right = 1
	style.set_corner_radius_all(4)
	return style

static func scroll_track() -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	style.bg_color = Color("ebe5d5", 0.5)
	style.set_corner_radius_all(4)
	style.content_margin_left = 3
	style.content_margin_right = 3
	return style

static func scroll_grabber(state: String) -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	style.bg_color = GREEN_SOFT if state == "pressed" else Color("8b9c8e") if state == "hover" else Color("b5beaf")
	style.set_corner_radius_all(4)
	style.content_margin_left = 3
	style.content_margin_right = 3
	return style

static func separator_line() -> StyleBoxLine:
	var line := StyleBoxLine.new()
	line.color = Color("dad2bf")
	line.thickness = 1
	line.content_margin_top = 2
	line.content_margin_bottom = 2
	return line

static func make_theme() -> Theme:
	var result := Theme.new()
	result.default_font_size = 14
	for control_type: String in ["Button", "OptionButton", "CheckButton", "CheckBox"]:
		for state: String in ["normal", "hover", "pressed", "disabled", "focus"]:
			result.set_stylebox(state, control_type, button(state))
		result.set_stylebox("hover_pressed", control_type, button("pressed"))
		for color_key: String in ["font_color", "font_hover_color", "font_pressed_color", "font_hover_pressed_color", "font_focus_color"]:
			result.set_color(color_key, control_type, INK)
		result.set_color("font_disabled_color", control_type, Color("9b9f8c"))
		result.set_constant("outline_size", control_type, 0)
	result.set_color("font_color", "Label", INK)
	result.set_color("default_color", "RichTextLabel", INK)
	# LineEdit
	result.set_stylebox("normal", "LineEdit", inset(12, 8, false))
	result.set_stylebox("focus", "LineEdit", inset(12, 8, true))
	result.set_stylebox("read_only", "LineEdit", button("disabled"))
	result.set_color("font_color", "LineEdit", INK)
	result.set_color("font_uneditable_color", "LineEdit", MUTED)
	result.set_color("font_placeholder_color", "LineEdit", MUTED)
	result.set_color("caret_color", "LineEdit", GREEN)
	result.set_color("selection_color", "LineEdit", Color(GOLD.r, GOLD.g, GOLD.b, 0.35))
	# ProgressBar
	result.set_stylebox("background", "ProgressBar", progress_bg())
	result.set_stylebox("fill", "ProgressBar", progress_fill())
	result.set_color("font_color", "ProgressBar", INK)
	# PopupMenu (for OptionButton dropdowns)
	var popup_bg := panel(8)
	popup_bg.set_corner_radius_all(8)
	result.set_stylebox("panel", "PopupMenu", popup_bg)
	var popup_hover := button("hover")
	popup_hover.set_corner_radius_all(5)
	result.set_stylebox("hover", "PopupMenu", popup_hover)
	result.set_stylebox("separator", "PopupMenu", separator_line())
	result.set_color("font_color", "PopupMenu", INK)
	result.set_color("font_hover_color", "PopupMenu", INK)
	result.set_color("font_disabled_color", "PopupMenu", Color("9b9f8c"))
	result.set_constant("v_separation", "PopupMenu", 6)
	# ScrollBars
	for bar_type: String in ["VScrollBar", "HScrollBar"]:
		result.set_stylebox("scroll", bar_type, scroll_track())
		result.set_stylebox("scroll_focus", bar_type, scroll_track())
		result.set_stylebox("grabber", bar_type, scroll_grabber("normal"))
		result.set_stylebox("grabber_highlight", bar_type, scroll_grabber("hover"))
		result.set_stylebox("grabber_pressed", bar_type, scroll_grabber("pressed"))
	# Separators
	result.set_stylebox("separator", "HSeparator", separator_line())
	result.set_stylebox("separator", "VSeparator", separator_line())
	# TabBar
	result.set_stylebox("tab_selected", "TabBar", button("pressed", true))
	result.set_stylebox("tab_unselected", "TabBar", button("normal"))
	result.set_stylebox("tab_hovered", "TabBar", button("hover"))
	result.set_stylebox("tab_disabled", "TabBar", button("disabled"))
	result.set_color("font_selected_color", "TabBar", PAPER)
	result.set_color("font_unselected_color", "TabBar", INK)
	result.set_color("font_hovered_color", "TabBar", INK)
	result.set_color("font_disabled_color", "TabBar", Color("9b9f8c"))
	# Tooltips
	var tip_box := panel(10)
	tip_box.set_corner_radius_all(6)
	tip_box.bg_color = Color("faf6eb", 0.98)
	tip_box.border_color = GOLD
	result.set_stylebox("panel", "TooltipPanel", tip_box)
	result.set_color("font_color", "TooltipLabel", INK)
	return result

static func primary(target: Button) -> void:
	for state: String in ["normal", "hover", "pressed", "disabled", "focus"]:
		target.add_theme_stylebox_override(state, button(state, true))
	for state: String in ["font_color", "font_hover_color", "font_pressed_color", "font_focus_color"]:
		target.add_theme_color_override(state, PAPER)
	target.add_theme_color_override("font_disabled_color", Color("82927e"))

static func subtle(target: Button) -> void:
	for state: String in ["normal", "hover", "pressed", "disabled", "focus"]:
		target.add_theme_stylebox_override(state, subtle_button(state))
	for state: String in ["font_color", "font_hover_color", "font_pressed_color", "font_focus_color"]:
		target.add_theme_color_override(state, INK)
	target.add_theme_color_override("font_disabled_color", Color("9b9f8c"))
