extends "res://tools/check_creation_festival_scenery_live.gd"
const Pergola=preload("res://scripts/world/city_creation_plaza_pergola.gd")
const PergolaFixture=preload("res://tests/test_city_creation_plaza_pergola.gd")
func pergola_root()->Node3D:
	for node:Node3D in demo.get_meta("street_wonders").layers:
		if node.get_meta("plaza_pergola_fountain",false):return node
	return null
func pergola_arrays()->Array:
	var rows:Array=[];var node:=pergola_root()
	if node==null:return rows
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		var appearance:Array=[];var material:Material=mesh.material_override
		if material is ShaderMaterial:
			appearance.append(material.shader.resource_path)
			for key:String in ["albedo_color","surface_kind","roughness"]:appearance.append(material.get_shader_parameter(key))
		elif material is StandardMaterial3D:appearance.append(material.albedo_color)
		for i in range(mesh.mesh.get_surface_count()):rows.append(var_to_bytes([mesh.global_transform,mesh.mesh.surface_get_arrays(i),appearance]).hex_encode().sha256_text())
	rows.sort();return rows
func pergola_focus()->void:
	demo.focus=Vector3(-24,1.,-20);demo.zoom=9.;demo.pitch=.62;demo.yaw=.50;demo._update_camera()
func pergola_settle()->void:
	await festival_settle();demo.life.set_process(false)
func actual_pergola()->void:
	await physics_frame;var node:=pergola_root();check(node!=null,"actual optional timber pergola and octagonal spring are published")
	if node==null:return
	var space:PhysicsDirectSpaceState3D=demo.town.get_world_3d().direct_space_state;var air:=0
	for x:float in [-.9,0.,.9]:
		for y:float in [.75,1.4]:
			if space.intersect_ray(PhysicsRayQueryParameters3D.create(node.to_global(Vector3(x,y,1.9)),node.to_global(Vector3(x,y,1.0)),1)).is_empty():air+=1
	check(air==6,"six real Jolt approach rays remain open under the timber canopy")
	var posts:=0
	for p:Vector3 in node.get_meta("plan").feet:
		var hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(node.to_global(p+Vector3(-.2,.7,0)),node.to_global(p+Vector3(.2,.7,0)),1))
		if not hit.is_empty() and hit.collider.name=="PergolaSolids":posts+=1
	check(posts==4,"all four rendered timber posts have precise physical solids")
	var basin:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(node.to_global(Vector3(0,.2,1.1)),node.to_global(Vector3(0,.2,0)),1));check(not basin.is_empty() and basin.collider.name=="PergolaSolids","actual octagonal water basin blocks walking through its stone volume")
	var triangles:=0;var zero:=0
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		var faces:=mesh.mesh.get_faces();triangles+=faces.size()/3
		for i in range(0,faces.size(),3):
			if (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).length_squared()<1e-14:zero+=1
	var uploaded:=true
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		for surface in range(mesh.mesh.get_surface_count()):uploaded=uploaded and not RenderingServer.mesh_get_surface(mesh.mesh.get_rid(),surface).get("vertex_data",PackedByteArray()).is_empty()
	check(uploaded,"all actual furnishing meshes have published rendering-server vertex buffers")
	check(triangles>300 and zero==0,"actual merged wood vines and octagonal spring contain finite nondegenerate geometry");facts.geometry={"triangles":triangles,"meshes":node.find_children("*","MeshInstance3D",true,false).size(),"open_rays":air,"solid_posts":posts}
func people_rest()->void:
	demo.select_tool(2);demo.life.set_process(false);demo.life.quiet_walk.tick(.1);var author:Dictionary=demo.state.snapshot();var entered:Dictionary={};var both:=false;var simulated:=0.;var seen:Dictionary={};var traveled:=0.;var previous:Dictionary={};facts.people_before={"held":demo.life._budget_hold,"pending":demo.life.budget_sync_pending(),"life_revision":demo.life.last_revision,"state_revision":demo.state.revision,"network_seats":demo.life._network.get_meta("plaza_seats",{}),"actors":demo.life.quiet_walk.actors.size()}
	for i in range(5000):
		demo.life.quiet_walk.tick(.1);simulated+=.1;var resting:=0
		for home:String in demo.life.quiet_walk.actors:
			var actor:Dictionary=demo.life.quiet_walk.actors[home]
			seen[actor.current]=true;var at:Vector3=actor.node.position
			if previous.has(home):traveled+=at.distance_to(previous[home])
			previous[home]=at
			if not str(actor.get("plaza_rest","")).is_empty() and actor.wait>0.:entered[home]=actor.node.position;resting+=1
		if resting>=2:both=true;break
		if i%40==0:await process_frame
	check(demo.life.residents.size()==3 and entered.size()>=2 and both,"at least two real existing residents follow actual walking routes and gather at the same plaza without teleporting")
	check(demo.state.snapshot()==author,"real public rest updates only runtime actors and awards no XP or simulated economic event");facts.people={"real_homes":demo.life.residents.size(),"visited":entered,"two_simultaneous":both,"production_route_simulated_seconds":simulated,"total_distance":traveled,"visited_graph_nodes":seen.keys()};pergola_focus();await capture("pergola_real_residents")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var city:RefCounted=PergolaFixture.fixture(OUT+"/epoch.json");city.CreationPolicy.set_progression_enabled(city,false,OUT+"/paused.json")
	for at:Vector2 in [Vector2(-26,-26),Vector2(-22,-26),Vector2(-18,-22)]:check(city.add_house(at).ok,"actual authored home beside the road ring")
	await show(city,Vector2(-24,-20),"广场木花架与涌泉");await pergola_settle();quiet();pergola_focus();var spaces:Dictionary=demo.state.functional_zones().duplicate(true);var account:Dictionary=demo.state.cozy_progression.duplicate(true);var original:Dictionary=demo.state.snapshot();check(pergola_root()==null,"earned Lv3 appearance starts off while the real paved square exists")
	await journal();var choice:CheckBox=demo.get_meta("plaza_pergola_page");await reveal_all(choice);check(choice.is_visible_in_tree() and not choice.disabled and not choice.button_pressed,"real J street-scenery foldout exposes the unlocked Lv3 choice");check(not "Lv.3" in demo.get_meta("scenery_foldout").preview.text,"completed furnishing leaves the original unmade-preview list")
	await ui_click(choice);await pergola_settle();quiet();check(Pergola.enabled(demo.state) and demo.state.cozy_progression==account and demo.state.functional_zones()==spaces,"native checkbox changes only appearance and leaves exact account and civic/music space facts unchanged");await key(KEY_ESCAPE);check(await wait_for(func():return pergola_root()!=null),"real optional furnishing publishes after original edit worker")
	if pergola_root()==null:demo.queue_free();await process_frame;quit(1);return
	check(demo.life._network.get_meta("plaza_seats",{}).size()==4,"real asynchronous Life worker publishes four rests from its isolated copied author state");await actual_pergola();var hot:=pergola_arrays();await people_rest();demo.set_process(false);demo.town.clear_preview()
	for phase in range(3):demo._set_light_phase(phase);await settle();await capture("pergola_phase_"+str(phase))
	demo.set_process(true);demo._set_light_phase(0);var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/plaza.json").ok,"actual world file saves earned choice and original paved loop");var cold:=State.new();check(cold.load_city(OUT+"/plaza.json").ok,"existing schema loader cold-reads the new optional preference");await show(cold,Vector2(-24,-20),"花架冷读");await pergola_settle();quiet();pergola_focus();check(pergola_arrays()==hot,"independent file cold rebuild has exactly the same actual GPU geometry and material values")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await journal();choice=demo.get_meta("plaza_pergola_page");await reveal_all(choice);check(choice.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(size)).encloses(choice.get_global_rect()),"original nested J foldout keeps the real Lv3 checkbox visible at "+str(size.x));await capture("pergola_choice_"+str(size.x));await key(KEY_ESCAPE)
	await journal();await reveal_all(choice);await ui_click(choice);await pergola_settle();quiet();await key(KEY_ESCAPE);check(pergola_root()==null and demo.life._network.get_meta("plaza_seats",{}).is_empty() and demo.state.plaza_loops==original.plaza_loops and demo.state.functional_zones()==spaces,"native off removes exact visual and rest routes while retaining original paving and every civic eligibility fact")
	await key(KEY_Z,true);await pergola_settle();quiet();check(Pergola.enabled(demo.state) and pergola_arrays()==hot and demo.life._network.get_meta("plaza_seats",{}).size()==4,"native Undo restores optional furnishing and published routes with unchanged original source geometry")
	var placed:Dictionary=demo.state.PlacedLandmarks.place(demo.state,"riverbank",Vector2(-24,-20),float(pergola_root().get_meta("plan").yaw));demo._after_edit(placed,"landmark");await pergola_settle();quiet();check(placed.ok and pergola_root()==null and demo.life._network.get_meta("plaza_seats",{}).is_empty(),"actual author landmark edit withdraws furnishing and matching asynchronous rest routes together")
	await key(KEY_Z,true);await pergola_settle();quiet();check(pergola_arrays()==hot and demo.life._network.get_meta("plaza_seats",{}).size()==4,"native landmark Undo restores original furnishing GPU and actual route anchors")
	check(not demo.persistence and personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"isolated public-square tests preserve personal save bytes and evidence-only works")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts,"works":demo.collection_directory};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PLAZA_PERGOLA_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
