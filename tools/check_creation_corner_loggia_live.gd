extends "res://tools/check_creation_stepped_guildhouse_live.gd"
const CornerPlan=preload("res://scripts/world/city_creation_corner_loggia.gd")
const CornerFixture=preload("res://tests/test_city_creation_corner_loggia.gd")
func corner_node()->Node3D:return demo.town.house_roots.h1.find_child("TwoSidedLoggia",true,false)
func physics_arches()->void:
	await physics_frame;var space:PhysicsDirectSpaceState3D=demo.town.get_world_3d().direct_space_state;var count:=0;var clear:=0;var solid:=0
	for wall:Node3D in demo.town.house_roots.h1.find_children("OpenTripleArcade*","Node3D",true,false):
		for hole:Dictionary in wall.get_meta("loggia_holes"):
			for dx:float in [-.10,.10]:
				count+=1;var a:=wall.to_global(Vector3(float(hole.x)+dx,.78,.25));var b:=wall.to_global(Vector3(float(hole.x)+dx,.78,-.25));var hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(a,b,1));clear+=int(hit.is_empty())
		var hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(wall.to_global(Vector3(.235,.78,.2)),wall.to_global(Vector3(.235,.78,-.2)),1));solid+=int(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1")
	check(count==12 and clear==12 and solid==2,"actual Jolt leaves all six arches open and keeps both tested masonry piers solid");facts.physics={"rays":count,"clear":clear,"solid":solid}
	var gallery:Node3D=corner_node();var hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(gallery.to_global(Vector3(.12,2.7,.08)),gallery.to_global(Vector3(.12,1.7,.08)),1))
	check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1" and not str(hit.collider.get_meta("cell_id","")).is_empty(),"visible new tile crown resolves to its actual authored house and top room")
func real_roof_addition()->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");await settle();var button:Button=demo.spatial_popover.root.find_child("ExtendHouse",true,false)
	check(button!=null and button.is_visible_in_tree(),"existing selected-house Add Building control remains available");await ui_click(button);await settle();quiet()
	check(demo.house_module_mode,"real existing Add Building button enters modular construction")
	var gallery:Node3D=corner_node();var at:Vector3=gallery.to_global(Vector3(.12,2.084,.08));var pointer:Vector2=demo.camera.unproject_position(at)
	var event:=InputEventMouseMotion.new();event.device=92;event.position=pointer;event.global_position=pointer;root.push_input(event);await process_frame;await process_frame
	var before:Dictionary=demo.state.snapshot();var count:int=demo.state.houses[0].cells.size()
	for down:bool in [true,false]:
		var click:=InputEventMouseButton.new();click.device=92;click.position=pointer;click.global_position=pointer;click.button_index=MOUSE_BUTTON_LEFT;click.pressed=down;root.push_input(click);await process_frame
	await settle();quiet()
	check(demo.state.houses.size()==1 and demo.state.houses[0].cells.size()==count+1 and demo.state.houses[0].architecture==CornerPlan.ID,"actual new crown click adds an upper room to the same house")
	check(demo.state.houses[0].seed==before.houses[0].seed,"new modular upper room preserves the authored seed")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses[0]==before.houses[0],"native Ctrl-Z restores the original complete gallery and room arrangement")
	demo.house_module_mode=false;demo.select_tool(2)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:RefCounted=Guild.fixture(2,2,2,"townhouse");await show(city,Vector2(-27.1,-19.1),"街角双向连拱望楼");quiet();focus_house();await settle();var original:Dictionary=demo.state.snapshot();var before:=arrays();facts.before=counts()
	await native_prototype(CornerPlan.ID);focus_house();await settle();check(demo.state.houses[0].architecture==CornerPlan.ID and demo.town.house_roots.h1.get_meta("corner_loggia_clear",false),"real original silhouette card publishes the new corner loggia")
	var expected:Dictionary=original.houses[0].duplicate(true);expected.architecture=CornerPlan.ID;check(demo.state.houses[0]==expected and arrays()!=before,"prototype selection changes only its explicit author choice and actual geometry")
	check(preload("res://scripts/ui/city_creation_prototype_caption.gd").caption(demo.spatial_popover,demo.state.houses[0])=="街角双向连拱望楼","actual selected-house caption follows the published new recipe")
	var response:Node3D=demo.town.house_roots.h1.find_child("ResonanceVisualPivot",true,false)
	check(response!=null and demo.town.house_roots.h1.get_meta("rigid_architecture",false) and response.find_children("*","MeshInstance3D",true,false).all(func(mesh):return mesh.material_override is ShaderMaterial and mesh.material_override.shader==demo.town.resonance.GlowShader),"actual response pivot owns only light overlays; hard stone gallery meshes stay fixed")
	await physics_arches();facts.after=counts();demo.set_process(false);demo.town.clear_preview()
	for phase in range(3):demo._set_light_phase(phase);await settle();await capture("corner_phase_"+str(phase))
	demo.set_process(true);await real_roof_addition();focus_house();await settle()
	demo._after_edit(demo.state.set_house_colors("h1",Color("b9b18e"),Color("98614b")),"colors");await settle();quiet();var colored:=arrays();var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/corner.json").ok,"actual new prototype and user colors save to this isolated batch")
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/corner.json"))).ok,"ordinary world reader accepts the actual recipe");await show(cold,Vector2(-27.1,-19.1),"连拱望楼冷读");quiet();focus_house();await settle();check(arrays()==colored,"actual recolored GPU arrays and material uniforms equal an independent cold rebuild")
	check(CornerFixture.Brush.select(demo.state,"renaissance","townhouse"),"ordinary neighbor keeps its own old prototype")
	var rooms:Array=[]
	for level in range(2):
		for z in range(2):rooms.append({"x":0,"z":z,"level":level,"kind":"room"})
	var added:Dictionary=demo.state.add_house_stroke(Vector2(-24.4,-20),rooms);check(added.ok,"real adjacent ordinary townhouse joins the block");demo._after_edit(added,"room");await settle();quiet()
	var active:Array=demo.town.house_roots.h1.get_meta("corner_loggia",[]).filter(func(row):return row.crown);check(active.size()==1 and Vector2i.RIGHT not in active[0].sides,"actual adjacent occupied side withdraws the gallery face and moves to another clear external corner")
	check(neighbor_roof_complete(added.house_id),"ordinary adjacent roof stays complete and never inherits the special flat/crown recipe");var adjacent:Dictionary=demo.state.snapshot();var adjacent_gpu:=arrays();var rebuild:=State.new();check(rebuild.restore(JSON.parse_string(JSON.stringify(adjacent))).ok,"adjacent mixed block cold reads");await show(rebuild,Vector2(-27.1,-19.1),"相邻街屋冷读");quiet();focus_house();await settle();check(arrays()==adjacent_gpu,"actual neighbor-driven crown relocation equals an independent cold rebuild")
	await physics_arches();saved=demo.state.snapshot()
	root.size=Vector2i(1024,768);demo.spatial_popover.open_for_house("h1");var book:Node=Book.obtain(demo);book.for_house(demo.spatial_popover);await settle();var button:Button=book.buttons[CornerPlan.ID];book.grid.get_parent().ensure_control_visible(button);await settle();check(button.is_visible_in_tree() and not button.disabled and book.panel.get_global_rect().encloses(button.get_global_rect()),"actual new card remains selectable inside original 1024 prototype scrollbook");await capture("prototype_1024");await key(KEY_ESCAPE)
	check(demo.state.snapshot()==saved and personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"preview, small window and validation never write personal or authored world data")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts,"works":demo.collection_directory};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CORNER_LOGGIA_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
