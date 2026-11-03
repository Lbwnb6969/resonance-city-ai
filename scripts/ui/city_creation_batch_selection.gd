extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
var dragging:=false
var start:=Vector2.ZERO
var finish:=Vector2.ZERO
func house_at(owner,position:Vector2)->String:
	var hit:Dictionary=owner.demo._ray_hit(position);var body:Object=hit.get("collider")
	return str(body.get_meta("house_id","")) if body!=null else ""
func center(house:Dictionary)->Vector3:
	var at:=Vector2.ZERO;var count:=0
	for cell:Dictionary in house.cells:
		if int(cell.level)==0:at+=Frame.center(house,cell);count+=1
	at/=maxi(count,1);return Vector3(at.x,float(house.get("base_y",0.0))+.2,at.y)
func handle(owner,event:InputEvent)->bool:
	if event is InputEventKey and event.pressed and not event.echo:
		if event.keycode==KEY_ESCAPE and (dragging or not owner.selected.is_empty()):dragging=false;owner.close();return true
		if event.keycode in [KEY_J,KEY_L,KEY_F1,KEY_V] or event.ctrl_pressed and event.keycode in [KEY_Z,KEY_Y,KEY_O]:dragging=false;owner.close()
	if owner.demo.tool not in [0,4]:return false
	if dragging and event is InputEventMouseMotion:finish=event.position;owner.demo.pointer=finish;owner.queue_redraw();return true
	if not event is InputEventMouseButton or event.button_index!=MOUSE_BUTTON_LEFT:return false
	if dragging and not event.pressed:
		finish=event.position;dragging=false;var rect:=Rect2(start,finish-start).abs();var ids:Array=[]
		for house:Dictionary in owner.demo.state.houses:
			var at:=center(house)
			if not owner.demo.camera.is_position_behind(at) and rect.has_point(owner.demo.camera.unproject_position(at)):ids.append(str(house.id))
		owner.select(ids);return true
	if not event.pressed or owner.demo.get_viewport().gui_get_hovered_control()!=null:return false
	owner.demo.pointer=event.position
	if event.ctrl_pressed and event.shift_pressed and owner.demo.tool==0:
		owner.close();dragging=true;start=event.position;finish=start;return true
	var id:=house_at(owner,event.position)
	if event.double_click and not id.is_empty():
		owner.select(owner.demo.state.natural_clusters().get(id,{}).get("members",[id]));return true
	if event.ctrl_pressed and not owner.selected.is_empty() and not id.is_empty():
		var ids:Array=owner.selected.duplicate()
		if ids.has(id):ids.erase(id)
		else:ids.append(id)
		owner.select(ids);return true
	if not owner.selected.is_empty():owner.close();return id.is_empty()
	return false
