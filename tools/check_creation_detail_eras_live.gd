extends "res://tools/check_creation_detail_status_live.gd"
const EraFixture=preload("res://tests/test_city_creation_detail_eras.gd")
func chimney_jolt()->void:
	await physics_frame;var node:Node3D=demo.town.house_roots.h1.find_child("ChimneyDetail_*",true,false)
	if node==null:check(false,"selected chimney exists for actual Jolt probe");return
	var data:Dictionary=node.get_meta("chimney_detail");var space:PhysicsDirectSpaceState3D=demo.town.get_world_3d().direct_space_state
	var hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(node.to_global(Vector3(.3,data.top-.2,0)),node.to_global(Vector3(0,data.top-.2,0)),1))
	check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1" and hit.collider.get_meta("chimney_detail","")==data.id,"new-era visible chimney retains actual Jolt picking and house identity")
func choose(prefix:String,id:String)->void:
	await open_details();var button:Button=demo.find_child(prefix+id,true,false)
	check(button!=null and button.is_visible_in_tree(),"actual original detail control visible: "+prefix+id)
	if button!=null:await ui_click(button);await settle();quiet()
	await key(KEY_ESCAPE);await key(KEY_ESCAPE)
func trim_vertices()->void:
	await physics_frame;var house:Node3D=demo.town.house_roots.h1;var inverse:=house.global_transform.affine_inverse();var vertices:Dictionary={}
	for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
		if mesh.visibility_range_end!=64.:continue
		var frame:=inverse*mesh.global_transform
		for point:Vector3 in mesh.mesh.get_faces():
			var at:=frame*point;var key:=Vector3i((at*1000.).round());var bucket:Array=vertices.get(key,[]);bucket.append(at);vertices[key]=bucket
	var count:=0;var valid:=true;var top:=true
	for body:StaticBody3D in house.find_children("GableTrimPick_*","StaticBody3D",true,false):
		var cell_id:String=body.get_meta("cell_id");var cell:Dictionary=demo.state.houses[0].cells.filter(func(c):return str(c.id)==cell_id)[0]
		if demo.state.house_era(demo.state.houses[0]) in ["clockwork","modern_eco"]:top=top and int(cell.level)==1
		for shape:CollisionShape3D in body.get_children():
			var frame:=inverse*shape.global_transform
			for point:Vector3 in shape.shape.get_faces():valid=valid and has_vertex(vertices,frame*point);count+=1
	check(count>0 and valid and top,"real new-era trim collider vertices equal final 64m GPU geometry and actual top cell identity")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var rows:Array=[]
	for era:String in ["pastoral","renaissance","clockwork","modern_eco"]:
		var city:RefCounted=EraFixture.fixture(era,0.,3,2);await show(city,Vector2(-26.2,-19.1),"四风貌五槽·"+era);quiet();demo.life.set_process(false)
		demo.focus=Vector3(-26.2,1.,-19.1);demo.zoom=13.;demo.pitch=.65;demo.yaw=.35;demo._update_camera()
		await choose("WindowDetail_","timber_shutters");await choose("DormerChoice_","gable_light");await choose("ChimneyChoice_","copper_cowl");await choose("GableTrimChoice_","stone_dentils");await choose("PorchChoice_","firewood_crate")
		for slot:String in ["windows","dormer","chimney","gable_trim","porch"]:check(packet().get(slot,{}).get("active",false),"real published five-slot geometry active "+era+slot)
		check(await wait_for(func():return demo.town.touch.active.is_empty(),1500),"sculpt feedback settles before exact physical comparison "+era)
		print("ERA_PHYSICAL_PROBE ",era);await visible_glass();print("ERA_GLASS ",era," ",JSON.stringify(facts.get("geometry",[]).back()));await physical_detail();await chimney_jolt();await trim_vertices();await capture(era+"_five_slots")
		var seed_value:int=demo.state.houses[0].seed;var slots:Dictionary=demo.state.houses[0].architecture_variant.duplicate(true)
		demo._after_edit(demo.state.rotate_house("h1",.4),"room");await settle();quiet();check(demo.state.houses[0].seed==seed_value and demo.state.houses[0].architecture_variant==slots,"actual rotation preserves all five independent records "+era)
		await key(KEY_Z,true);await settle();quiet();check(not demo.state.houses[0].has("yaw") or is_zero_approx(float(demo.state.houses[0].yaw)),"native Undo restores orientation "+era)
		demo._after_edit(demo.state.set_house_colors("h1",Color("b3975e"),Color("52636a")),"colors",false);await settle();quiet();var hot:=arrays();var saved:Dictionary=demo.state.snapshot()
		check(demo.state.save_city(OUT+"/"+era+".json").ok,"actual five-slot work atomically saves "+era);var reader:=State.new();check(reader.load_city(OUT+"/"+era+".json").ok,"actual schema30 disk cold read "+era)
		await show(reader,Vector2(-26.2,-19.1),"四风貌五槽冷读·"+era);quiet();check(arrays()==hot,"all physical materials and actual GPU colors equal cold publication "+era)
		check(JSON.parse_string(JSON.stringify(saved))==JSON.parse_string(JSON.stringify(reader.snapshot())),"full author values preserve through disk cold read "+era)
		root.size=Vector2i(1024,768);await open_details();check(root.get_visible_rect().encloses(demo.spatial_popover.inspector.panel.get_global_rect()),"five-slot original inspector fits 1024 "+era);await capture(era+"_1024");await key(KEY_ESCAPE);await key(KEY_ESCAPE);root.size=Vector2i(1440,900)
		rows.append({"era":era,"status":packet()})
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":rows};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("DETAIL_ERAS_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
