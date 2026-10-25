extends RefCounted
## Exact maximum of published triangles inside the circular crown footprint.
## Batching AABBs include distant trim; collision roofs omit decorative ridges.
static func height_for(renderer,house_id:String,center:Vector2,radius:float)->float:
	var highest:=-INF
	var root:Node3D=renderer.house_roots[house_id]
	for part:MeshInstance3D in root.find_children("*","MeshInstance3D",true,false):
		if part.mesh==null or not part.is_visible_in_tree():continue
		var vertices:PackedVector3Array=part.mesh.get_faces();var transform:=part.global_transform
		for i in range(0,vertices.size(),3):highest=maxf(highest,triangle_max(transform*vertices[i],transform*vertices[i+1],transform*vertices[i+2],center,radius))
	return highest
static func triangle_max(a:Vector3,b:Vector3,c:Vector3,center:Vector2,radius:float)->float:
	var points:=[a,b,c];var highest:=-INF;var r2:=radius*radius
	var polygon:=PackedVector2Array([Vector2(a.x,a.z),Vector2(b.x,b.z),Vector2(c.x,c.z)])
	var bounds:=Rect2(polygon[0],Vector2.ZERO).expand(polygon[1]).expand(polygon[2])
	if not bounds.grow(radius).has_point(center):return highest
	for i in range(3):
		var p:Vector3=points[i];var q:Vector3=points[(i+1)%3]
		var relative:=Vector2(p.x,p.z)-center;var direction:=Vector2(q.x-p.x,q.z-p.z);var length2:=direction.length_squared()
		if relative.length_squared()<=r2:highest=maxf(highest,p.y)
		if length2<.000000001:continue
		var projection:=relative.dot(direction)/length2;var discriminant:=projection*projection-(relative.length_squared()-r2)/length2
		if discriminant<0.:continue
		for t:float in [-projection-sqrt(discriminant),-projection+sqrt(discriminant)]:
			if t>=0. and t<=1.:highest=maxf(highest,lerpf(p.y,q.y,t))
	var normal:Vector3=(b-a).cross(c-a)
	if absf(normal.y)>.00000001:
		var gradient:=Vector2(-normal.x/normal.y,-normal.z/normal.y)
		var candidate:=center+gradient.normalized()*radius if gradient.length_squared()>.000000001 else center
		if Geometry2D.is_point_in_polygon(candidate,polygon):highest=maxf(highest,a.y+gradient.dot(candidate-Vector2(a.x,a.z)))
	return highest
