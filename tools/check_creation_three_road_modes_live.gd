extends "res://tools/check_creation_music_experience_live.gd"
var road_tool
class FixtureInput extends Node:
	func _input(event:InputEvent)->void:
		if event.device!=92:get_viewport().set_input_as_handled()
func isolate_input()->void:root.add_child(FixtureInput.new())
func quiet()->void:
	for name:String in ["inspiration_draft","vignette_journey"]:
		var item=demo.get_meta(name);item.poll();item.set_process(false);item.paper.hide()
func screen(at:Vector2)->Vector2:return demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
func motion(at:Vector2,alt:bool=false)->void:
	var event:=InputEventMouseMotion.new();event.device=92;event.position=screen(at);event.global_position=event.position;event.alt_pressed=alt;root.push_input(event);await process_frame
func button(at:Vector2,pressed:bool,index:int=MOUSE_BUTTON_LEFT)->void:
	var event:=InputEventMouseButton.new();event.device=92;event.position=screen(at);event.global_position=event.position;event.pressed=pressed;event.button_index=index;root.push_input(event);await process_frame
func click_world(at:Vector2)->void:
	await motion(at);await button(at,true);await button(at,false)
func key(code:Key,ctrl:bool=false)->void:
	for down:bool in [true,false]:
		var event:=InputEventKey.new();event.device=92;event.keycode=code;event.physical_keycode=code;event.pressed=down;event.ctrl_pressed=ctrl;root.push_input(event);await process_frame
func ui_click(control:Control)->void:
	# The dock springs into place after changing city/tool. Aim at its settled
	# real position instead of clicking a moving button between press/release.
	var deadline:=Time.get_ticks_msec()+1200;var stable:=0;var previous:=control.get_global_rect()
	while stable<3 and Time.get_ticks_msec()<deadline:
		await process_frame;var current:=control.get_global_rect()
		stable=stable+1 if current.position.distance_to(previous.position)<.05 and current.size.distance_to(previous.size)<.05 else 0;previous=current
	var position:Vector2=control.get_global_rect().get_center()
	var motion_event:=InputEventMouseMotion.new();motion_event.device=92;motion_event.position=position;motion_event.global_position=position;root.push_input(motion_event);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=position;event.global_position=position;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func exact(points:Array)->bool:
	var saved:Array=demo.state.roads[-1].points
	if saved.size()!=points.size():return false
	for i in range(saved.size()):
		if Vector2(saved[i][0],saved[i][1])!=points[i]:return false
	return true
func new_city()->void:
	var city:=State.new();city.initialize_empty();await show(city,Vector2(-23,-15),"三模精准修路");quiet();demo.select_tool(2)
	demo.focus=Vector3(-23,.4,-15);demo.zoom=24.;demo.yaw=0.;demo.pitch=1.0;demo._update_camera();await settle()
func run()->void:
	OUT="res://验证记录/M59/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();road_tool=demo.get_meta("road_tool")
	isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await new_city()
		check(demo.tactile_dock.button_for("RoadMode",2).is_visible_in_tree(),"three actual road seals visible at"+str(size.x))
		for mode:int in range(3):
			await new_city();await ui_click(demo.tactile_dock.button_for("RoadMode",mode));await settle()
			check(road_tool.mode==mode,"real mode seal selects "+str(mode))
			var a:=Vector2(-29,-19);var b:=Vector2(-18,-11);var control:=Vector2(-29,-11)
			var revision:int=demo.state.revision;var history:int=demo.state._undo.size()
			if mode>0:await click_world(a)
			else:await motion(a)
			if mode==0:
				await button(a,true)
				for p:Vector2 in [Vector2(-28,-18),Vector2(-26,-17),Vector2(-23,-17.5),Vector2(-20,-14),b]:await motion(p)
			elif mode==1:await motion(b)
			else:
				await motion(control);check(demo.state.roads.is_empty(),"control direction preview does not author a road")
				await click_world(control);await motion(b)
			check(road_tool.active() and demo.state.revision==revision and demo.state._undo.size()==history,"anchors and live preview do not alter history")
			check(road_tool.guide.root.visible and road_tool.guide.hint.is_visible_in_tree() and road_tool.guide.dots.visible_instance_count==(3 if mode==2 else 2),"actual gold anchors, live endpoint and current instruction are drawn")
			var preview:Array=demo.road_preview.duplicate();await capture("preview_%d_%d"%[size.x,mode])
			if mode==0:await button(b,false)
			else:await click_world(b)
			await settle();check(demo.state.roads.size()==1 and exact(preview),"visible path equals committed ordinary arrays for mode"+str(mode))
			check(not road_tool.active() and not demo.road_drawing and not road_tool.guide.root.visible,"completion clears every transient anchor")
			var saved:Dictionary=demo.state.snapshot();var cold:=State.new();check(cold.restore(saved).ok and cold.roads==demo.state.roads,"real saved road cold restores")
			await key(KEY_Z,true);await settle();check(demo.state.roads.is_empty(),"native Undo removes the whole road")
			await key(KEY_Y,true);await settle();check(demo.state.roads==saved.roads,"native Redo restores the whole road")
			await capture("finished_%d_%d"%[size.x,mode])
	# Default click enters precise mode; Tab retains the first anchor.
	await new_city();await key(KEY_1);check(road_tool.mode==0 and demo.tool==2,"1 selects freehand in the road context")
	var a:=Vector2(-29,-19);var b:=Vector2(-18,-11);var control:=Vector2(-29,-11)
	await click_world(a);check(road_tool.phase=="end" and road_tool.effective==1,"short click in default freehand becomes a precise anchor")
	check(demo.tactile_dock.button_for("RoadMode",1).active,"automatic straight preview highlights the visible straight stamp")
	await key(KEY_TAB);check(road_tool.effective==2 and road_tool.start.distance_to(a)<.002,"Tab changes to curve without moving the first anchor")
	check(demo.tactile_dock.button_for("RoadMode",2).active,"Tab curve preview highlights the actual curve stamp")
	await click_world(control);await motion(b);var bezier:Array=demo.road_preview.duplicate()
	await key(KEY_TAB);check(road_tool.effective==1 and road_tool.start.distance_to(a)<.002,"Tab can return to a straight preview")
	await key(KEY_TAB);check(road_tool.effective==2 and demo.road_preview==bezier,"Tab restores the already fixed control point")
	await key(KEY_ESCAPE);check(not road_tool.active() and demo.state.roads.is_empty(),"native Esc cancels all anchors without authoring")
	check(demo.tactile_dock.button_for("RoadMode",0).active,"cancellation restores the selected default freehand stamp")
	await key(KEY_3);await click_world(a);await click_world(control);await button(b,true,MOUSE_BUTTON_RIGHT);await button(b,false,MOUSE_BUTTON_RIGHT)
	check(not road_tool.active() and not demo.orbiting and demo.state.roads.is_empty(),"right-click cancels a ruler draft without beginning camera orbit")
	# The old held straight/Space/right-lock gesture remains one transaction.
	await key(KEY_2);await motion(a);await button(a,true);await motion(control);await key(KEY_SPACE)
	await motion(b);await button(b,true,MOUSE_BUTTON_RIGHT);await button(b,false,MOUSE_BUTTON_RIGHT)
	await motion(Vector2(-16,-14));var chain:Array=demo.road_preview.duplicate();await button(Vector2(-16,-14),false);await settle()
	check(demo.state.roads.size()==1 and exact(chain) and chain.size()==4,"legacy dragged straight chain retains sharp locks and commits once")
	var id:String=demo.state.roads[0].id;var original:Array=demo.state.roads[0].points.duplicate(true)
	demo.select_tool(0);await key(KEY_3);check(demo.tool==2,"global3 continues to select road outside the road context")
	# Retrace an actual saved old road, using the existing upgrade matching.
	await ui_click(demo.tactile_dock.button_for("RoadStyle",2));await settle()
	await motion(a);await button(a,true);await motion(control);await key(KEY_SPACE);await motion(b);await key(KEY_SPACE);await motion(Vector2(-16,-14));await button(Vector2(-16,-14),false);await settle()
	check(demo.state.roads.size()==1 and demo.state.roads[0].id==id and demo.state.roads[0].points==original and demo.state.roads[0].style=="avenue","retrace upgrades original road identity and preserves exact old coordinates")
	facts.modes={"count":3,"resolutions":[1440,1024],"saved":demo.state.roads.duplicate(true)}
	facts.audio=await Probe.record(OUT+"/road_Master.wav",3.2);check(facts.audio.ok,"actual road edits preserve healthy Master audio")
	await finish(personal,voices)
