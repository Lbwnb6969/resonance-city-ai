extends RefCounted
## Arrange the imported paper controls without changing their gameplay owners.
const UI = preload("res://scripts/ui/valley_ui_theme.gd")

static func setup(demo: Node3D) -> void:
	var header: VBoxContainer = demo.gallery_button.get_parent()
	var shortcuts := GridContainer.new()
	shortcuts.name = "PaperShortcuts"
	shortcuts.columns = 2
	shortcuts.add_theme_constant_override("h_separation", 6)
	shortcuts.add_theme_constant_override("v_separation", 6)
	header.add_child(shortcuts)
	var audition: Button = header.get_node("HouseAudition")
	var guide: Button = demo._button("手札 · F1", func() -> void: demo.guide.open_panel())
	guide.name = "OpenGuide"
	guide.tooltip_text = "营造手势、生活进化、声学与时代、快捷键 · F1"
	header.add_child(guide)
	var buttons: Array[Button] = [demo.gallery_button, audition, demo.journal.button, demo.signatures.button, demo.ledger.button, guide]
	var captions := ["作品 · Ctrl+O", "♫ 试听 · P", "河湾手记 · J", "地标名胜", "生活账本 · L", "手札 · F1"]
	for i in range(buttons.size()):
		var button := buttons[i]
		button.reparent(shortcuts)
		button.text = captions[i]
		button.add_theme_font_size_override("font_size", 13)
		button.size_flags_horizontal = Control.SIZE_EXPAND_FILL
		button.custom_minimum_size.y = 34
	demo.journal.button.set_meta("compact", true)
	var toggle: Button = demo._button("营造小目标  ▸", func() -> void: pass)
	toggle.name = "ToggleCityDetails"
	toggle.toggle_mode = true
	toggle.add_theme_font_size_override("font_size", 13)
	UI.subtle(toggle)
	header.add_child(toggle)
	var details := VBoxContainer.new()
	details.name = "CityDetails"
	details.add_theme_constant_override("separation", 8)
	header.add_child(details)
	demo.quest.reparent(details)
	demo.life_info.reparent(details)
	details.hide()
	toggle.toggled.connect(func(expanded: bool) -> void:
		details.visible = expanded
		toggle.text = "收起营造小目标  ▾" if expanded else "营造小目标  ▸"
		# Containers otherwise retain their former height after folding.
		header.get_parent().set_deferred("size", Vector2.ZERO))
