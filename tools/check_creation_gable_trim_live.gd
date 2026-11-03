extends "res://tools/check_creation_dormer_slots_live.gd"
const TrimFixture=preload("res://tests/test_city_creation_gable_trim_slots.gd")
func has_vertex(buckets:Dictionary,point:Vector3)->bool:
	var key:=Vector3i((point*1000.).round())
	for x in range(-1,2):
		for y in range(-1,2):
			for z in range(-1,2):
				for other:Vector3 in buckets.get(key+Vector3i(x,y,z),[]):
					if point.distance_to(other)<.0001:return true
	return false
func record_edit()->void:
	facts["edit_pcm"]=await Probe.record(OUT+"/gable_trim_edit_Master.wav",3.2);pcm_done=true
func physical_trim()->void:
	check(await wait_for(func():return demo.town.touch.active.is_empty(),1500),"native 0.55s touch feedback settles before exact physical-to-GPU comparison")
	await physics_frame
	var house:Node3D=demo.town.house_roots.h1;var data:Dictionary=house.get_meta("gable_trim",{});var space:PhysicsDirectSpaceState3D=demo.town.get_world_3d().direct_space_state;var count:=0;var picked:=true
	for row:Dictionary in data.get("parts",[]):
		if row.kind!="eave":continue
		var at:Vector3=Vector3(row.a).lerp(row.b,.5);var tangent:Vector3=(Vector3(row.b)-Vector3(row.a)).normalized();var outward:=Vector3(-tangent.z,0,tangent.x)
		if outward.dot(at-Vector3(-27.2,at.y,-20))<0:outward=-outward
		var hit:=space.intersect_ray(PhysicsRayQueryParameters3D.create(house.to_global(at+outward*.18),house.to_global(at-outward*.01),1))
		picked=picked and not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1" and hit.collider.get_meta("cell_id","")==row.cell_id and hit.collider.get_meta("gable_trim","")==data.id;count+=1
	check(count>0 and picked,"actual Jolt rays hit each outline eave under its exact original house and source cell identity")
	var rig:Dictionary=demo.town.resonance.rigs.h1;demo.town.resonance.update({"audible":true,"lead_id":"h1","beat_pulse":1.});check(rig.pivot.scale==Vector3.ONE,"maximum pulse leaves raised trim and physical picking aligned with the real roof")
	# Production batching consumes source meshes. Match real collider vertices to
	# the final range-limited GPU faces instead of searching removed source names.
	var vertices:Dictionary={};var inverse:=house.global_transform.affine_inverse()
	for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
		if mesh.visibility_range_end!=64.:continue
		var frame:=inverse*mesh.global_transform
		for p:Vector3 in mesh.mesh.get_faces():
			var at:=frame*p;var key:=Vector3i((at*1000.).round());var bucket:Array=vertices.get(key,[]);bucket.append(at);vertices[key]=bucket
	var bodies:Array=house.find_children("GableTrimPick_*","StaticBody3D",true,false);var valid:=not bodies.is_empty() and bodies.size()<=2
	for body:StaticBody3D in bodies:
		for shape:CollisionShape3D in body.get_children():
			var frame:=inverse*shape.global_transform
			for p:Vector3 in shape.shape.get_faces():
				var match:=has_vertex(vertices,frame*p);valid=valid and match
	check(valid,"every per-cell trim collider vertex matches the final production GPU batches with actual 64m detail LOD")
func cold_equal(label:String)->void:
	var hot:=arrays();var cold:=State.new();check(cold.restore(demo.state.snapshot()).ok,label+" author source restores");await show(cold,Vector2(-27.2,-20),label);quiet();focus_roof();await settle();check(arrays()==hot,label+" complete GPU arrays and palette equal independent cold publication")
func native_trim(id:String)->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle()
	var button:Button=demo.find_child("GableTrimChoice_"+("automatic" if id.is_empty() else id),true,false)
	check(button!=null and button.is_visible_in_tree(),"actual gable trim choice is reachable from native house appearance")
	if button!=null:measuring=true;await ui_click(button);await settle();quiet();measuring=false
	await key(KEY_ESCAPE);await key(KEY_ESCAPE)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();process_frame.connect(observe_frame)
	var city:RefCounted=TrimFixture.fixture();city.set_house_architecture_variant("h1","timber_shutters");city.set_house_dormer("h1","gable_light");city.set_house_chimney("h1","brick_twin_pots");await show(city,Vector2(-27.2,-20),"山墙檐口细部");quiet();focus_roof();await settle()
	var original:Dictionary=demo.state.houses[0].duplicate(true);facts["original_counts"]=counts()
	for key:String in Choice.TRIMS:
		await native_trim(key);focus_roof();await settle()
		check(demo.town.house_roots.h1.get_meta("gable_trim",{}).get("active",false),"actual selected trim publishes raised gable and outline eave geometry")
		check(Choice.record(demo.state.houses[0])==Choice.record(original) and Choice.record(demo.state.houses[0],"dormer")==Choice.record(original,"dormer") and Choice.record(demo.state.houses[0],"chimney")==Choice.record(original,"chimney") and demo.state.houses[0].seed==original.seed,"native trim preserves original seed and all three previous slots")
		await physical_trim();facts[key+"_counts"]=counts();demo.set_process(false);demo.town.clear_preview()
		for phase in range(3):demo._set_light_phase(phase);await settle();await capture(key+"_phase_"+str(phase))
		demo.set_process(true)
	root.size=Vector2i(1024,768);await settle();demo.spatial_popover.open_for_house("h1");await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle()
	var last:Button=demo.find_child("GableTrimChoice_stone_dentils",true,false)
	check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(demo.spatial_popover.inspector.panel.get_global_rect()) and last.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(root.size)).encloses(last.get_global_rect()),"four-slot appearance sheet and last native choice fit the actual 1024px window");await capture("four_slot_sheet_1024");await key(KEY_ESCAPE);await key(KEY_ESCAPE);root.size=Vector2i(1440,900);focus_roof();await settle()
	demo._after_edit(demo.state.set_house_colors("h1",Color("6a8877"),Color("a55f45")),"colors");await settle();quiet();var colored:=arrays();var saved:Dictionary=demo.state.snapshot()
	check(demo.state.save_city(OUT+"/trim.json").ok,"actual four-slot schema29 work saves through ordinary atomic publication")
	var reader:=State.new();check(reader.load_city(OUT+"/trim.json").ok and reader.snapshot()==saved,"actual four-slot disk cold read preserves exact authorship");await show(reader,Vector2(-27.2,-20),"檐口改色冷读");quiet();focus_roof();await settle();check(arrays()==colored,"all recolored real house and trim GPU arrays match disk cold publication")
	record_edit.call_deferred();await native_trim("");check(Choice.record(demo.state.houses[0],"gable_trim").is_empty() and not demo.town.house_roots.h1.has_meta("gable_trim"),"native original eave removes only the fourth-slot raised geometry")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==saved.houses and arrays()==colored,"native Undo restores exact four-slot geometry and palette")
	await key(KEY_Y,true);await settle();quiet();check(Choice.trim(demo.state.houses[0]).is_empty(),"native Redo restores original eave")
	await cold_equal("原檐口冷算")
	await native_trim("timber_verge");demo._after_edit(demo.state.rotate_house("h1",.4),"room");await settle();quiet();await physical_trim();await cold_equal("旋转木檐冷算")
	var near:RefCounted=TrimFixture.neighbor_fixture();await show(near,Vector2(-27.2,-20),"仅檐口的近邻避让");quiet();focus_roof();await settle();var old_parts:Array=demo.town.house_roots.h1.get_meta("gable_trim").parts;var before:=arrays()
	var result:Dictionary=demo.state.rotate_house("h2",.15);demo._after_edit(result,"room");await settle();quiet();var after:Array=demo.town.house_roots.h1.get_meta("gable_trim").parts
	check(result.ok and old_parts!=after and arrays()!=before,"rotating a legal close taller neighbor actually invalidates and changes trim-only geometry");facts["rotated_neighbor"]={"before_parts":old_parts.size(),"after_parts":after.size()};var changed:=arrays()
	await key(KEY_Z,true);await settle();quiet();check(arrays()==before,"native Undo restores exact trim-only near-neighbor mask")
	await key(KEY_Y,true);await settle();quiet();check(arrays()==changed,"native Redo restores changed neighbor mask")
	await cold_equal("旋转近邻檐口冷算");await capture("rotated_taller_neighbor")
	var axis:RefCounted=TrimFixture.fixture("renaissance",PI*.5,1,2);axis.set_house_architecture_variant("h1","stone_dentils","gable_trim");await show(axis,Vector2(-28,-19.1),"纵向石檐");quiet();focus_roof();await settle();await capture("renaissance_opposite_axis");await cold_equal("纵向石檐冷算")
	check(await wait_for(func():return pcm_done,6000) and facts.edit_pcm.ok,"WASAPI Master remains non-silent and unclipped through native eave edits")
	edit_frames.sort();facts["native_edit_frames"]={"count":edit_frames.size(),"p95_ms":edit_frames[floori(edit_frames.size()*.95)],"max_ms":edit_frames[-1]}
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GABLE_TRIM_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
