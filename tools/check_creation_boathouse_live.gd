extends "res://tools/check_creation_stepped_guildhouse_live.gd"
const BoatPlan=preload("res://scripts/world/city_creation_boathouse_plan.gd")
const BoatFixture=preload("res://tests/test_city_creation_boathouse.gd")
func boat_focus()->void:
	demo.focus=Vector3(-28,1.,-18.7);demo.zoom=7.5;demo.pitch=.61;demo.yaw=.48;demo._update_camera()
func nearby_grass()->Array:
	var result:Array=[];var region:=Rect2(-30.,-20.,4.,4.)
	for node:MultiMeshInstance3D in demo.town.meadow.find_children("*","MultiMeshInstance3D",true,false):
		if str(node.name) not in ["Meadow_lawn","Meadow_grass","Meadow_flower"]:continue
		for i in range(node.multimesh.instance_count):
			var transform:Transform3D=node.global_transform*node.multimesh.get_instance_transform(i)
			if region.has_point(Vector2(transform.origin.x,transform.origin.z)):result.append(var_to_bytes([str(node.name),transform]).hex_encode())
	result.sort();return result
func roof_extension()->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");await settle();var button:Button=demo.spatial_popover.root.find_child("ExtendHouse",true,false);check(button!=null and button.is_visible_in_tree(),"original Add Building control is reachable for the new boat house");await ui_click(button);await settle();quiet()
	var dock:Node3D=demo.town.house_roots.h1.find_child("CreekBoathouseDock",true,false);var pointer:Vector2=demo.camera.unproject_position(dock.to_global(Vector3(.12,2.12,1.)))
	var event:=InputEventMouseMotion.new();event.device=92;event.position=pointer;event.global_position=pointer;root.push_input(event);await process_frame;await process_frame;var before:Dictionary=demo.state.snapshot()
	for down:bool in [true,false]:
		var click:=InputEventMouseButton.new();click.device=92;click.position=pointer;click.global_position=pointer;click.button_index=MOUSE_BUTTON_LEFT;click.pressed=down;root.push_input(click);await process_frame
	await settle();quiet();check(demo.state.houses.size()==1 and demo.state.houses[0].cells.size()==before.houses[0].cells.size()+1 and demo.state.houses[0].seed==before.houses[0].seed,"real canopy-roof click adds an upper room to the same shore house, preserving its seed")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==before.houses and not BoatPlan.find(demo.state,"h1").is_empty(),"native Ctrl-Z restores the exact moored boat and room source");demo.house_module_mode=false;demo.select_tool(2)
func dock_physics()->void:
	await physics_frame;var dock:Node3D=demo.town.house_roots.h1.find_child("CreekBoathouseDock",true,false);check(dock!=null,"actual dock published under the authored house")
	if dock==null:return
	var space:PhysicsDirectSpaceState3D=demo.town.get_world_3d().direct_space_state
	for x:float in [-.8,.8]:
		var hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(dock.to_global(Vector3(x,.4,1.)),dock.to_global(Vector3(x,-.12,1.)),1));check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1","real narrow pier is solid and belongs to the original house "+str(x))
	var gap:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(dock.to_global(Vector3(.48,.2,1.2)),dock.to_global(Vector3(.48,float(demo.state.Terrain.WATER_LEVEL)-float(dock.global_position.y)-.035,1.2)),1));check(gap.is_empty(),"central water beside the moored skiff has no fake solid dock collider")
	var roof:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(dock.to_global(Vector3(.12,2.8,1.)),dock.to_global(Vector3(.12,1.65,1.)),1));check(not roof.is_empty() and roof.collider.get_meta("house_id","")=="h1" and roof.collider.has_meta("cell_id"),"visible canopy roof resolves to the original source room")
	var boat:Node3D=dock.find_child("MooredWoodenSkiff",true,false);check(absf(boat.global_position.y-float(demo.state.Terrain.WATER_LEVEL))<.00001 and demo.state.water_clearance(Vector2(boat.global_position.x,boat.global_position.z))<-.04,"real skiff sits on the real water datum")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:RefCounted=BoatFixture.fixture("portico");await show(city,Vector2(-28,-19),"溪畔木船坞");quiet();boat_focus();await settle();var original:Dictionary=demo.state.snapshot();var before:=arrays();facts.before=counts()
	await native_prototype(BoatPlan.ID);boat_focus();await settle();var expected:Dictionary=original.houses[0].duplicate(true);expected.architecture=BoatPlan.ID
	check(demo.state.houses[0]==expected and arrays()!=before,"actual original pastoral silhouette card changes only the prototype and real geometry")
	check(not BoatPlan.find(demo.state,"h1").is_empty() and demo.town.house_roots.h1.get_meta("prototype_caption","")=="溪畔木船坞","real water and clearance publish the honest selected-house caption")
	await dock_physics();facts.after=counts();demo.set_process(false);demo.town.clear_preview()
	for phase in range(3):demo._set_light_phase(phase);await settle();await capture("boathouse_phase_"+str(phase))
	demo.set_process(true);await roof_extension();boat_focus();await settle();demo._after_edit(demo.state.set_house_colors("h1",Color("d7c49b"),Color("5e7775")),"colors");await settle();quiet();var colored:=arrays();var grass:=nearby_grass();var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/boathouse.json").ok,"ordinary atomic save keeps the selected prototype and user colors")
	var cold:=State.new();check(cold.load_city(OUT+"/boathouse.json").ok,"ordinary world reader accepts the actual saved boat house");await show(cold,Vector2(-28,-19),"船坞冷读");quiet();boat_focus();await settle();check(arrays()==colored,"actual incremental user colors and all dock GPU arrays equal a cold rebuild")
	check(nearby_grass()==grass,"actual nearby grass instance transforms equal an independent cold rebuild")
	demo._after_edit(demo.state.remove_water_at(Vector2(-28,-17.7)),"water");await settle();quiet();check(BoatPlan.find(demo.state,"h1").is_empty() and demo.town.house_roots.h1.find_child("CreekBoathouseDock",true,false)==null and demo.state.houses==saved.houses,"actual fill-water edit withdraws the dock and preserves the timber house author data")
	check("水岸或净空不足" in demo.town.house_roots.h1.get_meta("prototype_caption",""),"real no-water house does not claim to have a functional dock");await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==saved.houses and arrays()==colored,"native Ctrl-Z restores the exact water-dependent boat and GPU geometry")
	check(nearby_grass()==grass,"native water Undo restores the exact nearby grass instance transforms")
	await dock_physics();var current:Dictionary=demo.state.snapshot();demo.select_tool(0);demo.spatial_popover.open_for_house("h1");var book:Node=Book.obtain(demo);book.for_house(demo.spatial_popover);await settle();root.size=Vector2i(1024,768);await settle();book.grid.get_parent().ensure_control_visible(book.buttons[BoatPlan.ID]);await settle()
	check(book.buttons[BoatPlan.ID].is_visible_in_tree() and not book.buttons[BoatPlan.ID].disabled and book.panel.get_global_rect().encloses(book.buttons[BoatPlan.ID].get_global_rect()),"actual boathouse card fits the existing 1024 prototype scrollbook");await capture("boathouse_card_1024");await key(KEY_ESCAPE)
	check(demo.state.snapshot()==current and not demo.persistence and personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"validation UI and private works leave personal save and author world untouched")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts,"works":demo.collection_directory};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("BOATHOUSE_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
