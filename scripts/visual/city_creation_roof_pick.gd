extends RefCounted
## A local AABB replaces hundreds of decorative triangles for editor roof picking.
static func attach(body: StaticBody3D, bounds: AABB, label: String) -> void:
	var shape := BoxShape3D.new()
	shape.size = bounds.size
	var collision := CollisionShape3D.new()
	collision.shape = shape
	collision.position = bounds.get_center()
	collision.name = label
	body.add_child(collision)
static func from_children(body: StaticBody3D, parent: Node3D, label: String) -> void:
	var bounds := AABB()
	var first := true
	for child: Node in parent.get_children():
		if not child is MeshInstance3D: continue
		var mesh := child as MeshInstance3D
		var local: AABB = mesh.transform*mesh.get_aabb()
		bounds = local if first else bounds.merge(local)
		first = false
	if not first: attach(body,bounds,label)
static func from_geometry(body:StaticBody3D,parent:Node3D,label:String)->void:
	var faces:=PackedVector3Array();var inverse:=body.global_transform.affine_inverse()
	for mesh:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		var transform:=inverse*mesh.global_transform
		for vertex:Vector3 in mesh.mesh.get_faces():faces.append(transform*vertex)
	var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(faces)
	var collision:=CollisionShape3D.new();collision.name=label;collision.shape=shape;body.add_child(collision)
