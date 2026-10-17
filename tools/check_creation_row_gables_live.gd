extends SceneTree
## Frozen authored city before/after, then real editing of a shared row roof.
const Scene=preload("res://scenes/city_creation.tscn")
const OUTPUT="res://验证记录/长屋山墙_2026-10-15"
var demo: Node3D
var label:="after"
var checks:=0
var failures: Array[String]=[]
var views: Array[Dictionary]=[]
var row_ids: Array[String]=[]
class Sampler extends Node:
	var active:=false
	var times: Array[float]=[]
	var last:=Time.get_ticks_usec()
	func _process(_delta: float) -> void:
		var now:=Time.get_ticks_usec()
		if active: times.append((now-last)/1000.0)
		last=now
var sampler: Sampler
func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,name_value: String) -> void:
	checks+=1
	if not ok:
		failures.append(name_value)
		push_error(name_value)
func _capture(name_value: String,focus: Vector3,zoom: float,yaw: float=1.0) -> void:
	demo.focus=focus
	demo.zoom=zoom
	demo.yaw=yaw
	demo.pitch=0.63
	demo._update_camera()
	for frame in range(60): await process_frame
	sampler.times.clear()
	sampler.active=true
	for frame in range(180): await process_frame
	sampler.active=false
	sampler.times.sort()
	views.append({"view":name_value,"wall_p95_ms":sampler.times[int(sampler.times.size()*0.95)],"wall_max_ms":sampler.times[-1],"draw_calls":Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME),"triangles":Performance.get_monitor(Performance.RENDER_TOTAL_PRIMITIVES_IN_FRAME)})
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+"/"+name_value+".png")
func _wait_edit() -> void:
	var until:=Time.get_ticks_msec()+15000
	while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.edit_pending(),"latest roof and collision publish together")
func _click(point: Vector3) -> void:
	var screen: Vector2=demo.camera.unproject_position(point)
	var motion:=InputEventMouseMotion.new()
	motion.position=screen
	motion.global_position=screen
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event:=InputEventMouseButton.new()
		event.position=screen
		event.global_position=screen
		event.button_index=MOUSE_BUTTON_LEFT
		event.pressed=pressed
		root.push_input(event)
		await process_frame
	await _wait_edit()
func _undo() -> void:
	var event:=InputEventKey.new()
	event.keycode=KEY_Z
	event.ctrl_pressed=true
	event.pressed=true
	root.push_input(event)
	await process_frame
	await _wait_edit()
func _gable_count(id: String) -> int:
	var count:=0
	for patch: Dictionary in demo.town.building_context.roof_patches(id):
		if patch.surface=="gable": count+=1
	return count
func _glow_pixel(window: Dictionary) -> Color:
	var side: Vector2i=window.side
	var at: Vector3=window.at+Vector3(side.y,0,-side.x)*float(window.radius)*0.48+Vector3.UP*float(window.radius)*0.48
	var point: Vector2=demo.camera.unproject_position(at)
	var screen:=root.get_texture().get_image()
	var result:=Color(0,0,0,0)
	for x in range(-1,2):
		for y in range(-1,2): result+=screen.get_pixel(roundi(point.x)+x,roundi(point.y)+y)
	return result/9.0
func _run() -> void:
	if not OS.get_cmdline_user_args().is_empty(): label=OS.get_cmdline_user_args()[0]
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT+"/"+label))
	root.size=Vector2i(1440,900)
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.ui_layer.visible=false
	sampler=Sampler.new()
	root.add_child(sampler)
	if label=="before":
		# Godot types a preloaded script instance by its exact script identity.
		# The frozen renderer redirects only its Context preload to the old file.
		demo.remove_child(demo.town)
		demo.town.queue_free()
		demo.town=load("res://备份/长屋山墙前_20261015/frozen_renderer.gd").new()
		demo.add_child(demo.town)
		demo.town.setup(demo.state)
	demo.state.houses.clear()
	demo.state.roads.clear()
	demo.state.plants.clear()
	var positions: Array[Vector2]=[Vector2(-13,-9),Vector2(-11.2,-9),Vector2(-9.4,-9),Vector2(-7.6,-9),Vector2(-13,-3),Vector2(-13,-1.2),Vector2(-13,0.6),Vector2(-6,6),Vector2(-4.2,6),Vector2(-2.4,6),Vector2(-6,7.8),Vector2(-2.4,7.8),Vector2(-6,9.6),Vector2(-2.4,9.6)]
	for at: Vector2 in positions:
		var added: Dictionary=demo.state.add_house(at)
		_check(added.ok,"actual household at "+str(at))
		if row_ids.size()<4: row_ids.append(str(added.get("house_id","")))
	demo.life._sync()
	demo.town.rebuild()
	demo.music.update_city(demo.state)
	var original: Dictionary=demo.state.snapshot()
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty(),"seven synchronized PCM loops ready")
	await _capture("01_row",Vector3(-10.3,1,-9),12.0)
	await _capture("02_rotated_row",Vector3(-13,1,-1.2),10.0,2.2)
	await _capture("03_courtyard",Vector3(-4.2,0.8,7.8),12.0)
	demo._toggle_light()
	await _capture("04_evening",Vector3(-10.3,1,-9),12.0)
	demo._toggle_light()
	_check(demo.state.snapshot()==original,"observation never mutates authored city")
	var pixel_report: Dictionary={}
	if label!="before":
		var first:=row_ids[0]
		var last:=row_ids[-1]
		_check(_gable_count(first)==1 and _gable_count(last)==1,"only the two true end households own gable caps")
		_check(_gable_count(row_ids[1])==0 and _gable_count(row_ids[2])==0,"interior shared walls never receive attic windows")
		var roof_before: Array=demo.town.building_context.roof_patches(first).duplicate(true)
		var music_ids:=[]
		for player: AudioStreamPlayer in demo.music._players.values(): music_ids.append([player.get_instance_id(),player.stream.get_instance_id()])
		demo.select_tool(0)
		demo.focus=Vector3(-13,1,-9)
		demo.zoom=9
		demo.yaw=1.0
		demo._update_camera()
		await process_frame
		await _click(Vector3(-13,0.9,-8.1))
		_check(demo.town._house_record(first).cells.size()==2,"actual exposed wall click grows the shared row into an L")
		_check(_gable_count(first)==0 and _gable_count(last)==0,"turning the row restores the true complex union roof")
		await _undo()
		_check(demo.town.building_context.roof_patches(first)==roof_before,"real Ctrl+Z restores exact row profile and cap ownership")
		await _click(Vector3(-13,1.7,-9))
		_check(demo.town._house_record(first).cells.size()==2,"actual roof click creates a real upper room")
		await _undo()
		_check(demo.town.building_context.roof_patches(first)==roof_before,"undoing the step-up restores the exact continuous ridge")
		var index:=0
		for player: AudioStreamPlayer in demo.music._players.values():
			_check([player.get_instance_id(),player.stream.get_instance_id()]==music_ids[index],"building edits retain actual PCM/player identity")
			index+=1
		# Pixel evidence comes from the production per-house response shader,
		# with the exact same view and geometry held still between mute/light.
		demo.set_process(false)
		var window: Dictionary=demo.town.house_roots[last].get_meta("attic_windows")[0]
		demo.focus=Vector3(-7.6,1.5,-9)
		demo.zoom=6
		demo.yaw=1.5
		demo.pitch=0.45
		demo._update_camera()
		var rig: Dictionary=demo.town.resonance.rigs[last]
		var rig_id: int=rig.mesh.get_instance_id()
		demo.town.update_city_resonance_visuals({"audible":false})
		await process_frame
		await process_frame
		var unlit:=_glow_pixel(window)
		demo.town.update_city_resonance_visuals({"audible":true,"lead_id":last,"clock_sec":1.0,"beat_pulse":1.0})
		await process_frame
		await process_frame
		var lit:=_glow_pixel(window)
		pixel_report={"unlit":[unlit.r,unlit.g,unlit.b],"lit":[lit.r,lit.g,lit.b]}
		_check(lit.r>unlit.r+0.08,"actual attic pane pixels warm with their household response")
		_check(rig.mesh.get_instance_id()==rig_id,"attic response adds no nodes or rebuilds")
		if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/after/05_attic_response.png")
		demo.town.update_city_resonance_visuals({"audible":false})
		_check(not bool(demo.town.resonance.last_audible),"muting clears attic and ordinary window response together")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"label":label,"views":views,"snapshot_sha256":JSON.stringify(original,"",true,true).sha256_text(),"pixel":pixel_report}
	var file:=FileAccess.open(OUTPUT+"/"+label+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(result,"\t",true,true))
	print("ROW_GABLES_LIVE ",JSON.stringify(result))
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
