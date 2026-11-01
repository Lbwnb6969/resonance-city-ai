extends RefCounted
const Plan=preload("res://scripts/world/city_creation_flowering_vines.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func build(owner:Node3D,parent:Node3D)->void:
	var rows:=Plan.plans(owner.demo.state)
	if rows.is_empty():return
	var root:=Node3D.new();root.name="FloweringWisteria";root.set_meta("clusters",rows);parent.add_child(root)
	var renderer=owner.demo.town
	var stem:=Wall.source(Color("69704b"),null,"component",Wall.Kind.CANTILEVER)
	var lavender:=Wall.source(Color("a99bc0"),null,"component",Wall.Kind.PLASTER)
	var cream:=Wall.source(Color("d7bedf"),null,"component",Wall.Kind.PLASTER)
	for row:Dictionary in rows:
		var at:Vector3=row.position;var length:float=row.length
		renderer._cylinder(root,.004,.004,length,at-Vector3.UP*length*.5,stem,5)
		for tier in range(5):
			var radius:=.033*(1.-tier*.14)
			for petal in range(3):
				var angle:=petal*TAU/3.+tier*.8+float(row.seed)
				var point:=at-Vector3.UP*(tier*length/5.)+Vector3(cos(angle)*radius,0,sin(angle)*radius)
				var flower:MeshInstance3D=renderer._box(root,Vector3(.032-tier*.003,.023,.028-tier*.003),point,lavender if (tier+petal)%3 else cream)
				flower.rotation=Vector3(.2,angle,.3)
	# Shared material batches retain wall micro-normal and contact shading.
	renderer._merge_meshes(root)
