extends RefCounted
## The legacy terrain panel is hidden by UI61. Reuse its real controls in
## a compact dock card rather than maintaining a second target-height state.
var panel:PanelContainer
var policy_ui
static func setup(dock)->RefCounted:
	var options:RefCounted=load("res://scripts/ui/city_creation_terrain_target_options.gd").new()
	options.panel=PanelContainer.new();options.panel.name="TerrainTargetCard"
	options.panel.add_theme_stylebox_override("panel",dock.UI.panel(12));dock.popup.add_child(options.panel)
	options.panel.resized.connect(func():dock._position_popup.call_deferred())
	var column:=VBoxContainer.new();options.panel.add_child(column)
	dock.demo.terrain_brush.height_controls.reparent(column);options.policy_ui=preload("res://scripts/ui/city_creation_terrain_policy_controls.gd").setup(dock,column);options.panel.hide()
	return options
func refresh(dock)->void:
	var brush=dock.demo.terrain_brush
	var policy_visible:bool=policy_ui.refresh()
	panel.visible=dock.active_tool==8 and (brush.mode in ["plateau","smooth"] or policy_visible)
	brush.height_controls.visible=panel.visible and brush.mode in ["plateau","smooth"]
	if not panel.visible:return
	brush.target_picker.visible=brush.mode=="plateau";brush.sample_picker.visible=brush.mode=="plateau";brush.height_controls.get_child(0).visible=brush.mode=="plateau"
	if brush.status.text.is_empty() and brush.mode=="smooth":brush.status.text="柔化坡肩 · 1.5米邻域\n屋基、内院和路床保留"
	panel.size=panel.get_combined_minimum_size();var bounds:Vector2=dock.parent.get_viewport_rect().size
	panel.position=Vector2(clampf(dock.bubble_rows.position.x,12.,maxf(12.,bounds.x-panel.size.x-12.)),maxf(12.,dock.bubble_rows.position.y-panel.size.y-8.))
