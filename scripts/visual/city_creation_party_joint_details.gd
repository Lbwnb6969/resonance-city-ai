extends RefCounted
## Seams join edge jambs only. Roads and the actual entry approach win.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Sites=preload("res://scripts/world/city_creation_porch_sites.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func clear(city,plan:Dictionary)->bool:
	for road:Dictionary in city.roads:
		for i in range(1,road.points.size()):
			if Sites.capsule(plan.polygon,Vector2(road.points[i-1][0],road.points[i-1][1]),Vector2(road.points[i][0],road.points[i][1]),float(road.width)*.5+.03):return false
	for house:Dictionary in city.houses:
		for entry:Dictionary in city.house_entrances(str(house.id)):
			if Sites.capsule(plan.polygon,entry.wall_at,entry.clearance_at,.40):return false
		if str(house.id) in [plan.owner,plan.other]:continue
		for cell:Dictionary in house.cells:
			var bottom:=float(house.get("base_y",0.))+int(cell.level)*1.7
			if bottom<plan.high and bottom+1.7>plan.low and Frame.boxes_overlap({"polygon":plan.polygon},Frame.footprint(house,cell)):return false
	return true
static func prism(r,parent:Node3D,house:Dictionary,polygon:PackedVector2Array,low:float,high:float,color:Color,label:String)->MeshInstance3D:
	var vertices:Array=[];var indices:=Geometry2D.triangulate_polygon(polygon)
	for i in range(0,indices.size(),3):
		for index:int in [indices[i+2],indices[i+1],indices[i]]:var p:=polygon[index];vertices.append(Vector3(p.x,high,p.y))
		for index:int in [indices[i],indices[i+1],indices[i+2]]:var p:=polygon[index];vertices.append(Vector3(p.x,low,p.y))
	for i in range(polygon.size()):
		var a:=Vector3(polygon[i].x,low,polygon[i].y);var b:=Vector3(polygon[(i+1)%polygon.size()].x,low,polygon[(i+1)%polygon.size()].y);var up:=Vector3.UP*(high-low)
		vertices.append_array([a,b,a+up,b,b+up,a+up])
	# Finish runs after hinge deformation and before root yaw; undo yaw only.
	for i in range(vertices.size()):
		var origin:=Frame.origin(house);var at:=origin+(Vector2(vertices[i].x,vertices[i].z)-origin).rotated(Frame.yaw(house));vertices[i]=Vector3(at.x,vertices[i].y,at.y)
	var mesh:MeshInstance3D=Wall.apply(r._triangles(parent,vertices,color),Wall.Kind.STONE);mesh.name=label;return mesh
static func build(r,parent:Node3D,house:Dictionary)->void:
	var active:Array=[];var rejected:=0;var palette:Array=parent.get_meta("palette_colors",[])
	if palette.is_empty():return
	for plan:Dictionary in r.building_context.party_joints.get(str(house.id),[]):
		var cap:PackedVector2Array=Geometry2D.offset_polygon(plan.polygon,.025,Geometry2D.JOIN_MITER)[0]
		var clearance:Dictionary=plan.duplicate();clearance.polygon=cap
		if not clear(r.state,clearance):rejected+=1;continue
		var node:=Node3D.new();node.name=plan.kind+"_"+str(active.size());parent.add_child(node);node.set_meta("party_joint",plan)
		prism(r,node,house,plan.polygon,plan.low,plan.high-.08,palette[0].lerp(Color("b7ac96"),.6),"JointStoneShaft")
		prism(r,node,house,cap,plan.high-.08,plan.high,palette[0].lerp(Color("e8ddbd"),.65),"JointStoneCap")
		var body:=StaticBody3D.new();body.name="JointPick";body.set_meta("house_id",str(house.id));body.set_meta("cell_id",plan.cell_id);body.set_meta("party_joint",plan.kind);node.add_child(body)
		var faces:=PackedVector3Array()
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):faces.append_array(mesh.mesh.get_faces())
		var collision:=CollisionShape3D.new();var shape:=ConcavePolygonShape3D.new();shape.set_faces(faces);shape.backface_collision=true;collision.shape=shape;body.add_child(collision);active.append(plan)
	parent.set_meta("party_joints",{"active":active,"rejected":rejected})
