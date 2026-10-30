extends "res://tools/check_creation_curved_lane_live.gd"
const LandmarkFixture=preload("res://tools/fixtures/city_creation_landmark_contract_fixture.gd")
const CraftFixture=preload("res://tools/fixtures/city_creation_artisan_contract_fixture.gd")
const CivicFixture=preload("res://tools/fixtures/city_creation_civic_contract_fixture.gd")
func landmark_rows()->Array:return demo.state.functional_zones().spaces.filter(func(s):return s.evidence.geometry=="landmark_forecourt")
func entities()->Array:return demo.get_meta("street_wonders").ground_landmarks
func entity_meshes()->Array:
	var result:Array=[]
	for node:Node3D in entities():
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			for surface in range(mesh.mesh.get_surface_count()):
				var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(var_to_bytes(mesh.mesh.surface_get_arrays(surface)));result.append(digest.finish().hex_encode())
	return result
func page(label:String,expected:String)->void:
	await key(KEY_L);await refresh_page()
	check(demo.ledger.visible() and expected in demo.ledger.body.text,"native L landmark diagnosis "+label)
	check(demo.ledger.scrollbook.get_global_rect().end.y<=root.size.y,"landmark page fits "+label)
	await capture(label);await key(KEY_ESCAPE)
func click_entity(node:Node3D)->void:
	var point:Vector2=demo.camera.unproject_position(node.global_position+Vector3.UP*1.2)
	var motion_event:=InputEventMouseMotion.new();motion_event.device=92;motion_event.position=point;motion_event.global_position=point;root.push_input(motion_event);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=point;event.global_position=point;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func verify_steps()->void:
	var item:Dictionary=demo.state.placed_landmarks[0];var counts:={"0.07":0,"0.14":0,"0.21":0,"0.2775":0}
	for node:Node3D in entities():
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			for surface in range(mesh.mesh.get_surface_count()):
				var vertices:PackedVector3Array=mesh.mesh.surface_get_arrays(surface)[Mesh.ARRAY_VERTEX]
				for vertex:Vector3 in vertices:
					var height:float=mesh.to_global(vertex).y-float(item.base_y)
					for target:String in counts:
						if absf(height-float(target))<.00001:counts[target]+=1
	check(counts.values().all(func(n):return n>0),"uploaded foundation and all three real step tops "+str(item.blueprint))
	facts["step_vertices_"+str(item.blueprint)]=counts
func run()->void:
	OUT="res://验证记录/M84/landmark_contract_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var f:=LandmarkFixture.build();check(f.ok,"actual earned independent landmark and front road")
	await show(f.city,LandmarkFixture.ORIGIN,"独立地标前场");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-28.,1.2,13.);demo.zoom=21.;demo.pitch=.85;demo.yaw=.3;demo._update_camera();await settle()
	var report:Dictionary=demo.state.functional_zones();var initial:=entity_meshes();var roads:=road_meshes();var authored:Dictionary=demo.state.snapshot()
	check(demo.state.houses.is_empty() and landmark_rows()[0].eligibility.district and entities().size()==1,"independent ground entity qualifies with zero neighboring households")
	check(entities()[0].get_meta("landmark_id")==f.id and entities()[0].get_meta("footprint")==LandmarkFixture.Plan.footprint(demo.state.placed_landmarks[0]),"installed source identity and real foundation envelope")
	verify_steps();await click_entity(entities()[0]);check(demo.get_meta("ground_landmark_tool").selected==f.id,"native ground body pick resolves stable entity");await key(KEY_ESCAPE)
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await page("landmark_ledger_"+str(size.x),"海神竖琴灯塔")
	check(demo.state.snapshot()==authored,"native pick/L preserve authored entity and historical rights")
	root.size=Vector2i(1440,900);demo.ui_layer.hide()
	for phase in range(3):demo._set_light_phase(phase);await create_timer(.5).timeout;await capture("landmark_phase"+str(phase))
	demo.ui_layer.show();var changed:Dictionary=demo.state.remove_road(f.road_id);demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and landmark_rows()[0].stage=="cluster","actual disconnected landmark keeps only local space");await page("road_removed","入口尚未接通公共道路")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and entity_meshes()==initial and road_meshes()==roads,"native Undo restores sources and installed arrays")
	await key(KEY_Y,true);await settle();quiet();demo.life.set_process(false);check(not landmark_rows()[0].eligibility.district,"native Redo withdraws local entry")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	changed=LandmarkFixture.Plan.remove(demo.state,f.id);demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and landmark_rows().is_empty() and entities().is_empty(),"real removal withdraws model and new space together")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false);check(demo.state.functional_zones()==report and entity_meshes()==initial,"native Undo restores exact ground entity")
	demo._set_light_phase(0)
	for family:String in ["highland","courtyard","artisan"]:
		var v:=LandmarkFixture.build(family,.4);check(v.ok,"public authored family "+family)
		await show(v.city,LandmarkFixture.ORIGIN,"传世前场 "+family);quiet();demo.life.set_process(false)
		check(landmark_rows()[0].eligibility.district and entities().size()==1,"actual rotated family with supported front "+family);verify_steps();await page("family_"+family,LandmarkFixture.Plan.Legacy.TITLES[family])
	var columns:=LandmarkFixture.build("riverbank",0.,"columns");check(columns.ok,"actual neighboring external column fixture")
	await show(columns.city,LandmarkFixture.ORIGIN,"柱脚占用前场");quiet();demo.life.set_process(false)
	check(not landmark_rows()[0].eligibility.district and landmark_rows()[0].stage=="trait","real neighboring column feet cannot masquerade as a clear front");await page("neighbor_columns","尚无可用的干地前场")
	for civic:bool in [false,true]:
		var v:=CivicFixture.build() if civic else CraftFixture.build();var city:RefCounted=v.city
		CraftFixture.Base.Brush.select(city,"pastoral","ionic_stoa")
		var cells:Array=[{"x":0,"z":0,"level":0,"kind":"room"}]
		if civic:cells.append_array([{"x":1,"z":0,"level":0,"kind":"room"},{"x":2,"z":0,"level":0,"kind":"room"}])
		var at:=CraftFixture.ORIGIN+(Vector2(3.6,4.9) if civic else Vector2(0,4.05))
		check(v.ok and city.add_house_stroke(at,cells).ok and city.rotate_house("h2",PI).ok,"public previous-contract column counterexample")
		await show(city,CraftFixture.ORIGIN,"邻屋柱列回归");quiet();demo.life.set_process(false)
		var kind:="civic" if civic else "artisan";var row:Dictionary=demo.state.functional_zones().spaces.filter(func(s):return s.kind==kind and s.members==["h1"])[0]
		check(not row.eligibility.district and row.evidence.forecourts.is_empty(),"actual old "+kind+" front withdraws under foreign columns");await page("foreign_columns_"+kind,"尚无可用的干地前")
	var path:=OUT+"/work.json";var file:=FileAccess.open(path,FileAccess.WRITE);file.store_string(JSON.stringify(authored,"",true,true));file.close()
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok,"independent landmark disk restore")
	await show(cold,LandmarkFixture.ORIGIN,"独立地标冷读");quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and entity_meshes()==initial and road_meshes()==roads,"cold sources and actual entity/road arrays match incremental publication")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual PCM and original bounded player pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"spaces":report.spaces,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("LANDMARK_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
