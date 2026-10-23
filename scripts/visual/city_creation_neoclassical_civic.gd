extends RefCounted
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
const Plan = preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd")
const Pick = preload("res://scripts/visual/city_creation_roof_pick.gd")
const Neo = preload("res://scripts/visual/city_creation_neoclassical.gd")

static func terrace(renderer, wall: Node3D, body: StaticBody3D, palette: Array) -> Dictionary:
	var stone := Wall.source(palette[0].lerp(Color("ded4b9"),.7),null,"component",Wall.Kind.STONE)
	var pieces: Array = []
	pieces.append(renderer._box(wall,Vector3(1.80,.10,.38),Vector3(0,.10,-.12),stone))
	for x: float in [-.78,-.52,-.26,0.,.26,.52,.78]:
		pieces.append(renderer._cylinder(wall,.022,.028,.37,Vector3(x,.38,.035),stone,8))
	pieces.append(renderer._box(wall,Vector3(1.8,.065,.10),Vector3(0,.59,.035),stone))
	for mesh: MeshInstance3D in pieces:
		var collision := CollisionShape3D.new(); var box := BoxShape3D.new(); box.size=mesh.mesh.get_aabb().size
		collision.shape=box; collision.transform=body.global_transform.affine_inverse()*mesh.global_transform; body.add_child(collision)
	wall.name="PeristyleUpperTerrace_"+str(wall.name)
	var report := {"kind":"peristyle_terrace","clear_width":.29,"retreat":.38,"outer_frame":wall.transform}
	wall.set_meta("peristyle_terrace",report); return report

static func drum(renderer, dome: Node3D, plan: Dictionary) -> void:
	if plan.get("civic","")!="rotunda": return
	var stone := Wall.source(Color("ddd0b3"),null,"component",Wall.Kind.STONE)
	var r := float(plan.radius)
	# Dome origin already includes the raised .60m drum/column stage.
	renderer._cylinder(dome,r*.97,r*.97,.15,Vector3(0,-.51,0),stone,16).name="RotundaStoneStylobate"
	for i in range(12):
		var angle := TAU*i/12.+PI/12.
		var at := Vector3(cos(angle)*r*.81,-.24,sin(angle)*r*.81)
		renderer._cylinder(dome,.045,.035,.44,at,stone,10).name="RotundaColumn"
		renderer._cylinder(dome,.065,.065,.05,at+Vector3(0,.245,0),stone,10)
	var body := StaticBody3D.new(); dome.add_child(body)
	var original: StaticBody3D = dome.get_child(0)
	for key in ["house_id","cell_id","cell"]: body.set_meta(key,original.get_meta(key))
	Pick.attach(body,AABB(Vector3(-r,-.60,-r),Vector3(r*2,.60,r*2)),"RotundaDrumPick")
	dome.set_meta("civic_archetype","rotunda")

static func build(renderer, root: Node3D, house: Dictionary) -> void:
	for face: Dictionary in root.get_meta("arcade_faces",[]):
		if face.source!="courtyard": continue
		var cell: Node = root.get_node_or_null(str(face.cell_id))
		if cell==null: continue
		var arch: Node = cell.get_node_or_null("Arcade_%d_%d"%[face.side.x,face.side.y])
		if arch!=null: arch.set_meta("civic_archetype","peristyle")
	var plan := Plan.guild(renderer.state,house)
	if plan.is_empty(): return
	var hall := Node3D.new(); hall.name="PedimentedGuildhall"; root.add_child(hall)
	hall.position=Vector3(plan.center.x,float(plan.y),plan.center.y); hall.rotation.y=float(plan.yaw)
	hall.set_meta("civic_archetype","guildhall"); hall.set_meta("plan",plan)
	var palette: Array = root.get_meta("palette_colors")
	var stone := Wall.source(palette[0].lerp(Color("dfcfb1"),.65),null,"component",Wall.Kind.STONE)
	var plaster := Wall.source(palette[0],null,"component",Wall.Kind.PLASTER)
	var tile := Wall.source(palette[1],null,"component",Wall.Kind.TERRACOTTA)
	var span := float(plan.span); var middle := minf(1.65,span*.55); var wing := (span-middle)*.5
	# Central clerestory rises above two genuinely lower side roofs.
	renderer._box(hall,Vector3(middle,.54,1.8),Vector3(0,.24,0),plaster).name="GuildhallRaisedNave"
	_roof(renderer,hall,middle+.22,2.08,.54,.94,0.,tile)
	for side: float in [-1.,1.]:
		_roof(renderer,hall,wing+.14,2.03,.02,.30,side*(middle+wing)*.5,tile)
		for z: float in [-.94,.94]: renderer._box(hall,Vector3(wing,.09,.20),Vector3(side*(middle+wing)*.5,.015,z),stone)
	# Tall shallow portico attaches to the existing central front doorway.
	var front := Node3D.new(); hall.add_child(front); front.position=Vector3(0,-1.70,1.0); front.scale.y=1.42
	Neo._portico(renderer,front,stone,stone.albedo_color)
	front.name="GuildhallHighPortico"
	var body := StaticBody3D.new(); hall.add_child(body)
	body.set_meta("house_id",str(house.id)); body.set_meta("cell_id",str(plan.cell.id)); body.set_meta("cell",plan.cell)
	Pick.from_children(body,hall,"GuildhallRoofPick")

static func _roof(renderer, root: Node3D, width: float, depth: float, eave: float, ridge: float, x: float, tile: Material) -> void:
	var a:=Vector3(x-width*.5,eave,-depth*.5); var b:=a+Vector3(width,0,0)
	var c:=Vector3(x+width*.5,eave,depth*.5); var d:=c-Vector3(width,0,0)
	var top0:=Vector3(x,ridge,-depth*.5); var top1:=Vector3(x,ridge,depth*.5)
	for vertices: Array in [[a,d,top1,a,top1,top0],[top0,top1,c,top0,c,b],[a,top0,b],[d,c,top1]]:
		var mesh: MeshInstance3D = renderer._triangles(root,vertices,Color("b76d51")); mesh.material_override=tile
