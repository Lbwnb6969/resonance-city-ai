extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUTPUT := "res://验证记录/房屋连续笔画_2026-10-14"
var demo: Node3D
var failures: Array[String]=[]
var checks:=0

func _initialize() -> void:
	_run.call_deferred()

func _check(ok:bool,label:String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)

func _motion(at:Vector2) -> void:
	var event:=InputEventMouseMotion.new()
	event.position=at
	event.global_position=at
	root.push_input(event)
	await process_frame
	await process_frame

func _button(at:Vector2,pressed:bool) -> void:
	var event:=InputEventMouseButton.new()
	event.button_index=MOUSE_BUTTON_LEFT
	event.position=at
	event.global_position=at
	event.pressed=pressed
	root.push_input(event)
	await physics_frame
	await process_frame

func _start(at:Vector3) -> void:
	var screen:Vector2=demo.camera.unproject_position(at)
	await _motion(screen)
	await _button(screen,true)

func _move(at:Vector3) -> void:
	await _motion(demo.camera.unproject_position(at))

func _end(at:Vector3) -> void:
	await _button(demo.camera.unproject_position(at),false)

func _key(code:int,ctrl:bool=false,shift:bool=false) -> void:
	for pressed in [true,false]:
		var event:=InputEventKey.new()
		event.keycode=code
		event.pressed=pressed
		event.ctrl_pressed=ctrl
		event.shift_pressed=shift
		root.push_input(event)
		await process_frame
	await physics_frame

func _capture(label:String) -> void:
	await process_frame
	await process_frame
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")

func _run() -> void:
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	await physics_frame
	await process_frame
	demo.life.set_process(false)
	# Free the room occupied by the original venue, keeping its existing road.
	# The wall gesture below can then form a legal row; a longer gesture still
	# attempts to grow into the real river beyond it.
	demo._after_edit(demo.state.remove_house("h4"),"erase")
	demo.edit_samples.clear()
	demo.home_camera()
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.music.audio_report.is_empty(),"shared audible music is ready")
	var baseline:Dictionary=demo.state.snapshot()
	var revision:int=demo.state.revision
	var unrelated:int=demo.town.house_roots.h1.get_instance_id()
	var road:int=demo.town.road_roots.r1.get_instance_id()
	var resident:int=demo.life.residents[0].node.get_instance_id()
	var bank_ids:Array[int]=[]
	for player:AudioStreamPlayer in demo.music._players.values(): bank_ids.append(player.get_instance_id())
	var clock:AudioStreamPlayer=demo.music._players.foundation
	var bank_position:float=clock.get_playback_position()
	var clock_started:=Time.get_ticks_usec()
	var wall:=Vector3(-5.299,0.9,0)
	var end:=wall+Vector3(3.6,0,0)
	await _start(wall)
	_check(demo.house_drawing and demo.house_stroke_host=="h3","actual wall down starts a host-locked draft")
	_check(demo.state.snapshot()==baseline and demo.state.revision==revision,"mouse down remains pure, including IDs and history")
	await _move(end)
	_check(demo.house_stroke.cells.size()==3 and demo.house_stroke_result.added_count==3,"large real pointer jump fills all three neighboring wall slots")
	_check(demo.town.preview.get_meta("stroke_cells",[]).size()==3 and demo.town.preview.get_meta("stroke_valid",false),"all pending rooms have the same legal preview")
	await _capture("row_preview")
	for frame in range(24): await process_frame
	_check(demo.state.snapshot()==baseline and demo.house_stroke.cells.size()==3,"holding still creates no building and no repeated cell")
	await _key(KEY_ESCAPE)
	await _end(end)
	_check(demo.state.snapshot()==baseline and not demo.house_drawing,"Esc then release discards the entire gesture without issued IDs")
	await _start(wall)
	await _move(end)
	await _end(end)
	var row:Dictionary=demo.state.snapshot()
	_check(row.houses[2].cells.size()==5 and demo.state.revision==revision+1,"release commits three new rooms as exactly one edit")
	_check(demo.town.house_roots.h1.get_instance_id()==unrelated and demo.town.road_roots.r1.get_instance_id()==road and demo.life.residents[0].node.get_instance_id()==resident,"row commit retains unrelated meshes and existing neighbor identity")
	await _move(Vector3(-16,0,13))
	await _capture("row_built")
	await _key(KEY_Z,true)
	_check(demo.state.houses==baseline.houses,"one Ctrl+Z restores the complete pre-row house")
	await _key(KEY_Z,true,true)
	_check(demo.state.houses==row.houses,"one redo restores the precise row IDs and sources")
	# A roof gesture stays at the original upper layer, covering support below.
	demo.focus=Vector3(-5,0,0)
	demo.yaw=0
	demo.pitch=0.95
	demo.zoom=24
	demo._update_camera()
	await _start(Vector3(-4.4,1.701,0))
	await _move(Vector3(-0.8,1.701,0))
	_check(demo.house_stroke.cells.size()==3 and demo.house_stroke.cells.all(func(cell:Dictionary)->bool:return cell.level==1),"roof drag stays on the original upper layer")
	await _capture("upper_preview")
	await _end(Vector3(-0.8,1.701,0))
	_check(demo.state.houses[2].cells.size()==8,"upper stroke builds all supported rooms")
	await _key(KEY_Z,true)
	_check(demo.state.houses==row.houses,"upper stroke undoes as one action")
	await _key(KEY_2)
	await _start(Vector3(-8,1.701,0))
	await _move(Vector3(-6.2,1.701,0))
	_check(demo.house_stroke_result.ok and demo.house_stroke_result.added_count==2 and demo.house_stroke.cells.all(func(cell:Dictionary)->bool:return cell.kind=="terrace"),"terrace stroke keeps its kind across both supported roof slots")
	await _end(Vector3(-6.2,1.701,0))
	_check(demo.state.houses[2].cells.size()==7,"release builds the entire two-slot roof garden")
	await _capture("terrace_built")
	await _key(KEY_Z,true)
	await _key(KEY_1)
	await _key(KEY_Z,true)
	_check(demo.state.houses==baseline.houses,"row can still be undone after upper/terrace experiments")
	var unchanged:Dictionary=demo.state.snapshot()
	# Later water collision invalidates the entire pending row, not just its tip.
	demo.home_camera()
	await _start(wall)
	await _move(wall+Vector3(7.2,0,0))
	_check(not demo.house_stroke_result.ok and not demo.town.preview.get_meta("stroke_valid",true) and "水" in demo.house_stroke_result.message,"real river conflict marks the full pending stroke invalid")
	_check(demo.town.preview.get_meta("stroke_cells",[]).size()==5,"invalid preview includes every attempted room")
	await _capture("water_conflict")
	await _end(wall+Vector3(7.2,0,0))
	_check(demo.state.snapshot()==unchanged,"failed late cell writes no earlier room, ID or history")
	# UI release and tool change cannot paint through overlay controls.
	await _start(wall)
	await _move(end)
	var control:Vector2=demo.tool_buttons[1].get_global_rect().get_center()
	await _motion(control)
	await _button(control,false)
	_check(demo.state.snapshot()==unchanged and not demo.house_drawing,"release on UI discards the draft without painting behind toolbar")
	await _start(wall)
	await _move(end)
	await _key(KEY_2)
	await _end(end)
	_check(demo.state.snapshot()==unchanged and not demo.house_drawing,"tool switch and release discard the room stroke")
	await _key(KEY_1)
	# Multiple pointer events between rendered frames must retain their turn.
	await _start(wall)
	for point:Vector3 in [wall+Vector3(1.8,0,0),wall+Vector3(1.8,0,-1.8)]:
		var event:=InputEventMouseMotion.new()
		event.position=demo.camera.unproject_position(point)
		event.global_position=event.position
		root.push_input(event)
	await process_frame
	_check(demo.house_stroke.cells.any(func(cell:Dictionary)->bool:return cell.x==3 and cell.z==0) and demo.house_stroke.cells.any(func(cell:Dictionary)->bool:return cell.x==3 and cell.z==-1),"multiple real events before a frame retain the intermediate turn")
	await _key(KEY_ESCAPE)
	await _end(wall)
	# One L-shaped standalone house is also one transaction and one fresh ID.
	demo.focus=Vector3(-10,0,-7)
	demo.zoom=32
	demo._update_camera()
	var new_start:=Vector3(-15,0,-10)
	await _start(new_start)
	await _move(new_start+Vector3(1.8,0,0))
	await _move(new_start+Vector3(1.8,0,-1.8))
	_check(demo.house_stroke_host.is_empty() and demo.house_stroke_result.ok and demo.house_stroke_result.added_count==3,"free-ground drag previews one three-room L-shaped house")
	_check(demo.state.houses.size()==baseline.houses.size(),"standalone draft creates no partial first house")
	await _capture("new_house_preview")
	await _end(new_start+Vector3(1.8,0,-1.8))
	var new_house:Dictionary=demo.state.houses[-1].duplicate(true)
	_check(demo.state.houses.size()==baseline.houses.size()+1 and new_house.id=="h7" and new_house.cells.size()==3,"L-shaped standalone gesture creates one house with three stable cells")
	_check(demo.life.residents.size()==5,"standalone construction creates its own actual home neighbor")
	await _motion(demo.tool_buttons[0].get_global_rect().get_center())
	await _capture("new_house_built")
	await _key(KEY_Z,true)
	_check(demo.state.houses.size()==baseline.houses.size(),"one undo removes the entire new L-shaped house")
	await _key(KEY_Z,true,true)
	_check(demo.state.houses[-1]==new_house,"one redo restores full new-house identity and topology")
	demo._capture_journeys()
	var save:="user://house_stroke_review_%d.json" % Time.get_ticks_usec()
	_check(demo.state.save_city(save).ok,"independent stroke city and actual journeys save")
	var loaded:=State.new()
	_check(loaded.load_city(save).ok and loaded.houses==demo.state.houses,"stroke geometry round trips with exact names, IDs and sources")
	var bank_after:Array[int]=[]
	for player:AudioStreamPlayer in demo.music._players.values(): bank_after.append(player.get_instance_id())
	_check(bank_ids==bank_after and demo.music._players.values().all(func(player:AudioStreamPlayer)->bool:return player.playing),"drafts and commits retain all shared music players without restarting bank")
	var elapsed:=float(Time.get_ticks_usec()-clock_started)/1000000.0
	var clock_error:=absf(wrapf(clock.get_playback_position()-bank_position-elapsed,-12.0,12.0))
	_check(clock_error<0.12,"real shared PCM playback position advances continuously across all construction gestures")
	demo.home_camera()
	await _capture("final_city")
	demo.life.set_process(true)
	demo.frame_samples.clear()
	for frame in range(540): await process_frame
	var performance:Dictionary=demo.diagnostics()
	if DisplayServer.get_name()!="headless": _check(float(performance.frame_p95_ms)<16.667,"full audible post-stroke city stays inside 60 FPS frame budget")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"actual_input":true,"display":DisplayServer.get_name(),"save":save,"clock_error_seconds":clock_error,"performance":performance}
	var file:=FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("CREATION_HOUSE_STROKE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"display":report.display,"p95_ms":performance.frame_p95_ms,"edits_ms":performance.edit_rebuild_ms}))
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
