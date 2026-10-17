class_name CitySpriteBaker
extends SceneTree
## Offline only: load writable CC0 copies via GLTFDocument, never runtime GLB imports.

var viewport: SubViewport
var camera: Camera3D
var model: Node3D
var used_bounds: AABB
var settings: Dictionary
var output_entries: Array = []

func _initialize() -> void:
	call_deferred("_run")

func _bounds(node: Node3D) -> AABB:
	var result := AABB()
	var first := true
	for mesh in node.find_children("*","MeshInstance3D",true,false):
		var local: AABB = mesh.mesh.get_aabb()
		var transformed: AABB = mesh.global_transform*local
		result = transformed if first else result.merge(transformed)
		first = false
	assert(not first,"No mesh in selected source")
	return result

func _material(node: Node3D, texture: Texture2D) -> void:
	for mesh in node.find_children("*","MeshInstance3D",true,false):
		var material := StandardMaterial3D.new()
		material.shading_mode = BaseMaterial3D.SHADING_MODE_UNSHADED
		material.albedo_texture = texture
		material.texture_filter = BaseMaterial3D.TEXTURE_FILTER_NEAREST
		material.cull_mode = BaseMaterial3D.CULL_DISABLED
		mesh.material_override = material

func _render(mode: String, entry: Dictionary, size: int, path: String) -> Dictionary:
	viewport.size = Vector2i(size,size)
	var texture_path: String = "res://资产/02_加工中/P0_CityKits/"+str(entry["package"])+"/"+str(entry["category"])+"_"+mode+".png"
	var texture := ImageTexture.create_from_image(Image.load_from_file(texture_path))
	_material(model,texture)
	viewport.render_target_update_mode = SubViewport.UPDATE_ONCE
	await RenderingServer.frame_post_draw
	var image := viewport.get_texture().get_image()
	var crop := image.get_used_rect()
	assert(crop.size.x > 0 and crop.size.y > 0,"Empty offline render")
	var base_world := Vector3(used_bounds.get_center().x,used_bounds.position.y,used_bounds.get_center().z)
	var origin := camera.unproject_position(base_world)-Vector2(crop.position)
	image = image.get_region(crop)
	var factor := float(size)/maxi(crop.size.x,crop.size.y)
	var target := Vector2i(roundi(crop.size.x*factor),roundi(crop.size.y*factor))
	image.resize(target.x,target.y,Image.INTERPOLATE_NEAREST)
	DirAccess.make_dir_recursive_absolute(path.get_base_dir())
	assert(image.save_png(path) == OK)
	return {"width":target.x,"height":target.y,"origin":[origin.x*factor,origin.y*factor],"crop":[crop.position.x,crop.position.y,crop.size.x,crop.size.y]}


func _encoding_calibration() -> void:
	viewport.size = Vector2i(512,512)
	camera.position = Vector3(0,0,10)
	camera.look_at(Vector3.ZERO,Vector3.UP)
	camera.size = 2.0
	var quad := MeshInstance3D.new()
	quad.mesh = QuadMesh.new()
	(quad.mesh as QuadMesh).size = Vector2(2,2)
	var material := StandardMaterial3D.new()
	material.shading_mode = BaseMaterial3D.SHADING_MODE_UNSHADED
	material.albedo_texture = ImageTexture.create_from_image(Image.load_from_file("res://资产/02_加工中/P0_CityKits/index_palette.png"))
	material.texture_filter = BaseMaterial3D.TEXTURE_FILTER_NEAREST
	quad.material_override = material
	viewport.add_child(quad)
	viewport.render_target_update_mode = SubViewport.UPDATE_ONCE
	await RenderingServer.frame_post_draw
	var image := viewport.get_texture().get_image()
	var lookup: Dictionary = {}
	for slot in range(24):
		var pixel := image.get_pixel(roundi((slot+0.5)*512.0/24.0),256)
		var gray := roundi(pixel.r*255.0)
		assert(not lookup.has(str(gray)),"GPU index encoding collision")
		lookup[str(gray)] = 8+slot*10
	DirAccess.make_dir_recursive_absolute("res://资产/03_入库/P0城市")
	var file := FileAccess.open("res://资产/03_入库/P0城市/encoding.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(lookup,"\t")+"\n")
	file.close()
	quad.queue_free()
	await process_frame


func _run() -> void:
	assert(DisplayServer.get_name() != "headless","Baking requires real Compatibility rendering")
	settings = JSON.parse_string(FileAccess.get_file_as_string("res://资产/02_加工中/P0_CityKits/selection.json"))
	viewport = SubViewport.new()
	viewport.transparent_bg = true
	viewport.own_world_3d = true
	viewport.size = Vector2i(2048,2048)
	viewport.render_target_update_mode = SubViewport.UPDATE_DISABLED
	root.add_child(viewport)
	camera = Camera3D.new()
	camera.projection = Camera3D.PROJECTION_ORTHOGONAL
	camera.current = true
	camera.near = 0.01
	camera.far = 100.0
	viewport.add_child(camera)
	await _encoding_calibration()
	var directory := "res://资产/03_入库/P0城市"
	var limit: int = settings["entries"].size()
	for arg in OS.get_cmdline_user_args():
		if arg.begins_with("--limit="):
			limit = mini(limit,int(arg.trim_prefix("--limit=")))
	for index in range(limit):
		var entry: Dictionary = settings["entries"][index].duplicate(true)
		var document := GLTFDocument.new()
		var state := GLTFState.new()
		assert(document.append_from_file(ProjectSettings.globalize_path("res://"+str(entry["model"])),state) == OK)
		model = document.generate_scene(state) as Node3D
		viewport.add_child(model)
		used_bounds = _bounds(model)
		var focus := used_bounds.get_center()
		var yaw := deg_to_rad(45.0)
		var elevation := deg_to_rad(30.0)
		camera.position = focus+Vector3(cos(yaw)*cos(elevation),sin(elevation),sin(yaw)*cos(elevation))*10.0
		camera.look_at(focus,Vector3.UP)
		var minimum := Vector2(INF,INF)
		var maximum := Vector2(-INF,-INF)
		for endpoint in range(8):
			var p := camera.global_transform.affine_inverse()*used_bounds.get_endpoint(endpoint)
			minimum = minimum.min(Vector2(p.x,p.y))
			maximum = maximum.max(Vector2(p.x,p.y))
		camera.size = maxf(maximum.x-minimum.x,maximum.y-minimum.y)*1.1
		var id: String = entry["id"]
		var preview_path := "res://资产/04_预览索引/P0城市/"+id+".png"
		var master_path := directory+"/索引/"+id+".png"
		var main_path := directory+"/整图/"+id+".png"
		entry["preview"] = preview_path.trim_prefix("res://")
		entry["indexed_master"] = master_path.trim_prefix("res://")
		entry["preview_bounds"] = await _render("preview",entry,512,preview_path)
		entry["index_bounds"] = await _render("index",entry,2048,master_path)
		entry["image_bounds"] = await _render("color",entry,2048,main_path)
		entry["texture"] = "资源/P0城市/整图/"+id+".png"
		entry["origin"] = entry["image_bounds"]["origin"]
		entry["footprint_tiles"] = [maxi(1,ceili(used_bounds.size.x)),maxi(1,ceili(used_bounds.size.z))]
		entry["floor_height"] = used_bounds.size.y
		entry["model_bounds"] = {"position":[used_bounds.position.x,used_bounds.position.y,used_bounds.position.z],"size":[used_bounds.size.x,used_bounds.size.y,used_bounds.size.z]}
		entry["availability"] = "technical_bake_ready; human_three_grid_pending"
		var target := "res://"+str(entry["texture"])
		DirAccess.make_dir_recursive_absolute(target.get_base_dir())
		assert(DirAccess.copy_absolute(main_path,target) == OK)
		output_entries.append(entry)
		model.queue_free()
		await process_frame
		print("BAKED ",index+1,"/",limit," ",id)
	var manifest := {"schema_version":1,"palette":"资源/P0城市/palette.png","camera":{"azimuth":45,"elevation":30,"projection":"orthogonal"},"entries":output_entries,"human_art":"PENDING"}
	DirAccess.make_dir_recursive_absolute(directory)
	for path in [directory+"/manifest.json","res://资源/P0城市/manifest.json"]:
		var file := FileAccess.open(path,FileAccess.WRITE)
		file.store_string(JSON.stringify(manifest,"\t")+"\n")
		file.close()
	var proof := FileAccess.open("res://资产/04_预览索引/P0城市/index.json",FileAccess.WRITE)
	proof.store_string(JSON.stringify(output_entries,"\t")+"\n")
	proof.close()
	viewport.queue_free()
	await process_frame
	print("ASSET-002 BAKED ",output_entries.size()," real sprites; human art PENDING")
	quit(0)
