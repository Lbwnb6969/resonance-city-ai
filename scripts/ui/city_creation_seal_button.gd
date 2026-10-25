extends Button
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Icons=preload("res://scripts/ui/city_creation_vector_icons.gd")
var kind:="journal":
	set(value):
		if kind!=value:kind=value;queue_redraw()
var turn:=0.:
	set(value):
		if turn!=value:turn=value;queue_redraw()
var pulse:=0.:
	set(value):
		if pulse!=value:pulse=value;queue_redraw()
var active:=false:
	set(value):
		if active!=value:active=value;queue_redraw()
var muted:=false:
	set(value):
		if muted!=value:muted=value;queue_redraw()
var saved_glow:=0.:
	set(value):
		if saved_glow!=value:saved_glow=value;queue_redraw()
var zones:Array[int]=[]:
	set(value):
		if zones!=value:zones=value;queue_redraw()
var caption:="":
	set(value):
		if caption!=value:caption=value;queue_redraw()
var key_label:="":
	set(value):
		if key_label!=value:key_label=value;queue_redraw()
var draw_count:=0
var _hover:Tween

func configure(glyph:String,diameter:float=36.)->void:
	kind=glyph;text="";set_meta("vector_seal",true)
	custom_minimum_size=Vector2.ONE*diameter
	size_flags_vertical=Control.SIZE_SHRINK_CENTER
	focus_mode=Control.FOCUS_NONE
	for state:String in ["normal","hover","pressed","disabled","focus"]:
		var style:=preload("res://scripts/ui/city_creation_tactile_ui_theme.gd").seal_style(state)
		add_theme_stylebox_override(state,style)
	mouse_entered.connect(func()->void:_float_to(1.09))
	mouse_exited.connect(func()->void:_float_to(1.))
	resized.connect(func()->void:pivot_offset=size*.5)
	pivot_offset=size*.5
	queue_redraw()

func _float_to(value:float)->void:
	if _hover!=null:_hover.kill()
	_hover=create_tween();_hover.tween_property(self,"scale",Vector2.ONE*value,.20).set_trans(Tween.TRANS_BACK).set_ease(Tween.EASE_OUT)

func _draw()->void:
	draw_count+=1
	var color:=UI.PAPER if is_pressed() or active else UI.INK
	if muted:color=UI.MUTED
	if active:
		draw_circle(size*.5,minf(size.x,size.y)*.48,UI.GREEN)
		draw_arc(size*.5,minf(size.x,size.y)*.48,0,TAU,48,UI.GOLD,1.,true)
	var radius:=minf(size.x,size.y)*.31
	if kind.begins_with("sundial"):
		for i in range(12):
			var direction:=Vector2.from_angle(turn+i*TAU/12.)
			draw_line(size*.5+direction*size.x*.405,size*.5+direction*size.x*.445,Color(UI.GOLD,.65),1.,true)
	var center:=size*.5 if caption.is_empty() else Vector2(size.x*.5,18.)
	draw_set_transform(center)
	if not caption.is_empty():radius=11.
	Icons.draw_icon(self,kind,Vector2.ZERO,radius*(1.+pulse*.045),color,UI.GOLD)
	draw_set_transform(Vector2.ZERO)
	if not caption.is_empty():
		var font:=get_theme_default_font()
		draw_string(font,Vector2((size.x-font.get_string_size(caption,HORIZONTAL_ALIGNMENT_LEFT,-1,10).x)*.5,41),caption,HORIZONTAL_ALIGNMENT_LEFT,-1,10,color)
		draw_string(font,Vector2(5,10),key_label,HORIZONTAL_ALIGNMENT_LEFT,-1,8,Color(color,.60))
	if muted:draw_line(size*Vector2(.29,.28),size*Vector2(.71,.72),UI.WARM_WARN,1.5,true)
	if saved_glow>0.:draw_arc(size*.5,minf(size.x,size.y)*.47,0,TAU,48,Color(UI.GOLD,saved_glow),1.8,true)
	for i in range(zones.size()):
		var p:=size*.5+Vector2.from_angle(PI*.20+i*.20)*size.x*.39
		draw_circle(p,1.35,Color(UI.GOLD,1. if zones[i]>0 and not muted else .2))
