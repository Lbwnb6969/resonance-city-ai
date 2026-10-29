extends "res://tools/check_creation_street_furniture_contact_live.gd"
const BanksFixture=preload("res://tools/fixtures/city_creation_bridge_banks_fixture.gd")
func meshes(id:String)->Dictionary:
	var out:Dictionary={}
	for node:MeshInstance3D in demo.town.road_roots[id].find_children("*","MeshInstance3D",true,false):
		# Auto-generated decoration node names change after every rebuild.
		# Compare the stable production road, retaining and arch surfaces.
		var path:=str(demo.town.road_roots[id].get_path_to(node))
		if path not in ["PromenadeSurface","PathSurface","RoadCutFillMasonry","ClassicalDoubleArchBridge/faces","ClassicalDoubleArchBridge/stones","ClassicalDoubleArchBridge/caps","ClassicalDoubleArchBridge/lamps"]:continue
		var bytes:=PackedByteArray()
		for surface in range(node.mesh.get_surface_count()):bytes.append_array(var_to_bytes(node.mesh.surface_get_arrays(surface)))
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(bytes);out[path]=digest.finish().hex_encode()
	return out
func banks()->Dictionary:
	var wall:MeshInstance3D=demo.town.road_roots.r1.get_node("RoadCutFillMasonry")
	return BanksFixture.measure(demo.state.road_profile(demo.state.roads[0]),wall.get_meta("sections"))
func run()->void:
	OUT="res://验证记录/M83/bridge_banks_live"
	var baseline:=""
	var selected:Array[String]=["straight","diagonal"]
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--baseline-earthworks="):baseline=arg.trim_prefix("--baseline-earthworks=")
		if arg.begins_with("--case="):selected.assign([arg.trim_prefix("--case=")])
	if selected.any(func(kind:String)->bool:return kind not in ["straight","diagonal"]):push_error("Unknown bridge-bank case");quit(1);return
	var verify:bool="--verify-banks" in OS.get_cmdline_user_args()
	if verify and not baseline.is_empty():push_error("Acceptance must use current production geometry");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray();facts.cases=[]
	check(DisplayServer.get_name()!="headless" and AudioServer.get_driver_name()!="Dummy","real OpenGL and active audio output driver")
	for kind:String in selected:
		print("BRIDGE_BANK_STAGE ",kind," loading")
		var city:RefCounted=BanksFixture.build(kind);await show(city,Vector2(3,0),"桥岸贴合 "+kind);quiet();demo.ui_layer.hide()
		if not baseline.is_empty():
			# Reconstruct only the former production masonry from its archived
			# source; road profile, terrain, material and camera stay identical.
			var old=load(baseline);var road_root:Node3D=demo.town.road_roots.r1
			for name:String in ["RoadCutFillMasonry","EarthworksGroundPick"]:road_root.get_node(name).free()
			old.install(demo.town,road_root,old.prepare(demo.town,demo.state.roads[0],demo.state.road_profile(demo.state.roads[0])),demo.state.roads[0])
			facts.baseline_source_sha256=FileAccess.get_sha256(baseline)
		demo.focus=Vector3(3,.5,0);demo.zoom=12.;demo.pitch=.65;demo.yaw=-.5;demo._update_camera();await settle()
		var initial:=meshes("r1");var far:int=demo.town.road_roots.r2.get_instance_id();var original:Dictionary=demo.state.snapshot();var contact:=banks()
		check(contact.contacts.size()==4,"four installed stone bridge bank contacts "+kind)
		if verify:check(contact.max_gap_m<.0001 and contact.max_vertical_gap_m<.0001,"installed retaining walls join actual abutment faces in three dimensions "+kind)
		for phase in range(3):demo._set_light_phase(phase);await create_timer(1.5).timeout;await capture(kind+"_phase"+str(phase))
		demo.pitch=.18;demo._update_camera();await capture(kind+"_low");demo.pitch=.65;demo._update_camera()
		check(demo.state.snapshot()==original,"camera and light do not write author data "+kind)
		print("BRIDGE_BANK_STAGE ",kind," captured")
		if verify:
			var changed:Dictionary=demo.state.add_terrain_stroke([Vector2(-1,0)] as Array[Vector2],"raise",4.,.45)
			demo._after_edit(changed,"terrain");await settle();quiet();check(changed.ok and meshes("r1")!=initial,"real bank brush changes installed bank support "+kind)
			var edited:=meshes("r1");check(banks().max_gap_m<.0001,"bank support stays connected after local sculpt "+kind)
			await key(KEY_Z,true);await settle();quiet();check(demo.state.terrain_strokes==original.terrain_strokes and meshes("r1")==initial,"native Undo restores exact installed bridge and banks "+kind)
			await key(KEY_Y,true);await settle();quiet();check(meshes("r1")==edited,"native Redo restores edited bank arrays "+kind)
			check(demo.town.road_roots.r2.get_instance_id()==far,"bank edit preserves distant road instance "+kind)
			var path:=OUT+"/"+kind+"_world.json";var writer:=FileAccess.open(path,FileAccess.WRITE);writer.store_string(JSON.stringify(demo.state.snapshot(),"",true,true));writer.close()
			var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok,"isolated disk cold read "+kind)
			await show(cold,Vector2(3,0),"桥岸冷算 "+kind);quiet();check(meshes("r1")==edited,"independent cold arrays equal incremental bank publication "+kind)
			print("BRIDGE_BANK_STAGE ",kind," edit_undo_redo_cold_complete")
		facts.cases.append({"kind":kind,"contact":contact,"meshes":initial})
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok,"actual Master PCM unclipped");check(pool()==voices,"existing bounded player pool retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains byte-identical")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("BRIDGE_BANKS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
