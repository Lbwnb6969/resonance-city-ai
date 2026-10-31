extends RefCounted
## Main palette and compact context bubbles for the existing tool controls.
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
const Icons=preload("res://scripts/ui/city_creation_vector_icons.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const DIAMETER:=46.0
const GAP:=6
const OPTION_ICONS:Dictionary={
	"RoadDecoration":["road","erase","lamp","garden_cafe","vegetation","garden_cafe"],
	"RoadMode":["road","straight","road"],"RoadSize":["road","brush_small","brush_medium","brush_large","road"],"RoadStyle":["road","lamp","vegetation","rails","road","road","road","road"],
	"RemovalMode":["erase","house"],"Species":["vegetation","cypress","shrub","vegetation","garden_cafe","garden_cafe","garden_cafe"],"PlantingMode":["brush_small","brush_large"],
	"BrushSize":["brush_small","brush_medium","brush_large"],"WaterMode":["pond","water"],
	"WaterWidth":["brush_small","brush_medium","brush_large"],"DistrictWidth":["brush_small","brush_medium","brush_large"],
	"DistrictStyle":["sundial_day","water","workshop","bakery","vegetation"],
	"DistrictEra":["house","terrace","clockmaker","vegetation"],
	"TerrainMode":["raise","lower","undo","plateau","water"],
	"TerrainRadius":["brush_small","brush_medium","brush_large"]
}
const TOOL_GROUPS:Dictionary={
	2:[["RoadMode","road",["随手画","直路","曲路"]],["RoadStyle","road",["小径","石板","林荫","轨街","卵石","砖路","扇石","碎石"]],["RoadSize","road",["原宽","窄路","标准","宽路","宽街"]],["RoadDecoration","lamp",["原款","留白","路灯","花箱","树池","长椅"]],["RoadRoundabout","district",["环岛"]]],
	3:[["RemovalMode","erase",["单元","整栋"]]],
	5:[["PlantingMode","vegetation",["单株","成片"]],["Species","vegetation",["橄榄","柏树","灌木","金叶","粉花","白花","黄花"]],["BrushSize","vegetation",["小笔","中笔","大笔"]]],
	6:[["WaterMode","water",["池塘","支渠"]],["WaterWidth","water",["1.8m","3.2m","5m"]]],
	7:[["DistrictWidth","district",["小庭","街坊","宽园"]],["DistrictStyle","district",["暖庭","深流","织机","市集","林间"]],["DistrictEra","district",["古典","中世","工业","现代"]],["DistrictAdaptive","district",["随用途"]],["DistrictReply","audition",["对答"]],["DistrictLinkMode","district",["连街坊"]]],
	8:[["TerrainMode","terrain",["草丘","洼地","还原","定高","柔坡"]],["TerrainRadius","terrain",["2m","3.5m","5m"]],["NaturalContour","vegetation",["自然"]]]
}
var demo
var parent:Control
var popup:Control
var bubble_rows:Control
var district_name_row:HBoxContainer
var bindings:Array[Dictionary]=[]
var active_tool:=-1
var house_options:=false
var _house_palette_key:Variant=null
var nature_row:HBoxContainer
var road_palette
var target_options
const PRIMARY:=[0,2,4,5,8]
const CAPTIONS:=["筑屋","修路","烟火","林水","地形"]

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
	var style:=UI.panel(4);style.set_corner_radius_all(30);style.bg_color=Color(UI.PAPER,.78);style.shadow_size=6
	toolbar.add_theme_stylebox_override("panel",style)
	toolbar.offset_left=-174;toolbar.offset_right=174;toolbar.offset_top=-89;toolbar.offset_bottom=-39
	for i in range(demo.tool_buttons.size()):
		var button:Button=demo.tool_buttons[i]
		button.set_script(Seal);button.configure(Icons.TOOL_KINDS[i],44.)
		button.caption=CAPTIONS[PRIMARY.find(i)] if i in PRIMARY else demo.TOOL_NAMES[i];button.key_label=""
		button.visible=i in PRIMARY
		button.tooltip_text=button.caption+" · 原快捷键 "+str(i+1)
		if i==0:button.pressed.connect(func()->void:house_options=not house_options;refresh())
	for button:Button in [demo.undo_button,demo.redo_button]:
		button.set_script(Seal);button.configure("undo" if button==demo.undo_button else "redo",28.)
	var legacy:=Control.new();legacy.name="LegacyToolOptions";legacy.hide();legacy.mouse_filter=Control.MOUSE_FILTER_IGNORE
	parent.add_child(legacy)
	for panel_name:String in ["RoadOptions","RemovalOptions","VegetationOptions","WaterOptions","DistrictOptions","TerrainOptions"]:
		var old:Control=parent.get_node_or_null(panel_name)
		if old!=null:old.reparent(legacy);old.hide()
	popup=Control.new();popup.name="ToolBubbles";popup.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	popup.mouse_filter=Control.MOUSE_FILTER_IGNORE;parent.add_child(popup)
	target_options=preload("res://scripts/ui/city_creation_terrain_target_options.gd").setup(self)
	nature_row=HBoxContainer.new();nature_row.name="NatureModes";nature_row.add_theme_constant_override("separation",GAP)
	for mode:int in range(3):
		var button:=_seal(nature_row,["vegetation","pond","water"][mode],["林木","池塘","溪渠"][mode],"栽种林木" if mode==0 else "挖掘睡莲池塘" if mode==1 else "引水溪渠")
		button.pressed.connect(_nature_mode.bind(mode))
	popup.add_child(nature_row)
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
	demo.journal.scrollbook.visibility_changed.connect(_position_popup)

func refresh()->void:
	if demo==null or popup==null:return
	var tool:int=demo.tool
	for index:int in PRIMARY:
		var button:Button=demo.tool_buttons[index]
		button.visible=true
		if demo.intuitive_guidance!=null:button.disabled=not demo.intuitive_guidance.tool_available(index)
		button.modulate.a=.28 if button.disabled else 1.
		button.active=tool==index or (index==0 and tool in [1,3]) or (index==5 and tool==6)
		button.queue_redraw()
	popup.visible=tool!=7 and (bool(TOOL_GROUPS.has(tool)) or tool in [0,1,4]) and demo.ui_layer.visible and not demo.camera_rig.strolling and (tool!=0 or house_options)
	nature_row.visible=tool in [5,6]
	district_name_row.hide()
	if not popup.visible:target_options.panel.hide();return
	if tool in [0,1]:
		var key:=[demo.state.get_instance_id(),demo.state.CreationPolicy.eras(demo.state)]
		if key!=_house_palette_key:_house_palette_key=key;active_tool=-1
	if active_tool!=tool:
		active_tool=tool
		_rebuild(tool)
	_sync()
	_position_popup()

func _rebuild(tool:int)->void:
	for child:Node in bubble_rows.get_children():
		if child!=district_name_row:bubble_rows.remove_child(child);child.queue_free()
	bindings.clear()
	road_palette=null
	if tool==2:road_palette=preload("res://scripts/ui/city_creation_compact_roads.gd").new();road_palette.setup(self,bubble_rows)
	var row:HBoxContainer
	var row_count:=0
	if tool in [0,1]:
		row=HBoxContainer.new();row.add_theme_constant_override("separation",GAP);row.alignment=BoxContainer.ALIGNMENT_CENTER;bubble_rows.add_child(row)
		_seal(row,"house","房间","扩建房间").pressed.connect(func()->void:demo.select_tool(0);demo.house_module_mode=true)
		_seal(row,"vegetation","露台","点击侧墙或屋顶添置露台").pressed.connect(func()->void:demo.select_tool(1))
		_seal(row,"erase","拆除","点击模块拆除；Shift整栋").pressed.connect(func()->void:demo.select_tool(3))
		preload("res://scripts/ui/city_creation_build_palette.gd").setup(self,bubble_rows)
	elif tool==4:
		row=HBoxContainer.new();row.add_theme_constant_override("separation",GAP);row.alignment=BoxContainer.ALIGNMENT_CENTER;bubble_rows.add_child(row)
		var role_palette:Node=demo.get_meta("role_palette",null)
		var selected:String=role_palette.paint_role if role_palette!=null else ""
		var button:=_seal(row,"house" if selected.is_empty() else selected,"选用途" if selected.is_empty() else str(demo.spatial_popover.ROLE_LABELS[selected]),"打开共用用途选择器；连续点房安排用途")
		button.name="BatchHousePurpose";button.pressed.connect(func()->void:demo.get_meta("role_palette").show_for(false))
	for group:Array in ([] if tool==2 else TOOL_GROUPS.get(tool,[])):
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
	if road_palette!=null:road_palette.sync()
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
	_position_popup()

func _position_popup()->void:
	if not is_instance_valid(popup) or not popup.visible or active_tool<0:return
	var source:Control=demo.tool_buttons[0 if active_tool in [1,3] else 5 if active_tool==6 else 4 if active_tool==7 else active_tool]
	var anchor:=source.get_global_rect()
	var extent:=bubble_rows.get_combined_minimum_size()
	bubble_rows.size=extent
	bubble_rows.pivot_offset=extent*.5
	var bounds:=parent.get_viewport_rect().size
	bubble_rows.position.x=clampf(anchor.get_center().x-extent.x*.5,12.,maxf(12.,bounds.x-extent.x-12.))
	bubble_rows.position.y=maxf(12.,anchor.position.y-16.-extent.y)
	if demo.journal.scrollbook.visible:bubble_rows.position.x=maxf(demo.journal.scrollbook.size.x+12.,bubble_rows.position.x)
	if nature_row.visible:
		var nature_size:=nature_row.get_combined_minimum_size();nature_row.size=nature_size
		nature_row.position=Vector2(clampf(anchor.get_center().x-nature_size.x*.5,12.,maxf(12.,bounds.x-nature_size.x-12.)),maxf(12.,bubble_rows.position.y-nature_size.y-8.))
		if demo.journal.scrollbook.visible:nature_row.position.x=maxf(demo.journal.scrollbook.size.x+12.,nature_row.position.x)
	target_options.refresh(self)

func _nature_mode(mode:int)->void:
	if mode==0:demo.select_tool(5)
	else:
		demo.select_tool(6)
		var source:OptionButton=parent.find_child("WaterMode",true,false)
		source.select(mode-1);source.item_selected.emit(mode-1)
	refresh()

func _life_role(role:String)->void:
	if demo.selected_house.is_empty():demo._message("点一栋房屋，在屋顶卡片安排生活。 ");return
	demo._after_edit(demo.state.set_house_role(demo.selected_house,role),"room")
	demo.spatial_popover.open_for_house(demo.selected_house)
