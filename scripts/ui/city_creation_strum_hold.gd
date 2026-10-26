extends RefCounted
## A momentary world-play override. The selected tool and all its options stay
## untouched, so releasing the last held control resumes the original brush.
var held:Dictionary={}
var city_id:=0
var sequence:=preload("res://scripts/audio/city_creation_strum_sequence.gd").new()

func active()->bool:return not held.is_empty()
func cancel()->void:held.clear();city_id=0;sequence.reset()

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
	# Embedded color wheels receive their own key-up events. Cancel when they
	# open rather than waiting for a release that cannot reach the world.
	for popup:Window in demo.get_viewport().get_embedded_subwindows():
		if popup.visible:return true
	var focus:Control=demo.get_viewport().gui_get_focus_owner()
	return focus is LineEdit or focus is TextEdit

func update(demo)->void:
	if active() and (city_id!=demo.state.get_instance_id() or blocked(demo)):cancel()

func hover(demo)->void:
	if demo.has_meta("solo_spotlight") and demo.get_meta("solo_spotlight").active():return
	if blocked(demo) or demo.get_viewport().gui_get_hovered_control()!=null:
		demo._last_strummed_house_id="";return
	if not active() and demo.tool!=4:demo._last_strummed_house_id="";return
	var hit:Dictionary=demo._ray_hit(demo.pointer);var body:Object=hit.get("collider")
	var id:=str(body.get_meta("house_id","")) if body!=null else ""
	if not active():
		if not id.is_empty() and id!=demo._last_strummed_house_id:
			if int(demo.state.natural_clusters().get(id,{}).get("size",1))>=3 and demo._strum_house(id):demo._last_strummed_house_id=id
		elif id.is_empty():demo._last_strummed_house_id="";demo.world_toys.hover(demo,demo._ground_at(demo.pointer))
		return
	var found:Dictionary={"kind":"house","key":id,"at":Vector2.ZERO} if not id.is_empty() else demo.world_toys.target(demo,demo._ground_at(demo.pointer))
	if found.is_empty():sequence.previous="";return
	if demo.music.muted or demo.music.concert_active or demo.music._loading:return
	if found.kind=="house":
		var house:Dictionary=demo.town._house_record(id);found.at=Vector2(house.origin[0],house.origin[1])
	if demo.music.acoustic.point_weight(found.at)<=0.:return
	var rank:int=sequence.claim(str(found.key),demo.music._playback_clock())
	if rank<0:return
	var plan:={"house_id":id if found.kind=="house" else "world/"+str(found.key),"position":found.at,"source_id":found.key,"world_kind":found.kind,"stream_key":"held/"+str(rank),"strum_step":rank,"held_epoch":[demo.state.get_instance_id(),demo.state._wish_epoch]}
	demo.music.canon.clear();demo.music.attention.enqueue_pluck_arpeggio(plan,demo.music._playback_clock())

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
		if held.is_empty():city_id=0;sequence.reset()
		return owned
	if event is InputEventKey and event.echo:return held.has(control)
	if blocked(demo) or event.ctrl_pressed or event.alt_pressed or event.meta_pressed:return false
	if event is InputEventMouseButton and demo.get_viewport().gui_get_hovered_control()!=null:return false
	if held.is_empty():
		city_id=demo.state.get_instance_id()
		sequence.reset()
		demo._last_strummed_house_id="";demo.world_toys.last_key=""
		demo.town.clear_preview();demo.preview_key="";demo.candidate.clear()
	held[control]=true
	return true
