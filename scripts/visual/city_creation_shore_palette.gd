extends RefCounted
## One recovered Foundation diffuse/height sample, shared by all shore blends.
## Alpha is a layer-height input, never opacity. See the adjacent source note.
const Sand = preload("res://资源/自然参考/湿砂河岸.png")
const Bounds = preload("res://scripts/world/city_creation_bounds.gd")

static func configure(material: ShaderMaterial) -> void:
	var rect: Rect2=Bounds.LAND_RECT
	material.set_shader_parameter("water_world_rect",Vector4(rect.position.x,rect.position.y,rect.size.x,rect.size.y))
	material.set_shader_parameter("bank_sand", Sand)
	material.set_shader_parameter("bank_sand_enabled", true)
