extends RefCounted
const Plan=preload("res://scripts/world/city_creation_paired_bridge_lamps.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func build(owner:Node3D,parent:Node3D)->void:
	var rows:=Plan.plans(owner.demo.state)
	if rows.is_empty():return
	var root:=Node3D.new();root.name="PairedBridgeLamps";root.set_meta("lamps",rows);parent.add_child(root)
	var renderer=owner.demo.town
	var bronze:=Wall.source(Color("77664e"),null,"component",Wall.Kind.CANTILEVER)
	var stone:=Wall.source(Color("d5c9a9"),null,"component",Wall.Kind.STONE)
	var glass:Material=renderer.promenade.lamp_material()
	for row:Dictionary in rows:
		var node:=Node3D.new();root.add_child(node);node.position=row.position;node.rotation.y=row.yaw
		renderer._box(node,Vector3(.12,.035,.12),Vector3(0,.0175,0),stone)
		renderer._cylinder(node,.019,.025,.25,Vector3(0,.16,0),bronze,8)
		renderer._box(node,Vector3(.14,.025,.14),Vector3(0,.295,0),bronze)
		renderer._box(node,Vector3(.095,.16,.095),Vector3(0,.3875,0),glass)
		for x:float in [-.055,.055]:
			for z:float in [-.055,.055]:renderer._box(node,Vector3(.012,.18,.012),Vector3(x,.3875,z),bronze)
		renderer._box(node,Vector3(.15,.025,.15),Vector3(0,.49,0),bronze)
		renderer._cylinder(node,0.,.085,.065,Vector3(0,.535,0),bronze,4)
	# Baked local transforms, shared material batches; no new light or physics nodes.
	renderer._merge_meshes(root)
