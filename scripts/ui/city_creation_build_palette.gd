extends RefCounted
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
static func setup(dock:RefCounted,parent:Control)->void:
 var panel:=PanelContainer.new();panel.name="NewHousePalette";panel.add_theme_stylebox_override("panel",UI.panel(7));parent.add_child(panel)
 var row:=HBoxContainer.new();row.add_theme_constant_override("separation",7);panel.add_child(row)
 var caption:=Label.new();caption.text="新屋";caption.add_theme_font_size_override("font_size",12);row.add_child(caption)
 var city:RefCounted=dock.demo.state
 if not city.has_meta("new_house_brush"):Brush.select(city,"pastoral")
 var eras:Dictionary={}
 for i in range(city.Eras.IDS.size()):
  var id:String=city.Eras.IDS[i];var button:=Seal.new();button.name="NewHouseEra_"+id;button.configure(["prototype/portico","prototype/venetian_loggia","clockmaker","vegetation"][i],44.);button.caption=["古典","文艺","蒸汽","生态"][i];button.disabled=id not in city.era_unlocks;button.modulate.a=.35 if button.disabled else 1.;row.add_child(button);eras[id]=button
  button.tooltip_text=city.Eras.NAMES[i]+(" · 尚未解锁" if button.disabled else " · 用于接下来新造的房屋；旧屋留存")
 var prototype:=Button.new();prototype.name="NewHousePrototype";prototype.focus_mode=Control.FOCUS_NONE;prototype.custom_minimum_size=Vector2(145,34);prototype.add_theme_font_size_override("font_size",13);row.add_child(prototype)
 var refresh:=func()->void:
  var choice:=Brush.current(city)
  for id:String in eras:eras[id].active=id==choice.era
  prototype.text=Brush.Architecture.label(str(choice.prototype))+" · 册"
  prototype.tooltip_text="打开剪影原型册直接选择；新屋保留当前配色。\n转角凸窗、内院连柱按房形在选中屋的原型册选择。"
 for id:String in eras:eras[id].pressed.connect(func()->void:Brush.select(city,id);dock.demo.house_module_mode=false;refresh.call())
 prototype.pressed.connect(func()->void:preload("res://scripts/ui/city_creation_prototype_book.gd").obtain(dock.demo).for_brush(refresh))
 refresh.call()
