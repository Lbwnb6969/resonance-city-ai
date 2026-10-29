extends "res://tools/check_creation_functional_zones_live.gd"
const HalfFixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
func run()->void:
	OUT="res://验证记录/M84/half_enclosure_20261029/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var fixture:=HalfFixture.courtyard("U","none",.4);check(fixture.ok,"public rotated half enclosure")
	await show(fixture.city,Vector2(-23,-17),"半围合空间");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-23.5,.6,-17.3);demo.zoom=18.;demo.pitch=.85;demo.yaw=.1;demo._update_camera();await settle()
	var report:Dictionary=demo.state.functional_zones();var initial:=meshes();var authored:Dictionary=demo.state.snapshot()
	check(report.spaces.size()==1 and report.spaces[0].stage=="cluster" and report.spaces[0].evidence.geometry=="half_enclosure","actual renderer city publishes half-enclosure cluster")
	check(report.spaces[0].evidence.open_access and not report.spaces[0].eligibility.district and not report.spaces[0].eligibility.warm,"real dry opening without invented complete district or Warm")
	await select_house("h1");await key(KEY_ESCAPE)
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await key(KEY_L);await refresh_page()
		check(demo.ledger.visible() and "半围合" in demo.ledger.body.text and "局部空间" in demo.ledger.body.text and "留有可进入的干地" in demo.ledger.body.text,"native L presents actual half-enclosure reason "+str(size.x))
		check(not "公共通口已接通" in demo.ledger.body.text and "已接路 0 / 1" in demo.ledger.body.text,"unconnected local space is not promoted to district")
		check(demo.ledger.scrollbook.get_global_rect().end.y<=size.y,"half-enclosure page fits "+str(size.x));await capture("half_ledger_"+str(size.x));await key(KEY_ESCAPE)
	check(demo.state.snapshot()==authored,"real pick and L page do not author geometry/history")
	root.size=Vector2i(1440,900);demo.ui_layer.hide()
	for phase in range(3):demo._set_light_phase(phase);await create_timer(.5).timeout;await capture("half_phase"+str(phase))
	demo.ui_layer.show();var presentation:Dictionary=demo.state.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	var changed:Dictionary=demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":presentation});demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and demo.state.functional_zones().spaces==report.spaces,"automatic decoration toggle does not change half-enclosure evidence")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false);check(demo.state.functional_zones()==report,"native preference Undo preserves exact source report")
	var cell_id:String=""
	for cell:Dictionary in demo.state.houses[0].cells:
		if cell.x==0 and cell.z==4:cell_id=cell.id
	changed=demo.state.remove_cell("h1",cell_id);demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and demo.state.functional_zones().spaces!=report.spaces and meshes()!=initial,"removing actual wing tip changes installed geometry and spatial evidence")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and meshes()==initial,"native Undo restores exact rotated half-enclosure and mesh arrays")
	await key(KEY_Y,true);await settle();quiet();demo.life.set_process(false);check(demo.state.functional_zones().spaces!=report.spaces,"native Redo updates half-enclosure again")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	var path:=OUT+"/work.json";var file:=FileAccess.open(path,FileAccess.WRITE);file.store_string(JSON.stringify(demo.state.snapshot(),"",true,true));file.close()
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok,"real disk cold read of rotated half enclosure")
	await show(cold,Vector2(-23,-17),"半围合冷读");quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and meshes()==initial,"independent cold publication equals incremental evidence and meshes")
	var straight:=HalfFixture.courtyard("U","none");await show(straight.city,Vector2(-24.4,-16.4),"半围合入口");quiet();demo.life.set_process(false)
	var wall:Array=[]
	for x in range(3):wall.append({"x":x,"z":0,"level":0,"kind":"room"})
	changed=demo.state.add_house_stroke(HalfFixture.ORIGIN+Vector2(1.8,7.45),wall);demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and demo.state.functional_zones().spaces.any(func(s):return s.evidence.geometry=="half_enclosure" and not s.evidence.open_access),"actual detached wall obstructs opening without inventing dry access")
	await key(KEY_L);await refresh_page();check("开口通路受阻" in demo.ledger.body.text,"L shows actual obstruction reason");await capture("mouth_blocked");await key(KEY_ESCAPE)
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false);check(demo.state.functional_zones().spaces[0].evidence.open_access,"native Undo blocker restores open approach")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual unclipped PCM and original bounded pool")
	var classic:=State.new();classic.initialize();await show(classic,Vector2(-6,-1),"经典账本");quiet();demo.life.set_process(false)
	await key(KEY_L);await refresh_page();check(demo.ledger.button.text=="生活账本 · L" and demo.ledger.guide_button.visible,"classic ledger remains available");await key(KEY_ESCAPE)
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"spaces":report.spaces,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("OPEN_COURTS_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
