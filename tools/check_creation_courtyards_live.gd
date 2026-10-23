extends SceneTree
## Actual GL world and production routes/audio; no full concert or large-city claim.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const EXAMPLE := "res://数据/庭院河湾样例.json"
const OUT := "res://验证记录/自然庭院_2026-10-16"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {}
var personal := PackedByteArray()
var sample_bytes := PackedByteArray()
var audio_ids: Array = []
var original_ids: Array[String] = []
var plan: Dictionary = {}
var court_id := ""
var original_court_plants: Dictionary = {}
var added_court_plant_ids: Array[String] = []


func _initialize() -> void:
	if "--legacy-courtyard" in OS.get_cmdline_user_args(): _run.call_deferred()
	elif "--chemistry-only" in OS.get_cmdline_user_args(): preload("res://tools/fixtures/city_creation_chemistry_live_probe.gd").run.call_deferred(self)
	else: _civic.call_deferred()

func _civic() -> void:
	var script := preload("res://tools/check_creation_civic_live.gd").new()
	await script.run(self)


func _check(ok: bool,label: String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok:
		failures.append(label)
		push_error(label)


func _key(code: int,ctrl: bool=false) -> void:
	for pressed: bool in [true,false]:
		var event := InputEventKey.new()
		event.keycode=code;event.pressed=pressed;event.ctrl_pressed=ctrl
		root.push_input(event)
		await process_frame


func _wait() -> void:
	var deadline := Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending and not demo.gallery.busy,"latest geometry routes and following UI publication finish")
	await physics_frame
	await process_frame


func _capture(label: String) -> void:
	demo.town.clear_preview()
	await process_frame
	await RenderingServer.frame_post_draw
	var image := root.get_texture().get_image()
	_check(image.save_png(OUT+"/"+label+".png")==OK,"actual viewport screenshot saved: "+label)


func _identity() -> Array:
	var result: Array = []
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[key]
		result.append([key,player.get_instance_id(),player.stream.get_instance_id(),player.stream.data.size(),player.stream.data.hex_encode().sha256_text()])
	for player: AudioStreamPlayer in demo.music._effects: result.append([player.get_instance_id()])
	var keys: Array = demo.music._edit_streams.keys()
	keys.sort()
	for key: String in keys:
		var stream: AudioStreamWAV = demo.music._edit_streams[key]
		result.append([key,stream.get_instance_id(),stream.data.size(),stream.data.hex_encode().sha256_text()])
	return result


func _court() -> Node3D:
	return demo.town.courtyards.roots.get(court_id)


func _ray(at: Vector2,layer: int) -> Dictionary:
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,12,at.y),Vector3(at.x,-5,at.y),layer))


func _terrain_digest() -> String:
	return var_to_bytes(demo.state._ground_terrain.vertices).hex_encode().sha256_text()


func _geometry_digest(court: Node3D) -> String:
	var pieces := PackedStringArray()
	for shape: CollisionShape3D in court.find_children("*","CollisionShape3D",true,false):
		pieces.append(var_to_bytes([shape.global_transform,shape.shape.get_faces()]).hex_encode())
	pieces.sort()
	return (";".join(pieces)).sha256_text()


func _grass(tiles: Array) -> Dictionary:
	var lawn_inside := 0
	var grass_inside := 0
	var lawn_total := 0
	for block: Node3D in demo.town.meadow.blocks.values():
		for batch: Node in block.get_children():
			if not batch is MultiMeshInstance3D or str(batch.name) not in ["Meadow_lawn","Meadow_grass"]: continue
			for index in range(batch.multimesh.instance_count):
				var position: Vector3 = batch.global_transform*batch.multimesh.get_instance_transform(index).origin
				if str(batch.name)=="Meadow_lawn": lawn_total+=1
				for tile: Rect2 in tiles:
					if not tile.grow(-0.01).has_point(Vector2(position.x,position.z)): continue
					if str(batch.name)=="Meadow_lawn": lawn_inside+=1
					else: grass_inside+=1
					break
	return {"lawn_inside":lawn_inside,"grass_inside":grass_inside,"lawn_total":lawn_total}


func _trees(tiles: Array) -> Dictionary:
	var ids: Array[String] = []
	var visible := 0
	var mesh_roots := 0
	var records := {}
	var visibility_matches := true
	for plant: Dictionary in demo.state.plants:
		var at := Vector2(float(plant.position[0]),float(plant.position[1]))
		var inside := false
		for tile: Rect2 in tiles:
			if tile.has_point(at): inside=true;break
		if not inside: continue
		ids.append(str(plant.id))
		var state_visible: bool = demo.state.vegetation_visible(plant)
		var renderer_visible: bool = bool(demo.town.vegetation_visibility.get(str(plant.id),false))
		if state_visible and renderer_visible: visible+=1
		var block := Vector2i(floori(at.x/8.0),floori(at.y/8.0))
		var node: Node3D = demo.town.vegetation_blocks.get(block)
		var found := false
		if node!=null:
			for batch: Node in node.get_children():
				if not batch is MultiMeshInstance3D: continue
				for index in range(batch.multimesh.instance_count):
					var position: Vector3 = batch.global_transform*batch.multimesh.get_instance_transform(index).origin
					if Vector2(position.x,position.z).distance_to(at)<0.001: found=true
		if found: mesh_roots+=1
		if state_visible!=renderer_visible or state_visible!=found: visibility_matches=false
		records[str(plant.id)]={"authored":plant.duplicate(true),"state_visible":state_visible,"renderer_visible":renderer_visible,"actual_batch_origin":found}
	return {"ids":ids,"visible":visible,"actual_batch_origins":mesh_roots,"visibility_matches_state":visibility_matches,"records":records}


func _plant_visible_shrub() -> void:
	# The two inherited example plants are already hidden by actual room/road
	# clearance. Preserve that truth; add a new legal planting through State.
	var before := _trees(plan.tiles)
	for id: String in before.records:
		original_court_plants[id]=before.records[id].duplicate(true)
	facts.planting={"original":original_court_plants,"scope":"The two inherited plant records are already hidden by room/road clearance; this fixture verifies retention and mask consistency, not visible courtyard planting."}



func _validate_court() -> void:
	var court := _court()
	_check(court!=null and court.is_visible_in_tree(),"one real visible courtyard root is installed")
	if court==null: return
	_check(court.get_meta("plan").tiles.size()==9 and court.get_meta("members")==["h7"] and court.get_meta("stone_count")>100,"root metadata carries actual nine tiles stable household membership and laid stones")
	_check(demo.town.courtyards.source_parts.size()==3,"actual imported fountain retains all three extracted source parts")
	var meshes: Array = court.find_children("*","MeshInstance3D",true,false)
	var shaders := 0
	var solids := 0
	for mesh: MeshInstance3D in meshes:
		if mesh.material_override is ShaderMaterial: shaders+=1
		if mesh.material_override is StandardMaterial3D: solids+=1
	_check(meshes.size()==3 and shaders==1 and solids==2,"actual paving stone and water render as three material batches")
	var bodies: Array = court.find_children("*","StaticBody3D",true,false)
	_check(bodies.size()==1 and bodies[0].collision_layer==4 and bodies[0].collision_mask==0 and bodies[0].has_meta("courtyard"),"fountain has a real layer-four obstacle and courtyard metadata")
	var source_low := INF
	var source_high := -INF
	var source_faces := 0
	for part: Dictionary in demo.town.courtyards.source_parts:
		if str(part.name)=="FountainWater": continue
		for vertex: Vector3 in part.faces:
			var position: Vector3 = part.transform*vertex*0.16
			source_low=minf(source_low,position.y);source_high=maxf(source_high,position.y)
			source_faces+=1
	var anchor: Vector3 = court.get_meta("fountain_anchor")
	var at: Vector2 = plan.fountain.at
	var expected_y: float = demo.state.ground_height(at)+0.014
	_check(absf(anchor.y-expected_y)<0.001 and source_low<0.0 and source_high>0.55 and source_high<0.60,"source Y=0 anchor follows ground plus .014; buried base stays buried and visible height remains about .576m")
	if bodies.size()==1:
		var shape: CollisionShape3D = bodies[0].get_child(0)
		_check(shape.shape is ConcavePolygonShape3D and shape.shape.get_faces().size()==source_faces and absf(bodies[0].global_position.y-anchor.y)<0.001,"real solid source triangles supply unshifted concave obstacle collision")
	var ground_hit := _ray(at,2)
	var obstacle_hit := _ray(at,4)
	_check(not ground_hit.is_empty() and ground_hit.collider.get_meta("ground",false) and absf(float(ground_hit.position.y)-demo.state.ground_height(at))<0.001,"layer-two terrain remains the real ground below fountain")
	_check(not obstacle_hit.is_empty() and obstacle_hit.collider.has_meta("courtyard") and float(obstacle_hit.position.y)>expected_y+0.20,"independent layer-four ray hits actual fountain stone above ground")
	var grass := _grass(plan.tiles)
	var trees := _trees(plan.tiles)
	_check(grass.lawn_total>100 and grass.lawn_inside==0 and grass.grass_inside==0,"real uploaded lawn and tall-grass origins leave all courtyard paving clear")
	var original_unchanged := true
	for id: String in original_court_plants:
		if not trees.records.has(id) or trees.records[id].authored!=original_court_plants[id].authored or trees.records[id].state_visible!=original_court_plants[id].state_visible: original_unchanged=false

	_check(original_unchanged and trees.visibility_matches_state and court.get_meta("plan").planters.size()==trees.ids.size(),"inherited plant bytes and original hidden/visible state survive courtyard; actual batches match State and tree wells preserve every authored base")
	facts.layout={"plan":plan,"meshes":meshes.size(),"material_batching":court.get_meta("material_batching",{}),"source_min_y":source_low,"source_max_y":source_high,"source_collision_points":source_faces,"anchor":anchor,"grass":grass,"trees":trees}


func _sample(label: String) -> Dictionary:
	for ignored in range(20): await process_frame
	var frames: Array[float] = []
	var draws: Array[float] = []
	var primitives: Array[float] = []
	var previous := Time.get_ticks_usec()
	for ignored in range(240):
		await process_frame
		var now := Time.get_ticks_usec()
		frames.append(float(now-previous)/1000.0);previous=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
		primitives.append(Performance.get_monitor(Performance.RENDER_TOTAL_PRIMITIVES_IN_FRAME))
	frames.sort();draws.sort();primitives.sort()
	return {"label":label,"frames":240,"houses":demo.state.houses.size(),"residents":demo.life.residents.size(),"life_processing":demo.life.is_processing(),"music_processing":demo.music.is_processing(),"wall_p95_ms":frames[228],"wall_max_ms":frames[-1],"draws_median":draws[120],"triangles_median":primitives[120],"engine_max_fps":Engine.max_fps,"vsync":DisplayServer.window_get_vsync_mode(),"timing_scope":"Wall-clock reference with explicit 180 FPS cap and VSync disabled; not an uncapped GPU limit."}


func _stale_budget(open_cell: String) -> void:
	# Current scene is open. Build the closed undo privately, then supersede it
	# with redo before publication; even invisible collision must remain disabled.
	demo.set_process(false)
	demo.life.set_process(false)
	var clock: float = demo.music._playback_clock()
	demo._after_edit(demo.state.undo(),"history")
	_check(demo.edit_pending(),"undo closing the courtyard enters actual production budget pipeline")
	var budget: RefCounted = demo.town.budget_rebuild
	var canceled_generation: int = budget.generation
	var deadline := Time.get_ticks_msec()+20000
	var ready := false
	while not ready and Time.get_ticks_msec()<deadline:
		demo.life.poll_budget_sync(false)
		var status: Dictionary = demo.town.poll_budget_rebuild(3.5,false)
		ready=bool(status.get("ready",false))
		await process_frame
	_check(ready and budget.staging!=null,"closed courtyard finishes real main-thread staging with commit held")
	var staged_bodies := 0
	var layers_zero := true
	if budget.staging!=null:
		_check(not budget.staging.visible,"prepared world remains hidden until atomic publication")
		for court: Node3D in budget.staging.courtyards.roots.values():
			for body: StaticBody3D in court.find_children("*","StaticBody3D",true,false):
				staged_bodies+=1
				if body.collision_layer!=0: layers_zero=false
	_check(staged_bodies==1 and layers_zero and _court()==null,"staged fountain body stays layer zero and never appears in visible courtyard roots")
	await physics_frame
	_check(_ray(plan.fountain.at,4).is_empty(),"hidden staged fountain contributes no physics obstacle")
	await create_timer(0.20).timeout
	_check(demo.music._playback_clock()>clock,"child music/audio clock continues while parent edit polling is deliberately held")
	demo._after_edit(demo.state.redo(),"history")
	var latest_generation: int = budget.generation
	_check(latest_generation>canceled_generation,"real pending undo is superseded by a newer redo request")
	var phantom := false
	deadline=Time.get_ticks_msec()+20000
	demo.set_process(true)
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:
		if _court()!=null: phantom=true
		await process_frame
	await _wait()
	_check(not phantom and _court()==null and budget.committed_generation==latest_generation and not _has_cell("h7",open_cell),"only latest open geometry publishes; obsolete closed courtyard never flashes or collides")
	facts.budget={"canceled_generation":canceled_generation,"committed_generation":budget.committed_generation,"staged_fountain_bodies":staged_bodies,"staged_layers_zero":layers_zero,"report":demo.edit_budget_report()}


func _has_cell(house_id: String,cell_id: String) -> bool:
	for house: Dictionary in demo.state.houses:
		if str(house.id)!=house_id: continue
		for cell: Dictionary in house.cells:
			if str(cell.id)==cell_id: return true
	return false


func _walk() -> void:
	demo.life.set_process(false)
	var seen := {}
	var samples := 0
	var nearest := INF
	var invalid := false
	var ticks := 0
	for tick in range(600):
		demo.life._process(0.1)
		ticks=tick+1
		var actors: Array = []
		for resident: Dictionary in demo.life.residents:
			if resident.paused or float(resident.wait)>0.0 or not str(resident.dwell_id).is_empty() or resident.has("cafe_visit") or int(resident.index)>=resident.route.size(): continue
			actors.append(["resident/"+str(resident.home_id),resident.node])
		for baker: Dictionary in demo.life.bakery.workers:
			if str(baker.phase) in ["walking","returning"] and int(baker.index)<baker.route.size(): actors.append(["baker/"+str(baker.home_id),baker.node])
		for actor: Array in actors:
			var position: Vector3 = actor[1].position
			var at := Vector2(position.x,position.z)
			if not Rect2(plan.bounds).has_point(at): continue
			var distance := at.distance_to(plan.fountain.at)
			nearest=minf(nearest,distance);samples+=1
			seen[str(actor[0])]=true
			if distance<float(plan.fountain.radius): invalid=true
		if tick%40==0: await process_frame
		if samples>30 and seen.has("resident/h6"): break
	_check(not invalid,"bounded real walking observations never enter measured fountain circle")
	facts.walking={"verified_court_traversal":samples>0,"h6_observed":seen.has("resident/h6"),"fixed_step":0.1,"ticks":ticks,"simulation_seconds":ticks*0.1,"samples_in_court":samples,"actors":seen.keys(),"nearest_fountain_m":nearest if samples>0 else -1.0,"remaining":"No traversal claim when samples_in_court is zero; no extended route search.","excluded":"paused, waiting, dwelling, cafe seating, and route-complete spawn positions"}
	demo.life.set_process(true)


func _music() -> void:
	var deadline := Time.get_ticks_msec()+9000
	var pulse := 0.0
	var source: Dictionary = {}
	while Time.get_ticks_msec()<deadline:
		await process_frame
		source=demo.music.daily_source()
		var court := _court()
		if court==null: break
		var material: ShaderMaterial = court.get_meta("water_material")
		pulse=float(material.get_shader_parameter("music_pulse"))
		if str(source.get("source_id",""))=="h7" and bool(source.get("audible",false)) and pulse>0.01: break
	_check(str(source.get("source_id",""))=="h7" and bool(source.get("audible",false)) and pulse>0.01,"real daily PCM phrase attributed to h7 drives actual fountain water material")
	demo.music.set_muted(true)
	await process_frame
	await process_frame
	var material: ShaderMaterial = _court().get_meta("water_material")
	_check(float(material.get_shader_parameter("music_pulse"))==0.0,"real mute clears courtyard water pulse by following frame")
	demo.music.set_muted(false)
	_check(_identity()==audio_ids and demo.music.get_child_count()==13,"mute restore and all courtyard edits preserve original nine PCM streams and four short players")
	facts.music={"source":source,"observed_water_pulse":pulse,"identity_records":audio_ids}


func _in_window(control: Control) -> bool:
	var rect := control.get_global_rect()
	return rect.position.x>=-0.5 and rect.position.y>=-0.5 and rect.end.x<=root.size.x+0.5 and rect.end.y<=root.size.y+0.5


func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal active-city file remains byte-identical")
	_check(FileAccess.get_file_as_bytes(EXAMPLE)==sample_bytes,"authored courtyard example remains byte-identical")
	var result := {"ok":failures.is_empty(),"checks":checks,"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"failures":failures,"facts":facts,"scope":"Actual Compatibility GL scene, production courtyard meshes/physics/grass/tree batches, budget latest-generation publication, real daily PCM clock/source and normal Life+Music frame samples. Opening uses labeled State API; undo uses Godot Window keyboard injection, not OS input. Bounded real Life fixed-step walking is recorded separately. No fabricated ledgers/views, full concert, complete business-cycle or large-city claim. Wall timing uses explicit 180 FPS cap and VSync disabled.","command":"Godot_v4.7.2-stable_win64_console.exe --max-fps 180 --path . --script tools/check_creation_courtyards_live.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("CREATION_COURTYARDS_LIVE ",JSON.stringify(result))
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
	sample_bytes=FileAccess.get_file_as_bytes(EXAMPLE)
	root.size=Vector2i(1440,900)
	DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	Engine.max_fps=180
	demo=Scene.instantiate()
	demo.persistence=false
	demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo)
	var deadline := Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty(),"actual GL window and original production PCM bank are ready")
	if demo.music.audio_report.is_empty(): await _finish();return
	_check(demo.state.courtyard_plans().is_empty() and demo.town.courtyards.roots.is_empty(),"default six-house world has no fabricated courtyard")
	for house: Dictionary in demo.state.houses: original_ids.append(str(house.id))
	audio_ids=_identity()
	_check(demo.music._players.size()==9 and demo.music._effects.size()==4 and demo.music.get_child_count()==13,"default world uses the fixed nine long plus four short players")
	facts.performance_default=await _sample("default_six_houses_normal_life_music")
	demo.life.set_process(false)
	var restored: Dictionary = demo.state.restore(JSON.parse_string(sample_bytes.get_string_from_utf8()))
	_check(restored.ok,"actual courtyard example restores through strict State API")
	if not restored.ok: await _finish();return
	demo._after_edit(restored,"history")
	await _wait()
	var plans: Array = demo.state.courtyard_plans()
	_check(plans.size()==1 and demo.town.courtyards.roots.size()==1,"example derives and installs exactly one actual courtyard")
	if plans.size()!=1: await _finish();return
	plan=plans[0].duplicate(true);court_id=str(plan.id)
	_check(not plan.fountain.is_empty(),"authored courtyard leaves a real fountain position clear of existing path and plants")
	if plan.fountain.is_empty(): await _finish();return
	var surviving: Array[String] = []
	for house: Dictionary in demo.state.houses:
		if original_ids.has(str(house.id)): surviving.append(str(house.id))
	_check(surviving==original_ids and demo.state.houses.size()==7,"original six household identities survive loading actual seventh ring household")
	await _plant_visible_shrub()
	_validate_court()
	var terrain := _terrain_digest()
	var collision := _geometry_digest(_court())
	var court_root_id: int = _court().get_instance_id()
	var builds: int = demo.town.courtyards.build_count
	demo._after_edit(demo.state.set_house_name("h7","泉畔桂花院"),"terrace")
	await _wait()
	demo._after_edit(demo.state.set_house_palette("h7",3),"terrace")
	await _wait()
	_check(_court().get_instance_id()==court_root_id and demo.town.courtyards.build_count==builds,"real rename and palette edits retain courtyard root identity and build count")
	demo.focus=Vector3(11.5,0.3,-8.6);demo.zoom=14;demo.yaw=-2.50;demo.pitch=1.12;demo._update_camera()
	demo.select_tool(0)
	await _capture("01_泉与树穴近景")
	demo.focus=Vector3(2,0.7,-1);demo.zoom=38;demo.pitch=0.76;demo._update_camera()
	await _capture("02_庭院河湾总体")
	demo.focus=Vector3(13.4,0.9,-9.2);demo.zoom=12;demo.yaw=1.12;demo.pitch=0.64;demo._update_camera()
	await _capture("03_真实道路与穿墙石拱")
	# Explicit API opening keeps this test bounded and unambiguous; no claim of
	# a mouse pick is made. East x4/z1 is outside the actual r8 arch cell.
	var cell_id := ""
	for house: Dictionary in demo.state.houses:
		if str(house.id)!="h7": continue
		for cell: Dictionary in house.cells:
			if int(cell.x)==4 and int(cell.z)==1 and int(cell.level)==0: cell_id=str(cell.id)
	_check(not cell_id.is_empty(),"real east perimeter target exists outside passage cell")
	demo.select_tool(3)
	demo._after_edit(demo.state.remove_cell("h7",cell_id),"erase")
	await _wait()
	var open_grass := _grass(plan.tiles)
	_check(demo.state.courtyard_plans().is_empty() and _court()==null and _ray(plan.fountain.at,4).is_empty(),"labeled State.remove_cell opens ring and removes actual courtyard obstacle")
	_check(open_grass.lawn_inside>0,"opening ring restores real uploaded meadow origins in formerly paved hole")
	demo.focus=Vector3(11.5,0.5,-9.2);demo.zoom=17;demo.yaw=0.60;demo.pitch=0.98;demo._update_camera()
	await _capture("04_开院后草地返回_API移除")
	facts.opening={"method":"State.remove_cell + demo._after_edit (not mouse)","house_id":"h7","cell_id":cell_id,"grass":open_grass}
	await _stale_budget(cell_id)
	await _key(KEY_Z,true)
	await _wait()
	_check(demo.state.courtyard_plans().size()==1 and str(demo.state.courtyard_plans()[0].id)==court_id and _court()!=null,"actual Godot Ctrl+Z restores the same courtyard plan identity")
	if _court()==null: await _finish();return
	_check(_terrain_digest()==terrain and _geometry_digest(_court())==collision,"actual keyboard undo restores exact terrain vertices and fountain physics triangles")
	var grass_restored := _grass(plan.tiles)
	_check(grass_restored.lawn_inside==0 and grass_restored.grass_inside==0,"undo republication clears actual grass batches from restored paving")
	await _walk()
	demo.focus=Vector3(11.5,0.5,-9.2);demo.zoom=22;demo.pitch=0.87;demo._update_camera()
	await _music()
	demo.life.set_process(true)
	facts.performance_courtyard=await _sample("seven_houses_courtyard_normal_life_music")
	root.size=Vector2i(1024,768)
	demo.select_tool(0)
	for ignored in range(4): await process_frame
	var toolbar: Control = demo.ui_layer.get_child(0).find_child("Toolbar",true,false)
	var help: Control = demo.whisper_keycaps
	_check(_in_window(toolbar) and _in_window(demo.info) and _in_window(demo.hint) and _in_window(help),"1024 window keeps actual toolbar courtyard count and expanded help inside viewport")
	_check(help.get_global_rect().position.y>=toolbar.get_global_rect().end.y and demo.hint.text.contains("围出宽敞内院"),"actual courtyard whisper fits below toolbar without overlap")
	facts.layout_1024={"toolbar":toolbar.get_global_rect(),"info":demo.info.get_global_rect(),"help":help.get_global_rect(),"hint":demo.hint.get_global_rect()}
	await _capture("05_1024庭院说明与信息边界")
	root.size=Vector2i(1440,900)
	for ignored in range(3): await process_frame
	var saved: Dictionary = demo.state.snapshot()
	var fresh_state := State.new()
	_check(fresh_state.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"actual current city restores strict full precision JSON without changing life ledgers")
	var fresh := Renderer.new()
	fresh.visible=false
	root.add_child(fresh)
	fresh.setup(fresh_state)
	var fresh_root: Node3D = fresh.courtyards.roots.get(court_id)
	_check(fresh_root!=null and fresh_root.get_meta("plan")==_court().get_meta("plan") and _geometry_digest(fresh_root)==collision,"independent fresh production renderer rebuilds same courtyard and true collision from JSON")
	fresh.free()
	await physics_frame
	await process_frame
	_check(_identity()==audio_ids and demo.music.get_child_count()==13,"fresh world rebuild adds no audio nodes and preserves all original PCM identities and bytes")
	facts.original_house_ids=original_ids
	facts.terrain_sha256=terrain
	facts.collision_sha256=collision
	facts.vsync=DisplayServer.window_get_vsync_mode()
	facts.engine_max_fps=Engine.max_fps
	await _finish()
