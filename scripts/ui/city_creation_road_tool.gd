extends Node
## Three authoring modes share the exact State preview/commit pipeline.
const Geometry=preload("res://scripts/world/city_creation_road_curve_geometry.gd")
const Guide=preload("res://scripts/visual/city_creation_road_anchor_guide.gd")
const Ruler=preload("res://scripts/world/city_creation_road_ruler.gd")
const Closure=preload("res://scripts/world/city_creation_road_closure.gd")
var demo
var guide:=Guide.new()
var mode:=0
var effective:=0
var phase:=""
var pressed:=false
var dragged:=false
var start:=Vector2.ZERO
var control:=Vector2.INF
var tail:=Vector2.ZERO
var raw:Array[Vector2]=[]
var locks:Array[Vector2]=[]
var alt:=false
var signature:Array=[]
var valid:Dictionary={}
var reference:Dictionary={}
var ruler:Dictionary={}
var reference_revision:=-1
var closure:Dictionary={}
var closure_audio=preload("res://scripts/audio/city_creation_road_closure_audio.gd").new()
func setup(owner)->void:
	demo=owner;closure_audio.demo=owner;name="RoadTool";demo.add_child(self);demo.set_meta("road_tool",self);guide.setup(demo)
func active()->bool:return not phase.is_empty()
func blocked()->bool:
	return demo.camera_rig.strolling or demo.gallery.busy or demo.gallery.panel.visible or demo.guide.visible() or demo.ledger.visible() or demo.journal.panel.visible or demo.strum_hold.active()
func set_mode(value:int)->void:
	demo._cancel_draft();mode=value;demo.road_straight=mode==1
	var options:OptionButton=demo.road_panel.find_child("RoadMode",true,false);options.select(mode)
	demo.tactile_dock.refresh()
func reset()->void:
	phase="";pressed=false;dragged=false;raw.clear();locks.clear();control=Vector2.INF;signature.clear();valid.clear();reference.clear();ruler.clear();guide.clear()
	closure.clear();closure_audio.mark="";show_mode()
func show_mode()->void:
	var options:OptionButton=demo.road_panel.find_child("RoadMode",true,false)
	options.select(effective if active() else mode);demo.tactile_dock._sync()
func input(event:InputEvent)->bool:
	if active() and (demo.tool!=2 or blocked()):demo._cancel_draft()
	if demo.tool!=2 or blocked():return false
	if event is InputEventWithModifiers:alt=event.alt_pressed
	if event is InputEventKey and event.pressed and not event.echo:
		if event.ctrl_pressed or event.meta_pressed:return false
		var focus:Control=demo.get_viewport().gui_get_focus_owner()
		if focus is LineEdit or focus is TextEdit:return false
		if event.keycode in [KEY_BRACKETLEFT,KEY_BRACKETRIGHT] and demo.tactile_dock.road_palette!=null and demo.tactile_dock.road_palette.opened.is_empty():
			demo.tactile_dock.road_palette.step(1 if event.keycode==KEY_BRACKETRIGHT else -1);return true
		if event.keycode in [KEY_1,KEY_2,KEY_3]:set_mode(event.keycode-KEY_1);return true
		if event.keycode==KEY_R:set_mode(0 if mode==1 else 1);return true
		if event.keycode==KEY_TAB and active() and not pressed:
			effective=1 if effective==2 else 2;phase="end" if effective==1 or control.is_finite() else "control";signature.clear();show_mode();update(true);return true
		if event.keycode==KEY_ESCAPE and active():demo._cancel_draft();return true
	if event is InputEventMouseButton and event.button_index==MOUSE_BUTTON_LEFT and not event.pressed and active():
		demo.pointer=event.position;release();return true
	return false
func unhandled(event:InputEvent)->bool:
	if demo.tool!=2 or blocked():return false
	if event is InputEventMouseMotion:
		if active():demo.pointer=event.position;alt=event.alt_pressed;update();return true
		return false
	if not event is InputEventMouseButton or not event.pressed:return false
	demo.pointer=event.position;alt=event.alt_pressed
	if event.button_index==MOUSE_BUTTON_RIGHT and active():
		if pressed and dragged and effective==1:lock()
		else:demo._cancel_draft()
		return true
	if event.button_index!=MOUSE_BUTTON_LEFT:return false
	if event.shift_pressed or demo.road_roundabout:
		if active():demo._cancel_draft()
		return false
	var point:Vector2=demo._road_pointer_at()
	if not active():
		reference=Ruler.road_reference(demo.state,point);reference_revision=demo.state.revision
		if mode>0 and not alt and not reference.is_empty():point=reference.at
		start=point;tail=point;control=Vector2.INF;raw.assign([point]);locks.assign([point]);pressed=true;dragged=false
		effective=1 if mode==0 and alt else mode;phase="control" if effective==2 else "pressed";demo.road_drawing=true;demo.road_draft_straight=effective==1;demo.road_locked_segments=0
		update(true)
	elif phase=="control":update(true);control=ruler.get("end",point);phase="end";signature.clear();update(true)
	elif phase=="end":update(true);finish()
	return true
func release()->void:
	update(true);pressed=false
	if effective!=2 and dragged:finish();return
	if phase=="pressed":
		if not alt and not reference.is_empty():start=reference.at;locks.assign([start])
		effective=1;phase="end";signature.clear();show_mode();update(true)
func update(_force:bool=false)->void:
	if not active():return
	if blocked() or demo.tool!=2:demo._cancel_draft();return
	var point:Vector2=demo._road_pointer_at();tail=point
	if pressed and point.distance_to(start)>=.8:dragged=true
	var key:=[point,phase,effective,alt,demo.state.revision,demo.zoom,demo._selected_road_width(),demo.road_style]
	if signature==key and not _force:return
	signature=key
	if reference_revision!=demo.state.revision:reference=Ruler.road_reference(demo.state,start);reference_revision=demo.state.revision
	var precise:=effective==2 or effective==1 and not pressed and not dragged
	ruler=Ruler.plan(start,control if effective==2 else Vector2.INF,point,reference,not alt) if precise else {}
	var path:Array[Vector2]=[]
	if effective==0:
		if raw[-1].distance_to(point)>=.15:raw.append(point)
		var points:Array[Vector2]=raw.duplicate()
		if points[-1]!=point:points.append(point)
		path=Geometry.freehand(points);demo.road_points=points
	elif effective==1:
		path=locks.duplicate();path.append(point)
		if not pressed and not dragged:path=Geometry.straight(start,point)
		path=Geometry.Stroke.polyline_points(path);demo.road_points=locks.duplicate();demo.road_points.append(point)
	else:
		if control.is_finite():path=Geometry.quadratic(start,control,point)
		else:path.assign([start,point])
		demo.road_points=path.duplicate()
	if precise:path.assign(ruler.points)
	closure={}
	if not alt and (effective!=2 or control.is_finite()):
		var closed:=Closure.resolve(demo.state,path,point,control,effective if precise else 0)
		closure=closed.closure
		if not closure.is_empty():
			path.assign(closed.points);ruler=Ruler.plan(start,closed.control if effective==2 else Vector2.INF,path[-1],reference,false)
			ruler.closure=closure;ruler.label=str(closed.label)+("\n"+str(ruler.label) if not str(ruler.label).is_empty() else "")
			if closed.has("shape"):
				var intersection:="θ %.1f°\n"%ruler.intersection.degrees if ruler.has("intersection") else ""
				for field:String in ["circle","radius","center","points","turn"]:
					if closed.shape.has(field):ruler[field]=closed.shape[field]
				ruler.label=str(closed.label)+"\n"+intersection+str(closed.shape.label)
	demo.road_draft_straight=effective==1
	valid=demo.state.preview_road(path,demo.road_style,"none" if alt or precise else "soft",demo._selected_road_width(),preload("res://scripts/world/city_creation_road_decoration.gd").selected(demo))
	if not precise and str(valid.upgrade_road_id).is_empty() and valid.points.size()>1 and (effective==2 and control.is_finite() or effective==1 and not dragged):
		var resolved:Array[Vector2]=valid.points
		# Endpoint assistance must not kink a supposedly precise line or move
		# only the final sample of a quadratic curve.
		path=Geometry.straight(resolved[0],resolved[-1]) if effective==1 else Geometry.quadratic(resolved[0],control,resolved[-1])
		valid=demo.state.preview_road(path,demo.road_style,"none",demo._selected_road_width(),preload("res://scripts/world/city_creation_road_decoration.gd").selected(demo))
	demo.road_preview.assign(valid.points)
	demo.town.preview_road(demo.road_preview,bool(valid.ok),float(valid.width),bool(valid.get("bridge",false)),str(valid.style))
	demo.chemistry_brush.road(demo.road_preview,float(valid.width),str(valid.style),bool(valid.ok))
	if effective==1:demo.town.preview_road_measure(demo.road_preview,demo.road_locked_segments)
	var anchors:Array[Vector2]=[demo.road_preview[0] if not demo.road_preview.is_empty() else start]
	if effective==1 and dragged:anchors=locks.duplicate()
	if effective==2 and control.is_finite():anchors.append(ruler.get("control",control))
	var tip:Vector2=demo.road_preview[-1] if not demo.road_preview.is_empty() else point
	var text:=hint() if valid.ok or path.size()<2 else str(valid.message)
	if valid.get("upgraded",false) or valid.get("no_op",false):text=str(valid.message)
	guide.compass=ruler
	if valid.ok:closure_audio.tick(ruler,tip)
	guide.draw(anchors,tip,text)
	demo.road_status.text=hint()
func hint()->String:
	if not active():return "1 自由画 · 2 直路 · 3 曲路 · 拖画或点击定点"
	if effective==0:return "拖动画路 · 松开铺好 · Esc 取消"
	if phase=="control":return "点控制点定切线 · Tab 直路 · 右键取消"
	if pressed and dragged and effective==1:return "松开铺好 · 空格/右键锁段 · Esc 取消"
	return "点终点铺好 · Tab %s · 右键取消"%("直路" if effective==2 else "曲路")
func lock()->void:
	if not active() or effective!=1 or not pressed:return
	update(true)
	if demo.road_preview.size()<2 or demo.road_preview[-1].distance_to(locks[-1])<.2:return
	locks.assign(demo.road_preview);demo.road_locked_segments=locks.size()-1
	demo.road_points=locks.duplicate();demo.road_points.append(locks[-1])
	guide.draw(locks,locks[-1],hint())
func finish()->void:
	if not active():return
	update(true)
	if demo.road_preview.size()<2:demo._cancel_draft();return
	var points:Array[Vector2]=demo.road_preview.duplicate();var result:Dictionary=demo.state.add_road(points,demo.road_style,"none",demo._selected_road_width(),preload("res://scripts/world/city_creation_road_decoration.gd").selected(demo))
	if result.ok and not result.get("no_op",false) and not closure.is_empty():closure_audio.close(points[-1])
	demo._cancel_draft()
	if result.ok:demo.completed["road"]=true
	if result.get("no_op",false):demo._message(result.message)
	else:demo._after_edit(result,"road")
func _process(_delta:float)->void:
	if active() and (demo.tool!=2 or blocked()):demo._cancel_draft()
