extends SceneTree
## Real world-coordinate houses with separate IDs; serial before/after views.
const Scene=preload("res://scenes/city_creation.tscn")
const OUTPUT="res://验证记录/连排接合_2026-10-15"
var demo: Node3D
var reports: Array[Dictionary]=[]
var failures: Array[String]=[]
var label:="before"
class FrameSampler extends Node:
	var active:=false
	var samples: Array[float]=[]
	var last:=Time.get_ticks_usec()
	func _process(_delta: float) -> void:
		var now:=Time.get_ticks_usec()
		if active: samples.append((now-last)/1000.0)
		last=now
var sampler: FrameSampler
func _initialize() -> void: _run.call_deferred()
func _capture(name_value: String, focus: Vector3, zoom: float) -> void:
	demo.focus=focus
	demo.zoom=zoom
	demo._update_camera()
	for frame in range(90): await process_frame
	sampler.samples.clear()
	sampler.active=true
	for frame in range(180): await process_frame
	sampler.active=false
	var times:=sampler.samples.duplicate()
	times.sort()
	reports.append({"view":name_value,"wall_p95_ms":times[int((times.size()-1)*0.95)],"wall_max_ms":times[-1],"draw_calls":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME),"triangles":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_PRIMITIVES_IN_FRAME)})
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+"/"+name_value+".png")
func _run() -> void:
	set_auto_accept_quit(false)
	var args:=OS.get_cmdline_user_args()
	if not args.is_empty(): label=str(args[0])
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT+"/"+label))
	root.size=Vector2i(1440,900)
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.ui_layer.visible=false
	demo.life.set_process(false)
	sampler=FrameSampler.new()
	root.add_child(sampler)
	demo.state.houses.clear()
	demo.state.roads.clear()
	demo.state.plants.clear()
	# Four-cell row, five-cell L and seven-cell U; every cell is a real household.
	var positions: Array[Vector2]=[Vector2(-13,-9),Vector2(-11.2,-9),Vector2(-9.4,-9),Vector2(-7.6,-9),Vector2(-13,-3),Vector2(-11.2,-3),Vector2(-9.4,-3),Vector2(-13,-1.2),Vector2(-13,0.6),Vector2(-13,6),Vector2(-11.2,6),Vector2(-9.4,6),Vector2(-13,7.8),Vector2(-9.4,7.8),Vector2(-13,9.6),Vector2(-9.4,9.6)]
	for position_value: Vector2 in positions:
		var added: Dictionary=demo.state.add_house(position_value)
		if not added.ok: failures.append(str(added.message))
	var raised_id:=str(demo.state.houses[3].id)
	if not demo.state.add_cell(raised_id,0,0,1,"room").ok: failures.append("real step-up room")
	demo.life._sync()
	demo.town.rebuild()
	var snapshot: Dictionary=demo.state.snapshot()
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	await _capture("01_row",Vector3(-10.3,1,-9),13.0)
	await _capture("02_L",Vector3(-11.4,0.6,-1.5),12.0)
	await _capture("03_courtyard",Vector3(-11.2,0.6,7.8),13.0)
	demo._toggle_light()
	await _capture("04_evening",Vector3(-11.2,0.6,7.8),13.0)
	if demo.state.snapshot()!=snapshot: failures.append("observation mutated city")
	var report: Dictionary={"ok":failures.is_empty(),"label":label,"failures":failures,"views":reports,"snapshot_sha256":JSON.stringify(snapshot,"",true,true).sha256_text(),"houses":demo.state.houses.size(),"render":demo.town.rebuild_stats}
	var file:=FileAccess.open(OUTPUT+"/"+label+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("JOINED_ART_RESULT ",JSON.stringify(report))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
