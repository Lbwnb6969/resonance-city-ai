extends SceneTree
## Real GL/UI and first-chapter Life settlement. Keyboard injection uses
## Godot Window dispatch, not OS input; the 24-second concert is not accelerated.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUT := "res://验证记录/河湾手记_2026-10-16"
var demo: Node3D
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {}
var personal := PackedByteArray()
var identities: Array = []

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok:
		failures.append(label)
		push_error(label)
func _mouse(at: Vector2) -> void:
	var motion := InputEventMouseMotion.new()
	motion.position=at;motion.global_position=at
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event := InputEventMouseButton.new()
		event.position=at;event.global_position=at
		event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed
		root.push_input(event)
		await process_frame
func _key(code: int,ctrl: bool=false,target: Window=null) -> void:
	for pressed: bool in [true,false]:
		var event := InputEventKey.new()
		event.keycode=code;event.pressed=pressed;event.ctrl_pressed=ctrl
		if target!=null:
			event.window_id=target.get_window_id()
			Input.parse_input_event(event)
		else: root.push_input(event)
		await process_frame
func _wait() -> void:
	var deadline := Time.get_ticks_msec()+15000
	while (demo.edit_pending() or demo.gallery.busy) and Time.get_ticks_msec()<deadline: await process_frame
	await process_frame
	_check(not demo.edit_pending() and not demo.gallery.busy,"latest edit/collection transaction completes")
func _capture(label: String) -> void:
	await process_frame
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func _identity() -> Array:
	var result: Array = []
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[key]
		result.append([key,player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	var keys: Array = demo.music._edit_streams.keys()
	keys.sort()
	for key: String in keys: result.append([key,demo.music._edit_streams[key].get_instance_id()])
	return result
func _geometry() -> Dictionary:
	var shapes: Array = []
	var house: Node3D = demo.town.house_roots.h1
	for collision: CollisionShape3D in house.find_children("*","CollisionShape3D",true,false):
		var shape: Shape3D = collision.shape
		var data: Variant = shape.get_faces() if shape is ConcavePolygonShape3D else shape.get("size")
		shapes.append([collision.global_transform,shape.get_class(),data])
	return {"cells":demo.state.houses[0].cells.duplicate(true),"collision_shapes":shapes}
func _colors() -> Array:
	var unique := {}
	for mesh: MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		if mesh.material_override is StandardMaterial3D: unique[mesh.material_override.albedo_color.to_html()] = true
		for surface in range(mesh.mesh.get_surface_count()):
			var arrays: Array = mesh.mesh.surface_get_arrays(surface)
			var colors: Variant = arrays[Mesh.ARRAY_COLOR]
			if colors!=null:
				for color: Color in colors: unique[color.to_html()] = true
	var result: Array = unique.keys()
	result.sort()
	return result
func _choose(index: int) -> bool:
	demo.journal.refresh_palette()
	await _mouse(demo.journal.picker.get_global_rect().get_center())
	var popup: PopupMenu = demo.journal.picker.get_popup()
	_check(popup.visible,"actual finish OptionButton opens")
	if not popup.visible: return false
	if popup.get_focused_item()<0: await _key(KEY_DOWN,false,popup)
	for ignored in range(popup.get_focused_item()): await _key(KEY_UP,false,popup)
	for ignored in range(index): await _key(KEY_DOWN,false,popup)
	await _key(KEY_ENTER,false,popup)
	demo.journal.picker.release_focus()
	await _wait()
	var selected: bool = demo.journal.picker.selected==index
	_check(selected,"actual PopupMenu input selects finish index "+str(index))
	return selected
func _in_window(control: Control) -> bool:
	var rect := control.get_global_rect()
	return rect.position.x>=-0.5 and rect.position.y>=-0.5 and rect.end.x<=root.size.x+0.5 and rect.end.y<=root.size.y+0.5
func _bread() -> int:
	var total := 0
	for row: Dictionary in demo.state.bakery_supply.values(): total+=int(row.get("produced",0))
	return total
func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal active-city bytes remain unchanged")
	var result := {"ok":failures.is_empty(),"checks":checks,"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"failures":failures,"facts":facts,
		"scope":"Actual GL scene, Godot mouse/Window keyboard routing, modal journal and palette UI, real bakery worker/Life movement accelerated only before performance, actual audio-clock gate and complete unaccelerated 24-second first-chapter concert, immutable work save/restore. Chapters two and three are not exercised here. No fake activity ledger or ConcertView; not OS input or a sound-device recording."}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("CREATION_GROWTH_LIVE ",JSON.stringify(result))
	demo.life.set_process(false)
	demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900)
	demo=Scene.instantiate()
	demo.persistence=false
	demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo)
	demo.life.set_process(false)
	var deadline := Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.music.audio_report.is_empty() and DisplayServer.get_name()!="headless","actual GL scene and production PCM bank are ready")
	if demo.music.audio_report.is_empty():
		await _finish();return
	identities=_identity()
	_check(demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.state.growth_memories.is_empty(),"fixed fixed players start without invented chapter memories")
	demo.select_tool(0)
	await _mouse(demo.journal.button.get_global_rect().get_center())
	_check(demo.journal.panel.visible,"actual header button opens journal")
	var authored: Dictionary = demo.state.snapshot()
	await _mouse(demo.camera.unproject_position(Vector3(12,0,-9)))
	await _key(KEY_Z,true)
	_check(demo.journal.panel.visible and demo.state.snapshot()==authored,"modal journal blocks actual world click and undo input")
	await _capture("01_河湾手记")
	await _key(KEY_ESCAPE)
	_check(not demo.journal.panel.visible,"actual Escape closes journal")
	for index in range(3):
		await _key(KEY_J)
		await _mouse(demo.journal.goal_buttons[index].get_global_rect().get_center())
		var goal: Dictionary = demo.journal.rows[0].goals[index]
		_check(not demo.journal.panel.visible and demo.tool==int(goal.tool) and (str(goal.house_id).is_empty() or demo.selected_house==str(goal.house_id)),"actual first-chapter goal button navigates to its real tool/house: "+str(index))
	demo.selected_house="h1"
	demo.select_tool(4)
	demo.focus=Vector3(-8,0.7,-3);demo.zoom=18;demo._update_camera()
	await process_frame
	var geometry := _geometry()
	var original_colors := _colors()
	_check(demo.journal.picker.item_count==7 and demo.journal.picker.is_item_disabled(4),"four free palettes are available and three chapter finishes begin locked")
	for index in range(4):
		if not await _choose(index):
			await _finish();return
		_check(demo.state.houses[0].palette==index and _geometry()==geometry and demo.town.house_roots.h1.get_meta("palette_colors")==demo.TownRenderer.PALETTES[index],"free palette changes actual renderer color while preserving cells/collision: "+str(index))
	_check(_colors()!=original_colors,"actual merged mesh COLOR/albedo values change with free palette")
	await _capture("02_免费四色")
	await _key(KEY_Z,true);await _wait()
	_check(demo.state.houses[0].palette==2 and _geometry()==geometry,"actual Ctrl+Z restores previous free palette without changing geometry")
	await _key(KEY_Y,true);await _wait()
	_check(demo.state.houses[0].palette==3,"actual redo restores chosen free palette")
	var example: Dictionary = JSON.parse_string(FileAccess.get_file_as_string("res://数据/创作河湾样例.json"))
	var bridge_points: Array[Vector2] = []
	for road: Dictionary in example.roads:
		if str(road.id)=="r7":
			for point: Array in road.points: bridge_points.append(Vector2(float(point[0]),float(point[1])))
	var road_result: Dictionary = demo.state.add_road(bridge_points)
	_check(bool(road_result.ok) and bool(demo.state.roads[-1].bridge),"real sample r7 stroke builds a validated bridge through State API")
	demo._after_edit(road_result,"road")
	await _wait()
	var bake_phases := {}
	for tick in range(1600):
		if _bread()>0: break
		demo.life._process(0.1)
		for worker: Dictionary in demo.life.bakery.workers: bake_phases[str(worker.phase)]=true
	_check(_bread()>0 and bake_phases.has("walking") and bake_phases.has("baking"),"actual connected baker walks to oven and produces conserved bread")
	facts.bakery={"produced":_bread(),"observed_phases":bake_phases,"status":demo.life.bakery_status("h2")}
	demo.journal.refresh()
	_check(demo.state.growth_memories.is_empty(),"bridge and real bread alone do not award first chapter")
	demo.selected_house="h4";demo.select_tool(4)
	await process_frame
	await _mouse(demo.concert_button.get_global_rect().get_center())
	_check(str(demo.life.concert_status().phase)=="gathering","actual invite button starts real gathering")
	await _mouse(demo.concert_button.get_global_rect().get_center())
	demo.journal.refresh()
	_check(str(demo.life.concert_status().phase)=="idle" and demo.state.life_progress.concerts==0 and demo.state.growth_memories.is_empty(),"actual cancellation settles no concert and grants no finish")
	await _mouse(demo.concert_button.get_global_rect().get_center())
	for tick in range(4000):
		var status: Dictionary = demo.life.concert_status()
		if int(status.arrived)==int(status.invited) and int(status.invited)>0: break
		demo.life._process(0.1)
	var gathered: Dictionary = demo.life.concert_status()
	_check(int(gathered.invited)>0 and int(gathered.arrived)==int(gathered.invited),"all real invited residents reach venue before device-clock gate")
	demo.life.set_process(true)
	deadline=Time.get_ticks_msec()+8000
	while str(demo.life.concert_status().phase)!="playing" and Time.get_ticks_msec()<deadline: await process_frame
	_check(str(demo.life.concert_status().phase)=="playing","actual device-aligned gate starts full performance")
	if str(demo.life.concert_status().phase)!="playing":
		await _finish();return
	var start := Time.get_ticks_usec()
	var clock_start: float = demo.music._playback_clock()
	var start_elapsed: float = demo.life.concert_status().elapsed
	var captured := false
	var premature := false
	var phases := {}
	deadline=Time.get_ticks_msec()+28500
	while str(demo.life.concert_status().phase)=="playing" and Time.get_ticks_msec()<deadline:
		var elapsed: float = demo.life.concert_status().elapsed
		if elapsed<23.9 and demo.state.growth_memories.has("dawn"): premature=true
		var source: Dictionary = demo.music.active_source()
		if bool(source.get("audible",false)): phases[str(source.get("role",""))]=true
		if elapsed>9.0 and not captured:
			await _capture("03_真实街坊演出");captured=true
		await process_frame
	var wall_ms := float(Time.get_ticks_usec()-start)/1000.0
	demo.life.set_process(false)
	demo.journal.refresh()
	_check(not premature and demo.state.life_progress.concerts==1 and str(demo.life.concert_status().phase)=="idle" and wall_ms>=23800.0-start_elapsed*1000.0,"one complete unaccelerated 24-second concert awards only at actual completion")
	_check(phases.has("lead") and phases.has("answer") and phases.has("finale"),"actual shared PCM source traverses lead, neighborhood answer and finale")
	_check(demo.state.growth_memories==["dawn"] and bool(demo.journal.rows[0].earned) and not bool(demo.journal.rows[1].earned),"journal records only first chapter from real bridge, bread and completed concert")
	facts.concert={"gathered":gathered,"wall_ms":wall_ms,"start_elapsed":start_elapsed,"clock_start":clock_start,"clock_end":demo.music._playback_clock(),"audible_roles":phases}
	await _key(KEY_J)
	await _capture("04_晨光已收录")
	await _key(KEY_ESCAPE)
	demo.selected_house="h1";demo.select_tool(4)
	await process_frame
	var free_colors := _colors()
	_check(not demo.journal.picker.is_item_disabled(4) and demo.journal.picker.is_item_disabled(5),"earned dawn unlocks its actual option while later chapters remain locked")
	if not await _choose(4):
		await _finish();return
	_check(demo.state.houses[0].get("finish","")=="dawn" and _geometry()==geometry and _colors()!=free_colors and demo.town.house_roots.h1.get_meta("palette_colors")==demo.TownRenderer.FINISH_PALETTES.dawn,"reward selection recolors actual mesh while retaining original geometry/collision")
	await _capture("05_晨杏与陶红")
	await _key(KEY_Z,true);await _wait()
	_check(not demo.state.houses[0].has("finish") and demo.state.growth_memories==["dawn"],"actual undo removes cosmetic finish and retains earned memory")
	await _key(KEY_Y,true);await _wait()
	_check(demo.state.houses[0].get("finish","")=="dawn","actual redo restores earned finish")
	var saved: Dictionary = demo.state.snapshot()
	var loaded := State.new()
	_check(saved.schema==3 and loaded.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and loaded.growth_memories==["dawn"] and loaded.houses==saved.houses,"actual schema-three JSON preserves reward, numeric palette, finish and house identities")
	root.size=Vector2i(1024,768)
	for frame in range(5): await process_frame
	_check(_in_window(demo.place_panel) and _in_window(demo.journal.picker),"1024x768 house-use panel and new finish picker remain inside viewport")
	await _capture("06_小窗口用途与饰色")
	await _key(KEY_J)
	var scroll: ScrollContainer = demo.journal.panel.find_child("Chapters",true,false)
	_check(scroll!=null and _in_window(scroll) and _in_window(demo.journal.close_button),"1024x768 journal uses an in-window scroll area and reachable close button")
	scroll.scroll_vertical=9999
	await process_frame
	_check(scroll.get_v_scroll_bar().max_value>scroll.get_v_scroll_bar().page,"journal later chapters are reachable by real ScrollContainer scrolling")
	await _capture("07_小窗口手记滚动")
	await _key(KEY_ESCAPE)
	root.size=Vector2i(1440,900)
	for frame in range(4): await process_frame
	await _mouse(demo.gallery_button.get_global_rect().get_center())
	demo.gallery.panel.title_input.text="晨光手记 · 实际演出奖励"
	await _mouse(demo.gallery.panel.save_button.get_global_rect().get_center())
	await _wait()
	var work: Dictionary = demo.gallery.library.read(demo.gallery.last_saved_id)
	_check(bool(work.ok) and work.world.schema==3 and work.world.growth_memories==["dawn"] and work.world.houses[0].finish=="dawn","actual collection save publishes full reward-bearing work")
	if bool(work.ok):
		await _mouse(demo.gallery.panel.close_button.get_global_rect().get_center())
		if not await _choose(0):
			await _finish();return
		await _mouse(demo.gallery_button.get_global_rect().get_center())
		await _mouse(demo.gallery.panel.open_buttons[str(work.id)].get_global_rect().get_center())
		await _wait()
		demo.life.set_process(false)
		_check(demo.gallery.last_opened_id==str(work.id) and demo.state.growth_memories==["dawn"] and demo.state.houses==work.world.houses and demo.town.house_roots.h1.get_meta("palette_colors")==demo.TownRenderer.FINISH_PALETTES.dawn,"actual saved-work card reconstructs earned finish and rendered palette")
	_check(_identity()==identities and demo.music.get_child_count()==demo.music.STEMS.size()+4,"all fixed players, shared loop streams and cached short PCM streams survive colors, chapter and work restoration")
	facts.chapter=demo.journal.rows[0]
	facts.collection_directory=demo.collection_directory
	await _finish()
