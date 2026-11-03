extends "res://tools/check_creation_dormer_slots_live.gd"
const Chimney=preload("res://tests/test_city_creation_chimney_slots.gd")
func native_chimney(id:String)->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle()
	var button:Button=demo.find_child("ChimneyChoice_"+("automatic" if id.is_empty() else id),true,false)
	check(button!=null and button.is_visible_in_tree(),"actual chimney choice is reachable from native house appearance")
	if button!=null:measuring=true;await ui_click(button);await settle();quiet();measuring=false
	await key(KEY_ESCAPE);await key(KEY_ESCAPE)
func physical_chimney()->void:
	await physics_frame
	var node:Node3D=demo.town.house_roots.h1.find_child("ChimneyDetail_*",true,false)
	if node==null:check(false,"actual selected chimney exists before physics probe");return
	var data:Dictionary=node.get_meta("chimney_detail");var key:String=data.id;var space:PhysicsDirectSpaceState3D=demo.town.get_world_3d().direct_space_state
	var hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(node.to_global(Vector3(.3,data.top-.2,0)),node.to_global(Vector3(0,data.top-.2,0)),1))
	check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1" and hit.collider.get_meta("chimney_detail","")==key,"actual Jolt ray picks the visible shaft under its original house and cell identity")
	var clear:=true
	for point:Vector3 in data.outlets:
		var a:=point+Vector3(0,.06,0) if key=="brick_twin_pots" else point+Vector3(.08,0,0);var b:=Vector3(point.x,data.top-.02,point.z) if key=="brick_twin_pots" else point-Vector3(.16,0,0)
		hit=space.intersect_ray(PhysicsRayQueryParameters3D.create(node.to_global(a),node.to_global(b),1));clear=clear and hit.is_empty()
	check(clear,"actual Jolt preserves open air through every pot and below the copper wind cap")
	var rig:Dictionary=demo.town.resonance.rigs.h1;demo.town.resonance.update({"audible":true,"lead_id":"h1","beat_pulse":1.})
	check(rig.pivot.scale==Vector3.ONE,"maximum response keeps real chimney and its exact collision aligned")
	var fake_smoke:=0
	for i in range(rig.mesh.mesh.get_surface_count()):
		var colors:PackedColorArray=rig.mesh.mesh.surface_get_arrays(i)[Mesh.ARRAY_COLOR]
		for color:Color in colors:
			if roundi(color.r*8.)==6:fake_smoke+=1
	check(fake_smoke==0,"explicit chimney has no resonance-generated work smoke before any actual baking")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();process_frame.connect(observe_frame)
	var city:RefCounted=Chimney.fixture();city.set_house_architecture_variant("h1","timber_shutters");city.set_house_dormer("h1","gable_light");await show(city,Vector2(-27.2,-20),"瓦顶烟囱细部");quiet();focus_roof();await settle()
	var original:Dictionary=demo.state.houses[0].duplicate(true);facts["original_counts"]=counts()
	for key:String in ["brick_twin_pots","copper_cowl"]:
		await native_chimney(key);focus_roof();await settle()
		check(demo.town.house_roots.h1.get_meta("chimney_detail",{}).get("active",false) and demo.town.house_roots.h1.get_meta("roof_detail",{}).get("active",false),"actual chimney and independent dormer publish together")
		check(Choice.record(demo.state.houses[0])==Choice.record(original) and Choice.record(demo.state.houses[0],"dormer")==Choice.record(original,"dormer") and demo.state.houses[0].seed==original.seed,"native chimney leaves both prior slots and original house seed intact")
		await physical_chimney()
		facts[key+"_counts"]=counts();demo.set_process(false);demo.town.clear_preview()
		for phase in range(3):demo._set_light_phase(phase);await settle();await capture(key+"_phase_"+str(phase))
		demo.set_process(true)
	root.size=Vector2i(1024,768);await settle();demo.spatial_popover.open_for_house("h1");await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle()
	check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(demo.spatial_popover.inspector.panel.get_global_rect()),"actual appearance sheet with three independent slot rows fits the 1024px window");await capture("three_slot_sheet_1024");await key(KEY_ESCAPE);await key(KEY_ESCAPE);root.size=Vector2i(1440,900);focus_roof();await settle()
	demo._after_edit(demo.state.set_house_colors("h1",Color("6a8877"),Color("a55f45")),"colors");await settle();quiet();var colored:=arrays();var saved:Dictionary=demo.state.snapshot()
	check(demo.state.save_city(OUT+"/chimney.json").ok,"actual three-slot schema28 work saves through the atomic publication API")
	var cold:=State.new();check(cold.load_city(OUT+"/chimney.json").ok and cold.snapshot()==saved,"actual schema28 three-slot author source cold reads exactly");await show(cold,Vector2(-27.2,-20),"烟囱冷读");quiet();focus_roof();await settle();check(arrays()==colored,"all actual recolored house GPU arrays and material colors cold-equal incremental publication")
	demo._after_edit(demo.state.set_house_colors("h1",Color("d7c6a1"),Color("8d5946")),"colors");await settle();quiet();colored=arrays();saved=demo.state.snapshot()
	var metal:Array=demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false).filter(func(m):return m.material_override.get_meta("creation_fixed_color",false) and m.material_override is ShaderMaterial and m.material_override.get_shader_parameter("surface_kind")==6)
	check(not metal.is_empty(),"fixed patinated copper survives matching author RGB and a second recolor")
	record_edit.call_deferred();await native_chimney("off");check(demo.town.house_roots.h1.get_meta("chimneys",[]).is_empty() and Choice.chimney(demo.state.houses[0])=="off" and demo.town.house_roots.h1.find_child("ChimneyDetail_*",true,false)==null,"native no-chimney choice suppresses original and new shafts and all roof smoke sources")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==saved.houses and arrays()==colored,"native Undo restores exact three-slot geometry and palette")
	await key(KEY_Y,true);await settle();quiet();check(Choice.chimney(demo.state.houses[0])=="off","native Redo restores explicit absence")
	await native_chimney("");check(Choice.record(demo.state.houses[0],"chimney").is_empty() and Choice.record(demo.state.houses[0])==Choice.record(original) and Choice.record(demo.state.houses[0],"dormer")==Choice.record(original,"dormer"),"native original chimney clears only its own slot and keeps original windows and dormer")
	var ordinary:=arrays();var original_city:=State.new();check(original_city.restore(demo.state.snapshot()).ok,"independent original-roof source restores");await show(original_city,Vector2(-27.2,-20),"原烟囱冷算");quiet();check(arrays()==ordinary,"returning to the original chimney is content-equal to independent old roof publication")
	await native_chimney("brick_twin_pots");demo._after_edit(demo.state.rotate_house("h1",.4),"room");await settle();quiet();await physical_chimney()
	var rotated:=arrays();var rotated_city:=State.new();check(rotated_city.restore(demo.state.snapshot()).ok,"freely rotated roof source restores");await show(rotated_city,Vector2(-27.2,-20),"旋转烟囱");quiet();focus_roof();await settle();check(arrays()==rotated,"freely rotated shafts, outlet positions and complete geometry cold-equal incremental publication")
	var axis:RefCounted=Chimney.fixture("renaissance",PI*.5,1,2);axis.set_house_dormer("h1","shed_light");axis.set_house_chimney("h1","copper_cowl");await show(axis,Vector2(-28,-19.1),"纵向烟囱");quiet();focus_roof();await settle();await physical_chimney()
	var adjacent:Dictionary=demo.state.add_house_stroke(Vector2(-28,-21.8),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"}]);demo._after_edit(adjacent,"room");await settle();quiet();check(adjacent.ok and demo.town.house_roots.h1.get_meta("chimney_detail",{}).get("active",false),"actual adjacent room keeps a supported chimney while updating its roof envelope")
	var joined:=arrays();var neighbor:=State.new();check(neighbor.restore(demo.state.snapshot()).ok,"adjacent author source cold restores");await show(neighbor,Vector2(-28,-19.1),"邻接烟囱冷算");quiet();check(arrays()==joined,"neighbor-triggered chimney geometry and material publication equals independent cold geometry")
	check(await wait_for(func():return pcm_done,6000) and facts.edit_pcm.ok,"WASAPI Master remains non-silent and unclipped during native construction edits")
	await real_baking()
	edit_frames.sort();facts["native_edit_frames"]={"count":edit_frames.size(),"p95_ms":edit_frames[floori(edit_frames.size()*.95)],"max_ms":edit_frames[-1]}
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CHIMNEY_SLOTS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
func real_baking()->void:
	var city:RefCounted=Chimney.bakery_fixture();city.set_house_chimney("h1","brick_twin_pots");city.begin_progression_epoch(OUT+"/bakery_epoch.json");await show(city,Vector2(-28,-19.5),"真实烘焙双烟口");quiet();focus_roof();demo.life.set_process(false)
	var worked:=false
	for i in range(2000):
		demo.life._process(.05)
		if demo.life.bakery_status("h1").worker_phase=="baking":worked=true;break
	demo.town.update_bakery_supply({"h1":demo.life.bakery_status("h1")});await settle();demo.life.set_process(false)
	var puffs:Array=demo.town.house_roots.h1.find_children("BakerySmoke*","MeshInstance3D",true,false);var points:Array=demo.town.house_roots.h1.get_meta("chimneys",[]);var alignment:=puffs.size()==2
	for i in range(mini(puffs.size(),points.size())):alignment=alignment and puffs[i].global_position.distance_to(demo.town.house_roots.h1.to_global(points[i]))<.001
	check(worked and alignment and puffs.all(func(p):return p.visible),"actual worker arrives and both native smoke meshes emit exactly from their real hollow roof pots")
	demo.set_process(false);demo.town.clear_preview();await capture("attended_two_outlet_baking");demo.set_process(true)
	var epoch_path:=OUT+"/bakery_epoch.json";var stock:Dictionary=demo.state.bakery_supply.duplicate(true);var result:Dictionary=demo.state.CreationPolicy.set_progression_enabled(demo.state,false,epoch_path);await settle();quiet();demo.town.update_bakery_supply({"h1":demo.life.bakery_status("h1")})
	puffs=demo.town.house_roots.h1.find_children("BakerySmoke*","MeshInstance3D",true,false);demo.life._process(20.)
	check(result.ok and puffs.all(func(p):return not p.visible) and demo.state.bakery_supply==stock,"actual economic pause removes both visible puffs without changing real stock or production")
	result=demo.state.CreationPolicy.set_progression_enabled(demo.state,true,epoch_path);await settle();quiet();demo.town.update_bakery_supply({"h1":demo.life.bakery_status("h1")});puffs=demo.town.house_roots.h1.find_children("BakerySmoke*","MeshInstance3D",true,false)
	check(result.ok and puffs.all(func(p):return p.visible),"same actual account resumes both outlets only with retained attended baking")
	await native_chimney("off");check(demo.town.house_roots.h1.find_children("BakerySmoke*","MeshInstance3D",true,false).is_empty() and demo.town.house_roots.h1.get_meta("chimneys").is_empty(),"actual bakery with explicit no-chimney emits no roof smoke")
	var produced_before:int=demo.state.bakery_status("h1").produced
	for ignored in range(200):demo.life._process(.05)
	check(demo.state.bakery_status("h1").produced>produced_before,"roof appearance does not gate actual worker production or fabricate a different inventory")
	facts["actual_bakery"]={"status":demo.life.bakery_status("h1"),"pause_stock_unchanged":true,"outlet_count":2}
