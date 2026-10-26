extends "res://tools/check_creation_three_road_modes_live.gd"
const Ruler=preload("res://scripts/world/city_creation_road_ruler.gd")
func alt_key(down:bool)->void:
	var event:=InputEventKey.new();event.device=92;event.keycode=KEY_ALT;event.physical_keycode=KEY_ALT;event.pressed=down;event.alt_pressed=down;root.push_input(event);await process_frame
func click_alt(at:Vector2,free:bool)->void:
	await motion(at,free)
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=screen(at);event.global_position=event.position;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;event.alt_pressed=free;root.push_input(event);await process_frame
func fixture()->void:
	var city:=State.new();city.initialize_empty()
	var road:Array[Vector2]=[Vector2(-30,-23),Vector2(-15,-18)]
	check(city.add_road(road).ok,"public real oblique tangent fixture")
	await show(city,Vector2(-24,-17),"夹角与圆弧罗盘");quiet();demo.select_tool(2)
	demo.focus=Vector3(-24,.5,-17);demo.zoom=26.;demo.yaw=0.;demo.pitch=1.;demo._update_camera();await settle()
func assert_exact(preview:Array,label:String)->void:
	await settle();check(demo.state.roads.size()==2 and exact(preview),label)
	var cold:=State.new();check(cold.restore(demo.state.snapshot()).ok and cold.roads==demo.state.roads,"ruler road survives cold load as ordinary saved coordinates")
	var saved:Array=demo.state.roads.duplicate(true);await key(KEY_Z,true);await settle();check(demo.state.roads.size()==1,"native undo removes only the new ruler road")
	await key(KEY_Y,true);await settle();check(demo.state.roads==saved,"native redo keeps both actual roads")
func run()->void:
	OUT="res://验证记录/M60/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();road_tool=demo.get_meta("road_tool")
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var axis:=Vector2(3,1).normalized();var normal:=Vector2(-axis.y,axis.x);var start:=Vector2(-30,-23)+axis*5.
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await fixture();await key(KEY_2)
		await click_world(start+normal*.3)
		check(road_tool.start.distance_to(start)<.002 and Vector2(road_tool.reference.axis).dot(axis)>.99999,"start actually projects to saved segment interior with true oblique tangent")
		var target:=start+axis.rotated(deg_to_rad(88.1))*8.
		await motion(target)
		check(road_tool.ruler.intersection.degrees>89.99 and road_tool.ruler.intersection.degrees<90.01 and road_tool.guide.hint.text.contains("90° 正交"),"native cursor snaps to actual road normal and displays ninety degrees")
		check(absf((demo.road_preview[-1]-road_tool.start).normalized().dot(axis))<.00001 and road_tool.guide.lines.get_surface_count()==1,"actual drawn strip is orthogonal and compass reuses one shared line surface")
		var arrays:Array=road_tool.guide.lines.surface_get_arrays(0)
		check(arrays[Mesh.ARRAY_VERTEX].size()>50 and arrays[Mesh.ARRAY_COLOR].size()==arrays[Mesh.ARRAY_VERTEX].size(),"real ground angle arc/ticks carry vertex color feedback")
		await capture("right_angle_%d"%size.x)
		await alt_key(true);await motion(target,true)
		check(absf(float(road_tool.ruler.intersection.degrees)-88.1)<.02 and not road_tool.ruler.arcs[0].strong,"actual held Alt frees direction with continuous measured degrees")
		await capture("alt_free_%d"%size.x)
		await alt_key(false);await motion(target)
		check(absf(float(road_tool.ruler.intersection.degrees)-90.)<.01,"release Alt restores exact magnetic direction")
		var preview:Array=demo.road_preview.duplicate();await click_world(target)
		await assert_exact(preview,"angle-assisted visible strip matches actual saved road at"+str(size.x))
		await fixture();await key(KEY_2);await click_world(start)
		target=start+axis.rotated(deg_to_rad(73.))*7.;await motion(target)
		check(absf(float(road_tool.ruler.intersection.degrees)-75.)<.01 and not road_tool.ruler.arcs[0].strong,"native fifteen degree step has ordinary warm tick feedback")
		await key(KEY_ESCAPE)
		await fixture();await key(KEY_3);await click_world(start)
		var control:=start+normal*5.;await click_world(control)
		target=control+normal.rotated(deg_to_rad(-88.4))*5.2;await motion(target)
		var curve:Dictionary=road_tool.ruler
		check(curve.circle and absf(float(curve.radius)-5.)<.002 and curve.points.all(func(p):return absf(p.distance_to(curve.center)-5.)<.002),"real equal-arm cursor produces a true5m circle with ninety degree tangents")
		check(road_tool.control.distance_to(control)<.002 and road_tool.guide.hint.text.contains("等臂圆弧") and road_tool.guide.hint.text.contains("R 5.0m") and curve.arcs.size()==2,"actual control is frozen on the incoming road normal with two angle guides")
		await capture("true_circle_%d"%size.x)
		await alt_key(true);await motion(target,true)
		check(not road_tool.ruler.circle and road_tool.guide.hint.text.contains("中点R"),"Alt also releases arm length and true-circle constraint into ordinary Bezier")
		await capture("bezier_free_%d"%size.x)
		await alt_key(false);await motion(target);preview=demo.road_preview.duplicate();await click_world(target)
		await assert_exact(preview,"true-circle preview is saved without endpoint-only resnapping")
		await capture("circle_finished_%d"%size.x)
	# Unequal arms and source removal have honest, independent behavior.
	await fixture();await key(KEY_3);await click_world(start);await click_world(start+normal*5.);await motion(start+normal*5.+axis*8.)
	check(not road_tool.ruler.circle and road_tool.guide.hint.text.contains("中点R"),"unequal native curve uses measured Bezier curvature")
	await key(KEY_ESCAPE);check(road_tool.guide.compass.is_empty() and road_tool.guide.lines.get_surface_count()==0,"cancel clears ground compass and dynamic label")
	await key(KEY_3);await click_world(start)
	await click_alt(start+axis.rotated(deg_to_rad(88.4))*5.,true)
	await alt_key(false);await motion(start+normal*5.+axis*5.)
	check(not road_tool.ruler.arcs[0].strong and road_tool.guide.hint.text.contains("88.4") and not road_tool.guide.hint.text.contains("正交"),"frozen Alt control retains its honest measured angle after magnet is restored")
	await key(KEY_ESCAPE)
	await key(KEY_2);await click_world(start);await motion(start+normal*7.)
	var source:String=road_tool.reference.road_id;demo._after_edit(demo.state.remove_road(source),"road");await settle();await motion(start+normal*7.)
	check(road_tool.reference.is_empty() and road_tool.ruler.arcs.is_empty(),"source deletion clears cached tangent and angle geometry")
	await key(KEY_ESCAPE);demo._after_edit(demo.state.undo(),"history");await settle()
	facts.audio=await Probe.record(OUT+"/Master.wav",3.2);check(facts.audio.ok,"angle authoring retains actual unclipped Master")
	await finish(personal,voices)
