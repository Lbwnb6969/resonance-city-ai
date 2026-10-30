extends "res://tools/check_creation_curved_lane_live.gd"
const Shore=preload("res://tools/fixtures/city_creation_waterfront_contract_fixture.gd")
const HouseFrame=preload("res://scripts/world/city_creation_house_frame.gd")
func shore_row()->Dictionary:return demo.state.functional_zones().spaces.filter(func(s):return s.kind=="waterfront" and s.members==["h1"])[0]
func run()->void:
	OUT="res://验证记录/M84/landmark_contract_20261030/shore_live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var yaw:=.4;var f:=Shore.build("shore",yaw,false);var city:RefCounted=f.city
	check(f.ok and Shore.Base.Brush.select(city,"pastoral","ionic_stoa"),"public shore and selected foreign column body")
	check(city.add_house(Shore.ORIGIN+Vector2(-1.8,3.5).rotated(-yaw)).ok and city.rotate_house("h2",yaw+PI*.5).ok,"actual neighboring side-facing stoa")
	check(city.add_road([Shore.ORIGIN+Vector2(-2,1.9).rotated(-yaw),Shore.ORIGIN+Vector2(6,1.9).rotated(-yaw)] as Array[Vector2],"path","none").ok,"public street after final source orientation")
	await show(city,Shore.ORIGIN+Vector2(1.8,2).rotated(-yaw),"水岸柱脚局部撤回");quiet();demo.life.set_process(false)
	demo.zoom=17.;demo.pitch=.85;demo.yaw=.3;demo._update_camera();await settle()
	var report:Dictionary=demo.state.functional_zones();var initial:=meshes();var roads:=road_meshes();var authored:Dictionary=demo.state.snapshot()
	check(shore_row().eligibility.district and shore_row().evidence.shore_faces.size()==2,"only obstructed shore face withdraws; two clear public faces survive")
	check(demo.town.house_roots.h2.has_meta("ionic_stoa"),"actual installed foreign column mesh")
	var house:Dictionary=demo.state.houses[1];var at:=HouseFrame.point(house,HouseFrame.origin(house)+Vector2(0,1.48));var normal:=HouseFrame.direction(house,Vector2.DOWN)
	await physics_frame
	var from:=Vector3(at.x+normal.x*.4,float(house.base_y)+.8,at.y+normal.y*.4);var to:=Vector3(at.x-normal.x*.4,float(house.base_y)+.8,at.y-normal.y*.4)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(from,to,1))
	check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h2","actual column shaft physics retains foreign source")
	await key(KEY_L);await refresh_page();check("面水公共界面 · 入口与公共路网已接通" in demo.ledger.body.text,"native L retains surviving public shore");await capture("shore_ledger");await key(KEY_ESCAPE)
	demo.ui_layer.hide()
	for phase in [0,2]:demo._set_light_phase(phase);await create_timer(.5).timeout;await capture("foreign_column_phase"+str(phase))
	demo.ui_layer.show();demo._set_light_phase(0)
	var changed:Dictionary=demo.state.remove_house("h2");demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and shore_row().evidence.shore_faces.size()==3,"real removal opens exactly the third face");await capture("foreign_column_removed")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and meshes()==initial and road_meshes()==roads,"native Undo restores exact obstruction and uploaded arrays")
	await key(KEY_Y,true);await settle();quiet();demo.life.set_process(false);check(shore_row().evidence.shore_faces.size()==3,"native Redo reopens local face")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(authored,"",true,true))).ok,"independent foreign-column snapshot restore")
	await show(cold,Shore.ORIGIN,"水岸柱脚冷读");quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and meshes()==initial and road_meshes()==roads,"cold report and actual meshes equal incremental")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual PCM and original pooled voices")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"spaces":report.spaces,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("EXTERNAL_COLUMNS_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
