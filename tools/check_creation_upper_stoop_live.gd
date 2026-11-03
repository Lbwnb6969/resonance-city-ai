extends "res://tools/check_creation_detail_eras_live.gd"
const UpperFixture=preload("res://tests/test_city_creation_upper_stoop.gd")
const Upper=preload("res://scripts/world/city_creation_upper_stoop.gd")
func stoops()->Array:return demo.town.house_roots.h1.get_meta("upper_stoops",[])
func physical()->void:
	check(await wait_for(func():return demo.town.touch.active.is_empty(),1500),"touch feedback settles before physical-to-GPU comparison")
	await physics_frame;var house:Node3D=demo.town.house_roots.h1;var all:Dictionary={};var exact:=true;var hits:=true;var support:=true;var samples:=0
	for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
		for p:Vector3 in mesh.mesh.get_faces():
			var at:=mesh.to_global(p);var key:=Vector3i((at*1000.).round());var bucket:Array=all.get(key,[]);bucket.append(at);all[key]=bucket
	for body:StaticBody3D in house.find_children("*","StaticBody3D",true,false):
		if not body.has_meta("upper_stoop"):continue
		for shape:CollisionShape3D in body.get_children():
			var frame:Transform3D=shape.global_transform;var box:=BoxMesh.new();box.size=shape.shape.size
			for p:Vector3 in box.get_faces():exact=exact and has_vertex(all,frame*p)
	for plan:Dictionary in stoops():
		for rank in range(int(plan.count)):
			var stride:float=(float(plan.distance)-.12)/int(plan.count);var along:=.12+(rank+.5)*stride;var normal:Vector2=plan.outward;var tangent:=Vector2(-normal.y,normal.x)
			for lateral:float in [-.34,0.,.34]:
				var at:Vector2=plan.wall_at+normal*along+tangent*lateral;var y:=Upper.height(plan,at);var query:=PhysicsRayQueryParameters3D.create(Vector3(at.x,y+.06,at.y),Vector3(at.x,y-.06,at.y),1);var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(query)
				hits=hits and not hit.is_empty() and hit.collider.has_meta("upper_stoop") and absf(hit.position.y-y)<.003;support=support and y>=demo.state.ground_height(at)-.002;samples+=1
	check(samples>0 and hits,"real Jolt rays across all upper tread centers match exact derived heights")
	check(exact,"all upper tread box collision vertices equal actual final GPU vertices")
	check(support,"full-width walking samples remain above actual ground instead of buried treads")
	facts.get_or_add("physical",[]).append({"samples":samples,"exact":exact,"hits":hits,"above_ground":support,"plans":stoops()})
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	for yaw:float in [0.,.4]:
		for target:float in [1.4,1.8,2.2]:
			var f:=UpperFixture.fixture(yaw,target);check(f.ok,"public upper plateau sample");await show(f.city,Vector2(-26,-20),"坡街二层跨接");quiet();check(stoops().size()==1,"real renderer publishes height-matched upper entry");await physical()
			demo.focus=Vector3(-27,1.6,-20);demo.zoom=10.;demo.yaw=1.8;demo.pitch=.55;demo._update_camera();await settle();await capture("upper_"+str(yaw)+"_"+str(target))
			var hot:=arrays();var snapshot:Dictionary=demo.state.snapshot();var path:=OUT+"/upper_"+str(yaw)+"_"+str(target)+".json";check(demo.state.save_city(path).ok,"actual disk save preserves pure derived upper entry");var reader:=State.new();check(reader.load_city(path).ok and reader.snapshot()==snapshot,"actual old-schema author work cold reads");await show(reader,Vector2(-26,-20),"二层门阶冷读");quiet();check(arrays()==hot and stoops().size()==1,"cold renderer equals actual GPU and upper plans")
			demo._after_edit(demo.state.remove_road("r1"),"road");await settle();quiet();check(stoops().is_empty(),"removing the source road restores the upper window and removes all steps");await key(KEY_Z,true);await settle();quiet();check(stoops().size()==1 and arrays()==hot,"native Undo restores actual upper entry and exact GPU")
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("UPPER_STOOP_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
