extends SceneTree
## Actual style UI, unchanged authored architecture/collision, latest-only rebuild.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT := "res://验证记录/木构与石屋_2026-10-16"
const EXAMPLE := "res://数据/建筑街景样例.json"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {}
var personal := PackedByteArray()
var sample_bytes := PackedByteArray()
var identities: Array = []
var clock_start := 0.0

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _key(code: int,ctrl: bool=false,target: Window=null) -> void:
	for down: bool in [true,false]:
		var event := InputEventKey.new();event.keycode=code;event.pressed=down;event.ctrl_pressed=ctrl
		if target!=null: event.window_id=target.get_window_id();Input.parse_input_event(event)
		else: root.push_input(event)
		await process_frame
func _click(at: Vector2) -> void:
	var motion := InputEventMouseMotion.new();motion.position=at;motion.global_position=at
	root.push_input(motion);await process_frame
	for down: bool in [true,false]:
		var event := InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down
		root.push_input(event);await process_frame
func _wait() -> void:
	var deadline := Time.get_ticks_msec()+15000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending and not demo.gallery.busy,"latest real geometry and following UI publication finish")
	await physics_frame;await process_frame
func _house(id: String) -> Dictionary:
	for row: Dictionary in demo.state.houses:
		if str(row.id)==id: return row
	return {}
func _identity() -> Array:
	var rows: Array = []
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[key]
		var data: PackedByteArray = player.stream.data
		var digest := HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(data)
		rows.append([key,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player: AudioStreamPlayer in demo.music._effects: rows.append(player.get_instance_id())
	return rows
func _collisions() -> String:
	var records := PackedStringArray()
	for root_node: Node3D in demo.town.house_roots.values():
		for collision: CollisionShape3D in root_node.find_children("*","CollisionShape3D",true,false):
			var body: StaticBody3D = collision.get_parent()
			var shape: Shape3D = collision.shape
			var data: Variant = shape.size if shape is BoxShape3D else (shape.get_faces() if shape is ConcavePolygonShape3D else shape.get_debug_mesh().get_faces())
			records.append(var_to_bytes([collision.global_transform,shape.get_class(),data,body.collision_layer,body.get_meta("house_id",""),body.get_meta("cell_id","")]).hex_encode())
	records.sort();return (";".join(records)).sha256_text()
func _topology() -> Dictionary:
	var rows := {}
	for id: String in demo.town.house_roots:
		var root_node: Node3D = demo.town.house_roots[id]
		rows[id]=[demo.town.building_context.signature(id).duplicate(true),root_node.get_meta("roof_patches",[]).duplicate(true),root_node.get_meta("joined_roof",false),root_node.get_meta("passages",[]).duplicate(true)]
	return rows
func _authored_without_style() -> Array:
	var rows: Array = demo.state.houses.duplicate(true)
	for row: Dictionary in rows: row.erase("style")
	return rows
func _style_report(id: String) -> Dictionary:
	var root_node: Node3D = demo.town.house_roots[id]
	var tagged := 0
	var complete := 0
	var arches := 0
	var details := 0
	var decorated_arches := 0
	var door_clear := true
	var textures := 0
	var metadata: Array = []
	for mesh: MeshInstance3D in root_node.find_children("*","MeshInstance3D",true,false):
		var material := mesh.material_override as StandardMaterial3D
		if material!=null and material.albedo_texture!=null and material.albedo_texture.resource_path=="res://资源/建筑参考/石砌街屋.png": textures+=1
	for node: Node in root_node.find_children("*","Node3D",true,false):
		if not node.has_meta("house_style"): continue
		tagged+=1
		var row := {"name":str(node.name),"style":node.get_meta("house_style")}
		for key: StringName in node.get_meta_list(): row[str(key)]=node.get_meta(key)
		metadata.append(row)
		var parts: Array = node.get_meta("style_details",[])
		details+=parts.size()
		if str(node.name).begins_with("Passage_"):
			arches+=1
			if not parts.is_empty(): decorated_arches+=1
		else: complete+=1
		if node.has_meta("entrance"):
			for part: Dictionary in parts:
				var at: Vector3 = part.at
				var size: Vector3 = part.size
				var angle: float = part.rotation_z
				var half_x := (absf(cos(angle))*size.x+absf(sin(angle))*size.y)*0.5
				var half_y := (absf(sin(angle))*size.x+absf(cos(angle))*size.y)*0.5
				if at.x+half_x> -0.3599 and at.x-half_x<0.3599 and at.y+half_y>0.35 and at.y-half_y<1.35: door_clear=false
	return {"house_style":root_node.get_meta("house_style",""),"tagged_walls":tagged,"complete_walls":complete,"passage_walls":arches,"style_detail_pieces":details,"decorated_arches":decorated_arches,"door_clear":door_clear,"textured_stone_meshes":textures,"wall_metadata":metadata,"batching":root_node.get_meta("material_batching",{})}
func _choose(index: int) -> bool:
	var picker: OptionButton = demo.house_style_picker
	var scroll: ScrollContainer = demo.place_panel.find_child("PlaceScroll",true,false)
	scroll.ensure_control_visible(picker);await process_frame
	await _click(picker.get_global_rect().get_center())
	var popup: PopupMenu = picker.get_popup()
	if not popup.visible: _check(false,"actual HouseStyle popup opens");return false
	if popup.get_focused_item()<0: await _key(KEY_DOWN,false,popup)
	for ignored in range(popup.get_focused_item()): await _key(KEY_UP,false,popup)
	for ignored in range(index): await _key(KEY_DOWN,false,popup)
	await _key(KEY_ENTER,false,popup);picker.release_focus();await _wait()
	return picker.selected==index
func _wall_hits() -> Array:
	var entries: Array = demo.state.house_entrances("h1")
	var result: Array = []
	if entries.is_empty(): return result
	var entry: Dictionary = entries[0]
	var side := Vector2(entry.side)
	for height: float in [0.85,1.35]:
		var a: Vector2 = entry.wall_at+side*2.0
		var b: Vector2 = entry.wall_at-side*0.20
		var hit: Dictionary = demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(a.x,height,a.y),Vector3(b.x,height,b.y),1))
		result.append({"height":height,"house":str(hit.collider.get_meta("house_id","")) if not hit.is_empty() else "","at":hit.get("position",Vector3.INF)})
	return result
func _arch_clear() -> bool:
	var passages: Array = demo.state.house_passages("h7")
	if passages.is_empty(): return false
	for passage: Dictionary in passages:
		var axis := Vector2(passage.axis)
		var center: Vector2 = passage.center
		center+=Vector2(0,float(passage.offset)) if axis.x!=0.0 else Vector2(float(passage.offset),0)
		var a := center-axis*1.2
		var b := center+axis*1.2
		var hit: Dictionary = demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(a.x,0.70,a.y),Vector3(b.x,0.70,b.y),1))
		if not hit.is_empty(): return false
	return true
func _capture(label: String) -> void:
	demo.town.clear_preview();await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual GPU screenshot saved: "+label)

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false)
	var deadline := Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL scene and production PCM bank load")
	if demo.music.audio_report.is_empty(): await _finish();return
	identities=_identity();clock_start=demo.music._playback_clock()
	sample_bytes=FileAccess.get_file_as_bytes(EXAMPLE)
	var restored: Dictionary = demo.state.restore(JSON.parse_string(sample_bytes.get_string_from_utf8()))
	_check(restored.ok,"authored seven-house style example restores through strict State API")
	if not restored.ok: await _finish();return
	demo._after_edit(restored,"history");await _wait()
	demo._after_edit(demo.state.set_house_style("h1","classic"),"terrace");await _wait()
	var authored := _authored_without_style()
	var topology := _topology()
	var collision := _collisions()
	var walls := _wall_hits()
	_check(walls.size()==2 and walls[0].house=="h1" and walls[1].house=="h1" and _arch_clear(),"actual door/window-height wall rays hit original house while genuine h7 street arches stay hollow")
	demo.focus=Vector3(-6,0.8,-4.8);demo.zoom=17;demo.yaw=0.62;demo.pitch=0.88;demo._update_camera()
	await _key(KEY_5)
	await _click(demo.camera.unproject_position(Vector3(-8,1.9,-6)))
	_check(demo.tool==4 and demo.selected_house=="h1" and demo.place_panel.visible and demo.house_style_picker.item_count==3,"actual key five and viewport house pick expose three-option HouseStyle control")
	if demo.selected_house!="h1": await _finish();return
	_check(await _choose(1) and _house("h1").style=="timber" and demo.town.house_roots.h1.get_meta("house_style")=="timber","actual popup selects timber and publishes correct renderer style")
	_check(_collisions()==collision and _wall_hits()==walls and _topology()==topology,"timber visual walls preserve door/window picking collision and shared-wall joined-roof topology")
	facts.timber=_style_report("h1")
	_check(facts.timber.complete_walls>0 and facts.timber.style_detail_pieces>0 and facts.timber.door_clear,"actual timber wall metadata carries new modelled details outside doorway clear zone")
	await _capture("01_真实木构街景与样式菜单")
	_check(await _choose(2) and _house("h1").style=="stone" and demo.town.house_roots.h1.get_meta("house_style")=="stone","actual popup selects stone and publishes correct renderer style")
	_check(_collisions()==collision and _wall_hits()==walls and _topology()==topology and _authored_without_style()==authored,"stone changes no authored identity cells palette finish role district or architectural/collision topology")
	facts.stone=_style_report("h1")
	_check(facts.stone.style_detail_pieces>0 and facts.stone.textured_stone_meshes>0 and facts.stone.door_clear,"actual stone wall uses shared real masonry texture and modelled details without covering doorway")
	await _capture("02_真实石屋街景与样式菜单")
	await _key(KEY_Z,true);await _wait()
	_check(_house("h1").style=="timber" and demo.town.house_roots.h1.get_meta("house_style")=="timber","actual Ctrl+Z restores preceding timber appearance")
	await _key(KEY_Y,true);await _wait()
	demo._after_edit(demo.state.set_house_style("h7","stone"),"terrace");await _wait()
	_check(_arch_clear() and _collisions()==collision and _topology()==topology,"real stone courtyard style preserves original street opening and collision without decorative blockage")
	facts.stone_arches=_style_report("h7")
	_check(facts.stone_arches.passage_walls>0 and facts.stone_arches.decorated_arches==0 and facts.stone_arches.textured_stone_meshes>0,"actual stone arch walls keep true textured surface and omit added style decorations")
	var points: Array[Vector2] = []
	for index in range(13): points.append(Vector2(-15,-8+index))
	var road: Dictionary = demo.state.add_road(points)
	_check(road.ok,"real thirteen-point west street supplies natural production budget trigger")
	if road.ok: demo._after_edit(road,"road");await _wait()
	demo._after_edit(demo.state.set_house_style("h1","timber"),"terrace")
	var pending: bool = demo.edit_pending()
	var first_generation: int = demo.town.budget_rebuild.generation
	demo._after_edit(demo.state.set_house_style("h1","stone"),"terrace")
	var latest: int = demo.town.budget_rebuild.generation
	var stale := false
	deadline=Time.get_ticks_msec()+15000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:
		if demo.town.house_roots.h1.get_meta("house_style")!="stone": stale=true
		await process_frame
	await _wait()
	_check(pending and latest>first_generation and demo.town.budget_rebuild.committed_generation==latest and not stale and demo.town.house_roots.h1.get_meta("house_style")=="stone","real asynchronous consecutive style edits publish only latest stone generation")
	facts.budget={"first_generation":first_generation,"latest_generation":latest,"stale_visible":stale,"report":demo.edit_budget_report()}
	var saved: Dictionary = demo.state.snapshot()
	var loaded := State.new()
	_check(saved.schema==5 and loaded.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and loaded.houses==demo.state.houses,"strict schema-five JSON restores styles alongside original full house records")
	await demo.gallery.save_work("真实建筑样式")
	var work_id: String = demo.gallery.last_saved_id
	if not work_id.is_empty():
		demo._after_edit(demo.state.set_house_style("h1","timber"),"terrace");await _wait()
		await demo.gallery.open_work(work_id);await _wait()
	_check(not work_id.is_empty() and _house("h1").style=="stone" and demo.town.house_roots.h1.get_meta("house_style")=="stone","actual isolated collection restores saved stone appearance after changing it to timber")
	root.size=Vector2i(1024,768)
	for ignored in range(4): await process_frame
	demo.selected_house="h1";demo.select_tool(4)
	var scroll: ScrollContainer = demo.place_panel.find_child("PlaceScroll",true,false)
	scroll.ensure_control_visible(demo.house_style_picker);await process_frame;await process_frame
	var panel: Rect2 = demo.place_panel.get_global_rect()
	var picker: Rect2 = demo.house_style_picker.get_global_rect()
	var toolbar: Control = demo.ui_layer.get_child(0).find_child("Toolbar",true,false)
	_check(panel.position.x>=0 and panel.end.x<=1024 and panel.end.y<toolbar.get_global_rect().position.y and scroll.get_global_rect().encloses(picker),"1024 real scrollable place panel can reach HouseStyle picker above toolbar")
	facts.layout_1024={"panel":panel,"picker":picker,"scroll":scroll.get_global_rect()}
	root.size=Vector2i(1440,900);demo.life.set_process(true)
	var frames: Array[float] = []
	var previous := Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now := Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
	frames.sort()
	facts.performance={"frames":120,"wall_p95_ms":frames[114],"wall_max_ms":frames[-1],"draw_calls":Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME),"engine_max_fps":Engine.max_fps,"vsync":DisplayServer.window_get_vsync_mode(),"normal_life_music":demo.life.is_processing() and demo.music.is_processing()}
	_check(_identity()==identities and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock_start,"real style editing and restore retain thirteen players original nine PCM bytes and advancing music clock")
	await _finish()

func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continuing-city bytes remain untouched")
	if not sample_bytes.is_empty(): _check(FileAccess.get_file_as_bytes(EXAMPLE)==sample_bytes,"authored building-street example bytes remain untouched")
	var result := {"ok":failures.is_empty(),"checks":checks,"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"failures":failures,"facts":facts,"scope":"Actual GL, Window viewport house pick and popup/key input, visual styles with real collision/topology, latest-only production Budget edits, JSON and isolated Gallery restore, one 120-frame normal Life+Music sample. No OS input, full economy/concert or large-city claim.","command":"Godot_v4.7.2-stable_win64_console.exe --max-fps 180 --path . --script tools/check_creation_house_styles_live.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("CREATION_HOUSE_STYLES_LIVE ","PASS" if failures.is_empty() else "FAIL"," checks=",checks.size()," failures=",failures," performance=",facts.get("performance",{}))
	demo.life.set_process(false);demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
