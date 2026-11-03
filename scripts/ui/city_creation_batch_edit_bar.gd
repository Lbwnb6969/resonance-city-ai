extends Control
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Batch=preload("res://scripts/world/city_creation_batch_appearance.gd")
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
const Variants=preload("res://scripts/world/city_creation_architecture_variants.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
var demo
var panel:PanelContainer
var heading:Label
var status:Label
var protect:CheckBox
var apply_button:Button
var selected:Array=[]
var context:Array=[]
var plan:Dictionary={}
var operation:Dictionary={}
var preview=preload("res://scripts/visual/city_creation_batch_preview.gd").new()
var selection=preload("res://scripts/ui/city_creation_batch_selection.gd").new()
var options:GridContainer
var buttons:Dictionary={}
static func install(owner,parent:Control)->void:
	var bar=load("res://scripts/ui/city_creation_batch_edit_bar.gd").new();parent.add_child(bar);bar.setup(owner);owner.set_meta("batch_edit",bar)
func setup(owner)->void:
	demo=owner;name="BatchEditBar";mouse_filter=Control.MOUSE_FILTER_IGNORE;set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	panel=PanelContainer.new();panel.theme=UI.make_theme();panel.add_theme_stylebox_override("panel",UI.panel(12));add_child(panel)
	var column:=VBoxContainer.new();column.add_theme_constant_override("separation",7);panel.add_child(column)
	var top:=HBoxContainer.new();column.add_child(top);heading=Label.new();heading.size_flags_horizontal=Control.SIZE_EXPAND_FILL;top.add_child(heading)
	var close_button:=Button.new();close_button.text="收起 · Esc";close_button.pressed.connect(close);top.add_child(close_button)
	protect=CheckBox.new();protect.text="保护已手动定制的房屋";protect.button_pressed=true;protect.toggled.connect(func(_v):if not operation.is_empty():stage(operation));column.add_child(protect)
	options=GridContainer.new();options.columns=4;options.add_theme_constant_override("h_separation",5);options.add_theme_constant_override("v_separation",5);column.add_child(options)
	var swatches:=HBoxContainer.new();swatches.add_theme_constant_override("separation",6);column.add_child(swatches)
	for i in range(4):
		var button:=Button.new();button.text="配色%d"%(i+1);button.name="BatchPalette_"+str(i);button.custom_minimum_size=Vector2(90,36)
		var index:=i;button.pressed.connect(func():stage({"kind":"palette","value":index}))
		button.gui_input.connect(func(event):
			if event is InputEventMouseMotion and event.relative!=Vector2.ZERO and operation!={"kind":"palette","value":index}:stage({"kind":"palette","value":index}))
		swatches.add_child(button);buttons[i]=button
	var bottom:=HBoxContainer.new();column.add_child(bottom);status=Label.new();status.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;status.custom_minimum_size.x=360;status.size_flags_horizontal=Control.SIZE_EXPAND_FILL;bottom.add_child(status)
	apply_button=Button.new();apply_button.text="确认应用";apply_button.pressed.connect(commit);bottom.add_child(apply_button);panel.hide()
func menu(kind:String,title:String,values:Array,labels:Array)->void:
	var option:=OptionButton.new();option.name="Batch_"+kind;option.size_flags_horizontal=Control.SIZE_EXPAND_FILL;option.add_item(title)
	for label:String in labels:option.add_item(label)
	option.item_selected.connect(func(index):if index>0:stage({"kind":kind,"value":values[index-1]}))
	option.get_popup().id_focused.connect(func(index):if index>0:stage({"kind":kind,"value":values[index-1]}))
	options.add_child(option)
func rebuild_options()->void:
	for child:Node in options.get_children():options.remove_child(child);child.queue_free()
	menu("era","统一风貌",demo.state.CreationPolicy.eras(demo.state),demo.state.CreationPolicy.eras(demo.state).map(func(e):return {"pastoral":"古典田园","renaissance":"文艺复兴","clockwork":"蒸汽花房","modern_eco":"现代生态"}[e]))
	menu("style","统一屋式",["classic","timber","stone"],["灰泥屋","木构街屋","石砌街屋"])
	var choices:Array=[""]
	for id:String in selected:
		for value:String in Choice.choices(demo.state,demo.state.houses[demo.state._house_index(id)]):
			if not choices.has(value):choices.append(value)
	menu("architecture","统一原型",choices,choices.map(Choice.label))
	for row:Array in [["windows","统一窗部",[""]+Variants.IDS,Variants.LABELS],["dormer","统一天窗",[""]+Variants.DORMERS,Variants.DORMER_LABELS],["chimney","统一烟囱",[""]+Variants.CHIMNEYS,Variants.CHIMNEY_LABELS],["gable_trim","统一檐口",[""]+Variants.TRIMS,Variants.TRIM_LABELS],["porch","统一门廊",[""]+Variants.PORCHES,Variants.PORCH_LABELS]]:
		menu(row[0],row[1],row[2],row[2].map(func(v):return row[3][v]))
func select(ids:Array)->void:
	close();selected=ids.duplicate();selected.sort();context=[demo.state.get_instance_id(),demo.state.revision]
	demo.spatial_popover.close();demo.journal.scrollbook.close_all();demo.selected_house="";demo.town.clear_preview();demo.preview_key="";demo.candidate.clear()
	if selected.size()<2:
		var single:String=str(selected[0]) if selected.size()==1 else "";selected.clear()
		if not single.is_empty():demo.spatial_popover.open_for_house(single)
		return
	protect.set_pressed_no_signal(true);heading.text="已选街排聚落 · %d栋房屋"%selected.size();rebuild_options();status.text="悬停配色或选择选项预览 · 确认后一次应用";apply_button.disabled=true;panel.show();queue_redraw()
func stage(value:Dictionary)->void:
	if selected.size()<2 or demo.edit_pending():return
	operation=value.duplicate();plan=Batch.plan(demo.state,selected,operation,protect.button_pressed);preview.start(demo,plan)
	status.text="预览中：%d栋将更新 · %d栋手选屋保护 · %d栋未适配"%[plan.changed.size(),plan.protected.size(),plan.skipped.size()]
	status.tooltip_text="\n".join(plan.skipped.map(func(row):return str(row.id)+"："+str(row.reason)))
	apply_button.disabled=plan.changed.is_empty()
func commit()->void:
	if plan.is_empty() or demo.edit_pending():return
	var result:=Batch.apply(demo.state,plan);close();demo._after_edit(result,"room",not result.has("appearance_house_ids"))
func close()->void:
	selection.dragging=false;preview.clear();selected.clear();plan.clear();operation.clear();panel.hide();queue_redraw()
func _exit_tree()->void:preview.clear()
func handle(event:InputEvent)->bool:return selection.handle(self,event)
func blocks_hover()->bool:return not selected.is_empty() or selection.dragging
func _process(_delta:float)->void:
	if not selected.is_empty() and (context!=[demo.state.get_instance_id(),demo.state.revision] or demo.edit_pending()):close()
	preview.step()
	if panel.visible:
		panel.size.x=minf(820,demo.get_viewport().get_visible_rect().size.x-40);panel.position=Vector2((demo.get_viewport().get_visible_rect().size.x-panel.size.x)*.5,105)
	if blocks_hover():queue_redraw()
func _draw()->void:
	if demo==null:return
	for id:String in selected:
		var house:Dictionary=demo.state.houses[demo.state._house_index(id)]
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0:continue
			var points:=PackedVector2Array();var at:=Frame.center(house,cell)
			for p:Vector2 in Frame.corners({"center":at,"half":Vector2.ONE*.94,"angle":Frame.yaw(house)}):points.append(demo.camera.unproject_position(Vector3(p.x,float(house.get("base_y",0.0))+.035,p.y)))
			points.append(points[0]);draw_polyline(points,UI.GOLD,2.,true)
	if selection.dragging:
		var rect:=Rect2(selection.start,selection.finish-selection.start).abs();draw_rect(rect,Color(UI.PAPER,.15));draw_rect(rect,UI.GOLD,false,2.)
