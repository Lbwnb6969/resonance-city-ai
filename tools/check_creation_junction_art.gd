extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUTPUT="res://验证记录/路口接合_2026-10-15"
var demo: Node3D
var label:="before"
var failures: Array[String]=[]
var views: Array[Dictionary]=[]
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
	views.append({"view":name_value,"wall_p95_ms":times[int((times.size()-1)*0.95)],"wall_max_ms":times[-1],"draw_calls":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME),"triangles":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_PRIMITIVES_IN_FRAME)})
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+"/"+name_value+".png")
func _run() -> void:
	set_auto_accept_quit(false)
	var args:=OS.get_cmdline_user_args()
	if not args.is_empty(): label=str(args[0])
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT+"/"+label))
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
	for at: Vector2 in [Vector2(-15,-5),Vector2(-16,1)]:
		if not demo.state.add_house(at).ok: failures.append("real roadside house")
	var roads: Array=[
		[Vector2(-14,-8),Vector2(-6,-8)], [Vector2(-10,-12),Vector2(-10,-8)],
		[Vector2(-14,0),Vector2(-6,0)], [Vector2(-10,-3),Vector2(-10,3)],
		[Vector2(-14,5),Vector2(-10,8),Vector2(-7,5)], [Vector2(-10,8),Vector2(-10,12)],
		[Vector2(-1,-5),Vector2(7,-5)]]
	for raw: Array in roads:
		var points: Array[Vector2]=[]
		points.assign(raw)
		var result: Dictionary=demo.state.add_road(points)
		if not result.ok: failures.append(str(result.message))
	demo.life._sync()
	demo.town.rebuild()
	var snapshot: Dictionary=demo.state.snapshot()
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	await _capture("01_T",Vector3(-10,0.1,-8),8.0)
	await _capture("02_X",Vector3(-10,0.1,0),8.0)
	await _capture("03_Y",Vector3(-10,0.1,8),9.0)
	var river: float=demo.state.river_x(8.0)
	var intended: Array[Vector2]=[Vector2(river-2.4,8),Vector2(river+2.4,8)]
	var preview: Dictionary=demo.state.preview_road(intended)
	var resolved: Array[Vector2]=[]
	resolved.assign(preview.get("points",intended))
	# The fixture owns this stationary preview; normal idle input would clear it
	# on the next frame because there is no held mouse brush in this art view.
	demo.set_process(false)
	demo.town.preview_road(resolved,bool(preview.ok))
	await _capture("04_near_bank_preview",Vector3(river,0.1,8),11.0)
	if demo.town.preview.get_child_count()==0: failures.append("stationary preview disappeared before capture")
	if label.begins_with("after") and not preview.ok: failures.append("near-bank real preview still rejected")
	if demo.state.snapshot()!=snapshot: failures.append("observation modified authored road/history")
	var report: Dictionary={"ok":failures.is_empty(),"failures":failures,"label":label,"views":views,"snapshot_sha256":JSON.stringify(snapshot,"",true,true).sha256_text(),"bridge_preview_ok":preview.ok,"bridge_intent":intended,"bridge_resolved":resolved,"render":demo.town.rebuild_stats}
	var file:=FileAccess.open(OUTPUT+"/"+label+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("JUNCTION_ART_RESULT ",JSON.stringify(report))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
