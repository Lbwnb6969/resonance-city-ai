extends RefCounted
const Hinge=preload("res://scripts/world/city_creation_house_hinge.gd")
const MeshCut=preload("res://scripts/visual/city_creation_hinge_mesh.gd")
const RoofUV=preload("res://scripts/visual/city_creation_hinge_roof_uv.gd")
static func extent(bounds:AABB,plan:Dictionary)->Vector2:
	var a:=Vector2(bounds.position.x,bounds.position.z)-Vector2(plan.pivot);var b:=Vector2(bounds.end.x,bounds.end.z)-Vector2(plan.pivot)
	return Vector2(minf(a.dot(plan.axis),b.dot(plan.axis)),maxf(a.dot(plan.axis),b.dot(plan.axis)))
static func transform_for(plan:Dictionary)->Transform3D:
	var basis:=Basis(Vector3.UP,float(plan.angle));var pivot:=Vector3(plan.pivot.x,0,plan.pivot.y)
	return Transform3D(basis,pivot-basis*pivot)
static func rigid(root:Node3D,node:Node3D,plan:Dictionary)->void:
	var design:Transform3D=root.global_transform.affine_inverse()*node.global_transform
	var parent:Transform3D=root.global_transform.affine_inverse()*node.get_parent().global_transform
	node.transform=parent.affine_inverse()*transform_for(plan)*design
static func owner_wing(job,node:Node)->bool:
	var parent:Node=node
	while parent!=job.root and parent!=null:
		if parent.has_meta("cell"):return Hinge.wing(job.house,parent.get_meta("cell"))
		for cell:Dictionary in job.house.cells:
			if str(parent.name)==str(cell.id):return Hinge.wing(job.house,cell)
		parent=parent.get_parent()
	return false
static func step(job)->bool:
	var angle:=Hinge.angle(job.house)
	if is_zero_approx(angle):return true
	if job.hinge.is_empty():
		var plan:=Hinge.layout(job.house);plan.angle=angle
		var nodes:Array=job.root.find_children("*","MeshInstance3D",true,false)
		nodes.append_array(job.root.find_children("*","CollisionShape3D",true,false));nodes.append_array(job.root.find_children("*","GPUParticles3D",true,false))
		job.hinge={"plan":plan,"nodes":nodes,"index":0,"meshes":0,"rigid":0,"collisions":0,"cpu_ms":0.,"peak_ms":0.}
	var data:Dictionary=job.hinge
	if int(data.index)<data.nodes.size():
		var began:=Time.get_ticks_usec();var node:Node3D=data.nodes[int(data.index)];var plan:Dictionary=data.plan
		var transform:Transform3D=job.root.global_transform.affine_inverse()*node.global_transform;var wing:=owner_wing(job,node)
		if node is MeshInstance3D:
			var span:=extent(transform*node.get_aabb(),plan);var roof_surfaces:=RoofUV.surfaces(node)
			if span.x>=-.000001 and (span.y>.000001 or wing):
				if not roof_surfaces.is_empty():node.mesh=RoofUV.rigid(node.mesh,transform,plan,roof_surfaces)
				rigid(job.root,node,plan);data.rigid+=1
			elif span.y>=-.000001:node.mesh=MeshCut.build(node.mesh,transform,plan,wing,roof_surfaces);data.meshes+=1
		elif node is CollisionShape3D:
			var span:=extent(transform*node.shape.get_debug_mesh().get_aabb(),plan)
			if span.x>=-.000001 and (span.y>.000001 or wing):rigid(job.root,node,plan)
			elif span.y>=-.000001:
				var faces:=PackedVector3Array()
				if node.shape is BoxShape3D:var box:=BoxMesh.new();box.size=node.shape.size;faces=box.get_faces()
				elif node.shape is ConcavePolygonShape3D:faces=node.shape.get_faces()
				elif node.shape is ConvexPolygonShape3D:faces=node.get_meta("organic_source_faces")
				if not faces.is_empty():
					var shape:=ConcavePolygonShape3D.new();shape.set_faces(MeshCut.faces(faces,transform,plan,wing));shape.backface_collision=true;node.shape=shape
			data.collisions+=1
		else:
			if (Vector2(transform.origin.x,transform.origin.z)-Vector2(plan.pivot)).dot(plan.axis)>0.:rigid(job.root,node,plan)
		data.index+=1;var ms:=float(Time.get_ticks_usec()-began)/1000.;data.cpu_ms+=ms;data.peak_ms=maxf(float(data.peak_ms),ms);return false
	job.root.set_meta("hinged_wing",{"angle_deg":rad_to_deg(angle),"axis":data.plan.axis,"pivot":data.plan.pivot,"meshes":data.meshes,"rigid_parts":data.rigid,"collision_shapes":data.collisions,"cpu_ms":data.cpu_ms,"unit_peak_ms":data.peak_ms})
	return true
static func rig(house:Dictionary,root:Node3D,mesh:MeshInstance3D)->void:
	var angle:=Hinge.angle(house)
	if is_zero_approx(angle):return
	var plan:=Hinge.layout(house);plan.angle=angle
	var transform:Transform3D=root.global_transform.affine_inverse()*mesh.global_transform
	mesh.mesh=MeshCut.build(mesh.mesh,transform,plan,false);mesh.custom_aabb=mesh.mesh.get_aabb().grow(.8)
