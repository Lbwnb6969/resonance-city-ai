extends "res://tools/check_creation_lane_contract_live.gd"
const CurveFixture=preload("res://tools/fixtures/city_creation_curved_lane_fixture.gd")
func road_meshes()->Array:
	var result:Array=[]
	for id:String in demo.town.road_roots:
		for mesh:MeshInstance3D in demo.town.road_roots[id].find_children("*","MeshInstance3D",true,false):
			for surface in range(mesh.mesh.get_surface_count()):
				var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(var_to_bytes(mesh.mesh.surface_get_arrays(surface)));result.append([id,digest.finish().hex_encode()])
	return result
func run()->void:
	OUT="res://验证记录/M84/curved_lane_20261029/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var f:=CurveFixture.build(.4);check(f.ok,"actual rotated gently curved street and staggered entrances")
	await show(f.city,Vector2(-26,-18),"曲巷公共界面");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-26.,.4,-18.);demo.zoom=18.;demo.pitch=.85;demo.yaw=1.15;demo._update_camera();await settle()
	var report:Dictionary=demo.state.functional_zones();var initial:=meshes();var roads:=road_meshes();var authored:Dictionary=demo.state.snapshot()
	check(lane_rows().size()==1 and lane_rows()[0].stage=="district" and lane_rows()[0].evidence.segments.size()>2,"actual scene publishes one continuous curved interface")
	check(lane_rows()[0].evidence.public_entries.size()==4 and not lane_rows()[0].eligibility.warm,"four real offset entrances without invented enclosed Warm")
	check(demo.state.roads[0].points.size()==21 and not roads.is_empty(),"actual curved road keeps authored points and installed mesh")
	await select_house("h1");await key(KEY_ESCAPE)
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await key(KEY_L);await refresh_page()
		check(demo.ledger.visible() and "连续窄巷" in demo.ledger.body.text and "两侧入口与公共路网已接通" in demo.ledger.body.text,"native L explains curved qualification "+str(size.x))
		check(demo.ledger.scrollbook.get_global_rect().end.y<=size.y,"curved page fits "+str(size.x));await capture("curve_ledger_"+str(size.x));await key(KEY_ESCAPE)
	check(demo.state.snapshot()==authored,"native L/picking preserve authored curve and history")
	root.size=Vector2i(1440,900);demo.ui_layer.hide()
	for phase in range(3):demo._set_light_phase(phase);await create_timer(.5).timeout;await capture("curve_phase"+str(phase))
	demo.ui_layer.show();var changed:Dictionary=demo.state.remove_road("r1")
	check(changed.ok and not lane_rows().any(func(s):return s.eligibility.district),"remove curve withdraws before graph publication")
	demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(lane_rows().is_empty() and not demo.town.road_roots.has("r1"),"actual rendered curve and its qualification both leave")
	await key(KEY_L);await refresh_page();check(not "连续窄巷" in demo.ledger.body.text,"native L withdraws removed curve");await capture("curve_removed");await key(KEY_ESCAPE)
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and meshes()==initial and road_meshes()==roads,"native Undo restores exact source and installed house/road arrays")
	await key(KEY_Y,true);await settle();quiet();demo.life.set_process(false);check(lane_rows().is_empty(),"native Redo withdraws curved interface")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	var presentation:Dictionary=demo.state.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	changed=demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":presentation});demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and lane_rows()==report.spaces,"decoration switch never changes curved qualification")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	var path:=OUT+"/work.json";var file:=FileAccess.open(path,FileAccess.WRITE);file.store_string(JSON.stringify(demo.state.snapshot(),"",true,true));file.close()
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok,"independent disk cold restore of curved city")
	await show(cold,Vector2(-26,-18),"曲巷冷读");quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and meshes()==initial and road_meshes()==roads,"independent cold publication matches incremental source/actual geometry")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual unclipped PCM and original pool")
	var wet:=CurveFixture.build(0.,false,"curve",true);check(wet.ok,"public wet-gap bridge street")
	await show(wet.city,Vector2(-27,-18),"真实水域断口");quiet();demo.life.set_process(false)
	var fragments:=lane_rows()
	check(demo.state.roads[0].bridge and fragments.size()>=2,"actual connected bridge does not merge dry courtyard sides through water")
	check(not fragments.any(func(s):return s.evidence.from.x<-27.7 and s.evidence.to.x>-26.5),"actual wet gap keeps separate spatial scopes")
	await key(KEY_L);await refresh_page();await capture("wet_gap_ledger");await key(KEY_ESCAPE)
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"spaces":report.spaces,"wet_spaces":fragments,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("CURVED_LANE_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
