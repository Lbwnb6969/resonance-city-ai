extends RefCounted
## Reuses the town's live water distance texture; no new mesh or field upload.
const ShaderSource=preload("res://scripts/visual/shaders/creation_wet_stone.gdshader")
const Bounds=preload("res://scripts/world/city_creation_bounds.gd")
static func material(renderer,tone:Color,texture:Texture2D=null,vertex_tint:bool=false)->ShaderMaterial:
	var key:="wet_stone/"+str([tone,texture,vertex_tint])
	if not renderer.materials.has(key):
		var result:=ShaderMaterial.new();result.shader=ShaderSource
		result.set_shader_parameter("stone_color",tone);result.set_shader_parameter("textured",texture!=null)
		if texture!=null:result.set_shader_parameter("stone_texture",texture)
		result.set_shader_parameter("vertex_tint",vertex_tint)
		var rect:Rect2=Bounds.LAND_RECT
		result.set_shader_parameter("water_world_rect",Vector4(rect.position.x,rect.position.y,rect.size.x,rect.size.y))
		renderer.materials[key]=result
	var result:ShaderMaterial=renderer.materials[key]
	result.set_shader_parameter("water_field",renderer.water_field.texture)
	return result
static func bridge(renderer,mesh:MeshInstance3D)->void:
	var original:StandardMaterial3D=mesh.material_override
	var arrays:Array=mesh.mesh.surface_get_arrays(0);var colors:=PackedColorArray()
	colors.resize(arrays[Mesh.ARRAY_VERTEX].size());colors.fill(original.albedo_color);arrays[Mesh.ARRAY_COLOR]=colors
	var colored:=ArrayMesh.new();colored.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays);mesh.mesh=colored
	mesh.material_override=material(renderer,Color.WHITE,null,true)
