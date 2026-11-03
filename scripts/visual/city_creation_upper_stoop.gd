extends RefCounted
const Plan=preload("res://scripts/world/city_creation_upper_stoop.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func build(r,parent:Node3D,house:Dictionary)->void:
	var entries:=Plan.entries(r.state,house);parent.set_meta("upper_stoops",entries)
	for plan:Dictionary in entries:
		var node:=Node3D.new();node.name="UpperStoop_"+plan.cell_id;parent.add_child(node);node.set_meta("upper_stoop",plan)
		var normal:Vector2=plan.outward;var yaw:=atan2(normal.x,normal.y)-Frame.yaw(house);var stride:float=(float(plan.distance)-.12)/int(plan.count)
		var palette:Array=parent.get_meta("palette_colors");var material:=Wall.component(r,palette[0].lerp(Color("b7ac96"),.6),Wall.Kind.STONE)
		for i in range(int(plan.count)):
			var along:=.12+(i+.5)*stride;var world:Vector2=plan.wall_at+normal*along;var at:=Frame.origin(house)+(world-Frame.origin(house)).rotated(Frame.yaw(house));var y:=lerpf(plan.sill_y,plan.street_y,float(i)/maxi(1,int(plan.count)-1))
			var mesh:MeshInstance3D=r._box(node,Vector3(.96,.14,stride+.008),Vector3(at.x,y-.07,at.y),material);mesh.rotation.y=yaw;mesh.name="UpperStoopTread"
		var body:=StaticBody3D.new();node.add_child(body);body.set_meta("house_id",str(house.id));body.set_meta("cell_id",plan.cell_id);body.set_meta("upper_stoop",true)
		for mesh:MeshInstance3D in node.get_children().filter(func(n):return n is MeshInstance3D):
			var shape:=CollisionShape3D.new();var box:=BoxShape3D.new();box.size=mesh.mesh.size;shape.shape=box;shape.transform=mesh.transform;body.add_child(shape)
