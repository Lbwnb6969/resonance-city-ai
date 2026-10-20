extends RefCounted
## Main palette and compact context bubbles for the existing tool controls.
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
const Icons=preload("res://scripts/ui/city_creation_vector_icons.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const DIAMETER:=46.0
const GAP:=6
const OPTION_ICONS:Dictionary={
	"RoadMode":["road","straight"],"RoadSize":["road","brush_small","brush_medium","brush_large"],"RoadStyle":["road","lamp","vegetation","rails"],
	"RemovalMode":["erase","house"],"Species":["vegetation","cypress","shrub","vegetation","garden_cafe","garden_cafe","garden_cafe"],"PlantingMode":["brush_small","brush_large"],
	"BrushSize":["brush_small","brush_medium","brush_large"],"WaterMode":["pond","water"],
	"WaterWidth":["brush_small","brush_medium","brush_large"],"DistrictWidth":["brush_small","brush_medium","brush_large"],
	"DistrictStyle":["sundial_day","water","workshop","bakery","vegetation"],
	"DistrictEra":["house","terrace","clockmaker","vegetation"],
	"TerrainMode":["raise","lower","undo","terrain","plateau","water"],
	"TerrainRadius":["brush_small","brush_medium","brush_large"]
}
const TOOL_GROUPS:Dictionary={
	2:[["RoadMode","road",["曲线","直线"]],["RoadStyle","road",["小径","灯街","林荫","轨街"]],["RoadSize","road",["原宽","窄路","标准","宽路"]],["RoadRoundabout","district",["环岛"]]],
	3:[["RemovalMode","erase",["单元","整栋"]]],
	5:[["PlantingMode","vegetation",["单株","成片"]],["Species","vegetation",["橄榄","柏树","灌木","金叶","粉花","白花","黄花"]],["BrushSize","vegetation",["小笔","中笔","大笔"]]],
	6:[["WaterMode","water",["池塘","支渠"]],["WaterWidth","water",["1.8m","3.2m","5m"]]],
	7:[["DistrictWidth","district",["小庭","街坊","宽园"]],["DistrictStyle","district",["暖庭","深流","织机","市集","林间"]],["DistrictEra","district",["古典","中世","工业","现代"]],["DistrictAdaptive","district",["随用途"]],["DistrictReply","audition",["对答"]],["DistrictLinkMode","district",["连街坊"]]],
	8:[["TerrainMode","terrain",["草丘","洼地","还原","露岩","台地","柔坡"]],["TerrainRadius","terrain",["2m","3.5m","5m"]],["NaturalContour","vegetation",["自然"]]]
}
var demo
var parent:Control
var popup:Control
var bubble_rows:Control
var district_name_row:HBoxContainer
var bindings:Array[Dictionary]=[]
var active_tool:=-1

func button_for(source_name:String,index:int=0)->Button:
	for binding:Dictionary in bindings:
		if str(binding.source.name)==source_name and int(binding.index)==index:return binding.button
	return null

static func setup(owner:Node3D,ui_parent:Control)->RefCounted:
	var dock:RefCounted=load("res://scripts/ui/city_creation_tactile_dock.gd").new()
	dock._setup(owner,ui_parent)
	return dock

func _setup(owner:Node,parent_control:Control)->void:
	demo=owner
	parent=parent_control
	var toolbar:PanelContainer=parent.get_node("Toolbar")
	var style:=UI.panel(6);style.set_corner_radius_all(30);style.bg_color=Color(UI.PAPER,.85);style.shadow_size=6
	toolbar.add_theme_stylebox_override("panel",style)
	toolbar.offset_left=-284;toolbar.offset_right=284;toolbar.offset_top=-105;toolbar.offset_bottom=-45
	for i in range(demo.tool_buttons.size()):
		var button:Button=demo.tool_buttons[i]
		button.set_script(Seal);button.configure(Icons.TOOL_KINDS[i],48.)
		button.caption=demo.TOOL_NAMES[i];button.key_label=str(i+1)
		if i==4:button.hide()
	for button:Button in [demo.undo_button,demo.redo_button]:
		button.set_script(Seal);button.configure("undo" if button==demo.undo_button else "redo",32.)
	var legacy:=Control.new();legacy.name="LegacyToolOptions";legacy.hide();legacy.mouse_filter=Control.MOUSE_FILTER_IGNORE
	parent.add_child(legacy)
	for panel_name:String in ["RoadOptions","RemovalOptions","VegetationOptions","WaterOptions","DistrictOptions","TerrainOptions"]:
		var old:Control=parent.get_node_or_null(panel_name)
		if old!=null:old.reparent(legacy);old.hide()
	popup=Control.new();popup.name="ToolBubbles";popup.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	popup.mouse_filter=Control.MOUSE_FILTER_IGNORE;parent.add_child(popup)
	bubble_rows=VBoxContainer.new();bubble_rows.name="BubbleRows"
	bubble_rows.add_theme_constant_override("separation",GAP)
	bubble_rows.mouse_filter=Control.MOUSE_FILTER_IGNORE
	popup.add_child(bubble_rows)
	district_name_row=HBoxContainer.new();district_name_row.name="DistrictNameBubbles"
	district_name_row.add_theme_constant_override("separation",8)
	var district_label:=Label.new();district_label.text="街坊名";district_label.vertical_alignment=VERTICAL_ALIGNMENT_CENTER
	district_label.add_theme_font_size_override("font_size",12);district_label.add_theme_color_override("font_color",UI.INK)
	district_name_row.add_child(district_label)
	demo.district_name.custom_minimum_size=Vector2(210,42)
	demo.district_name.reparent(district_name_row)
	bubble_rows.add_child(district_name_row);district_name_row.hide()
	parent.resized.connect(_position_popup)

func refresh()->void:
	if demo==null or popup==null:return
	var tool:int=demo.tool
	popup.visible=bool(TOOL_GROUPS.has(tool)) and demo.ui_layer.visible
	district_name_row.visible=tool==7
	if not popup.visible:return
	if active_tool!=tool:
		active_tool=tool
		_rebuild(tool)
	_sync()
	_position_popup()

func _rebuild(tool:int)->void:
	for child:Node in bubble_rows.get_children():
		if child!=district_name_row:bubble_rows.remove_child(child);child.queue_free()
	bindings.clear()
	var row:HBoxContainer
	var row_count:=0
	for group:Array in TOOL_GROUPS.get(tool,[]):
		var source:Control=parent.find_child(str(group[0]),true,false)
		if source==null:continue
		var count:int=source.item_count if source is OptionButton else 1
		if row==null or row_count+count>7:
			row=HBoxContainer.new();row.add_theme_constant_override("separation",GAP)
			row.alignment=BoxContainer.ALIGNMENT_CENTER;row.mouse_filter=Control.MOUSE_FILTER_IGNORE
			bubble_rows.add_child(row);row_count=0
		row_count+=count
		if source is OptionButton:
			var options:=source as OptionButton
			for index:int in range(options.item_count):
				var label:String=str(group[2][index]) if index<group[2].size() else options.get_item_text(index)
				var glyph:String=str(OPTION_ICONS[str(group[0])][index]) if OPTION_ICONS.has(str(group[0])) else str(group[1])
				var button:=_seal(row,glyph,label,options.get_item_text(index))
				var item_index:=index
				button.pressed.connect(func()->void:
					options.select(item_index)
					options.item_selected.emit(item_index)
					_sync())
				bindings.append({"button":button,"source":options,"index":index,"type":"option"})
		elif source is BaseButton:
			var toggle:=source as BaseButton
			var label:String=str(group[2][0])
			var button:=_seal(row,str(group[1]),label,toggle.tooltip_text)
			button.pressed.connect(func()->void:
				toggle.button_pressed=not toggle.button_pressed
				_sync())
			bindings.append({"button":button,"source":toggle,"index":0,"type":"toggle"})
	bubble_rows.move_child(district_name_row,0)
	_position_popup.call_deferred()
	bubble_rows.pivot_offset=bubble_rows.size*.5
	bubble_rows.scale=Vector2.ONE*.84
	var spring:=bubble_rows.create_tween()
	spring.tween_property(bubble_rows,"scale",Vector2.ONE,.22).set_trans(Tween.TRANS_BACK).set_ease(Tween.EASE_OUT)

func _seal(row:Control,kind:String,caption:String,tooltip:String)->Button:
	var button:=Button.new();button.set_script(Seal);button.configure(kind,DIAMETER)
	button.caption=caption;button.tooltip_text=tooltip
	row.add_child(button)
	return button

func _sync()->void:
	for binding:Dictionary in bindings:
		var button:Button=binding.button
		if binding.type=="option":
			var option:OptionButton=binding.source
			button.active=option.selected==int(binding.index)
			button.disabled=option.disabled or option.is_item_disabled(int(binding.index))
		else:
			var toggle:BaseButton=binding.source
			button.active=toggle.button_pressed
			button.disabled=toggle.disabled
		button.modulate.a=.38 if button.disabled else 1.
		if str(binding.source.name)=="RoadSize":
			var index:int=int(binding.index)
			var width:float=demo.State.RoadUpgrade.width_for(demo.road_style) if index==0 else demo.State.RoadUpgrade.sizes_for(demo.road_style)[index-1]
			button.caption=("原 " if index==0 else "")+str(width)+"m"
			button.tooltip_text="道路宽度 · "+str(width)+"米"
		button.queue_redraw()

func _position_popup()->void:
	if not is_instance_valid(popup) or not popup.visible or active_tool<0:return
	var source:Control=demo.tool_buttons[active_tool]
	var anchor:=source.get_global_rect()
	var extent:=bubble_rows.get_combined_minimum_size()
	bubble_rows.size=extent
	bubble_rows.pivot_offset=extent*.5
	var bounds:=parent.get_viewport_rect().size
	bubble_rows.position.x=clampf(anchor.get_center().x-extent.x*.5,12.,maxf(12.,bounds.x-extent.x-12.))
	bubble_rows.position.y=maxf(12.,anchor.position.y-16.-extent.y)
