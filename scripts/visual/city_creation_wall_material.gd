extends RefCounted
## Explicit wall sources retain StandardMaterial3D authoring and UVs. The
## batcher moves their exact sRGB tint into COLOR, then installs the wall shader.
## Architectural components opt in by surface kind; glass and foliage stay separate.
const WallShader := preload("res://scripts/visual/shaders/creation_wall.gdshader")
enum Kind { PLASTER, STONE, TERRACOTTA, SLATE, CANTILEVER, TIMBER, METAL }


static func source(color: Color, texture: Texture2D = null, style: String = "classic", kind: int = Kind.PLASTER) -> StandardMaterial3D:
	var material := StandardMaterial3D.new()
	material.albedo_color = color
	material.albedo_texture = texture
	material.texture_filter = BaseMaterial3D.TEXTURE_FILTER_LINEAR_WITH_MIPMAPS
	material.texture_repeat = true
	material.roughness = 0.96 if style == "stone" else 0.93
	if kind == Kind.TIMBER: material.roughness = .66
	if kind == Kind.METAL: material.roughness = .34; material.metallic = .82
	material.cull_mode = BaseMaterial3D.CULL_DISABLED if style == "stone" else BaseMaterial3D.CULL_BACK
	material.set_meta("creation_wall", true)
	material.set_meta("creation_wall_style", style)
	material.set_meta("creation_surface_kind", kind)
	material.set_meta("creation_fixed_color", kind == Kind.METAL)
	return material


static func component(renderer, color:Color, kind:int)->StandardMaterial3D:
	var key:="surface/"+str(kind)+"/"+str(color)
	if not renderer.materials.has(key):renderer.materials[key]=source(color,null,"component",kind)
	return renderer.materials[key]


static func apply(mesh: MeshInstance3D, kind: int) -> MeshInstance3D:
	var original := mesh.material_override as StandardMaterial3D
	var material := source(original.albedo_color, original.albedo_texture, "component", kind)
	material.cull_mode = original.cull_mode
	mesh.material_override = material
	return mesh


static func profile(material: Material, world_base_y: float, story_height: float, instance: MeshInstance3D = null) -> Array:
	if not material is StandardMaterial3D or not bool(material.get_meta("creation_wall", false)): return []
	var wall := material as StandardMaterial3D
	# Tint deliberately stays out of the profile: differently colored walls
	# share a draw, with the original color recipe retained in vertex bytes.
	var kind := int(wall.get_meta("creation_surface_kind", Kind.PLASTER))
	var bounds := Vector2(world_base_y, world_base_y + story_height)
	if kind != Kind.PLASTER and instance != null:
		var box: AABB = instance.global_transform * instance.mesh.get_aabb()
		bounds = Vector2(box.position.y, box.end.y)
	return ["wall", wall.albedo_texture, wall.roughness, wall.cull_mode,
		wall.uv1_scale, wall.uv1_offset, str(wall.get_meta("creation_wall_style", "classic")), world_base_y, story_height, kind, bounds, wall.metallic, wall.metallic_specular]


static func merged(source_material: StandardMaterial3D, world_base_y: float, story_height: float, shader: Shader, bounds: Vector2 = Vector2.ZERO) -> ShaderMaterial:
	var material := ShaderMaterial.new()
	material.shader = shader
	material.set_shader_parameter("albedo_color", Color.WHITE)
	material.set_shader_parameter("use_wall_texture", source_material.albedo_texture != null)
	if source_material.albedo_texture != null:
		material.set_shader_parameter("wall_texture", source_material.albedo_texture)
	material.set_shader_parameter("uv_scale", Vector2(source_material.uv1_scale.x, source_material.uv1_scale.y))
	material.set_shader_parameter("uv_offset", Vector2(source_material.uv1_offset.x, source_material.uv1_offset.y))
	material.set_shader_parameter("world_base_y", world_base_y)
	material.set_shader_parameter("story_height", story_height)
	material.set_shader_parameter("roughness", source_material.roughness)
	material.set_shader_parameter("metallic", source_material.metallic)
	material.set_shader_parameter("specular", source_material.metallic_specular)
	var kind := int(source_material.get_meta("creation_surface_kind", Kind.PLASTER))
	material.set_shader_parameter("surface_kind", kind)
	material.set_shader_parameter("component_bounds", bounds)
	material.set_shader_parameter("micro_normal_strength", 0.025 if kind != Kind.PLASTER else (0.014 if str(source_material.get_meta("creation_wall_style", "classic")) == "stone" else 0.022))
	if kind in [Kind.TIMBER,Kind.METAL]:material.set_shader_parameter("micro_normal_strength",.008 if kind==Kind.TIMBER else .006)
	material.set_meta("creation_wall_batch", true)
	material.set_meta("creation_fixed_color", kind == Kind.METAL)
	return material
