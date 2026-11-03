extends RefCounted
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
const Sites=preload("res://scripts/world/city_creation_porch_sites.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func fixed(r,color:Color)->Material:
	var key:="porch/fixed/"+color.to_html()
	if not r.materials.has(key):
		var material:Material=r._material(color).duplicate();material.set_meta("creation_fixed_color",true);r.materials[key]=material
	return r.materials[key]
static func timber(r,color:Color)->Material:
	var key:="porch/natural_wood/"+color.to_html()
	if not r.materials.has(key):
		var material:=Wall.source(color,null,"component",Wall.Kind.TIMBER);material.set_meta("creation_fixed_color",true);r.materials[key]=material
	return r.materials[key]
static func petal(r,parent:Node3D,at:Vector3,size:Vector3,color:Color)->MeshInstance3D:
	var faces:Array[Vector3]=[];var ring:=[Vector3.FORWARD,Vector3.RIGHT,Vector3.BACK,Vector3.LEFT]
	for pole:Vector3 in [Vector3.UP,Vector3.DOWN]:
		for i in range(4):
			var a:Vector3=ring[i];var b:Vector3=ring[(i+1)%4]
			if (a-pole).cross(b-pole).dot(pole+a+b)<0:var swap:=a;a=b;b=swap
			faces.append_array([at+pole*size,at+a*size,at+b*size])
	var mesh:MeshInstance3D=r._roof_surface(parent,faces,color);mesh.material_override=fixed(r,color);return mesh
static func build(r,parent:Node3D,house:Dictionary)->void:
	var key:=Choice.porch(house)
	if key.is_empty() or not Choice.porch_supported(r.state,house):return
	var entry:Dictionary=r._primary_entrance(house);var wall:Node3D
	for node:Node3D in parent.find_children("*","Node3D",true,false):
		var data:Dictionary=node.get_meta("entrance",{})
		if not data.is_empty() and not data.get("passage",false) and data.get("cell_id","")==entry.get("cell_id","") and data.get("side")==entry.get("side"):wall=node;break
	if wall==null:parent.set_meta("porch_detail",{"id":key,"active":false,"dormant_reason":"entry_wall_missing","sites":[]});return
	var inverse:=wall.global_transform.affine_inverse();var occupied:Array[Vector3]=[]
	for mesh:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		if not mesh.visible or str(mesh.name).begins_with("BakerySmoke") or mesh.material_override==r.contact_material:continue
		var transform:=inverse*mesh.global_transform
		if (transform*mesh.get_aabb()).position.y>.9:continue
		for p:Vector3 in mesh.mesh.get_faces():occupied.append(transform*p)
	var diagnostics:Dictionary={}
	var pose:=parent.global_transform.affine_inverse()*wall.global_transform;var sites:=Sites.plan(r.state,house,pose,occupied,diagnostics);var palette:Array=parent.get_meta("palette_colors");var seed_value:int=Choice.record(house,"porch").seed
	for row:Dictionary in sites:
		var node:=Node3D.new();node.name="PorchSite";parent.add_child(node);node.transform=row.pose;node.set_meta("porch_site",row)
		if key=="flower_pots":flowers(r,node,palette,seed_value)
		else:firewood(r,node,palette)
		merge(node)
		var body:=StaticBody3D.new();body.name="PorchPick";node.add_child(body);body.set_meta("house_id",house.id);body.set_meta("cell_id",entry.cell_id);body.set_meta("porch_detail",key)
		for cell:Dictionary in house.cells:
			if str(cell.id)==str(entry.cell_id):body.set_meta("cell",cell.duplicate(true));break
		var faces:=PackedVector3Array()
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):faces.append_array(mesh.mesh.get_faces())
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(faces);var collision:=CollisionShape3D.new();collision.shape=shape;body.add_child(collision)
	parent.set_meta("porch_detail",{"version":1,"id":key,"active":not sites.is_empty(),"sites":sites,"dormant_reason":"frontage_site_unavailable" if sites.is_empty() else "","rejected":diagnostics if sites.is_empty() else {},"seed":seed_value,"cell_id":entry.cell_id,"side":entry.side})
static func flowers(r,parent:Node3D,p:Array,seed_value:int)->void:
	var clay:=Wall.component(r,p[1].lightened(.10),Wall.Kind.TERRACOTTA)
	r._cylinder(parent,.105,.145,.25,Vector3(0,.125,0),clay,12).name="PorchClayPot"
	r._cylinder(parent,.15,.15,.035,Vector3(0,.25,0),clay,12)
	r._cylinder(parent,.128,.128,.008,Vector3(0,.271,0),fixed(r,Color("514339")),12)
	for i in range(5):
		var angle:=TAU*(i+posmod(seed_value,5)*.2)/5.;var offset:=Vector3(cos(angle)*.065,.32+(.03 if i%2==0 else 0.),sin(angle)*.065)
		petal(r,parent,offset,Vector3(.07,.085,.055),Color("73916c"))
		var color:=Color("edc888") if i%2==0 else Color("c9857f")
		for petal in range(4):
			var a:=TAU*petal/4.;petal(r,parent,offset+Vector3(cos(a)*.025,.10,sin(a)*.025),Vector3(.028,.018,.028),color)
static func firewood(r,parent:Node3D,p:Array)->void:
	var wood:=Wall.component(r,p[2],Wall.Kind.TIMBER);var bark:=timber(r,Color("77543c"));var cut:=timber(r,Color("c5a16c"))
	r._box(parent,Vector3(.34,.028,.30),Vector3(0,.024,0),wood).name="PorchWoodCradle"
	for z:float in [-.13,.13]:
		for x:float in [-.16,.16]:r._box(parent,Vector3(.025,.24,.025),Vector3(x,.14,z),wood)
	for row in range(3):
		for i in range(3-row):
			var at:=Vector3((i-(2-row)*.5)*.09,.09+row*.078,0)
			var log_mesh:MeshInstance3D=r._cylinder(parent,.044,.046,.28,at,bark,8);log_mesh.rotation.x=PI*.5;log_mesh.name="PorchSplitLog"
			for side:float in [-1.,1.]:
				var end:MeshInstance3D=r._cylinder(parent,.035,.035,.004,at+Vector3(0,0,side*.141),cut,8);end.rotation.x=PI*.5
static func merge(parent:Node3D)->void:
	var groups:Dictionary={}
	for mesh:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		var id:int=mesh.material_override.get_instance_id();var group:Dictionary=groups.get(id,{})
		if group.is_empty():
			var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES);group={"surface":surface,"material":mesh.material_override}
		group.surface.append_from(mesh.mesh,0,parent.global_transform.affine_inverse()*mesh.global_transform);groups[id]=group;mesh.free()
	for group:Dictionary in groups.values():
		var mesh:=MeshInstance3D.new();mesh.name="PorchDetailSurface";mesh.mesh=group.surface.commit();mesh.material_override=group.material;mesh.visibility_range_end=64.;parent.add_child(mesh)
