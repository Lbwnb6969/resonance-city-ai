extends "res://tools/check_creation_progression_ui_live.gd"
const Lamps=preload("res://scripts/world/city_creation_paired_bridge_lamps.gd")
const LampsFixture=preload("res://tools/fixtures/city_creation_bridge_banks_fixture.gd")
const Earn=preload("res://tools/fixtures/city_creation_flowering_vines_fixture.gd")
func lamp_root()->Node:return demo.get_node_or_null("TraditionScenery/SecondStudyScenery/PairedBridgeLamps")
func mesh_hash()->String:
	if lamp_root()==null:return ""
	var bytes:=PackedByteArray()
	for mesh:MeshInstance3D in lamp_root().find_children("*","MeshInstance3D",true,false):
		for surface in range(mesh.mesh.get_surface_count()):bytes.append_array(var_to_bytes(mesh.mesh.surface_get_arrays(surface)))
	var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(bytes);return digest.finish().hex_encode()
func lamps_settle()->void:
	await settle()
	for i in range(20):await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):push_error("new isolated evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	await show(LampsFixture.build("flat"),Vector2(2,0),"双排桥灯");quiet();demo.life.set_process(true)
	check(demo.state.begin_progression_epoch(OUT+"/first.json").ok,"actual bridge opens level1 account")
	var page:Node=await journal();var option:Node=demo.get_meta("paired_bridge_lamps_page");await reveal(option.choice)
	check(option.choice.disabled and lamp_root()==null,"native J keeps unearned lamp rows unavailable")
	await key(KEY_ESCAPE);var earned:=Earn.earn(demo.state);check(earned.ok,"actual 50 authored buildings earn level2")
	demo._after_edit({"ok":true,"message":"真实建造达到新账期等级2"},"history");await lamps_settle();quiet()
	page=await journal();await reveal(option.choice);check(not option.choice.disabled,"native J exposes earned optional lamps")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await settle();await reveal(option.choice)
		check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(option.choice.get_global_rect()),"lamp control fits "+str(size.x));await capture("control_"+str(size.x))
	await ui_click(option.choice);await lamps_settle();quiet()
	check(option.choice.button_pressed and lamp_root()!=null and lamp_root().get_meta("lamps").size()>=4,"native opt-in builds actual paired rows")
	await key(KEY_ESCAPE);demo.focus=Vector3(2,1.1,0);demo.zoom=12.;demo.pitch=.66;demo.yaw=.7;demo._update_camera();await lamps_settle()
	var before:=mesh_hash();check(not before.is_empty(),"actual merged lamp arrays exist")
	await capture("bridge_day");demo._set_light_phase(2);await lamps_settle();await capture("bridge_night")
	await key(KEY_Z,true);await lamps_settle();quiet();check(lamp_root()==null,"native Undo removes new lamp rows")
	await key(KEY_Y,true);await lamps_settle();quiet();check(mesh_hash()==before,"native Redo restores exact installed geometry")
	page=await journal();await reveal(page.action);await ui_click(page.action);await lamps_settle()
	check(page.last_result.get("ok",false) and not demo.state.cozy_progression.enabled and lamp_root()!=null,"native economy pause retains earned lamps")
	await key(KEY_ESCAPE);var prefs:Dictionary=demo.state.creative_settings.presentation.duplicate();prefs.automatic_decoration=false
	var changed:Dictionary=demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":prefs});demo._after_edit(changed,"history");await lamps_settle()
	check(changed.ok and lamp_root()==null and Lamps.unlocked(demo.state),"global decoration switch preserves entitlement while hiding rows")
	await key(KEY_Z,true);await lamps_settle();check(mesh_hash()==before,"global-switch native Undo restores rows")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot(),"",true,true))).ok,"formal cold restore accepts optional preference")
	await show(cold,Vector2(2,0),"桥灯冷读");quiet();await lamps_settle();check(mesh_hash()==before,"independent cold scene matches incremental installed geometry")
	page=await journal();option=demo.get_meta("paired_bridge_lamps_page");await reveal(option.choice);await ui_click(option.choice);await lamps_settle()
	check(lamp_root()==null and not demo.state.cozy_progression.enabled and demo.state.cozy_progression.level==2,"native individual off never resumes economy or consumes earned level")
	await key(KEY_ESCAPE);await show(LampsFixture.build("flat"),Vector2(2,0),"旧桥无新奖励");quiet();await lamps_settle()
	check(lamp_root()==null and demo.state.cozy_progression.is_empty(),"city switch clears prior epoch lamp geometry")
	check(pool()==voices,"original bounded audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"earned":earned,"mesh_hash":before}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PAIRED_LAMPS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
