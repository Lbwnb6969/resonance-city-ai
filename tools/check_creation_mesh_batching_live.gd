extends SceneTree
## Same production world; only the house layer is toggled against frozen HEAD.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Legacy = preload("res://备份/建筑合批前_20261016/renderer_before.gd")
const OUT = "res://验证记录/建筑材质合批_2026-10-16"
var demo
var legacy
var failures: Array[String] = []
var checks := 0
var results: Array = []
func _initialize() -> void: _run.call_deferred()
func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok:
		failures.append(label)
		push_error(label)
func _wait() -> void:
	var deadline := Time.get_ticks_msec()+20000
	while demo.edit_pending() and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending(),"latest budget generation publishes")
	await process_frame
func _sample(label: String) -> Dictionary:
	for i in range(90): await process_frame
	var frames: Array[float] = []
	var draws: Array[float] = []
	var triangles: Array[float] = []
	var previous := Time.get_ticks_usec()
	for i in range(180):
		await process_frame
		var now := Time.get_ticks_usec()
		frames.append(float(now-previous)/1000.0)
		previous=now
		draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
		triangles.append(Performance.get_monitor(Performance.RENDER_TOTAL_PRIMITIVES_IN_FRAME))
	frames.sort(); draws.sort(); triangles.sort()
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
	return {"draws":draws[90],"triangles":triangles[90],"wall_p95_ms":frames[171],"wall_max_ms":frames[-1]}
func _build_legacy() -> Dictionary:
	if is_instance_valid(legacy):
		legacy.free()
	legacy=Legacy.new()
	legacy.state=demo.state
	root.add_child(legacy)
	legacy.add_child(legacy.shore)
	legacy.buildings=Node3D.new()
	legacy.add_child(legacy.buildings)
	legacy.building_context.prepare(demo.state.houses)
	var music_layer := Node3D.new()
	legacy.add_child(music_layer)
	legacy.resonance.setup(music_layer)
	var times: Array[float] = []
	for house: Dictionary in demo.state.houses:
		var start := Time.get_ticks_usec()
		var house_root: Node3D=legacy._house(house)
		legacy._merge_meshes(house_root)
		legacy.resonance.build(legacy,house,house_root)
		times.append(float(Time.get_ticks_usec()-start)/1000.0)
		var actual: Node3D=demo.town.house_roots[str(house.id)]
		_check(actual.find_children("*","CollisionShape3D",true,false).size()==house_root.find_children("*","CollisionShape3D",true,false).size(),"same stable collision count "+str(house.id))
	legacy.visible=false
	times.sort()
	return {"house_build_median_ms":times[times.size()/2],"house_build_max_ms":times[-1],"mesh_instances":legacy.buildings.find_children("*","MeshInstance3D",true,false).size()}
func _compare(label: String) -> void:
	demo.music.set_process(false)
	var old_stats := _build_legacy()
	var old_meshes: int=old_stats.mesh_instances
	var current_meshes: int=demo.town.buildings.find_children("*","MeshInstance3D",true,false).size()
	var after: Dictionary=await _sample(label+"_01_current")
	demo.town.buildings.visible=false
	legacy.visible=true
	var before: Dictionary=await _sample(label+"_02_original")
	legacy.visible=false
	demo.town.buildings.visible=true
	_check(after.draws<before.draws,"same world actual GPU draw submissions decrease: "+label)
	_check(current_meshes<old_meshes,"same authored homes use fewer static meshes: "+label)
	results.append({"scene":label,"houses":demo.state.houses.size(),"plant_records":demo.state.plants.size(),"visible_plants":demo.town.vegetation_visibility.values().count(true),"original":before,"current":after,"original_build":old_stats,"current_meshes":current_meshes,"current_house_build_total_ms":demo.town.rebuild_stats.get("houses_ms",-1),"draws_saved":before.draws-after.draws})
func _forest() -> void:
	demo.state.plants.clear()
	for z in range(25):
		for x in range(20):
			var at:=Vector2(-17+x*1.72,-14+z*1.12)
			demo.state.plants.append(demo.state._make_plant("p%d"%[z*20+x+1],at,"olive" if (x+z)%2==0 else "cypress",0.85,81000+x*41+z*59,"seed"))
	demo.state._next_plant_id=501
	demo.state._high_watermark.plant=500
	demo.state.revision+=1
	demo.town.rebuild()
func _large() -> void:
	demo.state.houses.clear()
	demo.state.plants.clear()
	for z in range(12):
		for x in range(14):
			if demo.state.houses.size()>=100: break
			demo.state.add_house(Vector2(-16+x*2.4,-13+z*2.4))
	_check(demo.state.houses.size()==100,"one hundred legal houses created through authoritative add_house")
	_forest()
	demo.focus=Vector3(0,0,0)
	demo.zoom=41
	demo._update_camera()
func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900)
	DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	Engine.max_fps=0
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.set_process(false)
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var identities: Array=[]
	for player in demo.music._players.values(): identities.append([player.get_instance_id(),player.stream.get_instance_id()])
	await _compare("six_houses")
	_forest()
	await _compare("six_houses_500_tree_records")
	_large()
	await _compare("hundred_houses_500_tree_records")
	legacy.free()
	demo.set_process(true)
	var target: String=str(demo.state.houses[0].id)
	var before_cells: int=demo.state.houses[0].cells.size()
	var result: Dictionary=demo.state.add_cell(target,0,0,1)
	demo._after_edit(result,"house")
	await _wait()
	_check(demo.state.houses[0].cells.size()==before_cells+1,"large city edit rebuilds the actual new upper room")
	_check(demo.town.mesh_batcher.source_cache.size()<=demo.town.mesh_batcher.CACHE_LIMIT,"production source cache remains inside its explicit limit")
	demo._history(false)
	await _wait()
	_check(demo.state.houses[0].cells.size()==before_cells,"history republishes original geometry after merged edit")
	var index:=0
	for player in demo.music._players.values():
		_check([player.get_instance_id(),player.stream.get_instance_id()]==identities[index],"original fixed PCM player and stream survive geometry changes")
		index+=1
	_check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal city bytes unchanged")
	var report: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"results":results,"source_cache":{"meshes":demo.town.mesh_batcher.source_cache.size(),"materials":demo.town.mesh_batcher.materials.size()},"vsync":DisplayServer.window_get_vsync_mode(),"max_fps":Engine.max_fps,"scope":"actual production world, fixed light/shadows/music/UI; only house layer changes. 500 tree input records, actual visibility reported separately. Vsync disabled and Engine.max_fps=0; p95 is wall time; driver cap may still apply."}
	var file:=FileAccess.open(OUT+"/live.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t")); file.close()
	print("CREATION_MESH_BATCHING_LIVE ",JSON.stringify(report))
	demo.music.set_process(false)
	for player in demo.music._players.values(): player.stop()
	for player in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
