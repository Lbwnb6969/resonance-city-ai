extends RefCounted
const A=preload("res://scripts/visual/city_creation_architecture.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Villa=preload("res://scripts/visual/city_creation_ancient_villa.gd")
static func temple(house:Dictionary)->Dictionary:
	if house.get("architecture","") in ["rotunda","townhouse"] or preload("res://scripts/world/city_creation_ancient_extension_plan.gd").selected(house) or house.cells.any(func(c):return int(c.level)!=0 or c.kind!="room"):return {}
	var low:=Vector2i(house.cells[0].x,house.cells[0].z);var high:=low
	for c:Dictionary in house.cells:low=Vector2i(mini(low.x,c.x),mini(low.y,c.z));high=Vector2i(maxi(high.x,c.x),maxi(high.y,c.z))
	if house.cells.size()!=(high.x-low.x+1)*(high.y-low.y+1):return {}
	return {"center":Vector2(house.origin[0],house.origin[1])+Vector2(low+high)*.9,"width":(high.x-low.x+1)*1.8,"depth":(high.y-low.y+1)*1.8}
static func stone(color:Color)->Material:return Wall.source(color,null,"component",Wall.Kind.STONE)
static func mesh(r,parent:Node3D,faces:Array,color:Color,name:String,kind:int=Wall.Kind.STONE)->MeshInstance3D:
	var m:MeshInstance3D=preload("res://scripts/visual/city_creation_ancient_roof_finish.gd").tiles(r,parent,faces,color) if kind==Wall.Kind.TERRACOTTA else Wall.apply(r._triangles(parent,faces,color),kind);m.name=name;return m
static func pick(parent:Node3D,house:Dictionary,cell:Dictionary)->void:
	var body:=StaticBody3D.new();parent.add_child(body);body.set_meta("house_id",house.id);body.set_meta("cell_id",cell.id);body.set_meta("cell",cell)
	for m:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(m.mesh.get_faces())
		var collider:=CollisionShape3D.new();collider.shape=shape;collider.transform=parent.global_transform.affine_inverse()*m.global_transform;body.add_child(collider)
static func roof(r,parent:Node3D,house:Dictionary,palette:Array,ancient)->bool:
	var plan:=temple(house)
	if plan.is_empty():return false
	# Full building-width pediment, roof and colonnade share a single order.
	var node:=Node3D.new();node.name="GreekTempleMassing";parent.add_child(node);node.position=Vector3(plan.center.x,float(house.get("base_y",0.)),plan.center.y)
	var x:float=float(plan.width)*.5+.13;var front:float=float(plan.depth)*.5+.47;var back:float=-float(plan.depth)*.5-.12
	var eave:=1.80;var ridge:float=eave+minf(.68,x*.38);var color:Color=palette[0].lerp(Color("e6d8b8"),.48);var mat:=stone(color)
	var a:=Vector3(-x,eave,back);var b:=Vector3(x,eave,back);var c:=Vector3(-x,eave,front);var d:=Vector3(x,eave,front);var top0:=Vector3(0,ridge,back);var top1:=Vector3(0,ridge,front)
	mesh(r,node,[a,c,top1,a,top1,top0,top0,top1,d,top0,d,b],palette[1],"GreekContinuousTileRoof",Wall.Kind.TERRACOTTA)
	for z:float in [back,front]:
		var ped:=Node3D.new();node.add_child(ped);ped.position.z=z
		mesh(r,ped,A._extrude(PackedVector2Array([Vector2(-x,eave),Vector2(x,eave),Vector2(0,ridge)]),.13),color,"GreekFullWidthPediment")
		r._box(node,Vector3(x*2+.10,.12,.22),Vector3(0,eave-.055,z),mat)
		for side:float in [-1.,1.]:
			var beam:MeshInstance3D=r._box(node,Vector3(Vector2(x,ridge-eave).length()+.08,.065,.20),Vector3(side*x*.5,(ridge+eave)*.5,z+.015),mat)
			beam.rotation.z=-side*atan2(ridge-eave,x);beam.name="GreekRakingCornice"
	var caps:Material=Wall.source(palette[1].lightened(.09),null,"component",Wall.Kind.TERRACOTTA)
	for i in range(1,int(x*2/.22)):
		var xx:float=-x+i*.22;var y:float=eave+(ridge-eave)*(1.-absf(xx)/x)
		r._box(node,Vector3(.037,.026,front-back),Vector3(xx,y+.015,(back+front)*.5),caps).name="GreekTerracottaCoverTile"
	var columns:=4 if plan.width>2. else 2
	for i in range(columns):
		var xx:float=lerpf(-x+.23,x-.23,float(i)/(columns-1))
		if columns==4 and i in [1,2]:xx=-.32 if i==1 else .32
		ancient.column(r,node,Vector3(xx,.10,front-.08),1.61,.115,mat)
	r._box(node,Vector3(x*2-.03,.14,.52),Vector3(0,1.69,front-.12),mat).name="GreekSharedEntablature"
	for i in range(int(x*2/.32)):
		for k in range(3):r._box(node,Vector3(.02,.10,.025),Vector3(-x+.13+i*.32+k*.033,1.71,front+.151),mat)
	preload("res://scripts/visual/city_creation_organic_corners.gd").mass_roof(r,node,house)
	pick(node,house,house.cells[0]);parent.set_meta("ancient_roof_patches",1);parent.set_meta("ancient_temple",plan);return true
static func rotunda(r,parent:Node3D,house:Dictionary,palette:Array,ancient)->bool:
	if house.get("architecture","")!="rotunda" or house.cells.size()!=1:return false
	# Replace the derived square shell, never the saved room or its identity.
	for child:Node in parent.get_children():child.free()
	var cell:Dictionary=house.cells[0];var node:=Node3D.new();parent.add_child(node);node.name="RomanCircularCella";node.position=Vector3(house.origin[0]+cell.x*1.8,float(house.get("base_y",0.)),house.origin[1]+cell.z*1.8)
	var color:Color=palette[0];var mat:=stone(color);var radius:=.87;var faces:Array[Vector3]=[]
	for i in range(48):
		var a:=TAU*i/48.;var b:=TAU*(i+1)/48.
		if i in range(10,14):continue
		var p:=Vector3(cos(a)*radius,.14,sin(a)*radius);var q:=Vector3(cos(b)*radius,.14,sin(b)*radius)
		faces.append_array([p,q+Vector3.UP*1.52,q,p,p+Vector3.UP*1.52,q+Vector3.UP*1.52])
	mesh(r,node,faces,color,"RomanContinuousCircularWall")
	r._cylinder(node,.95,.95,.17,Vector3(0,.085,0),mat,48).name="RomanCircularStylobate"
	var cornice:Array[Vector3]=[]
	for i in range(48):
		var a:=TAU*i/48.;var b:=TAU*(i+1)/48.
		var p:=Vector3(cos(a)*.94,1.74,sin(a)*.94);var q:=Vector3(cos(b)*.94,1.74,sin(b)*.94)
		var u:=Vector3(cos(a)*.78,1.74,sin(a)*.78);var v:=Vector3(cos(b)*.78,1.74,sin(b)*.78)
		cornice.append_array([p,v,q,p,u,v,p,q,p-Vector3.UP*.12,p-Vector3.UP*.12,q,q-Vector3.UP*.12])
	mesh(r,node,cornice,color,"RomanOpenRingCornice")
	var dome:Array[Vector3]=[]
	for j in range(12):
		for i in range(48):
			var q:Array[Vector3]=[]
			for ij:Vector2i in [Vector2i(i,j),Vector2i(i+1,j),Vector2i(i+1,j+1),Vector2i(i,j+1)]:
				var a:=TAU*ij.x/48.;var t:=float(ij.y)/12.*1.38;q.append(Vector3(cos(a)*.94*cos(t),1.74+.94*sin(t),sin(a)*.94*cos(t)))
			dome.append_array([q[0],q[2],q[1],q[0],q[3],q[2]])
	mesh(r,node,dome,color,"RomanOpenOculusDome")
	var bronze:Material=stone(palette[2].darkened(.42))
	r._box(node,Vector3(.46,1.18,.08),Vector3(0,.73,.77),bronze).name="RomanBronzeDoor"
	for x:float in [-.65,.65]:ancient.column(r,node,Vector3(x,.1,1.17),1.45,.11,mat)
	var front:=Node3D.new();node.add_child(front);front.position.z=1.17
	mesh(r,front,A._extrude(PackedVector2Array([Vector2(-.87,1.67),Vector2(.87,1.67),Vector2(0,2.03)]),.52),color,"RomanTemplePorchPediment")
	r._box(node,Vector3(1.77,.12,.62),Vector3(0,1.59,1.13),mat)
	for i in range(3):r._box(node,Vector3(1.5,.06,.55),Vector3(0,.03+i*.05,1.38-i*.16),mat)
	pick(node,house,cell);parent.set_meta("ancient_rotunda_cella",true);return true
