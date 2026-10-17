extends RefCounted
## Base palettes and earned finishes are prepared with original geometry. Switching
## uploads only interleaved COLOR/UV attribute bytes; positions, normals,
## indices, resources, picking bodies and natural-world caches stay in place.
const Styles := preload("res://scripts/visual/city_creation_house_styles.gd")
const FINISHES := ["dawn","tide","festival","nocturne"]


static func _palette(renderer,index: int) -> Array:
	return renderer.PALETTES[index] if index < 4 else renderer.FINISH_PALETTES[FINISHES[index-4]]


static func _index(house: Dictionary) -> int:
	return 4+FINISHES.find(str(house.finish)) if house.has("finish") else posmod(int(house.get("palette",0)),4)


static func _authoring(house: Dictionary) -> Dictionary:
	var record := house.duplicate(true)
	for field in ["palette","finish","name","bakery_open","workshop_open","auto_matinee"]: record.erase(field)
	return record


static func _colors(p: Array) -> Array[Color]:
	var stone := Styles.wall_color("stone",p[0])
	var tower: Color = p[1].lerp(Color("738078"),0.24)
	return [p[0],p[1],p[2],p[0].darkened(0.06),p[0].darkened(0.08),p[0].lightened(0.045),
		p[1].darkened(0.20),p[1].darkened(0.04),p[1].lightened(0.09),p[1].lightened(0.17),p[1].lightened(0.10),
		p[2].lightened(0.13),p[2].darkened(0.20),stone,stone.lightened(0.12),stone.darkened(0.08),
		p[0].lerp(Color("c9c5ae"),0.72),p[0].lerp(Color.WHITE,0.60),tower,tower.darkened(0.18)]


static func prepare(renderer,root: Node3D,house: Dictionary) -> void:
	var started := Time.get_ticks_usec()
	var palettes: Array = []
	for index in range(4+FINISHES.size()):
		var base := _palette(renderer,index)
		if renderer.state.house_era(house)=="renaissance": base=renderer.Renaissance.palette(base)
		elif renderer.state.house_era(house)=="clockwork":base=renderer.Clockwork.palette(base)
		elif renderer.state.house_era(house)=="modern_eco":base=renderer.Modern.palette(base)
		palettes.append(_colors(base))
	var current: int = _index(house)
	var lookup := {}
	for index in range(palettes[current].size()): lookup[palettes[current][index].to_html()] = index
	var buffers: Array = []
	var material_rows: Array = []
	var style_rows: Array = []
	var total_bytes := 0
	var upload_bytes := 0
	var warmup_us := 0
	for node: MeshInstance3D in root.find_children("*","MeshInstance3D",true,false):
		if node.mesh == null: continue
		var material: Material = node.material_override
		if material is StandardMaterial3D:
			var recipe: int = lookup.get(material.albedo_color.to_html(),-1)
			if recipe >= 0 and not material.vertex_color_use_as_albedo:
				var owned := material.duplicate() as StandardMaterial3D
				node.material_override = owned
				material_rows.append({"node":node,"material":owned,"recipe":recipe,"shader":false})
		elif material is ShaderMaterial and material.shader in [renderer.JoinedRoofShader,renderer.Clockwork.Brick]:
			var parameter := "brick_color" if material.shader==renderer.Clockwork.Brick else "roof_color"
			var roof_color: Color = material.get_shader_parameter(parameter)
			var recipe: int = lookup.get(roof_color.to_html(),-1)
			if recipe >= 0:
				var owned := material.duplicate() as ShaderMaterial
				node.material_override = owned
				material_rows.append({"node":node,"material":owned,"recipe":recipe,"shader":true,"parameter":parameter})
		if not node.mesh is ArrayMesh: continue
		for surface in range(node.mesh.get_surface_count()):
			var mesh := node.mesh as ArrayMesh
			var format := mesh.surface_get_format(surface)
			if not (format & Mesh.ARRAY_FORMAT_COLOR): continue
			var arrays: Array = mesh.surface_get_arrays(surface)
			var original: PackedColorArray = arrays[Mesh.ARRAY_COLOR]
			var count := original.size()
			var vertex_recipes := PackedInt32Array()
			vertex_recipes.resize(count)
			var changes := 0
			for vertex in range(count):
				vertex_recipes[vertex] = int(lookup.get(original[vertex].to_html(),-1))
				if vertex_recipes[vertex] >= 0: changes += 1
			if changes == 0: continue
			var raw: Dictionary = RenderingServer.mesh_get_surface(mesh.get_rid(),surface)
			var source: PackedByteArray = raw.attribute_data
			var stride := RenderingServer.mesh_surface_get_format_attribute_stride(format,count)
			var offset := RenderingServer.mesh_surface_get_format_offset(format,count,Mesh.ARRAY_COLOR)
			var variants: Array[PackedByteArray] = []
			for index in range(palettes.size()):
				var bytes := source.duplicate()
				# Keep the installed finish byte-exact, including all original UVs.
				if index != current:
					for vertex in range(count):
						var recipe: int = vertex_recipes[vertex]
						if recipe >= 0: bytes.encode_u32(offset+vertex*stride,palettes[index][recipe].to_abgr32())
				variants.append(bytes)
				total_bytes += bytes.size()
			buffers.append({"mesh":mesh,"surface":surface,"variants":variants})
			# Pay Compatibility's first attribute-update setup during installation,
			# before the first player recolor. This changes no rendered byte.
			var warmup_start := Time.get_ticks_usec()
			mesh.surface_update_attribute_region(surface,0,variants[current])
			warmup_us += Time.get_ticks_usec()-warmup_start
			upload_bytes += source.size()
	for node: Node in root.find_children("*","Node",true,false):
		if not node.has_meta("style_details"): continue
		var parts: Array = node.get_meta("style_details")
		var recipes := PackedInt32Array()
		for part: Dictionary in parts: recipes.append(int(lookup.get(part.color.to_html(),-1)))
		style_rows.append({"node":node,"parts":parts,"recipes":recipes})
	var prepare_ms := float(Time.get_ticks_usec()-started)/1000.0
	root.set_meta("house_color_cache",{"authoring":_authoring(house),"buffers":buffers,"materials":material_rows,
		"style_rows":style_rows,"palettes":palettes,"index":current,"bytes":total_bytes,
		"prepare_ms":prepare_ms,"warmup_ms":float(warmup_us)/1000.0,"upload_bytes":upload_bytes})
	root.set_meta("house_color_prepare",{"prepare_ms":prepare_ms,"warmup_ms":float(warmup_us)/1000.0,
		"bytes":total_bytes,"upload_bytes":upload_bytes,"surfaces":buffers.size(),"variants":palettes.size()})


static func apply(renderer,root: Node3D,house: Dictionary) -> bool:
	if not root.has_meta("house_color_cache") or not root.has_meta("color_geometry_fingerprint"): return false
	var cache: Dictionary = root.get_meta("house_color_cache")
	if cache.authoring != _authoring(house) or str(root.get_meta("era_theme","pastoral")) != renderer.state.house_era(house): return false
	var index: int = _index(house)
	if index == int(cache.index): return true
	var colors: Array = cache.palettes[index]
	for buffer: Dictionary in cache.buffers:
		var mesh: ArrayMesh = buffer.mesh
		mesh.surface_update_attribute_region(int(buffer.surface),0,buffer.variants[index])
	for row: Dictionary in cache.materials:
		if row.shader: row.material.set_shader_parameter(str(row.get("parameter","roof_color")),colors[int(row.recipe)])
		else: row.material.albedo_color = colors[int(row.recipe)]
	for row: Dictionary in cache.style_rows:
		for part in range(row.parts.size()):
			var recipe: int = row.recipes[part]
			if recipe >= 0: row.parts[part].color = colors[recipe]
		row.node.set_meta("style_details",row.parts)
	cache.index = index
	var base := _palette(renderer,index)
	if renderer.state.house_era(house)=="renaissance": base=renderer.Renaissance.palette(base)
	elif renderer.state.house_era(house)=="clockwork":base=renderer.Clockwork.palette(base)
	elif renderer.state.house_era(house)=="modern_eco":base=renderer.Modern.palette(base)
	root.set_meta("palette_colors",base.duplicate())
	return true
