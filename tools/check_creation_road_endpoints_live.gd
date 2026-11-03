extends "res://tools/check_creation_three_road_modes_live.gd"
const EndpointPlan=preload("res://scripts/world/city_creation_road_endpoint_plan.gd")
func publish_seed()->void:
	var city:=State.new();city.initialize_free();city.add_road([Vector2(-33,-14),Vector2(-17,-14)],"path","none")
	await show(city,Vector2(-25,-20),"三画法端点意图");quiet();demo.select_tool(2)
	demo.focus=Vector3(-25,.5,-20);demo.zoom=24.;demo.yaw=0.;demo.pitch=1.;demo._update_camera();await settle()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();road_tool=demo.get_meta("road_tool")
	var a:=Vector2(-28,-25);var b:=Vector2(-25,-14.7);var control:=Vector2(-22,-25)
	for mode:int in range(3):
		await publish_seed();await key(KEY_1+mode);await settle()
		var before:Dictionary=demo.state.snapshot()
		if mode==0:
			await motion(a);await button(a,true)
			for p:Vector2 in [Vector2(-27,-22),Vector2(-26,-19),b]:await motion(p)
		else:
			await click_world(a)
			if mode==2:await click_world(control)
			await motion(b)
		check(demo.state.snapshot()==before and road_tool.valid.ok,"mode %d candidate is read-only and valid"%mode)
		check(absf(demo.road_preview[-1].y+14.)<.001 and road_tool.closure.get("kind","")=="segment","mode %d reaches saved road segment"%mode)
		check(road_tool.guide.hint.text.contains("接入"),"mode %d visibly names target intent"%mode)
		var preview:Array=demo.road_preview.duplicate();await capture("preview_"+str(mode))
		if mode==0:await button(b,false)
		else:await click_world(b)
		await settle();check(demo.state.roads.size()==2 and exact(preview),"mode %d commits the exact displayed curve"%mode)
		var saved:Dictionary=demo.state.snapshot();await key(KEY_Z,true);await settle()
		check(demo.state.roads==before.roads,"mode %d native Undo keeps reference road"%mode)
		await key(KEY_Y,true);await settle();check(demo.state.roads==saved.roads,"mode %d native Redo keeps author coordinates"%mode)
		var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok and cold.roads==demo.state.roads,"mode %d cold author data matches"%mode)
		await key(KEY_2);await click_world(Vector2(-25,-14.4));check(absf(road_tool.start.y+14.)<.001,"same resolver snaps start in straight mode");await key(KEY_ESCAPE)
	await publish_seed();await key(KEY_3);await click_world(Vector2(-30,-19));await click_world(Vector2(-25,-19));await motion(Vector2(-25,-14.4))
	check(road_tool.ruler.get("circle",false) and "等臂圆弧" in road_tool.guide.hint.text,"actual circular geometry displays its own radius label")
	await capture("circle_label");await key(KEY_ESCAPE)
	# Alt suppresses endpoint assistance while retaining its existing gesture ownership.
	await publish_seed();await key(KEY_2);await click_world(a);await motion(b,true)
	check(road_tool.closure.is_empty() and demo.road_preview[-1].distance_to(b)<.005,"Alt preview retains the actual unsnapped endpoint")
	await key(KEY_ESCAPE);check(demo.state.roads.size()==1,"cancel leaves no author road or consumed ID")
	# Actual exposed door, not a road-tag approximation.
	var door_city:=State.new();door_city.initialize_free();door_city.add_house(Vector2(-25,-14))
	await show(door_city,Vector2(-25,-18),"门阶目标");quiet();demo.select_tool(2);await key(KEY_2)
	demo.focus=Vector3(-25,.5,-10);demo.zoom=22.;demo.yaw=0.;demo.pitch=1.;demo._update_camera();await settle()
	var entry:Dictionary=demo.state.house_entrances(str(demo.state.houses[0].id))[0]
	var raw:Vector2=entry.at+Vector2(.2,.2);var from:Vector2=entry.at+Vector2(0,6.)
	await click_world(from);await motion(raw)
	check(road_tool.valid.ok and road_tool.closure.get("kind","")=="door" and demo.road_preview[-1].distance_to(entry.wall_at+entry.outward*demo.state.Frontage.CONTACT)<.001,"native straight preview identifies the exposed door")
	root.size=Vector2i(1024,768);await settle();await motion(raw);await capture("door_1024");var shown:Array=demo.road_preview.duplicate()
	await click_world(raw);await settle();check(demo.state.roads.size()==1 and exact(shown),"native door road uses the displayed complete line")
	check(demo.state.house_entrances(str(demo.state.houses[0].id)).any(func(e):return e.active and str(e.road_id)==str(demo.state.roads[0].id)),"formal frontage derives a real active entrance from committed road")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ROAD_ENDPOINTS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
