extends Node
const Rotation=preload("res://scripts/world/city_creation_house_rotation.gd")
var demo
var target:=""
var initial:Dictionary={}
var angle:=0.
var life_running:=false
var hint:Label
var validity:Dictionary={"ok":true}
func setup(owner_demo)->void:
	demo=owner_demo;demo.add_child(self);demo.set_meta("house_rotation_input",self)
	hint=Label.new();hint.name="HouseRotationHint";hint.add_theme_font_size_override("font_size",16)
	hint.add_theme_color_override("font_color",Color("efe6cd"));hint.add_theme_color_override("font_outline_color",Color("283d36"));hint.add_theme_constant_override("outline_size",5)
	hint.horizontal_alignment=HORIZONTAL_ALIGNMENT_CENTER;hint.mouse_filter=Control.MOUSE_FILTER_IGNORE;hint.hide();demo.ui_layer.add_child(hint)
func selected()->String:
	if not demo.spatial_popover.target_house_id.is_empty():return demo.spatial_popover.target_house_id
	return str(demo.selected_house)
func handle(event:InputEvent)->bool:
	if not target.is_empty():
		if event is InputEventMouseMotion:
			angle=wrapf(angle+event.relative.x*.008,-PI,PI);preview();return true
		if event is InputEventKey and event.pressed and not event.echo:
			if event.keycode==KEY_ESCAPE:finish(false)
			elif event.keycode in [KEY_R,KEY_ENTER,KEY_KP_ENTER]:finish(true)
			return true
		if event is InputEventMouseButton:
			if event.pressed and event.button_index==MOUSE_BUTTON_LEFT:finish(true)
			elif event.pressed and event.button_index==MOUSE_BUTTON_RIGHT:finish(false)
			return true
		return true
	if not event is InputEventKey or not event.pressed or event.echo or event.ctrl_pressed or event.alt_pressed:return false
	if event.keycode not in [KEY_Q,KEY_E,KEY_R]:return false
	if event.keycode==KEY_R and demo.tool==2:return false
	if demo.get_viewport().gui_get_focus_owner() is LineEdit or demo.get_viewport().gui_get_focus_owner() is TextEdit:return false
	if demo.house_drawing or demo.road_drawing or demo.vegetation_drawing or demo.water_drawing or demo.district_drawing or demo.district_link_drawing or demo.orbiting or demo.panning or (demo.terrain_brush!=null and demo.terrain_brush.drawing):return false
	var id:=selected()
	if id.is_empty() or demo.edit_pending():return false
	var index:int=demo.state._house_index(id)
	if index<0:return false
	var house:Dictionary=demo.state.houses[index]
	if event.keycode==KEY_R:
		target=id;initial=house.duplicate(true);angle=Rotation.Frame.yaw(house);life_running=demo.life.is_processing();demo.life.set_process(false);demo.spatial_popover.close();preview()
	else:
		var delta:=PI*.5*(1. if event.keycode==KEY_E else -1.)
		demo._after_edit(demo.state.rotate_house(id,Rotation.Frame.yaw(house)+delta),"room",true,id)
	return true
func preview()->void:
	validity=Rotation.candidate(demo.state,target,angle)
	var house:=initial.duplicate(true);house.yaw=angle
	if demo.town.house_roots.has(target):Rotation.Frame.apply(demo.town.house_roots[target],house)
	hint.text="%.1f° · 移动鼠标转向 · 单击 / R 确定 · Esc 取消"%rad_to_deg(angle)
	if not validity.ok:hint.text+="\n"+str(validity.message)
	hint.modulate=Color.WHITE if validity.ok else Color("ffb49a")
	hint.size=Vector2(620,60);hint.position=Vector2((demo.get_viewport().get_visible_rect().size.x-620)*.5,105);hint.show()
func finish(commit:bool)->void:
	if commit and not validity.ok:demo._message(str(validity.message));return
	var id:=target
	if demo.town.house_roots.has(id):Rotation.Frame.apply(demo.town.house_roots[id],initial)
	target="";hint.hide();demo.life.set_process(life_running)
	if commit:demo._after_edit(demo.state.rotate_house(id,angle),"room",true,id)
	else:demo.spatial_popover.open_for_house(id)

func stroke_point(at:Vector2)->Vector2:
	var house:Dictionary=demo.town._house_record(str(demo.house_stroke_host))
	return at if house.is_empty() else Rotation.Frame.inverse(house,at)
func stroke_yaw()->float:
	var house:Dictionary=demo.town._house_record(str(demo.house_stroke_host))
	return 0. if house.is_empty() else Rotation.Frame.yaw(house)
func road_point(hit:Dictionary)->Variant:
	var body:Object=hit.get("collider")
	if body==null or not body.has_meta("house_id"):return null
	var house:Dictionary=demo.town._house_record(str(body.get_meta("house_id")))
	if house.is_empty() or not Rotation.Frame.transformed(house):return null
	var cell:Dictionary=body.get_meta("cell");var normal:Vector3=Rotation.Frame.design_normal(house,hit.normal,cell)
	if int(cell.level)!=0 or cell.kind!="room" or absf(normal.y)>=.45:return demo._ground_at(demo.pointer)
	var side:=Vector2i(1 if normal.x>0 else -1,0) if absf(normal.x)>absf(normal.z) else Vector2i(0,1 if normal.z>0 else -1)
	var center:=Rotation.Frame.center(house,cell);var point:Vector3=hit.position
	var tangent:=Rotation.Frame.direction(house,Vector2(side.y,-side.x),cell)
	if absf((Vector2(point.x,point.z)-center).dot(tangent))<=demo.Frontage.HALF_DOOR and demo.Frontage.exposed(house,cell,side):return center+Rotation.Frame.direction(house,Vector2(side),cell)*.92
	return demo._ground_at(demo.pointer)
