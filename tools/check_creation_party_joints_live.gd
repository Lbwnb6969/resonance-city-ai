extends "res://tools/check_creation_detail_eras_live.gd"
const Joints=preload("res://scripts/visual/city_creation_party_joints.gd")
const HingeActions=preload("res://scripts/world/city_creation_hinge_actions.gd")
func joints()->Array:return demo.town.house_roots.h1.get_meta("party_joints",{}).get("active",[])
func joint_windows()->void:
	var house:Node3D=demo.town.house_roots.h1;var seams:Array=house.find_children("JointPick","StaticBody3D",true,false);var rays:=0;var blocked:=0;var blockers:Array=[]
	for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
		if not mesh.material_override.has_meta("creation_facade_glass"):continue
		var faces:=mesh.mesh.get_faces()
		for i in range(0,faces.size(),3):
			var a:=mesh.to_global(faces[i]);var b:=mesh.to_global(faces[i+1]);var c:=mesh.to_global(faces[i+2]);var cross:=(b-a).cross(c-a)
			# Thin glass boxes also have narrow edge faces; probe broad glazing.
			if cross.length()<.06:continue
			var normal:=cross.normalized();var center:=(a+b+c)/3.;rays+=1
			for body:StaticBody3D in seams:
				for shape:CollisionShape3D in body.get_children():
					var inverse:=shape.global_transform.affine_inverse();var source:=inverse*(center+normal*.25);var end:=inverse*(center-normal*.25);var triangles:PackedVector3Array=shape.shape.get_faces()
					for j in range(0,triangles.size(),3):
						if Geometry3D.segment_intersects_triangle(source,end,triangles[j],triangles[j+1],triangles[j+2])!=null:
							blocked+=1
							if blockers.size()<4:blockers.append({"center":center,"normal":normal,"mesh":str(mesh.name),"seam":body.get_parent().get_meta("party_joint")})
	check(rays>0 and blocked==0,"actual final folded glass triangle rays remain clear of all added seam geometry")
	facts.get_or_add("joint_glass",[]).append({"rays":rays,"blocked":blocked,"blockers":blockers})
func geometry()->void:
	await physics_frame
	var house:Node3D=demo.town.house_roots.h1;var vertices:Dictionary={};var count:=0;var exact:=true
	for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
		for p:Vector3 in mesh.mesh.get_faces():vertices[Vector3i((mesh.to_global(p)*1000.).round())]=true
	for body:StaticBody3D in house.find_children("JointPick","StaticBody3D",true,false):
		for shape:CollisionShape3D in body.get_children():
			for p:Vector3 in shape.shape.get_faces():exact=exact and vertices.has(Vector3i((shape.to_global(p)*1000.).round()));count+=1
	check(count>0 and exact,"all actual seam collision vertices equal final GPU geometry after yaw and hinge")
	var hits:=true
	for plan:Dictionary in joints():
		var at:=Vector3(plan.center.x,plan.high+.4,plan.center.y);var ray:=PhysicsRayQueryParameters3D.create(at,at-Vector3.UP*.8,1)
		var excluded:Array[RID]=[]
		for body:StaticBody3D in house.find_children("*","StaticBody3D",true,false):
			if not body.has_meta("party_joint"):excluded.append(body.get_rid())
		ray.exclude=excluded;var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(ray)
		hits=hits and not hit.is_empty() and hit.collider.get_meta("party_joint","") in ["party_wall_pier","wedge_hinge_joint"]
	check(hits and not joints().is_empty(),"actual Jolt seam-only rays retain source house identity through source roof bodies")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	for mode:String in ["party","fold_positive","fold_negative"]:
		var city:RefCounted=EraFixture.fixture("pastoral",0.,2 if mode!="party" else 1,1)
		if mode=="party":
			check(city.add_house_stroke(Vector2(-26.2,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"}]).ok,"public neighboring mixed-era house")
			var snap:Dictionary=city.snapshot();snap.houses[1].era_theme="clockwork";snap.houses[1].base_y+=.2;check(city.restore(snap).ok,"mixed era and elevated actual house cold adoption")
		else:
			check(HingeActions.set_angle(city,"h1",17. if mode=="fold_positive" else -17.).ok and city.rotate_house("h1",.4).ok,"public signed hinge with whole-house yaw")
		await show(city,Vector2(-27.1,-20),"联排接缝·"+mode);quiet();demo.focus=Vector3(-27.1,1.7,-20);demo.zoom=9.;demo.pitch=.65;demo.yaw=.65;demo._update_camera();await settle()
		check(not joints().is_empty(),"actual published seam exists "+mode);await geometry();joint_windows()
		if mode=="party":await visible_glass()
		await capture(mode)
		demo._after_edit(demo.state.set_house_colors("h1",Color("b3975e"),Color("52636a")),"colors",false);await settle();quiet();joint_windows()
		var before:Dictionary=demo.state.snapshot();var hot:=arrays();check(demo.state.save_city(OUT+"/"+mode+".json").ok,"actual schema work save "+mode);var reader:=State.new();check(reader.load_city(OUT+"/"+mode+".json").ok,"actual disk cold read "+mode);await show(reader,Vector2(-27.1,-20),"接缝冷读");quiet();check(arrays()==hot and reader.snapshot()==before,"incremental seam GPU and author snapshot equal independent disk cold renderer "+mode)
		if mode!="party":
			demo._after_edit(HingeActions.set_angle(demo.state,"h1",28. if mode=="fold_positive" else -28.),"room");await settle();quiet();check(joints().is_empty() and absf(float(demo.state.houses[0].bend_angle_deg))==28.,"old 28 degree folding preserved while wedge leaves range");await key(KEY_Z,true);await settle();quiet();check(not joints().is_empty() and arrays()==hot,"native Undo restores actual micro-fold seam GPU")
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PARTY_JOINTS_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
