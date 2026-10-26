extends RefCounted
const Scene = preload("res://scenes/city_creation.tscn")
const Fixture = preload("res://tools/fixtures/city_creation_chemistry_fixture.gd")
const State = preload("res://scripts/world/city_creation_state.gd")
static func wait_preview(tree:SceneTree,demo)->void:
	var deadline:=Time.get_ticks_msec()+12000
	while (not demo.chemistry_brush.pending.is_empty() or demo.chemistry_brush.planner.busy()) and Time.get_ticks_msec()<deadline:
		demo.chemistry_brush.tick(.02);await tree.create_timer(.02).timeout
	demo.chemistry_brush.tick(.02)
static func cancellation(tree:SceneTree,demo,checks:Array)->void:
	var data:=Fixture.building("arcade");demo.set_process(true);demo._after_edit(demo.state.restore(data.city.snapshot()),"history")
	while demo.edit_pending() or demo._edit_ui_pending:await tree.process_frame
	demo.life.set_process(false);demo.set_process(false);demo.get_meta("inspiration_draft").poll();demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display()
	for started:bool in [false,true]:
		demo.select_tool(0);demo.town.set_preview("h1",data.candidate.cell,true);demo.chemistry_brush.building(data.candidate)
		if started:demo.chemistry_brush.tick(.20)
		for down:bool in [true,false]:
			var event:=InputEventKey.new();event.keycode=KEY_3;event.pressed=down;tree.root.push_input(event);await tree.process_frame
		await wait_preview(tree,demo)
		checks.append({"ok":demo.tool==2 and not demo.town.preview.has_node("ChemistryGhost") and not demo.chemistry_brush.planner.busy(),"label":"native switch to road discards "+("running" if started else "queued")+" house ghost"})
	demo.select_tool(0);demo.town.set_preview("h1",data.candidate.cell,true);demo.chemistry_brush.building(data.candidate);demo.chemistry_brush.tick(.20);demo.town.clear_preview();await wait_preview(tree,demo)
	checks.append({"ok":not demo.town.preview.has_node("ChemistryGhost"),"label":"cleared ordinary preview cannot be resurrected by completed worker"})
static func run(tree: SceneTree, finish: bool = true, preferred_out: String = "") -> bool:
	var out := preferred_out if not preferred_out.is_empty() else "res://验证记录/M05/邻接预影"
	if preferred_out.is_empty():
		for arg: String in OS.get_cmdline_user_args():
			if arg.begins_with("--out-dir="): out = arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	tree.root.size = Vector2i(1440,900); Engine.max_fps = 120
	var demo = Scene.instantiate(); demo.persistence = false; demo.collection_directory = out+"/临时作品库"; tree.root.add_child(demo)
	var checks: Array = []; var cases: Array = []
	var deadline := Time.get_ticks_msec()+20000
	while demo.music._loading and Time.get_ticks_msec() < deadline: await tree.process_frame
	var identity := _voices(demo)
	for kind: String in ["courtyard","arcade","conservatory","skybridge","bridge","stairs"]:
		var data := Fixture.building(kind) if kind in ["courtyard","arcade","conservatory","skybridge"] else Fixture.road(kind)
		demo.set_process(true); demo.life.set_process(false)
		var loaded: Dictionary = demo.state.restore(data.city.snapshot())
		demo._after_edit(loaded,"history")
		deadline = Time.get_ticks_msec()+45000
		while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec() < deadline: await tree.process_frame
		demo.life.set_process(false); demo.set_process(false); demo.town.clear_preview()
		demo.get_meta("inspiration_draft").poll(); demo.get_meta("vignette_journey").poll()
		for i in range(3): await tree.process_frame
		demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display()
		checks.append({"ok":loaded.ok and not demo.edit_pending(),"label":kind+" real city publishes"})
		var before := var_to_bytes(demo.state.snapshot()); var undo: int = demo.state._undo.size()
		demo.tool = (1 if kind == "conservatory" else 0) if data.has("candidate") else 2
		demo.toast.hide(); demo.toast_time = 0.
		if data.has("candidate"): demo.chemistry_brush.building(data.candidate)
		else: demo.chemistry_brush.road(data.points,data.width,data.style,true)
		await wait_preview(tree,demo)
		var ghost: Node3D = demo.town.preview.get_node_or_null("ChemistryGhost")
		var rows: Array = demo.chemistry_brush.rows
		var chosen := {}
		for row: Dictionary in rows:
			if row.kind == kind: chosen = row; break
		checks.append({"ok":ghost != null and not chosen.is_empty() and ghost.get_meta("dash_count",0)>0,"label":kind+" actual lit dashed mesh and micro-seal"})
		if chosen.is_empty(): continue
		var at: Vector3 = chosen.at; demo.focus = at-Vector3.UP*.25; demo.zoom = 10. if kind not in ["bridge","courtyard"] else 17.
		demo.yaw = .6; demo.pitch = .73; demo._update_camera()
		if kind == "arcade":
			demo.house_module_mode = true
			var house: Dictionary = demo.state.houses[0]
			var world := Vector3(float(house.origin[0]),float(house.get("base_y",0.))+2.32,float(house.origin[1]))
			var event := InputEventMouseMotion.new(); event.position = demo.camera.unproject_position(world)
			tree.root.push_input(event); await tree.process_frame
			demo.pointer = event.position; demo.preview_key = ""; demo._update_hover()
			await wait_preview(tree,demo)
			checks.append({"ok":demo.candidate.has("cell") and demo.candidate.get("valid",false) and demo.town.preview.has_node("ChemistryGhost"),"label":"real roof mouse hover reaches production candidate and chemistry delegate"})
			demo.house_module_mode = false
		var started_cues: int = demo.chemistry_brush.cue_count
		demo.chemistry_brush.heard.clear(); demo.chemistry_brush.dwell = 0.
		for i in range(10): demo.chemistry_brush.tick(.08); await tree.create_timer(.08).timeout
		var cues: int = demo.chemistry_brush.cue_count-started_cues
		checks.append({"ok":cues>0 and cues<=rows.size(),"label":kind+" actual pooled harp overtone previews once after dwell"})
		for size: Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			tree.root.size = size
			while demo.light_phase != (0 if size.x == 1440 else 2): demo._toggle_light()
			await tree.process_frame; await tree.process_frame; await RenderingServer.frame_post_draw
			tree.root.get_texture().get_image().save_png(out+"/"+kind+"_"+str(size.x)+".png")
		var after: Dictionary = demo.state.snapshot()
		var baseline: Dictionary = bytes_to_var(before)
		var changed: Array = baseline.keys().filter(func(k):return after.get(k)!=baseline[k])
		if not changed.is_empty(): print("CHEMISTRY_STATE_DIFFERENCE ",kind," ",changed)
		checks.append({"ok":after==baseline and demo.state._undo.size()==undo,"label":kind+" hover/audio preserve complete state and history"})
		checks.append({"ok":_voices(demo)==identity,"label":kind+" retains fixed audio node identity"})
		cases.append({"kind":kind,"preview_ms":demo.chemistry_brush.prepare_ms,"cues":cues,"dashes":demo.town.preview.get_node("ChemistryGhost").get_meta("dash_count",0) if demo.town.preview.has_node("ChemistryGhost") else 0})
		demo.town.clear_preview(); demo.chemistry_brush.tick(1.1)
		checks.append({"ok":not demo.town.preview.has_node("ChemistryGhost") and demo.chemistry_brush.heard.is_empty(),"label":kind+" leaving clears ghost and permits a later visit"})
	await cancellation(tree,demo,checks)
	demo.tool=2;demo.chemistry_brush.road(Fixture.road("stairs").points,1.25,"path",true)
	demo.chemistry_brush.heard.clear(); demo.chemistry_brush.tick(.3)
	var skip_recording:bool="--no-recording" in OS.get_cmdline_user_args()
	var audio: Dictionary = {"deferred_by_user":true} if skip_recording else await preload("res://tools/fixtures/city_creation_audio_probe.gd").record(out+"/Master.wav")
	var frames: Array[float] = []; var last := Time.get_ticks_usec()
	for i in range(120):
		await tree.process_frame; var now := Time.get_ticks_usec(); frames.append(float(now-last)/1000.); last = now
	frames.sort()
	if not skip_recording:checks.append({"ok":audio.ok,"label":"real Master WAV is audible and unclipped"})
	checks.append({"ok":(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"label":"personal save unchanged"})
	var ok := checks.all(func(row: Dictionary) -> bool: return row.ok)
	var report := {"ok":ok,"checks":checks,"cases":cases,"audio":audio,"p95_ms":frames[114],"max_ms":frames[-1]}
	FileAccess.open(out+"/chemistry_live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("CHEMISTRY_LIVE ",JSON.stringify(report)); demo.queue_free(); await tree.process_frame
	if finish: tree.quit(0 if ok else 1)
	return ok
static func _voices(demo: Node) -> Array:
	var ids: Array = []
	for node: Node in demo.music.get_children(): ids.append(node.get_instance_id())
	return ids
