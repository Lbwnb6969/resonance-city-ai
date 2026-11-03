extends "res://tools/check_creation_layered_windows_live.gd"
const Guild=preload("res://tests/test_city_creation_stepped_guildhouse.gd")
const GuildPlan=preload("res://scripts/world/city_creation_stepped_guildhouse.gd")
const Signatures=preload("res://tools/fixtures/city_creation_free_signature_fixture.gd")
const Ground=preload("res://scripts/world/city_creation_placed_landmarks.gd")
func _initialize()->void:
	if OS.get_cmdline_user_args().has("--panel-switch-only"):panel_switch_run.call_deferred()
	elif OS.get_cmdline_user_args().has("--round-column-only"):round_column_run.call_deferred()
	else:run.call_deferred()
func round_column_run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1024,768);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await ready_ui();isolate_input();await show(Guild.fixture(1,1,2),Vector2(-28,-20),"真实圆塔屋式");await ready_ui();focus_at(Vector2(-28,-20));await ready_ui();demo.select_tool(0);await roof("h1");var original:Dictionary=demo.state.houses[0].duplicate(true);await choose("round_tower")
	check(not preload("res://scripts/world/city_creation_round_tower_plan.gd").for_house(demo.state.houses[0],demo.state.houses,demo.state.roads).is_empty() and demo.town.house_roots.h1.find_child("RoundTowerPick",true,false)!=null,"native direct round choice publishes eligible cylindrical structure and real round collision")
	var expected:Dictionary=original.duplicate(true);expected.style="round_tower";check(demo.state.houses[0]==expected,"eligible round tower preserves all author rooms, prototype and seed")
	await physics_frame;var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(-28,12,-20),Vector3(-28,.5,-20),1));check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1","visible round tower retains actual physics picking")
	await capture("eligible_round_tower");var gpu:Array=arrays();var file:=OUT+"/round.json";var cold:=State.new();check(demo.state.save_city(file).ok and cold.load_city(file).ok,"eligible round style file cold reads");await show(cold,Vector2(-28,-20),"圆塔冷读");await ready_ui();check(arrays()==gpu,"actual round GPU is identical after file cold read")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"scope":"round_column_only"};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("HOUSE_STYLE_ROUND_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
func panel_switch_run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1024,768);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await ready_ui();isolate_input();await show(Guild.fixture(2,1,2),Vector2(-27,-20),"屋式原型面板互斥");await ready_ui();focus_at(Vector2(-27,-20));await ready_ui();demo.select_tool(0);await roof("h1")
	var before:Dictionary=demo.state.snapshot();var picker:Node=await open_styles();await ui_click(demo.spatial_popover.architecture_button);await ready_ui();var book:Node=Book.obtain(demo)
	check(book.panel.visible and not picker.panel.visible,"native style-to-prototype switch closes previous editor")
	picker=await open_styles();check(picker.panel.visible and not book.panel.visible,"native prototype-to-style switch closes previous editor")
	await ui_click(demo.spatial_popover.inspector.appearance_button);await ready_ui();check(demo.spatial_popover.inspector.panel.visible and not picker.panel.visible,"native details replace style editor")
	await key(KEY_ESCAPE);await ready_ui();picker=await open_styles();await key(KEY_ESCAPE);await ready_ui();check(not picker.panel.visible and demo.state.snapshot()==before,"all editor switches and Escape preserve exact author world")
	await capture("panel_switch_complete");var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"scope":"panel_switch_only"};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("HOUSE_STYLE_SWITCH_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
func ready_ui()->void:
	await settle();demo.life.set_process(false)
	for name:String in ["inspiration_draft","vignette_journey"]:
		var item:Node=demo.get_meta(name);item.set_process(false);item.paper.hide()
func focus_at(at:Vector2,zoom:float=16.)->void:demo.focus=Vector3(at.x,1.,at.y);demo.zoom=zoom;demo.yaw=.45;demo.pitch=.8;demo._update_camera()
func roof(id:String)->void:
	var h:Dictionary=demo.town._house_record(id);var at:Vector2=demo.camera.unproject_position(Vector3(h.origin[0],float(h.get("base_y",0.))+2.,h.origin[1]))
	var move:=InputEventMouseMotion.new();move.device=92;move.position=at;move.global_position=at;root.push_input(move);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
	await ready_ui()
func open_styles()->Node:
	var pop:RefCounted=demo.spatial_popover;await create_timer(.25).timeout;await ready_ui()
	check(pop.style_button.is_visible_in_tree() and root.get_visible_rect().encloses(pop.style_button.get_global_rect()) and "屋式" in pop.style_button.caption,"selected-house style is visible and named")
	await ui_click(pop.style_button);await ready_ui();var picker:Node=demo.get_meta("house_style_picker")
	check(picker.panel.visible and picker.buttons.values().all(func(b):return b.is_visible_in_tree() and root.get_visible_rect().encloses(b.get_global_rect())),"native style stamp opens four reachable direct choices")
	return picker
func choose(style:String)->void:
	var picker:Node=await open_styles();await ui_click(picker.buttons[style]);await ready_ui()
func journey(size:Vector2i)->void:
	root.size=size;var city:RefCounted=Guild.fixture(2,1,2);check(city.set_house_palette("h1",2).ok,"real author palette before style editing");await show(city,Vector2(-27,-20),"可发现屋式");await ready_ui();focus_at(Vector2(-27,-20));await ready_ui();demo.select_tool(0);await roof("h1")
	check(demo.spatial_popover.target_house_id=="h1","native pick opens original selected house")
	var before:Dictionary=demo.state.snapshot();var picker:Node=await open_styles();await capture("choices_"+str(size.x));await key(KEY_ESCAPE);await ready_ui();check(not picker.panel.visible and demo.state.snapshot()==before,"native Escape closes style choices without world edits")
	var original:Dictionary=demo.town._house_record("h1").duplicate(true);var variants:Dictionary={}
	for style:String in ["timber","stone","round_tower","classic"]:
		var prior:Dictionary=demo.town._house_record("h1").duplicate(true);var old_mesh:Array=arrays();await choose(style);var h:Dictionary=demo.town._house_record("h1")
		check(h.get("style","classic")==style and h.architecture==GuildPlan.ID and h.seed==original.seed and h.cells==original.cells and h.palette==2,"direct style retains explicit prototype, seed, rooms and palette "+style)
		check(GuildPlan.active(demo.state,h)==(style in ["classic","stone"]) and demo.town.house_roots.h1.get_meta("stepped_guildhouse",[]).is_empty()==(style in ["timber","round_tower"]),"published guild geometry follows actual style compatibility "+style)
		var actual:Array=arrays();variants[hash(actual)]=true;check(actual!=old_mesh,"actual GPU buffers change after direct style selection "+style);await capture("style_"+str(size.x)+"_"+style)
		await key(KEY_Z,true);await ready_ui();check(demo.town._house_record("h1")==prior and arrays()==old_mesh,"native Undo restores previous complete house and actual GPU "+style)
		await key(KEY_Y,true);await ready_ui();check(demo.town._house_record("h1").get("style","classic")==style and arrays()==actual,"native Redo restores direct style and actual GPU "+style)
	check(variants.size()==4,"all four styles publish different actual buffers")
	picker=await open_styles();await key(KEY_Z,true);await ready_ui();check(picker.panel.visible and picker.buttons.round_tower.active,"open style menu follows native Undo without stale highlight");await key(KEY_Y,true);await ready_ui();check(picker.buttons.classic.active,"open style menu follows native Redo");await key(KEY_ESCAPE)
	await choose("timber");picker=await open_styles();await ui_click(demo.spatial_popover.architecture_button);await ready_ui();var book:Node=Book.obtain(demo);check(book.panel.visible and not picker.panel.visible,"prototype book replaces style menu instead of stacking editors");var selected:Button=book.buttons[GuildPlan.ID];var scroll:ScrollContainer=book.grid.get_parent();scroll.ensure_control_visible(selected);await ready_ui();await ui_click(selected);await ready_ui()
	check(demo.town._house_record("h1").get("style","classic")=="classic" and GuildPlan.active(demo.state,demo.state.houses[0]) and demo.state.houses[0].seed==original.seed,"native reselect of dormant prototype applies existing compatible-style rule")
	var saved:Dictionary=demo.state.snapshot();var hot:Array=arrays();var file:=OUT+"/styles_"+str(size.x)+".json";var cold:=State.new();check(demo.state.save_city(file).ok and cold.load_city(file).ok and cold.snapshot()==saved,"actual disk cold read preserves complete style/prototype world")
	await show(cold,Vector2(-27,-20),"屋式冷读");await ready_ui();check(arrays()==hot,"disk cold read republishes identical actual GPU");focus_at(Vector2(-27,-20));await ready_ui();await roof("h1");picker=await open_styles();check(picker.buttons.classic.active,"cold style menu highlights real saved style");await key(KEY_ESCAPE);demo.spatial_popover.close()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await ready_ui();isolate_input()
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:await journey(size)
	var wide:=State.new();wide.initialize_free();preload("res://scripts/world/city_creation_build_brush.gd").select(wide,"pastoral","townhouse")
	check(wide.add_house_stroke(Vector2(-25,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"}]).ok and wide.add_road([Vector2(-24.1,-24),Vector2(-24.1,-16)] as Array[Vector2],"brick","none").ok,"real protected 1.75m wide passage fixture")
	await show(wide,Vector2(-25,-20),"保留宽穿堂");await ready_ui();focus_at(Vector2(-25,-20));await ready_ui();demo.select_tool(0);await roof("h1");var before:Dictionary=demo.state.snapshot();var gpu:Array=arrays();var picker:Node=await open_styles();await ui_click(picker.buttons.round_tower);await ready_ui()
	check(picker.panel.visible and "宽穿堂" in picker.feedback.text and demo.state.snapshot()==before and arrays()==gpu,"invalid direct style gives actual reason and preserves full world/GPU");await capture("wide_passage_refused");await key(KEY_ESCAPE)
	var signature:=State.new();signature.initialize_free();var at:Vector2=Signatures.site(signature,"bell_keep");var placed:Dictionary=signature.place_signature("bell_keep",at);check(placed.ok,"public signature landmark fixture")
	await show(signature,at,"签名地标屋式保持");await ready_ui();focus_at(at,25.);await ready_ui();demo.select_tool(0);demo.spatial_popover.open_for_house(str(placed.house_id));await ready_ui();before=demo.state.snapshot();check(demo.spatial_popover.style_button.disabled and "专属" in demo.spatial_popover.style_button.tooltip_text,"signature style is explicitly unavailable")
	await ui_click(demo.spatial_popover.style_button);await ready_ui();check(not picker.panel.visible and demo.state.snapshot()==before,"disabled signature style click changes nothing")
	var ground:=State.new();ground.initialize_free();check(ground.add_house(Vector2(-25,-20)).ok and Ground.place(ground,"artisan",Vector2(-35,-20)).ok,"public ground landmark and ordinary house fixture")
	await show(ground,Vector2(-30,-20),"地面地标独立身份");await ready_ui();focus_at(Vector2(-30,-20),25.);await ready_ui();demo.select_tool(0);await roof("h1");picker=await open_styles();before=demo.state.snapshot()
	var node:Node3D=demo.get_meta("street_wonders").ground_landmarks[0];var screen_at:Vector2=demo.camera.unproject_position(node.global_position+Vector3.UP*1.2)
	var motion_event:=InputEventMouseMotion.new();motion_event.device=92;motion_event.position=screen_at;motion_event.global_position=screen_at;root.push_input(motion_event);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=screen_at;event.global_position=screen_at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
	await ready_ui();check(demo.get_meta("ground_landmark_tool").selected=="lm1" and demo.spatial_popover.target_house_id.is_empty() and not picker.panel.visible,"native ground landmark selection withdraws old house/style actions")
	picker.choose("stone");check(demo.state.snapshot()==before,"ground ID and dismissed house picker cannot change former house style");await key(KEY_ESCAPE)
	var legacy:=State.new();legacy.initialize_empty();legacy.add_house(Vector2(-25,-20));await show(legacy,Vector2(-25,-20),"经典屋式编辑");await ready_ui();focus_at(Vector2(-25,-20));await ready_ui();demo.select_tool(0);await roof("h1");await choose("stone");check(demo.state.houses[0].style=="stone" and not demo.state.CreationPolicy.is_free(demo.state),"legacy uses same existing style transaction without policy conversion")
	picker=await open_styles();var other:=State.new();other.initialize_free();other.add_house(Vector2(-25,-20));await show(other,Vector2(-25,-20),"换城不串写");await ready_ui();before=demo.state.snapshot();picker.choose("timber");check(not picker.panel.visible and demo.state.snapshot()==before,"old style context cannot write same house ID in a different city")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("HOUSE_STYLE_PICKER_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
