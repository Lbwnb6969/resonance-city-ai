extends Node
## One selector serves a single house and an optional repeated role brush.
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var pop:RefCounted
var panel:PanelContainer
var title:Label
var buttons:Dictionary={}
var batch:=false
var paint_role:=""
var _state_id:=0
func setup(owner:RefCounted)->void:
 pop=owner;pop.demo.add_child(self);pop.demo.set_meta("role_palette",self)
 panel=PanelContainer.new();panel.name="HouseRolePalette";panel.theme=UI.make_theme();panel.add_theme_stylebox_override("panel",UI.panel(8));pop.overlay.add_child(panel)
 var column:=VBoxContainer.new();column.add_theme_constant_override("separation",8);panel.add_child(column)
 var header:=HBoxContainer.new();column.add_child(header);title=Label.new();title.add_theme_font_size_override("font_size",13);title.size_flags_horizontal=Control.SIZE_EXPAND_FILL;header.add_child(title)
 var close:=Button.new();close.name="CloseRoles";close.text="收起";close.pressed.connect(panel.hide);header.add_child(close)
 var row:=HBoxContainer.new();row.add_theme_constant_override("separation",6);column.add_child(row)
 buttons=pop.role_buttons
 for id:String in buttons:
  var button:Button=buttons[id];button.reparent(row)
  for connection:Dictionary in button.pressed.get_connections():button.pressed.disconnect(connection.callable)
  button.pressed.connect(choose.bind(id))
 panel.hide()
func show_for(single:bool)->void:
 batch=not single;_state_id=pop.demo.state.get_instance_id()
 if single and pop.target_house_id.is_empty():return
 title.text="此屋用途" if single else "批量安排 · 选用途后连续点房"
 pop.refresh()
 var house:Dictionary=pop.demo.town._house_record(pop.target_house_id) if single else {}
 for id:String in buttons:
  var button:Button=buttons[id]
  button.disabled=(id=="atelier" and "renaissance" not in pop.demo.state.era_unlocks) or (id=="clockmaker" and "clockwork" not in pop.demo.state.era_unlocks) or (house.has("signature") and id!=str(house.role))
  button.active=id==(str(house.get("role","")) if single else paint_role);button.modulate.a=.42 if button.disabled else 1.
 panel.reset_size();panel.show();fit();panel.move_to_front()
func fit()->void:
 var viewport:Vector2=pop.overlay.size;panel.reset_size()
 panel.position=Vector2(clampf((viewport.x-panel.size.x)*.5,12.,viewport.x-panel.size.x-12.),maxf(76.,viewport.y-panel.size.y-160.))
func choose(role:String)->void:
 if _state_id!=pop.demo.state.get_instance_id():panel.hide();return
 if batch:
  paint_role=role;panel.hide();pop.close();pop.demo._message("连续点房安排"+str(pop.ROLE_LABELS[role])+"；Esc 结束批量安排。")
  pop.demo.tactile_dock.refresh()
 else:pop._set_role(role);panel.hide()
func paint(id:String)->bool:
 if pop.demo.tool!=4 or paint_role.is_empty():return false
 var house:Dictionary=pop.demo.town._house_record(id)
 if house.is_empty() or house.has("signature"):return false
 if str(house.role)!=paint_role:pop.demo._after_edit(pop.demo.state.set_house_role(id,paint_role),"room",true,id)
 pop.close();return true
func _process(_delta:float)->void:
 if _state_id!=pop.demo.state.get_instance_id():_state_id=pop.demo.state.get_instance_id();paint_role="";panel.hide()
 if pop.demo.tool!=4:paint_role=""
 if panel.visible and (not pop.demo.ui_layer.visible or pop.demo.tool not in [0,4] or (not batch and pop.target_house_id.is_empty()) or pop.demo.gallery.panel.visible):panel.hide()
func _input(event:InputEvent)->void:
 if event is InputEventKey and event.pressed and event.keycode==KEY_ESCAPE and (panel.visible or not paint_role.is_empty()):
  panel.hide();paint_role="";pop.demo.tactile_dock.refresh();get_viewport().set_input_as_handled()
