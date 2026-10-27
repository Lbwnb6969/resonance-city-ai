extends SceneTree
## Product integration, deliberately using public edit/history/save transactions.
## Run serially: this fixture owns a real World3D and exercises the CPU worker.
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Frontage = preload("res://scripts/world/city_creation_frontage.gd")
const Life = preload("res://scripts/world/city_creation_life.gd")
var checks := 0
var failures: Array[String] = []
var city: RefCounted
var render: Node3D

func _initialize() -> void:
	_run.call_deferred()

func _run() -> void:
	city = State.new()
	city.initialize()
	# No default save/load or demo node: personal work is never opened or written.
	city.houses.clear()
	city.roads.clear()
	city.plants.clear()
	city.waters.clear()
	city.districts.clear()
	var a := _add(Vector2(-14,-11))
	var far := _add(Vector2(-5,-11))
	if a.is_empty() or far.is_empty():
		_finish()
		return
	render = Renderer.new()
	root.add_child(render)
	render.setup(city)
	var before_a: int = render.house_roots[a].get_instance_id()
	var before_far: int = render.house_roots[far].get_instance_id()
	var a_cell: String = _house(a).cells[0].id
	var b := _add(Vector2(-12.2,-11))
	if b.is_empty():
		render.queue_free()
		await process_frame
		_finish()
		return
	render.rebuild()
	_check(render.house_roots[a].get_instance_id()!=before_a,"adding adjacent host invalidates old neighboring roof/root")
	_check(render.house_roots[far].get_instance_id()==before_far,"adding adjacent host retains distant cached root")
	_check(_house(a).cells[0].id==a_cell and city.houses.size()==3,"join preserves separate household and cell identities")
	_check(render.building_context.joined(a) and render.building_context.joined(b),"public exact-edge placement joins roof across hosts")
	_check(not _door(a,Vector2i.RIGHT) and not _door(b,Vector2i.LEFT),"ordinary shared wall never gets an entrance")
	var a_node: Node3D = render.house_roots[a].get_node(NodePath(a_cell))
	var interior_faces := 0
	var exterior_faces := 0
	for child: Node in a_node.get_children():
		if not child is Node3D or child is StaticBody3D or child is MeshInstance3D: continue
		if child.position.is_equal_approx(Vector3(0.9,0,0)): interior_faces += 1
		if child.position.is_equal_approx(Vector3(0,0,-0.9)): exterior_faces += 1
	_check(interior_faces==0 and exterior_faces==1,"actual facade hierarchy suppresses internal decoration and retains outer wall")
	await physics_frame
	await physics_frame
	for id: String in [a,b]:
		var house := _house(id)
		var at := Vector3(float(house.origin[0]),0,float(house.origin[1]))
		var hit := _ray(at+Vector3(0,5,0),at+Vector3(0,0.3,0))
		_check(_hit_is(hit,id,str(house.cells[0].id)),"real roof ray preserves original host/cell "+id)
	var outer_hit := _ray(Vector3(-14,0.8,-14),Vector3(-14,0.8,-11))
	_check(_hit_is(outer_hit,a,a_cell),"real outer wall ray remains pickable")
	_check(_occupied(Vector3(-13.15,0.8,-11),a) and _occupied(Vector3(-13.05,0.8,-11),b),"ordinary joined rooms remain genuinely occupied on both sides of seam")
	_check_roof_owner(a)
	_check_roof_owner(b)
	_check_music(a,b,far)
	var joined_house_data: Array = city.houses.duplicate(true)
	var save_path := "user://joined_buildings_%d.json" % Time.get_ticks_usec()
	_check(city.save_city(save_path).ok,"joined authored state saves to isolated fixture file")
	var restored := State.new()
	_check(restored.load_city(save_path).ok and restored.houses==joined_house_data,"real disk JSON reload preserves independent original house/cell data")
	var joined_root: int = render.house_roots[a].get_instance_id()
	_check(city.remove_house(b).ok,"remove neighboring host through public transaction")
	render.rebuild()
	_check(render.house_roots[a].get_instance_id()!=joined_root and not render.building_context.joined(a),"remove invalidates exposed neighbor and removes joined roof")
	_check(not render.house_roots[a].has_meta("roof_patches") and not render.house_roots.has(b),"removed host leaves neither its root nor stale neighbor roof patches")
	_check(city.undo().ok,"undo restores removed host")
	render.rebuild()
	_check(city.houses==joined_house_data and render.building_context.joined(a),"undo restores exact identities and joined structure")
	_check(city.redo().ok and city.undo().ok,"redo/undo remain independent household transactions")
	render.rebuild()
	var south := _add(Vector2(-14,-9.2))
	_check(not south.is_empty(),"public placement covers original south doorway")
	render.rebuild()
	_check(not _door(a,Vector2i.DOWN),"covered former south door is removed")
	var exits: Array = city.house_entrances(a)
	_check(render.meadow.entrance_cache[a].records==exits,"neighbor-only edit refreshes real grass doorway clearance cache")
	_check(render.shore._entrance_cache[a].records==exits,"neighbor-only edit refreshes shore doorway clearance cache")
	var usable := not exits.is_empty()
	for entrance: Dictionary in exits:
		usable = usable and entrance.side!=Vector2i.DOWN and Frontage.approach_clear(_house(a),entrance.wall_at,entrance.at,city.houses)
	_check(usable,"fallback chooses genuine exposed approach, not a renamed or phantom door")
	_check(not _add(Vector2(-14,-12.8)).is_empty() and not _add(Vector2(-15.8,-11)).is_empty(),"public neighbors enclose remaining north and west walls")
	_check(city.house_entrances(a).is_empty(),"fully enclosed household never invents an exterior doorway")
	var life := Life.new()
	root.add_child(life)
	life.set_process(false)
	life.setup(city)
	var indoor := false
	for resident: Dictionary in life.residents:
		if resident.home_id==a: indoor = not resident.node.visible
	_check(indoor,"actual new enclosed resident stays indoors rather than spawning in another house")
	life.queue_free()
	await process_frame
	# Seven separately authored houses form an open U. Test the built meshes,
	# not only the helper's rectangles; a bounding-box roof would cover the court.
	var u_ids: Array[String] = []
	for offset: Vector2i in [Vector2i(-1,-1),Vector2i(0,-1),Vector2i(1,-1),Vector2i(-1,0),Vector2i(1,0),Vector2i(-1,1),Vector2i(1,1)]:
		var id := _add(Vector2(-10,4)+Vector2(offset)*1.8)
		if not id.is_empty():
			u_ids.append(id)
			_check(city.set_house_style(id,"timber").ok,"courtyard fixture explicitly uses the JoinedRoof architecture")
	render.rebuild()
	_check(u_ids.size()==7,"U courtyard uses seven actual public household additions")
	var uncovered := true
	var triangles := 0
	for id: String in u_ids:
		_check_roof_owner(id)
		var root_node: Node3D = render.house_roots[id]
		for mesh: Node in root_node.find_children("*","MeshInstance3D",true,false):
			if not mesh.material_override is ShaderMaterial: continue
			if mesh.material_override.shader!=Renderer.JoinedRoofShader: continue
			for surface in range(mesh.mesh.get_surface_count()):
				var arrays: Array = mesh.mesh.surface_get_arrays(surface)
				var vertices: PackedVector3Array = arrays[Mesh.ARRAY_VERTEX]
				var indices: PackedInt32Array = arrays[Mesh.ARRAY_INDEX]
				for i in range(0,indices.size(),3):
					triangles += 1
					var p0: Vector3 = mesh.global_transform*vertices[indices[i]]
					var p1: Vector3 = mesh.global_transform*vertices[indices[i+1]]
					var p2: Vector3 = mesh.global_transform*vertices[indices[i+2]]
					uncovered = uncovered and not Geometry2D.is_point_in_polygon(Vector2(-10,4),PackedVector2Array([Vector2(p0.x,p0.z),Vector2(p1.x,p1.z),Vector2(p2.x,p2.z)]))
	_check(triangles>0 and uncovered,"rendered joined roof triangles leave real courtyard center open")
	await _check_budget(a,b,south,far,before_far)
	var coordinator: RefCounted = render.budget_rebuild
	render.queue_free()
	await process_frame
	_check(coordinator.worker==null and coordinator.running==null and coordinator.queued==null and coordinator.staging==null,"renderer exit releases every worker/context")
	_finish()

func _check_budget(a: String,b: String,south: String,far: String,far_identity: int) -> void:
	var visible_context: RefCounted = render.building_context
	var signature: Variant = visible_context.signature(a).duplicate(true)
	var roots := _root_ids()
	var old_roof: Variant = render.house_roots[a].get_meta("roof_patches",[]).duplicate(true)
	_check(city.remove_house(south).ok,"budget scenario changes genuine neighbor topology")
	render.request_budget_rebuild()
	var ready := await _poll(false)
	_check(ready.get("ready",false),"hidden budget installation reaches ready")
	_check(render.building_context==visible_context and render.building_context.signature(a)==signature,"worker/hidden staging do not replace or mutate visible architectural context")
	_check(_root_ids()==roots and render.house_roots[a].get_meta("roof_patches",[])==old_roof,"preparation leaves published roots and roof metadata unchanged")
	if render.budget_rebuild.staging!=null:
		var staging: Node3D = render.budget_rebuild.staging
		_check(staging.building_context!=visible_context,"staging owns architectural context")
		var disabled := true
		for id: String in staging.house_roots:
			for body: Node in staging.house_roots[id].find_children("*","StaticBody3D",true,false):
				disabled = disabled and body.collision_layer==0 and body.collision_mask==0
		_check(disabled,"all prepared replacement picking bodies stay disabled")
	render.cancel_budget_rebuild()
	_check(render.building_context==visible_context and _root_ids()==roots,"cancel ready generation preserves visible context and roots")
	# The state was already edited. Supersede two running requests with genuine
	# history, so a stale south-neighbor roof cannot win after latest publication.
	_check(city.undo().ok,"undo south removal before first worker")
	render.request_budget_rebuild()
	_check(city.redo().ok,"redo south removal while first worker runs")
	render.request_budget_rebuild()
	_check(city.undo().ok,"latest rapid undo restores same southern household")
	var token: int = render.request_budget_rebuild()
	var published := await _poll(true)
	_check(published.get("committed",false) and int(published.get("committed_generation",-1))==token,"only latest fast history generation publishes")
	# The rapid history above deliberately returns to the published layout and
	# can legitimately produce zero install tasks. Publish a real topology edit
	# in both directions before comparing against a fresh synchronous renderer.
	var enclosed_root: int = render.house_roots[a].get_instance_id()
	var enclosed_signature: Variant = render.building_context.signature(a).duplicate(true)
	var enclosed_patches: Array = render.building_context.roof_patches(a).duplicate(true)
	_check(city.remove_house(south).ok,"real budget publication removes southern neighboring household")
	var removal_token: int = render.request_budget_rebuild()
	var removed := await _poll(true)
	_check(removed.get("committed",false) and int(removed.get("committed_generation",-1))==removal_token and int(removed.get("stats",{}).get("tasks_total",0))>0,"real changed roof generation completes nonempty installation and commits")
	var exposed_root: Node3D = render.house_roots[a]
	var south_published := false
	for entrance: Dictionary in exposed_root.get_meta("entrances",[]):
		if entrance.side==Vector2i.DOWN and not entrance.get("passage",false): south_published=true
	_check(not render.house_roots.has(south) and exposed_root.get_instance_id()!=enclosed_root,"same committed generation removes neighbor root and replaces affected surviving root")
	_check(south_published and _door(a,Vector2i.DOWN),"same published root restores actual exposed south facade entrance alongside authoritative door")
	_check(render.building_context.signature(a)!=enclosed_signature and render.building_context.roof_patches(a)!=enclosed_patches,"same publication changes architectural context and actual roof vertices")
	_check(render.house_roots[far].get_instance_id()==far_identity,"real topology publication preserves distant cached root")
	var exposed_identity: int = exposed_root.get_instance_id()
	_check(city.undo().ok,"undo real southern-house removal before second changed publication")
	var restoration_token: int = render.request_budget_rebuild()
	var rejoined := await _poll(true)
	_check(rejoined.get("committed",false) and int(rejoined.get("committed_generation",-1))==restoration_token and int(rejoined.get("stats",{}).get("tasks_total",0))>0,"restoration also installs nonempty changed generation")
	var covered_published := true
	for entrance: Dictionary in render.house_roots[a].get_meta("entrances",[]):
		if entrance.side==Vector2i.DOWN and not entrance.get("passage",false): covered_published=false
	_check(render.house_roots.has(south) and render.house_roots[a].get_instance_id()!=exposed_identity and covered_published,"restored neighbor and replaced surviving facade publish without stale exposed south door")
	_check(render.building_context.signature(a)==enclosed_signature and render.building_context.roof_patches(a)==enclosed_patches,"undo restores exact original joined roof geometry and context")
	_check(render.house_roots[far].get_instance_id()==far_identity,"restoration publication preserves distant cached root")
	print("JOINED_BUILDINGS_CHANGED_PUBLISH ",JSON.stringify({"remove":removed.get("stats",{}),"restore":rejoined.get("stats",{})}))
	var synchronous := Renderer.new()
	root.add_child(synchronous)
	synchronous.setup(city)
	var same := true
	for house: Dictionary in city.houses:
		var id: String = house.id
		same = same and render.building_context.signature(id)==synchronous.building_context.signature(id)
		same = same and render.building_context.roof_patches(id)==synchronous.building_context.roof_patches(id)
		same = same and render.house_roots[id].get_meta("roof_patches",[])==synchronous.house_roots[id].get_meta("roof_patches",[])
		same = same and render.house_roots[id].get_meta("entrances",[])==synchronous.house_roots[id].get_meta("entrances",[])
	_check(same,"latest worker context, per-host roof geometry and real entrances equal fresh synchronous product rebuild")
	_check(render.house_roots.has(south) and not _door(a,Vector2i.DOWN),"latest restored neighbor neither loses roof nor exposes stale covered door")
	_check(render.house_roots[far].get_instance_id()==far_identity,"remote root survives synchronous edits and all budget publications")
	_check(render.budget_rebuild.worker==null and render.budget_rebuild.staging==null and render.budget_rebuild.queued==null,"successful publish releases worker/staging/latest queue")
	_check_music(a,b,far)
	synchronous.queue_free()
	await process_frame
	# Actual close() with a live request, rather than only an idle destructor.
	render.request_budget_rebuild()
	_check(render.budget_rebuild.worker!=null,"final teardown owns actual worker handle")
	print("JOINED_BUILDINGS_BUDGET ",JSON.stringify(published.get("stats",{})))

func _poll(commit: bool) -> Dictionary:
	var report := {}
	for i in range(3000):
		report = render.poll_budget_rebuild(3.5,commit)
		if report.get("committed",false) or (not commit and report.get("ready",false)): return report
		if not report.get("pending",false): return report
		await process_frame
	return report

func _check_music(a: String,b: String,far: String) -> void:
	var rigs: Dictionary = render.resonance.rigs
	var no_internal := true
	for id: String in [a,b]:
		for window: Dictionary in rigs[id].mesh.get_meta("windows",[]):
			if (id==a and window.side==Vector2i.RIGHT) or (id==b and window.side==Vector2i.LEFT): no_internal=false
	_check(no_internal,"musical windows do not render inside actual cross-host wall")
	var static_nodes: Array = []
	var transforms: Array = []
	for id: String in [a,b]:
		for child: Node in render.house_roots[id].get_children():
			if child is MeshInstance3D and child.name!="ResonanceArc":
				static_nodes.append(child)
				transforms.append(child.global_transform)
	_check(not static_nodes.is_empty(),"joined structural mesh remains outside breathing pivot")
	render.update_city_resonance_visuals({"audible":true,"clock_sec":7.5,"beat_pulse":1.0,"lead_id":a,"chorus_ids":[b],"ambient_ids":[],"concert_active":true,"phase":"playing","venue_id":a,"resonance_arcs":[{"from_id":a,"to_id":b,"strength":0.8}]})
	_check(rigs[a].mesh.visible and rigs[b].mesh.visible and not rigs[far].mesh.visible,"distinct lead and neighbor rigs respond without activating distant household")
	_check(is_equal_approx(rigs[a].pivot.scale.y,1.02) and is_equal_approx(rigs[b].pivot.scale.y,1.0),"lead breathing remains per-house, does not scale entire joined row")
	_check(rigs[b].arc.visible and not rigs[a].arc.visible,"actual response arc targets original neighboring household")
	var static_unchanged := true
	for i in range(static_nodes.size()): static_unchanged = static_unchanged and static_nodes[i].global_transform==transforms[i]
	_check(static_unchanged,"real joined roof/wall transforms remain static during musical response")
	render.update_city_resonance_visuals({"audible":false})
	_check(not rigs[a].mesh.visible and not rigs[b].arc.visible,"mute clears joined-house response and arc")

func _check_roof_owner(id: String) -> void:
	var cell_ids: Array = []
	for cell: Dictionary in _house(id).cells: cell_ids.append(str(cell.id))
	var correct := true
	var count := 0
	for patch: Dictionary in render.building_context.roof_patches(id):
		correct = correct and str(patch.house_id)==id and cell_ids.has(str(patch.cell_id))
		if patch.surface=="roof": count += 1
	_check(correct and count>0,"published roof patch ownership stays with authored host/cell "+id)

func _add(at: Vector2) -> String:
	var result: Dictionary = city.add_house(at)
	_check(result.ok,"public add_house "+str(at)+": "+str(result.get("message","")))
	return str(result.get("house_id",""))

func _house(id: String) -> Dictionary:
	for house: Dictionary in city.houses:
		if house.id==id: return house
	return {}

func _door(id: String,side: Vector2i) -> bool:
	for entrance: Dictionary in city.house_entrances(id):
		if entrance.side==side and not entrance.get("passage",false): return true
	return false

func _ray(from: Vector3,to: Vector3) -> Dictionary:
	return render.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(from,to))

func _hit_is(hit: Dictionary,id: String,cell: String) -> bool:
	return not hit.is_empty() and hit.collider.get_meta("house_id","")==id and hit.collider.get_meta("cell_id","")==cell

func _occupied(at: Vector3,id: String) -> bool:
	var query := PhysicsPointQueryParameters3D.new()
	query.position = at
	for hit: Dictionary in render.get_world_3d().direct_space_state.intersect_point(query,16):
		if hit.collider.get_meta("house_id","")==id: return true
	return false

func _root_ids() -> Dictionary:
	var result := {}
	for id: String in render.house_roots: result[id]=render.house_roots[id].get_instance_id()
	return result

func _check(value: bool,message: String) -> void:
	checks += 1
	if not value:
		failures.append(message)
		printerr("FAIL ",message)

func _finish() -> void:
	print("JOINED_BUILDINGS_RESULT ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
