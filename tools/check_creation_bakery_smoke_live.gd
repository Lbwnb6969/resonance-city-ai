extends SceneTree
## Real attended baking plus bounded GPU smoke visibility/state regression.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT := "res://验证记录/烘焙炊烟_2026-10-16"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {}
var personal := PackedByteArray()
var produced: Array = []
var began := 0
var bakery := "h2"

func _initialize() -> void:
	if "--follow-up-only" in OS.get_cmdline_user_args(): _follow_up.call_deferred()
	else: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _identity() -> Array:
	var result: Array = []
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[key]
		var pcm: PackedByteArray = player.stream.data
		var digest := HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(pcm)
		result.append([key,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _smoke() -> MeshInstance3D:
	var house: Node3D = demo.town.house_roots.get(bakery)
	return house.find_child("BakerySmoke",true,false) as MeshInstance3D if house!=null else null
func _smoke_ids() -> Array:
	var smoke := _smoke()
	return [] if smoke==null else [demo.town.house_roots[bakery].get_instance_id(),smoke.get_instance_id(),smoke.mesh.get_instance_id(),smoke.material_override.get_instance_id()]
func _status() -> Dictionary: return demo.life.bakery_status(bakery)
func _refresh() -> void: demo._refresh_bakeries()
func _wait_edit() -> void:
	var deadline := Time.get_ticks_msec()+12000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame;await process_frame
func _key(code: int,ctrl: bool=false) -> void:
	for pressed: bool in [true,false]:
		var event := InputEventKey.new();event.keycode=code;event.pressed=pressed;event.ctrl_pressed=ctrl
		root.push_input(event);await process_frame
func _image(label: String) -> void:
	demo.town.clear_preview();await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual smoke screenshot saved: "+label)
func _sample(visible_value: bool) -> Dictionary:
	var smoke := _smoke();smoke.visible=visible_value
	var wall: Array[float] = [];var draws: Array[float] = []
	var previous := Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now := Time.get_ticks_usec();wall.append(float(now-previous)/1000.0);previous=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort()
	return {"frames":120,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draws_median":draws[60],"smoke_visible":smoke.visible,"scope":"Life and Demo UI process paused during one isolated smoke visibility A/B; original Music and GPU TIME remain live. Display switch only, no fake production. 180FPS/VSync0 wall reference, not uncapped throughput."}
func _roof() -> Dictionary:
	var root_value: Node3D = demo.town.house_roots[bakery]
	var chimneys: Array = root_value.get_meta("chimneys",[])
	var smoke := _smoke()
	var max_level := -1
	var house: Dictionary = demo.town._house_record(bakery)
	for cell: Dictionary in house.cells:
		if cell.kind=="room": max_level=maxi(max_level,int(cell.level))
	var valid := not chimneys.is_empty() and smoke!=null
	for at: Vector3 in chimneys:
		if at.y<float(max_level+1)*1.7: valid=false
	return {"valid":valid,"chimneys":chimneys,"highest_room_level":max_level,"joined_roof":root_value.get_meta("joined_roof",false),"smoke_local_transform":smoke.transform if smoke!=null else Transform3D.IDENTITY}

func _follow_up() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时补验作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo)
	demo.focus=Vector3(-2.4,2,-5);demo.zoom=13;demo.pitch=0.73;demo.yaw=0.35;demo._update_camera();demo.ui_layer.visible=false
	began=Time.get_ticks_msec()
	var deadline := began+22000
	while str(_status().worker_phase)!="baking" and Time.get_ticks_msec()<deadline: await process_frame
	_refresh()
	var smoke := _smoke()
	var actual: Dictionary = _status()
	_check(DisplayServer.get_name()!="headless" and str(actual.worker_phase)=="baking" and smoke!=null and smoke.visible and bool(smoke.get_meta("working",false)),"real attended baking enables recursively located smoke after actual worker arrival")
	if smoke!=null:
		var direct: Node = demo.town.house_roots[bakery].get_node_or_null("BakerySmoke")
		_check(smoke.get_parent().name=="ResonanceVisualPivot" and direct==null,"smoke remains under actual roof resonance pivot and recursive update reaches the real node")
		demo.set_process(false);demo.life.set_process(false)
		var ids := _smoke_ids()
		var closed: Dictionary = demo.state.set_bakery_open(bakery,false)
		demo._after_edit(closed,"terrace",false);await _wait_edit();_refresh()
		_check(closed.ok and not smoke.visible and not bool(smoke.get_meta("working",true)) and _smoke_ids()==ids,"actual public oven pause hides original smoke without replacing house mesh or material")
		for ignored in range(15): await process_frame
		facts.hidden=await _sample(false)
		await _image("followup_01_停炉无炊烟")
		var opened: Dictionary = demo.state.set_bakery_open(bakery,true)
		demo._after_edit(opened,"terrace",false);await _wait_edit();_refresh()
		_check(opened.ok and smoke.visible and bool(smoke.get_meta("working",false)) and _smoke_ids()==ids,"actual public resume reveals same recursively updated smoke during genuine retained baking phase")
		var snapshot: Dictionary = demo.state.snapshot()
		var gates: Array = []
		for kind: String in ["full_shelf","resting","paused","closed"]:
			var status: Dictionary = actual.duplicate(true)
			match kind:
				"full_shelf": status.stock=int(status.capacity)
				"resting": status.worker_phase="resting"
				"paused": status.worker_phase="paused"
				"closed": status.open=false
			demo.town.update_bakery_supply({bakery:status})
			gates.append({"kind":kind,"hidden":not smoke.visible,"working":smoke.get_meta("working",true)})
		var all_gates := true
		for row: Dictionary in gates: all_gates=all_gates and bool(row.hidden) and not bool(row.working)
		_check(all_gates and demo.state.snapshot()==snapshot,"synthetic renderer-only full/resting/paused/closed gate truth table hides smoke with zero persistent production or State writes")
		_refresh()
		_check(smoke.visible and _smoke_ids()==ids,"real unchanged worker status restores original visible smoke after synthetic gate-only checks")
		# Warm transparent shader once; retain original opaque cold-compile
		# evidence in first/live.json instead of claiming it disappeared.
		for ignored in range(15): await process_frame
		facts.working=await _sample(true)
		await _image("followup_02_真实柔化炊烟")
		_check(smoke.material_override.shader.code.contains("blend_mix") and smoke.material_override.shader.code.contains("depth_draw_never") and smoke.cast_shadow==GeometryInstance3D.SHADOW_CASTING_SETTING_OFF,"actual shared soft-alpha shader uses transparent pass without depth writing or smoke shadows")
		facts.gates=gates;facts.real_baking_status=actual;facts.roof=_roof();facts.smoke_parent=str(smoke.get_parent().name);facts.node_ids=ids
	facts.wall_ms=Time.get_ticks_msec()-began
	facts.scope="Follow-up only: real default worker arrival, original smoke recursive visibility, public pause/resume, renderer-only synthetic gate truth table and two 15warm+120frame visibility comparisons. No repeated first-batch completion, role undo, PCM byte scan or full economy claim. First 13/15 report remains unchanged; cold opaque 552ms compile is retained there."
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"follow-up leaves personal continuing-city bytes unchanged")
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"facts":facts,"command":"Godot_v4.7.2-stable_win64_console.exe --path . --audio-driver Dummy --max-fps 180 --script tools/check_creation_bakery_smoke_live.gd -- --follow-up-only"}
	FileAccess.open(OUT+"/followup.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("BAKERY_SMOKE_FOLLOWUP ",JSON.stringify(report))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo)
	demo.focus=Vector3(-2.4,2,-5);demo.zoom=13;demo.pitch=0.73;demo.yaw=0.35;demo._update_camera();demo.ui_layer.visible=false
	var original_callback: Callable = demo.life.production_callback
	demo.life.production_callback=func(id: String,quantity: int)->void:
		if original_callback.is_valid(): original_callback.call(id,quantity)
		produced.append({"shop":id,"quantity":quantity,"wall_ms":Time.get_ticks_msec()-began,"supply":demo.state.bakery_status(id)})
	began=Time.get_ticks_msec()
	var deadline := began+25000
	while (demo.music.audio_report.is_empty() or str(_status().worker_phase)!="baking") and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty() and demo.state.houses.size()==6 and demo.town._house_record(bakery).role=="bakery","actual default six-house GL scene uses real h2 bakery and production PCM")
	if demo.music.audio_report.is_empty() or _smoke()==null:
		_check(false,"production BakerySmoke mesh exists on real bakery")
		await _finish();return
	var identities := _identity();var clock: float = demo.music._playback_clock()
	_refresh()
	var first: Dictionary = _status()
	_check(str(first.worker_phase)=="baking" and bool(first.open) and int(first.stock)+int(first.batch_size)<=int(first.capacity) and _smoke().visible and bool(_smoke().get_meta("working",false)),"real worker arrives and actual eligible baking status makes smoke visible before a fabricated event")
	facts.roof=_roof()
	_check(bool(facts.roof.valid),"real two-level bakery chimney outlet is above its actual highest room roof and supplies smoke geometry")
	demo.life.set_process(false);demo.set_process(false)
	var stable := _smoke_ids()
	var original_mesh_sha := var_to_bytes(_smoke().mesh.surface_get_arrays(0)).hex_encode().sha256_text()
	facts.hidden=await _sample(false);await _image("01_同镜头隐藏炊烟")
	facts.working=await _sample(true);await _image("02_真实烘焙炊烟")
	_refresh()
	_check(_smoke_ids()==stable,"smoke-only draw A/B and status refresh reuse the house, smoke node, mesh and material")
	# Public open/close state operations, retaining the real worker's phase;
	# no fabricated stock, working phase or completed oven event is injected.
	var closed: Dictionary = demo.state.set_bakery_open(bakery,false)
	demo._after_edit(closed,"terrace",false);await _wait_edit();_refresh()
	_check(closed.ok and not _smoke().visible and not bool(_smoke().get_meta("working",true)) and _smoke_ids()==stable,"public pause-oven edit immediately hides working smoke without house or mesh rebuild")
	var opened: Dictionary = demo.state.set_bakery_open(bakery,true)
	demo._after_edit(opened,"terrace",false);await _wait_edit();_refresh()
	_check(opened.ok and _smoke().visible and _smoke_ids()==stable,"public resume reuses original smoke geometry and original real worker baking state")
	demo.set_process(true);demo.life.set_process(true)
	deadline=Time.get_ticks_msec()+7500
	while produced.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var supply: Dictionary = demo.state.bakery_status(bakery)
	_check(not produced.is_empty() and int(supply.produced)>0 and int(supply.produced)==int(supply.stock)+int(supply.served),"natural attended six-second oven finishes actual first batch and conserved bread stock")
	demo.life.set_process(false)
	var progress: Dictionary = demo.state.life_progress.duplicate(true)
	var counters: Dictionary = demo.state.bakery_supply.duplicate(true)
	var role: Dictionary = demo.state.set_house_role(bakery,"residential")
	demo._after_edit(role,"room");await _wait_edit()
	_check(role.ok and (_smoke()==null or not _smoke().visible),"real role change removes or disables bakery smoke immediately")
	await _key(KEY_Z,true);await _wait_edit();_refresh()
	_check(demo.town._house_record(bakery).role=="bakery" and _smoke()!=null and var_to_bytes(_smoke().mesh.surface_get_arrays(0)).hex_encode().sha256_text()==original_mesh_sha,"actual Ctrl-Z restores bakery and the same shared puff geometry")
	_check(demo.state.bakery_supply==counters and demo.state.life_progress==progress,"role-change history does not replay bread production or rewind completed daily counters")
	# Real sync has already assigned a genuine replacement worker; observe it
	# with a small deadline, and record explicitly if it is still walking.
	demo.life.set_process(true)
	deadline=Time.get_ticks_msec()+6000
	while str(_status().worker_phase)!="baking" and Time.get_ticks_msec()<deadline: await process_frame
	_refresh()
	facts.after_role_undo={"status":_status(),"smoke_visible":_smoke().visible,"scope":"at most six real seconds for the replacement worker, no teleport or manual Life processing"}
	_check(str(_status().worker_phase)!="baking" or _smoke().visible,"if actual replacement worker reaches baking within bounded wait, restored smoke follows it")
	demo.life.set_process(false)
	_check(_identity()==identities and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock,"real baking and edits preserve original nine PCM bytes thirteen Players and advancing audio clock")
	facts.production=produced;facts.final_supply=demo.state.bakery_status(bakery);facts.wall_ms=Time.get_ticks_msec()-began
	await _finish()
func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continuing-city bytes remain untouched")
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"facts":facts,"scope":"Real default bakery worker arrival, baking and first oven callback; public State open/role changes and Window Ctrl-Z. Smoke visibility A/B freezes Life only for isolated GPU samples; no synthetic production or completed business. Actual input is Godot Window injection, not OS mouse/keyboard. Replacement-worker wait is bounded and recorded rather than claimed if still walking.","command":"Godot_v4.7.2-stable_win64_console.exe --path . --audio-driver Dummy --max-fps 180 --script tools/check_creation_bakery_smoke_live.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("BAKERY_SMOKE_LIVE ",JSON.stringify(report))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
