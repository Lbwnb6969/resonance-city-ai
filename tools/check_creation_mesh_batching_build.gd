extends SceneTree
## Same authoritative state, alternating per-house order; no camera or world setup.
const State = preload("res://scripts/world/city_creation_state.gd")
const Current = preload("res://scripts/visual/city_creation_renderer.gd")
const Legacy = preload("res://备份/建筑合批前_20261016/renderer_before.gd")
const OUT := "res://验证记录/建筑材质合批_2026-10-16/build.json"
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _owner(script, state):
	var owner = script.new()
	owner.state = state
	root.add_child(owner)
	owner.add_child(owner.shore)
	owner.buildings = Node3D.new()
	owner.add_child(owner.buildings)
	var music_layer := Node3D.new()
	owner.add_child(music_layer)
	owner.resonance.setup(music_layer)
	return owner

func _prepare(owner, state) -> float:
	owner.state = state
	var start := Time.get_ticks_usec()
	owner.building_context.prepare(state.houses)
	return float(Time.get_ticks_usec()-start)/1000.0

func _build(owner, house: Dictionary) -> Dictionary:
	var start := Time.get_ticks_usec()
	var house_root: Node3D = owner._house(house)
	var merge_start := Time.get_ticks_usec()
	owner._merge_meshes(house_root)
	var merge_end := Time.get_ticks_usec()
	owner.resonance.build(owner,house,house_root)
	var end := Time.get_ticks_usec()
	return {"house_id":str(house.id),"total_ms":float(end-start)/1000.0,
		"merge_ms":float(merge_end-merge_start)/1000.0,
		"meshes":house_root.find_children("*","MeshInstance3D",true,false).size(),
		"batching":house_root.get_meta("material_batching",{})}

func _summary(rows: Array, field: String) -> Dictionary:
	var values: Array[float] = []
	var total := 0.0
	for row: Dictionary in rows:
		var value := float(row[field])
		values.append(value)
		total += value
	values.sort()
	return {"p50_ms":values[int(ceil(values.size()*0.50))-1],
		"p95_ms":values[int(ceil(values.size()*0.95))-1],"max_ms":values[-1],"total_ms":total}

func _clear_houses(owner) -> void:
	# Both owners use synchronous teardown outside every measured interval.
	owner.resonance.rigs.clear()
	for child: Node in owner.buildings.get_children(): child.free()

func _run() -> void:
	var warm = State.new()
	warm.initialize()
	var current = _owner(Current,warm)
	var legacy = _owner(Legacy,warm)
	_prepare(current,warm)
	_prepare(legacy,warm)
	for i in range(warm.houses.size()):
		var house: Dictionary = warm.houses[i]
		if i%2==0:
			_build(current,house)
			_build(legacy,house)
		else:
			_build(legacy,house)
			_build(current,house)
	_clear_houses(current)
	_clear_houses(legacy)
	# Flush both implementations' removed queue_free meshes before measuring.
	await process_frame
	var state = State.new()
	state.initialize()
	state.houses.clear()
	state.plants.clear()
	for z in range(12):
		for x in range(14):
			if state.houses.size()>=100: break
			state.add_house(Vector2(-16+x*2.4,-13+z*2.4))
	if state.houses.size()!=100: failures.append("authoritative add_house did not create 100 legal houses")
	for house: Dictionary in state.houses:
		if house.cells.size()!=1 or str(house.cells[0].kind)!="room":
			failures.append("measurement house is not one room: "+str(house.id))
	if not failures.is_empty():
		push_error(str(failures))
		current.free()
		legacy.free()
		quit(1)
		return
	var preparation := {"current_ms":_prepare(current,state),"original_ms":_prepare(legacy,state)}
	var rows := {"current":[],"original":[]}
	# No awaits, deletions, frame sampling or renderer flushes inside this loop.
	# Keep both complete 100-house trees until all timing intervals finish.
	for i in range(state.houses.size()):
		var house: Dictionary = state.houses[i]
		if i%2==0:
			rows.current.append(_build(current,house))
			rows.original.append(_build(legacy,house))
		else:
			rows.original.append(_build(legacy,house))
			rows.current.append(_build(current,house))
	var report := {"ok":true,"houses":state.houses.size(),"warmup_houses":warm.houses.size(),
		"preparation":preparation,"results":{},"rows":rows,
		"source_cache":{"meshes":current.mesh_batcher.source_cache.size(),"materials":current.mesh_batcher.materials.size()},
		"scope":"One six-house warmup, then one same-state 100 legal single-room house pass; alternating current/original order per house. Times cover _house + _merge_meshes + resonance.build; merge is also reported separately. Owners retain their normal material/source caches. No camera or world setup; setup, state construction, context preparation, statistics and synchronous teardown are excluded. CPU resource construction/upload submission is included; this is not a normal edit latency measurement or a claim that the production 611 ms large-city build is fixed."}
	for label: String in ["current","original"]:
		report.results[label] = {"total":_summary(rows[label],"total_ms"),"merge":_summary(rows[label],"merge_ms")}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT.get_base_dir()))
	var file := FileAccess.open(OUT,FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t"))
	file.close()
	print("CREATION_MESH_BATCHING_BUILD ",JSON.stringify(report))
	current.free()
	legacy.free()
	await process_frame
	quit(0)
