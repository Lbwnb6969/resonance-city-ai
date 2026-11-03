extends "res://tools/check_creation_three_road_modes_live.gd"
const Willow=preload("res://tests/test_city_creation_weeping_willow.gd")
const Landmarks=preload("res://scripts/world/city_creation_placed_landmarks.gd")
func tree_arrays()->Array:
	var rows:Array=[]
	for node:MultiMeshInstance3D in demo.town.vegetation_layer.find_children("*","MultiMeshInstance3D",true,false):
		var transforms:Array=[]
		for i in range(node.multimesh.instance_count):transforms.append(node.multimesh.get_instance_transform(i))
		rows.append(var_to_bytes([str(node.name),node.multimesh.mesh.surface_get_arrays(0),transforms]).hex_encode().sha256_text())
	rows.sort();return rows
func focus_willow()->void:
	demo.focus=Vector3(-28,1.1,-19.5);demo.zoom=7.;demo.pitch=.55;demo.yaw=.55;demo._update_camera()
func wind_probe()->void:
	var viewport:=SubViewport.new();viewport.size=Vector2i(256,256);viewport.own_world_3d=true;viewport.transparent_bg=true;viewport.render_target_update_mode=SubViewport.UPDATE_ALWAYS;root.add_child(viewport)
	var environment:=WorldEnvironment.new();environment.environment=Environment.new();environment.environment.ambient_light_source=Environment.AMBIENT_SOURCE_COLOR;environment.environment.ambient_light_color=Color.WHITE;environment.environment.ambient_light_energy=.7;viewport.add_child(environment)
	var light:=DirectionalLight3D.new();light.rotation_degrees=Vector3(-45,-35,0);viewport.add_child(light)
	var camera:=Camera3D.new();viewport.add_child(camera);camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=4.;camera.position=Vector3(3,2.6,5);camera.look_at(Vector3(0,1.5,0))
	var parts:Dictionary=demo.town.foliage.parts("weeping_willow",0);var raw:=var_to_bytes(parts.canopy.surface_get_arrays(0));var material:ShaderMaterial=demo.town.foliage.material("canopy").duplicate();material.set_shader_parameter("touch_time",10.);material.set_shader_parameter("season_gold",0.)
	for part:String in parts:
		var mesh:=MeshInstance3D.new();mesh.mesh=parts[part];mesh.material_override=material if part=="canopy" else demo.town.foliage.material("trunk");viewport.add_child(mesh)
	var images:Array[Image]=[]
	for time:float in [.2,2.3]:
		material.set_shader_parameter("wind_time_override",time);await process_frame;await process_frame;await RenderingServer.frame_post_draw;var image:Image=viewport.get_texture().get_image();images.append(image);image.save_png(OUT+"/isolated_wind_"+str(images.size())+".png")
	var changed:=0
	for y in range(256):
		for x in range(256):
			if images[0].get_pixel(x,y)!=images[1].get_pixel(x,y):changed+=1
	check(changed>100 and raw==var_to_bytes(parts.canopy.surface_get_arrays(0)),"isolated actual leaf shader moves rendered willow pixels while shared CPU mesh bytes stay unchanged");facts.wind={"changed_pixels":changed,"size":[256,256],"shader":material.shader.resource_path};viewport.queue_free();await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var city:RefCounted=Willow.fixture();await show(city,Vector2(-28,-20),"垂柳与岸风");quiet();focus_willow();demo.select_tool(5);await settle()
	var source:OptionButton=demo.vegetation_panel.find_child("Species",true,false);var index:int=State.GardenSpecies.IDS.find("weeping_willow");var control:Button=demo.tactile_dock.button_for("Species",index);check(source.item_count==8 and control!=null and control.is_visible_in_tree(),"eighth willow choice appears in original free forest palette without level or new navigation");var before:Dictionary=demo.state.snapshot();await ui_click(control);await settle();check(demo.vegetation_kind=="weeping_willow" and demo.state.snapshot()==before,"actual willow seal selects only transient brush intent")
	await click_world(Vector2(-28,-20));await settle();quiet();check(demo.state.plants.size()==1 and demo.state.plants[0].kind=="weeping_willow" and Vector2(demo.state.plants[0].position[0],demo.state.plants[0].position[1]).distance_to(Vector2(-28,-20))<.01,"actual world click authors one willow at the visible dry shoreline point")
	var author:Array=demo.state.plants.duplicate(true);var planted:=tree_arrays();check(planted.size()==2 and demo.town.foliage.material("canopy").shader==preload("res://scripts/visual/shaders/creation_foliage.gdshader"),"actual published willow uses two cached trunk/canopy MultiMeshes and the existing shared-wind shader")
	check(await wait_for(func():return demo.ambience._trees.size()==1),"published visible willow is counted by the real nature mixer");check(demo.ambience.players.size()==2 and demo.music._players.size()==12 and demo.music._effects.size()==4,"willow keeps two nature voices and original 12/4 audio pools")
	await key(KEY_Z,true);await settle();check(demo.state.plants.is_empty() and tree_arrays().is_empty(),"native Undo withdraws the complete willow publication");await key(KEY_Y,true);await settle();quiet();check(demo.state.plants==author and tree_arrays()==planted,"native Redo restores exact plant identity seed and GPU buffers")
	await wind_probe();demo.select_tool(2);demo.town.clear_preview();demo.set_process(false)
	for phase in range(3):demo._set_light_phase(phase);await settle();await capture("willow_phase_"+str(phase))
	demo.set_process(true);demo._set_light_phase(0);facts.audio=await Probe.record(OUT+"/willow_nature_Master.wav",3.2);check(facts.audio.ok,"actual nature playback with a visible willow is continuous non-silent and unclipped")
	var snapshot:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/willow.json").ok,"actual city atomically saves the new authored species");var cold:=State.new();check(cold.load_city(OUT+"/willow.json").ok,"actual cold file loader accepts original plant field and identity");await show(cold,Vector2(-28,-20),"垂柳冷读");quiet();focus_willow();await settle();check(tree_arrays()==planted and demo.state.plants==author,"cold file publication independently reproduces exact incremental vegetation GPU buffers")
	root.size=Vector2i(1024,768);demo.select_tool(5);await settle();control=demo.tactile_dock.button_for("Species",index);check(control.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(root.size)).encloses(control.get_global_rect()),"willow seal remains fully visible and reachable inside the original 1024 forest controls");await capture("willow_palette_1024")
	var dry:RefCounted=Willow.fixture(false);dry.place_plant(Vector2(-28,-20),"weeping_willow");await show(dry,Vector2(-28,-20),"垂柳非破坏退让");quiet();await settle();var kept:Array=demo.state.plants.duplicate(true);var hidden:Dictionary=Landmarks.place(demo.state,"riverbank",Vector2(-28,-20),.4);demo._after_edit(hidden,"landmark");await settle();quiet();check(hidden.ok and tree_arrays().is_empty() and demo.state.plants==kept and await wait_for(func():return demo.ambience._trees.is_empty()),"actual covering landmark withdraws willow from GPU and nature without deleting author content")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.plants==kept and tree_arrays().size()==2 and await wait_for(func():return demo.ambience._trees.size()==1),"native Undo restores original willow and the same visible forest contribution")
	check(not demo.persistence and personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"isolated willow tests preserve personal save bytes and keep test works in evidence")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts,"works":demo.collection_directory};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WEEPING_WILLOW_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
