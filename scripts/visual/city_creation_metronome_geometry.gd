extends RefCounted
static func ring(radius: float, width: float) -> ArrayMesh:
	var surface := SurfaceTool.new(); surface.begin(Mesh.PRIMITIVE_TRIANGLES); surface.set_normal(Vector3.UP)
	for i in range(48):
		var a := TAU*i/48.; var b := TAU*(i+1)/48.
		var p := Vector3(cos(a),0,sin(a)); var q := Vector3(cos(b),0,sin(b))
		for at: Vector3 in [p*radius,q*(radius+width),q*radius,p*radius,p*(radius+width),q*(radius+width)]: surface.add_vertex(at)
	return surface.commit()
static func rail_flow(points: Array[Vector3]) -> ArrayMesh:
	var surface := SurfaceTool.new(); surface.begin(Mesh.PRIMITIVE_TRIANGLES); surface.set_normal(Vector3.UP)
	var length := 0.
	for i in range(1,points.size()): length += points[i-1].distance_to(points[i])
	if length < .002: return null
	var walked := 0.
	for i in range(1,points.size()):
		var a := points[i-1]; var b := points[i]; var distance := a.distance_to(b)
		var axis := Vector3(b.x-a.x,0,b.z-a.z)
		if axis.length() < .002: continue
		var normal := Vector3(-axis.z,0,axis.x).normalized()
		for side: float in [-1.,1.]:
			var low := normal*(side*.31-.035); var high := normal*(side*.31+.035)
			var vertices: Array[Vector3] = [a+low,b+high,b+low,a+low,a+high,b+high]
			for j in range(6):
				surface.set_uv(Vector2((walked+distance if j in [1,2,5] else walked)/length,0))
				surface.add_vertex(vertices[j]+Vector3.UP*.052)
		walked += distance
	return surface.commit()
