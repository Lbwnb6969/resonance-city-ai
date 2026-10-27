extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Hug=preload("res://scripts/world/city_creation_curve_hug.gd")
const Cut=preload("res://scripts/visual/city_creation_hinge_mesh.gd")
static func apply(renderer,root:Node3D,source:Dictionary,cells:Array,angle:float=INF)->void:
	var host:=source.duplicate(true);var fresh:=not host.has("id")
	if not host.has("id"):
		host=renderer.state._new_stroke_house(Vector2(source.origin[0],source.origin[1]));host.base_y=source.get("base_y",0.)
	if is_finite(angle):host.yaw=angle
	for cell:Dictionary in cells:
		if not host.cells.any(func(c):return int(c.x)==int(cell.x) and int(c.z)==int(cell.z) and int(c.level)==int(cell.level)):host.cells.append(cell)
	if fresh:preload("res://scripts/world/city_creation_build_brush.gd").apply(renderer.state,host)
	host=Hug.candidate(renderer.state,host)
	var bend:=Frame.Hinge.angle(host)
	if not is_zero_approx(bend):
		var plan:=Frame.Hinge.layout(host);plan.angle=bend
		for mesh:MeshInstance3D in root.find_children("*","MeshInstance3D",true,false):
			var transform:Transform3D=root.global_transform.affine_inverse()*mesh.global_transform
			mesh.mesh=Cut.build(mesh.mesh,transform,plan,false)
	root.set_meta("hinge_preview",{"angle":rad_to_deg(bend),"house":host});Frame.apply(root,host)
