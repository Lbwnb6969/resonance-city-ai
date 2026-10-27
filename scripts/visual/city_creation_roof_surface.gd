extends RefCounted
## Bake shingle coordinates from each actual face once. Camera derivatives and
## animated house transforms never redefine the roof's tile projection.
static func build(renderer,parent:Node3D,vertices:Array,color:Color,coordinates:PackedVector2Array=PackedVector2Array())->MeshInstance3D:
	var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	for index in range(0,vertices.size(),3):
		var a:Vector3=vertices[index];var b:Vector3=vertices[index+1];var c:Vector3=vertices[index+2]
		var normal:Vector3=(b-a).cross(c-a).normalized()
		var contour:=Vector3(normal.z,0.,-normal.x)
		if contour.length_squared()<.0001:contour=Vector3.RIGHT
		contour=contour.normalized();var downhill:=contour.cross(normal).normalized()
		for offset:int in [0,2,1]:
			var point:Vector3=vertices[index+offset]
			var uv:=coordinates[index+offset] if not coordinates.is_empty() else Vector2(point.dot(contour)/.22,point.dot(downhill)/.28)
			surface.set_normal(normal);surface.set_uv(uv);surface.add_vertex(point)
	surface.index()
	var node:=MeshInstance3D.new();node.mesh=surface.commit();node.material_override=renderer._material(color);parent.add_child(node)
	return node
