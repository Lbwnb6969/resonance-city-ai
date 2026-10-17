extends SceneTree
## Same authored garden, camera and display for before/after grass judgment.
const Scene=preload("res://scenes/city_creation.tscn")
const Stroke=preload("res://scripts/world/city_creation_stroke.gd")
const OUTPUT="res://验证记录/草色校准_2026-10-15"
class FixtureInput extends Node:
	func _input(event: InputEvent) -> void:
		if event.device!=92: get_viewport().set_input_as_handled()
class FrameSampler extends Node:
	var active:=false
	var samples: Array[float]=[]
	var last:=Time.get_ticks_usec()
	func _process(_delta: float) -> void:
		var now:=Time.get_ticks_usec()
		if active: samples.append((now-last)/1000.0)
		last=now
var demo: Node3D
var sampler: FrameSampler
var label:="before"
var reports: Array[Dictionary]=[]
var failures: Array[String]=[]

func _initialize() -> void: _run.call_deferred()
func _capture(name_value: String, focus: Vector3, zoom: float, evening: bool=false) -> void:
	demo.focus=focus
	demo.zoom=zoom
	demo._update_camera()
	if evening!=demo.evening: demo._toggle_light()
	await process_frame
	await process_frame
	# Uniform/camera changes can trigger driver work on first presentation.
	# Record only the warmed steady view; edit-frame measurements are separate.
	for frame in range(90): await process_frame
	sampler.samples.clear()
	sampler.active=true
	for frame in range(240): await process_frame
	sampler.active=false
	var frames:=sampler.samples.duplicate()
	frames.sort()
	var report: Dictionary={"view":name_value,"zoom":zoom,"evening":evening,"fps":Engine.get_frames_per_second(),"wall_p95_ms":frames[int((frames.size()-1)*0.95)],"wall_max_ms":frames[-1],"draw_calls":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME),"triangles":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_PRIMITIVES_IN_FRAME)}
	reports.append(report)
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+"/"+name_value+".png")
	print("MEADOW_ART_VIEW ",JSON.stringify(report))

func _run() -> void:
	set_auto_accept_quit(false)
	var args:=OS.get_cmdline_user_args()
	if not args.is_empty(): label=str(args[0])
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT+"/"+label))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	root.add_child(FixtureInput.new())
	sampler=FrameSampler.new()
	root.add_child(sampler)
	demo.life.set_process(false)
	demo.ui_layer.visible=false
	var water: Array[Vector2]=[Vector2(3,-10),Vector2(7,-10),Vector2(11,-9)]
	if not demo.state.add_water(water,2.8,"channel").ok: failures.append("authored creek")
	water=[Vector2(11,-9)]
	if not demo.state.add_water(water,4.0,"pond").ok: failures.append("authored pond")
	var raw: Array[Vector2]=[Vector2(-11,9),Vector2(-14,9),Vector2(-15,5),Vector2(-14,1)]
	if not demo.state.add_road(Stroke.road_points(raw)).ok: failures.append("authored curved street")
	if not demo.state.set_house_role("h3","garden_cafe").ok: failures.append("real cafe garden")
	demo.life._sync()
	demo.town.rebuild()
	var original: Dictionary=demo.state.snapshot()
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	await _capture("01_street_day",Vector3(-3,0.7,0),25.0)
	await _capture("02_house_day",Vector3(-9,0.7,0),14.0)
	await _capture("03_ground_close",Vector3(-12,0.12,-5),7.0)
	await _capture("04_city_day",Vector3(0,0.7,0),40.0)
	await _capture("06_forest_edge",Vector3(-14,0.25,-8),10.0)
	await _capture("05_street_evening",Vector3(-3,0.7,0),25.0,true)
	if demo.state.snapshot()!=original: failures.append("art/camera observation mutated authored city or real ledger")
	var report: Dictionary={"ok":failures.is_empty(),"label":label,"failures":failures,"mode":DisplayServer.get_name(),"views":reports,"meadow":demo.town.meadow.diagnostics(),"shore":demo.town.shore.diagnostics(),"audio":demo.music.audio_report,"snapshot_sha256":JSON.stringify(original,"",true,true).sha256_text(),"render":demo.town.rebuild_stats.duplicate(true)}
	var file:=FileAccess.open(OUTPUT+"/"+label+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("MEADOW_ART_RESULT ",JSON.stringify({"ok":failures.is_empty(),"label":label,"failures":failures}))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
