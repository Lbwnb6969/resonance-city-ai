extends SceneTree
## Compare against the archived, independently loaded pre-optimization Life.
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
const OLD := "res://废弃/长曲路性能_2026-10-15/city_creation_life.gd.txt"
const SOURCE := "res://备份/自发巡演前_20261015/额外道路输入实窗/城市作品快照.json"
var failures: Array[String] = []
var checks := 0
var old_script: GDScript
var measurements: Array[Dictionary] = []

func _initialize() -> void: _run.call_deferred()

func _run() -> void:
	old_script = GDScript.new()
	old_script.source_code = FileAccess.get_file_as_string(OLD).replace("class_name CityCreationLife", "")
	if old_script.reload() != OK:
		push_error("archived Life failed to load")
		quit(1)
		return
	var source: Dictionary = JSON.parse_string(FileAccess.get_file_as_string(SOURCE))
	var base := source.duplicate(true)
	base.roads = source.roads.slice(0,7).duplicate(true)
	base.next_road_id = 8
	base.high_watermark.road = 7
	base.journey_checkpoint = {}
	for house: Dictionary in base.houses: house.auto_matinee = false
	var old_state := State.new()
	var new_state := State.new()
	_check(old_state.restore(base).ok and new_state.restore(base).ok,"preserved player sample restores twice")
	if not failures.is_empty():
		_finish()
		return
	var old_life := _life(old_script,old_state)
	var new_life := _life(Life,new_state)
	_compare(old_life,new_life,"seven original streets",true)
	for road: Dictionary in source.roads.slice(7):
		var points: Array[Vector2] = []
		for value: Array in road.points: points.append(Vector2(float(value[0]),float(value[1])))
		_check(old_state.add_road(points).ok and new_state.add_road(points).ok,"real preserved road "+str(road.id)+" commits")
		var started := Time.get_ticks_usec()
		old_life._sync()
		var old_ms := (Time.get_ticks_usec()-started)/1000.0
		started = Time.get_ticks_usec()
		new_life._sync()
		var new_ms := (Time.get_ticks_usec()-started)/1000.0
		measurements.append({"road_id":road.id,"points":points.size(),"old_sync_ms":old_ms,"new_sync_ms":new_ms,"nodes":new_life.graph.size()})
		_compare(old_life,new_life,str(road.id),true)
	# Real walking, bakery stock, visits and work assignments must evolve alike.
	for tick in range(1200):
		old_life._process(0.1)
		new_life._process(0.1)
		if tick%100==0:
			_check(old_life.checkpoint()==new_life.checkpoint(),"same actual journeys at tick %d"%tick)
			_check(old_state.life_progress==new_state.life_progress and old_state.bakery_supply==new_state.bakery_supply,"same actual services/inventory at tick %d"%tick)
	# Returned paths are mutable walking values; callers must not poison cache.
	var keys: Array = new_life.connected_houses.values()
	var cached: Array[Vector3] = new_life._route(keys[0],keys[1])
	var expected := cached.duplicate()
	cached.push_front(Vector3(99,99,99))
	_check(new_life._route(keys[0],keys[1])==expected,"route cache returns independent arrays")
	# Removing the entire graph invalidates every cached path and keeps people.
	var previous_positions: Array[Vector3] = []
	for resident: Dictionary in new_life.residents: previous_positions.append(resident.node.position)
	var roads: Array[Dictionary] = new_state.roads.duplicate(true)
	old_state.roads.clear()
	new_state.roads.clear()
	old_state.revision += 1
	new_state.revision += 1
	old_life._sync()
	new_life._sync()
	_compare(old_life,new_life,"disconnected",false)
	for index in range(new_life.residents.size()):
		_check(new_life.residents[index].paused and new_life.residents[index].node.position==previous_positions[index],"road removal pauses actual point without teleport")
	old_state.roads.assign(roads.duplicate(true))
	new_state.roads.assign(roads)
	old_state.revision += 1
	new_state.revision += 1
	old_life._sync()
	new_life._sync()
	_compare(old_life,new_life,"reconnected",true)
	old_life.free()
	new_life.free()
	# Deliberate crossing, collinear overlap and width-boundary cases supplement
	# the player's dense curve. Geometry still runs through State.add_road.
	var geometries: Array = [
		[[Vector2(-16,12),Vector2(-10,8),Vector2(-16,8),Vector2(-10,12)]],
		[[Vector2(-16,10),Vector2(-10,10)],[Vector2(-14,10),Vector2(-8,10)]],
		[[Vector2(-16,10),Vector2(-10,10)],[Vector2(-13,10.62),Vector2(-13,13)],[Vector2(-11,10.63),Vector2(-11,13)]]
	]
	for index in range(geometries.size()):
		var city := State.new()
		city.initialize()
		city.houses.clear()
		city.roads.clear()
		for points in geometries[index]:
			var typed: Array[Vector2] = []
			typed.assign(points)
			_check(city.add_road(typed).ok,"crossing/overlap/near-width valid input")
		var reference := _life(old_script,city)
		var current := _life(Life,city)
		_compare(reference,current,"geometric case %d"%index,true)
		reference.free()
		current.free()
	# Equal-cost alternatives exercise the old sort's tie order, incremental
	# early-stop resumption and eviction across more than 32 distinct sources.
	var empty := State.new()
	empty.initialize()
	empty.houses.clear()
	empty.roads.clear()
	var tied_old := _life(old_script,empty)
	var tied_new := _life(Life,empty)
	for x in range(6):
		for z in range(6):
			var id := "%d:%d"%[x,z]
			tied_old.graph[id]={}
			tied_old.positions[id]=Vector3(x,0.055,z)
			for offset: Vector2i in [Vector2i(0,1),Vector2i(1,0),Vector2i(0,-1),Vector2i(-1,0)]:
				var other := Vector2i(x,z)+offset
				if other.x<0 or other.x>=6 or other.y<0 or other.y>=6: continue
				tied_old.graph[id]["%d:%d"%[other.x,other.y]]=1.0
	tied_new.graph=tied_old.graph.duplicate(true)
	tied_new.positions=tied_old.positions.duplicate()
	var tied_ids: Array = tied_old.graph.keys()
	for from: String in tied_ids:
		for to: String in tied_ids:
			_check(tied_old._route(from,to)==tied_new._route(from,to),"equal-cost original tie route "+from+" to "+to)
	_check(tied_new._route_searches.size()<=32 and tied_new._route_cache_entries<=1024,"search and returned-route caches remain bounded")
	tied_old.free()
	tied_new.free()
	_finish()

func _life(script: GDScript,city: RefCounted) -> Node3D:
	var life: Node3D = script.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	return life

func _compare(old_life: Node3D,new_life: Node3D,label: String,paths: bool) -> void:
	_check(old_life.graph==new_life.graph,label+" all weighted edges identical")
	_check(old_life.positions==new_life.positions,label+" all node coordinates and bridge heights identical")
	_check(old_life.connected_houses==new_life.connected_houses and old_life.selected_entrances==new_life.selected_entrances,label+" selected doors and connected homes identical")
	_check(old_life.checkpoint()==new_life.checkpoint(),label+" actual jobs and resident journeys identical")
	if not paths: return
	var endpoints: Array = new_life.connected_houses.values()
	if endpoints.is_empty():
		var nodes: Array = new_life.graph.keys()
		for index in range(0,nodes.size(),maxi(1,nodes.size()/8)): endpoints.append(nodes[index])
	for from: String in endpoints:
		for to: String in endpoints:
			_check(old_life._route(from,to)==new_life._route(from,to),label+" exact shortest route "+from+" to "+to)
	for resident: Dictionary in old_life.residents:
		for to: String in endpoints:
			_check(old_life._route_from_position(resident.node.position,to)==new_life._route_from_position(resident.node.position,to),label+" exact position attachment "+str(resident.home_id)+" to "+to)

func _check(ok: bool,label: String) -> void:
	checks += 1
	if not ok: failures.append(label)

func _finish() -> void:
	var output := "res://验证记录/长曲路性能_2026-10-15"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	var file := FileAccess.open(output+"/network_ab.json",FileAccess.WRITE)
	file.store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"measurements":measurements,"failures":failures},"\t",true,true))
	file.close()
	print("NETWORK_AB_MEASUREMENTS ",JSON.stringify(measurements))
	if failures.is_empty(): print("CITY_CREATION_NETWORK_AB PASS: %d assertions; archived graph, weighted edges, doors, exact routes, real positions, jobs, stock, disconnect/reconnect"%checks)
	else:
		for failure: String in failures: push_error(failure)
	quit(0 if failures.is_empty() else 1)
