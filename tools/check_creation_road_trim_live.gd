extends "res://tools/check_creation_three_road_modes_live.gd"
const Trim=preload("res://scripts/world/city_creation_road_trim.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
var cutter
func shift_motion(at:Vector2,alt:bool=false)->void:
	var event:=InputEventMouseMotion.new();event.device=92;event.position=screen(at);event.global_position=event.position;event.shift_pressed=true;event.alt_pressed=alt;root.push_input(event);await process_frame
func shift_click(at:Vector2,alt:bool=false)->void:
	await shift_motion(at,alt)
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=screen(at);event.global_position=event.position;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;event.shift_pressed=true;event.alt_pressed=alt;root.push_input(event);await process_frame
func publish(c:RefCounted,title:String)->void:
	await show(c,Vector2(-26,-20),title);quiet();demo.life.set_process(false);demo.select_tool(2);demo.focus=Vector3(-26,.4,-20);demo.zoom=24.;demo.pitch=.95;demo.yaw=0.;demo._update_camera();await settle()
func routing(c:RefCounted)->RefCounted:
	var graph:=Network.new();graph.state=c;graph._build_graph();return graph
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();cutter=demo.get_meta("road_trim_tool")
	var c:=State.new();c.initialize_free()
	check(c.add_road([Vector2(-34,-20),Vector2(-18,-20)],"promenade","none").ok,"real horizontal styled street")
	check(c.add_road([Vector2(-28,-24),Vector2(-28,-16)],"path","none").ok and c.add_road([Vector2(-23,-24),Vector2(-23,-16)],"path","none").ok,"two real public intersections")
	await publish(c,"真实路口局部裁路");var before:Dictionary=demo.state.snapshot();var undo:int=demo.state._undo.size()
	await shift_motion(Vector2(-25,-20));await settle()
	check(not cutter.hover.is_empty() and cutter.hover.road_id=="r1" and absf(cutter.hover.low-6.)<.02 and absf(cutter.hover.high-11.)<.02,"native Shift hover identifies the span between actual graph junctions")
	check(demo.state.snapshot()==before and cutter.guide.root.visible,"native span highlight leaves author state and history untouched");await capture("junction_span_highlight")
	await shift_click(Vector2(-25,-20));await settle()
	check(not cutter.reviewed.is_empty() and cutter.model!=null and not demo.town.visible,"native click shows actual remaining-road candidate")
	check(demo.state.snapshot()==before and demo.state._undo.size()==undo and cutter.reviewed.candidate.roads.size()==4,"candidate keeps original author roads and IDs unconsumed");await capture("junction_candidate")
	await key(KEY_ESCAPE);await settle();check(cutter.reviewed.is_empty() and demo.town.visible and demo.state.snapshot()==before,"native cancel restores original visible city without an edit")
	await shift_click(Vector2(-25,-20));await settle();var expected:Array=cutter.reviewed.roads.duplicate(true);await key(KEY_ENTER);await settle();quiet()
	check(demo.state.roads==expected and demo.state._undo.size()==undo+1,"native Enter commits the exact reviewed split once")
	check(demo.town.road_roots.has("r1") and demo.town.road_roots.has("r4"),"incremental renderer publishes both remaining IDs")
	var graph:=routing(demo.state);var left:Dictionary=Trim.Geometry.project(demo.state.roads[0],Vector2(-30,-20));var right:Dictionary=Trim.Geometry.project(demo.state.roads[1],Vector2(-20,-20))
	check(graph.component_of[graph._key(Trim.Geometry.point(demo.state.roads[0].points[-1]))]!=graph.component_of[graph._key(Trim.Geometry.point(demo.state.roads[1].points[0]))],"production network separates the two surviving streets")
	await physics_frame;var gap:=Vector2(-25,-20);var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(gap.x,3.,gap.y),Vector3(gap.x,-2.,gap.y),2))
	check(not hit.is_empty() and hit.collider.name=="GroundPick","actual removed middle has terrain picking and no stale road support")
	await capture("junction_trimmed");var saved:Dictionary=demo.state.snapshot();await key(KEY_Z,true);await settle();quiet();check(demo.state.roads==before.roads and not demo.town.road_roots.has("r4"),"native Undo restores original complete author stroke")
	await key(KEY_Y,true);await settle();quiet();check(demo.state.roads==expected,"native Redo preserves reviewed split identities")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"isolated trim disk-format restore");await publish(cold,"裁路冷读");check(demo.state.roads==expected,"cold published roads equal incremental trim")
	# Bends and an unconnected door are not public split boundaries.
	c=State.new();c.initialize_free();check(c.add_road([Vector2(-34,-21),Vector2(-28,-21),Vector2(-24,-18),Vector2(-18,-18)],"path","none").ok,"curved author stroke for explicit cut")
	await publish(c,"自选切点");before=demo.state.snapshot();await shift_click(Vector2(-30,-21),true);await shift_motion(Vector2(-22,-18),true);await settle()
	check(not cutter.first.is_empty() and cutter.reviewed.is_empty() and demo.state.snapshot()==before,"Alt+Shift chooses first explicit metre point without authoring")
	await capture("explicit_two_points");await shift_click(Vector2(-22,-18),true);await settle();check(not cutter.reviewed.is_empty() and cutter.reviewed.low>0. and cutter.reviewed.high<Trim.Geometry.length(demo.state.roads[0]),"second native click reviews actual two-point interval across the curve")
	expected=cutter.reviewed.roads.duplicate(true);await capture("explicit_candidate");await key(KEY_ENTER);await settle();quiet();check(demo.state.roads==expected and demo.state.roads.size()==2,"explicit cut commits two original-geometry survivors")
	# Reviewed work cannot cross city sessions.
	await shift_click(Vector2(-32,-21));await settle();check(not cutter.reviewed.is_empty(),"new reviewed road span before switching city")
	var empty:=State.new();empty.initialize_free();await publish(empty,"隔离新城");check(cutter.reviewed.is_empty() and cutter.model==null and demo.state.roads.is_empty(),"new city clears stale candidate and restores the live town")
	await key(KEY_ENTER);await settle();check(demo.state.roads.is_empty(),"stale confirmation cannot publish old city roads")
	c=State.new();c.initialize_free();check(c.add_road([Vector2(-34,-20),Vector2(-10,-20)],"tram","none").ok,"real tram author stroke")
	await publish(c,"轨街局部裁路");var plan:Dictionary=demo.state.preview_road_trim("r1",10.,14.);check(plan.ok,"actual rail trim candidate")
	cutter.review(plan);await settle();check(cutter.model.road_roots.r1.has_node("TramWiresAndStops") and cutter.model.road_roots.r2.has_node("TramWiresAndStops"),"candidate compiles rails, wires and stations for both remaining identities")
	await capture("tram_candidate");await key(KEY_ENTER);await settle();quiet();check(demo.town.road_roots.r1.has_node("TramWiresAndStops") and demo.town.road_roots.r2.has_node("TramWiresAndStops"),"asynchronous actual renderer replaces rail consumers for split streets")
	var tram_saved:Dictionary=demo.state.snapshot();cold=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(tram_saved))).ok,"tram split ordinary cold restore")
	await publish(cold,"轨街裁路冷读");check(demo.town.road_roots.r1.has_node("TramWiresAndStops") and demo.town.road_roots.r2.has_node("TramWiresAndStops"),"cold renderer preserves both rail consumers")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ROAD_TRIM_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
