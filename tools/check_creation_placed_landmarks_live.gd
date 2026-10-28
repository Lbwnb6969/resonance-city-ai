extends "res://tools/check_creation_reference_music_live.gd"
const Ground=preload("res://scripts/world/city_creation_placed_landmarks.gd")
const Fixture=preload("res://tests/test_city_creation_placed_landmarks.gd")
func reveal(control:Control)->void:
	var parent:Node=control.get_parent()
	while parent!=null and not parent is ScrollContainer:parent=parent.get_parent()
	if parent is ScrollContainer:parent.ensure_control_visible(control)
	await settle()
func edit(result:Dictionary)->void:
	check(result.ok,"actual public transaction");demo._after_edit(result,"history");await settle();quiet()
func click_body(node:Node3D)->void:
	var p:Vector2=demo.camera.unproject_position(node.global_position+Vector3.UP*1.2)
	var motion_event:=InputEventMouseMotion.new();motion_event.device=92;motion_event.position=p;motion_event.global_position=p;root.push_input(motion_event);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=p;event.global_position=p;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func run()->void:
	OUT="res://验证记录/M81/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	var city:=Fixture.fixture();await show(city,Vector2(-30,-28),"四家族传世蓝图");quiet()
	var tool:Node=demo.get_meta("ground_landmark_tool");var scenery:Node3D=demo.get_meta("street_wonders")
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source")=="precompiled","actual GL and unchanged production bank")
	for family:String in Ground.SIZES:
		var at:=Fixture.empty_site(demo.state,family);demo.focus=Vector3(at.x,1.3,at.y);demo.zoom=16.;demo.yaw=.22;demo.pitch=.8;demo._update_camera();await settle()
		demo.signatures.open_panel();await settle();await reveal(tool.buttons[family]);await ui_click(tool.buttons[family]);await settle()
		check(tool.placing==family,"real catalogue button begins "+family)
		await motion(at);await key(KEY_E);await motion(at)
		check(is_equal_approx(tool.yaw,PI*.5) and tool.candidate.get("ok",false),"real key rotates footprint preview "+family)
		await click_world(at);await settle();quiet()
		check(demo.state.placed_landmarks.any(func(row):return row.blueprint==family),"real world click places "+family)
		check(await wait_for(func():return scenery.ground_landmarks.size()==demo.state.placed_landmarks.size()),"real mesh publishes "+family)
		var nodes:Array=scenery.ground_landmarks.filter(func(node):return node.get_meta("plan").blueprint==family)
		if nodes.is_empty():continue
		var node:Node3D=nodes[0];var id:String=node.get_meta("plan").id
		await click_body(node);check(tool.selected==id and tool.selection.is_visible_in_tree(),"actual body picking opens ground actions "+family)
		check(node.has_meta("entrance") and node.get_meta("footprint")==Ground.footprint(Ground.row(demo.state,id)),"physical stairs footprint and entry agree with entity "+family)
		await capture(family+"_placed")
		await ui_click(tool.selection.get_child(0).get_child(2));await settle()
		check(is_equal_approx(float(Ground.row(demo.state,id).yaw),-PI),"actual rotate action is a transaction "+family)
		await edit(demo.state.undo());check(is_equal_approx(float(Ground.row(demo.state,id).yaw),PI*.5),"real Undo restores previous orientation "+family)
		await edit(demo.state.redo())
		if family=="riverbank":
			tool.selected=id;tool.refresh();await ui_click(tool.selection.get_child(0).get_child(1));await settle()
			var moved:=at+Vector2(0,-6.)
			await motion(moved);check(tool.candidate.get("ok",false),"real move preview accepts clear destination")
			await click_world(moved);await settle();quiet();check(Ground.position(Ground.row(demo.state,id))==moved,"real move action preserves landmark ID")
			await edit(demo.state.undo());await settle()
			tool.selected=id;tool.refresh();await ui_click(tool.selection.get_child(0).get_child(3));await settle();quiet()
			check(Ground.row(demo.state,id).is_empty() and Ground.Legacy.unlocked(demo.state).has(family),"real recycle removes only entity and keeps earned blueprint")
			await edit(demo.state.undo())
		tool.selected="";tool.refresh()
	check(scenery.crowns.is_empty() and scenery.ground_landmarks.size()==4,"free city shows four ground landmarks and no generated crowns")
	var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/four_landmarks.json").ok,"actual four-landmark disk save")
	var cold:=State.new();check(cold.load_city(OUT+"/four_landmarks.json").ok and cold.placed_landmarks==demo.state.placed_landmarks,"cold disk entities match all four families")
	await show(cold,Vector2(-30,-18),"地标冷读");quiet();scenery=demo.get_meta("street_wonders")
	check(await wait_for(func():return scenery.ground_landmarks.size()==4),"cold scene actually reconstructs all four ground models")
	for dimensions:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=dimensions;demo.signatures.open_panel();await settle();await reveal(tool.buttons.artisan)
		check(Rect2(Vector2.ZERO,Vector2(dimensions)).has_point(tool.buttons.artisan.get_global_rect().get_center()),"blueprint catalogue visible at "+str(dimensions.x));await capture("catalogue_"+str(dimensions.x));await key(KEY_ESCAPE)
	var prior:Dictionary=demo.state.creative_settings.presentation.duplicate();var hidden:=prior.duplicate();hidden.automatic_decoration=false
	var support:Dictionary=demo.state.get_meta("street_wonder_plan",{}).get("support",{}).duplicate()
	await edit(demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":hidden}))
	check(await wait_for(func():return scenery.ground_landmarks.size()==4) and demo.state.PlacedLandmarks.row(demo.state,str(saved.placed_landmarks[0].id)).size()>0,"hiding automatic decoration keeps actual authored entities")
	check(preload("res://scripts/world/city_creation_street_wonder_plan.gd").derive(demo.state).support==support,"presentation does not change actual supply support")
	await edit(demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":prior}));await key(KEY_ESCAPE);demo.ui_layer.hide()
	await record_recipe("ground_landmarks",8.)
	check(pool()==voices and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"original bounded voice pool and personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"entities":demo.state.placed_landmarks,"bank_signature":demo.music.BankCache.source_signature()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("PLACED_LANDMARKS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)
