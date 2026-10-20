extends RefCounted
## Main palette. Contextual subtool bubbles are added in Stage V.
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
const Icons=preload("res://scripts/ui/city_creation_vector_icons.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")

static func setup(demo:Node3D,parent:Control)->void:
	var toolbar:PanelContainer=parent.get_node("Toolbar")
	var style:=UI.panel(6);style.set_corner_radius_all(30);style.bg_color=Color(UI.PAPER,.85);style.shadow_size=6
	toolbar.add_theme_stylebox_override("panel",style)
	toolbar.offset_left=-284;toolbar.offset_right=284;toolbar.offset_top=-105;toolbar.offset_bottom=-45
	for i in range(demo.tool_buttons.size()):
		var button:Button=demo.tool_buttons[i]
		button.set_script(Seal);button.configure(Icons.TOOL_KINDS[i],48.)
		button.caption=demo.TOOL_NAMES[i];button.key_label=str(i+1)
	for button:Button in [demo.undo_button,demo.redo_button]:
		button.set_script(Seal);button.configure("undo" if button==demo.undo_button else "redo",32.)
