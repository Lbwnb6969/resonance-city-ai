extends RefCounted
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Families=preload("res://scripts/world/city_creation_tradition_synergy.gd")
static func setup(widget,parent:Control)->void:
 var title:=Label.new();title.text="四脉和声";title.add_theme_font_size_override("font_size",15);parent.add_child(title)
 var row:=HBoxContainer.new();row.name="FourFamilySeals";row.add_theme_constant_override("separation",4);parent.add_child(row)
 for id:String in Families.FAMILIES:
  var column:=VBoxContainer.new();column.size_flags_horizontal=Control.SIZE_EXPAND_FILL;column.alignment=BoxContainer.ALIGNMENT_CENTER;row.add_child(column)
  var seal=preload("res://scripts/ui/city_creation_seal_button.gd").new();seal.name="Family_"+id;seal.configure({"riverbank":"water","highland":"terrain","courtyard":"district","artisan":"workshop"}[id],38.);seal.size_flags_horizontal=Control.SIZE_SHRINK_CENTER;column.add_child(seal)
  var label:=Label.new();label.name="FamilyState";label.horizontal_alignment=HORIZONTAL_ALIGNMENT_CENTER;label.custom_minimum_size.x=60;label.add_theme_font_size_override("font_size",11);column.add_child(label);widget.family_badges[id]=label
  seal.pressed.connect(func()->void:widget.demo.guide.open_panel(2))
static func refresh(widget)->void:
 var view:=Families.for_city(widget.demo.state);var unlocked:Dictionary=preload("res://scripts/world/city_creation_legendary_wonder_plan.gd").unlocked(widget.demo.state)
 for id:String in widget.family_badges:
  var tier:int=view.tiers[id];var label:Label=widget.family_badges[id];var seal:Button=label.get_parent().get_child(0)
  seal.saved_glow=1. if unlocked.has(id) else 0.;seal.active=tier==2;seal.modulate.a=1. if tier>0 or unlocked.has(id) else .42
  label.text="奇观已亮" if unlocked.has(id) else "共鸣冠冕" if tier==2 else "流派回响" if tier==1 else "静候落笔"
  label.tooltip_text=str(Families.FAMILIES[id].name)+" · %d/3\n"%mini(3,int(view.counts[id]))+str(Families.FAMILIES[id].crown if tier==2 else Families.FAMILIES[id].echo)
  if unlocked.has(id):label.tooltip_text+="\n"+str(preload("res://scripts/world/city_creation_legendary_wonder_plan.gd").TITLES[id])
  seal.tooltip_text=label.tooltip_text;label.add_theme_color_override("font_color",UI.GOLD if tier==2 or unlocked.has(id) else UI.MUTED)
static func safe(text:String)->String:return text.replace("[","[lb]")
static func pill(text:String,met:bool)->String:
 return "[bgcolor=%s][color=%s] %s [/color][/bgcolor]"%["#dfe8d8" if met else "#eae4d2","#3e6653" if met else "#7d7057",text]
static func home(harmony:Dictionary)->String:
 return " ".join([pill("麦香●" if harmony.food else "麦香○",harmony.food),pill("茶叙●" if harmony.social else "茶叙○",harmony.social),pill("风物●" if harmony.craft else "风物○",harmony.craft)])
