extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
const Paving=preload("res://scripts/world/city_creation_road_paving.gd")
func road_arrays(id:String)->Array:
	var mesh:MeshInstance3D=demo.town.road_roots[id].get_node("PathSurface")
	return mesh.mesh.surface_get_arrays(0)
func run()->void:
	OUT="res://验证记录/M71/first"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var original:Dictionary=pool();var city:=State.new();city.initialize_empty()
	city.add_house(Vector2(-35,22));city.add_house(Vector2(-32,22))
	var samples:Array=[]
	for i in range(Paving.UI_STYLES.size()):
		var style:String=Paving.UI_STYLES[i];var z:float=-30.+i*6.
		var points:Array[Vector2]=[Vector2(-32,z),Vector2(-25,z+.8),Vector2(-18,z)]
		var width:float=3.2 if style in ["path","gravel"] else 4.8
		check(city.add_road(points,style,"none",width).ok,"actual new wide surface "+style)
		samples.append({"style":style,"id":str(city.roads[-1].id),"at":Vector2(-25,z+.8),"width":width})
	await show(city,Vector2(-25,-8),"道路铺装与真实宽度");quiet();demo.ui_layer.hide()
	demo.focus=Vector3(-25,.4,-8);demo.zoom=56.;demo.pitch=.95;demo._update_camera();await capture("eight_roads_overview")
	for sample:Dictionary in samples:
		if sample.style not in ["cobble","brick","fanstone","gravel"]:continue
		var arrays:=road_arrays(sample.id);var colors:PackedColorArray=arrays[Mesh.ARRAY_COLOR]
		check(colors.size()>0 and absf(colors[0].b-Paving.code({"style":sample.style}))<.005,"real GPU material id "+sample.style)
		var bounds:AABB=demo.town.road_roots[sample.id].get_node("PathSurface").mesh.get_aabb()
		check(bounds.size.z>sample.width,"real broad curved paving footprint "+sample.style)
		demo.focus=Vector3(sample.at.x,.1,sample.at.y);demo.zoom=7.;demo.pitch=.95;demo.yaw=.15;demo._update_camera()
		for phase:int in [0,1]:demo._set_light_phase(phase);await capture(sample.style+"_phase"+str(phase))
	# Real native seals and two world clicks exercise the actual player flow.
	var empty:=State.new();empty.initialize_empty();await show(empty,Vector2(-25,-20),"新铺装操作");quiet()
	demo.ui_layer.show();demo.select_tool(2)
	await ui_click(demo.tactile_dock.button_for("RoadStyle",5));await ui_click(demo.tactile_dock.button_for("RoadSize",4));await ui_click(demo.tactile_dock.button_for("RoadMode",1))
	check(demo.road_style=="brick" and demo._selected_road_width()==4.8,"native brick and broad width seals")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;demo._update_camera();demo.tactile_dock.refresh();await settle()
		var bubble:Rect2=demo.tactile_dock.bubble_rows.get_global_rect()
		check(bubble.position.x>=0. and bubble.end.x<=size.x and bubble.position.y>=0. and bubble.end.y<=size.y,"all native paving options fit "+str(size))
		await capture("road_palette_"+str(size.x))
	await click_world(Vector2(-30,-20));await motion(Vector2(-18,-20))
	check(is_equal_approx(float(demo.town.road_draft_field.material.get_shader_parameter("surface_pattern")),.5),"actual ground draft shows brick material")
	await capture("brick_wide_actual_preview");await click_world(Vector2(-18,-20));await settle();quiet()
	check(demo.state.roads.size()==1 and demo.state.roads[0].style=="brick" and demo.state.roads[0].width==4.8,"native world clicks commit real broad brick road")
	var authored:Dictionary=demo.state.snapshot();var copied:=State.new()
	check(copied.restore(JSON.parse_string(JSON.stringify(authored))).ok and copied.roads==demo.state.roads,"actual wide road cold JSON exact")
	# A wide new surface crosses real authored water through existing bridges.
	var bridge:=State.new();bridge.initialize_empty();var water:Array[Vector2]=[Vector2(-25,20)]
	check(bridge.add_water(water,6.,"pond").ok,"bridge pond")
	var crossing:Array[Vector2]=[Vector2(-35,20),Vector2(-15,20)]
	check(bridge.add_road(crossing,"fanstone","none",4.8).ok,"new broad paving uses real bridge geometry")
	await show(bridge,Vector2(-25,20),"新铺装桥岸");quiet();demo.ui_layer.hide()
	demo.zoom=24.;demo.pitch=.65;demo._update_camera();await capture("wide_fanstone_bridge")
	check(demo.state.road_profile(demo.state.roads[0]).get("bridge_runs",[]).size()>0,"actual water crossing has bridge runs")
	facts={"samples":samples,"master":await Probe.record(OUT+"/Master.wav",3.1)};check(facts.master.ok,"actual Master no clipping")
	check(pool()==original,"voice pool identity retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save byte identical")
	FileAccess.open(OUT+"/road_paving.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t"))
	print("ROAD_PAVING_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
