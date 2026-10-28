extends RefCounted
## One temporary view of a published seat; the original camera is restored exactly.
const Targets=preload("res://scripts/ui/city_creation_sitting_targets.gd")
var seat_id:=""
var saved:Dictionary={}
func handle(demo,event:InputEvent)->bool:
	if not event is InputEventKey or not event.pressed or event.echo:return false
	if demo.get_viewport().gui_get_focus_owner() is LineEdit or demo.get_viewport().gui_get_focus_owner() is TextEdit:return false
	if not seat_id.is_empty() and event.keycode in [KEY_ESCAPE,KEY_V,KEY_B]:leave(demo);return true
	if event.keycode!=KEY_B or event.ctrl_pressed or event.alt_pressed:return false
	var seats:=Targets.plans(demo);var best:=36.;var chosen:=""
	for id:String in seats:
		var seat:Dictionary=seats[id];var point:=Vector3(seat.at.x,seat.y+.6,seat.at.y)
		if demo.camera.is_position_behind(point) or Targets.occupied(demo,id):continue
		var distance:float=demo.camera.unproject_position(point).distance_to(demo.pointer)
		if distance>=best:continue
		var ray:=PhysicsRayQueryParameters3D.create(demo.camera.global_position,point,1)
		if not demo.get_world_3d().direct_space_state.intersect_ray(ray).is_empty():continue
		best=distance;chosen=id
	if chosen.is_empty():demo._message("指向空闲的道路长椅或可达阳台，再按 B 静听。");return true
	enter(demo,chosen);return true
func enter(demo,id:String)->bool:
	var seat:Dictionary=Targets.plans(demo).get(id,{})
	if seat.is_empty() or Targets.occupied(demo,id):return false
	if not seat_id.is_empty():leave(demo)
	var rig=demo.camera_rig
	saved={"city":demo.state.get_instance_id(),"signature":seat.signature,"focus":demo.focus,"yaw":demo.yaw,"pitch":demo.pitch,"zoom":demo.zoom,"projection":demo.camera.projection,"fov":demo.camera.fov,"strolling":rig.strolling,"rig_saved":rig.saved.duplicate(true),"selected":demo.selected_house,"orbiting":demo.orbiting,"panning":demo.panning}
	demo._cancel_draft();seat_id=id;demo.life.set_meta("player_bench",id)
	if not rig.strolling:rig.saved={"focus":demo.focus,"yaw":demo.yaw,"pitch":demo.pitch,"zoom":demo.zoom}
	rig.strolling=true;demo.orbiting=false;demo.panning=false
	demo.focus=Vector3(seat.at.x,seat.y+float(seat.get("eye_height",1.02)),seat.at.y);demo.yaw=atan2(-seat.face.x,-seat.face.y);demo.pitch=.04
	demo.camera.projection=Camera3D.PROJECTION_PERSPECTIVE;demo.camera.fov=48.;demo._update_camera()
	demo._message("坐下听城 · 右键转头 · Esc / V 起身");return true
func update(demo)->bool:
	if seat_id.is_empty():return false
	var seat:Dictionary=Targets.plans(demo).get(seat_id,{})
	if saved.city!=demo.state.get_instance_id() or seat.is_empty() or seat.signature!=saved.signature:leave(demo);return false
	return true
func leave(demo)->void:
	if seat_id.is_empty():return
	demo.life.remove_meta("player_bench");seat_id=""
	demo.focus=saved.focus;demo.yaw=saved.yaw;demo.pitch=saved.pitch;demo.zoom=saved.zoom
	demo.camera.projection=saved.projection;demo.camera.fov=saved.fov
	demo.camera_rig.strolling=saved.strolling;demo.camera_rig.saved=saved.rig_saved
	demo.selected_house=saved.selected;demo.orbiting=saved.orbiting;demo.panning=saved.panning;demo._update_camera();saved={}
