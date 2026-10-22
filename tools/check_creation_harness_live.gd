extends SceneTree
## M01 当前入口音画烟测：所有输出固定在 res://验证记录/，不调用用户截图/保存入口。
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT = "res://验证记录/M01_Harness"
var demo
var checks := 0
var failures: Array[String] = []
var facts: Dictionary = {}
func _initialize() -> void: run.call_deferred()
func check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label); push_error(label)
func seconds(duration: float) -> void:
	var until := Time.get_ticks_msec() + int(duration * 1000.)
	while Time.get_ticks_msec() < until: await process_frame
func shot(label: String) -> void:
	await seconds(.25)
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT + "/" + label + ".png") == OK, "capture " + label)
func layout() -> void:
	var screen := Rect2(Vector2.ZERO, Vector2(root.size))
	var ribbon: Control = demo.score_ribbon
	var dock: Control = demo.ui_layer.get_node("Root/Toolbar")
	check(screen.encloses(ribbon.get_global_rect()) and screen.encloses(dock.get_global_rect()), "score and five tools fit " + str(root.size))
	check(not ribbon.get_global_rect().intersects(demo.sundial_hud.get_global_rect()), "score and sundial do not overlap")
func run() -> void:
	check("--isolated-session" in OS.get_cmdline_user_args(), "isolation flag required")
	if not failures.is_empty(): quit(1); return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size = Vector2i(1440, 900)
	Engine.max_fps = 100
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo = Scene.instantiate()
	demo.persistence = false
	demo.collection_directory = OUT + "/作品"
	root.add_child(demo)
	demo.camera_rig.postcard_directory = OUT + "/明信片"
	demo.life.set_process(false)
	var data = JSON.parse_string(FileAccess.get_file_as_string("res://数据/经营河湾样例.json"))
	var restored: Dictionary = demo.state.restore(data)
	check(restored.ok and DisplayServer.get_name() != "headless", "real GL scene and authored 28-house sample")
	demo._after_edit(restored, "history")
	while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading: await process_frame
	demo.life.set_process(false)
	demo.focus = Vector3(-4, .7, -3)
	demo.zoom = 29.
	demo.pitch = .78
	demo._update_camera()
	layout()
	await shot("01_昼_1440")
	demo._toggle_light()
	await shot("02_夕_1440")
	demo._toggle_light()
	await shot("03_夜_1440")
	demo._toggle_light()
	root.size = Vector2i(1024, 768)
	await seconds(.2)
	layout()
	await shot("04_昼_1024")
	root.size = Vector2i(1440, 900)
	demo.ui_layer.hide()
	demo.camera_rig.strolling = true
	demo.camera.projection = Camera3D.PROJECTION_PERSPECTIVE
	demo.camera.fov = 48.
	demo.focus = Vector3(-11, 1.2, -2)
	demo.yaw = .62
	for angle: float in [5., 10., 15.]:
		demo.pitch = deg_to_rad(angle)
		demo._update_camera()
		await shot("低视角_%02d" % int(angle))
	demo.camera_rig.strolling = false
	demo.camera.projection = Camera3D.PROJECTION_ORTHOGONAL
	demo.focus = Vector3(-4, .7, -3)
	demo.pitch = .78
	demo._update_camera()
	await seconds(4.)
	var recorder := AudioEffectRecord.new()
	AudioServer.add_bus_effect(0, recorder)
	recorder.set_recording_active(true)
	var samples: Array[float] = []
	var until := Time.get_ticks_msec() + 6000
	var previous := Time.get_ticks_usec()
	while Time.get_ticks_msec() < until:
		await process_frame
		var now := Time.get_ticks_usec()
		samples.append(float(now - previous) / 1000.)
		previous = now
	recorder.set_recording_active(false)
	var wave: AudioStreamWAV = recorder.get_recording()
	var peak := 0.
	if wave != null:
		var pcm: PackedByteArray = wave.data
		for i: int in range(pcm.size() / 2): peak = maxf(peak, absf(float(pcm.decode_s16(i * 2)) / 32768.))
		check(wave.save_to_wav(OUT + "/实际主混音.wav") == OK, "isolated master WAV saved")
	check(peak > .0001 and peak < .99, "actual master audio is audible and unclipped")
	for i: int in range(AudioServer.get_bus_effect_count(0) - 1, -1, -1):
		if AudioServer.get_bus_effect(0, i) == recorder: AudioServer.remove_bus_effect(0, i)
	check(demo.music._players.size() == 12 and demo.music._effects.size() == 4, "fixed twelve long and four short voices")
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()) == personal, "personal city save unchanged")
	samples.sort()
	facts = {"recorded_peak": peak, "frame_p95_ms": samples[int(samples.size() * .95)], "houses": demo.state.houses.size(), "low_angles": [5, 10, 15]}
	var report := {"ok": failures.is_empty(), "checks": checks, "failures": failures, "facts": facts}
	FileAccess.open(OUT + "/report.json", FileAccess.WRITE).store_string(JSON.stringify(report, "\t"))
	print("HARNESS_LIVE ", JSON.stringify(report))
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
