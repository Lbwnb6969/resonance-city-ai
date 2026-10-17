extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUTPUT="res://验证记录/连排接合_2026-10-15/live"
class FixtureInput extends Node:
	func _input(event: InputEvent) -> void:
		if event.device!=92: get_viewport().set_input_as_handled()
var demo: Node3D
var checks:=0
var failures: Array[String]=[]
var commit_ms:=0.0
func _initialize() -> void: _run.call_deferred()
func _check(value: bool, label: String) -> void:
	checks+=1
	if not value: failures.append(label)
func _mouse(at: Vector3, pressed: bool) -> void:
	var event:=InputEventMouseButton.new()
	event.device=92
	event.position=demo.camera.unproject_position(at)
	event.global_position=event.position
	event.button_index=MOUSE_BUTTON_LEFT
	event.pressed=pressed
	root.push_input(event)
func _key(code: int, ctrl: bool=false, pressed: bool=true) -> void:
	var event:=InputEventKey.new()
	event.device=92
	event.keycode=code
	event.ctrl_pressed=ctrl
	event.pressed=pressed
	if code==KEY_ALT: Input.parse_input_event(event)
	else: root.push_input(event)
	await process_frame
func _capture(name_value: String) -> void:
	await process_frame
	await process_frame
	root.get_texture().get_image().save_png(OUTPUT+"/"+name_value+".png")
func _run() -> void:
	set_auto_accept_quit(false)
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	root.add_child(FixtureInput.new())
	demo.life.set_process(false)
	demo.state.houses.clear()
	demo.state.roads.clear()
	demo.state.plants.clear()
	_check(demo.state.add_house(Vector2(-12,-5)).ok,"authored real independent home")
	demo.life._sync()
	demo.town.rebuild()
	demo.music.update_city(demo.state)
	demo.focus=Vector3(-10.5,0.7,-5)
	demo.zoom=10.0
	demo._update_camera()
	demo.select_tool(0)
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	var identities: Dictionary={}
	for stem: String in demo.music.STEMS: identities[stem]=[demo.music._players[stem].get_instance_id(),demo.music._players[stem].stream.get_instance_id()]
	var history: int=demo.state._undo.size()
	var original_id: String=demo.state.houses[0].id
	var at:=Vector3(-10.03,0,-4.96)
	_mouse(at,true)
	await process_frame
	_check(demo.house_drawing and demo.house_stroke_origin.distance_to(Vector2(-10.2,-5))<0.0001,"real press drafts at snapped neighboring origin")
	_check(demo.state.houses.size()==1,"hover and press leave authoritative city untouched")
	await _capture("01_snapped_preview")
	var started:=Time.get_ticks_usec()
	_mouse(at,false)
	commit_ms=float(Time.get_ticks_usec()-started)/1000.0
	await process_frame
	await physics_frame
	_check(demo.state.houses.size()==2 and demo.state.houses[0].id==original_id,"real release creates separate household while preserving original")
	var added: Dictionary=demo.state.houses[-1].duplicate(true)
	_check(Vector2(added.origin[0],added.origin[1]).distance_to(Vector2(-10.2,-5))<0.0001,"committed origin equals actual snapped preview")
	_check(demo.state._undo.size()==history+1,"one placement creates exactly one edit transaction")
	_check(demo.town.house_roots[original_id].get_meta("joined_roof",false) and demo.town.house_roots[added.id].get_meta("joined_roof",false),"both real households publish joined roof")
	await _capture("02_joined_households")
	await _key(KEY_Z,true)
	_check(demo.state.houses.size()==1 and not demo.town.house_roots[original_id].get_meta("joined_roof",false),"actual CtrlZ separates the surviving roof")
	await _key(KEY_Y,true)
	_check(demo.state.houses.size()==2 and demo.state.houses[-1]==added,"actual CtrlY restores same house/cell IDs")
	var count: int=demo.state.houses.size()
	_mouse(Vector3(-12,0,-3.05),true)
	await process_frame
	await _key(KEY_ESCAPE)
	_mouse(Vector3(-12,0,-3.05),false)
	_check(demo.state.houses.size()==count and not demo.house_drawing,"real Escape cancels another snapped home without a transaction")
	await _key(KEY_ALT,false,true)
	_check(demo._snap_house_origin(Vector2(-12,-3.05))==Vector2(-12,-3.05),"held Alt preserves free placement")
	await _key(KEY_ALT,false,false)
	_check(demo._snap_house_origin(Vector2(-12,-3.05)).distance_to(Vector2(-12,-3.2))<0.0001,"releasing Alt restores neighbor alignment")
	for stem: String in identities:
		_check([demo.music._players[stem].get_instance_id(),demo.music._players[stem].stream.get_instance_id()]==identities[stem] and demo.music._players[stem].playing,"fixed playing PCM identity "+stem)
	var report: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"commit_ms":commit_ms,"stem_count":identities.size(),"new_house":added,"render":demo.town.rebuild_stats}
	var file:=FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("JOINED_LIVE_RESULT ",JSON.stringify(report))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
