extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
var checks := 0
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _check(value: bool, label: String) -> void:
	checks += 1
	if not value: failures.append(label)

func _stable(town) -> Dictionary:
	var result := {}
	for id: String in town.house_roots:
		result[id] = [town.house_roots[id].get_instance_id(),town.resonance.rigs[id].mesh.get_instance_id(),town.resonance.rigs[id].pivot.get_instance_id()]
	for id: String in town.road_roots: result[id] = town.road_roots[id].get_instance_id()
	return result

func _deliver(city, town, target: String) -> void:
	if city.workshop_status("h2").stock == 0: _check(city.produce_craft("h2",1),"real production replenishes workshop")
	_check(city.reserve_craft("h2","h3",target),"actual stock reserved for "+target)
	_check(city.complete_craft("h2","h3",target),"actual reserved delivery installs at "+target)
	town.update_craft_progress()

func _triangles(mesh: Mesh, placement: Transform3D = Transform3D.IDENTITY) -> Array[String]:
	var result: Array[String] = []
	var arrays := mesh.surface_get_arrays(0)
	var vertices: PackedVector3Array = arrays[Mesh.ARRAY_VERTEX]
	var normals: PackedVector3Array = arrays[Mesh.ARRAY_NORMAL]
	var colors: PackedColorArray = arrays[Mesh.ARRAY_COLOR]
	var indices: PackedInt32Array = arrays[Mesh.ARRAY_INDEX]
	var count := indices.size() if not indices.is_empty() else vertices.size()
	for start in range(0,count,3):
		var triangle := []
		for offset in range(3):
			var index := indices[start+offset] if not indices.is_empty() else start+offset
			var point := placement*vertices[index]
			var normal := placement.basis.inverse().transposed()*normals[index]
			var color := colors[index]
			# Vertex and color precision remain 1e-5; normals are compressed and
			# re-encoded by ArrayMesh, so allow its sub-0.001 encoding error.
			var row := []
			for value: float in [point.x,point.y,point.z]:
				row.append(roundi(value*100000.0))
			for value: float in [normal.x,normal.y,normal.z]:
				row.append(roundi(value*1000.0))
			for value: float in [color.r,color.g,color.b,color.a]:
				row.append(roundi(value*100000.0))
			triangle.append(row)
		result.append(str(triangle))
	result.sort()
	return result

func _check_static(town, id: String) -> void:
	var craft_root: Node3D = town.craft.roots[id]
	var records: Dictionary = craft_root.get_meta("placements")
	var expected: Array[String] = []
	for kind: String in ["plaque","planter","pergola"]:
		for placement: Transform3D in records[kind]:
			expected.append_array(_triangles(town.craft._mesh(kind),placement))
	expected.sort()
	var combined: MeshInstance3D = craft_root.get_node_or_null("StaticCraft")
	_check((combined==null)==expected.is_empty(),"earned static ornaments have exactly one combined draw object for "+id)
	if combined == null: return
	_check(combined.mesh.get_surface_count()==1,"carvings, leaf box and pergola share one actual material surface")
	var actual := _triangles(combined.mesh)
	_check(actual==expected,"all transformed triangles, winding, normals, colors and motion weights are conserved for "+id)
	_check(combined.cast_shadow==GeometryInstance3D.SHADOW_CASTING_SETTING_ON,"static combined ornaments keep real shadow casting")
	_check(combined.material_override==town.craft.material,"combined timber retains authored shader material")

func _run() -> void:
	var city := State.new()
	city.initialize()
	_check(city.set_house_role("h2","workshop").ok,"existing bakery can become dedicated instrument workshop")
	var town := Renderer.new()
	root.add_child(town)
	town.setup(city)
	var camera: Camera3D
	if "--craft-capture" in OS.get_cmdline_user_args():
		root.size = Vector2i(1440,900)
		camera = Camera3D.new()
		camera.projection = Camera3D.PROJECTION_ORTHOGONAL
		camera.size = 10.5
		camera.position = Vector3(2,7,3)
		root.add_child(camera)
		camera.look_at(Vector3(-5,0.4,-5))
		camera.current = true
		var sun := DirectionalLight3D.new()
		sun.rotation_degrees = Vector3(-48,-30,0)
		sun.light_color = Color("fff0d5")
		sun.light_energy = 1.05
		sun.shadow_enabled = true
		root.add_child(sun)
		var environment := WorldEnvironment.new()
		environment.environment = Environment.new()
		environment.environment.background_mode = Environment.BG_COLOR
		environment.environment.background_color = Color("d4ddd4")
		environment.environment.ambient_light_source = Environment.AMBIENT_SOURCE_COLOR
		environment.environment.ambient_light_color = Color("cedcda")
		environment.environment.ambient_light_energy = 0.60
		root.add_child(environment)
	await physics_frame
	await physics_frame
	var stable := _stable(town)
	var workshop_facades: Array = town.house_roots.h2.find_children("*","Node3D",true,false)
	var saw_frontage := false
	for wall: Node3D in workshop_facades:
		if wall.get_meta("workshop_frontage",false): saw_frontage = true
	_check(saw_frontage,"workshop has specific timber/lute/workbench frontage")
	_check(town.craft.roots.is_empty(),"no paid-looking upgrade before any real delivery")
	town.update_workshop_supply({"h2":city.workshop_status("h2")})
	_check(town.craft.stock_roots.h2.get_meta("displayed_items")==0,"empty true inventory displays zero chimes")
	_check(city.produce_craft("h2",8),"two-room workshop produces eight real items within capacity")
	town.update_workshop_supply({"h2":city.workshop_status("h2")})
	_check(town.craft.stock_roots.h2.get_meta("displayed_items")==6,"visible rack capped at six real items")
	var stock_id: int = town.craft.stock_roots.h2.get_instance_id()
	_deliver(city,town,"h1")
	town.update_workshop_supply({"h2":city.workshop_status("h2")})
	_check(town.craft.stock_roots.h2.get_instance_id()==stock_id,"seven real items preserve the same capped six-item rack mesh")
	_check(town.craft.stock_roots.h2.get_meta("stock")==7,"capped rack still reports exact stock")
	_check(town.craft.roots.h1.get_meta("level")==1,"first actual delivery creates permanent tier one")
	_check(town.craft.roots.h1.get_node_or_null("Chime")!=null,"tier one includes actual hanging chime mesh")
	_check(town.craft.roots.h1.get_node_or_null("StaticCraft")==null,"tier one has no unearned tier two carving")
	_deliver(city,town,"h1")
	_check(town.craft.roots.h1.get_meta("level")==2,"second actual delivery reaches tier two")
	_check(town.craft.roots.h1.get_meta("placements").plaque.size()==1,"tier two has carved timber plaque")
	_check(town.craft.roots.h1.get_meta("placements").planter.size()==1,"tier two has real leaf and flower box")
	_check_static(town,"h1")
	_deliver(city,town,"h1")
	_check(town.craft.roots.h1.get_meta("level")==3,"third actual delivery reaches tier three")
	_check(town.craft.roots.h1.get_meta("placements").pergola.size()==1,"tier three grows a wooden side porch where clearance permits")
	_check_static(town,"h1")
	var upgraded_id: int = town.craft.roots.h1.get_instance_id()
	var static_id: int = town.craft.roots.h1.get_node("StaticCraft").get_instance_id()
	_deliver(city,town,"h4")
	_check(town.craft.roots.h1.get_instance_id()==upgraded_id,"neighbor delivery preserves finished house craft GPU root")
	_check(town.craft.roots.h1.get_node("StaticCraft").get_instance_id()==static_id,"neighbor delivery preserves combined geometry GPU object")
	var mesh_a: MultiMeshInstance3D = town.craft.roots.h1.get_node("Chime")
	var mesh_b: MultiMeshInstance3D = town.craft.roots.h4.get_node("Chime")
	_check(mesh_a.multimesh.mesh==mesh_b.multimesh.mesh,"neighbor chimes share the same immutable prefab mesh")
	_check(mesh_a.material_override==mesh_b.material_override,"all upgrades share one wood/brass/leaf material")
	_check(mesh_a.multimesh.use_colors,"GPU batch enables authored brass/timber vertex colors")
	if DisplayServer.get_name()!="headless":
		_check(mesh_a.multimesh.get_instance_color(0).is_equal_approx(Color.WHITE),"actual GPU instance preserves authored brass/timber vertex colors")
	_check(_stable(town)==stable,"production and delivery preserve every structural house, music rig and road root")
	var builds: int = town.craft.build_count
	for index in range(20):
		town.update_workshop_supply({"h2":city.workshop_status("h2")})
	_check(town.craft.build_count==builds,"twenty stock UI updates never rebuild standing upgrades")
	_check(town.craft.roots.h1.get_instance_id()==upgraded_id,"stock polling preserves installed GPU objects")
	var points: Array[Vector2] = [Vector2(7,3),Vector2(12,3)]
	_check(city.add_road(points).ok,"real east-west road opens right-bank room")
	points = [Vector2(9,0.5),Vector2(9,5.5)]
	_check(city.add_road(points).ok,"real north-south road opens four-way arcade")
	town.rebuild()
	for index in range(3): _deliver(city,town,"h6")
	var records: Dictionary = town.craft.roots.h6.get_meta("placements")
	_check(records.chime.size()==1,"four-way arcade retains a real scaled pier chime")
	_check(records.plaque.is_empty() and records.planter.is_empty() and records.pergola.is_empty(),"four-way arcade never grows decor across its real passage holes")
	await physics_frame
	await physics_frame
	var ray := PhysicsRayQueryParameters3D.create(Vector3(6,0.6,3),Vector3(12,0.6,3))
	_check(root.get_world_3d().direct_space_state.intersect_ray(ray).is_empty(),"delivered ornaments preserve east-west actual picking hole")
	ray = PhysicsRayQueryParameters3D.create(Vector3(9,0.6,0),Vector3(9,0.6,6))
	_check(root.get_world_3d().direct_space_state.intersect_ray(ray).is_empty(),"delivered ornaments preserve north-south actual picking hole")
	var craft_mesh: MultiMeshInstance3D = town.craft.roots.h6.get_node("Chime")
	var transform_value := craft_mesh.multimesh.get_instance_transform(0)
	var vertices: PackedVector3Array = craft_mesh.multimesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]
	for vertex: Vector3 in vertices:
		var at := transform_value*vertex-Vector3(9,0,3)
		_check((absf(at.x)>0.625 and absf(at.z)>0.625) or at.y>1.31,"every visible arch chime vertex stays on its real structural pier")
	var before_rebuild: int = town.craft.roots.h6.get_instance_id()
	town.rebuild()
	_check(town.craft.roots.h6.get_instance_id()==before_rebuild,"unchanged real road state preserves permanent decoration root")
	_check(city.set_house_role("h3","workshop").ok,"default two-room neighbor becomes an actual workshop")
	town.rebuild()
	var double_house: Dictionary = city.houses[2]
	var outer_cell := ""
	for cell: Dictionary in double_house.cells:
		if int(cell.x)==1: outer_cell = str(cell.id)
	var selected: Dictionary = town._primary_entrance(double_house)
	_check(str(selected.cell_id)==outer_cell,"two-room workshop selects exposed outer room instead of blocked inner bench")
	_check(town._frontage_signature(double_house).has(["workshop_primary",selected.cell_id,selected.side]),"frontage cache identifies the selected real bench entrance")
	var bench_count := 0
	for wall: Node3D in town.house_roots.h3.find_children("*","Node3D",true,false):
		if wall.get_meta("workshop_bench",false): bench_count += 1
	_check(bench_count==1,"default double-room workshop builds exactly one real workbench")
	_check(city.produce_craft("h3",4),"default double-room workshop obtains four real stock items")
	town.update_workshop_supply({"h2":city.workshop_status("h2"),"h3":city.workshop_status("h3")})
	_check(town.craft.stock_roots.h3.get_meta("displayed_items")==4,"default double-room workbench visibly displays all four produced items")
	points = [Vector2(-8,3),Vector2(-8,0.92)]
	_check(city.add_road(points).ok,"real road activates the blocked inner-room entrance")
	town.rebuild()
	selected = town._primary_entrance(city.houses[2])
	_check(str(selected.cell_id)==outer_cell and not bool(selected.active),"active blocked entrance cannot displace a usable outer workbench")
	town.update_workshop_supply({"h2":city.workshop_status("h2"),"h3":city.workshop_status("h3")})
	_check(town.craft.stock_roots.h3.get_meta("displayed_items")==4,"activating the obstructed neighbor entry preserves visible true stock")
	var snapshot := city.snapshot()
	var other := State.new()
	other.initialize()
	_check(other.restore(snapshot).ok,"real delivered upgrades save and restore")
	_check(other.improvement_level("h1")==3 and other.improvement_level("h6")==3,"restored city retains actual earned tiers")
	if camera != null:
		var folder := "res://验证记录/制琴工坊_2026-10-15/geometry"
		DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(folder))
		for frame in range(12): await process_frame
		await RenderingServer.frame_post_draw
		root.get_texture().get_image().save_png(folder+"/01_workshop_and_tier3.png")
		camera.size = 5.3
		camera.position = Vector3(-11.7,4.0,-10.9)
		camera.look_at(Vector3(-7.3,0.75,-6))
		for frame in range(3): await process_frame
		await RenderingServer.frame_post_draw
		root.get_texture().get_image().save_png(folder+"/02_carved_courtyard.png")
	print(JSON.stringify({"result":"PASS" if failures.is_empty() else "FAIL","checks":checks,"failures":failures,"craft":town.craft.diagnostics()}))
	town.free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
