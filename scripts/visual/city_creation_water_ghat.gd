extends RefCounted
const Plan=preload("res://scripts/world/city_creation_water_ghat.gd")
const Stone=preload("res://scripts/visual/city_creation_wet_stone.gd")
static func install(r,parent:Node3D,road:Dictionary)->void:
	for plan:Dictionary in Plan.plans(r.state,road):
		var node:=Node3D.new();node.name="WaterGhat_"+("start" if plan.first else "end");node.set_meta("water_ghat",plan);parent.add_child(node)
		var material:=Stone.material(r,Color("b9b49b"));var angle:=atan2(plan.normal.x,plan.normal.y)
		for rank in range(4):
			var step:Dictionary=plan.steps[rank];var mesh:MeshInstance3D=r._box(node,Vector3(plan.width,.22,plan.depth+.008),Vector3(step.center.x,step.y-.11,step.center.y),material);mesh.rotation.y=angle;mesh.name="GhatStep_"+str(rank+1)
			var body:=StaticBody3D.new();body.collision_layer=3;body.set_meta("road_id",road.id);body.set_meta("water_ghat",plan.id);body.set_meta("ghat_step",rank+1);body.set_meta("ground",true);node.add_child(body)
			var collision:=CollisionShape3D.new();var shape:=BoxShape3D.new();shape.size=mesh.mesh.size;collision.shape=shape;collision.transform=mesh.transform;body.add_child(collision)
