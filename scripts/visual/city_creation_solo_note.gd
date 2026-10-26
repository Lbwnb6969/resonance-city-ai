extends RefCounted
## Shared extruded eighth-note silhouette, rather than a spherical marker.
static func mesh()->ArrayMesh:
	var tool:=SurfaceTool.new();tool.begin(Mesh.PRIMITIVE_TRIANGLES)
	var head:=SphereMesh.new();head.radius=.035;head.height=.05;head.radial_segments=8;head.rings=3
	tool.append_from(head,0,Transform3D(Basis.IDENTITY.scaled(Vector3(1.,.75,.4)),Vector3.ZERO))
	for row:Array in [[Vector3(.009,.15,.009),Vector3(.029,.065,0.)],[Vector3(.055,.024,.012),Vector3(.048,.13,0.)]]:
		var box:=BoxMesh.new();box.size=row[0];tool.append_from(box,0,Transform3D(Basis.IDENTITY,row[1]))
	return tool.commit()
