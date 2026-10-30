extends RefCounted
## Base palettes and earned finishes are prepared with original geometry. Switching
## uploads only interleaved COLOR/UV attribute bytes; positions, normals,
## indices, resources, picking bodies and natural-world caches stay in place.
const Styles := preload("res://scripts/visual/city_creation_house_styles.gd")
const FINISHES := ["dawn","tide","festival","nocturne","river_jade","opal"]
static func vertex_color(color:Color)->int:
	# ArrayMesh COLOR stores truncated UNORM8 channels; Color.to_abgr32 rounds.
	return int(color.r*255.) | (int(color.g*255.)<<8) | (int(color.b*255.)<<16) | (int(color.a*255.)<<24)


static func _palette(renderer,index: int) -> Array:
	return renderer.PALETTES[index] if index < 4 else renderer.FINISH_PALETTES[FINISHES[index-4]]


static func _index(house: Dictionary) -> int:
	if house.has("custom_colors"):return 4+FINISHES.size()
	if house.has("finish"):return 4+FINISHES.find(str(house.finish))
	return posmod(int(house.get("palette",0)),4)


static func _authoring(house: Dictionary) -> Dictionary:
	var record := house.duplicate(true)
	for field in ["palette","finish","name","bakery_open","workshop_open","auto_matinee","custom_colors"]: record.erase(field)
	return record


static func base_palette(renderer,house:Dictionary)->Array:
	var base:Array=renderer.PALETTES[posmod(int(house.get("palette",0)),renderer.PALETTES.size())]
	if house.has("finish"):base=renderer.FINISH_PALETTES[str(house.finish)]
	if house.has("custom_colors"):
		var colors:Dictionary=house.custom_colors
		base=[Color.from_string(colors.wall,Color.WHITE),Color.from_string(colors.roof,Color("b85c3e")),base[2]]
	return base

static func era_palette(renderer,house:Dictionary,base:Array,custom:bool=false)->Array:
	if custom:return base
	match renderer.state.house_era(house):
		"renaissance":return renderer.Renaissance.palette(base)
		"clockwork":return renderer.Clockwork.palette(base)
		"modern_eco":return renderer.Modern.palette(base)
	return base

static func _colors(p: Array) -> Array[Color]:
	var stone := Styles.wall_color("stone",p[0])
	var tower: Color = p[1].lerp(Color("738078"),0.24)
	return [p[0],p[1],p[2],p[0].darkened(0.06),p[0].darkened(0.08),p[0].lightened(0.045),
		p[1].darkened(0.20),p[1].darkened(0.04),p[1].lightened(0.09),p[1].lightened(0.17),p[1].lightened(0.10),
		p[2].lightened(0.13),p[2].darkened(0.20),stone,stone.lightened(0.12),stone.darkened(0.08),
		p[0].lerp(Color("e7d9b9"),.5),p[0].lerp(Color("e6d8b8"),.48),p[0].lerp(Color("e4d5b5"),.45),p[2].darkened(.42),p[1].lightened(.09),
		p[0].lerp(Color("c9c5ae"),0.72),p[0].lerp(Color.WHITE,0.60),tower,tower.darkened(0.18),
		p[0].lerp(Color("d9c7a2"),.55),p[2].lerp(Color("94724e"),.35)]


static func prepare(renderer,root:Node3D,house:Dictionary,budget_ms:float=0.)->bool:
	var started:=Time.get_ticks_usec()
	var job:Dictionary
	if root.has_meta("house_color_pending"):
		job=root.get_meta("house_color_pending")
	else:
		var palettes: Array = []
		for index in range(4+FINISHES.size()):
			var base := era_palette(renderer,house,_palette(renderer,index))
			palettes.append(_colors(base))
		palettes.append(_colors(era_palette(renderer,house,base_palette(renderer,house),house.has("custom_colors"))))
		var current: int = _index(house)
		var lookup:Dictionary={};var vertex_lookup:Dictionary={};var ambiguities:Array=[]
		for index in range(palettes[current].size()):
			for vertex:bool in [false,true]:
				var table:Dictionary=vertex_lookup if vertex else lookup
				var key:int=vertex_color(palettes[current][index]) if vertex else palettes[current][index].to_abgr32()
				if table.has(key):ambiguities.append({"a":table[key],"b":index,"vertex":vertex})
				table[key]=index
		var buffers: Array = []
		var material_rows: Array = []
		var style_rows: Array = []
		job={"palettes":palettes,"current":current,"lookup":lookup,"vertex_lookup":vertex_lookup,"ambiguities":ambiguities,"buffers":buffers,"materials":material_rows,
			"style_rows":style_rows,"bytes":0,"elapsed_us":0,"nodes":root.find_children("*","MeshInstance3D",true,false),"cursor":0}
		root.set_meta("house_color_pending",job)
	while job.cursor<job.nodes.size():
		_prepare_mesh(renderer,job.nodes[job.cursor],job)
		job.cursor+=1
		if budget_ms>0. and float(Time.get_ticks_usec()-started)/1000.>=budget_ms and job.cursor<job.nodes.size():
			job.elapsed_us+=Time.get_ticks_usec()-started
			return false
	for node:Node in root.find_children("*","Node",true,false):
		if not node.has_meta("style_details"):continue
		var parts:Array=node.get_meta("style_details");var recipes:=PackedInt32Array()
		for part:Dictionary in parts:recipes.append(int(job.lookup.get(part.color.to_abgr32(),-1)))
		job.style_rows.append({"node":node,"parts":parts,"recipes":recipes})
	job.elapsed_us+=Time.get_ticks_usec()-started
	var elapsed:float=float(job.elapsed_us)/1000.
	root.set_meta("house_color_cache",{"authoring":_authoring(house),"buffers":job.buffers,"materials":job.materials,
		"style_rows":job.style_rows,"palettes":job.palettes,"ambiguities":job.ambiguities,"index":job.current,"bytes":job.bytes,
		"custom_colors":house.get("custom_colors",{}).duplicate(),"prepare_ms":elapsed,"warmup_ms":0.,"upload_bytes":0})
	root.set_meta("house_color_prepare",{"prepare_ms":elapsed,"warmup_ms":0.,"bytes":job.bytes,"upload_bytes":0,"surfaces":job.buffers.size(),"variants":job.palettes.size()})
	root.remove_meta("house_color_pending")
	return true

static func _prepare_mesh(renderer,node:MeshInstance3D,job:Dictionary)->void:
	var lookup:Dictionary=job.lookup
	var current:int=job.current
	var palettes:Array=job.palettes
	var buffers:Array=job.buffers
	var material_rows:Array=job.materials
	if node.mesh == null:return
	var material: Material = node.material_override
	if material is StandardMaterial3D:
		var recipe: int = lookup.get(material.albedo_color.to_abgr32(),-1)
		if recipe >= 0 and not material.vertex_color_use_as_albedo:
			var owned := material.duplicate() as StandardMaterial3D
			node.material_override = owned
			material_rows.append({"node":node,"material":owned,"recipe":recipe,"shader":false})
	elif material is ShaderMaterial and material.shader in [renderer.JoinedRoofShader,renderer.Clockwork.Brick]:
		var parameter := "brick_color" if material.shader==renderer.Clockwork.Brick else "roof_color"
		var roof_color: Color = material.get_shader_parameter(parameter)
		var recipe: int = lookup.get(roof_color.to_abgr32(),-1)
		if recipe >= 0:
			var owned := material.duplicate() as ShaderMaterial
			node.material_override = owned
			material_rows.append({"node":node,"material":owned,"recipe":recipe,"shader":true,"parameter":parameter})
	if not node.mesh is ArrayMesh:return
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
			vertex_recipes[vertex] = int(job.vertex_lookup.get(original[vertex].to_abgr32(),-1))
			if vertex_recipes[vertex] >= 0: changes += 1
		if changes == 0: continue
		var raw: Dictionary = RenderingServer.mesh_get_surface(mesh.get_rid(),surface)
		var source: PackedByteArray = raw.attribute_data
		var stride := RenderingServer.mesh_surface_get_format_attribute_stride(format,count)
		var offset := RenderingServer.mesh_surface_get_format_offset(format,count,Mesh.ARRAY_COLOR)
		var variants: Array[PackedByteArray] = []
		# Only the installed palette needs bytes now. Other variants are
		# populated on demand, avoiding eight full copies on every module edit.
		for index in range(palettes.size()):
			variants.append(source if index==current else PackedByteArray())
		job.bytes+=source.size()
		buffers.append({"mesh":mesh,"surface":surface,"variants":variants,"source":source,
			"recipes":vertex_recipes,"stride":stride,"offset":offset})



static func apply(renderer,root: Node3D,house: Dictionary) -> bool:
	if not root.has_meta("house_color_cache") or not root.has_meta("color_geometry_fingerprint"): return false
	var cache: Dictionary = root.get_meta("house_color_cache")
	if cache.authoring != _authoring(house) or str(root.get_meta("era_theme","pastoral")) != renderer.state.house_era(house): return false
	var index: int = _index(house)
	if house.has("custom_colors") and cache.get("custom_colors",{})!=house.custom_colors:
		cache.palettes[4+FINISHES.size()]=_colors(era_palette(renderer,house,base_palette(renderer,house),house.has("custom_colors")))
		for buffer:Dictionary in cache.buffers:buffer.variants[4+FINISHES.size()]=PackedByteArray()
		cache.custom_colors=house.custom_colors.duplicate()
	elif index == int(cache.index): return true
	var colors: Array = cache.palettes[index]
	# Compressed source colors can merge distinct recipes. Rebuild this house
	# when the target separates them; inferring a recipe would recolor it wrong.
	for pair:Dictionary in cache.ambiguities:
		var a:int=vertex_color(colors[pair.a]) if pair.vertex else colors[pair.a].to_abgr32()
		var b:int=vertex_color(colors[pair.b]) if pair.vertex else colors[pair.b].to_abgr32()
		if a!=b:return false
	for buffer: Dictionary in cache.buffers:
		var mesh: ArrayMesh = buffer.mesh
		if buffer.variants[index].is_empty():
			var bytes:PackedByteArray=buffer.source.duplicate()
			for vertex:int in range(buffer.recipes.size()):
				var recipe:int=buffer.recipes[vertex]
				if recipe>=0:bytes.encode_u32(int(buffer.offset)+vertex*int(buffer.stride),vertex_color(colors[recipe]))
			buffer.variants[index]=bytes
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
	var base:=era_palette(renderer,house,base_palette(renderer,house),house.has("custom_colors"))
	root.set_meta("palette_colors",base.duplicate())
	return true
