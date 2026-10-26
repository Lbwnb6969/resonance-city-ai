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
		check(mesh.get_blend_shape_count()==5 and mesh.get_surface_count()==1 and mesh.blend_shape_mode==Mesh.BLEND_SHAPE_MODE_NORMALIZED,"shared body has five morphs and one draw "+role)
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
			Visual.hand(actor,kind,1.);Gait.pose(actor,1.,true);var old:Transform3D=actor.get_child(0).get_node("HandProp").transform;var pose_before:=Vector2(body.get_blend_shape_value(0),body.get_blend_shape_value(1))
			Gait.pose(actor,1.15,true);check((old!=actor.get_child(0).get_node("HandProp").transform or (kind=="cup" and Vector2(body.get_blend_shape_value(0),body.get_blend_shape_value(1))!=pose_before)) and actor.transform==before,"six held props swing without changing real route "+role+kind)
		var cup_arrays:Array=body.mesh.surface_get_arrays(0);var cup_shapes:Array=body.mesh.surface_get_blend_shape_arrays(0);var cream_moves:=false
		for i in range(cup_arrays[Mesh.ARRAY_VERTEX].size()):
			if roundi(cup_arrays[Mesh.ARRAY_TEX_UV2][i].x)==8 and cup_arrays[Mesh.ARRAY_COLOR][i].b>.7:
				cream_moves=cream_moves or Vector3(cup_shapes[3][Mesh.ARRAY_VERTEX][i]).distance_to(cup_shapes[4][Mesh.ARRAY_VERTEX][i])>.03
		check(cream_moves,"cream cup itself follows seated/sip hand morph "+role)
		Gait.pose(actor,2.,false,true);check(absf(actor.get_child(0).position.y-.28)<.005 and body.get_blend_shape_value(3)+body.get_blend_shape_value(4)>.99,"seated cup and inspect pose retain real seat offset "+role)
		var seated_shape:Array=shapes[3];var knees_forward:=false;var lower_hangs:=false
		for i in range(arrays[Mesh.ARRAY_VERTEX].size()):
			var at:Vector3=arrays[Mesh.ARRAY_VERTEX][i];var tag:int=roundi(arrays[Mesh.ARRAY_TEX_UV2][i].x)
			if tag not in [1,2]:continue
			var bent:Vector3=seated_shape[Mesh.ARRAY_VERTEX][i]
			knees_forward=knees_forward or (at.y>=0. and bent.z-at.z>.04)
			lower_hangs=lower_hangs or (at.y<-.06 and bent.y<.02 and bent.z-at.z>.06)
		check(knees_forward and lower_hangs,"seated thighs turn forward and lower legs hang below knees "+role)
		actor.free()
	var actor:=Visual.person(0);root.add_child(actor);var camera:=Camera3D.new();root.add_child(camera);camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=10.;camera.position=Vector3(0,20,40);camera.look_at(Vector3.ZERO)
	check(Gait._near({"view_camera":camera},actor),"orthographic close-up animates visible citizen despite camera rig retreat beyond40m")
	camera.size=45.;check(not Gait._near({"view_camera":camera},actor),"wide orthographic view skips microscopic pose updates")
	actor.free();camera.free()
	print("MEADOW_GAIT ",JSON.stringify({"checks":count,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)
