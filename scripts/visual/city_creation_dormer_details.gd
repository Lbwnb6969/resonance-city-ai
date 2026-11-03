extends RefCounted
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
const Sites=preload("res://scripts/visual/city_creation_dormer_sites.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Arch=preload("res://scripts/visual/city_creation_architecture.gd")
static func build(r,parent:Node3D,house:Dictionary,palette:Array)->void:
	var key:=Choice.dormer(house)
	if not Choice.dormer_supported(r.state,house):return
	parent.set_meta("roof_detail",{"version":1,"id":key,"active":false})
	if key=="off":return
	var diagnostics:Dictionary={};var site:=Sites.plan(r.state,parent,house,diagnostics)
	if site.is_empty():parent.set_meta("roof_detail",{"id":key,"active":false,"dormant_reason":"roof_site_unavailable","rejected":diagnostics});return
	var node:=Node3D.new();node.name="DormerDetail_"+key;parent.add_child(node);node.position=Vector3(site.at.x,site.low-.015,site.at.y)
	var cream:=Wall.component(r,palette[0],Wall.Kind.STONE);var wood:Material=preload("res://scripts/visual/city_creation_detail_materials.gd").frame(r,house,palette);var tile:Material=preload("res://scripts/visual/city_creation_detail_materials.gd").roof(r,house,palette)
	var base:float=site.high-site.low+.015;var eave:=base+(.34 if key=="gable_light" else .16);var back:=eave if key=="gable_light" else base+.40
	for x:float in [-.275,.275]:
		var cheek:MeshInstance3D=r._roof_surface(node,Arch._extrude(PackedVector2Array([Vector2(-.31,0),Vector2(.31,0),Vector2(.31,eave),Vector2(-.31,back)]),.05),palette[0]);cheek.material_override=cream;cheek.rotation.y=-PI*.5;cheek.position.x=x
	r._box(node,Vector3(.55,back,.045),Vector3(0,back*.5,-.29),cream)
	if key=="gable_light":
		r._box(node,Vector3(.50,base+.045,.05),Vector3(0,(base+.045)*.5,.29),cream)
		for x:float in [-.25,.25]:r._box(node,Vector3(.045,.295,.055),Vector3(x,base+.19,.29),wood)
		r._box(node,Vector3(.50,.035,.065),Vector3(0,base+.325,.29),wood)
		pane(r,node,Vector3(.45,.23,.025),Vector3(0,base+.1775,.295))
		r._box(node,Vector3(.022,.23,.045),Vector3(0,base+.1775,.315),wood)
		var ridge:=eave+.22
		for z:float in [-.29,.29]:
			var infill:MeshInstance3D=r._roof_surface(node,Arch._extrude(PackedVector2Array([Vector2(-.30,eave),Vector2(.30,eave),Vector2(0,ridge)]),.035),palette[0]);infill.material_override=cream;infill.position.z=z;infill.name="DormerGableInfill"
		var roof:MeshInstance3D=r._roof_surface(node,[Vector3(-.35,eave,-.36),Vector3(-.35,eave,.36),Vector3(0,ridge,.36),Vector3(-.35,eave,-.36),Vector3(0,ridge,.36),Vector3(0,ridge,-.36),Vector3(0,ridge,-.36),Vector3(0,ridge,.36),Vector3(.35,eave,.36),Vector3(0,ridge,-.36),Vector3(.35,eave,.36),Vector3(.35,eave,-.36)],palette[1]);roof.material_override=tile;roof.name="DormerTilePitch"
	else:
		# The glazed lean-to is a closed framed roof above the original clay surface.
		r._box(node,Vector3(.55,eave,.045),Vector3(0,eave*.5,.29),cream)
		var slope:=atan2(back-eave,.62);var length:=Vector2(.62,back-eave).length()
		var frame:=Node3D.new();frame.name="DormerSlopeFrame";node.add_child(frame);frame.position=Vector3(0,(back+eave)*.5,0);frame.rotation.x=slope
		pane(r,frame,Vector3(.49,.025,length-.04),Vector3.ZERO)
		for x:float in [-.265,0.,.265]:r._box(frame,Vector3(.027,.045,length+.04),Vector3(x,0,0),wood)
		for z:float in [-length*.5,length*.5]:r._box(frame,Vector3(.56,.045,.028),Vector3(0,0,z),wood)
	var body:=StaticBody3D.new();body.name="DormerPick";node.add_child(body);body.set_meta("house_id",house.id);body.set_meta("cell_id",site.cell_id);body.set_meta("roof_detail",key)
	for cell:Dictionary in house.cells:
		if str(cell.id)==site.cell_id:body.set_meta("cell",cell.duplicate(true));break
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		mesh.visibility_range_end=64.
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(mesh.mesh.get_faces());var collider:=CollisionShape3D.new();collider.shape=shape;collider.transform=node.global_transform.affine_inverse()*mesh.global_transform;body.add_child(collider)
	node.set_meta("roof_detail",site.merged({"id":key,"seed":Choice.record(house,"dormer").seed}));parent.set_meta("roof_detail",{"version":1,"id":key,"active":true,"site":site})
static func pane(r,parent:Node3D,size:Vector3,at:Vector3)->void:
	var glass:=StandardMaterial3D.new();glass.albedo_color=Color("344e53");glass.roughness=.28;glass.set_meta("creation_fixed_color",true);glass.set_meta("creation_facade_glass",true)
	var node:MeshInstance3D=r._box(parent,size,at,glass);node.name="DormerGlass";node.set_meta("creation_live_visual",true)
