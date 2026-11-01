extends "res://tools/check_creation_progression_ui_live.gd"
const Vines=preload("res://scripts/world/city_creation_flowering_vines.gd")
const VinesFixture=preload("res://tools/fixtures/city_creation_flowering_vines_fixture.gd")
func flower_root()->Node:
	return demo.get_node_or_null("TraditionScenery/SecondStudyScenery/FloweringWisteria")
func mesh_hash()->String:
	var bytes:=PackedByteArray()
	if flower_root()==null:return ""
	for mesh:MeshInstance3D in flower_root().find_children("*","MeshInstance3D",true,false):
		for surface in range(mesh.mesh.get_surface_count()):bytes.append_array(var_to_bytes(mesh.mesh.surface_get_arrays(surface)))
	var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(bytes);return digest.finish().hex_encode()
func flowers_settle()->void:
	await settle()
	for i in range(20):await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):push_error("new isolated evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	await show(VinesFixture.seed(),Vector2(-23,-18),"开花紫藤");quiet();demo.life.set_process(true)
	check(demo.state.begin_progression_epoch(OUT+"/first.json").ok,"actual host opens new level1 account")
	var page:Node=await journal();var option:Node=demo.get_meta("flowering_vines_page");await reveal(option.choice)
	check(option.choice.disabled and not option.choice.button_pressed and flower_root()==null,"native J shows new flowers unavailable at level1")
	await key(KEY_ESCAPE)
	var earned:=VinesFixture.earn(demo.state);check(earned.ok and demo.state.houses.size()==1,"actual 50 build/remove transactions earn retained level2")
	demo._after_edit({"ok":true,"message":"真实建造达到新账期等级2"},"history");await flowers_settle();quiet()
	page=await journal();await reveal(option.choice);check(not option.choice.disabled,"native J enables genuinely earned variant")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await settle();await reveal(option.choice)
		check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(option.choice.get_global_rect()),"native variant checkbox fits "+str(size.x))
		await capture("earned_control_"+str(size.x))
	await ui_click(option.choice);await flowers_settle();quiet()
	check(option.choice.button_pressed and flower_root()!=null and flower_root().get_meta("clusters").size()==10,"native opt-in builds ten actual flower clusters")
	await capture("earned_variant_control");await key(KEY_ESCAPE)
	demo.focus=Vector3(-23.2,1.,-18.8);demo.zoom=8.;demo.pitch=.65;demo.yaw=.2;demo._update_camera();await flowers_settle()
	var before:=mesh_hash();check(not before.is_empty(),"actual merged flower mesh arrays available")
	await capture("flowering_closeup")
	await key(KEY_Z,true);await flowers_settle();quiet();check(flower_root()==null,"native Undo removes opted-in flowers")
	await key(KEY_Y,true);await flowers_settle();quiet();check(mesh_hash()==before,"native Redo restores exact installed geometry")
	page=await journal();await reveal(page.action);await ui_click(page.action);await flowers_settle()
	check(page.last_result.get("ok",false) and not demo.state.cozy_progression.enabled and flower_root()!=null,"native economy pause retains earned appearance")
	await key(KEY_ESCAPE)
	var prefs:Dictionary=demo.state.creative_settings.presentation.duplicate();prefs.automatic_decoration=false
	var changed:Dictionary=demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":prefs});demo._after_edit(changed,"history");await flowers_settle()
	check(changed.ok and flower_root()==null and Vines.unlocked(demo.state),"global decoration switch hides flowers without revoking earned appearance")
	await key(KEY_Z,true);await flowers_settle();check(mesh_hash()==before,"native global-switch Undo restores exact flowers")
	var snapshot:Dictionary=demo.state.snapshot();var cold:=State.new()
	check(cold.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true))).ok,"formal cold restore accepts optional saved preference")
	await show(cold,Vector2(-23,-18),"紫藤冷读");quiet();await flowers_settle()
	check(mesh_hash()==before,"independent cold publication matches incremental flowers")
	page=await journal();option=demo.get_meta("flowering_vines_page");await reveal(option.choice);await ui_click(option.choice);await flowers_settle()
	check(flower_root()==null and not Vines.plans(demo.state).size(),"native individual switch removes flowers")
	check(not demo.state.cozy_progression.enabled and demo.state.cozy_progression.level==2,"appearance switch never resumes economy or consumes earned level")
	check(pool()==voices,"original music pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"earned":earned,"mesh_hash":before}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FLOWERING_VINES_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
