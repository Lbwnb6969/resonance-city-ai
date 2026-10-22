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
