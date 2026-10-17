extends RefCounted
## Local renderer adaptation; extracted Foundation GLBs retain original bytes.
static func outward_mesh(source: Mesh) -> ArrayMesh:
	# Recovered Foundation GLBs retain D3D winding. glTF import expects CCW
	# and converts it to Godot's clockwise convention, inverting these faces.
	# Reverse the installed copy while preserving positions and source normals.
	var result:=ArrayMesh.new()
	for surface in range(source.get_surface_count()):
		var arrays: Array=source.surface_get_arrays(surface)
		var indices: PackedInt32Array=arrays[Mesh.ARRAY_INDEX].duplicate()
		for triangle in range(0,indices.size(),3):
			var second:=indices[triangle+1]
			indices[triangle+1]=indices[triangle+2]
			indices[triangle+2]=second
		arrays[Mesh.ARRAY_INDEX]=indices
		result.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	return result
