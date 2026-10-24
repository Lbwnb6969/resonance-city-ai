extends RefCounted
## Three shared morphs animate separate limbs without splitting the body draw.
static func mesh(source:ArrayMesh)->ArrayMesh:
	var arrays:Array=source.surface_get_arrays(0);var shapes:Array=[];var result:=ArrayMesh.new()
	for mode:int in [0,1,2]:
		result.add_blend_shape(["StepLeft","StepRight","Inspect"][mode])
		var shape:Array=[];shape.resize(Mesh.ARRAY_MAX)
		var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX].duplicate();var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL].duplicate()
		var tags:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV2]
		for i in range(points.size()):
			var tag:=roundi(tags[i].x);var pivot:=Vector3.ZERO;var angle:=0.
			var sign_side:float=-1. if tag in [1,3] else 1.
			if tag in [1,2]:
				pivot=Vector3(sign_side*.045,.075,0);angle=(.42 if mode==0 else -.42)*sign_side if mode<2 else .03*sign_side
			elif tag in [3,4]:
				pivot=Vector3(sign_side*.11,.36,0);angle=(-.26 if mode==0 else .26)*sign_side if mode<2 else -.85 if tag==4 else -.12
			elif tag==5 and mode==2:pivot=Vector3(0,.38,0);angle=.13
			var turn:=Basis(Vector3.RIGHT,angle);points[i]=pivot+turn*(points[i]-pivot);normals[i]=turn*normals[i]
		shape[Mesh.ARRAY_VERTEX]=points;shape[Mesh.ARRAY_NORMAL]=normals;shapes.append(shape)
	result.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays,shapes);return result
static func _near(life,root:Node3D)->bool:
	return root.visible and root.get_child(0).visible and (life.view_camera==null or (life.view_camera.global_position.distance_squared_to(root.global_position)<1600. and life.view_camera.is_position_in_frustum(root.global_position+Vector3.UP*.3)))
static func pose(root:Node3D,time:float,moving:bool,seated:bool=false,working:bool=false,greeting:bool=false,cargo:Node3D=null)->void:
	var body:Node3D=root.get_child(0);var skin:MeshInstance3D=body.get_child(0)
	var phase:float=time*8.7+float(root.get_meta("citizen_index",0))*.73
	var stride:float=sin(phase) if moving else 0.;var inspect:float=(.65+.2*sin(time*1.7)) if seated or working else .35 if root.get_meta("citizen_prop","") in ["cup","lantern"] else 0.
	skin.set_blend_shape_value(0,maxf(0.,stride)*(1.-inspect*.5));skin.set_blend_shape_value(1,maxf(0.,-stride)*(1.-inspect*.5));skin.set_blend_shape_value(2,inspect)
	if not greeting:
		body.position.y=.28+sin(time*1.7)*.004 if seated else absf(stride)*.023
		body.rotation=Vector3(-.055 if moving else .025*sin(time*1.3) if working else 0.,0.,sin(phase)*.035 if moving else 0.)
	var prop:MeshInstance3D=body.get_node("HandProp")
	if prop.visible:
		prop.position=Vector3(.15,.27+inspect*.065,.10+inspect*.025);prop.rotation=Vector3(sin(phase-.45)*.10 if moving else -.12*inspect,0.,-stride*.075 if moving else sin(time*1.7)*.04)
	if cargo!=null and cargo.visible:
		cargo.position=Vector3(.12,.32+absf(stride)*.014,.10);cargo.rotation=Vector3(sin(phase-.45)*.075,0.,-stride*.05)
static func _walking(root:Node3D,time:float)->bool:
	var prior:Vector3=root.get_meta("gait_last_point",root.position)
	if prior.distance_squared_to(root.position)>.000001:root.set_meta("gait_walk_until",time+.16)
	root.set_meta("gait_last_point",root.position)
	return time<float(root.get_meta("gait_walk_until",0.))
static func update(life)->void:
	for row:Dictionary in life.residents:
		if not _near(life,row.node):continue
		pose(row.node,life.time,_walking(row.node,life.time),row.get("cafe_visit",{}).get("phase","")=="seated",false,life.greetings.active.has(str(row.home_id)))
	for row:Dictionary in life.bakery.workers:
		if _near(life,row.node):pose(row.node,life.time,_walking(row.node,life.time),false,row.phase=="baking")
	for row:Dictionary in life.workshop.workers:
		if _near(life,row.node):pose(row.node,life.time,_walking(row.node,life.time),false,row.phase in ["crafting","installing"],false,row.carry)
