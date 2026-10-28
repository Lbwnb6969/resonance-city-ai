extends RefCounted
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Families=preload("res://scripts/world/city_creation_tradition_synergy.gd")
const Wonders=preload("res://scripts/world/city_creation_legendary_wonder_plan.gd")
static func setup(widget,parent:Control)->void:
	var title:=Label.new();title.text="四脉和声 · 奇观冠冕";title.add_theme_font_size_override("font_size",16);parent.add_child(title)
	var grid:=GridContainer.new();grid.columns=2;grid.add_theme_constant_override("h_separation",6);grid.add_theme_constant_override("v_separation",6);parent.add_child(grid)
	for id:String in Families.FAMILIES:
		var card:=PanelContainer.new();card.size_flags_horizontal=Control.SIZE_EXPAND_FILL;card.add_theme_stylebox_override("panel",UI.card(6));grid.add_child(card)
		var column:=VBoxContainer.new();card.add_child(column)
		var name:=Label.new();name.text=str(Families.FAMILIES[id].icon)+" "+str(Families.FAMILIES[id].name);name.add_theme_font_size_override("font_size",12);column.add_child(name)
		var state:=Label.new();state.custom_minimum_size.x=100;state.add_theme_font_size_override("font_size",11);column.add_child(state);widget.family_badges[id]=state
static func refresh(widget)->void:
	var view:=Families.for_city(widget.demo.state)
	var unlocked:Array=Wonders.unlocked(widget.demo.state)
	for id:String in widget.family_badges:
		var tier:int=view.tiers[id];var label:Label=widget.family_badges[id]
		var crown_mark:=" · 🌈奇观" if id in unlocked else ""
		label.text="%s · %s%s"%["✦".repeat(mini(3,int(view.counts[id]))) if int(view.counts[id])>0 else "○",["静候落笔","流派回响","共鸣冠冕"][tier],crown_mark]
		label.tooltip_text=str(Families.FAMILIES[id].crown if tier==2 else Families.FAMILIES[id].echo)
		label.add_theme_color_override("font_color",Color("87588f") if id in unlocked else (Color("91682c") if tier==2 else UI.MUTED))
static func safe(text:String)->String:return text.replace("[","[lb]")
static func pill(text:String,met:bool)->String:
	return "[bgcolor=%s][color=%s] %s [/color][/bgcolor]"%["#dfe8d8" if met else "#eae4d2","#3e6653" if met else "#7d7057",text]
static func home(harmony:Dictionary)->String:
	return " ".join([pill("麦香●" if harmony.food else "麦香○",harmony.food),pill("茶叙●" if harmony.social else "茶叙○",harmony.social),pill("风物●" if harmony.craft else "风物○",harmony.craft)])
