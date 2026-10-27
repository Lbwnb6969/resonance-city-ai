extends RefCounted
## Small hidden controls preserve the old tool API and supply the native dock.
static func panel(root:Control,id:String)->PanelContainer:
 var control:=PanelContainer.new();control.name=id;root.add_child(control);control.hide();return control
static func option(parent:Control,id:String,items:Array,index:int,action:Callable)->OptionButton:
 var control:=OptionButton.new();control.name=id;control.focus_mode=Control.FOCUS_NONE
 for text:String in items:control.add_item(text)
 control.select(index);control.item_selected.connect(action);parent.add_child(control);return control
static func toggle(parent:Control,id:String,text:String,action:Callable)->CheckButton:
 var control:=CheckButton.new();control.name=id;control.text=text;control.focus_mode=Control.FOCUS_NONE;control.toggled.connect(action);parent.add_child(control);return control
static func text(demo:Node3D,parent:Control,field:String,value:String="")->void:
 var control:=Label.new();control.name=field;control.text=value;parent.add_child(control);demo.set(field,control)
static func setup(demo:Node3D,root:Control)->void:
 demo.vegetation_panel=panel(root,"VegetationOptions")
 option(demo.vegetation_panel,"Species",demo.State.GardenSpecies.NAMES,0,func(i:int)->void:demo._cancel_draft();demo.vegetation_kind=demo.State.GardenSpecies.IDS[i])
 option(demo.vegetation_panel,"PlantingMode",["单株 · 精确摆放","成片 · 随笔种植"],0,func(i:int)->void:demo._cancel_draft();demo.vegetation_single=i==0)
 option(demo.vegetation_panel,"BrushSize",["小笔刷 · 近庭","中笔刷 · 树群","大笔刷 · 林带"],1,func(i:int)->void:demo._cancel_draft();demo.vegetation_radius=[.8,1.4,2.4][i])
 demo.road_panel=panel(root,"RoadOptions")
 option(demo.road_panel,"RoadMode",["1 随手自由画","2 两点直路 / 拖拉折线","3 起点、控制点、终点曲路"],0,func(i:int)->void:demo.get_meta("road_tool").set_mode(i))
 option(demo.road_panel,"RoadSize",["原尺寸","窄路","标准","宽路","宽街"],0,func(i:int)->void:demo._cancel_draft();demo.road_size=i-1)
 var promenade:=CheckButton.new();promenade.name="RoadPromenade";promenade.text="石板宽街 · 暖灯花箱"
 var styles:=option(demo.road_panel,"RoadStyle",preload("res://scripts/world/city_creation_road_paving.gd").CAPTIONS,0,func(i:int)->void:demo._cancel_draft();demo.road_style=preload("res://scripts/world/city_creation_road_paving.gd").UI_STYLES[i];promenade.set_pressed_no_signal(demo.road_style=="promenade"))
 promenade.toggled.connect(func(pressed:bool)->void:demo._cancel_draft();demo.road_style="promenade" if pressed else "path";styles.select(1 if pressed else 0));demo.road_panel.add_child(promenade)
 toggle(demo.road_panel,"RoadRoundabout","◎ 路口环岛广场",func(pressed:bool)->void:demo._cancel_draft();demo.road_roundabout=pressed)
 preload("res://scripts/ui/city_creation_road_decoration_ui.gd").setup(demo)
 text(demo,demo.road_panel,"road_status","1自由画 · 2直路 · 3曲路 · Tab切换定点模式 · 重描原位升级")
 demo.water_panel=panel(root,"WaterOptions")
 option(demo.water_panel,"WaterMode",["挖一片池塘","从水边引出支流"],0,func(i:int)->void:demo._cancel_draft();demo.water_kind=["pond","channel"][i])
 option(demo.water_panel,"WaterWidth",["窄岸 · 1.8米","舒展 · 3.2米","开阔 · 5米"],1,func(i:int)->void:demo._cancel_draft();demo.water_width=[1.8,3.2,5.][i])
 text(demo,demo.water_panel,"water_status","拖出曲线，松开留下水岸。Shift点击移除自己画的水。")
 demo.removal_panel=panel(root,"RemovalOptions")
 demo.removal_mode=option(demo.removal_panel,"RemovalMode",["移除单元","整栋移除"],0,func(i:int)->void:demo.remove_whole=i==1;demo._cancel_draft())
 text(demo,demo.removal_panel,"removal_info",demo.REMOVAL_HINT)
static func district(demo:Node3D,root:Control)->void:
 demo.district_panel=panel(root,"DistrictOptions")
 option(demo.district_panel,"DistrictWidth",["小庭 · 3.2米","街坊 · 5.6米","宽园 · 8.8米"],1,func(i:int)->void:demo._cancel_draft();demo.district_width=[3.2,5.6,8.8][i])
 demo.district_name=LineEdit.new();demo.district_name.name="DistrictName";demo.district_panel.add_child(demo.district_name)
 demo.district_name.text_submitted.connect(func(value:String)->void:demo._after_edit(demo.state.set_district_name(demo.selected_district,value),"terrace");demo.district_name.release_focus())
 demo.district_style_picker=option(demo.district_panel,"DistrictStyle",demo.DISTRICT_STYLES.map(func(id):return demo.DISTRICT_STYLE_NAMES[id]),0,func(i:int)->void:
  demo._cancel_draft();demo.district_style=demo.DISTRICT_STYLES[i]
  if not demo.selected_district.is_empty():demo._after_edit(demo.state.set_district_style(demo.selected_district,demo.district_style),"terrace"))
 demo.district_era_picker=option(demo.district_panel,"DistrictEra",demo.State.Eras.NAMES,0,func(i:int)->void:demo._after_edit(demo.state.set_district_era(demo.selected_district,demo.State.Eras.IDS[i]),"room"))
 demo.district_adaptive_button=toggle(demo.district_panel,"DistrictAdaptive","随用途变化配器",func(pressed:bool)->void:
  demo._cancel_draft();demo.district_adaptive=pressed
  if not demo.selected_district.is_empty():demo._after_edit(demo.state.set_district_adaptive(demo.selected_district,pressed),"terrace",false))
 demo.district_reply_button=toggle(demo.district_panel,"DistrictReply","邻里短句对答",func(pressed:bool)->void:demo.music.reply.set_enabled(pressed));demo.district_reply_button.set_pressed_no_signal(demo.music.reply.enabled)
 demo.district_link_button=toggle(demo.district_panel,"DistrictLinkMode","♫ 连接共鸣街坊",func(pressed:bool)->void:demo._cancel_draft();demo.district_link_mode=pressed;demo._refresh_ui())
 text(demo,demo.district_panel,"district_description");text(demo,demo.district_panel,"district_music_status")
