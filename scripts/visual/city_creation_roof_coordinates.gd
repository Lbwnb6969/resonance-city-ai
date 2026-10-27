extends RefCounted
## One chart per square roof side, or one closed chart around a round roof.
## Every profile ring shares its accumulated meridian distance, regardless of
## the triangle's slope or the tower's position in the city.
static func build(vertices:Array,center:Vector3,circular:bool)->PackedVector2Array:
	var rings:Dictionary={}
	for point:Vector3 in vertices:
		var local:=point-center
		var radius:=Vector2(local.x,local.z).length() if circular else maxf(absf(local.x),absf(local.z))
		rings[local.y]=maxf(float(rings.get(local.y,0.)),radius)
	var heights:Array=rings.keys();heights.sort()
	var distances:Dictionary={};var distance:=0.;var previous:=Vector2.ZERO
	for index in range(heights.size()):
		var height:float=heights[index];var profile:=Vector2(float(rings[height]),height)
		if index>0:distance+=previous.distance_to(profile)
		distances[height]=distance/.28;previous=profile
	var columns:=roundf(TAU*float(rings[heights[0]])/.22) if circular else 0.
	var result:=PackedVector2Array()
	for index in range(0,vertices.size(),3):
		var points:Array[Vector3]=[vertices[index]-center,vertices[index+1]-center,vertices[index+2]-center]
		var contour:=Vector3.ZERO;var angle:=0.
		if circular:
			var direction:=Vector2.ZERO
			for point:Vector3 in points:
				var radial:=Vector2(point.x,point.z)
				if radial.length_squared()>.0000000001:direction+=radial.normalized()
			angle=fposmod(atan2(direction.y,direction.x),TAU)
		else:
			var normal:Vector3=(points[1]-points[0]).cross(points[2]-points[0]).normalized()
			contour=Vector3(normal.z,0.,-normal.x).normalized()
		for point:Vector3 in points:
			var across:=point.dot(contour)/.22
			if circular:
				var radial:=Vector2(point.x,point.z)
				var point_angle:=angle if radial.length_squared()<.0000000001 else angle+wrapf(atan2(radial.y,radial.x)-angle,-PI,PI)
				across=columns-point_angle/TAU*columns
			result.append(Vector2(across,float(distances[point.y])))
	return result
