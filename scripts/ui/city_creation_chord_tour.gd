extends RefCounted
## Twelve seconds through the real chord's buildings; no rewards or audio players.
var active:=false
var saved:Dictionary={}
var points:Array[Vector3]=[]
var elapsed:=0.
static func targets(city,id:String)->Array[Vector3]:
	var result:Array[Vector3]=[];var buffs:Dictionary=city.synergy_buffs()
	for house:Dictionary in city.houses:
		if not buffs.houses.get(str(house.id),{}).get("chord_scopes",{}).has(id):continue
		var point:=Vector3(house.origin[0],float(house.get("base_y",0.))+.85,house.origin[1])
		for cell:Dictionary in house.cells:point.y=maxf(point.y,float(house.get("base_y",0.))+int(cell.level)*1.7+.85)
		result.append(point)
	return result
func start(demo,id:String)->bool:
	if demo.gallery.busy or demo.edit_pending():return false
	if id not in demo.gallery.archive.chords:demo._message("这枚和弦还未在作品中留痕。");return false
	var found:=targets(demo.state,id)
	if found.is_empty():demo._message("当前河湾没有这枚和弦；打开留有它的作品后即可巡礼。");return false
	stop(demo);demo.camera_rig.bench_view.leave(demo);demo.gallery.close_panel()
	var rig=demo.camera_rig
	saved={"city":demo.state.get_instance_id(),"revision":demo.state.revision,"focus":demo.focus,"yaw":demo.yaw,"pitch":demo.pitch,"zoom":demo.zoom,"projection":demo.camera.projection,"fov":demo.camera.fov,"strolling":rig.strolling,"rig_saved":rig.saved.duplicate(true),"selected":demo.selected_house}
	points=found;elapsed=0.;active=true;rig.strolling=false;demo.orbiting=false;demo.panning=false
	demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL;demo.pitch=.65;demo.zoom=14.
	demo.focus=points[0];demo._update_camera();demo._message("和弦巡礼 · 12秒 · 点击或按键随时返回");return true
func handle(demo,event:InputEvent)->bool:
	if not active:return false
	if event is InputEventKey and event.pressed and not event.echo:
		stop(demo);return event.keycode==KEY_ESCAPE
	if event is InputEventMouseButton and event.pressed:stop(demo);return true
	return false
func update(demo,delta:float)->bool:
	if not active:return false
	if saved.city!=demo.state.get_instance_id() or saved.revision!=demo.state.revision or demo.gallery.busy or demo.gallery.panel.visible or demo.guide.visible():stop(demo);return false
	elapsed+=delta
	if elapsed>=12.:stop(demo);return false
	var progress:=elapsed/12.*maxi(1,points.size()-1);var index:=mini(floori(progress),points.size()-1)
	demo.focus=points[index].lerp(points[mini(index+1,points.size()-1)],smoothstep(0.,1.,fposmod(progress,1.)))
	demo.yaw=float(saved.yaw)+elapsed*.035;demo._update_camera();return true
func stop(demo)->void:
	if not active:return
	active=false;points.clear()
	demo.focus=saved.focus;demo.yaw=saved.yaw;demo.pitch=saved.pitch;demo.zoom=saved.zoom
	demo.camera.projection=saved.projection;demo.camera.fov=saved.fov
	demo.camera_rig.strolling=saved.strolling;demo.camera_rig.saved=saved.rig_saved;demo.selected_house=saved.selected
	demo._update_camera();saved={}
func collection_view(demo)->Dictionary:
	var view:Dictionary=saved.rig_saved if saved.strolling else saved
	var at:Vector3=view.focus
	return {"focus":[at.x,at.y,at.z],"yaw":view.yaw,"pitch":view.pitch,"zoom":view.zoom,"evening":demo.evening,"light_phase":demo.light_phase}
