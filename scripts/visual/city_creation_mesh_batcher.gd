extends RefCounted
## Static material batching for the creation renderer's creation_solid factory.
## Move its untextured sRGB albedo to vertex COLOR without a script vertex loop.
## Live resonance meshes keep their nodes, materials and uniform owners.
const CACHE_LIMIT := 256
const WallMaterial := preload("res://scripts/visual/city_creation_wall_material.gd")
var source_cache: Dictionary = {}
var materials: Dictionary = {}
var _cache_order: Array = []
var _wall_shaders: Dictionary = {}

var pending_merges: Dictionary = {}

func merge(parent: Node3D) -> Dictionary:
	var job := _begin(parent)
	while not _advance(job,1000000.0): pass
	return job.stats

func merge_budgeted(parent: Node3D, budget_ms: float) -> bool:
	var key := parent.get_instance_id()
	if not pending_merges.has(key): pending_merges[key] = _begin(parent)
	var job: Dictionary = pending_merges[key]
	if not _advance(job,budget_ms): return false
	parent.set_meta("material_batching",job.stats)
	pending_merges.erase(key)
	return true

func _begin(parent: Node3D) -> Dictionary:
	var started := Time.get_ticks_usec()
	var stats := {"source_instances":0,"source_surfaces":0,"colored_surfaces":0,"fallback_surfaces":0,"skipped_instances":0,"output_batches":0,"color_batches":0,"cache_hits":0,"cache_misses":0,"cache_size":0,"elapsed_ms":0.0}
	var job := {"parent":parent,"sources":parent.find_children("*","MeshInstance3D",true,false),"source_index":0,
		"batches":{},"profiles":{},"inverse":parent.global_transform.affine_inverse(),
		"wall_base_y":float(parent.get_meta("creation_wall_base_y",0.0)),
		"wall_story_height":float(parent.get_meta("creation_wall_story_height",1.7)),
		"outputs":[],"output_index":0,"output_started":false,"complete":false,"stats":stats,"steps":0}
	stats.elapsed_ms = float(Time.get_ticks_usec()-started)/1000.0
	return job

func _advance(job: Dictionary, budget_ms: float) -> bool:
	var started := Time.get_ticks_usec()
	job.steps += 1
	# A source mesh append or one final material batch is the indivisible unit.
	# All partial meshes stay below the hidden staging root until publication.
	var units := 0
	while units==0 or float(Time.get_ticks_usec()-started)/1000.0 < budget_ms:
		if int(job.source_index)<job.sources.size():
			_append_instance(job,job.sources[int(job.source_index)])
			job.source_index += 1
		elif not bool(job.output_started):
			job.outputs = job.batches.values()
			job.output_started = true
		elif int(job.output_index)<job.outputs.size():
			_install_batch(job,job.outputs[int(job.output_index)])
			job.output_index += 1
		else:
			job.complete = true
			break
		units += 1
	job.stats.elapsed_ms += float(Time.get_ticks_usec()-started)/1000.0
	job.stats.output_batches = job.batches.size()
	job.stats.cache_size = source_cache.size()
	job.stats.steps = job.steps
	return bool(job.complete)

func _append_instance(job: Dictionary, instance: MeshInstance3D) -> void:
	var parent: Node3D = job.parent
	var stats: Dictionary = job.stats
	var batches: Dictionary = job.batches
	var profiles: Dictionary = job.profiles
	var inverse: Transform3D = job.inverse
	var wall_base_y: float = job.wall_base_y
	var wall_story_height: float = job.wall_story_height
	var source: Mesh = instance.mesh
	var material: Material = instance.material_override
	if source==null or material==null or not instance.visible or instance.skin!=null or _live_visual(instance,parent):
		stats.skipped_instances+=1
		return
	if source.get_surface_count()==0:
		stats.skipped_instances+=1
		return
	var material_id := material.get_instance_id()
	if not profiles.has(material_id) or int(material.get_meta("creation_surface_kind",0)) > 0:
		var wall_profile := WallMaterial.profile(material,wall_base_y,wall_story_height,instance)
		profiles[material_id] = wall_profile if not wall_profile.is_empty() else _solid_profile(material)
	var profile: Array = profiles[material_id]
	var overlay: Material = instance.material_overlay
	var state: Array = [instance.cast_shadow,instance.layers,instance.gi_mode,instance.ignore_occlusion_culling,0 if overlay==null else overlay.get_instance_id(),instance.visibility_range_begin,instance.visibility_range_end,instance.visibility_range_begin_margin,instance.visibility_range_end_margin,instance.visibility_range_fade_mode]
	var transform: Transform3D = inverse*instance.global_transform
	state.append(bool(instance.get_meta("balcony_rail",false)))
	for index in range(source.get_surface_count()):
		var colored: ArrayMesh
		if not profile.is_empty(): colored = _colored_source(source,index,(material as StandardMaterial3D).albedo_color,stats)
		var key: Array = ["solid",profile,state] if colored!=null else ["material",material_id,state]
		if not batches.has(key):
			var surface := SurfaceTool.new()
			surface.begin(Mesh.PRIMITIVE_TRIANGLES)
			var final_material: Material = _vertex_material(material as StandardMaterial3D,profile) if colored!=null else material
			batches[key] = {"surface":surface,"material":final_material,"overlay":overlay,"state":state,"margin":instance.extra_cull_margin}
			if colored!=null: stats.color_batches+=1
		var batch: Dictionary = batches[key]
		batch.margin = maxf(float(batch.margin),instance.extra_cull_margin)
		# append_from performs the existing C++ vertex/normal/UV/index
		# transformation. Only COLOR differs in an eligible copied source.
		batch.surface.append_from(colored if colored!=null else source,0 if colored!=null else index,transform)
		stats.source_surfaces+=1
		if colored!=null: stats.colored_surfaces+=1
		else: stats.fallback_surfaces+=1
	stats.source_instances+=1
	instance.get_parent().remove_child(instance)
	instance.queue_free()

func _install_batch(job: Dictionary, batch: Dictionary) -> void:
	var parent: Node3D = job.parent
	var instance := MeshInstance3D.new()
	instance.name = "CreationMaterialBatch"
	instance.mesh = batch.surface.commit(null,Mesh.ARRAY_FLAG_USE_DYNAMIC_UPDATE if parent.has_meta("palette_colors") else 0)
	instance.material_override = batch.material
	instance.material_overlay = batch.overlay
	instance.cast_shadow = int(batch.state[0])
	instance.layers = int(batch.state[1])
	instance.gi_mode = int(batch.state[2])
	instance.ignore_occlusion_culling = bool(batch.state[3])
	instance.visibility_range_begin=float(batch.state[5]);instance.visibility_range_end=float(batch.state[6])
	instance.visibility_range_begin_margin=float(batch.state[7]);instance.visibility_range_end_margin=float(batch.state[8]);instance.visibility_range_fade_mode=int(batch.state[9])
	instance.extra_cull_margin = float(batch.margin)
	if bool(batch.state[10]):instance.set_meta("balcony_rail",true)
	parent.add_child(instance)

func _solid_profile(material: Material) -> Array:
	if not material is StandardMaterial3D or not bool(material.get_meta("creation_solid",false)): return []
	var solid := material as StandardMaterial3D
	if solid.transparency!=BaseMaterial3D.TRANSPARENCY_DISABLED or solid.albedo_color.a!=1.0 or solid.metallic!=0.0 or solid.vertex_color_use_as_albedo or solid.next_pass!=null: return []
	if solid.emission_enabled or solid.normal_enabled or solid.ao_enabled or solid.rim_enabled or solid.clearcoat_enabled or solid.anisotropy_enabled or solid.subsurf_scatter_enabled or solid.backlight_enabled or solid.refraction_enabled or solid.detail_enabled or solid.heightmap_enabled: return []
	if solid.proximity_fade_enabled or solid.distance_fade_mode!=BaseMaterial3D.DISTANCE_FADE_DISABLED or solid.grow: return []
	# The marker belongs only to renderer._material's plain-color factory.
	# Still reject a later texture assignment instead of baking over it.
	for slot in range(BaseMaterial3D.TEXTURE_MAX):
		if solid.get_texture(slot)!=null: return []
	return [solid.roughness,solid.cull_mode,solid.shading_mode,solid.diffuse_mode,solid.specular_mode,solid.metallic_specular,solid.disable_receive_shadows,solid.disable_ambient_light,solid.disable_fog,solid.no_depth_test,solid.depth_draw_mode]

func _vertex_material(source: StandardMaterial3D,profile: Array) -> Material:
	if profile[0] is String and str(profile[0]) == "wall":
		if not materials.has(profile):
			var cull_mode := int(source.cull_mode)
			if not _wall_shaders.has(cull_mode):
				var shader: Shader = WallMaterial.WallShader
				if cull_mode != BaseMaterial3D.CULL_BACK:
					shader = Shader.new()
					shader.code = WallMaterial.WallShader.code.replace("cull_back", "cull_disabled" if cull_mode == BaseMaterial3D.CULL_DISABLED else "cull_front")
				_wall_shaders[cull_mode] = shader
			materials[profile] = WallMaterial.merged(source,float(profile[7]),float(profile[8]),_wall_shaders[cull_mode],profile[10])
		return materials[profile]
	if not materials.has(profile):
		var material := source.duplicate() as StandardMaterial3D
		material.albedo_color = Color.WHITE
		material.vertex_color_use_as_albedo = true
		# Forward+/Mobile decode sRGB vertex colors; Compatibility already
		# shades in that working space and ignores this documented flag.
		material.vertex_color_is_srgb = true
		materials[profile] = material
	return materials[profile]

func _colored_source(source: Mesh,index: int,color: Color,stats: Dictionary) -> ArrayMesh:
	if not (source is BoxMesh or source is CylinderMesh or source is SphereMesh or source is ArrayMesh): return null
	if source is ArrayMesh:
		if source.get_blend_shape_count()>0 or source.surface_get_primitive_type(index)!=Mesh.PRIMITIVE_TRIANGLES: return null
	var key := _source_key(source,index,color)
	if not key.is_empty() and source_cache.has(key):
		stats.cache_hits+=1
		return source_cache[key]
	var arrays: Array = source.surface_get_arrays(index)
	var existing: Variant = arrays[Mesh.ARRAY_COLOR]
	if existing!=null and existing.size()>0: return null
	var points: PackedVector3Array = arrays[Mesh.ARRAY_VERTEX]
	var colors := PackedColorArray()
	colors.resize(points.size())
	colors.fill(color)
	arrays[Mesh.ARRAY_COLOR] = colors
	var colored := ArrayMesh.new()
	colored.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	stats.cache_misses+=1
	# Generated ArrayMeshes stay uncached. Explicitly immutable shared prefabs
	# use this same bounded cache alongside stable primitive dimensions.
	if not key.is_empty():
		while source_cache.size()>=CACHE_LIMIT:
			var oldest: Array = _cache_order.pop_front()
			source_cache.erase(oldest)
		source_cache[key] = colored
		_cache_order.append(key)
	return colored

func _source_key(source: Mesh,index: int,color: Color) -> Array:
	if source is ArrayMesh and bool(source.get_meta("creation_immutable_prefab",false)):
		return ["prefab",source,index,color]
	var key: Array = []
	if source is BoxMesh:
		key = ["box",source.size,source.subdivide_width,source.subdivide_height,source.subdivide_depth]
	elif source is CylinderMesh:
		key = ["cylinder",source.top_radius,source.bottom_radius,source.height,source.radial_segments,source.rings,source.cap_top,source.cap_bottom]
	elif source is SphereMesh:
		key = ["sphere",source.radius,source.height,source.radial_segments,source.rings,source.is_hemisphere]
	if not key.is_empty(): key.append_array([index,source.flip_faces,source.add_uv2,source.uv2_padding,color])
	return key

func _live_visual(instance: MeshInstance3D,parent: Node3D) -> bool:
	if bool(instance.get_meta("creation_live_visual",false)): return true
	if instance.name in ["ResonanceVisualRig","ResonanceArc","ConcertGroundBreath"]: return true
	var ancestor: Node = instance.get_parent()
	while ancestor!=null and ancestor!=parent:
		if ancestor.name=="ResonanceVisualPivot": return true
		ancestor = ancestor.get_parent()
	return false
