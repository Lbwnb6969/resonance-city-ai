extends RefCounted
const Plan=preload("res://scripts/world/city_creation_window_pennants.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Support=preload("res://scripts/visual/city_creation_roof_crown_support.gd")
static func build(owner:Node3D,parent:Node3D)->void:
	var rows:=Plan.plans(owner.demo.state)
	if rows.is_empty():return
	var root:=Node3D.new();root.name="WindowPennants";root.set_meta("pennants",rows);parent.add_child(root)
	var wood:=Wall.source(Color("795d43"),null,"component",Wall.Kind.CANTILEVER)
	var cloth_a:=Wall.source(Color("c98272"),null,"component",Wall.Kind.PLASTER)
	var cloth_b:=Wall.source(Color("d9b56c"),null,"component",Wall.Kind.PLASTER)
	var renderer=owner.demo.town
	for row:Dictionary in rows:
		var at:Vector3=row.position
		var height:=Support.height_for(renderer,str(row.house_id),Vector2(at.x,at.z),.018)
		if not is_finite(height):continue
		at.y=height
		var node:=Node3D.new();root.add_child(node);node.position=at;node.rotation.y=row.yaw
		node.set_meta("support_position",at)
		renderer._cylinder(node,.018,.018,.62,Vector3(0,.32,0),wood,7)
		for side:float in [-1.,1.]:
			var x:=side*.27
			renderer._box(node,Vector3(.30,.34,.018),Vector3(x,.32,0),cloth_a if int(row.seed)%2==0 else cloth_b)
			renderer._box(node,Vector3(.055,.08,.022),Vector3(x,.11,0),cloth_b if int(row.seed)%2==0 else cloth_a)
	# Keep the sample in the same merged, tactile material path as existing scenery.
	renderer._merge_meshes(root)
