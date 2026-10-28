extends RefCounted
## Vertex alpha pins canvas edges and flower roots. Solids never use this material.
const WindShader=preload("res://scripts/visual/shaders/creation_soft_wind.gdshader")
static func material(color:Color,cloth:bool=false)->ShaderMaterial:
	var result:=ShaderMaterial.new();result.shader=WindShader
	result.set_shader_parameter("tint",color);result.set_shader_parameter("cloth",cloth)
	return result
static func weighted_mesh(source:Mesh,cloth:bool=false)->ArrayMesh:
	var result:=ArrayMesh.new()
	for surface in range(source.get_surface_count()):
		var arrays:Array=source.surface_get_arrays(surface);var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
		var colors:=PackedColorArray();colors.resize(vertices.size())
		for i in range(vertices.size()):
			var weight:float=sin(clampf((vertices[i].z+.61)/1.22,0.,1.)*PI) if cloth else clampf((vertices[i].y+1.)*.5,0.,1.)
			if weight<.00001:weight=0.
			colors[i]=Color(1.,1.,1.,weight)
		arrays[Mesh.ARRAY_COLOR]=colors;result.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	return result
