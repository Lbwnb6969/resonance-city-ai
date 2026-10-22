extends Control
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Icons=preload("res://scripts/ui/city_creation_vector_icons.gd")
var demo:Node3D
var slots:Array[Dictionary]=[]
var emitted:=0
var arrivals:=0
var clock:=0.
func setup(owner:Node3D,parent:Control)->void:
	demo=owner;name="JuiceFlyingSeals";parent.add_child(self)
	set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT);mouse_filter=Control.MOUSE_FILTER_IGNORE
	for i in range(12):slots.append({"clock":-100.,"at":Vector3.ZERO,"kind":"","label":"","arrived":true})
func emit(at:Vector3,kind:String,label:String,now:float)->void:
	var row:Dictionary=slots[emitted%slots.size()];emitted+=1
	row.clock=now;row.at=at;row.kind=kind;row.label=label;row.arrived=false
func update(now:float)->void:
	clock=now
	for row:Dictionary in slots:
		if not row.arrived and clock-float(row.clock)>=1.1:
			row.arrived=true;arrivals+=1;demo.score_ribbon.receive_juice(str(row.kind))
	queue_redraw()
func clear()->void:
	for row:Dictionary in slots:row.clock=-100.;row.arrived=true
	queue_redraw()
func _draw()->void:
	if not demo.ui_layer.visible:return
	var target:Vector2=demo.score_ribbon.staff.get_global_rect().get_center()
	for row:Dictionary in slots:
		var age:=clock-float(row.clock)
		if age<0. or age>=1.1 or demo.camera.is_position_behind(row.at):continue
		var start:Vector2=demo.camera.unproject_position(row.at)
		var t:=clampf((age-.18)/.92,0.,1.);var ease:=t*t
		var control:Vector2=(start+target)*.5+Vector2(0.,-minf(180.,start.distance_to(target)*.28))
		var at:=start*(1.-ease)*(1.-ease)+control*2.*(1.-ease)*ease+target*ease
		var alpha:=minf(1.,age/.08)*(1.-t*.25)
		draw_circle(at,lerpf(12.,3.,t),Color(UI.PAPER,.72*alpha));draw_arc(at,lerpf(12.,3.,t),0,TAU,24,Color(UI.GOLD,alpha),1.4,true)
		if t<.7:
			draw_set_transform(at,0.,Vector2.ONE*(1.-t));Icons.draw_icon(self,"chord",Vector2.ZERO,7.,UI.GREEN,UI.GOLD);draw_set_transform(Vector2.ZERO)
		if t<.08:
			var font:=get_theme_default_font();var label:=str(row.label)
			draw_string(font,at+Vector2(-font.get_string_size(label,HORIZONTAL_ALIGNMENT_LEFT,-1,11).x*.5,-18.),label,HORIZONTAL_ALIGNMENT_LEFT,-1,11,Color(UI.GOLD,alpha))
		var tail:=PackedVector2Array()
		for i in range(9):
			var u:=maxf(0.,ease-float(i)*.012)
			tail.append(start*pow(1.-u,2.)+control*2.*(1.-u)*u+target*u*u)
		draw_polyline(tail,Color(UI.GOLD,.65*alpha),1.5,true)
