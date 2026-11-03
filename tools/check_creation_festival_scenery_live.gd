extends "res://tools/check_creation_progression_ui_live.gd"
const FestivalFixture=preload("res://tests/test_city_creation_festival_scenery.gd")
const Festival=FestivalFixture.Festival
func reveal_all(control:Control)->void:
	var parent:Node=control.get_parent()
	while parent!=null:
		if parent is ScrollContainer:parent.ensure_control_visible(control);await process_frame
		parent=parent.get_parent()
	await settle()
func festival_settle()->void:
	await settle();demo.life.set_process(true)
	for i in range(20):await process_frame
func lantern_roots()->Array:
	return demo.get_meta("street_wonders").find_children("MarketWaterLantern_*","Node3D",true,false)
func signature()->Array:
	var meshes:Array=demo.town.ecology_layer.find_children("Bunting*","MeshInstance3D",true,false)
	for node:Node3D in lantern_roots():meshes.append_array(node.find_children("*","MeshInstance3D",true,false))
	var result:Array=[]
	for mesh:MeshInstance3D in meshes:
		for i in range(mesh.mesh.get_surface_count()):
			var data:Dictionary=RenderingServer.mesh_get_surface(mesh.mesh.get_rid(),i);result.append(var_to_bytes([mesh.global_transform,mesh.mesh.surface_get_arrays(i),data.get("vertex_data"),data.get("attribute_data")]).hex_encode().sha256_text())
	result.sort();return result
func actual_meshes()->void:
	var flags:MeshInstance3D=demo.town.ecology_layer.find_child("BuntingFlags",true,false);check(flags!=null and flags.mesh.get_faces().size()>30,"existing actual cross-street flag mesh is published")
	var nodes:=lantern_roots();check(nodes.size()==2,"two actual reused warm floats publish beside original piers without roads")
	await physics_frame
	for node:Node3D in nodes:
		var row:Dictionary=node.get_meta("plan");var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(node.global_position+Vector3.UP,node.global_position-Vector3.UP,1))
		check(not hit.is_empty() and hit.collider.name=="MarketWaterLanternPick" and hit.collider.get_meta("house_id","")==row.house_id,"actual Jolt float preserves real source house/cell")
		check(FestivalFixture.Lantern.clear(demo.state,row.at,[],FestivalFixture.Lantern.Street.derive(demo.state).piers),"actual float remains fully wet and clear of pier/door/house")
func lamp_pixels()->void:
	var lighting:Node=demo.get_meta("waterfront_light");lighting.set_process(false);var readings:Array=[]
	for strength:float in [0.,1.]:
		for node:Node3D in lantern_roots():node.get_meta("market_water_lamp_material").set_shader_parameter("lantern_night",strength)
		await process_frame;await RenderingServer.frame_post_draw;var pixels:Image=root.get_texture().get_image();var levels:Array=[]
		for node:Node3D in lantern_roots():
			var at:Vector2i=Vector2i(demo.camera.unproject_position(node.to_global(Vector3(0,.17,-.18))));var value:=0.
			for dx in range(-2,3):
				for dy in range(-2,3):value+=pixels.get_pixelv((at+Vector2i(dx,dy)).clamp(Vector2i.ZERO,pixels.get_size()-Vector2i.ONE)).get_luminance()/25.
			levels.append(value)
		readings.append(levels)
	check(readings[1].size()==2 and readings[1][0]>readings[0][0]+.02 and readings[1][1]>readings[0][1]+.02,"actual framebuffer shows both paper floats brighten from emission under identical night lighting")
	FileAccess.open(OUT+"/lamp_pixels.json",FileAccess.WRITE).store_string(JSON.stringify(readings));lighting.set_process(true)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool();var fixture:=FestivalFixture.fixture();check(fixture.ok,"real two-house shore without road")
	await show(fixture.city,Vector2(-23.5,-21),"街景风物");await festival_settle();quiet();check(demo.state.begin_progression_epoch(OUT+"/first.json").ok,"isolated backed level1 account")
	var page:Node=await journal();demo.life.set_process(false);var fold:Node=demo.get_meta("scenery_foldout");await reveal_all(fold.toggle);var source:Dictionary=demo.state.snapshot();check(fold.scroll.visible and not fold.preview.visible and fold.choice.disabled,"earned choices open and unmade preview folded; level1 cannot select festival")
	await reveal_all(fold.preview_toggle);await ui_click(fold.preview_toggle);await reveal_all(fold.preview);check(fold.preview.visible and "[待制作] Lv.3" in fold.preview.text and "[待制作] Lv.5" in fold.preview.text,"unproduced rewards are read-only marked previews")
	await reveal_all(fold.preview_toggle);await ui_click(fold.preview_toggle);await reveal_all(fold.toggle);await ui_click(fold.toggle);check(not fold.scroll.visible,"native fold button actually collapses four appearance controls");await ui_click(fold.toggle);check(fold.scroll.visible and demo.state.snapshot()==source,"browsing and folding cannot author or settle")
	await key(KEY_ESCAPE);var earned:=FestivalFixture.earn(demo.state);check(earned.ok and demo.state.cozy_progression.level>=4 and demo.state.houses.size()==2,"real 100 four-story buildings and removal earn retained level4");demo._after_edit({"ok":true,"message":"真实营造到等级4"},"history");await festival_settle();quiet();var account:Dictionary=demo.state.cozy_progression.duplicate(true)
	page=await journal();await reveal_all(fold.choice);check(not fold.choice.disabled and not fold.choice.button_pressed,"native earned festival checkbox enabled without opting in")
	var old_option:Node=demo.get_meta("window_pennants_page");await reveal_all(old_option.choice);await ui_click(old_option.choice);await festival_settle();check(demo.state.creative_settings.presentation.window_pennants and demo.get_node_or_null("TraditionScenery/SecondStudyScenery/WindowPennants")!=null,"existing earned Lv2 checkbox remains native and builds original roof pennants inside foldout")
	await reveal_all(old_option.choice);await ui_click(old_option.choice);await festival_settle();check(not demo.state.creative_settings.presentation.window_pennants and demo.get_node_or_null("TraditionScenery/SecondStudyScenery/WindowPennants")==null,"same original Lv2 checkbox removes its actual appearance")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await settle();await reveal_all(fold.choice);check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(fold.choice.get_global_rect()) and fold.scroll.size.y<=130.1,"actual nested foldout and checkbox fit viewport "+str(size.x));await capture("foldout_"+str(size.x))
	await ui_click(fold.choice);await festival_settle();quiet();check(Festival.enabled(demo.state) and demo.state.cozy_progression==account,"native explicit checkbox authors only appearance with zero XP");await key(KEY_ESCAPE);await actual_meshes();var hot:=signature();check(hot.size()>=6,"actual uploaded existing flags, lanterns and two floats have GPU buffers")
	demo.select_tool(2);demo.focus=Vector3(-23.5,.4,-21);demo.zoom=14.;demo.pitch=.75;demo.yaw=.1;demo._update_camera();demo.set_process(false);demo.town.clear_preview();await capture("day_festival");demo.set_process(true)
	while demo.light_phase!=2:demo._toggle_light()
	await festival_settle();var light_ok:=true
	for node:Node3D in lantern_roots():light_ok=light_ok and node.get_meta("market_water_lamp_material").get_shader_parameter("lantern_night")==1.
	var wire:MeshInstance3D=demo.town.ecology_layer.find_child("BuntingLanterns",true,false);check(light_ok and wire!=null and wire.material_override.get_shader_parameter("warmth")==1.25,"actual original float shader and wire lantern shader light at night");await capture("night_festival");demo.yaw=PI-.15;demo._update_camera();await settle();await lamp_pixels();await capture("night_waterfront")
	await key(KEY_Z,true);await festival_settle();check(not Festival.enabled(demo.state) and lantern_roots().is_empty() and demo.town.ecology_layer.find_child("BuntingFlags",true,false)==null,"native Undo removes newly opted-in scenery");await key(KEY_Y,true);await festival_settle();check(signature()==hot,"native Redo restores exact actual GPU geometry")
	page=await journal();await reveal_all(page.action);await ui_click(page.action);await festival_settle();check(page.last_result.get("ok",false) and not demo.state.cozy_progression.enabled and Festival.enabled(demo.state) and signature()==hot,"native economy pause retains qualified choice and GPU")
	await key(KEY_ESCAPE);var prefs:Dictionary=demo.state.creative_settings.presentation.duplicate(true);prefs.automatic_decoration=false;demo._after_edit(demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":prefs}),"history");await festival_settle();check(lantern_roots().is_empty() and demo.town.ecology_layer.find_child("BuntingFlags",true,false)==null and demo.state.creative_settings.presentation[Festival.FIELD],"automatic scenery disable removes actual reused assets while keeping choice")
	await key(KEY_Z,true);await festival_settle();check(signature()==hot,"native global-toggle Undo restores actual GPU")
	check(demo.state.save_city(OUT+"/festival.json").ok,"actual opted-in paused work disk save");var cold:=State.new();check(cold.load_city(OUT+"/festival.json").ok,"independent work cold read");await show(cold,Vector2(-23.5,-21),"庆典冷读");await festival_settle();quiet();check(signature()==hot and not demo.state.cozy_progression.enabled,"independent cold scene reproduces exact GPU and paused qualification")
	page=await journal();await reveal_all(fold.choice);await ui_click(fold.choice);await festival_settle();check(not Festival.enabled(demo.state) and lantern_roots().is_empty(),"native individual opt-out restores original scenery while paused")
	check(pool()==voices,"original bounded audio pool unchanged");check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"earned":earned,"gpu":hot};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FESTIVAL_SCENERY_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)
