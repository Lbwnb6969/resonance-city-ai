extends SceneTree
## Full production scene: real long roads, repeated history and the live clock.
const Scene=preload("res://scenes/city_creation.tscn")
const SOURCE="res://tools/fixtures/long_road_baseline.json"
const OUTPUT="res://验证记录/分帧编辑_2026-10-15"
class FixtureInput extends Node:
	func _input(event: InputEvent) -> void:
		if event.device!=92: get_viewport().set_input_as_handled()
class FrameSampler extends Node:
	var enabled:=false
	var samples: Array[float]=[]
	var wall_samples: Array[float]=[]
	var previous_usec:=Time.get_ticks_usec()
	func _process(delta: float) -> void:
		var now:=Time.get_ticks_usec()
		if enabled:
			samples.append(delta*1000.0)
			wall_samples.append((now-previous_usec)/1000.0)
		previous_usec=now
var demo: Node3D
var sampler: FrameSampler
var failures: Array[String]=[]
var checks:=0
var records: Array[Dictionary]=[]
var label:="current"

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,text: String) -> void:
	checks+=1
	if not ok:
		failures.append(text)
		push_error(text)
func _pending() -> bool:
	return demo.has_method("edit_pending") and demo.edit_pending()
func _wait_ready() -> void:
	var until:=Time.get_ticks_msec()+20000
	while _pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not _pending(),"latest edit finishes within 20 seconds")
	await process_frame
	await process_frame
func _key(code: int) -> void:
	var event:=InputEventKey.new()
	event.device=92
	event.keycode=code
	event.ctrl_pressed=true
	event.pressed=true
	root.push_input(event)
func _capture(name_value: String) -> void:
	if DisplayServer.get_name()=="headless": return
	await process_frame
	await process_frame
	root.get_texture().get_image().save_png(OUTPUT+"/"+label+"_"+name_value+".png")

func _start_held_draft() -> void:
	var key:=InputEventKey.new()
	key.device=92
	key.pressed=true
	key.keycode=KEY_3
	root.push_input(key)
	var event:=InputEventMouseButton.new()
	event.device=92
	event.button_index=MOUSE_BUTTON_LEFT
	event.pressed=true
	event.position=demo.camera.unproject_position(Vector3(-14,0.12,6))
	event.global_position=event.position
	root.push_input(event)
	var motion:=InputEventMouseMotion.new()
	motion.device=92
	motion.position=demo.camera.unproject_position(Vector3(-16,0.12,5))
	motion.global_position=motion.position
	root.push_input(motion)
	demo._append_road_point()

func _run() -> void:
	var args:=OS.get_cmdline_user_args()
	if not args.is_empty(): label=str(args[0])
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	root.size=Vector2i(1440,900)
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	root.add_child(FixtureInput.new())
	sampler=FrameSampler.new()
	root.add_child(sampler)
	demo.life.set_process(false)
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	var original: Dictionary=JSON.parse_string(FileAccess.get_file_as_string(SOURCE))
	var base:=original.duplicate(true)
	base.roads=original.roads.slice(0,7).duplicate(true)
	base.next_road_id=8
	base.high_watermark.road=7
	base.journey_checkpoint={}
	for house: Dictionary in base.houses: house.auto_matinee=false
	var restored: Dictionary=demo.state.restore(base)
	_check(restored.ok,"real original prefix validates")
	demo._after_edit(restored,"history")
	await _wait_ready()
	var identities: Dictionary={}
	for key: String in demo.music.STEMS: identities[key]=[demo.music._players[key].get_instance_id(),demo.music._players[key].stream.get_instance_id()]
	for road: Dictionary in original.roads.slice(7):
		var points: Array[Vector2]=[]
		for point: Array in road.points: points.append(Vector2(float(point[0]),float(point[1])))
		sampler.samples.clear()
		sampler.wall_samples.clear()
		sampler.enabled=true
		var clock: float=demo.music._playback_clock()
		var started:=Time.get_ticks_usec()
		var result: Dictionary=demo.state.add_road(points)
		_check(result.ok,"real long road commits "+str(road.id))
		demo._after_edit(result,"road")
		var enqueue_ms: float=(Time.get_ticks_usec()-started)/1000.0
		var was_pending:=_pending()
		await _wait_ready()
		var latency_ms: float=(Time.get_ticks_usec()-started)/1000.0
		for frame in range(12): await process_frame
		sampler.enabled=false
		var samples:=sampler.samples.duplicate()
		samples.sort()
		var wall:=sampler.wall_samples.duplicate()
		wall.sort()
		var actual: Dictionary=demo.state.roads[-1]
		var exact: bool=actual.id==road.id and actual.points.size()==points.size()
		for index in range(mini(actual.points.size(),points.size())):
			exact=exact and Vector2(float(actual.points[index][0]),float(actual.points[index][1]))==points[index]
		_check(exact,"all authored f32 road points and identity unchanged "+str(road.id))
		_check(demo.music._playback_clock()>clock,"real PCM clock advances through the edit "+str(road.id))
		var item: Dictionary={"road_id":road.id,"points":points.size(),"queued":was_pending,"input_ms":enqueue_ms,"latency_ms":latency_ms,"frame_count":samples.size(),"frame_p95_ms":samples[int((samples.size()-1)*0.95)],"frame_max_ms":samples[-1],"wall_frame_p95_ms":wall[int((wall.size()-1)*0.95)],"wall_frame_max_ms":wall[-1],"graph_nodes":demo.life.graph.size(),"render":demo.town.rebuild_stats.duplicate(true)}
		if demo.has_method("edit_budget_report"): item.budget=demo.edit_budget_report()
		records.append(item)
		print("BUDGET_EDIT_STAGE ",JSON.stringify(item))
	await _capture("ten_original_roads")
	var all_roads: Array=demo.state.roads.duplicate(true)
	# Rapid real keyboard history must supersede stale work rather than install
	# it later. Each source transaction still keeps its original stable road ID.
	_key(KEY_Z)
	_key(KEY_Z)
	_key(KEY_Y)
	_key(KEY_Y)
	var held_during_publish:=_pending()
	if held_during_publish: _start_held_draft()
	await _wait_ready()
	if held_during_publish:
		_check(demo.road_drawing and demo.road_preview.size()>1 and demo.town.preview.get_child_count()>0,"publishing an older road preserves a newer actual held brush preview")
		var escape:=InputEventKey.new()
		escape.device=92
		escape.keycode=KEY_ESCAPE
		escape.pressed=true
		root.push_input(escape)
		_check(not demo.road_drawing and demo.state.roads.size()==10,"newer held preview can cancel after old road commits without another transaction")
	_check(demo.state.roads==all_roads,"rapid actual Ctrl-Z/Z/Y/Y restores every original road exactly")
	_check(demo.town.road_roots.size()==demo.state.roads.size(),"only the latest authored road set is visible after supersession")
	for road: Dictionary in demo.state.roads: _check(demo.town.road_roots.has(road.id),"latest stable road root "+str(road.id))
	for key: String in demo.music.STEMS:
		_check(identities[key]==[demo.music._players[key].get_instance_id(),demo.music._players[key].stream.get_instance_id()] and demo.music._players[key].playing,"same continuously playing PCM identity "+key)
	var report: Dictionary={"ok":failures.is_empty(),"label":label,"checks":checks,"failures":failures,"mode":DisplayServer.get_name(),"records":records}
	var file:=FileAccess.open(OUTPUT+"/"+label+".json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("BUDGET_EDIT_RESULT ",JSON.stringify({"ok":failures.is_empty(),"label":label,"checks":checks,"failures":failures}))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
