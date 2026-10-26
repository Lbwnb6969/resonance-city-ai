extends RefCounted
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Civic=preload("res://scripts/world/city_creation_civic_supply.gd")
static func setup(widget:RefCounted,parent:Control)->void:
 var leaves:=VBoxContainer.new();leaves.name="WorkshopLeaves";leaves.add_theme_constant_override("separation",6);parent.add_child(leaves);widget.paper.set_meta("workshop_leaves",leaves)
 var full:=Button.new();full.name="FullLedgerRecords";full.text="展开全城记录";full.add_theme_font_size_override("font_size",12);parent.add_child(full)
 full.pressed.connect(func()->void:widget.body.visible=not widget.body.visible;full.text="收起全城记录" if widget.body.visible else "展开全城记录")
static func refresh(widget:RefCounted)->void:
 var leaves:VBoxContainer=widget.paper.get_meta("workshop_leaves")
 var alive:Array=[]
 for row:Dictionary in widget.rows:
  alive.append(str(row.id));var name:="Workshop_"+str(row.id);var node:VBoxContainer=leaves.get_node_or_null(name)
  if node==null:
   node=VBoxContainer.new();node.name=name;node.add_theme_constant_override("separation",3);leaves.add_child(node)
   var button:=Button.new();button.name="Capsule";button.clip_text=true;button.text_overrun_behavior=TextServer.OVERRUN_TRIM_ELLIPSIS;button.alignment=HORIZONTAL_ALIGNMENT_LEFT;button.custom_minimum_size.y=32;button.add_theme_font_size_override("font_size",12);node.add_child(button)
   var detail:=Label.new();detail.name="Detail";detail.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;detail.add_theme_font_size_override("font_size",12);detail.add_theme_color_override("font_color",UI.MUTED);node.add_child(detail);detail.hide()
   button.pressed.connect(func()->void:detail.visible=not detail.visible)
   var action:=Button.new();action.name="NextBusinessStep";action.custom_minimum_size.y=28;action.pressed.connect(func()->void:preload("res://scripts/ui/city_creation_business_step.gd").act(widget.demo,str(row.id)));node.add_child(action)
  var button:Button=node.get_node("Capsule");var detail:Label=node.get_node("Detail")
  var house:Dictionary=widget.demo.state.houses[widget.demo.state._house_index(str(row.id))];var title:=str(house.get("name",widget.ROLE_NAMES[row.role]));var civic:=Civic.status(widget.demo.state,str(row.id))
  var status:String="未接路" if not row.connected else ["待山水","✦ 首秀","✦✦ 雅集"][clampi(int(civic.tier),0,2)]
  var stock:=" · 库存%d"%int(row.status.stock) if row.status.has("stock") else ""
  button.text=title+" · "+status+stock+(" · ◷" if float(civic.tempo_mult)>1. else "")
  detail.text=widget.cafe_activity(row.status) if row.role=="garden_cafe" else widget.business_activity(row.role,row.status) if row.role in ["bakery","workshop","atelier","clockmaker"] else "等待街坊来奏响乐章。"
  if row.status.has("stock"):detail.text+="\n库存 %d / %d · 制成 %d · 送达 %d"%[int(row.status.stock),int(row.status.capacity),int(row.status.produced),int(row.status.get("delivered",row.status.get("served",0)))]
  var step:Dictionary=preload("res://scripts/ui/city_creation_business_step.gd").describe(widget.demo,str(row.id));var action:Button=node.get_node("NextBusinessStep");action.visible=not step.action.is_empty();action.text=step.action;action.tooltip_text=step.text
  if action.visible:detail.text=step.text+"\n"+detail.text
  button.tooltip_text=str(widget.ROLE_NAMES[row.role])+" · "+title+"\n"+detail.text+"\n点击展开详情";detail.tooltip_text=button.tooltip_text
 for node:Node in leaves.get_children():
  if str(node.name).trim_prefix("Workshop_") not in alive:leaves.remove_child(node);node.queue_free()
