extends RefCounted
const Trim=preload("res://scripts/world/city_creation_road_trim.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Guide=preload("res://scripts/visual/city_creation_road_anchor_guide.gd")
var demo
var guide:=Guide.new()
var hover:Dictionary={}
var reviewed:Dictionary={}
var first:Dictionary={}
var model:Node3D
var pointer_shift:=false
var pointer_alt:=false
var last_key:Array=[]
var life_was_processing:=false
func setup(owner)->void:demo=owner;guide.setup(owner);guide.root.name="RoadTrimGuide";demo.set_meta("road_trim_tool",self)
func cancel()->void:
	if model!=null:model.queue_free();model=null;demo.town.show();demo.life.set_process(life_was_processing)
	hover={};reviewed={};first={};last_key=[];pointer_shift=false;guide.clear()
func input(event:InputEvent)->bool:
	if demo.tool!=2 or demo.get_meta("road_tool").blocked():
		if not reviewed.is_empty() or not first.is_empty() or not hover.is_empty():cancel()
		return false
	if event is InputEventWithModifiers:pointer_shift=event.shift_pressed;pointer_alt=event.alt_pressed
	if event is InputEventKey and event.pressed:
		if demo.get_viewport().gui_get_focus_owner() is LineEdit or demo.get_viewport().gui_get_focus_owner() is TextEdit:return false
		if event.keycode==KEY_ESCAPE and (not reviewed.is_empty() or not first.is_empty()):cancel();return true
		if event.keycode==KEY_ENTER and not reviewed.is_empty():
			var result:=Trim.commit(demo.state,reviewed);cancel();demo._after_edit(result,"erase");return true
		if not reviewed.is_empty() and not event.ctrl_pressed:return true
	if not reviewed.is_empty() and event is InputEventMouseButton and event.button_index in [MOUSE_BUTTON_LEFT,MOUSE_BUTTON_RIGHT]:
		if event.pressed and event.button_index==MOUSE_BUTTON_RIGHT:cancel()
		return true
	return false
func unhandled(event:InputEvent)->bool:
	if demo.tool!=2 or demo.get_meta("road_tool").blocked() or demo.road_roundabout:return false
	if event is InputEventMouseMotion:
		demo.pointer=event.position;pointer_shift=event.shift_pressed;pointer_alt=event.alt_pressed;update();return pointer_shift or not first.is_empty() or not reviewed.is_empty()
	if not event is InputEventMouseButton or event.button_index!=MOUSE_BUTTON_LEFT or not event.shift_pressed:return false
	if not event.pressed:return true
	if demo.edit_pending():demo._message("等待上一步完成后再裁路");return true
	if demo.get_meta("road_tool").active():demo._cancel_draft()
	demo.pointer=event.position;pointer_shift=true;pointer_alt=event.alt_pressed;last_key=[];update()
	var at:Vector2=demo._ground_at(demo.pointer)
	if pointer_alt or not first.is_empty():
		if first.is_empty():
			var id:String=demo.state.road_at(at);var road:=Trim.road(demo.state,id)
			if road.is_empty():return true
			first={"owner":demo.state.get_instance_id(),"revision":demo.state.revision,"road_id":id,"arc":Trim.Geometry.project(road,at).arc};last_key=[];update();return true
		var road:=Trim.road(demo.state,first.road_id);var end:=Trim.Geometry.project(road,at)
		if end.distance>float(road.width)*.5+.2:demo._message("第二切点请选择同一条道路");return true
		review(Trim.plan(demo.state,first.road_id,minf(first.arc,end.arc),maxf(first.arc,end.arc)));return true
	if not hover.is_empty():review(Trim.plan(demo.state,hover.road_id,hover.low,hover.high))
	return true
func review(plan:Dictionary)->void:
	if not plan.ok:demo._message(plan.message);return
	reviewed=plan;first={};hover={};life_was_processing=demo.life.is_processing();demo.life.set_process(false);model=Renderer.new();model.name="RoadTrimCandidate";demo.add_child(model);model.setup(plan.candidate);model.set_light_phase(demo.light_phase);demo.town.hide()
	outline(plan.removed,plan.message)
func update()->bool:
	if demo.tool!=2 or demo.get_meta("road_tool").blocked() or demo.road_roundabout:
		if model!=null or not first.is_empty() or not hover.is_empty():cancel()
		return false
	if not reviewed.is_empty():
		if reviewed.owner!=demo.state.get_instance_id() or reviewed.revision!=demo.state.revision:cancel();demo._message("城市已变化，请重新选择裁路范围");return true
		outline(reviewed.removed,reviewed.message);return true
	if not first.is_empty() and (first.owner!=demo.state.get_instance_id() or first.revision!=demo.state.revision):cancel();return true
	if not pointer_shift and first.is_empty():
		if not hover.is_empty():demo.town.clear_preview();hover={};last_key=[];guide.clear()
		return false
	var at:Vector2=demo._ground_at(demo.pointer);var key:=[demo.state.get_instance_id(),demo.state.revision,at,pointer_alt,first]
	if key==last_key:return true
	last_key=key.duplicate(true)
	if not first.is_empty():
		var road:=Trim.road(demo.state,first.road_id);var p:=Trim.Geometry.project(road,at);var points:=Trim.Geometry.slice(road,minf(first.arc,p.arc),maxf(first.arc,p.arc))
		draw(points,road.width,"选择第二切点 · Shift 点击查看结果 · Esc 取消");return true
	var selected:=Trim.select(demo.state,at)
	if not selected.ok:hover={};demo.town.clear_preview();guide.clear();return true
	hover=selected;draw(selected.points,selected.width,"Shift 点击查看裁路结果 · Alt+Shift 自选两个切点");return true
func draw(points:Array,width:float,text:String)->void:
	var path:Array[Vector2]=[]
	for row:Array in points:path.append(Trim.Geometry.point(row))
	demo.town.preview_road(path,false,width);outline(points,text)
func outline(points:Array,text:String)->void:
	var path:Array[Vector2]=[]
	for row:Array in points:path.append(Trim.Geometry.point(row))
	var tail:Vector2=path.pop_back();guide.draw(path,tail,text)
