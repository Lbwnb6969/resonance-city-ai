extends RefCounted
## A projecting Doric porch leaves authored upper rooms and terraces open.
const A=preload("res://scripts/visual/city_creation_architecture.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func plan(house:Dictionary)->Dictionary:
	if house.get("architecture","") in ["rotunda","townhouse"] or preload("res://scripts/world/city_creation_ancient_extension_plan.gd").selected(house):return {}
	var ground:Array=house.cells.filter(func(c):return int(c.level)==0 and c.kind=="room")
	if ground.is_empty():return {}
	var low:=Vector2i(ground[0].x,ground[0].z);var high:=low;var upper:=0;var terrace:=false
	for c:Dictionary in house.cells:
		upper+=int(int(c.level)>0 and c.kind=="room");terrace=terrace or c.kind=="terrace"
	for c:Dictionary in ground:low=Vector2i(mini(low.x,c.x),mini(low.y,c.z));high=Vector2i(maxi(high.x,c.x),maxi(high.y,c.z))
	if ground.size()!=(high.x-low.x+1)*(high.y-low.y+1):return {}
	if not terrace and (upper==0 or upper>=ground.size()):return {}
	return {"center":Vector2(house.origin[0],house.origin[1])+Vector2(low+high)*.9,"width":(high.x-low.x+1)*1.8,"depth":(high.y-low.y+1)*1.8,"cell":ground[0]}
static func build(r,parent:Node3D,house:Dictionary,palette:Array,ancient)->void:
	var p:=plan(house)
	if p.is_empty():return
	var node:=Node3D.new();node.name="GreekRomanTerraceVilla";parent.add_child(node)
	node.position=Vector3(p.center.x,float(house.get("base_y",0.)),p.center.y)
	var cream:Material=Wall.source(palette[0].lerp(Color("e6d8b8"),.48),null,"component",Wall.Kind.STONE)
	var tile:Material=Wall.source(palette[1],null,"component",Wall.Kind.TERRACOTTA)
	var half:float=p.width*.5+.11;var back:float=p.depth*.5+.035;var front:=back+.69
	var columns:=4 if p.width>2. else 2
	for i in range(columns):
		var x:=lerpf(-half+.22,half-.22,float(i)/(columns-1))
		if columns==4 and i in [1,2]:x=-.54 if i==1 else .54
		ancient.column(r,node,Vector3(x,.10,front-.12),1.45,.105,cream)
	r._box(node,Vector3(half*2,.13,.72),Vector3(0,1.59,(back+front)*.5),cream).name="VillaContinuousEntablature"
	var eave:=1.76;var ridge:=eave+minf(.50,half*.28)
	var faces:Array[Vector3]=[Vector3(-half,eave,back),Vector3(-half,eave,front),Vector3(0,ridge,front),Vector3(-half,eave,back),Vector3(0,ridge,front),Vector3(0,ridge,back),Vector3(0,ridge,back),Vector3(0,ridge,front),Vector3(half,eave,front),Vector3(0,ridge,back),Vector3(half,eave,front),Vector3(half,eave,back)]
	var roof:MeshInstance3D=preload("res://scripts/visual/city_creation_ancient_roof_finish.gd").tiles(r,node,faces,palette[1]);roof.name="VillaProjectingTerracottaRoof"
	var ped:=Node3D.new();node.add_child(ped);ped.position.z=front
	var tympanum:MeshInstance3D=r._triangles(ped,A._extrude(PackedVector2Array([Vector2(-half,eave),Vector2(half,eave),Vector2(0,ridge)]),.10),cream.albedo_color);tympanum.material_override=cream;tympanum.name="VillaDoricFullPediment"
	for side:float in [-1.,1.]:
		var cornice:MeshInstance3D=r._box(node,Vector3(Vector2(half,ridge-eave).length()+.04,.065,.16),Vector3(side*half*.5,(ridge+eave)*.5,front+.025),cream);cornice.rotation.z=-side*atan2(ridge-eave,half)
	for i in range(int(half*2/.32)):
		for k in range(3):r._box(node,Vector3(.018,.09,.025),Vector3(-half+.12+i*.32+k*.033,1.61,front+.02),cream)
	var ridge_cap:MeshInstance3D=r._cylinder(node,.045,.045,front-back+.06,Vector3(0,ridge+.018,(back+front)*.5),tile,10);ridge_cap.rotation.x=PI*.5
	var body:=StaticBody3D.new();node.add_child(body);body.set_meta("house_id",house.id);body.set_meta("cell_id",p.cell.id);body.set_meta("cell",p.cell)
	for m:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(m.mesh.get_faces())
		var collision:=CollisionShape3D.new();collision.shape=shape;collision.transform=node.global_transform.affine_inverse()*m.global_transform;body.add_child(collision)
	parent.set_meta("ancient_villa",p)
