extends RefCounted
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
## Real open bells/tubes/strings, with the established micro-normal/AO material.
static func build(owner:Node3D,town:Node3D,row:Dictionary)->Node3D:
	var root:=Node3D.new();root.name="MusicalArchway";owner.add_child(root)
	var point:Vector2=row.get("hang_at",row.at);root.position=Vector3(point.x,row.y,point.y)
	var direction:Vector2=row.get("hang_axis",row.get("along",row.axis));root.rotation.y=-atan2(direction.y,direction.x)
	root.set_meta("plan",row)
	var metal:=Wall.source(Color("b49654"),null,"component",Wall.Kind.STONE)
	var wood:=Wall.source(Color("80684c"),null,"component",Wall.Kind.CANTILEVER)
	# Low bridge bells hang outside the rails, above the actual water surface.
	var side:float=0. if row.kind=="skybridge" else float(row.half_width)+.08
	var height:=.38 if row.kind=="skybridge" else .24
	if row.era=="modern_eco":
		var width:=.72
		town._box(root,Vector3(width,.04,.055),Vector3(0,0,side),wood)
		town._box(root,Vector3(width,.04,.055),Vector3(0,-height,side),wood)
		for i in range(7):town._cylinder(root,.005,.005,height,Vector3((i-3)*.095,-height*.5,side),metal,5)
	elif row.era in ["renaissance","clockwork"]:
		town._box(root,Vector3(.50,.035,.055),Vector3(0,0,side),wood)
		for i in range(3):
			var x:=(i-1)*.17;var drop:=.07+float(i%2)*.035
			town._cylinder(root,.006,.006,drop,Vector3(x,-drop*.5,side),metal,5)
			# Bell rim is an open ring, with a visible clapper inside the cup.
			var ring:=TorusMesh.new();ring.inner_radius=.046;ring.outer_radius=.062;ring.rings=12;ring.ring_segments=6
			var node:=MeshInstance3D.new();node.mesh=ring;node.material_override=metal;root.add_child(node);node.position=Vector3(x,-drop-.09,side)
			for j in range(8):
				var a:=TAU*j/8.;town._box(root,Vector3(.024,.07,.022),Vector3(x+cos(a)*.041,-drop-.046,side+sin(a)*.041),metal)
			town._cylinder(root,.014,.009,.07,Vector3(x,-drop-.055,side),wood,6)
	else:
		town._box(root,Vector3(.58,.04,.065),Vector3(0,0,side),wood)
		for i in range(5):
			var length:=height*.55+float(i%3)*.035
			town._cylinder(root,.006,.006,.07,Vector3((i-2)*.105,-.035,side),wood,5)
			town._cylinder(root,.016,.016,length,Vector3((i-2)*.105,-.07-length*.5,side),metal,6)
	town._merge_meshes(root)
	return root
