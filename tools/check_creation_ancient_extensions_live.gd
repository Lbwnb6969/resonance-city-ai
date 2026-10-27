extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
const Fixture=preload("res://tools/fixtures/city_creation_ancient_extensions_fixture.gd")
const Plan=preload("res://scripts/world/city_creation_ancient_extension_plan.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Rotation=preload("res://scripts/world/city_creation_house_rotation.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
func publish(result:Dictionary,label:String)->void:
	check(result.ok,label);demo._after_edit(result,"room");await settle();quiet()
func ray(a:Vector3,b:Vector3)->Dictionary:return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(a,b,1))
func view(id:String,size:Vector2i=Vector2i(1440,900))->void:
	root.size=size;var h:Dictionary=demo.town._house_record(id);var p:=Plan.rectangle(h)
	var at:Vector2=Frame.point(h,p.center)
	demo.focus=Vector3(at.x,float(h.get("base_y",0.))+p.height*.55,at.y);demo.zoom=12.;demo.yaw=.48;demo.pitch=.57;demo._update_camera();await settle()
func run()->void:
	OUT="res://验证记录/M73/first"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var f:=Fixture.build();await show(f.city,Vector2(-25,-16),"爱奥尼长馆与罗马巴西利卡");quiet();demo.ui_layer.hide()
	check(DisplayServer.get_name()!="headless","actual OpenGL publication")
	for id:String in f.ids:
		var house:Dictionary=demo.town._house_record(id);var p:=Plan.rectangle(house);var built:Node3D=demo.town.house_roots[id]
		check(built.has_meta("ionic_stoa") if house.architecture=="ionic_stoa" else built.has_meta("roman_basilica"),"actual published civic mass "+id)
		check(not built.get_meta("civic_windows",[]).is_empty() and demo.town.resonance.rigs[id].mesh.get_meta("windows")==built.get_meta("civic_windows"),"resonance panes equal actual compiled civic glass only "+id)
		await view(id)
		for phase:int in [0,2]:demo._set_light_phase(phase);await capture(id+"_"+house.architecture+"_phase"+str(phase))
		await physics_frame
		var hit:=ray(Vector3(p.center.x+.2,12.,p.center.y+.2),Vector3(p.center.x+.2,.5,p.center.y+.2))
		check(not hit.is_empty() and hit.collider.get_meta("house_id","")==id and house.cells.any(func(c):return c.id==hit.collider.get_meta("cell_id","")),"actual roof picks valid original house and cell "+id)
	var stoa:Dictionary=demo.town._house_record(f.ids[0]);var sp:=Plan.rectangle(stoa);var stoa_at:=Vector3(sp.center.x,0,sp.center.y)
	check(ray(stoa_at+Vector3(0,.8,1.95),stoa_at+Vector3(0,.8,1.18)).is_empty(),"real column gap remains open to the covered walkway")
	var column:=ray(stoa_at+Vector3(-2.5,.8,1.95),stoa_at+Vector3(-2.5,.8,1.18))
	check(not column.is_empty() and column.collider.get_meta("house_id","")==f.ids[0],"real Ionic shaft picks original house")
	var basilica:Dictionary=demo.town._house_record(f.ids[1]);var bp:=Plan.rectangle(basilica);var at:=Vector3(bp.center.x,0,bp.center.y)
	for entrance:Dictionary in demo.state.house_entrances(f.ids[1]):
		var wall:=Vector3(entrance.wall_at.x,.8,entrance.wall_at.y);var normal:=Vector3(entrance.outward.x,0,entrance.outward.y)
		check(ray(wall+normal*.4,wall-normal*.2).is_empty(),"every original resident door matches a real basilica arch")
	var apse:=ray(at+Vector3(0,.8,-bp.depth*.5-.4),at+Vector3(0,.8,-bp.depth*.5+.2))
	check(not apse.is_empty() and apse.collider.get_meta("house_id","")==f.ids[1],"real circular apse wall collision")
	# Real color publication must update the owned continuous tile material.
	var node_id:int=demo.town.house_roots[f.ids[1]].get_instance_id()
	await publish(demo.state.set_house_colors(f.ids[1],Color("c3b69b"),Color("507b80")),"public custom civic wall and roof colors")
	var colored:=false
	for mesh:MeshInstance3D in demo.town.house_roots[f.ids[1]].find_children("*","MeshInstance3D",true,false):
		if mesh.material_override is ShaderMaterial and mesh.material_override.shader==demo.town.JoinedRoofShader:colored=colored or mesh.material_override.get_shader_parameter("roof_color").is_equal_approx(Color("507b80"))
	check(colored and demo.town.house_roots[f.ids[1]].get_instance_id()==node_id,"palette update reuses geometry and recolors actual continuous roof")
	await view(f.ids[1]);demo._set_light_phase(0);await capture("basilica_custom_color")
	await publish(Rotation.set_angle(demo.state,f.ids[1],deg_to_rad(37.)),"actual arbitrary-angle civic rotation")
	await view(f.ids[1]);await physics_frame
	var point:Vector2=Frame.point(demo.town._house_record(f.ids[1]),bp.center+Vector2(.2,.2));var rotated:=ray(Vector3(point.x,12,point.y),Vector3(point.x,.5,point.y))
	check(not rotated.is_empty() and rotated.collider.get_meta("house_id","")==f.ids[1],"rotated true roof collision retains identity")
	demo.pitch=deg_to_rad(12.);demo._update_camera();await capture("basilica_rotated_low")
	var snapshot:Dictionary=demo.state.snapshot();var cold:=State.new();check(demo.state.save_city(OUT+"/civic_world.json").ok and cold.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/civic_world.json"))).ok and cold.houses==demo.state.houses,"whole multi-floor civic production disk JSON cold roundtrip")
	# Partial upper rooms and terraces use the existing modular shell honestly.
	await publish(demo.state.add_cell(f.ids[0],0,0,1),"partial upper-floor extension")
	check(not demo.town.house_roots[f.ids[0]].get_meta("ancient_extension").rectangular and demo.town._house_record(f.ids[0]).cells.size()==4,"partial upper room remains built and saved")
	demo.focus=Vector3(sp.center.x,1.4,sp.center.y);demo.zoom=12.;demo.pitch=.57;demo._update_camera();await capture("stoa_partial_upper_freeform")
	await publish(demo.state.undo(),"Undo partial upper room")
	check(demo.town.house_roots[f.ids[0]].has_meta("ionic_stoa") and demo.state.houses==snapshot.houses,"Undo restores full stoa mass and original modules")
	# Native book clicks and world construction prove both new brush recipes.
	var empty:=State.new();empty.initialize_empty();await show(empty,Vector2(-25,-20),"古典新屋原型册");quiet();demo.ui_layer.show();demo.select_tool(0)
	if not demo.tactile_dock.house_options:await ui_click(demo.tool_buttons[0])
	root.size=Vector2i(1024,768);demo.focus=Vector3(-25,.3,-20);demo.zoom=24.;demo.yaw=0.;demo.pitch=1.;demo._update_camera();await settle()
	for i in range(Plan.IDS.size()):
		await ui_click(demo.tactile_dock.bubble_rows.find_child("NewHousePrototype",true,false));await settle()
		var book:Node=demo.get_meta("prototype_book");check(book.panel.is_visible_in_tree() and book.buttons.has(Plan.IDS[i]) and not book.buttons[Plan.IDS[i]].disabled,"actual new prototype visible and enabled "+Plan.IDS[i])
		var bounds:Rect2=book.panel.get_global_rect();check(bounds.position.x>=0 and bounds.end.x<=1024 and bounds.position.y>=0 and bounds.end.y<=768,"prototype book fits 1024 window")
		await capture("prototype_book_"+Plan.IDS[i]);await ui_click(book.buttons[Plan.IDS[i]]);await settle()
		check(Brush.current(demo.state).prototype==Plan.IDS[i],"native silhouette click selects "+Plan.IDS[i])
		await click_world(Vector2(-29.+i*7.,-24));await settle();quiet()
		check(demo.state.houses.size()==i+1 and demo.state.houses[-1].get("architecture","")==Plan.IDS[i] and demo.town.house_roots[demo.state.houses[-1].id].has_meta("ancient_extension"),"actual world click builds selected civic type")
	await capture("native_new_civic_houses")
	var times:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):await process_frame;var now:=Time.get_ticks_usec();times.append((now-last)/1000.);last=now
	times.sort();facts={"frames":{"p95_ms":times[113],"max_ms":times[-1]},"master":await Probe.record(OUT+"/Master.wav",3.2)};check(facts.master.ok,"actual two-new-house Master zero clipping")
	check(pool()==voices and voices.long.size()==12 and voices.short.size()==4 and voices.buses==6 and voices.nature.size()==2,"original audio voice identities retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains byte-identical")
	FileAccess.open(OUT+"/ancient_extensions.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t"));print("ANCIENT_EXTENSIONS_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
