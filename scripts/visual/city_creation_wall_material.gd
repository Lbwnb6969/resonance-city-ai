extends RefCounted
## Explicit wall sources retain StandardMaterial3D authoring and UVs. The
## batcher moves their exact sRGB tint into COLOR, then installs the wall shader.
## Other _material() users (timber, trim, props) never receive this marker.
const WallShader := preload("res://scripts/visual/shaders/creation_wall.gdshader")


static func source(color: Color, texture: Texture2D = null, style: String = "classic") -> StandardMaterial3D:
	var material := StandardMaterial3D.new()
	material.albedo_color = color
	material.albedo_texture = texture
	material.texture_filter = BaseMaterial3D.TEXTURE_FILTER_LINEAR_WITH_MIPMAPS
	material.texture_repeat = true
	material.roughness = 0.96 if style == "stone" else 0.93
	material.cull_mode = BaseMaterial3D.CULL_DISABLED if style == "stone" else BaseMaterial3D.CULL_BACK
	material.set_meta("creation_wall", true)
	material.set_meta("creation_wall_style", style)
	return material


static func profile(material: Material, world_base_y: float, story_height: float) -> Array:
	if not material is StandardMaterial3D or not bool(material.get_meta("creation_wall", false)): return []
	var wall := material as StandardMaterial3D
	# Tint deliberately stays out of the profile: differently colored walls
	# share a draw, with the original color recipe retained in vertex bytes.
	return ["wall", wall.albedo_texture, wall.roughness, wall.cull_mode,
		wall.uv1_scale, wall.uv1_offset, str(wall.get_meta("creation_wall_style", "classic")), world_base_y, story_height]


static func merged(source_material: StandardMaterial3D, world_base_y: float, story_height: float, shader: Shader) -> ShaderMaterial:
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
	material.set_shader_parameter("micro_normal_strength", 0.014 if str(source_material.get_meta("creation_wall_style", "classic")) == "stone" else 0.022)
	material.set_meta("creation_wall_batch", true)
	return material
