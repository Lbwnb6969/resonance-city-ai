extends RefCounted
const Plan=preload("res://scripts/world/city_creation_balcony_plan.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Shapes=preload("res://scripts/visual/city_creation_architecture.gd")
static func data(r,job)->Dictionary:
	if job.balcony==null:job.balcony=Plan.plan(r.state,job.house)
	return job.balcony
static func selected(r,job,cell:Dictionary)->bool:
	var p:=data(r,job)
	return not p.is_empty() and (str(cell.id)==str(p.upper.id) or int(p.mode)>=3 and str(cell.id)==str(p.lower.id))
static func body(parent:Node3D,house:Dictionary,cell:Dictionary)->StaticBody3D:
	var result:=StaticBody3D.new();result.set_meta("house_id",str(house.id));result.set_meta("cell_id",str(cell.id));result.set_meta("cell",cell.duplicate(true));parent.add_child(result);return result
static func box(r,parent:Node3D,collider:StaticBody3D,size:Vector3,at:Vector3,color:Color,kind:int=Wall.Kind.STONE)->MeshInstance3D:
	var mesh:MeshInstance3D=r._box(parent,size,at,Wall.source(color,null,"component",kind))
	if collider!=null:
		var collision:=CollisionShape3D.new();var shape:=BoxShape3D.new();shape.size=size;collision.shape=shape;collision.position=at;collider.add_child(collision)
	return mesh
static func base(r,job,node:Node3D,collider:StaticBody3D,cell:Dictionary,bottom:float)->bool:
	if not selected(r,job,cell):return false
	var y:=float(cell.level)*1.7
	if int(cell.level)==0:box(r,node,collider,Vector3(1.8,.15-bottom,1.8),Vector3(0,(.15+bottom)*.5,0),Color("c7b995"));return true
	if int(data(r,job).mode)<3:box(r,node,collider,Vector3(1.8,.15,1.8),Vector3(0,y+.075,0),Color("c7b995"));return true
	# U stairs have a real void in the upper floor. Front landing is .42m deep.
	var frame:=Node3D.new();frame.rotation.y=float(data(r,job).angle);node.add_child(frame);var pick:=body(frame,job.house,cell)
	for row:Array in [[Vector3(1.8,.15,.42),Vector3(0,y+.075,.69)],[Vector3(1.8,.15,.20),Vector3(0,y+.075,-.8)],[Vector3(.22,.15,1.18),Vector3(-.79,y+.075,-.11)],[Vector3(.22,.15,1.18),Vector3(.79,y+.075,-.11)]]:box(r,frame,pick,row[0],row[1],Color("c7b995"))
	return true
static func ceiling(r,job,frame)->bool:
	var p:=data(r,job)
	return not p.is_empty() and int(p.mode)>=3 and str(frame.cell.id)==str(p.lower.id)
static func wall(r,job,frame,wall_node:Node3D,side:Vector2i)->bool:
	if not selected(r,job,frame.cell):return false
	var p:=data(r,job);var collider:=body(wall_node,job.house,frame.cell)
	var opening:bool=side==p.side
	var center:=.46 if int(frame.cell.level)==1 and int(p.mode)==4 else 0.
	var half:=.30 if int(p.mode)>=3 else .70
	var lower:=int(frame.cell.level)==0
	if opening:
		wall_node.name="OrganicDoor_"+str(frame.cell.id) if int(p.mode)>=3 else "OrielOpening"
		for range_x:Vector2 in [Vector2(-.9,center-half),Vector2(center+half,.9)]:
			var width:=range_x.y-range_x.x
			if width>.001:box(r,wall_node,collider,Vector3(width,1.7,.13),Vector3((range_x.x+range_x.y)*.5,.85,0),job.palette[0],Wall.Kind.PLASTER)
		box(r,wall_node,collider,Vector3(half*2.,.28,.13),Vector3(center,1.56,0),job.palette[0],Wall.Kind.PLASTER)
		box(r,wall_node,collider,Vector3(half*2.,.15,.20),Vector3(center,.075,0),Color("c7b995"))
		for x:float in [center-half-.035,center+half+.035]:box(r,wall_node,null,Vector3(.065,1.28,.20),Vector3(x,.78,.015),job.palette[2])
		box(r,wall_node,null,Vector3(half*2.+.13,.07,.20),Vector3(center,1.39,.015),job.palette[2])
		wall_node.set_meta("clear_portal",Rect2(center-half,.15,half*2.,1.27))
		if int(p.mode)>=3:box(r,wall_node,null,Vector3(.11,.17,.06),Vector3(.56 if lower else -.10 if int(p.mode)==4 else -.55,1.,.10),Color("b29a68"))
		if lower:wall_node.set_meta("entrance",job.doors.get([str(frame.cell.id),side],{}))
	else:
		box(r,wall_node,collider,Vector3(1.8,1.7,.13),Vector3(0,.85,0),job.palette[0],Wall.Kind.PLASTER)
		r.Classical.openings(r,job,frame,wall_node,false,false,1.8)
	box(r,wall_node,null,Vector3(1.87,.11,.20),Vector3(0,1.64,.02),job.palette[2])
	return true
static func slab(r,parent:Node3D,collider:StaticBody3D,poly:PackedVector2Array,y:float,depth:float,color:Color)->void:
	# Architecture extrusion uses XY; rotate it into the horizontal XZ plane.
	var faces:Array=[]
	var source:=Shapes._extrude(poly,depth)
	for i in range(0,source.size(),3):
		for j:int in [0,2,1]:var at:Vector3=source[i+j];faces.append(Vector3(at.x,y+at.z,at.y))
	var mesh:MeshInstance3D=r._triangles(parent,faces,color);Wall.apply(mesh,Wall.Kind.STONE)
	if collider!=null:var shape:=CollisionShape3D.new();shape.shape=mesh.mesh.create_trimesh_shape();collider.add_child(shape)
static func rod(r,parent:Node3D,collider:StaticBody3D,a:Vector3,b:Vector3,width:float,color:Color)->void:
	var frame:=Node3D.new();frame.position=(a+b)*.5;parent.add_child(frame)
	frame.quaternion=Quaternion(Vector3.UP,(b-a).normalized())
	var pick:StaticBody3D=null
	if collider!=null:
		pick=StaticBody3D.new();pick.set_meta("house_id",collider.get_meta("house_id"));pick.set_meta("cell_id",collider.get_meta("cell_id"));pick.set_meta("cell",collider.get_meta("cell"));frame.add_child(pick)
	var mesh:=box(r,frame,pick,Vector3(width,a.distance_to(b),width),Vector3.ZERO,color)
	mesh.set_meta("balcony_rail",true)
static func build(r,job)->void:
	var p:=data(r,job)
	if p.is_empty():return
	var cell:Dictionary=p.upper;var node:Node3D=job.root.get_node(str(cell.id));var feature:=Node3D.new();feature.name="OrganicFacade";feature.rotation.y=float(p.angle);node.add_child(feature)
	var pick:=body(feature,job.house,cell);var poly:=Plan.outline(p);var mode:=int(p.mode)
	slab(r,feature,pick,poly,1.775,.15,Color("c7b995"))
	if mode<3:oriel(r,feature,pick,p,job.palette)
	else:
		var iron:=Color("4e615d");var count:=0
		for i in range(1,poly.size()-1):
			var a:=Vector3(poly[i].x,1.85,poly[i].y);var b:=Vector3(poly[i+1].x,1.85,poly[i+1].y)
			rod(r,feature,pick,a,a+Vector3.UP*.40,.025,iron)
			for h:float in [.12,.40]:rod(r,feature,pick,a+Vector3.UP*h,b+Vector3.UP*h,.024,iron)
			var mid:=(a+b)*.5;rod(r,feature,pick,mid,mid+Vector3.UP*.40,.016,iron);count+=1
		var last:=Vector3(poly[-1].x,1.85,poly[-1].y);rod(r,feature,pick,last,last+Vector3.UP*.40,.025,iron)
		for x:float in [-.58,.58] if mode==3 else [1.55]:
			box(r,feature,pick,Vector3(.32,.16,.18),Vector3(x,2.13,1.56),Color("987752"))
			for i in range(5):
				r._crown(feature,Vector3(x+sin(i*2.4)*.12,2.24+float(i%2)*.04,1.56+cos(i*2.4)*.06),Vector3(.08,.05,.07),Color("9e605c") if i%2 else Color("728a58"))
		stairs(r,job,p)
		var detail:=preload("res://scripts/visual/city_creation_balcony_detail.gd").new();job.root.add_child(detail)
		job.root.set_meta("balcony_center",node.position+Vector3(0,2.,1.4))
		feature.set_meta("open_rail_segments",count)
	for x:float in [-.55,.55]:
		var corbel:=PackedVector2Array([Vector2(.88,1.75),Vector2(1.42 if mode>=3 else 1.2,1.75),Vector2(.88,1.20)])
		var faces:Array=[]
		var source:=Shapes._extrude(corbel,.12)
		for i in range(0,source.size(),3):
			for j:int in [0,2,1]:var at:Vector3=source[i+j];faces.append(Vector3(x+at.z,at.y,at.x))
		var mesh:MeshInstance3D=r._triangles(feature,faces,job.palette[2]);Wall.apply(mesh,Wall.Kind.CANTILEVER)
	job.root.set_meta("organic_facade",{"mode":mode,"cell_id":str(cell.id),"lower_id":str(p.lower.id),"side":p.side,"outline":poly,"stair_steps":12 if mode>=3 else 0})
static func oriel(r,node:Node3D,pick:StaticBody3D,p:Dictionary,palette:Array)->void:
	var poly:=Plan.outline(p)
	for i in range(1,poly.size()):
		var a:=Vector3(poly[i].x,0,poly[i].y);var b:=Vector3(poly[(i+1)%poly.size()].x,0,poly[(i+1)%poly.size()].y);var wall:=Node3D.new();wall.position=(a+b)*.5;wall.rotation.y=atan2(-(b-a).z,(b-a).x);node.add_child(wall)
		var collider:=StaticBody3D.new();collider.set_meta("house_id",pick.get_meta("house_id"));collider.set_meta("cell_id",pick.get_meta("cell_id"));collider.set_meta("cell",pick.get_meta("cell"));wall.add_child(collider)
		var width:=a.distance_to(b)
		box(r,wall,collider,Vector3(width,.30,.08),Vector3(0,2.,0),palette[0],Wall.Kind.PLASTER)
		box(r,wall,collider,Vector3(width,.13,.10),Vector3(0,3.03,0),palette[2])
		for x:float in [-width*.5,width*.5,0.]:box(r,wall,collider,Vector3(.035,.85,.10),Vector3(x,2.57,0),palette[2])
		box(r,wall,collider,Vector3(width,.77,.022),Vector3(0,2.57,-.025),Color("829e9d"))
	slab(r,node,pick,poly,3.12,.12,palette[1])
static func stairs(r,job,p:Dictionary)->void:
	var parent:Node3D=job.root.get_node(str(p.lower.id));var node:=Node3D.new();node.name="BalconyInternalStair";node.rotation.y=float(p.angle);parent.add_child(node);var pick:=body(node,job.house,p.lower)
	for i in range(6):
		var h:=float(i+1)*.85/6.
		box(r,node,pick,Vector3(.44,h,.16),Vector3(-.46,.15+h*.5,.40-float(i)*.16),Color("c7b995"))
		box(r,node,pick,Vector3(.44,h,.16),Vector3(.46,1.+h*.5,-.40+float(i)*.16),Color("c7b995"))
	box(r,node,pick,Vector3(1.36,.10,.28),Vector3(0,.95,-.60),Color("c7b995"))
