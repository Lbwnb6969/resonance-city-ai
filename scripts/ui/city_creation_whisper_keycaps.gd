extends HBoxContainer
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var demo:Node3D
var uses:Array[int]=[0,0,0,0,0,0,0,0,0]
var _tool:=-1
var _text:=""
var _quiet:=0.
const SHORT_HINTS=["点地筑屋 · 点屋改造","点墙添露台","沿地拖出一条小路","点选拆除 · Shift整栋","点屋安排烟火","点地种花 · 拖动成林","轻划水岸","沿街圈出街坊","按住揉出地形"]
var _backdrop:StyleBoxFlat
var _draw_signature:Variant=null

func setup(owner:Node3D,parent:Control)->void:
	demo=owner;name="WhisperKeycapBar";parent.add_child(self)
	set_anchors_and_offsets_preset(Control.PRESET_BOTTOM_WIDE)
	offset_left=24;offset_right=-24;offset_top=-32;offset_bottom=-10
	add_theme_constant_override("separation",8);mouse_filter=Control.MOUSE_FILTER_PASS
	var key:=Label.new();key.text="左键";key.add_theme_font_size_override("font_size",11)
	var style:=UI.badge(Color(UI.PAPER,.60));style.set_corner_radius_all(5)
	style.content_margin_top=1;style.content_margin_bottom=1;style.content_margin_left=6;style.content_margin_right=6
	key.add_theme_stylebox_override("normal",style);key.mouse_filter=Control.MOUSE_FILTER_IGNORE;add_child(key)
	demo.hint.reparent(self);demo.hint.custom_minimum_size=Vector2.ZERO
	demo.hint.autowrap_mode=TextServer.AUTOWRAP_OFF;demo.hint.max_lines_visible=1
	demo.hint.clip_text=true;demo.hint.text_overrun_behavior=TextServer.OVERRUN_TRIM_ELLIPSIS
	demo.hint.add_theme_font_size_override("font_size",12);demo.hint.size_flags_horizontal=Control.SIZE_EXPAND_FILL
	demo.hint.add_theme_color_override("font_color",UI.PAPER);demo.hint.add_theme_color_override("font_shadow_color",Color("152e29"));demo.hint.add_theme_constant_override("shadow_outline_size",3)
	var navigation:=Label.new();navigation.text="滚轮 缩放 · 右键 转动 · J 手记"
	navigation.add_theme_font_size_override("font_size",11);navigation.add_theme_color_override("font_color",UI.PAPER);navigation.add_theme_color_override("font_shadow_color",Color("152e29"));navigation.add_theme_constant_override("shadow_outline_size",3)
	navigation.mouse_filter=Control.MOUSE_FILTER_IGNORE;add_child(navigation)
	mouse_entered.connect(func()->void:_quiet=0.)
	_backdrop=UI.badge(Color(.04,.09,.07,.72));_backdrop.set_corner_radius_all(6)

func _draw()->void:
	if demo.light_phase==2:
		for child:Label in [demo.hint,get_child(2)]:
			var extent:=child.get_theme_default_font().get_string_size(child.text,HORIZONTAL_ALIGNMENT_LEFT,-1,child.get_theme_font_size("font_size"))
			draw_style_box(_backdrop,Rect2(child.position-Vector2(4,1),Vector2(minf(extent.x,child.size.x)+8,child.size.y+2)))

func record_action(tool:int)->void:uses[tool]+=1

func _process(delta:float)->void:
	if demo.tool!=_tool or demo.hint.text!=_text:
		_tool=demo.tool;_text=demo.hint.text;_quiet=0.;tooltip_text=_text+"\nAlt 自由落点 · Esc 取消 · Ctrl+Z 撤销"
	demo.hint.text="点工坊/奇观听独奏 · Esc 结束" if demo.camera_rig.strolling else "独奏中 · Esc 结束 · 右键自由转动" if demo.get_meta("solo_spotlight").active() else demo.get_meta("road_tool").hint() if demo.tool==2 else SHORT_HINTS[demo.tool]
	_text=demo.hint.text
	var changed:=[demo.light_phase,_text,size]
	if changed!=_draw_signature:_draw_signature=changed;queue_redraw()
	_quiet+=delta
	var target:=(.60 if demo.light_phase==2 else .30) if uses[_tool]>=3 and _quiet>2. and not get_global_rect().has_point(get_global_mouse_position()) else .88
	modulate.a=move_toward(modulate.a,target,delta*1.8)
