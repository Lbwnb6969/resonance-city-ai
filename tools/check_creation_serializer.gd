extends SceneTree
## Exact differential against the frozen pre-extraction State, then one GL load.
const State = preload("res://scripts/world/city_creation_state.gd")
const Life = preload("res://scripts/world/city_creation_life.gd")
const Scene = preload("res://scenes/city_creation.tscn")
const OUT = "res://验证记录/作品存取拆分_2026-10-17"
const OLD = "res://废弃/状态序列化拆分_2026-10-16/city_creation_state.gd.txt"
var checks: Array = []
var failures: Array[String] = []
var schemas: Dictionary = {}
var old_script: GDScript
var sample_count := 0
var personal: PackedByteArray
func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _entire(city: RefCounted) -> Array:
	return [city.snapshot(),city.dirty,city.life_progress_dirty,city.revision,city._undo.duplicate(true),city._redo.duplicate(true)]
func _roundtrip(data: Dictionary,label: String) -> void:
	var city := State.new();var old: RefCounted = old_script.new()
	var first := data.duplicate(true);var second := data.duplicate(true)
	var valid: Dictionary = city.restore(first);var old_valid: Dictionary = old.restore(second)
	_check(valid==old_valid and valid.ok,label+": original and extracted restore accept identically")
	if not valid.ok: return
	var snapshot: Dictionary = city.snapshot()
	schemas[int(snapshot.schema)]=true
	_check(snapshot==old.snapshot() and first==data and second==data,label+": complete snapshot equals old and input remains independent")
	var text := JSON.stringify(snapshot,"\t",true,true)
	_check(text==JSON.stringify(old.snapshot(),"\t",true,true),label+": serialized UTF8 text unchanged")
	var fresh := State.new();var restored: Dictionary = fresh.restore(JSON.parse_string(text))
	_check(restored.ok and fresh.snapshot()==snapshot,label+": full-precision JSON roundtrip stable")
	_check(typeof(fresh.houses[0].cells[0].x)==TYPE_INT and typeof(fresh.houses[0].seed)==TYPE_INT and fresh.growth_memories.is_typed(),label+": JSON integer fields and typed chapter array preserved")
	var captured := city.snapshot()
	captured.houses[0].name="changed only in snapshot";captured.high_watermark.house=99999
	_check(city.snapshot()==snapshot,label+": nested snapshot and identity counters do not alias live city")
func _bad(data: Dictionary,label: String) -> void:
	var city := State.new();city.initialize();city.set_house_name("h1","已有未保存编辑");city.set_house_name("h2","撤销后仍有重做");city.undo();city.record_life_event("purchases")
	var old: RefCounted = old_script.new();old.initialize();old.set_house_name("h1","已有未保存编辑");old.set_house_name("h2","撤销后仍有重做");old.undo();old.record_life_event("purchases")
	var before := _entire(city);var old_before := _entire(old)
	var result: Dictionary = city.restore(data);var previous: Dictionary = old.restore(data)
	_check(result==previous and not result.ok,label+": exact original rejection message")
	_check(_entire(city)==before and _entire(old)==old_before,label+": failed restore retains all flags and complete undo/redo stacks")
func _logic() -> void:
	old_script=GDScript.new();old_script.source_code=FileAccess.get_file_as_string(OLD).replace("class_name CityCreationState","")
	_check(old_script.reload()==OK,"frozen Git 1166401c original State compiles")
	if not failures.is_empty(): return
	for name: String in DirAccess.get_files_at("res://数据"):
		if not name.ends_with("样例.json"): continue
		var bytes := FileAccess.get_file_as_bytes("res://数据/"+name)
		_roundtrip(JSON.parse_string(bytes.get_string_from_utf8()),name)
		_check(FileAccess.get_file_as_bytes("res://数据/"+name)==bytes,name+": source file unchanged")
		sample_count+=1
	_check(sample_count==17,"all seventeen shipping gallery samples checked")
	var city := State.new();city.initialize()
	city.growth_memories.assign(["dawn"]);city.set_house_finish("h1","dawn")
	var third := city.snapshot();_check(third.schema==3,"chapter and finish fixture actually writes Schema3");_roundtrip(third,"Schema3 growth finish")
	var points: Array[Vector2] = [Vector2(-15,12)]
	city.add_terrain_stroke(points,"raise",2,.5);city.add_terrain_stroke(points,"smooth",3,.5);city.add_terrain_stroke(points,"raise",2,.2)
	var tenth := city.snapshot();_check(tenth.schema==10,"ordered smooth and later raise actually writes Schema10");_roundtrip(tenth,"Schema10 ordered terrain")
	for version in range(1,11): _check(schemas.has(version),"roundtrip covers actual Schema"+str(version))
	var legacy := State.new();legacy.initialize();var legacy_data := legacy.snapshot()
	for key: String in ["plants","next_plant_id","high_watermark"]: legacy_data.erase(key)
	_roundtrip(legacy_data,"early schema missing plants and watermarks")
	for kind: String in ["schema","downgrade","id","counter","stock","checkpoint"]:
		var bad := tenth.duplicate(true)
		match kind:
			"schema": bad.schema=999
			"downgrade": bad.schema=9
			"id": bad.houses[0].cells[0].id=bad.houses[1].cells[0].id
			"counter": bad.next_house_id=1.5
			"stock": bad.bakery_supply={"h2":{"stock":2,"produced":1,"served":0}}
			"checkpoint": bad.journey_checkpoint={"schema":2,"residents":[],"concert":{}}
		_bad(bad,kind)
	# Actual route-based gathering, then production disk save/load and Life resume.
	var relay := State.new();relay.initialize()
	for id: String in ["h3","h5"]: relay.set_house_role(id,"venue")
	var life := Life.new();root.add_child(life);life.set_process(false);life.setup(relay)
	_check(bool(life.start_relay("h4").ok) and bool(relay.set_journey_checkpoint(life.checkpoint()).ok),"real invitation creates legal active relay checkpoint")
	_roundtrip(relay.snapshot(),"active relay Schema2 checkpoint")
	var path := OUT+"/临时存取_"+str(Time.get_ticks_usec())+"/city.json"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(path.get_base_dir()))
	_check(bool(relay.save_city(path).ok),"production atomic writer saves real gathering")
	var loaded := State.new();_check(bool(loaded.load_city(path).ok),"production reader loads real gathering")
	var resumed := Life.new();root.add_child(resumed);resumed.set_process(false);resumed.setup(loaded)
	_check(resumed.relay_status()==life.relay_status() and loaded.life_progress==relay.life_progress and resumed.checkpoint()==life.checkpoint(),"real Life restores relay phase, positions and exact counters")
	life.queue_free();resumed.queue_free()
func _live() -> void:
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var demo = Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var deadline := Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var ids: Array = []
	for player: AudioStreamPlayer in demo.music._players.values(): ids.append([player.get_instance_id(),player.stream.get_instance_id()])
	var clock: float = demo.music._playback_clock()
	var result: Dictionary = demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/经营河湾样例.json")))
	demo._after_edit(result,"history")
	deadline=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	_check(result.ok and not demo.edit_pending() and not demo._edit_ui_pending,"GL scene restores and publishes actual 28-home sample")
	demo.focus=Vector3(-1,1,-9);demo.zoom=31;demo._update_camera();demo.ui_layer.visible=false;demo.town.clear_preview()
	for ignored in range(15): await process_frame
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/实窗恢复.png")==OK,"actual restored sample screenshot saved")
	var frames: Array[float] = [];var previous := Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame;var now := Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
	frames.sort()
	var after: Array = []
	for player: AudioStreamPlayer in demo.music._players.values(): after.append([player.get_instance_id(),player.stream.get_instance_id()])
	_check(ids==after and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock,"live restore retains nine PCM and four short players with advancing clock")
	FileAccess.open(OUT+"/实窗帧时.json",FileAccess.WRITE).store_string(JSON.stringify({"p95_ms":frames[113],"max_ms":frames[-1],"frames":120,"scope":"GL idle after restore, 180FPS cap, Life paused"},"\t"))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	for player: AudioStreamPlayer in demo.ambience.players.values(): player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout
func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	if "--live" in OS.get_cmdline_user_args(): await _live()
	else: _logic();await process_frame
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continue file untouched")
	var report := {"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"sample_count":sample_count,"schemas":schemas.keys(),"oracle":"frozen pre-refactor State Git1166401c"}
	FileAccess.open(OUT+("/实窗结果.json" if "--live" in OS.get_cmdline_user_args() else "/兼容结果.json"),FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("SERIALIZER_CHECK ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
