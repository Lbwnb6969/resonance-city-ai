extends Node
## Keep three primary actions; appearance and music open one detail sheet.
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var pop:RefCounted
var panel:PanelContainer
var appearance:VBoxContainer
var music:VBoxContainer
var mode:=""
var roles:Node
var _target:=""
var appearance_button:Button
var purpose_button:Button
var business_button:Button
var _business_at:=0
func setup(owner:RefCounted,ring:RefCounted)->void:
 pop=owner;pop.demo.add_child(self)
 roles=preload("res://scripts/ui/city_creation_role_palette.gd").new();roles.setup(pop);ring.roles.clear()
 panel=PanelContainer.new();panel.name="HouseDetailSheet";panel.theme=UI.make_theme();panel.add_theme_stylebox_override("panel",UI.panel(10));pop.overlay.add_child(panel)
 var column:=VBoxContainer.new();column.add_theme_constant_override("separation",7);panel.add_child(column)
 var tabs:=HBoxContainer.new();column.add_child(tabs)
 for id:String in ["appearance","music"]:
  var tab:=Button.new();tab.text="外观" if id=="appearance" else "音乐";tab.name="HouseDetail_"+id;tab.size_flags_horizontal=Control.SIZE_EXPAND_FILL;tab.pressed.connect(show_page.bind(id));tabs.add_child(tab)
 var close:=Button.new();close.text="×";close.tooltip_text="收起此屋详情";close.pressed.connect(panel.hide);tabs.add_child(close)
 appearance=VBoxContainer.new();appearance.name="HouseAppearanceDetails";appearance.add_theme_constant_override("separation",5);column.add_child(appearance)
 var pair:=HBoxContainer.new();pair.add_theme_constant_override("separation",4);appearance.add_child(pair)
 for button:Button in [pop.architecture_button,pop.style_button,pop.era_button]:button.reparent(pair)
 var palette:=HBoxContainer.new();palette.add_theme_constant_override("separation",5);appearance.add_child(palette)
 for button:Button in pop.swatches:button.reparent(palette)
 pop.expand_button.reparent(palette)
 var sample:Control=ring.left.find_child("SampleHouseAppearance",true,false);sample.reparent(appearance)
 pop.color_panel.reparent(appearance)
 music=VBoxContainer.new();music.name="HouseMusicDetails";music.add_theme_constant_override("separation",5);column.add_child(music)
 for button:Button in [pop.choir_button,pop.temperament_button,pop.concert_button,pop.parade_button]:button.reparent(music)
 ring.left.hide();ring.right.hide();ring.colors.hide();panel.hide()
 purpose_button=Button.new();purpose_button.name="HousePurpose";purpose_button.text="用途";purpose_button.custom_minimum_size=Vector2(62,34);purpose_button.pressed.connect(func()->void:panel.hide();roles.show_for(true));ring.action_island.add_child(purpose_button);ring.action_island.move_child(purpose_button,0)
 appearance_button=Button.new();appearance_button.name="HouseAppearance";appearance_button.text="外观";appearance_button.custom_minimum_size=Vector2(62,34);appearance_button.pressed.connect(func()->void:roles.panel.hide();show_page("appearance"));ring.action_island.add_child(appearance_button);ring.action_island.move_child(appearance_button,1)
 ring.extra_controls=[panel,roles.panel]
 business_button=preload("res://scripts/ui/city_creation_business_step.gd").inspector(pop)
 preload("res://scripts/ui/city_creation_lean_inspector.gd").setup(self)
func show_page(id:String)->void:
 id=preload("res://scripts/ui/city_creation_lean_inspector.gd").page(self,id)
 mode=id;_target=pop.target_house_id;appearance.visible=id=="appearance";music.visible=id=="music";panel.show();fit();pop.refresh();panel.move_to_front()
func fit()->void:
 panel.reset_size();var viewport:Vector2=pop.overlay.get_viewport_rect().size;var house:Rect2=pop.ring.house_rect
 panel.position=Vector2(12. if house.get_center().x>viewport.x*.5 else viewport.x-panel.size.x-12.,90.)
 roles.fit()
func close()->void:panel.hide();roles.panel.hide();mode=""
func _process(_delta:float)->void:
 if pop.card.visible and Time.get_ticks_msec()>=_business_at:
  _business_at=Time.get_ticks_msec()+500
  var step:Dictionary=preload("res://scripts/ui/city_creation_business_step.gd").describe(pop.demo,pop.target_house_id)
  business_button.visible=not step.action.is_empty();business_button.text=step.action;business_button.tooltip_text=step.text
  if business_button.visible:pop.status.text=step.text;pop.status.tooltip_text=step.text
 if (panel.visible or roles.panel.visible) and (pop.target_house_id.is_empty() and not roles.batch or not pop.demo.ui_layer.visible or pop.demo.tool not in [0,4] or pop.demo.gallery.panel.visible):close()
 if panel.visible and _target!=pop.target_house_id:close()
func _input(event:InputEvent)->void:
 if panel.visible and event is InputEventKey and event.pressed and event.keycode==KEY_ESCAPE:close();get_viewport().set_input_as_handled()
