extends Node
## Direct selection with real eligibility; browsing never edits the city.
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
const Icons=preload("res://scripts/ui/city_creation_vector_icons.gd")
const NOTES={"ionic_stoa":"卷涡柱头与通长敞廊；完整矩形可逐层加高，局部加层/露台后随形保留。","roman_basilica":"高侧窗、中厅与半圆后殿；正面入户的矩形厅屋。侧向接路、穿堂、局部加层或露台转随形。","":"依照房形与周边环境生长。","portico":"低山花与柱廊，入口退入檐下。","townhouse":"分层街屋，适合沿街连续加建。","oriel":"转角上层凸窗；需上层与转角空地。","peristyle":"围绕露台的内院连柱；需露台空间。","rotunda":"独立圆厅与环形柱列。","guildhall":"宽山花与两翼；需完整横向空地。","venetian_loggia":"临水圆拱廊，沿岸留出通路。","belvedere_villa":"高低体量与眺望露台。","sawtooth_atrium":"折顶天窗与通透工坊。","clock_turret":"街角铜钟与窄塔尖顶。","iron_conservatory":"弧形铁肋与透光花房。","guild_arcade":"横向砖拱与沿街门廊。","chalet":"不对称山墙与深木檐。","pavilion":"单坡屋面与通透玻璃。","terrace":"随坡逐级退台的住屋。","panorama":"木框、景窗与深阳台。","twin_gable":"两座山墙以轻桥相连。","green_lodge":"厚石基、暖木与低矮绿顶。"}
var demo:Node3D
var panel:PanelContainer
var title:Label
var preview:Label
var grid:GridContainer
var buttons:Dictionary={}
var _target_id:=""
var _epoch:=0
var _era:=""
var _choose:Callable
static func obtain(owner:Node3D)->Node:
 if owner.has_meta("prototype_book"):return owner.get_meta("prototype_book")
 var book=load("res://scripts/ui/city_creation_prototype_book.gd").new();book.setup(owner);owner.set_meta("prototype_book",book);return book
func setup(owner:Node3D)->void:
 demo=owner;demo.add_child(self)
 var parent:Control=demo.ui_layer.get_child(0)
 panel=PanelContainer.new();panel.name="PrototypeBook";panel.theme=UI.make_theme();panel.add_theme_stylebox_override("panel",UI.panel(12));parent.add_child(panel)
 var column:=VBoxContainer.new();column.add_theme_constant_override("separation",8);panel.add_child(column)
 var heading:=HBoxContainer.new();column.add_child(heading)
 title=Label.new();title.name="PrototypeBookTitle";title.size_flags_horizontal=Control.SIZE_EXPAND_FILL;title.add_theme_font_size_override("font_size",17);heading.add_child(title)
 var close:=Button.new();close.name="ClosePrototypeBook";close.text="合册";close.pressed.connect(panel.hide);heading.add_child(close)
 var scroll:=ScrollContainer.new();scroll.name="PrototypeLeaves";scroll.size_flags_vertical=Control.SIZE_EXPAND_FILL;scroll.horizontal_scroll_mode=ScrollContainer.SCROLL_MODE_DISABLED;column.add_child(scroll)
 grid=GridContainer.new();grid.columns=3;grid.size_flags_horizontal=Control.SIZE_EXPAND_FILL;grid.add_theme_constant_override("h_separation",7);grid.add_theme_constant_override("v_separation",7);scroll.add_child(grid)
 preview=Label.new();preview.name="PrototypePreview";preview.custom_minimum_size.y=36;preview.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;preview.add_theme_font_size_override("font_size",12);preview.add_theme_color_override("font_color",UI.MUTED);column.add_child(preview)
 parent.resized.connect(fit);panel.hide()
func fit()->void:
 var viewport:Vector2=panel.get_parent().size
 panel.size=Vector2(minf(490.,viewport.x-32.),minf(390.,viewport.y-230.))
 panel.position=Vector2(viewport.x-panel.size.x-16.,maxf(76.,viewport.y-panel.size.y-150.))
func for_brush(updated:Callable=Callable())->void:
 _target_id="";_epoch=demo.state.get_instance_id();_era=str(Brush.current(demo.state).era)
 _choose=func(id:String)->void:
  if not valid_context():panel.hide();return
  Brush.select(demo.state,_era,id)
  if updated.is_valid():updated.call()
  panel.hide()
 populate(Brush.prototypes(_era),str(Brush.current(demo.state).prototype),"新屋原型 · 直接点选")
func for_house(pop:RefCounted)->void:
 var house:Dictionary=demo.town._house_record(pop.target_house_id)
 if house.is_empty() or house.has("signature"):return
 _target_id=str(house.id);_epoch=demo.state.get_instance_id();_era=demo.state.house_era(house)
 _choose=func(id:String)->void:
  if not valid_context():panel.hide();return
  demo._after_edit(demo.state.set_house_architecture(_target_id,id),"room",true,_target_id);pop.refresh();panel.hide()
 var catalog:Array=Choice.ALPINE if _era=="modern_eco" else Choice.CLOCKWORK if _era=="clockwork" else Choice.NEO+(Choice.RENAISSANCE if _era=="renaissance" else Choice.ANCIENT.IDS)
 populate(catalog,str(house.get("architecture","")),"此屋原型 · 依真实房形解锁",Choice.choices(demo.state,house))
func valid_context()->bool:
 return demo.state.get_instance_id()==_epoch and (str(Brush.current(demo.state).era)==_era if _target_id.is_empty() else demo.spatial_popover.target_house_id==_target_id and demo.state._house_index(_target_id)>=0)
func _process(_delta:float)->void:
 if panel.visible and (not valid_context() or not demo.ui_layer.visible or demo.tool not in [0,4] or demo.gallery.panel.visible or demo.journal.scrollbook.visible or demo.guide.visible()):panel.hide()
func _input(event:InputEvent)->void:
 if panel.visible and event is InputEventKey and event.pressed and event.keycode==KEY_ESCAPE:panel.hide();get_viewport().set_input_as_handled()
func populate(catalog:Array,selected:String,heading:String,eligible:Variant=null)->void:
 for child:Node in grid.get_children():grid.remove_child(child);child.queue_free()
 buttons.clear();title.text=heading;preview.text=NOTES.get(selected,NOTES[""])
 for id:String in [""]+catalog:
  var button:=Button.new();button.name="Prototype_"+("auto" if id.is_empty() else id);button.custom_minimum_size=Vector2(146,84);button.size_flags_horizontal=Control.SIZE_EXPAND_FILL;button.focus_mode=Control.FOCUS_ALL
  button.toggle_mode=true;button.button_pressed=id==selected;button.disabled=eligible!=null and not id.is_empty() and id not in eligible
  button.tooltip_text=Choice.label(id)+"\n"+str(NOTES.get(id,""))+("\n当前房形尚未满足条件。" if button.disabled else "\n点击即选用；旧屋修改可撤销。" if not _target_id.is_empty() else "\n用于接下来新造的房屋，已有房屋保留。")
  button.draw.connect(func()->void:
   Icons.draw_icon(button,"house" if id.is_empty() else "prototype/"+id,Vector2(button.size.x*.5,30),22.,UI.MUTED if button.disabled else UI.INK,UI.GOLD)
   var font:=button.get_theme_default_font();var label:=Choice.label(id);button.draw_string(font,Vector2((button.size.x-font.get_string_size(label,HORIZONTAL_ALIGNMENT_LEFT,-1,13).x)*.5,73),label,HORIZONTAL_ALIGNMENT_LEFT,-1,13,UI.MUTED if button.disabled else UI.INK))
  button.mouse_entered.connect(func()->void:preview.text=str(NOTES.get(id,"")))
  button.pressed.connect(func()->void:_choose.call(id));grid.add_child(button);buttons[id]=button
 fit();panel.show();panel.move_to_front()
