extends SceneTree
## Pure chooser contracts plus one bounded production GL cloth-pick/edit/undo.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Canopy=preload("res://scripts/visual/city_creation_terrace_canopy.gd")
const OUT="res://验证记录/露台花架_2026-10-16"
const EXAMPLE="res://数据/露台花架样例.json"
var demo
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
var personal:=PackedByteArray()
func _initialize() -> void:
	if "--cpu-only" in OS.get_cmdline_user_args(): _cpu_run.call_deferred()
	else: _live.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _cell(id: String,x: int,z: int,level: int,kind: String)->Dictionary:
	return {"id":id,"x":x,"z":z,"level":level,"kind":kind,"source":"CPU geometry contract only"}
func _cpu() -> void:
	var city:=State.new();city.initialize()
	var house: Dictionary=city.houses[0]
	_check(Canopy.choose(city.houses,house).is_empty(),"real default house without upper terrace has no canopy")
	_check(city.add_cell("h1",0,0,1,"terrace").ok,"real State API creates supported upper terrace")
	var choice: Dictionary=Canopy.choose(city.houses,house)
	# add_cell installs a new immutable house dictionary; resolve it again.
	house=city.houses[0];choice=Canopy.choose(city.houses,house)
	_check(not choice.is_empty() and choice.level==1 and choice.cell_id==house.cells[-1].id,"actual upper terrace derives correct original cell identity and level")
	city.add_cell("h1",1,0,1,"terrace");house=city.houses[0]
	var stable: Dictionary=Canopy.choose(city.houses,house)
	var reordered: Dictionary=house.duplicate(true);reordered.cells.reverse()
	var other_order: Array=city.houses.duplicate(true);other_order[0]=reordered;other_order.reverse()
	_check(Canopy.choose(other_order,reordered)==stable,"one-per-house stable choice ignores house and cell array ordering")
	var blocked: Dictionary=house.duplicate(true)
	var chosen: Dictionary={}
	for cell: Dictionary in house.cells:
		if str(cell.id)==str(stable.cell_id): chosen=cell
	blocked.cells.append(_cell("c999",int(chosen.x),int(chosen.z),int(chosen.level)+1,"room"))
	var blocked_rows: Array=city.houses.duplicate(true);blocked_rows[0]=blocked
	var alternate: Dictionary=Canopy.choose(blocked_rows,blocked)
	_check(not alternate.is_empty() and alternate.cell_id!=stable.cell_id,"upper own-house room covering chosen terrace selects another exposed candidate")
	var upper_blocker: Dictionary={"id":"h997","origin":house.origin.duplicate(),"cells":[]}
	for cell: Dictionary in house.cells:
		if int(cell.level)>0 and cell.kind=="terrace": upper_blocker.cells.append(_cell("c"+str(1000+int(cell.x)),int(cell.x),int(cell.z),int(cell.level)+3,"terrace"))
	var upper_rows: Array=city.houses.duplicate(true);upper_rows.append(upper_blocker)
	_check(Canopy.choose(upper_rows,house).is_empty(),"any higher-layer projected cell blocks canopy, including upper terraces")
	var cross: Dictionary={"id":"h999","origin":[stable.center.x,stable.center.y],"cells":[_cell("c9999",0,0,4,"room")]}
	var cross_rows: Array=city.houses.duplicate(true);cross_rows.append(cross)
	var cross_choice: Dictionary=Canopy.choose(cross_rows,house)
	_check(cross_choice.is_empty() or cross_choice.cell_id!=stable.cell_id,"cross-house upper projection cannot place cloth through the selected canopy rectangle")
	var ground: Dictionary={"id":"h998","origin":[stable.center.x,stable.center.y],"cells":[_cell("c9998",0,0,0,"terrace")]}
	var ground_rows: Array=city.houses.duplicate(true);ground_rows.append(ground)
	_check(Canopy.choose(ground_rows,house)==stable,"lower projected terrace does not block an upper canopy")
	var before: Dictionary=city.snapshot()
	var removed: Dictionary=city.remove_cell("h1",str(stable.cell_id))
	_check(removed.ok and Canopy.choose(city.houses,city.houses[0]).get("cell_id","")!=stable.cell_id,"actual terrace removal updates derived candidate")
	_check(city.undo().ok and Canopy.choose(city.houses,city.houses[0])==stable,"real construction undo restores same stable canopy choice")
	_check(not before.has("terrace_canopy") and not city.houses[0].has("terrace_canopy") and city.life_progress.concerts==0,"canopy planning adds no State field or completed-business event")
	facts.cpu={"initial_choice":choice,"stable_choice":stable,"scope":"CPU pure chooser uses synthetic upper blockers only to exercise geometric truth; actual supported terrace construction/removal uses public State API."}
func _cpu_run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));_cpu()
	var report: Dictionary=_report("CPU only; no GPU or natural Life claim")
	FileAccess.open(OUT+"/state.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("TERRACE_CANOPY_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func _identity()->Array:
	var result: Array=[]
	for id: String in demo.music.STEMS:
		var player: AudioStreamPlayer=demo.music._players[id]
		var pcm: PackedByteArray=player.stream.data
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(pcm)
		result.append([id,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+15000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame;await process_frame
func _motion(at: Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;event.global_position=at;root.push_input(event);await process_frame
func _button(down: bool)->void:
	var event:=InputEventMouseButton.new();event.position=demo.pointer;event.global_position=demo.pointer;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func _key(code: int,ctrl: bool=false)->void:
	for down: bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.pressed=down;event.ctrl_pressed=ctrl;root.push_input(event);await process_frame
func _capture(name_value: String)->void:
	await _motion(Vector2(100,50));demo.town.clear_preview();await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"actual canopy screenshot saved: "+name_value)
func _report(scope: String)->Dictionary:
	return {"ok":failures.is_empty(),"checks":checks,"failures":failures,"count":checks.size(),"facts":facts,"scope":scope,"command":"Godot_v4.7.2-stable_win64_console.exe --path . --audio-driver Dummy --max-fps 180 --script tools/check_creation_terrace_canopy_live.gd"}
func _live()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	var added: Dictionary=demo.state.add_cell("h1",0,0,1,"terrace");demo._after_edit(added,"terrace");await _wait()
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and added.ok and not demo.music.audio_report.is_empty(),"production GL creates real supported upper terrace with original PCM ready")
	var identities:=_identity();var clock: float=demo.music._playback_clock()
	var progress: Dictionary=demo.state.life_progress.duplicate(true)
	var inventory: Array=[demo.state.bakery_supply.duplicate(true),demo.state.workshop_supply.duplicate(true),demo.state.venue_commissions.duplicate(true)]
	var row: Dictionary=demo.town.house_roots.h1.get_meta("terrace_canopy",{})
	_check(not row.is_empty() and row==Canopy.choose(demo.state.houses,demo.state.houses[0]),"actual renderer installs the pure stable canopy choice as house metadata")
	if not row.is_empty():
		var center: Vector2=row.center
		demo.focus=Vector3(center.x,2.2,center.y);demo.zoom=10;demo.pitch=0.92;demo.yaw=0.35;demo._update_camera()
		var at:=center+Vector2(-0.28,0)
		var hit: Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,12,at.y),Vector3(at.x,-2,at.y),1))
		_check(not hit.is_empty() and str(hit.collider.get_meta("house_id",""))=="h1" and str(hit.collider.get_meta("cell_id",""))==str(row.cell_id) and float(hit.position.y)>float(row.level)*1.7+1.0,"real cloth trimesh picks original terrace body and identity above the terrace deck")
		await _key(KEY_1)
		if not hit.is_empty():
			var point: Vector2=demo.camera.unproject_position(hit.position)
			await _motion(point)
			_check(str(demo.hovered.get("collider").get_meta("cell_id",""))==str(row.cell_id) and demo.candidate.has("cell") and int(demo.candidate.cell.level)==int(row.level)+1,"actual Window pointer over cloth retains terrace metadata and produces upward level-plus-one candidate")
			facts.upper_candidate=demo.candidate.duplicate(true)
			var rejected: bool=not bool(demo.candidate.get("valid",true)) and str(demo.candidate.get("reason","")).contains("支撑")
			await _capture("01_近景轻木花架与布篷")
			var before_click: Dictionary=demo.state.snapshot()
			await _motion(point);await _button(true);await _button(false);await _wait()
			_check(rejected and demo.state.snapshot()==before_click and demo.town.house_roots.h1.get_meta("terrace_canopy",{})==row,"actual cloth build click obeys original room-support rule and rejects unsupported upper room without writing State")
			await _key(KEY_4);await _motion(point);await _button(true);await _button(false);await _wait()
			_check(demo.town.house_roots.h1.get_meta("terrace_canopy",{}).is_empty() and demo._find_cell("h1",str(row.cell_id)).is_empty(),"actual Tool4 cloth click removes original terrace cell and its derived canopy")
			await _key(KEY_Z,true);await _wait()
			_check(demo.town.house_roots.h1.get_meta("terrace_canopy",{})==row,"real Ctrl-Z restores the original terrace canopy choice")
	if FileAccess.file_exists(EXAMPLE):
		var bytes:=FileAccess.get_file_as_bytes(EXAMPLE)
		var restored: Dictionary=demo.state.restore(JSON.parse_string(bytes.get_string_from_utf8()))
		demo._after_edit(restored,"history");await _wait()
		_check(restored.ok,"new playable canopy sample loads through production State restore")
		demo.select_tool(0);demo.focus=Vector3(-3.5,1.2,-2);demo.zoom=29;demo.pitch=0.8;demo._update_camera();demo.ui_layer.visible=false
		await _capture("02_露台花架河湾样例全景")
		_check(FileAccess.get_file_as_bytes(EXAMPLE)==bytes,"new authored playable sample stays unchanged by viewing")
	var wall: Array[float]=[];var draws: Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000.0);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.performance={"frames":120,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draws_median":draws[60],"scope":"Life paused only; Music/GPU live; 180FPS VSync0 wall reference, not uncapped throughput or full economy."}
	_check(demo.state.life_progress==progress and [demo.state.bakery_supply,demo.state.workshop_supply,demo.state.venue_commissions]==inventory,"terrace edits and sample display invent no stock or completed activity")
	_check(_identity()==identities and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock,"actual canopy construction and picking preserve nine PCM identities thirteen Players and advancing clock")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city bytes remain untouched")
	facts.choice=row
	var report: Dictionary=_report("Actual production State terrace construction and Godot Window cloth pick; unsupported room build obeys unchanged State rule, Tool4 removes original terrace and CtrlZ restores it. Sample view and 120frame GL reference. No OS input or natural-business/completed-performance claim.")
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("TERRACE_CANOPY_LIVE ",JSON.stringify(report))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout;demo.queue_free();await process_frame;await create_timer(0.15).timeout;quit(0 if failures.is_empty() else 1)
