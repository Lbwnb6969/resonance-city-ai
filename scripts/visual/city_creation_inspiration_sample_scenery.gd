extends RefCounted
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func rebuild(owner)->void:
	var previous:Node=owner.get_node_or_null("SecondStudyScenery")
	if previous!=null:owner.remove_child(previous);previous.queue_free()
	var root:=Node3D.new();root.name="SecondStudyScenery";owner.add_child(root)
	root.visible=owner.demo.state.creative_settings.get("presentation",{}).get("automatic_decoration",true)
	var renderer=owner.demo.town
	for row:Dictionary in Samples.plans(owner.demo.state):
		var node:=Node3D.new();node.name=str(row.kind)+"_"+str(row.house_id);node.set_meta("plan",row);root.add_child(node)
		if row.kind=="pier_lantern":
			node.position=row.position;node.rotation.y=row.yaw
			var wood:=Wall.source(Color("795d43"),null,"component",Wall.Kind.CANTILEVER)
			var amber:=preload("res://scripts/visual/city_creation_metronome_material.gd").glow();amber.set_shader_parameter("metronome_strength",.60)
			renderer._cylinder(node,.025,.033,.30,Vector3(0,.15,0),wood,8)
			renderer._box(node,Vector3(.15,.035,.15),Vector3(0,.315,0),wood)
			renderer._box(node,Vector3(.09,.12,.09),Vector3(0,.23,0),amber)
			node.set_meta("water_lamp",Vector3(0,.23,0))
			for x:float in [-.06,.06]:renderer._box(node,Vector3(.014,.14,.014),Vector3(x,.23,0),wood)
		else:
			var green:=Wall.source(Color("56764b"),null,"component",Wall.Kind.PLASTER)
			var stem:=Wall.source(Color("637348"),null,"component",Wall.Kind.CANTILEVER)
			for base:Vector3 in row.columns:
				var last:=base+Vector3(.113,0,0)
				for i in range(1,25):
					var angle:=i*.59+float(row.yaw);var at:=base+Vector3(cos(angle)*.113,i*1.40/24.,sin(angle)*.113)
					var vine:MeshInstance3D=renderer._cylinder(node,.007,.009,last.distance_to(at),(last+at)*.5,stem,5)
					vine.quaternion=Quaternion(Vector3.UP,(at-last).normalized());last=at
					if i%3!=0:continue
					var leaf:MeshInstance3D=renderer._box(node,Vector3(.065,.018,.10),at+Vector3(cos(angle)*.035,0,sin(angle)*.035),green)
					leaf.rotation=Vector3(.4,angle,.35)
		# Use the project's shared material merging, micro-normal and contact shading.
		renderer._merge_meshes(node)
