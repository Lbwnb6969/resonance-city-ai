extends SceneTree
## Two independent GPU worlds render old/current building batches in one frame.
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const OLD_PATH := "res://备份/建筑合批前_20261016/renderer_before.gd"
const OUTPUT := "res://验证记录/建筑材质合批_2026-10-16/pixels"
const SIZE := Vector2i(1200, 900)
var checks := 0
var failures: Array[String] = []
var worlds: Array[Dictionary] = []
var comparisons: Array[Dictionary] = []
var structure: Dictionary = {}


func _initialize() -> void: _run.call_deferred()


func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok:
		failures.append(label)
		push_error(label)


func _fixture() -> CityCreationState:
	var city := State.new()
	city.initialize()
	_check(city.set_house_role("h1", "bakery").ok, "production bakery role includes a real canopy and porch light")
	var approach: Array[Vector2] = [Vector2(-8, -3.5), Vector2(-8, -4.7)]
	_check(city.add_road(approach).ok, "actual south terminal approaches the bakery door along its normal")
	var active_entrances := 0
	for entrance: Dictionary in city.house_entrances("h1"):
		if bool(entrance.active): active_entrances += 1
	_check(active_entrances>0, "fixture contains an active terminal-connected bakery entrance")
	_check(city.add_cell("h6", 0, 0, 1).ok and city.add_cell("h6", 0, 0, 2).ok, "actual east-bank room stack reaches three storeys")
	var road: Array[Vector2] = [Vector2(-8, -2.4), Vector2(-8, 2.4)]
	_check(city.add_road(road).ok and not city.house_passages("h3").is_empty(), "actual road creates a true ground-floor arch")
	var palettes := {}
	for house: Dictionary in city.houses: palettes[posmod(int(house.palette), 4)] = true
	_check(palettes.size() == 4, "fixture includes all four production building palettes")
	return city


func _world(script: Script, city: RefCounted, label: String) -> Dictionary:
	var viewport := SubViewport.new()
	viewport.name = label
	viewport.size = SIZE
	viewport.own_world_3d = true
	viewport.transparent_bg = true
	viewport.msaa_3d = Viewport.MSAA_DISABLED
	viewport.render_target_update_mode = SubViewport.UPDATE_ALWAYS
	root.add_child(viewport)
	var scene := Node3D.new()
	viewport.add_child(scene)
	var environment := WorldEnvironment.new()
	var env := Environment.new()
	env.background_mode = Environment.BG_COLOR
	env.background_color = Color("cbd9d4")
	env.ambient_light_source = Environment.AMBIENT_SOURCE_COLOR
	env.ambient_light_color = Color("d4e2df")
	env.ambient_light_energy = 0.48
	env.tonemap_mode = Environment.TONE_MAPPER_LINEAR
	environment.environment = env
	scene.add_child(environment)
	var sun := DirectionalLight3D.new()
	sun.shadow_enabled = true
	sun.shadow_opacity = 0.70
	sun.shadow_bias = 0.03
	sun.directional_shadow_max_distance = 70.0
	sun.directional_shadow_mode = DirectionalLight3D.SHADOW_ORTHOGONAL
	scene.add_child(sun)
	var camera := Camera3D.new()
	camera.projection = Camera3D.PROJECTION_ORTHOGONAL
	camera.current = true
	scene.add_child(camera)
	var town: Node3D = script.new()
	scene.add_child(town)
	town.add_child(town.shore)
	town.state = city
	town.buildings = Node3D.new()
	town.buildings.name = "Buildings"
	town.add_child(town.buildings)
	town.building_context.prepare(city.houses)
	for house: Dictionary in city.houses:
		var building: Node3D = town._house(house)
		town._merge_meshes(building)
	return {"viewport":viewport,"town":town,"sun":sun,"camera":camera}


func _geometry(town: Node3D) -> Dictionary:
	var triangles: Array[String] = []
	var material_triangles := {}
	var emissive_triangles := 0
	var solid_shadow_off := 0
	var meshes: Array[Node] = town.buildings.find_children("*", "MeshInstance3D", true, false)
	for child: Node in meshes:
		var instance: MeshInstance3D = child
		var material: Material = instance.material_override
		var family := _material_family(material)
		var faces: PackedVector3Array = instance.mesh.get_faces()
		material_triangles[family] = int(material_triangles.get(family, 0)) + faces.size()/3
		if material is StandardMaterial3D:
			if material.emission_enabled: emissive_triangles += faces.size()/3
			if instance.cast_shadow == GeometryInstance3D.SHADOW_CASTING_SETTING_OFF: solid_shadow_off += faces.size()/3
		for index in range(0, faces.size(), 3):
			var triangle: PackedVector3Array = faces.slice(index,index+3)
			triangles.append(var_to_bytes(instance.global_transform).hex_encode()+var_to_bytes(triangle).hex_encode())
	triangles.sort()
	return {"triangles":triangles.size(),"geometry_sha256":"\n".join(triangles).sha256_text(),"geometry_encoding":"sorted exact Transform3D and raw PackedVector3Array triangle bytes; no decimal rounding","material_families":material_triangles,"emissive_triangles":emissive_triangles,"solid_shadow_off_triangles":solid_shadow_off,"mesh_instances":meshes.size()}


func _material_family(material: Material) -> String:
	if material is ShaderMaterial:
		var shader: ShaderMaterial = material
		var uniforms := {}
		for uniform: Dictionary in shader.shader.get_shader_uniform_list():
			uniforms[str(uniform.name)] = shader.get_shader_parameter(uniform.name)
		return "shader/" + shader.shader.resource_path + "/" + var_to_str(uniforms)
	var solid := material as StandardMaterial3D
	if solid == null: return "unsupported/" + material.get_class()
	var values := {}
	# Albedo is intentionally represented by per-vertex COLOR in new batches.
	# Other surface behavior, especially real porch emission, must stay equal.
	for key: String in ["roughness","metallic","metallic_specular","transparency","cull_mode","shading_mode","diffuse_mode","specular_mode","emission_enabled","emission","emission_energy_multiplier","disable_receive_shadows","disable_ambient_light","disable_fog","no_depth_test","depth_draw_mode"]:
		values[key] = solid.get(key)
	return "solid/" + var_to_str(values)


func _collisions(town: Node3D) -> Dictionary:
	var records: Array[String] = []
	for node: Node in town.buildings.find_children("*", "CollisionShape3D", true, false):
		var collision: CollisionShape3D = node
		var body := collision.get_parent() as StaticBody3D
		var values := {"transform":collision.global_transform,"disabled":collision.disabled,"house_id":body.get_meta("house_id", ""),"cell_id":body.get_meta("cell_id", ""),"cell":body.get_meta("cell", {}),"layer":body.collision_layer,"mask":body.collision_mask}
		if collision.shape is BoxShape3D: values.shape = ["box",collision.shape.size]
		elif collision.shape is ConcavePolygonShape3D: values.shape = ["triangles",collision.shape.get_faces(),collision.shape.backface_collision]
		else: values.shape = [collision.shape.get_class(),collision.shape.get_debug_mesh().get_faces()]
		records.append(var_to_str(values))
	records.sort()
	return {"count":records.size(),"sha256":"\n".join(records).sha256_text()}


func _metadata(town: Node3D) -> Dictionary:
	var records: Array[String] = []
	var tower_count := 0
	var lamp_count := 0
	var passage_count := 0
	for node: Node in town.buildings.find_children("*", "Node3D", true, false):
		var fields := {}
		for key: StringName in node.get_meta_list():
			if str(key) == "material_batching": continue
			fields[str(key)] = node.get_meta(key)
		if fields.is_empty(): continue
		if fields.has("tower_cells"): tower_count += fields.tower_cells.size()
		if fields.get("door_lamp", false): lamp_count += 1
		if fields.has("passages"): passage_count += fields.passages.size()
		records.append(var_to_str([node.get_class(),node.global_transform,fields]))
	records.sort()
	return {"count":records.size(),"sha256":"\n".join(records).sha256_text(),"towers":tower_count,"door_lamps":lamp_count,"passages":passage_count}


func _compare_pixels(old: Image, current: Image, label: String) -> Dictionary:
	old.convert(Image.FORMAT_RGBA8)
	current.convert(Image.FORMAT_RGBA8)
	var old_bytes := old.get_data()
	var current_bytes := current.get_data()
	var count := 0
	var absolute_error := 0
	var maximum := 0
	var over_two := 0
	var over_three := 0
	var unmatched := 0
	var outliers: Array[Dictionary] = []
	var diff := Image.create(SIZE.x, SIZE.y, false, Image.FORMAT_RGBA8)
	for y in range(SIZE.y):
		for x in range(SIZE.x):
			var offset := (y*SIZE.x+x)*4
			# Empty transparent background is excluded. Include every building
			# silhouette pixel in either world so geometry shifts cannot hide.
			if old_bytes[offset+3] < 16 and current_bytes[offset+3] < 16: continue
			var pixel_max := 0
			for channel in range(4):
				var error := absi(int(old_bytes[offset+channel])-int(current_bytes[offset+channel]))
				pixel_max = maxi(pixel_max,error)
				if channel<3: absolute_error += error
			maximum = maxi(maximum,pixel_max)
			if pixel_max>2: over_two += 1
			if pixel_max>3:
				over_three += 1
				var old_to_current := _nearest_rgba(old_bytes,current_bytes,x,y)
				var current_to_old := _nearest_rgba(current_bytes,old_bytes,x,y)
				var matched: bool = old_to_current.error<=3 and current_to_old.error<=3
				if not matched: unmatched += 1
				outliers.append({"at":[x,y],"old_rgba":_rgba(old_bytes,offset),"current_rgba":_rgba(current_bytes,offset),"same_pixel_max_error":pixel_max,"old_to_current":old_to_current,"current_to_old":current_to_old,"bidirectional_1px_match":matched})
			count += 1
			diff.set_pixel(x,y,Color(minf(1.0,pixel_max/16.0),0.0,0.0,1.0))
	diff.save_png(OUTPUT+"/"+label+"_difference_x16.png")
	var mae := float(absolute_error)/maxi(1,count*3)
	var fraction := float(over_three)/maxi(1,count)
	_check(count>10000,"actual GPU view contains substantial visible building pixels: "+label)
	_check(mae<=0.75 and fraction<=0.001 and unmatched==0,"RGB MAE <=0.75 byte; >3-byte outliers <=0.1% and every outlier matches bidirectionally within one pixel: "+label)
	if unmatched>0: print("MESH_PIXELS_UNMATCHED ",label," ",JSON.stringify(outliers.filter(func(item: Dictionary) -> bool: return not item.bidirectional_1px_match)))
	return {"view":label,"building_pixels":count,"rgb_mae_bytes":mae,"max_rgba_error_bytes":maximum,"pixels_over_2_bytes":over_two,"pixels_over_3_bytes":over_three,"pixels_over_2_fraction":float(over_two)/maxi(1,count),"pixels_over_3_fraction":fraction,"unmatched_outliers":unmatched,"outliers":outliers,"background":"transparent excluded; union of visible old/new silhouettes","threshold":{"ordinary_max_bytes":3,"rgb_mae_bytes":0.75,"outlier_fraction":0.001,"outlier_neighborhood_radius_px":1,"bidirectional_match_max_bytes":3}}


func _rgba(bytes: PackedByteArray, offset: int) -> Array:
	return [int(bytes[offset]),int(bytes[offset+1]),int(bytes[offset+2]),int(bytes[offset+3])]


func _nearest_rgba(source: PackedByteArray, destination: PackedByteArray, x: int, y: int) -> Dictionary:
	var offset := (y*SIZE.x+x)*4
	var best := 256
	var best_at := Vector2i(x,y)
	var best_rgba: Array = []
	for yy in range(maxi(0,y-1),mini(SIZE.y,y+2)):
		for xx in range(maxi(0,x-1),mini(SIZE.x,x+2)):
			var target := (yy*SIZE.x+xx)*4
			var error := 0
			for channel in range(4): error = maxi(error,absi(int(source[offset+channel])-int(destination[target+channel])))
			if error<best:
				best = error
				best_at = Vector2i(xx,yy)
				best_rgba = _rgba(destination,target)
	return {"error":best,"at":[best_at.x,best_at.y],"rgba":best_rgba}


func _capture(label: String, evening: bool, yaw: float) -> void:
	for world: Dictionary in worlds:
		var sun: DirectionalLight3D = world.sun
		sun.rotation_degrees = Vector3(-24 if evening else -48,-32,0)
		sun.light_color = Color("ffcf9f") if evening else Color("fff1d7")
		sun.light_energy = 0.50 if evening else 0.58
		var camera: Camera3D = world.camera
		var focus := Vector3(-1.8,1.4,0.0)
		var pitch := 0.58
		camera.size = 24.0
		camera.position = focus+Vector3(sin(yaw)*cos(pitch),sin(pitch),cos(yaw)*cos(pitch))*42.0
		camera.look_at(focus)
	for frame in range(45): await process_frame
	await RenderingServer.frame_post_draw
	var old: Image = worlds[0].viewport.get_texture().get_image()
	var current: Image = worlds[1].viewport.get_texture().get_image()
	old.save_png(OUTPUT+"/"+label+"_old.png")
	current.save_png(OUTPUT+"/"+label+"_current.png")
	comparisons.append(_compare_pixels(old,current,label))


func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	_check(DisplayServer.get_name()!="headless","pixel equivalence runs on a real GPU display")
	var city := _fixture()
	var old: Script = load(OLD_PATH)
	_check(old!=null,"independent archived renderer loads")
	if old==null: quit(1); return
	worlds.append(_world(old,city,"PreviousRenderer"))
	worlds.append(_world(Renderer,city,"CurrentRenderer"))
	_check(worlds[0].viewport.find_world_3d()!=worlds[1].viewport.find_world_3d(),"two simultaneous GPU worlds have independent lights and shadows")
	var before_geometry := _geometry(worlds[0].town)
	var after_geometry := _geometry(worlds[1].town)
	var before_collision := _collisions(worlds[0].town)
	var after_collision := _collisions(worlds[1].town)
	var before_metadata := _metadata(worlds[0].town)
	var after_metadata := _metadata(worlds[1].town)
	_check(before_geometry.triangles==after_geometry.triangles and before_geometry.geometry_sha256==after_geometry.geometry_sha256,"all visible production triangles and their world transforms remain exact")
	_check(before_geometry.material_families==after_geometry.material_families,"material shading families preserve exact triangle counts including emission and roof shaders")
	_check(before_geometry.emissive_triangles>0 and after_geometry.emissive_triangles==before_geometry.emissive_triangles,"real glowing porch lamps retain their emissive material triangles")
	_check(before_geometry.solid_shadow_off_triangles==0 and after_geometry.solid_shadow_off_triangles==0,"all solid architectural pieces retain real shadow casting")
	_check(before_collision==after_collision,"actual collision shapes, transforms and cell ownership are unchanged")
	_check(before_metadata==after_metadata and after_metadata.towers>0 and after_metadata.passages>0 and after_metadata.door_lamps>0,"tower, true arch, porch and cell metadata remain exact")
	structure = {"old_geometry":before_geometry,"current_geometry":after_geometry,"old_collision":before_collision,"current_collision":after_collision,"old_metadata":before_metadata,"current_metadata":after_metadata}
	await _capture("01_daylight",false,0.62)
	await _capture("02_evening_reverse",true,-0.72)
	var result := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"mode":DisplayServer.get_name(),"size":[SIZE.x,SIZE.y],"shadows":true,"worlds":2,"structure":structure,"pixels":comparisons}
	var file := FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(result,"\t",true,true))
	file.close()
	print("CREATION_MESH_BATCHING_PIXELS ",JSON.stringify(result))
	for world: Dictionary in worlds: world.viewport.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)
