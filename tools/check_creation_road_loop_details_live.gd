extends "res://tools/check_creation_road_closure_live.gd"
const LoopFaces=preload("res://scripts/world/city_creation_road_loop_faces.gd")
func run()->void:
	OUT="res://验证记录/M61/details"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();road_tool=demo.get_meta("road_tool");isolate_input()
	var voices:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():voices.append(p.get_instance_id())
	var circle_city:=State.new();circle_city.initialize_empty()
	check(circle_city.add_road([Vector2(-28,-15),Vector2(-20,-15)]).ok,"actual horizontal target for circle lock")
	await show(circle_city,Vector2(-26,-18),"真圆曲路落锁");quiet();demo.select_tool(2);await key(KEY_3)
	demo.focus=Vector3(-26,.5,-18);demo.zoom=20.;demo.yaw=0.;demo.pitch=.8;demo._update_camera();await settle()
	await click_world(Vector2(-30,-20));await click_world(Vector2(-30,-15));await motion(Vector2(-25.1,-15.3))
	check(not road_tool.closure.is_empty() and road_tool.ruler.circle and road_tool.guide.hint.text.contains("R 5.0m") and not road_tool.guide.hint.text.contains("中点R"),"actual closed true circle retains its real5m radius label")
	await capture("true_circle_lock_radius");await key(KEY_ESCAPE)
	var city:=State.new();city.initialize_empty()
	var anchors:Array[Vector2]=[Vector2(-30,-20),Vector2(-25,-25),Vector2(-20,-20),Vector2(-25,-15),Vector2(-30,-20)]
	var controls:Array[Vector2]=[Vector2(-30,-25),Vector2(-20,-25),Vector2(-20,-15),Vector2(-30,-15)]
	for i in range(3):
		var path:Array[Vector2]=Ruler.curve(anchors[i],controls[i],anchors[i+1],true).points
		check(city.add_road(path,"promenade","none").ok,"public existing curved street segment")
	await show(city,Vector2(-25,-20),"弯街环心涌泉");quiet();demo.select_tool(2);await key(KEY_3)
	demo.focus=Vector3(-25,.5,-20);demo.zoom=23.;demo.yaw=.2;demo.pitch=.8;demo._update_camera();await settle()
	await click_world(anchors[3]);await click_alt(controls[3],true);await alt_key(false);await motion(anchors[4]+Vector2(-.2,.1))
	check(not road_tool.closure.is_empty() and demo.road_preview[-1].distance_to(anchors[4])<.002,"native final curve closes to the existing curved street endpoint")
	var preview:Array=demo.road_preview.duplicate();var actual_control:Vector2=road_tool.ruler.control
	check(actual_control.distance_to(road_tool.control)<1.8 and road_tool.guide.dots.get_instance_transform(1).origin.distance_to(road_tool.guide.point(actual_control))<.002,"tangent-adjusted actual control and gold guide agree")
	await capture("curved_closure_preview")
	facts.curve_audio=await record_close(anchors[4]+Vector2(-.2,.1),OUT+"/curved_close_Master.wav");await settle()
	var plan:Dictionary=Wonder.derive(demo.state)
	check(demo.state.roads.size()==4 and exact(preview) and plan.loops.size()==1 and float(plan.loops[0].area)>75. and float(plan.loops[0].area)<82.,"four actual curved roads enclose a real near circular78sqm face")
	var fountain:Node3D
	for node:Node3D in demo.get_meta("street_wonders").layers:
		if node.name.begins_with("LoopHeart_"):fountain=node;break
	check(fountain!=null and fountain.has_node("LoopFountainCollision"),"derived curved-loop heart has real world collision")
	if fountain!=null:
		var at:Vector3=fountain.position
		var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3.UP*4.,at-Vector3.UP,1))
		check(not hit.is_empty() and hit.collider==fountain.get_node("LoopFountainCollision"),"actual ray hits the loop fountain collision")
		var town:Dictionary=demo.state.add_house(Vector2(-32,-16));check(town.ok,"real nearby home around the loop")
		demo._after_edit(town,"room");await settle()
		check(Wonder.supports(demo.state,town.house_id),"clear actual loop scenery participates in existing workshop landscape support")
		demo.focus=at+Vector3.UP*.25;demo.zoom=8.;demo.pitch=.45;demo.yaw=.25;demo._update_camera();await capture("two_tier_loop_fountain_close")
	# Real creek crossing remains supported at the existing bridge port.
	await simple_city(false)
	var river:Array[Vector2]=[Vector2(-4,3),Vector2(10,3)]
	var bridge:Dictionary=demo.state.add_road(river,"promenade");check(bridge.ok,"real complete base river bridge")
	demo._after_edit(bridge,"road");await settle();demo.select_tool(2);await key(KEY_2)
	demo.focus=Vector3(-5,.4,1);demo.zoom=23.;demo.pitch=.8;demo._update_camera();await settle()
	await click_world(Vector2(-9,-3));await motion(Vector2(-4.3,2.7))
	check(not road_tool.closure.is_empty() and Vector2(road_tool.closure.at).distance_to(Vector2(-4,3))<.003,"actual bridge dry abutment is also a valid exact road endpoint target")
	preview=demo.road_preview.duplicate();await capture("bridge_port_closure");await click_world(Vector2(-4.3,2.7));await settle()
	check(demo.state.roads.size()==2 and exact(preview) and demo.state.roads[0].bridge,"bridge port closure preserves original actual wet span")
	await finish(personal,voices)
