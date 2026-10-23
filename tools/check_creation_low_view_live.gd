extends SceneTree
## M02: real GLES3 slot audit and repeatable low-angle captures from saved cities.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Audit = preload("res://tools/fixtures/city_creation_render_safety_audit.gd")
var OUT = "res://验证记录/M14/低视角"
var demo
var checks := 0
var failures: Array[String] = []
var facts: Dictionary = {"samples":[],"screenshots":[]}
func _initialize() -> void: run.call_deferred()
func check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label); push_error(label)
func seconds(duration: float) -> void:
	var until := Time.get_ticks_msec() + int(duration*1000.)
	while Time.get_ticks_msec() < until: await process_frame
func shot(name: String) -> void:
	await seconds(.18)
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+name+".png") == OK,"capture "+name)
	facts.screenshots.append(name)
func run() -> void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	check("--isolated-session" in OS.get_cmdline_user_args(),"isolated session required")
	if not failures.is_empty(): quit(1); return
	root.size = Vector2i(1440,900)
	Engine.max_fps = 100
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo = Scene.instantiate()
	demo.persistence = false
	demo.collection_directory = OUT+"/作品"
	root.add_child(demo)
	demo.camera_rig.postcard_directory = OUT+"/明信片"
	demo.life.set_process(false)
	while demo.music._loading: await process_frame
	var source := "res://验证记录/自由曲路接缝_2026-10-20/只读试玩副本.json"
	if not FileAccess.file_exists(source): source = "res://数据/经营河湾样例.json"
	for sample: Dictionary in [{"id":"复现河湾","path":source},{"id":"旗舰127屋","path":"res://数据/四库共鸣交响大城样例.json"}]:
		if "--foliage-only" in OS.get_cmdline_user_args():continue
		var data: Dictionary = JSON.parse_string(FileAccess.get_file_as_string(sample.path))
		var restored: Dictionary = demo.state.restore(data)
		check(restored.ok,"saved city restores: "+str(sample.id))
		if not restored.ok: continue
		demo._after_edit(restored,"history")
		while demo.edit_pending() or demo._edit_ui_pending: await process_frame
		demo.life.set_process(false)
		demo.ui_layer.hide()
		await RenderingServer.frame_post_draw
		var audit := Audit.multimeshes(demo)
		check(audit.invalid.is_empty(),"all GPU slots and explicit draw counts are valid: "+str(sample.id))
		facts.samples.append({"id":sample.id,"houses":demo.state.houses.size(),"gpu":audit})
		demo.camera_rig.strolling = true
		demo.camera.projection = Camera3D.PROJECTION_PERSPECTIVE
		demo.camera.fov = 48.
		var at := Vector2(-12,1)
		demo.focus = Vector3(at.x,demo.state.street_height(at)+1.2,at.y)
		for phase: int in range(3):
			while demo.light_phase != phase: demo._toggle_light()
			for angle: float in [5.,10.,15.]:
				for yaw: float in [.62,2.4]:
					demo.pitch = deg_to_rad(angle)
					demo.yaw = yaw
					demo._update_camera()
					await shot("%s_%d_%02d_%.2f" % [sample.id,phase,int(angle),yaw])
		# LOD and a real edit/history publication must not expose capacity slots.
		demo.town.meadow.set_view_scale(100.)
		demo.town.meadow.set_view_scale(25.)
		demo.town.path_pebbles.set_view_scale(100.)
		demo.town.path_pebbles.set_view_scale(25.)
		var changed: Dictionary = demo.state.place_plant(Vector2(-38,-38),"olive")
		check(changed.ok,"isolated edit is accepted")
		if changed.ok:
			demo._after_edit(changed,"plant")
			while demo.edit_pending() or demo._edit_ui_pending: await process_frame
			demo._after_edit(demo.state.undo(),"history")
			while demo.edit_pending() or demo._edit_ui_pending: await process_frame
		await RenderingServer.frame_post_draw
		var after := Audit.multimeshes(demo)
		check(after.invalid.is_empty(),"LOD/edit/undo retain valid transforms: "+str(sample.id))
		facts.samples[-1].after_history = after
	var foliage:Dictionary=await preload("res://tools/fixtures/city_creation_foliage_live.gd").capture(demo,OUT)
	check(foliage.ok,"actual painterly trees publish shared paper transmission shader")
	facts.foliage=foliage
	var contact:Dictionary=await preload("res://tools/fixtures/city_creation_nature_contact_live.gd").capture(demo,OUT)
	check(contact.ok,"actual stone stair and highland contact ribbons fit terrain and preserve world");facts.contact=contact
	var probe := await Audit.gpu_probe()
	check(probe.ok,"GPU readback confirms compact colors/custom data and buried retired capacity")
	facts.gpu_probe = probe
	demo.camera_rig.strolling = false
	demo.camera.projection = Camera3D.PROJECTION_ORTHOGONAL
	demo.focus = Vector3(0,1.2,2)
	demo.zoom = 88.
	demo.pitch = .86
	demo.yaw = .34
	while demo.light_phase != 0: demo._toggle_light()
	demo._update_camera()
	await seconds(4.)
	var recorder := AudioEffectRecord.new()
	AudioServer.add_bus_effect(0,recorder)
	recorder.set_recording_active(true)
	var times: Array[float] = []
	var previous := Time.get_ticks_usec()
	var until := Time.get_ticks_msec()+6000
	while Time.get_ticks_msec() < until:
		await process_frame
		var now := Time.get_ticks_usec()
		times.append(float(now-previous)/1000.)
		previous = now
	recorder.set_recording_active(false)
	var wave: AudioStreamWAV = recorder.get_recording()
	var peak := 0.
	if wave != null:
		var pcm := wave.data
		for i: int in range(pcm.size()/2): peak = maxf(peak,absf(float(pcm.decode_s16(i*2))/32768.))
		check(wave.save_to_wav(OUT+"/实际主混音.wav") == OK,"real Master recording saved in isolation")
	check(peak > .0001 and peak < .99,"actual low-view master is audible and unclipped")
	for i: int in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i) == recorder: AudioServer.remove_bus_effect(0,i)
	check(demo.music._players.size()==12 and demo.music._effects.size()==4,"fixed audio voice budget")
	check(personal == (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal city save unchanged")
	times.sort()
	facts.recorded_peak = peak
	facts.frame_p95_ms = times[int(times.size()*.95)]
	facts.visual_review = "PNG require human review; structural pass does not prove project-wide visual correctness"
	var result := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"))
	print("LOW_VIEW_LIVE ",JSON.stringify(result))
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
