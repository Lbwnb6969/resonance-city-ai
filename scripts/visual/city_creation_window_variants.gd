extends RefCounted
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Arch=preload("res://scripts/visual/city_creation_architecture.gd")
static func build(r,job,wall:Node3D,plan:Dictionary,stone:Material)->void:
	var key:=Choice.selected(job.house)
	if key.is_empty():return
	var detail:=Node3D.new();detail.name="WindowVariant_"+key;wall.add_child(detail)
	detail.set_meta("window_variant",{"version":1,"id":key})
	for h:Dictionary in plan.holes:
		var x:float=h.x;var middle:float=(h.bottom+h.spring)*.5;var height:float=h.spring-h.bottom
		var detail_seed:=posmod(hash([Choice.seed_for(job.house),x,wall.rotation.y]),3)
		if key=="timber_shutters":
			for sign_value:float in [-1.,1.]:
				var leaf:=Node3D.new();leaf.name="VariantShutter";detail.add_child(leaf);leaf.position=Vector3(x+sign_value*.29,middle,.105);leaf.rotation.y=sign_value*deg_to_rad(14.)
				r._box(leaf,Vector3(.14,height+.04,.025),Vector3.ZERO,Wall.component(r,job.palette[2],Wall.Kind.TIMBER))
				var box:=BoxMesh.new();box.size=Vector3(.13,.025,.025);var strips:Array[Vector3]=[]
				var tilt:=Basis(Vector3.RIGHT,deg_to_rad(10.+posmod(Choice.seed_for(job.house),3)*2.))
				for slat in range(6):
					for point:Vector3 in box.get_faces():strips.append(tilt*point+Vector3(0,-height*.40+height*.16*slat,.023))
				var slats:MeshInstance3D=r._triangles(leaf,strips,job.palette[2].lightened(.13));slats.material_override=Wall.component(r,job.palette[2].lightened(.13),Wall.Kind.TIMBER);slats.name="VariantShutterSlats"
		else:
			var bottom:float=h.spring+.075
			var polygon:=PackedVector2Array([Vector2(x-.25,bottom),Vector2(x+.25,bottom),Vector2(x,bottom+.115+detail_seed*.01)])
			var pediment:MeshInstance3D=r._triangles(detail,Arch._extrude(polygon,.12),stone.albedo_color);pediment.material_override=stone;pediment.position.z=.10;pediment.name="VariantStonePediment"
