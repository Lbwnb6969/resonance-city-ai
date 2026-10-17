extends SceneTree
## Local A/B evidence fixture: before requires the preserved original Stroke
## text in 废弃/. This dependency is deliberately excluded from game runtime.
const Scene = preload("res://scenes/city_creation.tscn")
const Stroke = preload("res://scripts/world/city_creation_stroke.gd")
const OUTPUT = "res://验证记录/道路笔触_2026-10-15"
const BASELINE = "res://废弃/道路笔触_2026-10-15/city_creation_stroke.gd.txt"
var demo: Node3D
var label := "before"
var failures: Array[String] = []
var views: Array[Dictionary] = []
var strokes: Array[Dictionary] = []
var legacy: GDScript
class FrameSampler extends Node:
	var active := false
	var samples: Array[float] = []
	var last := Time.get_ticks_usec()
	func _process(_delta: float) -> void:
		var now := Time.get_ticks_usec()
		if active: samples.append((now - last) / 1000.0)
		last = now
var sampler: FrameSampler

func _initialize() -> void: _run.call_deferred()

func _capture(name_value: String, focus: Vector3, zoom: float) -> void:
	demo.focus = focus
	demo.zoom = zoom
	demo._update_camera()
	for frame in range(90): await process_frame
	sampler.samples.clear()
	sampler.active = true
	for frame in range(120): await process_frame
	sampler.active = false
	var times := sampler.samples.duplicate()
	times.sort()
	views.append({"view":name_value,"wall_samples":times.size(),"wall_p95_ms":times[int((times.size() - 1) * 0.95)],"wall_max_ms":times[-1],"draw_calls":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME),"triangles":RenderingServer.get_rendering_info(RenderingServer.RENDERING_INFO_TOTAL_PRIMITIVES_IN_FRAME)})
	if DisplayServer.get_name() != "headless": root.get_texture().get_image().save_png(OUTPUT + "/" + label + "/" + name_value + ".png")

func _encoded(points: Array[Vector2]) -> Array:
	var result: Array = []
	for point in points: result.append([point.x,point.y])
	return result

func _run() -> void:
	set_auto_accept_quit(false)
	var args := OS.get_cmdline_user_args()
	if not args.is_empty(): label = str(args[0])
	if label not in ["before","after"]:
		push_error("Expected -- before or -- after")
		quit(1)
		return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT + "/" + label))
	legacy = GDScript.new()
	legacy.source_code = FileAccess.get_file_as_string(BASELINE).replace("class_name CityCreationStroke\n","").replace("class_name CityCreationStroke\r\n","")
	if legacy.reload() != OK:
		push_error("Preserved original Stroke did not load")
		quit(1)
		return
	var ordinary: Array[Vector2] = []
	for index in range(71): ordinary.append(Vector2(index * 0.25,sin(index * 0.13) * 2.0))
	var old_ordinary: Array[Vector2] = legacy.road_points(ordinary)
	var new_ordinary := Stroke.road_points(ordinary)
	var ordinary_equal := old_ordinary == new_ordinary
	if not ordinary_equal: failures.append("ordinary 71-sample curve changed")
	root.size = Vector2i(1440,900)
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	demo.ui_layer.visible = false
	demo.life.set_process(false)
	demo.set_process(false)
	sampler = FrameSampler.new()
	root.add_child(sampler)
	demo.state.houses.clear()
	demo.state.roads.clear()
	demo.state.plants.clear()
	var gestures: Array = [
		[Vector2(-15,-10),Vector2(-10,-10),Vector2(-10,-5)],
		[Vector2(-15,4),Vector2(-10,4),Vector2(-13,9.2)]]
	for raw: Array in gestures:
		var points: Array[Vector2] = []
		points.assign(raw)
		var shaped: Array[Vector2] = legacy.road_points(points) if label == "before" else Stroke.road_points(points)
		var result: Dictionary = demo.state.add_road(shaped)
		if not result.ok: failures.append(str(result.message))
		strokes.append({"raw":_encoded(points),"raw_sha256":JSON.stringify(_encoded(points)).sha256_text(),"stroke_points":_encoded(shaped),"stroke_sha256":JSON.stringify(_encoded(shaped)).sha256_text(),"persisted":demo.state.roads[-1].duplicate(true) if result.ok else {},"ok":result.ok})
	demo.life._sync()
	demo.town.rebuild()
	var snapshot: Dictionary = demo.state.snapshot()
	await _capture("01_90_degree",Vector3(-10.7,0.1,-9.3),8.0)
	await _capture("02_120_degree",Vector3(-10.8,0.1,5.0),8.0)
	if demo.state.snapshot() != snapshot: failures.append("art observation modified authored state")
	var report := {"ok":failures.is_empty(),"failures":failures,"label":label,"ordinary_71_points_identical":ordinary_equal,"ordinary_sha256":JSON.stringify(_encoded(new_ordinary)).sha256_text(),"strokes":strokes,"views":views,"snapshot_sha256":JSON.stringify(snapshot,"",true,true).sha256_text(),"render":demo.town.rebuild_stats,"source_before_sha256":FileAccess.get_file_as_string(BASELINE).sha256_text(),"source_after_sha256":FileAccess.get_file_as_string("res://scripts/world/city_creation_stroke.gd").sha256_text()}
	var file := FileAccess.open(OUTPUT + "/" + label + "/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("FILLET_ART_RESULT ",JSON.stringify(report))
	demo.queue_free()
	await create_timer(0.2).timeout
	quit(0 if failures.is_empty() else 1)
