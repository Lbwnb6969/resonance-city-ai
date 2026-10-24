extends SceneTree
const Visual=preload("res://scripts/visual/city_creation_citizen_visual.gd")
const Gait=preload("res://scripts/visual/city_creation_citizen_gait.gd")
var count:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	count+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	for role:String in ["resident","bakery","workshop","atelier","clockmaker"]:
		var actor:=Visual.person(1);root.add_child(actor);Visual.identify(actor,role);actor.position=Vector3(4,.1,-3)
		var body:MeshInstance3D=actor.get_child(0).get_child(0);var mesh:ArrayMesh=body.mesh
		check(mesh.get_blend_shape_count()==3 and mesh.get_surface_count()==1,"shared body has three morphs and one draw "+role)
		var arrays:Array=mesh.surface_get_arrays(0);var shapes:Array=mesh.surface_get_blend_shape_arrays(0)
		var finite:=true;var left:=false;var right:=false;var head:=false
		for i in range(arrays[Mesh.ARRAY_VERTEX].size()):
			for shape:Array in shapes:finite=finite and Vector3(shape[Mesh.ARRAY_VERTEX][i]).is_finite() and Vector3(shape[Mesh.ARRAY_NORMAL][i]).is_finite()
			var tag:int=roundi(arrays[Mesh.ARRAY_TEX_UV2][i].x)
			if tag in [1,2]:
				var difference:Vector3=shapes[0][Mesh.ARRAY_VERTEX][i]-shapes[1][Mesh.ARRAY_VERTEX][i]
				if tag==1:left=left or absf(difference.z)>.01
				else:right=right or absf(difference.z)>.01
			if tag==5:head=head or Vector3(shapes[2][Mesh.ARRAY_VERTEX][i]).distance_to(arrays[Mesh.ARRAY_VERTEX][i])>.005
		check(finite and left and right and head,"finite independently moving legs and head inspection "+role)
		var before:Transform3D=actor.transform;var poses:Array=[]
		for time:float in [.05,.15,.25,.35]:
			Gait.pose(actor,time,true);poses.append([body.get_blend_shape_value(0),body.get_blend_shape_value(1),actor.get_child(0).transform])
		check(poses[0]!=poses[1] and poses[1]!=poses[2] and actor.transform==before,"stride changes visible rig without moving authoritative actor "+role)
		for kind:String in ["bread","workshop","atelier","clockmaker","lantern","cup"]:
			Visual.hand(actor,kind,1.);Gait.pose(actor,1.,true);var old:Transform3D=actor.get_child(0).get_node("HandProp").transform
			Gait.pose(actor,1.15,true);check(old!=actor.get_child(0).get_node("HandProp").transform and actor.transform==before,"six held props swing without changing real route "+role+kind)
		Gait.pose(actor,2.,false,true);check(absf(actor.get_child(0).position.y-.28)<.005 and body.get_blend_shape_value(2)>.4,"seated cup and inspect pose retain real seat offset "+role)
		actor.free()
	print("MEADOW_GAIT ",JSON.stringify({"checks":count,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)
