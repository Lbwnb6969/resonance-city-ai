extends "res://tools/check_creation_junction_continuity_live.gd"
const BridgeFixture=preload("res://tests/test_city_creation_bridge_grades.gd")
func surface(id:String)->MeshInstance3D:
	var node:Node3D=demo.town.road_roots[id]
	return node.get_node("PromenadeSurface") if node.has_node("PromenadeSurface") else node.get_node("PathSurface")
func road_meshes()->Dictionary:
	var result:Dictionary={}
	for road:Dictionary in demo.state.roads:
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(var_to_bytes(surface(road.id).mesh.surface_get_arrays(0)))
		result[road.id]=digest.finish().hex_encode()
	return result
func deck_gap()->Dictionary:
	var road:Dictionary=demo.state.roads[0];var profile:Dictionary=demo.state.road_profile(road)
	var points:PackedVector3Array=surface(road.id).mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]
	var maximum:=0.;var tested:=0
	for run:Dictionary in profile.bridge_runs:
		for p:Vector3 in points:
			var arc:=p.z+12.
			if arc<float(run.start)+.00001 or arc>float(run.end)-.00001:continue
			maximum=maxf(maximum,absf(p.y-float(run.deck_y)));tested+=1
	return {"max_gap_m":maximum,"vertices":tested}
func run()->void:
	OUT="res://验证记录/M83/bridge_grades"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	var baseline:bool="--baseline" in OS.get_cmdline_user_args()
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var era:String="modern_eco" if "--modern" in OS.get_cmdline_user_args() else "clockwork"
	facts.era=era
	var city:RefCounted=BridgeFixture.fixture(4.,false,era)
	check(city.add_road([Vector2(-28,-16),Vector2(-24,-16)] as Array[Vector2],"path","none").ok,"actual distant road")
	check(city.add_house(Vector2(-24,-10)).ok,"actual house for the unchanged music pool")
	await show(city,Vector2(-15,-6),"连续异风貌桥面");quiet();demo.ui_layer.hide();demo.focus=Vector3(-15,.3,-6);demo.zoom=10.;demo.pitch=.55;demo.yaw=.65;demo._update_camera();await settle()
	var original:Dictionary=demo.state.snapshot();var initial:=road_meshes();var far:int=demo.town.road_roots.r2.get_instance_id();facts.deck=deck_gap()
	check(facts.deck.vertices>0,"actual uploaded bridge ribbon sampled")
	if not baseline:check(facts.deck.max_gap_m<.00001,"uploaded road ribbon matches both architectural decks")
	for phase in range(3):demo._set_light_phase(phase);await capture("mixed_bridge_phase"+str(phase))
	demo.pitch=.18;demo._update_camera();await capture("mixed_bridge_low")
	check(demo.state.snapshot()==original,"camera and light views preserve authored bridges")
	if not baseline:
		var edit:Dictionary=demo.state.remove_road("r1");demo._after_edit(edit,"road");await settle();quiet();check(edit.ok,"public mixed bridge removal")
		await key(KEY_Z,true);await settle();quiet();check(demo.state.roads==original.roads and road_meshes()==initial,"native Undo restores exact mixed bridge road arrays")
		await key(KEY_Y,true);await settle();quiet();check(demo.state.roads.size()==1,"native Redo removes both crossings atomically")
		await key(KEY_Z,true);await settle();quiet();check(road_meshes()==initial,"native second Undo restores original uploaded bridge arrays")
		check(demo.town.road_roots.r2.get_instance_id()==far,"mixed bridge edits preserve the distant road node")
		var path:=OUT+"/world.json";var writer:=FileAccess.open(path,FileAccess.WRITE);writer.store_string(JSON.stringify(demo.state.snapshot(),"",true,true));writer.close()
		var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok,"isolated mixed bridge disk read")
		await show(cold,Vector2(-15,-6),"异风貌桥冷算");quiet();check(road_meshes()==initial,"independent cold publication equals incremental mixed bridge arrays")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok,"actual virtual-sink Master PCM unclipped");check(pool()==voices,"existing audio player pool retained")
	var report:={"ok":failures.is_empty(),"baseline":baseline,"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("BRIDGE_GRADES_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
