extends RefCounted
## A momentary world-play override. The selected tool and all its options stay
## untouched, so releasing the last held control resumes the original brush.
var held:Dictionary={}
var city_id:=0

func active()->bool:return not held.is_empty()
func cancel()->void:held.clear();city_id=0

func blocked(demo)->bool:
	if demo._edit_pending or demo.camera_rig.strolling or demo.orbiting or demo.panning:return true
	if demo.house_drawing or demo.road_drawing or demo.vegetation_drawing or demo.water_drawing or demo.district_drawing or demo.district_link_drawing:return true
	if demo.terrain_brush!=null and demo.terrain_brush.drawing:return true
	if demo.conductor_gesture!=null and not demo.conductor_gesture.venue.is_empty():return true
	if demo.signatures!=null and not demo.signatures.placing.is_empty():return true
	if demo.guide!=null and demo.guide.visible():return true
	if demo.ledger!=null and demo.ledger.visible():return true
	if demo.journal!=null and demo.journal.panel.visible:return true
	if demo.gallery!=null and (demo.gallery.busy or demo.gallery.panel.visible or not demo.gallery.preview_id.is_empty()):return true
	var focus:Control=demo.get_viewport().gui_get_focus_owner()
	return focus is LineEdit or focus is TextEdit

func update(demo)->void:
	if active() and (city_id!=demo.state.get_instance_id() or blocked(demo)):cancel()

func handle_input(demo,event:InputEvent)->bool:
	if active() and event is InputEventKey and event.pressed and event.keycode==KEY_ESCAPE:
		cancel();return true
	var control:=""
	if event is InputEventKey and event.keycode==KEY_P:control="p"
	elif event is InputEventMouseButton and event.button_index in [MOUSE_BUTTON_XBUTTON1,MOUSE_BUTTON_XBUTTON2]:control=str(event.button_index)
	if control.is_empty():return false
	# Releases must reach us even after a modal opens or the listener moves.
	if not event.pressed:
		var owned:=held.has(control);held.erase(control)
		if held.is_empty():city_id=0
		return owned
	if event is InputEventKey and event.echo:return held.has(control)
	if blocked(demo) or event.ctrl_pressed or event.alt_pressed or event.meta_pressed:return false
	if event is InputEventMouseButton and demo.get_viewport().gui_get_hovered_control()!=null:return false
	if held.is_empty():
		city_id=demo.state.get_instance_id()
		demo._last_strummed_house_id="";demo.world_toys.last_key=""
		demo.town.clear_preview();demo.preview_key="";demo.candidate.clear()
	held[control]=true
	return true
