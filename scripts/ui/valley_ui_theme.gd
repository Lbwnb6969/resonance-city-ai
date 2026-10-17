extends RefCounted
## One material language for planning, listening and the city chrome.
const INK := Color("243f3a")
const MUTED := Color("6d7c70")
const PAPER := Color("f6f0e1")
const GREEN := Color("284f46")
const GOLD := Color("c4a568")

static func panel(padding: float = 20.0) -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	style.bg_color = PAPER
	style.border_color = Color("d4cbb6")
	style.set_border_width_all(1)
	style.set_corner_radius_all(12)
	style.shadow_color = Color("182e27",0.18)
	style.shadow_size = 12
	style.shadow_offset = Vector2(0,5)
	style.content_margin_left = padding
	style.content_margin_right = padding
	style.content_margin_top = padding
	style.content_margin_bottom = padding
	return style

static func button(state: String,primary: bool = false) -> StyleBoxFlat:
	var style := StyleBoxFlat.new()
	if primary:
		style.bg_color = GREEN.lightened(0.12) if state == "hover" else GREEN.darkened(0.08) if state == "pressed" else GREEN
		if state == "disabled": style.bg_color = Color("d7ddcc")
		style.border_color = GOLD if state == "focus" else style.bg_color
	else:
		style.bg_color = Color("e7e8d9") if state == "hover" else Color("d8dfcc") if state == "pressed" else Color("f1eddf")
		style.border_color = GOLD if state == "focus" else Color("d5d1bf")
	style.set_border_width_all(2 if state == "focus" else 1)
	style.set_corner_radius_all(6)
	style.content_margin_left = 14
	style.content_margin_right = 14
	style.content_margin_top = 9
	style.content_margin_bottom = 9
	return style

static func make_theme() -> Theme:
	var result := Theme.new()
	result.default_font_size = 14
	for state: String in ["normal","hover","pressed","disabled","focus"]:
		result.set_stylebox(state,"Button",button(state))
	for state: String in ["font_color","font_hover_color","font_pressed_color","font_focus_color"]:
		result.set_color(state,"Button",INK)
	result.set_color("font_disabled_color","Button",Color("9b9f8c"))
	result.set_color("font_color","Label",INK)
	result.set_constant("outline_size","Button",0)
	return result

static func primary(target: Button) -> void:
	for state: String in ["normal","hover","pressed","disabled","focus"]:
		target.add_theme_stylebox_override(state,button(state,true))
	for state: String in ["font_color","font_hover_color","font_pressed_color","font_focus_color"]:
		target.add_theme_color_override(state,PAPER)
	target.add_theme_color_override("font_disabled_color",Color("82927e"))
