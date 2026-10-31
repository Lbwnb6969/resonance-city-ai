extends RefCounted
var demo
var column:VBoxContainer
var preview_button:Button
var apply_button:Button
var cancel_button:Button
var message:Label
var plan:Dictionary={}
static func setup(dock,parent:Control)->RefCounted:
	var ui:RefCounted=load("res://scripts/ui/city_creation_terrain_policy_controls.gd").new();ui.demo=dock.demo
	ui.column=VBoxContainer.new();ui.column.name="ActivityTerrainOptions";parent.add_child(ui.column)
	ui.preview_button=Button.new();ui.preview_button.name="PreviewActivityTerrain";ui.preview_button.text="预览解除街景地形锁定";ui.preview_button.focus_mode=Control.FOCUS_NONE;ui.preview_button.pressed.connect(ui.preview);ui.column.add_child(ui.preview_button)
	ui.message=Label.new();ui.message.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;ui.message.custom_minimum_size.x=250;ui.message.add_theme_font_size_override("font_size",13);ui.column.add_child(ui.message)
	var row:=HBoxContainer.new();ui.column.add_child(row)
	ui.apply_button=Button.new();ui.apply_button.name="ApplyActivityTerrain";ui.apply_button.text="采用新地形规则";ui.apply_button.focus_mode=Control.FOCUS_NONE;ui.apply_button.pressed.connect(ui.apply);row.add_child(ui.apply_button)
	ui.cancel_button=Button.new();ui.cancel_button.name="CancelActivityTerrain";ui.cancel_button.text="取消预览";ui.cancel_button.focus_mode=Control.FOCUS_NONE;ui.cancel_button.pressed.connect(ui.cancel);row.add_child(ui.cancel_button)
	dock.demo.set_meta("terrain_policy_ui",ui)
	return ui
func refresh()->bool:
	column.visible=demo.state.CreationPolicy.is_free(demo.state) and not demo.state.TerrainPolicy.enabled(demo.state)
	if not column.visible:
		if not plan.is_empty():cancel()
		return false
	if not plan.is_empty() and (plan.revision!=demo.state.revision or plan.city_instance!=demo.state.get_instance_id()):cancel()
	apply_button.visible=not plan.is_empty();cancel_button.visible=not plan.is_empty()
	preview_button.disabled=demo.edit_pending() or demo.gallery.busy
	message.text="茶座和聚会坪不再压平大片地面。\n先预览变化，再采用；原作品会另存。" if plan.is_empty() else plan.message
	return true
func preview()->void:
	demo._cancel_draft();plan=demo.state.plan_terrain_policy()
	if not plan.ok:demo._message(plan.message);plan={};return
	if plan.get("no_op",false):plan={};return
	demo.set_meta("terrain_policy_preview",true);demo.town.show_terrain_policy(plan);refresh()
func cancel()->void:
	if plan.is_empty():return
	plan={};demo.set_meta("terrain_policy_preview",false);demo.town.clear_preview();demo.preview_key=""
	if is_instance_valid(apply_button):apply_button.hide();cancel_button.hide()
func keep_preview()->void:
	if plan.is_empty() or plan.revision!=demo.state.revision or plan.city_instance!=demo.state.get_instance_id():cancel();return
	if demo.town.preview.get_node_or_null("TerrainTargetSurface")==null and plan.changed_vertices>0:demo.town.show_terrain_policy(plan)
func apply()->void:
	if plan.is_empty():return
	var planned:Dictionary=plan;cancel();demo.gallery._set_busy(true)
	var backup:Dictionary=await demo.gallery._capture("街景地形调整前的河湾","before_activity_terrain")
	demo.gallery._set_busy(false)
	if not backup.ok:demo._message("原作品未能备份，新地形规则尚未采用");return
	var result:Dictionary=demo.state.apply_terrain_policy(planned)
	if result.ok:result.backup_id=backup.id
	demo._after_edit(result,"terrain");refresh()
