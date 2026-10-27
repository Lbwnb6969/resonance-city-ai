extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
const Decor=preload("res://scripts/world/city_creation_road_decoration.gd")
func records(id:String)->Array:
	var details:Node=demo.town.road_roots[id].get_node_or_null("PromenadeDetails")
	return [] if details==null else details.get_meta("records")
func publish(result:Dictionary,label:String)->void:
	check(result.ok,label);demo._after_edit(result,"road");await settle();quiet()
func run()->void:
	OUT="res://验证记录/M72/first"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var original:Dictionary=pool();var city:=State.new();city.initialize_empty()
	city.add_house(Vector2(-35,22));city.add_house(Vector2(-32,22))
	for i in range(Decor.IDS.size()):
		var z:float=-29.+i*6.;var points:Array[Vector2]=[Vector2(-34,z),Vector2(-25,z+.7),Vector2(-16,z)]
		check(city.add_road(points,"brick","none",2.1,Decor.IDS[i]).ok,"same brick paving, independent "+Decor.IDS[i])
	var cross:Array[Vector2]=[Vector2(-25,-35),Vector2(-25,7)];city.add_road(cross,"path","none",1.25,"none")
	await show(city,Vector2(-25,-10),"铺装与街具独立");quiet();demo.ui_layer.hide()
	var styles:Array=[]
	for i in range(Decor.IDS.size()):
		var choice:String=Decor.IDS[i];var id:String="r"+str(i+1);var furniture:Array=records(id)
		check(furniture.is_empty() if choice in ["none","legacy"] else not furniture.is_empty(),"actual published furniture "+choice)
		for record:Dictionary in furniture:check(demo.town.promenade._clear(demo.state,demo.state.roads[i],record.at,.65 if record.kind=="bench" else .2),"actual crossroad clearance "+choice)
		styles.append({"choice":choice,"kinds":furniture.map(func(row):return row.kind),"count":furniture.size()})
		demo.focus=Vector3(-29,.2,-28.3+i*6.);demo.zoom=11.;demo.pitch=.75;demo.yaw=.1;demo._set_light_phase(0);demo._update_camera();await capture(choice+"_day")
		if choice=="lamps":demo._set_light_phase(2);await capture("lamps_night")
	var empty:=State.new();empty.initialize_empty();await show(empty,Vector2(-25,-20),"独立街具真实操作");quiet();demo.ui_layer.show();demo.select_tool(2)
	await ui_click(demo.tactile_dock.button_for("RoadStyle",7));await ui_click(demo.tactile_dock.button_for("RoadSize",2));await ui_click(demo.tactile_dock.button_for("RoadDecoration",5));await ui_click(demo.tactile_dock.button_for("RoadMode",2))
	check(demo.road_style=="gravel" and demo._selected_road_width()==1.25 and Decor.selected(demo)=="benches","native paving width and bench choices are independent")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;demo._update_camera();demo.tactile_dock.refresh();await settle()
		var rect:Rect2=demo.tactile_dock.bubble_rows.get_global_rect();check(rect.position.x>=0 and rect.end.x<=size.x and rect.position.y>=0 and rect.end.y<=size.y,"four palette rows fit "+str(size))
		await capture("palette_"+str(size.x))
	# Keep all three authored anchors above the four-row palette at 1024px.
	demo.focus=Vector3(-25,.4,-20);demo.zoom=24.;demo.yaw=0.;demo.pitch=1.;demo._update_camera();await settle()
	await click_world(Vector2(-32,-23));await click_world(Vector2(-25,-27));await motion(Vector2(-18,-23));await capture("actual_curve_preview");await click_world(Vector2(-18,-23));await settle();quiet()
	check(demo.state.roads.size()==1 and demo.state.roads[0].get("decoration","")=="benches" and demo.state.roads[0].get("style","")=="gravel" and demo.state.roads[0].width==1.25,"actual three-click curve authors only selected combination")
	var road:Dictionary=demo.state.roads[0].duplicate(true);var line:Array[Vector2]=[]
	for point:Array in road.points:line.append(Vector2(point[0],point[1]))
	check(not records(road.id).is_empty() and records(road.id).all(func(row):return row.kind=="bench"),"actual drawn curve publishes true bench slat geometry")
	await ui_click(demo.tactile_dock.button_for("RoadDecoration",1))
	await publish(demo.state.add_road(line,"gravel","none",1.25,Decor.selected(demo)),"replace only furniture")
	check(records(road.id).is_empty() and demo.state.roads[0].points==road.points and demo.state.roads[0].width==road.width,"none removes furniture while preserving curve and width")
	await publish(demo.state.undo(),"Undo only furniture");check(demo.state.roads[0]==road and not records(road.id).is_empty(),"Undo restores exact bench record and production meshes")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot()))).ok and cold.roads==demo.state.roads,"independent furniture cold JSON exact")
	demo.ui_layer.hide();demo._set_light_phase(0);await capture("actual_gravel_curve_benches")
	var hairpin:=State.new();hairpin.initialize_empty()
	var turn:Array[Vector2]=[Vector2(-30,-20),Vector2(-20,-20),Vector2(-20,-17),Vector2(-30,-17)]
	hairpin.add_road(turn,"gravel","none",1.25,"benches")
	await show(hairpin,Vector2(-25,-19),"锐弯长椅净空");quiet();demo.ui_layer.hide();demo.zoom=15.;demo.yaw=0.;demo.pitch=1.;demo._update_camera()
	check(not records("r1").is_empty(),"sharp bend retains unobstructed benches")
	for row:Dictionary in records("r1"):
		for x:float in [-.28,.28]:
			for z:float in [-.55,.55]:
				var at:Vector2=row.at+Vector2(cos(row.yaw)*x+sin(row.yaw)*z,-sin(row.yaw)*x+cos(row.yaw)*z)
				for i in range(turn.size()-1):check(at.distance_to(Geometry2D.get_closest_point_to_segment(at,turn[i],turn[i+1]))>=.625,"published sharp bend bench corner clear of actual road")
	await capture("hairpin_bench_clearance")
	var bridge:=State.new();bridge.initialize_empty();var pond:Array[Vector2]=[Vector2(-25,20)];bridge.add_water(pond,6.,"pond")
	var crossing:Array[Vector2]=[Vector2(-35,20),Vector2(-15,20)];bridge.add_road(crossing,"brick","none",4.8,"lamps")
	bridge.add_house(Vector2(-35,27));bridge.add_house(Vector2(-32,27))
	await show(bridge,Vector2(-25,20),"宽桥独立街具");quiet();demo.ui_layer.hide()
	var profile:Dictionary=demo.state.road_profile(demo.state.roads[0]);var bridge_signature:Variant=profile.signature
	check(not profile.bridge_runs.is_empty() and not records("r1").is_empty(),"real broad arch bridge and bank lamps published")
	for record:Dictionary in records("r1"):check(demo.state.water_clearance(record.at)>.65,"actual bank furniture stays clear of water")
	demo.zoom=25.;demo.pitch=.65;demo._update_camera();await capture("bridge_lamps_day")
	await publish(demo.state.add_road(crossing,"brick","none",0.,"none"),"bridge furniture removed with original width brush")
	check(records("r1").is_empty() and demo.state.roads[0].width==4.8 and demo.state.roads[0].sized and demo.state.road_profile(demo.state.roads[0]).signature==bridge_signature,"original-width brush preserves broad bridge shape and metadata")
	await publish(demo.state.undo(),"bridge furniture Undo")
	check(not records("r1").is_empty() and demo.state.road_profile(demo.state.roads[0]).signature==bridge_signature,"bridge Undo restores lamps and same walking deck")
	demo._set_light_phase(2);await capture("bridge_lamps_night")
	var times:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):await process_frame;var now:=Time.get_ticks_usec();times.append((now-last)/1000.);last=now
	times.sort();facts={"styles":styles,"frames":{"p95_ms":times[113],"max_ms":times[-1]},"master":await Probe.record(OUT+"/Master.wav",3.1)};check(facts.master.ok,"actual Master zero clipping")
	check(pool()==original,"voice identities retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save byte identical")
	FileAccess.open(OUT+"/road_decoration.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t"));print("ROAD_DECORATION_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
