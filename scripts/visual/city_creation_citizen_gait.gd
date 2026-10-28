extends RefCounted
## Five shared morphs animate separate limbs without splitting the body draw.
static func mesh(source:ArrayMesh,role:String="resident")->ArrayMesh:
	var arrays:Array=source.surface_get_arrays(0);var shapes:Array=[];var result:=ArrayMesh.new()
	result.blend_shape_mode=Mesh.BLEND_SHAPE_MODE_NORMALIZED
	for mode:int in [0,1,2,3,4]:
		result.add_blend_shape(["StepLeft","StepRight","Inspect","Seated","Sip"][mode])
		var shape:Array=[];shape.resize(Mesh.ARRAY_MAX)
		var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX].duplicate();var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL].duplicate()
		var tags:PackedVector2Array=arrays[Mesh.ARRAY_TEX_UV2]
		for i in range(points.size()):
			var tag:=roundi(tags[i].x);var pivot:=Vector3.ZERO;var angle:=0.
			var sign_side:float=-1. if tag in [1,3,7] else 1.
			if tag in [1,2]:
				pivot=Vector3(sign_side*.045,.075,0);angle=(.56 if mode==0 else -.56)*sign_side if mode<2 else .03*sign_side
			elif tag in [3,4,6,7]:
				pivot=Vector3(sign_side*.11,.36,0);angle=(-.26 if mode==0 else .26)*sign_side if mode<2 else -.85 if tag in [4,6] else -.12
				if mode==2 and role=="bakery":angle=-1.12
				elif mode==2 and role in ["workshop","atelier","clockmaker"]:angle=-1.03 if tag in [4,6] else -.52
			if tag in [4,6] and mode>=3:angle=-1.45 if mode==3 else -1.50
			elif tag==5 and mode>=2:pivot=Vector3(0,.38,0);angle=.13
			if tag==8:
				var hand_angle:float=[-.26,.26,-.85,-1.45,-1.50][mode]
				var hand_center:=Vector3(.11,.36,0)+Basis(Vector3.RIGHT,hand_angle)*Vector3(0,-.19,0)
				points[i]=hand_center+points[i]-Vector3(.11,.215 if mode>=3 else .17,0)
			elif mode>=3 and tag in [1,2]:
				var at:Vector3=points[i]
				# Upper half bends over the seat edge; lower half hangs below the knee.
				if at.y>=0.:
					points[i]=Vector3(at.x,.075+at.z,(.075-at.y)*2.1);normals[i]=Basis(Vector3.RIGHT,-PI*.5)*normals[i]
				else:points[i]=at+Vector3(0,.075,.16)
			else:
				var turn:=Basis(Vector3.RIGHT,angle);points[i]=pivot+turn*(points[i]-pivot);normals[i]=turn*normals[i]
			if mode<2 and tag==0:points[i].y+=.018*(1.-smoothstep(.10,.20,points[i].y))*smoothstep(-.06,.08,points[i].z)
			if mode>=3 and tag in [4,6,8]:
				var grip:=clampf((.37-arrays[Mesh.ARRAY_VERTEX][i].y)/.20,0.,1.) if tag==4 else 1.
				points[i]+=(Vector3(-.055,0,-.05)+(Vector3(0,.045,-.025) if mode==4 else Vector3.ZERO))*grip
			if mode>=3:points[i].y-=.08
		shape[Mesh.ARRAY_VERTEX]=points;shape[Mesh.ARRAY_NORMAL]=normals;shapes.append(shape)
	var palms:=PackedVector3Array()
	for vertices:PackedVector3Array in [arrays[Mesh.ARRAY_VERTEX]]+shapes.map(func(shape):return shape[Mesh.ARRAY_VERTEX]):
		var anchor:=Vector3.ZERO;var count:=0
		for i in range(vertices.size()):
			if roundi(arrays[Mesh.ARRAY_TEX_UV2][i].x)==6:anchor+=vertices[i];count+=1
		palms.append(anchor/float(count))
	result.set_meta("right_palms",palms);result.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays,shapes);return result
static func _near(life,root:Node3D)->bool:
	if not root.visible or not root.get_child(0).visible:return false
	var camera:Camera3D=life.view_camera
	if camera==null:return true
	var near:bool=camera.size<=30. if camera.projection==Camera3D.PROJECTION_ORTHOGONAL else camera.global_position.distance_squared_to(root.global_position)<1600.
	return near and camera.is_position_in_frustum(root.global_position+Vector3.UP*.3)
static func pose(root:Node3D,time:float,moving:bool,seated:bool=false,working:bool=false,greeting:bool=false,cargo:Node3D=null)->void:
	var body:Node3D=root.get_child(0);var skin:MeshInstance3D=body.get_child(0)
	var phase:float=time*8.7+float(root.get_meta("citizen_index",0))*.73
	var stride:float=sin(phase) if moving else 0.;var inspect:float=(.65+.2*sin(time*1.7)) if seated or working else .35 if root.get_meta("citizen_prop","") in ["cup","lantern"] else 0.
	if cargo!=null and cargo.visible:inspect=maxf(inspect,.60)
	if root.get_meta("balcony_listening",false):inspect=.62
	var sip:float=.5+.5*sin(time*1.1)
	if working:inspect=.46+.28*(.5+.5*sin(time*(3.8 if root.get_meta("citizen_role","")=="bakery" else 2.3)+phase*.15))
	if seated:sip=smoothstep(.25,.85,sin(time*.82+float(root.get_meta("citizen_index",0))*2.1));inspect=.45
	root.set_meta("visible_activity","listening" if (root.get_meta("solo_listening",false) or root.get_meta("balcony_listening",false)) and not moving else "tea_conversation" if seated else "kneading" if working and root.get_meta("citizen_role","")=="bakery" else "crafting" if working else "walking" if moving else "idle")
	var action:="cup" if seated else "step" if moving else "bread" if working and root.get_meta("citizen_role","")=="bakery" else "wood" if working and root.get_meta("citizen_role","")=="workshop" else ""
	var contact:=time*.82+float(root.get_meta("citizen_index",0))*2.1 if seated else phase if moving else time*(3.8 if action=="bread" else 2.3)+phase*.15
	root.set_meta("life_foley",{"kind":action,"time":time,"tick":floori((contact-(PI-.25 if seated else PI*.5))/(TAU if seated or not moving else PI))})
	if root.get_meta("bench_seated",false):root.set_meta("visible_activity","bench_rest");root.set_meta("life_foley",{"kind":"","time":time,"tick":0});sip=0.
	skin.set_blend_shape_value(0,maxf(0.,stride)*(1.-inspect) if not seated else 0.);skin.set_blend_shape_value(1,maxf(0.,-stride)*(1.-inspect) if not seated else 0.);skin.set_blend_shape_value(2,inspect if not seated else 0.);skin.set_blend_shape_value(3,1.-sip if seated else 0.);skin.set_blend_shape_value(4,sip if seated else 0.)
	if not greeting:
		body.position.y=.28+sin(time*1.7)*.004 if seated else absf(stride)*.023
		body.rotation=Vector3(-.055 if moving else .025*sin(time*1.3) if working else 0.,0.,sin(phase)*.035 if moving else 0.)
	if root.get_meta("balcony_listening",false) and not moving:body.rotation.x=-.10
	var prop:MeshInstance3D=body.get_node("HandProp")
	if prop.visible:
		prop.position=Vector3(.15,.27+inspect*.065-(.08 if seated else 0.),.10+inspect*.025);prop.rotation=Vector3(sin(phase-.45)*.10 if moving else -.12*inspect,0.,-stride*.075 if moving else sin(time*1.7)*.04)
		var palms:PackedVector3Array=skin.mesh.get_meta("right_palms");var anchor:=Vector3.ZERO;var weight:=0.
		for i in range(5):
			var blend:float=skin.get_blend_shape_value(i);anchor+=palms[i+1]*blend;weight+=blend
		anchor+=palms[0]*(1.-weight)
		var grip:=Vector3(0,.12,0) if root.get_meta("citizen_prop","")=="lantern" else Vector3(0,-.035,-.015)
		prop.position=anchor-prop.basis*grip
	if cargo!=null and cargo.visible:
		cargo.rotation=Vector3(sin(phase-.45)*.075,0.,-stride*.05)
		var palms:PackedVector3Array=skin.mesh.get_meta("right_palms");var anchor:=palms[0];var weight:=0.
		for i in range(5):weight+=skin.get_blend_shape_value(i)
		anchor*=1.-weight
		for i in range(5):anchor+=palms[i+1]*skin.get_blend_shape_value(i)
		cargo.position=anchor-cargo.basis*Vector3(.025,-.035,-.085)
static func _walking(root:Node3D,time:float)->bool:
	var prior:Vector3=root.get_meta("gait_last_point",root.position)
	if prior.distance_squared_to(root.position)>.000001:root.set_meta("gait_walk_until",time+.16)
	root.set_meta("gait_last_point",root.position)
	return time<float(root.get_meta("gait_walk_until",0.))
static func update(life)->void:
	for row:Dictionary in life.residents:
		if not _near(life,row.node):continue
		pose(row.node,life.time,_walking(row.node,life.time),row.get("cafe_visit",{}).get("phase","")=="seated" or row.get("bench_visit",{}).get("phase","")=="seated",false,life.greetings.active.has(str(row.home_id)))
	for row:Dictionary in life.bakery.workers:
		if _near(life,row.node):pose(row.node,life.time,_walking(row.node,life.time),false,row.phase=="baking")
	for row:Dictionary in life.workshop.workers:
		if _near(life,row.node):pose(row.node,life.time,_walking(row.node,life.time),false,row.phase in ["crafting","installing"],false,row.carry)
