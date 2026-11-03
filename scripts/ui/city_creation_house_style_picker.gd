extends Node
## Direct choices reuse the existing style transaction and its geometry checks.
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const IDS:=["classic","timber","stone","round_tower"]
const NAMES:=["灰泥","木构","石砌","圆塔"]
var pop:RefCounted
var panel:PanelContainer
var buttons:Dictionary={}
var feedback:Label
var target:=""
var city_id:=0
func setup(owner:RefCounted)->void:
	pop=owner;pop.demo.add_child(self);pop.demo.set_meta("house_style_picker",self)
	for connection:Dictionary in pop.style_button.pressed.get_connections():pop.style_button.pressed.disconnect(connection.callable)
	pop.style_button.pressed.connect(open_choices)
	panel=PanelContainer.new();panel.name="HouseStyleChoices";panel.theme=UI.make_theme();panel.add_theme_stylebox_override("panel",UI.panel(10));pop.overlay.add_child(panel)
	var column:=VBoxContainer.new();column.add_theme_constant_override("separation",8);panel.add_child(column)
	var heading:=HBoxContainer.new();column.add_child(heading);var title:=Label.new();title.text="此屋屋式";title.size_flags_horizontal=Control.SIZE_EXPAND_FILL;heading.add_child(title)
	var close:=Button.new();close.name="CloseHouseStyles";close.text="收起";close.pressed.connect(panel.hide);heading.add_child(close)
	var row:=HBoxContainer.new();row.add_theme_constant_override("separation",7);column.add_child(row)
	for i:int in range(IDS.size()):
		var button:Button=pop._seal(row,"house",NAMES[i],choose.bind(IDS[i]));button.name="HouseStyle_"+IDS[i];button.custom_minimum_size=Vector2(72,48);buttons[IDS[i]]=button
		button.tooltip_text="圆塔需单列连续房间、无穿堂且邻屋留有净空；条件不足时保留屋式选择，外观随房形适配。" if IDS[i]=="round_tower" else "此屋屋式 · "+NAMES[i]
	var note:=Label.new();note.text="屋式不改房间、配色和手选原型。原型是否显现依真实屋式与房形；重新选原型时沿用其适配规则。";note.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;note.custom_minimum_size.x=300;note.add_theme_font_size_override("font_size",12);column.add_child(note)
	feedback=Label.new();feedback.name="HouseStyleFeedback";feedback.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;feedback.add_theme_font_size_override("font_size",12);column.add_child(feedback)
	pop.ring.extra_controls.append(panel);panel.hide()
func open_choices()->void:
	var house:Dictionary=pop.demo.town._house_record(pop.target_house_id)
	if house.is_empty() or house.has("signature"):return
	target=pop.target_house_id;city_id=pop.demo.state.get_instance_id();feedback.text=""
	pop.inspector.close()
	if pop.demo.has_meta("prototype_book"):pop.demo.get_meta("prototype_book").panel.hide()
	for id:String in buttons:
		buttons[id].active=house.get("style","classic")==id;buttons[id].queue_redraw()
	panel.reset_size();panel.position=Vector2(clampf(pop.ring.house_rect.end.x+12.,12.,pop.overlay.size.x-panel.size.x-12.),maxf(76.,pop.ring.house_rect.position.y));panel.show();panel.move_to_front();pop.refresh()
func valid_context()->bool:return city_id==pop.demo.state.get_instance_id() and pop.target_house_id==target and pop.demo.state._house_index(target)>=0
func choose(style:String)->void:
	if not valid_context():panel.hide();return
	var result:Dictionary=pop.demo.state.set_house_style(target,style)
	pop.demo._after_edit(result,"room",true,target);pop.refresh()
	if result.ok:panel.hide()
	else:feedback.text=str(result.message);panel.reset_size()
func _process(_delta:float)->void:
	if not panel.visible:return
	if not valid_context() or not pop.card.is_visible_in_tree() or pop.demo.tool not in [0,4] or pop.inspector.panel.visible or pop.inspector.roles.panel.visible or pop.demo.gallery.panel.visible or pop.demo.guide.visible() or pop.demo.ledger.visible() or pop.demo.journal.panel.visible:panel.hide();return
	var style:String=pop.demo.town._house_record(target).get("style","classic")
	for id:String in buttons:
		if buttons[id].active!=(id==style):buttons[id].active=id==style;buttons[id].queue_redraw()
func _input(event:InputEvent)->void:
	if panel.visible and event is InputEventKey and event.pressed and event.keycode==KEY_ESCAPE:panel.hide();get_viewport().set_input_as_handled()
