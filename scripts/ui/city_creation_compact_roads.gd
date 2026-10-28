extends RefCounted
## One row of current values; the hidden OptionButtons remain the only source.
var dock_ref:WeakRef
var dock:
	get:return dock_ref.get_ref()
var demo
var menu:GridContainer
var row:HBoxContainer
var heads:Dictionary={}
var opened:=""
const LABELS={"RoadStyle":["小径","石板","林荫","轨街","卵石","砖路","扇石","碎石"],"RoadDecoration":["原款","留白","路灯","花箱","树池","长椅"],"RoadSize":["原宽","窄路","标准","宽路","宽街"],"RoadMode":["随手画","直路","曲路"]}

func setup(owner,container:Control)->void:
	dock_ref=weakref(owner);demo=owner.demo
	menu=GridContainer.new();menu.name="RoadChoiceMenu";menu.columns=4
	menu.add_theme_constant_override("h_separation",6);menu.add_theme_constant_override("v_separation",6)
	container.add_child(menu);menu.hide()
	row=HBoxContainer.new();row.name="CompactRoadRow";row.add_theme_constant_override("separation",6);container.add_child(row)
	for field:String in ["RoadStyle","RoadDecoration","RoadSize","More"]:
		var button:Button=dock._seal(row,"lamp" if field=="RoadDecoration" else "road","","选择道路选项")
		button.custom_minimum_size.x=86;button.name=field+"Current";heads[field]=button
		button.pressed.connect(toggle.bind(field))
		heads[field].mouse_force_pass_scroll_events=field!="RoadSize"
		heads[field].gui_input.connect(_wheel.bind(field))
	sync()

func source(field:String)->OptionButton:return demo.road_panel.find_child(field,true,false)

func toggle(field:String)->void:
	opened="" if opened==field else field
	for child:Node in menu.get_children():menu.remove_child(child);child.queue_free()
	dock.bindings.clear()
	menu.visible=not opened.is_empty()
	if opened=="More":
		_choices("RoadMode")
		var toggle_source:BaseButton=demo.road_panel.find_child("RoadRoundabout",true,false)
		var button:Button=dock._seal(menu,"district","环岛",toggle_source.tooltip_text)
		button.custom_minimum_size.x=86
		button.pressed.connect(func()->void:toggle_source.button_pressed=not toggle_source.button_pressed;toggle("More"))
	elif not opened.is_empty():_choices(opened)
	sync();dock._position_popup.call_deferred()

func _choices(field:String)->void:
	var options:=source(field)
	for index:int in range(options.item_count):
		var glyph:String=str(dock.OPTION_ICONS[field][index])
		var button:Button=dock._seal(menu,glyph,str(LABELS[field][index]),options.get_item_text(index))
		button.custom_minimum_size.x=86
		button.pressed.connect(choose.bind(field,index))
		dock.bindings.append({"source":options,"button":button,"index":index,"type":"option"})

func choose(field:String,index:int)->void:
	var options:=source(field);options.select(index);options.item_selected.emit(index)
	if not opened.is_empty():toggle(opened)
	dock._sync()

func sync()->void:
	for field:String in ["RoadStyle","RoadDecoration","RoadSize"]:
		var options:=source(field)
		var label:String=str(LABELS[field][options.selected])
		if field=="RoadSize":
			var width:float=demo.State.RoadUpgrade.width_for(demo.road_style) if options.selected==0 else demo._selected_road_width()
			label=("原 " if options.selected==0 else "")+str(width)+"m"
		heads[field].caption=label;heads[field].tooltip_text=options.get_item_text(options.selected)+( " · 悬停滚轮或 [ / ] 调宽" if field=="RoadSize" else " · 点击选择")
	var tool=demo.get_meta("road_tool")
	heads.More.caption="更多 · "+str(LABELS.RoadMode[tool.effective if tool.active() else tool.mode])
	heads.More.tooltip_text="画法 / 环岛 · Tab切换活动草稿直曲 · 右键取消"

func _wheel(event:InputEvent,field:String)->void:
	if event is InputEventMouseButton and event.button_index in [MOUSE_BUTTON_WHEEL_UP,MOUSE_BUTTON_WHEEL_DOWN]:
		if field=="RoadSize" and event.pressed:step(1 if event.button_index==MOUSE_BUTTON_WHEEL_UP else -1)
		# Other heads pass wheel to the world camera, width owns its wheel.
		if field=="RoadSize":heads[field].accept_event()

func step(direction:int)->void:
	var options:=source("RoadSize")
	var index:=clampi(options.selected+direction,0,options.item_count-1)
	options.select(index);options.item_selected.emit(index);dock._sync()

static func change_width(owner,index:int)->void:
	owner.road_size=index-1
	var tool=owner.get_meta("road_tool")
	tool.signature.clear();tool.update(true)
