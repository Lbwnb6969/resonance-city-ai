extends "res://tools/check_creation_gable_trim_live.gd"
const Porches=preload("res://tests/test_city_creation_porch_slots.gd")
const SmokeFixture=preload("res://tests/test_city_creation_chimney_slots.gd")
func natural_wood_colors()->Array:
	var values:Dictionary={}
	for mesh:MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		var material:Material=mesh.material_override
		if not material is ShaderMaterial or not material.get_meta("creation_fixed_color",false) or material.get_shader_parameter("surface_kind")!=5:continue
		for i in range(mesh.mesh.get_surface_count()):
			for color:Color in mesh.mesh.surface_get_arrays(i)[Mesh.ARRAY_COLOR]:values[color.to_abgr32()]=true
	var result:Array=values.keys();result.sort();return result
func record_edit()->void:
	facts["edit_pcm"]=await Probe.record(OUT+"/porch_edit_Master.wav",3.2);pcm_done=true
func native_porch(id:String)->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle()
	var button:Button=demo.find_child("PorchChoice_"+("automatic" if id.is_empty() else id),true,false)
	check(button!=null and button.is_visible_in_tree(),"actual fifth-slot choice is reachable through native appearance buttons")
	if button!=null:measuring=true;await ui_click(button);await settle();quiet();measuring=false
	await key(KEY_ESCAPE);await key(KEY_ESCAPE)
func focus_porch()->void:
	demo.focus=Vector3(-27.8,1.35,-19.7);demo.zoom=5.6;demo.pitch=.46;demo.yaw=.45;demo._update_camera()
func porch_count()->int:return demo.town.house_roots.h1.get_meta("porch_detail",{}).get("sites",[]).size()
func physical_porch()->void:
	check(await wait_for(func():return demo.town.touch.active.is_empty(),1500),"native touch feedback settles before physical geometry comparison");await physics_frame
	var house:Node3D=demo.town.house_roots.h1;var data:Dictionary=house.get_meta("porch_detail",{});var space:PhysicsDirectSpaceState3D=demo.town.get_world_3d().direct_space_state;var count:=0;var hits:=true;var vertices:Dictionary={};var inverse:=house.global_transform.affine_inverse()
	for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
		if mesh.visibility_range_end!=64.:continue
		var transform:=inverse*mesh.global_transform
		for p:Vector3 in mesh.mesh.get_faces():
			var at:=transform*p;var key:=Vector3i((at*1000.).round());var bucket:Array=vertices.get(key,[]);bucket.append(at);vertices[key]=bucket
	var matching:=true
	for node:Node3D in house.find_children("PorchSite*","Node3D",true,false):
		var at:=Vector3(0,.246 if data.id=="firewood_crate" else .18,0);var hit:=space.intersect_ray(PhysicsRayQueryParameters3D.create(node.to_global(at+Vector3.BACK*.4),node.to_global(at),1));hits=hits and not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1" and hit.collider.get_meta("cell_id","")==data.cell_id and hit.collider.get_meta("porch_detail","")==data.id;count+=1
		for shape:CollisionShape3D in node.find_children("*","CollisionShape3D",true,false):
			var transform:=inverse*shape.global_transform
			for p:Vector3 in shape.shape.get_faces():matching=matching and has_vertex(vertices,transform*p)
	check(count>0 and hits,"real Jolt rays pick each visible pot or wood basket under the source house and door cell identity")
	check(matching,"all actual micro-scenery collision vertices match final GPU batches with 64m detail LOD")
	var entry:Dictionary=demo.town._primary_entrance(demo.state.houses[0]);var a:Vector3=demo.town._entrance_point(entry,Vector3(0,.30,.22));var b:Vector3=demo.town._entrance_point(entry,Vector3(0,.30,1.15));var hit:=space.intersect_ray(PhysicsRayQueryParameters3D.create(a,b,1));check(hit.is_empty(),"native approach stays physically open above the original door treads")
	var rig:Dictionary=demo.town.resonance.rigs.h1;demo.town.resonance.update({"audible":true,"lead_id":"h1","beat_pulse":1.});check(rig.pivot.scale==Vector3.ONE,"maximum response keeps real ground scenery fixed to its exact picking geometry")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();process_frame.connect(observe_frame)
	var city:RefCounted=Porches.porch_fixture();await show(city,Vector2(-27.2,-20),"门廊小景");quiet();focus_porch();await settle();var original:Dictionary=demo.state.houses[0].duplicate(true);facts["original_counts"]=counts()
	for key:String in Choice.PORCHES:
		await native_porch(key);focus_porch();await settle();check(porch_count()==2,"actual native porch choice publishes both supported side clusters")
		var kept:Dictionary=demo.state.houses[0].duplicate(true);var slots:Dictionary=kept.architecture_variant.slots.duplicate(true);slots.erase("porch");kept.architecture_variant.slots=slots;check(kept==original,"fifth slot leaves all four old recipes, seed and room structure exact")
		await physical_porch();facts[key+"_counts"]=counts();demo.set_process(false);demo.town.clear_preview()
		for phase in range(3):demo._set_light_phase(phase);await settle();await capture(key+"_phase_"+str(phase))
		demo.set_process(true)
	root.size=Vector2i(1024,768);await settle();demo.spatial_popover.open_for_house("h1");await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle();var last:Button=demo.find_child("PorchChoice_firewood_crate",true,false)
	check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(demo.spatial_popover.inspector.panel.get_global_rect()) and last.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(root.size)).encloses(last.get_global_rect()),"actual five-slot sheet and final porch row fit the 1024px window");await capture("five_slot_sheet_1024");await key(KEY_ESCAPE);await key(KEY_ESCAPE);root.size=Vector2i(1440,900);focus_porch();await settle()
	demo._after_edit(demo.state.set_house_colors("h1",Color("77543c"),Color("c5a16c")),"colors");await settle();quiet();var colored:=arrays();var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/porch.json").ok,"actual five-slot author work saves through atomic disk API")
	var reader:=State.new();check(reader.load_city(OUT+"/porch.json").ok and reader.snapshot()==saved,"schema30 disk cold read restores all authorship");await show(reader,Vector2(-27.2,-20),"门廊改色冷读");quiet();focus_porch();await settle();check(arrays()==colored,"all actual house and micro-scenery GPU arrays and colors equal disk cold publication")
	var natural:=natural_wood_colors();demo._after_edit(demo.state.set_house_colors("h1",Color("d7c6a1"),Color("8d5946")),"colors");await settle();quiet();check(natural.size()==2 and natural_wood_colors()==natural,"natural bark and cut end colors survive matching author RGB, disk cold read and a second recolor");colored=arrays();saved=demo.state.snapshot()
	record_edit.call_deferred();await native_porch("");check(not demo.town.house_roots.h1.has_meta("porch_detail") and Choice.porch(demo.state.houses[0]).is_empty(),"native original porch removes only the new scenery")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==saved.houses and arrays()==colored,"native Undo restores exact five-slot geometry and author colors");await key(KEY_Y,true);await settle();quiet();check(Choice.porch(demo.state.houses[0]).is_empty(),"native Redo restores original porch");await cold_equal("原门廊冷算")
	await native_porch("flower_pots");demo._after_edit(demo.state.rotate_house("h1",.4),"room");await settle();quiet();await physical_porch();await cold_equal("旋转花盆冷算")
	await show(Porches.porch_fixture(),Vector2(-27.2,-20),"门前道路避让");quiet();await native_porch("flower_pots");demo._after_edit(Porches.road_beside(demo.state,-28.77),"road");await settle();quiet();check(porch_count()==1,"actual side road invalidates the complete intersecting porch cluster");var one_side:=arrays()
	demo._after_edit(Porches.road_beside(demo.state,-27.23),"road");await settle();quiet();check(porch_count()==0 and Choice.porch(demo.state.houses[0])=="flower_pots","two real roads withdraw all blocked clusters while retaining author intent");await key(KEY_Z,true);await settle();quiet();check(porch_count()==1 and arrays()==one_side,"native road Undo restores exact geometry of the clear side");await key(KEY_Z,true);await settle();quiet();check(porch_count()==2,"second native Undo restores both clear sides");await cold_equal("撤路门廊冷算")
	var before_root:int=demo.town.house_roots.h1.get_instance_id();var old_plants:Array=demo.state.plants.duplicate(true);var plant:Dictionary=demo.state.place_plant(Vector2(-30.4,-17.9),"shrub",.4);demo._after_edit(plant,"terrace");await settle();quiet();check(plant.ok and demo.town.house_roots.h1.get_instance_id()!=before_root,"actual plant edit reaches the porch outer cache dependency");var plant_gpu:=arrays();var planted:Dictionary=demo.state.snapshot();await key(KEY_Z,true);await settle();quiet();check(demo.state.plants==old_plants,"native Undo really removes the newly authored plant");var no_plant:=arrays();await cold_equal("植物撤销门廊冷算")
	var plant_reader:=State.new();check(plant_reader.restore(planted).ok,"independent planted author source restores");await show(plant_reader,Vector2(-27.2,-20),"植物编辑门廊冷算");quiet();await settle();check(arrays()==plant_gpu,"plant-add hot geometry equals independent cold publication");demo._after_edit(demo.state.erase_vegetation_stroke([Vector2(-30.4,-17.9)] as Array[Vector2],.2),"erase");await settle();quiet();check(demo.state.plants==old_plants and arrays()==no_plant,"actual public plant erase restores exact original author plants and porch GPU arrays")
	var renaissance:RefCounted=Porches.porch_fixture("renaissance",PI*.5);renaissance.set_house_architecture_variant("h1","firewood_crate","porch");await show(renaissance,Vector2(-27.2,-20),"柱廊门边柴筐");quiet();focus_porch();await settle();await physical_porch();demo.set_process(false);demo.town.clear_preview();await capture("renaissance_column_porch");demo.set_process(true);await cold_equal("柱廊柴筐冷算")
	await actual_grill_porch()
	check(await wait_for(func():return pcm_done,6000) and facts.edit_pcm.ok,"WASAPI Master stays non-silent and unclipped during native porch construction")
	edit_frames.sort();facts["native_edit_frames"]={"count":edit_frames.size(),"p95_ms":edit_frames[floori(edit_frames.size()*.95)],"max_ms":edit_frames[-1]};check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes remain unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PORCH_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
func actual_grill_porch()->void:
	var city:RefCounted=Porches.grill_fixture();check(city.begin_progression_epoch(OUT+"/grill_epoch.json").ok,"actual roast house starts its backed-up optional account");await show(city,Vector2(-28,-20),"炭炉与门边花盆");quiet();focus_porch();await settle();var count:=porch_count();check(count>0 and demo.town.house_roots.h1.has_meta("grill_supply_transform"),"real grill counter and hidden smoke leave only physically clear porch scenery")
	var worked:=false
	for i in range(2000):
		demo.life._process(.05)
		if demo.life.bakery_status("h1").worker_phase=="baking":worked=true;break
	demo.town.update_bakery_supply({"h1":demo.life.bakery_status("h1")});await settle();demo.life.set_process(false);var smoke:Array=demo.town.house_roots.h1.find_children("BakerySmoke*","MeshInstance3D",true,false);check(worked and smoke.any(func(m):return m.visible) and porch_count()==count,"real worker arrives and cooks under visible smoke without changing porch solids");demo.set_process(false);demo.town.clear_preview();await capture("actual_roast_worker_porch");demo.set_process(true)
	var stock:Dictionary=demo.state.get_meta("grill_supply",{}).duplicate(true);var result:Dictionary=demo.state.CreationPolicy.set_progression_enabled(demo.state,false,OUT+"/grill_epoch.json");await settle();quiet();demo.town.update_bakery_supply({"h1":demo.life.bakery_status("h1")});demo.life._process(20.)
	check(result.ok and smoke.all(func(m):return not m.visible) and porch_count()==count and demo.state.get_meta("grill_supply",{})==stock,"economic pause withdraws real smoke and preserves stock plus exact porch scenery")
