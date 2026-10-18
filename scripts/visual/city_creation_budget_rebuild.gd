extends RefCounted
## A single CPU worker and one replaceable latest request. GPU resources and
## nodes are created only by poll(), on the main thread, in a hidden staging
## hierarchy. A superseded job never writes a visible root or geometry cache.
const State = preload("res://scripts/world/city_creation_state.gd")
const ChangeSet = preload("res://scripts/world/city_creation_change_set.gd")
const ROAD_FIELDS := ["road_join_signatures","road_geometry_cache","road_outline_fingerprints","road_segment_bins","road_outlines","road_water_signatures"]
const VEGETATION_FIELDS := ["vegetation_block_fingerprints","vegetation_id_blocks","vegetation_fingerprints","vegetation_data_fingerprints","vegetation_visibility"]
const MEADOW_FIELDS := ["block_counts","base_counts","base_records","base_candidates","base_accents","plant_candidates","plant_candidate_fingerprints","sample_bins","sample_obstacles","entrance_cache","base_fingerprints","fingerprints","palace_flower_counts"]
const SHORE_FIELDS := ["fingerprints","counts","_layout_candidates","_water_candidates","_water_fingerprints","_entrance_cache"]
var generation := 0
var committed_generation := 0
var worker: Thread
var running: Node3D
var queued: Node3D
var staging: Node3D
var tasks: Array = []
var task_index := 0
var stats: Dictionary = {}
var _request_ms := 0.0
var _max_step_ms := 0.0
var _main_ms := 0.0
var _published_snapshot: Dictionary = {}
var retired_values:Array=[]
var retired_solvers:Array[RefCounted]=[]
var retired_contexts:Array[Node3D]=[]
var _task_peak_ms:Dictionary={}
var _task_max_units:Dictionary={}

func _task_units(task:Array)->int:
	if str(task[0])=="meadow":
		var count:=0
		for rows:Array in task[2].values():count+=rows.size()
		return count
	if str(task[0]) in ["shore","lilypads","vegetation"]:return task[2].size()
	return 1
var _work_frame:=-1
var _frame_work_ms:=0.
var _retirement_blocked_frame:=-1

func hold_retirement_this_frame()->void:_retirement_blocked_frame=Engine.get_process_frames()

func _account_work(ms:float)->void:
	var frame:=Engine.get_process_frames()
	if frame!=_work_frame:_work_frame=frame;_frame_work_ms=0.
	_frame_work_ms+=ms
	stats["max_frame_work_ms"]=maxf(float(stats.get("max_frame_work_ms",0.)),_frame_work_ms)

func retirement_pending()->bool:return not retired_values.is_empty() or not retired_contexts.is_empty() or not retired_solvers.is_empty()

func retire_idle()->void:
	if not retirement_pending() or Engine.get_process_frames()==_retirement_blocked_frame:return
	var remaining:=3.5-(_frame_work_ms if _work_frame==Engine.get_process_frames() else 0.)
	var context_only:=retired_values.is_empty()
	if remaining<(3. if context_only else 1.25):return
	var available:=minf(.5,remaining)
	if available<.1:return
	var began:=Time.get_ticks_usec()
	if context_only:
		if not retired_solvers.is_empty():retired_solvers.pop_back()
		else:_dispose_context(retired_contexts.pop_back())
	else:
		while not retired_values.is_empty() and float(Time.get_ticks_usec()-began)/1000.<available:retired_values.pop_back()
	var elapsed:=float(Time.get_ticks_usec()-began)/1000.
	_account_work(elapsed)
	_main_ms+=elapsed;stats["main_ms"]=_main_ms
	stats["retirement_total_ms"]=float(stats.get("retirement_total_ms",0.))+elapsed
	stats["retirement_max_ms"]=maxf(float(stats.get("retirement_max_ms",0.)),elapsed)
	stats["retirement_pending"]=retired_values.size()+retired_contexts.size()+retired_solvers.size()

func _merge_value_cache(target:Dictionary,incoming:Dictionary)->void:
	# The old block's records are no longer used by the published geometry.
	# Keep their final references until bounded idle frames can release them,
	# rather than freeing thousands of dictionaries inside the atomic commit.
	for key:Variant in incoming:
		var previous:Variant=target.get(key)
		if (previous is Array or previous is Dictionary) and not is_same(previous,incoming[key]):retired_values.append(previous)
	target.merge(incoming,true)

func record_published(state:RefCounted)->void:
	_published_snapshot=ChangeSet.snapshot(state)

func _copy_fields(source: Object, target: Object, fields: Array) -> void:
	for field: String in fields:
		var value: Variant = source.get(field)
		target.set(field,value.duplicate(true) if value is Dictionary or value is Array else value)

func _context(owner: Node3D, snapshot:Dictionary) -> Node3D:
	# Constructors run on the main thread. No render resource is copied into
	# the worker context, and State's mutable frontage cache starts empty.
	var context: Node3D = owner.get_script().new()
	var city := State.new()
	# The change snapshot is already detached from the owner. Authored rows
	# remain read only throughout preparation, so capture them only once.
	city.houses.assign(snapshot.houses);city.roads.assign(snapshot.roads)
	city.plants.assign(snapshot.plants);city.waters.assign(snapshot.waters)
	city.terrain_strokes.assign(snapshot.terrain)
	_copy_fields(owner.state,city,["districts","musical_links","house_improvements","house_culture","house_clockwork","era_unlocks","revision"])
	context.state = city
	city._ground_terrain.copy_cache_from(owner.state._ground_terrain)
	city._ground_revision = owner.state._ground_revision
	city._raw_ground_revision = owner.state._raw_ground_revision
	city._road_heights.copy_cache_from(owner.state._road_heights)
	city._terrain_protection.copy_cache_from(owner.state._terrain_protection)
	context.terrain_surface = owner.TerrainSurface.new()
	context.terrain_surface.state = city
	_copy_fields(owner.terrain_surface,context.terrain_surface,["fingerprints"])
	context.add_child(context.terrain_surface)
	city._junctions.copy_cache_from(owner.state._junctions)
	city._courtyards.copy_cache_from(owner.state._courtyards)
	context.courtyards.copy_cache_from(owner.courtyards)
	context.building_context.copy_cache_from(owner.building_context)
	context.ground_contact_field.copy_cpu_from(owner.ground_contact_field)
	context.water_field.copy_cpu_from(owner.water_field,city)
	context.era_road_field.copy_cpu_from(owner.era_road_field)
	context.set_meta("water_component_keys",owner.water_components.keys())
	context.water_edit_stats=owner.water_edit_stats.duplicate()
	_copy_fields(owner,context,["background_trees","background_height_signature","building_input_signature"])
	context.record_only = true
	context.water_fingerprint = owner.water_fingerprint
	context.road_layout_signature = owner.road_layout_signature
	context.vegetation_obstacle_signature = owner.vegetation_obstacle_signature
	# These maps replace completed records; layout rebuilds clear only their
	# private top-level containers. Nested road geometry is immutable.
	for field:String in ROAD_FIELDS+VEGETATION_FIELDS+["house_fingerprints","road_fingerprints"]:
		context.set(field,Dictionary(owner.get(field)).duplicate())
	context.meadow = owner.Meadow.new()
	context.meadow.state = city
	context.meadow.record_only = true
	# Fingerprints preserve unchanged blocks. Only changed blocks regenerate
	# their deterministic records, avoiding a large main-thread cache copy.
	_copy_fields(owner.meadow,context.meadow,["fingerprints","palace_centers"])
	context.cafes.layout_api = context.cafes.Layout.create_context()
	_copy_fields(owner.cafes,context.cafes,["fingerprints","placement_inputs"])
	context.shore.state = city
	context.shore.record_only = true
	_copy_fields(owner.shore,context.shore,["fingerprints","_geometry"])
	context.lilypads.state = city
	context.lilypads.record_only = true
	_copy_fields(owner.lilypads,context.lilypads,["fingerprints","_geometry"])
	return context

func request(owner: Node3D) -> int:
	var start := Time.get_ticks_usec()
	var current_snapshot := ChangeSet.snapshot(owner.state)
	var changes: Dictionary = ChangeSet.diff(_published_snapshot,current_snapshot)
	generation += 1
	_discard_staging()
	if queued != null: _dispose_context(queued)
	queued = _context(owner,current_snapshot)
	queued.set_meta("snapshot",current_snapshot)
	queued.set_meta("generation",generation)
	queued.set_meta("changes",changes)
	_request_ms = float(Time.get_ticks_usec()-start)/1000.0
	_main_ms = _request_ms
	_max_step_ms = _request_ms
	stats = {"generation":generation,"request_ms":_request_ms,"max_step_task":"request","discarded":0,"change_labels":changes.labels.duplicate(),"change_counts":changes.counts.duplicate(),"change_bounds":changes.bounds.size()}
	_account_work(_request_ms)
	_start_latest()
	return generation

func _start_latest() -> void:
	if worker != null or queued == null: return
	running = queued
	queued = null
	worker = Thread.new()
	worker.start(_work.bind(running))

func _work(context: Node3D) -> Dictionary:
	var start := Time.get_ticks_usec()
	var changes: Dictionary = context.get_meta("changes",{})
	var labels: Array = changes.get("labels",[])
	var stages: Dictionary = {}
	var stage_start := Time.get_ticks_usec()
	context.water_field.prepare_update()
	context.era_road_field.prepare(context.state)
	var water := _prepare_water(context) if labels.has("waters") else {"changed":false,"fingerprint":context.water_fingerprint,"live":{},"changes":{},"contours":0,"prepare_ms":0.0}
	stages.water = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	context.state.prepare_ground_height()
	var terrain_blocks: Array = context.terrain_surface.prepare_blocks()
	for change:Array in terrain_blocks:change.append(context.terrain_surface.prepare_mesh(change[1]))
	stages.terrain = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	var building_signature := hash([context.state.houses,context.state.roads])
	if labels.has("houses") or labels.has("roads"):
		context.building_input_signature = -1 if context.building_input_signature != building_signature else context.building_input_signature
	if context.building_input_signature != building_signature:
		context.building_context.prepare(context.state.houses,context.state.roads)
		context.building_input_signature = building_signature
	var signature: int = context._road_layout_key()
	if signature != context.road_layout_signature:
		context.road_layout_signature = signature
		context.road_join_signatures.clear()
		context._prepare_road_layout()
	context.path_pebbles.prepare(context.state)
	context.promenade._prepare_clearance(context.state)
	var houses: Array = []
	var roads: Array = []
	for house: Dictionary in context.state.houses:
		var fingerprint: int = context._house_fingerprint(house)
		if context.house_fingerprints.get(str(house.id),-1) != fingerprint: houses.append(house)
		context.house_fingerprints[str(house.id)] = fingerprint
	var road_data := {}
	var pebbles := {}
	for road: Dictionary in context.state.roads:
		var fingerprint: int = context._road_fingerprint(road)
		if context.road_fingerprints.get(str(road.id),-1) != fingerprint:
			roads.append(road)
			road_data[str(road.id)] = context._prepare_road_data(road)
		context.road_fingerprints[str(road.id)] = fingerprint
		pebbles[str(road.id)] = context.path_pebbles.signature(road)
	stages.structures_and_roads = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	var masks := {}
	var visual_blocks := _changed_visual_blocks(context,terrain_blocks,houses,roads,context.state.waters if bool(water.get("changed",false)) else [])
	context._rebuild_vegetation(masks,visual_blocks,true)
	stages.vegetation = float(Time.get_ticks_usec()-stage_start)/1000.0
	stages.meadow = {"elapsed_ms":context.meadow.elapsed_ms,"stages":context.meadow.stage_ms.duplicate()}
	stage_start = Time.get_ticks_usec()
	context.shore.rebuild(masks)
	stages.shore = context.shore.elapsed_ms
	stage_start = Time.get_ticks_usec()
	context.lilypads.rebuild()
	stages.lilypads = context.lilypads.elapsed_ms
	stage_start = Time.get_ticks_usec()
	var cafes: Dictionary = context.cafes.prepare(context)
	var courts: Dictionary = context.courtyards.prepare(context)
	stages.services = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	for house:Dictionary in context.state.houses:
		if str(house.get("role","")) in ["bakery","workshop","garden_cafe"]:context.state.site_blessing(str(house.id))
	stages.site_blessings=float(Time.get_ticks_usec()-stage_start)/1000.
	stage_start=Time.get_ticks_usec()
	context.ground_contact_field.prepare(context.state)
	stages.contact_field = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	var background_heights: Array = []
	for tree: Dictionary in context.background_trees: background_heights.append(context.state._ground_terrain.height_at(tree.at))
	var background_changed: bool = hash(background_heights)!=context.background_height_signature
	stages.background = float(Time.get_ticks_usec()-stage_start)/1000.0
	return {"houses":houses,"roads":roads,"road_data":road_data,"pebbles":pebbles,"cafes":cafes,"courtyards":courts,"terrain_blocks":terrain_blocks,"water":water,"background_changed":background_changed,"worker_ms":float(Time.get_ticks_usec()-start)/1000.0,"worker_stages":stages}

func _changed_visual_blocks(context: Node3D, terrain_blocks: Array, houses: Array, roads: Array, waters: Array) -> Array[Vector2i]:
	var result: Dictionary = {}
	var add_bounds := func(bounds: Rect2) -> void:
		var low := Vector2i(floori(bounds.position.x / context.VEGETATION_BLOCK_SIZE), floori(bounds.position.y / context.VEGETATION_BLOCK_SIZE))
		var high := Vector2i(ceili(bounds.end.x / context.VEGETATION_BLOCK_SIZE)-1, ceili(bounds.end.y / context.VEGETATION_BLOCK_SIZE)-1)
		for x in range(low.x-1,high.x+2):
			for z in range(low.y-1,high.y+2):
				var block := Vector2i(x,z)
				if Rect2(Vector2(block)*context.VEGETATION_BLOCK_SIZE,Vector2.ONE*context.VEGETATION_BLOCK_SIZE).intersects(context.EDITABLE_WORLD_RECT): result[block]=true
	for change: Array in terrain_blocks:
		add_bounds.call(Rect2(change[1]).grow(1.0))
	for house: Dictionary in houses:
		add_bounds.call(Rect2(Vector2(float(house.origin[0]),float(house.origin[1])),Vector2.ONE*1.8*4.0).grow(1.5))
	for road: Dictionary in roads:
		var points: Array = road.get("points",[])
		if points.is_empty(): continue
		var bounds := Rect2(Vector2(float(points[0][0]),float(points[0][1])),Vector2.ZERO)
		for point: Array in points: bounds=bounds.expand(Vector2(float(point[0]),float(point[1])))
		add_bounds.call(bounds.grow(float(road.get("width",1.25))*0.5+1.5))
	for water: Dictionary in waters:
		var points: Array = water.get("points",[])
		if points.is_empty(): continue
		var bounds := Rect2(Vector2(float(points[0][0]),float(points[0][1])),Vector2.ZERO)
		for point: Array in points: bounds=bounds.expand(Vector2(float(point[0]),float(point[1])))
		add_bounds.call(bounds.grow(float(water.get("width",2.0))*0.5+1.5))
	var rows: Array[Vector2i]=[]
	for block: Vector2i in result.keys(): rows.append(block)
	return rows

func _prepare_water(context: Node3D) -> Dictionary:
	var began := Time.get_ticks_usec()
	var fingerprint := hash(context._water_records())
	var result := {"changed":fingerprint!=context.water_fingerprint,"fingerprint":fingerprint,"live":{},"changes":{},"contours":0}
	if not result.changed: return result
	var banks: Array = context._water_groups(0.0)
	var prior: Array = context.get_meta("water_component_keys")
	for component: Array in context._water_components(banks):
		var key := str(hash(component))
		result.live[key]=true
		if prior.has(key): continue
		var vertices: Array[Vector3] = []
		var simple := true
		for group: Array in component:
			if group.size()!=1: simple=false;break
		if simple:
			for group: Array in component:
				var polygon: PackedVector2Array = group[0]
				var indices := Geometry2D.triangulate_polygon(polygon)
				for index in range(0,indices.size(),3):
					context._append_water_triangle(vertices,polygon[indices[index]],polygon[indices[index+1]],polygon[indices[index+2]],context.Terrain.WATER_LEVEL)
		else: vertices=context._water_scanline_union(component,context.Terrain.WATER_LEVEL)
		if not vertices.is_empty(): result.changes[key]=vertices
	for group: Array in banks: result.contours+=group.size()
	context.water_fingerprint=fingerprint
	result["prepare_ms"]=float(Time.get_ticks_usec()-began)/1000.0
	return result

func _begin_staging(owner: Node3D, result: Dictionary) -> void:
	staging = running
	running = null
	staging.name = "BudgetEditStaging"
	staging.visible = false
	staging.record_only = false
	owner.add_child(staging)
	staging.materials = owner.materials
	staging.mesh_batcher = owner.mesh_batcher
	staging.bakery_smoke = owner.bakery_smoke
	staging.road_material = owner._shared_road_material()
	staging.promenade.materials = owner.promenade.materials
	staging.promenade.evening = owner.promenade.evening
	staging.promenade.concert = owner.promenade.concert
	staging.conservatory.glass_material = owner.conservatory.ensure_material()
	staging.conservatory.clockwork_glass_material = owner.conservatory.ensure_material(true)
	staging.conservatory.palace_glass_material = owner.conservatory.ensure_palace_material()
	staging.conservatory.evening = owner.conservatory.evening
	staging.conservatory.response = owner.conservatory.response
	staging.contact_material = owner.contact_material
	staging.terrain_surface.material = owner.terrain_surface.material
	staging.path_edge.material = owner.path_edge.material
	staging.water_field.texture = owner.water_field.texture
	staging.water_material=owner.water_material
	staging.ground_contact_field.texture = owner.ground_contact_field.texture
	staging.path_pebbles.meshes = owner.path_pebbles.meshes
	staging.path_pebbles.material = owner.path_pebbles.material
	staging.path_pebbles.detail = owner.path_pebbles.detail
	staging.foliage = owner.foliage
	staging.tree_meshes = owner.tree_meshes
	staging.resonance.arc_mesh = owner.resonance.arc_mesh
	staging.cafes.layer = Node3D.new()
	staging.add_child(staging.cafes.layer)
	staging.cafes.material = owner.cafes.material
	staging.cafes.meshes = owner.cafes.meshes
	staging.courtyards.source_parts=owner.courtyards.source_parts
	staging.courtyards.floor_material=owner.courtyards.floor_material
	staging.courtyards.stone_material=owner.courtyards.stone_material
	staging.courtyards.setup(staging)
	staging.buildings = Node3D.new()
	staging.roads_layer = Node3D.new()
	staging.water_layer = Node3D.new()
	staging.vegetation_layer = Node3D.new()
	staging.districts_layer = Node3D.new()
	staging.districts_fingerprint = owner.districts_fingerprint
	for layer: Node3D in [staging.buildings,staging.roads_layer,staging.water_layer,staging.vegetation_layer,staging.meadow,staging.shore,staging.lilypads,staging.districts_layer]: staging.add_child(layer)
	staging.meadow.record_only = false
	staging.meadow.meshes = owner.meadow.meshes
	staging.meadow.materials = owner.meadow.materials
	staging.meadow.detail = owner.meadow.detail
	staging.meadow.water_field = owner.meadow.water_field
	staging.shore.record_only = false
	staging.shore.meshes = owner.shore.meshes
	staging.shore.materials = owner.shore.materials
	staging.shore.detail = owner.shore.detail
	staging.lilypads.record_only = false
	staging.lilypads.meshes = owner.lilypads.meshes
	staging.lilypads.materials = owner.lilypads.materials
	tasks.clear()
	task_index = 0
	staging.set_meta("result",result)
	for key: String in result.water.changes: tasks.append(["water_surface",key,result.water.changes[key]])
	if owner.districts_visible: tasks.append(["districts"])
	stats.worker_ms = result.worker_ms
	stats.worker_stages = result.worker_stages
	for change: Array in result.terrain_blocks: tasks.append(["terrain",change[0],change[1],change[2]])
	for house: Dictionary in result.houses:
		tasks.append(["house",house])
		tasks.append(["house_finish",house])
	for id: String in result.cafes.changes: tasks.append(["cafe",id,result.cafes.changes[id],result.cafes.live])
	for id: String in result.courtyards.changes: tasks.append(["courtyard",id,result.courtyards.changes[id],result.courtyards.live])
	for road: Dictionary in result.roads: tasks.append(["road",road,result.road_data[str(road.id)]])
	var rebuilt := {}
	for road: Dictionary in result.roads: rebuilt[str(road.id)] = true
	for road: Dictionary in staging.state.roads:
		if rebuilt.has(str(road.id)): continue
		if str(road.get("style","path"))=="promenade": continue
		var old: Node3D = owner.road_roots.get(str(road.id))
		if old != null and old.get_meta("pebbles_signature",[]) != result.pebbles[str(road.id)]: tasks.append(["pebbles",road])
	for block: Vector2i in staging.prepared_vegetation: tasks.append(["vegetation",block,staging.prepared_vegetation[block]])
	for block: Vector2i in staging.meadow.prepared_blocks: tasks.append(["meadow",block,staging.meadow.prepared_blocks[block]])
	for block: Vector2i in staging.shore.prepared_blocks: tasks.append(["shore",block,staging.shore.prepared_blocks[block]])
	for block: Vector2i in staging.lilypads.prepared_blocks: tasks.append(["lilypads",block,staging.lilypads.prepared_blocks[block]])

func _step(task: Array) -> void:
	match str(task[0]):
		"water_surface":
			var node: MeshInstance3D = staging._triangles(staging.water_layer,task[2],Color.WHITE)
			node.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
			node.material_override=staging.water_material
			staging.water_components[str(task[1])]=node
		"districts": staging._rebuild_districts()
		"terrain":
			var block: Vector2i = task[1]
			var root: Node3D = staging.terrain_surface._build_block(task[2],block,task[3])
			# Invisible staging alone does not suppress physics picking.
			for body: StaticBody3D in root.find_children("*","StaticBody3D",true,false):
				body.collision_layer = 0
				body.collision_mask = 0
			staging.terrain_surface.add_child(root)
			staging.terrain_surface.blocks[block] = root
		"house":
			var house: Dictionary = task[1]
			var root: Node3D = staging._house(house)
			for body: StaticBody3D in root.find_children("*","StaticBody3D",true,false):
				body.set_meta("pending_collision_layer",body.collision_layer)
				body.set_meta("pending_collision_mask",body.collision_mask)
				body.collision_layer = 0
				body.collision_mask = 0
			staging.house_roots[str(house.id)] = root
		"house_finish":
			var house: Dictionary = task[1]
			var root: Node3D = staging.house_roots[str(house.id)]
			staging._merge_meshes(root)
			staging.resonance.build(staging,house,root)
		"cafe":
			staging.cafes.install(staging,{"changes":{task[1]:task[2]},"live":task[3]})
		"courtyard":
			staging.courtyards.install(staging,{"changes":{task[1]:task[2]},"live":task[3]})
			for body: StaticBody3D in staging.courtyards.roots[task[1]].find_children("*","StaticBody3D",true,false):
				body.collision_layer=0
		"road":
			# Day/phrase state can change while CPU preparation runs. New shared
			# lamp materials inherit the live state at installation, not request time.
			staging.promenade.evening=staging.get_parent().promenade.evening
			staging.promenade.concert=staging.get_parent().promenade.concert
			var root: Node3D = staging._install_road_data(task[1],task[2],staging.roads_layer)
			for body: StaticBody3D in root.find_children("*","StaticBody3D",true,false):
				body.set_meta("pending_collision_layer",body.collision_layer)
				body.collision_layer=0
			staging.road_roots[str(task[1].id)]=root
		"pebbles":
			var root := Node3D.new()
			root.name = "PebbleReplacement_"+str(task[1].id)
			staging.roads_layer.add_child(root)
			staging._update_road_pebbles(task[1],root)
			root.set_meta("replacement_id",str(task[1].id))
		"vegetation": staging._rebuild_vegetation_block(task[1],task[2])
		"meadow":
			var count := 0
			for records: Array in task[2].values(): count += records.size()
			if count == 0: return
			var root := Node3D.new()
			var block: Vector2i = task[1]
			root.name = "Meadow_%d_%d" % [block.x,block.y]
			root.position = Vector3(block.x*8.0,0,block.y*8.0)
			root.set_meta("meadow_block",block)
			for part: String in task[2]: staging.meadow._make_batch(root,part,task[2][part])
			staging.meadow.add_child(root)
			staging.meadow.blocks[block] = root
		"shore":
			if task[2].is_empty(): return
			var root := Node3D.new()
			var block: Vector2i = task[1]
			root.name = "Shore_%d_%d" % [block.x,block.y]
			root.position = Vector3(block.x*8.0,0,block.y*8.0)
			root.set_meta("candidates",task[2])
			for part: String in ["grass","reed","stone"]:
				var rows: Array = []
				for record: Dictionary in task[2]:
					if record.part == part: rows.append(record)
				staging.shore._make_batch(root,part,rows)
			staging.shore.add_child(root)
			staging.shore.blocks[block] = root

		"lilypads":
			if task[2].is_empty(): return
			var root := Node3D.new()
			var block: Vector2i = task[1]
			root.name = "Pond_%d_%d" % [block.x,block.y]
			root.position = Vector3(block.x*8.0,0,block.y*8.0)
			root.set_meta("candidates",task[2])
			for part: String in ["leaf","flower"]:
				var rows: Array = []
				for record: Dictionary in task[2]:
					if record.part==part: rows.append(record)
				staging.lilypads._make_batch(root,part,rows)
			staging.lilypads.add_child(root)
			staging.lilypads.blocks[block] = root

func poll(owner: Node3D, budget_ms: float, allow_commit: bool) -> Dictionary:
	var start := Time.get_ticks_usec()
	if worker != null and not worker.is_alive():
		var result: Dictionary = worker.wait_to_finish()
		worker = null
		if int(running.get_meta("generation")) != generation:
			_dispose_context(running)
			running = null
			stats.discarded = int(stats.get("discarded",0))+1
			_start_latest()
		else: _begin_staging(owner,result)
	while staging != null and task_index < tasks.size() and float(Time.get_ticks_usec()-start)/1000.0 < budget_ms:
		var task_kind:=str(tasks[task_index][0])
		var units:=_task_units(tasks[task_index])
		var spent:=float(Time.get_ticks_usec()-start)/1000.
		# Unknown/expensive task types start a fresh frame. Known tasks leave
		# room for their measured high-water cost instead of starting at 3.49ms.
		var scale:=maxf(1.,float(units)/float(_task_max_units.get(task_kind,maxi(1,units))))
		var expected:=float(_task_peak_ms.get(task_kind,3.5))*scale*1.2+.08 if units>0 else .03
		if spent>.08 and spent+expected>budget_ms-.08:break
		var step_start := Time.get_ticks_usec()
		_step(tasks[task_index])
		var step_ms:=float(Time.get_ticks_usec()-step_start)/1000.
		if units>0:
			_task_peak_ms[task_kind]=maxf(float(_task_peak_ms.get(task_kind,0.)),step_ms)
			_task_max_units[task_kind]=maxi(int(_task_max_units.get(task_kind,0)),units)
		if step_ms>_max_step_ms:stats.max_step_task=str(tasks[task_index][0])
		task_index += 1
		_max_step_ms = maxf(_max_step_ms,step_ms)
	var ready := staging != null and task_index == tasks.size()
	var committed := false
	stats["tasks_complete"] = task_index
	stats["tasks_total"] = tasks.size()
	if ready and allow_commit and int(staging.get_meta("generation"))==generation and float(Time.get_ticks_usec()-start)/1000.0 < 0.5:
		var step_start := Time.get_ticks_usec()
		_commit(owner)
		var step_ms:=float(Time.get_ticks_usec()-step_start)/1000.
		if step_ms>_max_step_ms:stats.max_step_task="commit"
		_max_step_ms = maxf(_max_step_ms,step_ms)
		committed = true
	var work_ms := float(Time.get_ticks_usec()-start)/1000.0
	stats["max_poll_ms"]=maxf(float(stats.get("max_poll_ms",0.)),work_ms)
	_account_work(work_ms)
	_main_ms += work_ms
	stats["main_ms"] = _main_ms
	stats["max_step_ms"] = _max_step_ms
	return {"generation":generation,"committed_generation":committed_generation,"pending":worker!=null or queued!=null or staging!=null,"ready":ready,"committed":committed,"work_ms":work_ms,"stats":stats.duplicate()}

func _replace(owner_roots: Dictionary, staged_roots: Dictionary, parent: Node3D, live: Dictionary) -> void:
	for key: Variant in owner_roots.keys():
		if not live.has(key) or staged_roots.has(key):
			var old: Node3D = owner_roots[key]
			old.get_parent().remove_child(old)
			old.queue_free()
			owner_roots.erase(key)
	for key: Variant in staged_roots:
		var root: Node3D = staged_roots[key]
		root.reparent(parent,false)
		owner_roots[key] = root

func _commit(owner: Node3D) -> void:
	hold_retirement_this_frame()
	var stages := {}
	var stage_start := Time.get_ticks_usec()
	var result: Dictionary = staging.get_meta("result")
	if int(staging.get_meta("generation"))!=generation: return
	# Publish this generation's height queries, visible triangles and picking
	# together. A discarded worker has never touched the live field or chunks.
	# The worker has joined and this staging context is retired below. Move
	# its complete derived solvers instead of cloning every road profile and
	# terrain history again inside the atomic publication frame.
	retired_solvers.append(owner.state._ground_terrain)
	retired_solvers.append(owner.state._terrain_protection)
	owner.state._ground_terrain=staging.state._ground_terrain
	owner.state._ground_revision = owner.state.revision
	owner.state._raw_ground_revision = owner.state.revision
	owner.state._road_heights=staging.state._road_heights
	owner.state._terrain_protection=staging.state._terrain_protection
	owner.state._terrain_protection.cafes.rebind_city(staging.state,owner.state)
	owner.state._courtyards=staging.state._courtyards
	owner.state._courtyard_plans_cache=staging.state._courtyard_plans_cache
	owner.state._courtyard_revision=owner.state.revision
	owner.state._site_blessings=staging.state._site_blessings
	owner.state._prosperity_revision=owner.state.revision
	staging.era_road_field.texture=owner.era_road_field.texture
	staging.era_road_field.upload()
	owner.era_road_field=staging.era_road_field
	owner._bind_era_road_field()
	var live_terrain := {}
	for block: Vector2i in owner.terrain_surface.blocks: live_terrain[block] = true
	for block: Vector2i in staging.terrain_surface.blocks: live_terrain[block] = true
	_replace(owner.terrain_surface.blocks,staging.terrain_surface.blocks,owner.terrain_surface,live_terrain)
	for root: Node3D in staging.terrain_surface.blocks.values():
		for body: StaticBody3D in root.find_children("*","StaticBody3D",true,false):
			body.collision_layer = 2
			body.collision_mask = 1
	owner.terrain_surface.fingerprints = staging.terrain_surface.fingerprints.duplicate()
	owner.terrain_surface.stats = staging.terrain_surface.stats.duplicate(true)
	owner.terrain_surface.stats.triangles = 0
	for root: Node3D in owner.terrain_surface.blocks.values():
		owner.terrain_surface.stats.triangles += int(root.get_meta("triangles"))
	staging.terrain_surface.blocks.clear()
	if bool(result.background_changed): owner._rebuild_background_trees()
	stages.terrain_ms = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	if bool(result.water.changed):
		_replace(owner.water_components,staging.water_components,owner.water_layer,result.water.live)
		owner.water_fingerprint=int(result.water.fingerprint)
		var triangles := 0
		for surface: MeshInstance3D in owner.water_components.values():
			for index in range(surface.mesh.get_surface_count()): triangles+=surface.mesh.surface_get_array_index_len(index)/3
		owner.water_edit_stats={"changed":true,"elapsed_ms":float(result.water.get("prepare_ms",0.0)),"contours":result.water.contours,"triangles":triangles,"strokes":owner.state.waters.size(),"budgeted":true}
	else:
		owner.water_edit_stats=owner.water_edit_stats.duplicate()
		owner.water_edit_stats.changed=false
	staging.water_field.upload()
	staging.ground_contact_field.upload()
	owner.water_field=staging.water_field
	owner.water_field._state=owner.state
	# The retained texture arrays publish their dirty layers here, atomically
	# with geometry. Shared ground/grass/water bindings keep the same RID.
	stages.water_ms=float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start=Time.get_ticks_usec()
	var live_houses := {}
	var live_roads := {}
	for house: Dictionary in staging.state.houses: live_houses[str(house.id)] = true
	for road: Dictionary in staging.state.roads: live_roads[str(road.id)] = true
	for id: String in owner.house_roots:
		if not live_houses.has(id) or staging.house_roots.has(id): owner.resonance.forget(id)
	_replace(owner.house_roots,staging.house_roots,owner.buildings,live_houses)
	_replace(owner.road_roots,staging.road_roots,owner.roads_layer,live_roads)
	for root: Node3D in staging.road_roots.values():
		for body: StaticBody3D in root.find_children("*","StaticBody3D",true,false):
			body.collision_layer=int(body.get_meta("pending_collision_layer",2))
	for id: String in staging.house_roots:
		owner.resonance.rigs[id] = staging.resonance.rigs[id]
		owner.resonance.build_count += 1
		for body: StaticBody3D in staging.house_roots[id].find_children("*","StaticBody3D",true,false):
			body.collision_layer = int(body.get_meta("pending_collision_layer",1))
			body.collision_mask = int(body.get_meta("pending_collision_mask",1))
	for root: Node3D in staging.roads_layer.get_children():
		if not root.has_meta("replacement_id"): continue
		var id := str(root.get_meta("replacement_id"))
		var old: Node3D = owner.road_roots[id].get_node_or_null("PathPebbles")
		if old != null:
			owner.road_roots[id].remove_child(old)
			old.queue_free()
		var pebbles := root.get_node("PathPebbles")
		pebbles.reparent(owner.road_roots[id],false)
		for field: String in ["pebbles","pebbles_signature"]: owner.road_roots[id].set_meta(field,root.get_meta(field))
	stages.structures_ms = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	var live_blocks := {}
	for key: Variant in owner.vegetation_blocks: live_blocks[key] = true
	for key: Variant in staging.prepared_vegetation: live_blocks[key] = not staging.prepared_vegetation[key].is_empty()
	for key: Variant in live_blocks.keys():
		if not live_blocks[key]: live_blocks.erase(key)
	_replace(owner.vegetation_blocks,staging.vegetation_blocks,owner.vegetation_layer,live_blocks)
	live_blocks.clear()
	for key: Variant in owner.meadow.blocks: live_blocks[key] = true
	for key: Variant in staging.meadow.prepared_blocks:
		if staging.meadow.blocks.has(key): live_blocks[key] = true
		else:
			live_blocks.erase(key)
			owner.meadow.block_counts.erase(key)
			owner.meadow.base_counts.erase(key)
	_replace(owner.meadow.blocks,staging.meadow.blocks,owner.meadow,live_blocks)
	# The camera may have moved while the worker and staging batches ran.
	owner.meadow.apply_view_detail()
	live_blocks.clear()
	for key: Variant in owner.shore.blocks: live_blocks[key] = true
	for key: Variant in staging.shore.prepared_blocks:
		if staging.shore.blocks.has(key): live_blocks[key] = true
		else:
			live_blocks.erase(key)
			owner.shore.counts.erase(key)
	_replace(owner.shore.blocks,staging.shore.blocks,owner.shore,live_blocks)
	live_blocks.clear()
	for key: Variant in owner.lilypads.blocks: live_blocks[key] = true
	for key: Variant in staging.lilypads.prepared_blocks:
		if staging.lilypads.blocks.has(key): live_blocks[key] = true
		else: live_blocks.erase(key)
	_replace(owner.lilypads.blocks,staging.lilypads.blocks,owner.lilypads,live_blocks)
	owner.lilypads.fingerprints.merge(staging.lilypads.fingerprints,true)
	owner.lilypads._geometry = staging.lilypads._geometry
	owner.lilypads.last_changed = staging.lilypads.last_changed
	owner.lilypads.elapsed_ms = staging.lilypads.elapsed_ms

	owner.ground_contact_field = staging.ground_contact_field
	owner.building_context = staging.building_context
	owner.building_input_signature = staging.building_input_signature
	owner.state._junctions = staging.state._junctions
	owner._bind_ground_contact_field()
	stages.nature_ms = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	for id: String in staging.house_fingerprints.keys():
		if not live_houses.has(id): staging.house_fingerprints.erase(id)
	for id: String in staging.road_fingerprints.keys():
		if not live_roads.has(id):
			staging.road_fingerprints.erase(id)
			staging.road_water_signatures.erase(id)
	for field: String in ROAD_FIELDS+VEGETATION_FIELDS+["house_fingerprints","road_fingerprints","road_layout_signature","vegetation_obstacle_signature"]: owner.set(field,staging.get(field))
	var live_plants := {}
	for plant: Dictionary in staging.state.plants: live_plants[str(plant.id)] = true
	for id: String in owner.meadow.plant_candidates.keys():
		if live_plants.has(id): continue
		owner.meadow._evict_plant_samples(owner.meadow.plant_candidates[id])
		owner.meadow.plant_candidates.erase(id)
		owner.meadow.plant_candidate_fingerprints.erase(id)
	for field: String in MEADOW_FIELDS:_merge_value_cache(owner.meadow.get(field),staging.meadow.get(field))
	owner.meadow.palace_centers=staging.meadow.palace_centers.duplicate()
	for field: String in SHORE_FIELDS:_merge_value_cache(owner.shore.get(field),staging.shore.get(field))
	for id: String in owner.meadow.entrance_cache.keys():
		if not live_houses.has(id): owner.meadow.entrance_cache.erase(id)
	for id: String in owner.shore._entrance_cache.keys():
		if not live_houses.has(id): owner.shore._entrance_cache.erase(id)
	owner.meadow.last_changed = staging.meadow.last_changed
	owner.meadow.elapsed_ms = staging.meadow.elapsed_ms
	owner.meadow.stage_ms = staging.meadow.stage_ms
	owner.shore.last_changed = staging.shore.last_changed
	owner.shore.elapsed_ms = staging.shore.elapsed_ms
	owner.shore._geometry = staging.shore._geometry
	for field:String in ["_geometry","_record_cache","_layout_cache","footprints","doors","segments"]:
		var prior:Variant=owner.path_pebbles.get(field);var incoming:Variant=staging.path_pebbles.get(field)
		if not is_same(prior,incoming):retired_values.append(prior)
		owner.path_pebbles.set(field,incoming)
	owner.path_pebbles.batches.append_array(staging.path_pebbles.batches)
	owner.path_pebbles.apply_view_detail()
	owner.path_pebbles.city = owner.state
	owner.promenade.adopt_clearance(staging.promenade,owner.state)
	stages.caches_ms = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	# A newer held brush may already be on screen while this older committed
	# stroke is prepared. Publishing it must not erase the newer live draft.
	if not bool(owner.preview.get_meta("live_road_draft",false)): owner.clear_preview()
	if owner.districts_visible and staging.districts_fingerprint != owner.districts_fingerprint:
		owner._clear(owner.districts_layer)
		for child: Node in staging.districts_layer.get_children(): child.reparent(owner.districts_layer,false)
		owner.districts_fingerprint = staging.districts_fingerprint
	owner.update_craft_progress()
	stages.craft_ms = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	_replace(owner.cafes.roots,staging.cafes.roots,owner.cafes.layer,result.cafes.live)
	for id: String in staging.cafes.fingerprints.keys():
		if not result.cafes.live.has(id): staging.cafes.fingerprints.erase(id)
	for id: String in staging.cafes.placement_inputs.keys():
		if not result.cafes.live.has(id): staging.cafes.placement_inputs.erase(id)
	owner.cafes.fingerprints = staging.cafes.fingerprints
	owner.cafes.placement_inputs = staging.cafes.placement_inputs
	owner.cafes.last_revision = int(owner.state.revision)
	owner.cafes.build_count += staging.cafes.build_count
	stages.cafe_ms = float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	_replace(owner.courtyards.roots,staging.courtyards.roots,owner.courtyards.layer,result.courtyards.live)
	for root: Node3D in staging.courtyards.roots.values():
		for body: StaticBody3D in root.find_children("*","StaticBody3D",true,false): body.collision_layer=4
	owner.courtyards.fingerprints=staging.courtyards.fingerprints.duplicate()
	owner.courtyards.build_count+=staging.courtyards.build_count
	stages.courtyard_ms=float(Time.get_ticks_usec()-stage_start)/1000.0
	stage_start = Time.get_ticks_usec()
	owner.rebuild_stats = staging.rebuild_stats.duplicate()
	owner.rebuild_stats["architecture"] = owner.building_context.stats.duplicate()
	owner.rebuild_stats["contact_field"] = owner.ground_contact_field.stats.duplicate()
	owner.rebuild_stats["terrain"] = owner.terrain_surface.stats.duplicate(true)
	owner.rebuild_stats["water_field"] = owner.water_field.diagnostics()
	owner.rebuild_stats["water"] = owner.water_edit_stats.duplicate()
	owner.rebuild_stats.merge({"houses_changed":result.houses.size(),"roads_changed":result.roads.size(),"worker_ms":result.worker_ms,"budgeted":true},true)
	var committed_changes: Dictionary = staging.get_meta("changes",{})
	owner.rebuild_stats["change_labels"] = committed_changes.get("labels",[]).duplicate()
	owner.rebuild_stats["change_counts"] = committed_changes.get("counts",{}).duplicate()
	committed_generation = generation
	retired_values.append(_published_snapshot)
	_published_snapshot = staging.get_meta("snapshot")
	_discard_staging(true)
	stages.dispose_ms = float(Time.get_ticks_usec()-stage_start)/1000.0
	stats.commit_stages = stages

func _discard_staging(retire:bool=false) -> void:
	if staging == null: return
	if retire:
		staging.set_process(false);retired_contexts.append(staging)
	else:_dispose_context(staging)
	staging = null
	tasks.clear()
	task_index = 0

func _dispose_context(context: Node3D) -> void:
	if context == null: return
	if context.meadow != null and context.meadow.get_parent() == null: context.meadow.free()
	if context.shore != null and context.shore.get_parent() == null: context.shore.free()
	if context.lilypads != null and context.lilypads.get_parent() == null: context.lilypads.free()
	if context.wildlife != null and context.wildlife.get_parent() == null: context.wildlife.free()
	if context.get_parent() != null: context.get_parent().remove_child(context)
	context.free()

func cancel() -> void:
	generation += 1
	_discard_staging()
	if queued != null:
		_dispose_context(queued)
		queued = null

func close() -> void:
	cancel()
	if worker != null:
		worker.wait_to_finish()
		worker = null
		_dispose_context(running)
		running = null
	retired_values.clear()
	retired_solvers.clear()
	for context:Node3D in retired_contexts:_dispose_context(context)
	retired_contexts.clear()
