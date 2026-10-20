extends SceneTree
## Actual visible controls, physical production/delivery, persistent growth and frame cost.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Life = preload("res://scripts/world/city_creation_life.gd")
const OUTPUT := "res://验证记录/制琴工坊_2026-10-15/live"
var demo: Node3D
var checks := 0
var failures: Array[String] = []

func _initialize() -> void: _run.call_deferred()

func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok:
		failures.append(label)
		push_error(label)

func _capture(label: String) -> void:
	demo._refresh_workshops()
	demo.town.clear_preview()
	await process_frame
	await process_frame
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")

func _click(button: Control) -> void:
	var ancestor:Node=button.get_parent()
	while ancestor!=null:
		if ancestor is ScrollContainer:
			ancestor.ensure_control_visible(button)
			await process_frame
			break
		ancestor=ancestor.get_parent()
	var at := button.get_global_rect().get_center()
	_check(button.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(root.size)).has_point(at),"requested control is visible inside viewport: "+button.name)
	var motion := InputEventMouseMotion.new()
	motion.position=at
	motion.global_position=at
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event := InputEventMouseButton.new()
		event.button_index=MOUSE_BUTTON_LEFT
		event.position=at
		event.global_position=at
		event.pressed=pressed
		root.push_input(event)
		await process_frame

	await _await_edit()

func _await_edit()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await process_frame

func _to_phase(worker: Dictionary, phase: String) -> bool:
	for step in range(2500):
		if str(worker.phase)==phase: return true
		demo.life._process(0.1)
	return false

func _identities() -> Dictionary:
	var result := {}
	for id: String in demo.town.house_roots: result[id]=demo.town.house_roots[id].get_instance_id()
	for id: String in demo.town.road_roots: result[id]=demo.town.road_roots[id].get_instance_id()
	result.rigs={}
	var rigs: Dictionary=demo.town.resonance.diagnostics().houses
	for id: String in rigs:
		var row: Dictionary=rigs[id]
		result.rigs[id]=[row.rig_id,row.node_id,row.material_id,row.mesh_id,row.pivot_id,row.arc_id]
	return result

func _run() -> void:
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.selected_house="h3"
	demo.select_tool(4)
	demo.focus=Vector3(-7.0,0.7,0)
	demo.zoom=15
	demo.yaw=0.15
	demo.pitch=0.76
	demo._update_camera()
	await physics_frame
	await process_frame
	var started := Time.get_ticks_msec()
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()-started<20000: await process_frame
	_check(not demo.music.audio_report.is_empty(),"actual fixed audio bank ready")
	var baker: int=demo.life.bakery.workers[0].node.get_instance_id()
	await _click(demo.role_buttons.workshop)
	_check(str(demo.town._house_record("h3").role)=="workshop","real visible role button creates workshop")
	_check(demo.life.workshop.workers.size()==1,"real connected household supplies artisan")
	if demo.life.workshop.workers.is_empty():
		quit(1)
		return
	var worker: Dictionary=demo.life.workshop.workers[0]
	var worker_id: int=worker.node.get_instance_id()
	_check(demo.life.bakery.workers[0].node.get_instance_id()==baker and str(demo.life.bakery.workers[0].home_id)!=str(worker.home_id),"existing baker kept and household working member never double assigned")
	_check(int(demo.state.workshop_status("h3").produced)==0,"role conversion never invents stock")
	_check(_to_phase(worker,"crafting"),"artisan physically reaches real workshop")
	demo.life._process(3.0)
	var elapsed: float=worker.elapsed
	await _click(demo.workshop_button)
	_check(not demo.state.workshop_status("h3").open,"visible pause button stops making")
	demo.life._process(10.0)
	_check(float(worker.elapsed)==elapsed and int(demo.state.workshop_status("h3").produced)==0,"paused work retains progress without stock")
	await _capture("01_paused_workshop")
	await _click(demo.workshop_button)
	demo.life._process(5.0)
	_check(int(demo.state.workshop_status("h3").produced)==2 and int(demo.state.workshop_status("h3").stock)==2,"two real rooms produce first batch after exactly eight working seconds")
	demo._refresh_workshops()
	_check(demo.town.craft.stock_roots.h3.get_meta("displayed_items")==2,"actual rack shows only produced chimes")
	await _capture("02_first_chimes")
	_check(_to_phase(worker,"to_target") and worker.carry.visible,"physical reservation puts one chime into artisan hands")
	demo.life._process(0.3)
	var position: Vector3=worker.node.position
	var target := str(worker.target_id)
	demo._after_edit(demo.state.remove_road("r4"),"road")
	await _await_edit()
	_check(worker.phase=="paused" and worker.node.position==position and worker.carry.visible,"actual road break pauses real carrier without losing cargo or moving")
	for step in range(25): demo.life._process(0.1)
	_check(demo.state.improvement_level(target)==0 and int(demo.state.workshop_status("h3").delivered)==0,"disconnected cargo cannot install remotely")
	demo._capture_journeys()
	var saved := "user://workshop_review_%d.json" % Time.get_ticks_usec()
	_check(demo.state.save_city(saved).ok,"paused physical shipment saves")
	var loaded := State.new()
	_check(loaded.load_city(saved).ok,"paused physical shipment JSON validates")
	var restored := Life.new()
	root.add_child(restored)
	restored.set_process(false)
	restored.setup(loaded)
	_check(restored.workshop.workers.size()==1 and restored.workshop.workers[0].node.position==position and restored.workshop.workers[0].carry.visible,"reload restores exact carrier position and cargo")
	restored.free()
	demo._after_edit(demo.state.undo(),"history")
	await _await_edit()
	_check(worker.node.get_instance_id()==worker_id and worker.node.position==position and worker.phase=="to_target","undo road break resumes same real carrier")
	var stable := _identities()
	await _capture("03_delivery_on_path")
	_check(_to_phase(worker,"installing"),"carried chime actually arrives before installation")
	demo.life._process(1.9)
	_check(demo.state.improvement_level(target)==0,"installation requires complete real dwell")
	demo.life._process(0.1)
	_check(demo.state.improvement_level(target)==1 and int(demo.state.workshop_status("h3").delivered)==1,"completed on-site installation earns first permanent tier")
	_check(not worker.carry.visible and demo.town.craft.roots.has(target),"installed physical item leaves hands and appears on actual neighbor")
	_check(_identities()==stable,"delivery retains all structural house, road and music rig objects")
	demo.focus=Vector3(-7.1,0.7,-6)
	demo.zoom=9
	demo.yaw=0.5
	demo._update_camera()
	demo.ui_layer.visible=false
	var captured := {}
	var max_tick_us := 0
	for step in range(24000):
		var before := Time.get_ticks_usec()
		demo.life._process(0.1)
		max_tick_us=maxi(max_tick_us,Time.get_ticks_usec()-before)
		var level: int=demo.state.improvement_level("h1")
		if level>0 and not captured.has(level):
			captured[level]=true
			await _capture("04_neighbor_tier%d" % level)
		if int(demo.state.workshop_status("h3").delivered)>=9: break
	_check(captured.size()==3,"real repeated deliveries visibly earn all three neighbor tiers")
	_check(demo.state.improvement_level("h1")==3 and demo.state.improvement_level("h4")==3 and demo.state.improvement_level("h5")==3,"all three reachable recipients earn three actual installations")
	_check(demo.state.improvement_level("h6")==0,"disconnected right-bank home receives no fake upgrade")
	_check(_identities()==stable,"nine deliveries preserve entire structural city and existing resonance rigs")
	var builds: int=demo.town.craft.build_count
	for step in range(20): demo._refresh_workshops()
	_check(demo.town.craft.build_count==builds,"unchanged UI refreshes do not rebuild earned ornaments")
	demo._capture_journeys()
	_check(demo.state.save_city(saved).ok,"earned tiers and current jobs save together")
	_check(loaded.load_city(saved).ok and loaded.house_improvements==demo.state.house_improvements and loaded.workshop_supply==demo.state.workshop_supply,"earned tiers and conserved ledgers survive actual JSON")
	demo.ui_layer.visible=true
	demo.home_camera()
	demo._refresh_place()
	demo.life.set_process(true)
	demo.frame_samples.clear()
	for frame in range(540): await process_frame
	var report: Dictionary=demo.diagnostics()
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"measurement":report.frame_p95_ms,"policy":"reference_only"}))
	_check(demo.music._players.size()==demo.music.STEMS.size() and demo.music._effects.size()==4,"growth preserves fixed shared music voices and four short effects")
	await _capture("05_grown_neighborhood")
	var result := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"performance":report,"supply":demo.life.workshop_status("h3"),"improvements":demo.state.house_improvements,"craft":demo.town.craft.diagnostics(),"max_simulated_tick_us":max_tick_us,"save":saved}
	var file := FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(result,"\t",true,true))
	file.close()
	print("CREATION_WORKSHOP ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"fps":report.fps,"p95_ms":report.frame_p95_ms,"delivered":result.supply.delivered,"improvements":result.improvements,"max_simulated_tick_us":max_tick_us}))
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
