extends "res://tools/check_creation_curved_lane_live.gd"
const CivicFixture=preload("res://tools/fixtures/city_creation_civic_contract_fixture.gd")
func civic_rows()->Array:return demo.state.functional_zones().spaces.filter(func(s):return s.kind=="civic")
func page(label:String,expected:String)->void:
	await key(KEY_L);await refresh_page()
	check(demo.ledger.visible() and expected in demo.ledger.body.text,"native L craft diagnosis "+label)
	check(demo.ledger.scrollbook.get_global_rect().end.y<=root.size.y,"craft page fits "+label)
	await capture(label);await key(KEY_ESCAPE)
func verify_columns()->void:
	var node:Node3D=demo.town.house_roots.h1
	var footprints:Array=[]
	var house:Dictionary=demo.state.houses[0];var base:float=house.get("base_y",0.)
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		for surface in range(mesh.mesh.get_surface_count()):
			var arrays:=mesh.mesh.surface_get_arrays(surface);var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX] if arrays[Mesh.ARRAY_INDEX] is PackedInt32Array else PackedInt32Array()
			for i in range(0,indices.size() if not indices.is_empty() else vertices.size(),3):
				var poly:=PackedVector2Array();var valid:=true
				for j in range(3):
					var point:Vector3=mesh.to_global(vertices[indices[i+j] if not indices.is_empty() else i+j])
					var local:=State.Rotation.Frame.inverse(house,Vector2(point.x,point.z))-State.Rotation.Frame.origin(house)
					if absf(point.y-base-.17)>.001 or absf(local.y-1.48)>.16:valid=false;break
					poly.append(Vector2(point.x,point.z))
				if valid:footprints.append({"polygon":poly})
	var clearance:=INF
	for entry:Dictionary in civic_rows()[0].evidence.public_entries:
		var route:PackedVector2Array=entry.height_access.path
		for segment in range(1,route.size()):
			for sample in range(65):
				var point:=route[segment-1].lerp(route[segment],sample/64.)
				for box:Dictionary in footprints:clearance=minf(clearance,State.Rotation.Frame.distance(box,point))
	check(not footprints.is_empty() and clearance>=.349,"published Ionic plinth meshes leave actual .70m public passage")
	facts["column_clearance_"+str(demo.state.houses[0].cells.size())]={"plinth_top_triangles":footprints.size(),"minimum_half_clearance":clearance}
func run()->void:
	OUT="res://验证记录/M84/civic_contract_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var f:=CivicFixture.build();check(f.ok,"actual workshop, open forecourt and public street")
	await show(f.city,Vector2(-28,-20),"礼乐前场");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-28.,.5,-20.);demo.zoom=18.;demo.pitch=.85;demo.yaw=.3;demo._update_camera();await settle()
	var report:Dictionary=demo.state.functional_zones();var initial:=meshes();var roads:=road_meshes();var authored:Dictionary=demo.state.snapshot()
	check(civic_rows().size()==1 and civic_rows()[0].eligibility.district,"actual body and real public forecourt qualify")
	check(demo.town.house_roots.h1.has_meta("ionic_stoa") and demo.state.houses.size()==1 and demo.town.house_roots.has("h1") and demo.town.road_roots.has("r1"),"one installed workshop and street carry public sources")
	verify_columns();await select_house("h1");await key(KEY_ESCAPE)
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await page("craft_ledger_"+str(size.x),"礼乐前场 · 入口与公共路网已接通")
	check(demo.state.snapshot()==authored,"native read/pick preserve authored work and receipts")
	root.size=Vector2i(1440,900);demo.ui_layer.hide()
	for phase in range(3):demo._set_light_phase(phase);await create_timer(.5).timeout;await capture("craft_phase"+str(phase))
	demo.ui_layer.show();var changed:Dictionary=demo.state.remove_road("r1");demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and civic_rows()[0].stage=="cluster","actual road removal withdraws district only")
	await page("road_removed","入口尚未接通公共道路")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and meshes()==initial and road_meshes()==roads,"native Undo restores exact sources and installed arrays")
	await key(KEY_Y,true);await settle();quiet();demo.life.set_process(false);check(not civic_rows()[0].eligibility.district,"native Redo removes public access")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	var wall:=CivicFixture.build("wall");check(wall.ok,"public actual forecourt wall")
	await show(wall.city,Vector2(-28,-20),"前庭受阻");quiet();demo.life.set_process(false)
	check(not civic_rows()[0].eligibility.district,"actual wall prevents forecourt qualification");await page("wall_blocked","尚无可用的干地前场")
	for kind:String in ["columns","roman_basilica","rotunda","guildhall"]:
		var v:=CivicFixture.build(kind);check(v.ok,"public cultural shell "+kind)
		await show(v.city,Vector2(-26,-20),"文化前场 "+kind);quiet();demo.life.set_process(false)
		check(civic_rows()[0].eligibility.district,"actual public cultural front "+kind)
		var built:Node3D=demo.town.house_roots.h1
		check(built.has_meta("ionic_stoa") if kind=="columns" else built.has_meta("roman_basilica") if kind=="roman_basilica" else built.has_meta("ancient_rotunda_cella") if kind=="rotunda" else built.has_node("PedimentedGuildhall"),"actual installed cultural shell "+kind)
		if kind=="columns":verify_columns()
		await page("shell_"+kind,"礼乐前场 · 入口与公共路网已接通")
	var path:=OUT+"/work.json";var file:=FileAccess.open(path,FileAccess.WRITE);file.store_string(JSON.stringify(authored,"",true,true));file.close()
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok,"independent craft disk restore")
	await show(cold,Vector2(-28,-20),"礼乐独立冷读");quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and meshes()==initial and road_meshes()==roads,"cold sources and actual house/road arrays equal incremental publication")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual PCM and original player pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"spaces":report.spaces,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("CIVIC_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
