extends SceneTree
## Isolated real input, rendering, save and concert retirement evidence.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUTPUT := "res://验证记录/完整房屋移除_2026-10-14"
var failures: Array[String] = []
var checks := 0
var demo: Node3D

func _initialize() -> void:
	_run.call_deferred()

func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok:
		failures.append(label)
		push_error(label)

func _mouse(at: Vector2, shift: bool = false, click: bool = true) -> void:
	var motion := InputEventMouseMotion.new()
	motion.position = at
	motion.global_position = at
	motion.shift_pressed = shift
	root.push_input(motion)
	await process_frame
	await process_frame
	if not click: return
	for pressed in [true,false]:
		var event := InputEventMouseButton.new()
		event.button_index = MOUSE_BUTTON_LEFT
		event.position = at
		event.global_position = at
		event.pressed = pressed
		event.shift_pressed = shift
		root.push_input(event)
		await physics_frame
		await process_frame

func _key(code: int, ctrl: bool = false, shift: bool = false, target: Window = null) -> void:
	if target==null: target=root
	for pressed in [true,false]:
		var event := InputEventKey.new()
		event.keycode = code
		event.pressed = pressed
		event.ctrl_pressed = ctrl
		event.shift_pressed = shift
		target.push_input(event)
		await process_frame
	await physics_frame

func _world(at: Vector3, shift: bool = false, click: bool = true) -> void:
	await _mouse(demo.camera.unproject_position(at),shift,click)

func _mode(index: int) -> void:
	await _mouse(demo.removal_mode.get_global_rect().get_center())
	var popup: PopupMenu = demo.removal_mode.get_popup()
	_check(popup.visible,"actual OptionButton click opens removal mode menu")
	var menu_point := Vector2(popup.position)+Vector2(popup.size.x*0.5,popup.size.y*(index+0.5)/float(popup.get_item_count()))
	await _mouse(menu_point)
	_check(demo.removal_mode.selected==index and demo.remove_whole==(index==1),"actual menu mouse selection updates whole/single mode")
	demo.removal_mode.release_focus()

func _capture(label: String) -> void:
	demo.life_info.text = demo.life.summary()
	await process_frame
	await process_frame
	if DisplayServer.get_name()!="headless":
		root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")

func _advance(seconds: float) -> void:
	for ignored in range(ceili(seconds/0.1)): demo.life._process(0.1)

func _home_ids() -> Array[String]:
	var ids: Array[String] = []
	for resident: Dictionary in demo.life.residents: ids.append(str(resident.home_id))
	return ids

func _run() -> void:
	root.size = Vector2i(1440,900)
	root.gui_embed_subwindows = true
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	demo.life.set_process(false)
	await physics_frame
	await process_frame
	demo.focus = Vector3(-4,0,-1)
	demo.yaw = 0.0
	demo.pitch = 0.75
	demo.zoom = 22.0
	demo._update_camera()
	var deadline := Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.music.audio_report.is_empty(),"actual shared audio bank is ready")
	demo.life.set_process(true)
	demo.frame_samples.clear()
	for frame in range(540): await process_frame
	var initial_performance: Dictionary = demo.diagnostics()
	if DisplayServer.get_name()!="headless": print("PERFORMANCE_REFERENCE ",JSON.stringify({"measurement":initial_performance.frame_p95_ms,"policy":"reference_only"}))
	demo.life.set_process(false)
	# Inventory records represent actual production; ovens then stay paused to
	# isolate player edits from daily simulation in this interaction sequence.
	_check(demo.state.produce_bread("h2",2),"one real two-room batch seeds preserved supply")
	demo.state.set_bakery_open("h2",false)
	demo.life._sync()
	demo._refresh_ui()
	var original: Dictionary = demo.state.snapshot()
	var stock: Dictionary = demo.state.bakery_supply.duplicate(true)
	var stable_house: int = demo.town.house_roots.h1.get_instance_id()
	var stable_road: int = demo.town.road_roots.r1.get_instance_id()
	var water_ids: Array[int] = []
	for water: Node3D in demo.town.water_components.values(): water_ids.append(water.get_instance_id())
	await _mouse(demo.tool_buttons[3].get_global_rect().get_center())
	_check(demo.tool==3 and demo.removal_panel.visible,"actual toolbar click opens removal panel")
	await _mode(1)
	var bakery := Vector3(-2.4,1,-4.101)
	var revision: int = demo.state.revision
	await _world(bakery,false,false)
	_check(demo.candidate.get("house_id","")=="h2" and demo.candidate.get("whole",false),"physics pick previews the intended complete bakery")
	_check(demo.state.revision==revision and demo.state.houses==original.houses,"hover creates no edit or topology mutation")
	_check(demo.town.preview.get_meta("removal_cells",[]).size()==2 and demo.town.preview.get_child_count()>=10,"preview includes both affected rooms and outline geometry")
	_check("将移除" in demo.removal_info.text and "2个单元" in demo.removal_info.text,"preview describes pending scope rather than claiming an edit already happened")
	await _capture("whole_preview")
	await _world(bakery)
	_check(demo.town._house_record("h2").is_empty() and not demo.town.house_roots.has("h2"),"actual whole click removes bakery state and rendered building")
	_check(demo.state.revision==revision+1,"whole building removal is exactly one transaction")
	_check(not demo.town.preview.has_meta("removal_cells") and "指向房屋" in demo.removal_info.text,"removed target clears old highlighted IDs and stale pending action text")
	_check(demo.life.bakery.workers.is_empty(),"deleted workplace releases its real worker immediately")
	_check(demo.state.bakery_supply==stock,"deleted bakery preserves earned supply ledger")
	_check(demo.town.house_roots.h1.get_instance_id()==stable_house and demo.town.road_roots.r1.get_instance_id()==stable_road,"whole deletion retains unrelated house and road geometry")
	var current_water_ids: Array[int] = []
	for water: Node3D in demo.town.water_components.values(): current_water_ids.append(water.get_instance_id())
	_check(current_water_ids==water_ids,"house deletion does not rebuild unrelated water components")
	await _capture("whole_removed")
	await _key(KEY_Z,true)
	_check(demo.state.houses==original.houses and demo.state.bakery_supply==stock,"one real Ctrl+Z restores exact IDs, name, role, paused oven and geometry with current supply")
	await _capture("whole_undo")
	await _key(KEY_Z,true,true)
	_check(demo.town._house_record("h2").is_empty(),"real Ctrl+Shift+Z repeats the same complete removal")
	await _key(KEY_Z,true)
	await _mode(0)
	await _world(bakery,false,false)
	_check(demo.candidate.get("removal",{}).get("removed_count",0)==2 and demo.candidate.removal.whole_house,"single lower room previews its supported upper room and final whole-house outcome")
	await _capture("support_preview")
	await _world(bakery)
	_check(demo.town._house_record("h2").is_empty(),"single base click actually retires the complete support cascade")
	await _key(KEY_Z,true)
	await _world(bakery,true,false)
	_check(demo.candidate.get("whole",false) and not demo.remove_whole,"Shift hover temporarily requests whole removal while retaining single preference")
	await _world(bakery,true)
	_check(demo.town._house_record("h2").is_empty(),"Shift click actually removes the whole house")
	await _key(KEY_Z,true)
	await _world(bakery,false,false)
	_check(not demo.candidate.get("whole",true),"released Shift restores ordinary single preview")
	# Active shared activity must stop visually and audibly in the same edit.
	_check(demo.life.invite_concert("h4").ok,"real reachable neighbors can be invited")
	for step in range(1500):
		if demo.life.concert_status().phase=="playing": break
		demo.life._process(0.1)
	_check(demo.life.concert_status().phase=="playing","neighbors actually reach the venue before playing")
	demo._refresh_concert()
	await _capture("concert_before_removal")
	var concerts: int = demo.state.life_progress.concerts
	await _world(Vector3(-2.4,1,1.899),true)
	_check(demo.town._house_record("h4").is_empty() and demo.life.concert_status().phase=="idle","actual venue deletion immediately cancels the active concert")
	_check(demo.state.life_progress.concerts==concerts and not demo.music.concert_active,"cancelled concert earns no completion and drops its actual audio layer")
	_check(demo.town.concert_layer.get_child_count()==0,"deleted venue retains no visible stage activity")
	await _capture("concert_cancelled")
	await _key(KEY_Z,true)
	_check(not demo.town._house_record("h4").is_empty() and demo.life.concert_status().phase=="idle","undo restores venue geometry without resurrecting cancelled activity")
	# One-room residential deletion also removes its people, even on the far bank.
	demo.focus = Vector3(4,0,2)
	demo.zoom = 32.0
	demo._update_camera()
	await _world(Vector3(9,1,3.899))
	_check(demo.town._house_record("h6").is_empty() and "h6" not in _home_ids(),"last cell click removes the right-bank house and its resident")
	demo._capture_journeys()
	var saved := "user://whole_house_review_%d.json" % Time.get_ticks_usec()
	_check(demo.state.save_city(saved).ok,"removed-town checkpoint saves independently of personal work")
	var loaded := State.new()
	_check(loaded.load_city(saved).ok and loaded.houses==demo.state.houses and loaded.bakery_supply==demo.state.bakery_supply,"saved surviving houses and dormant supply round trip exactly")
	await _capture("last_house_cell_removed")
	await _key(KEY_Z,true)
	# Full clearing uses public transactions; subsequent placement is real input.
	var houses: Array = demo.state.houses.duplicate(true)
	var closing_supply: Dictionary = demo.state.bakery_supply.duplicate(true)
	for house: Dictionary in houses: demo._after_edit(demo.state.remove_house(str(house.id)),"erase")
	_check(demo.state.houses.is_empty() and demo.town.house_roots.is_empty() and demo.life.residents.is_empty() and demo.life.bakery.workers.is_empty(),"empty town has no ghost buildings, ordinary residents or bakers")
	_check(demo.state.roads==original.roads and demo.state.plants==original.plants and demo.state.bakery_supply==closing_supply,"clearing buildings preserves roads, gardens and accrued supply")
	_check(not demo.music.daily_source().get("audible",false),"empty town clears its real house music source")
	demo.home_camera()
	await _capture("empty_town")
	await _mouse(demo.tool_buttons[0].get_global_rect().get_center())
	await _world(Vector3(-8,0,0))
	_check(demo.state.houses.size()==1 and demo.state.houses[0].id=="h7" and demo.life.residents.size()==1,"real ground click rebuilds the emptied city with a fresh stable ID and living resident")
	demo.focus=Vector3(-8,0.7,0)
	demo.zoom=14.0
	demo._update_camera()
	await _mouse(demo.tool_buttons[0].get_global_rect().get_center(),false,false)
	await _capture("rebuild_after_empty")
	demo.life.set_process(true)
	demo.frame_samples.clear()
	for frame in range(540): await process_frame
	var performance: Dictionary = demo.diagnostics()
	if DisplayServer.get_name()!="headless": print("PERFORMANCE_REFERENCE ",JSON.stringify({"measurement":performance.frame_p95_ms,"policy":"reference_only"}))
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"actual_input":true,"embedded_popup":true,"real_display":DisplayServer.get_name(),"isolated_save":saved,"initial_performance":initial_performance,"performance":performance}
	var file := FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("CREATION_HOUSE_REMOVAL ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"display":report.real_display,"p95_ms":performance.frame_p95_ms,"edit_ms":performance.edit_rebuild_ms}))
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
