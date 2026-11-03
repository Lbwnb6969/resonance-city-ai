extends "res://tools/check_creation_entry_height_live.gd"
func width_geometry(row:Dictionary)->void:
	for record:Dictionary in row.evidence.public_entries:
		var house:Dictionary=demo.state.houses[demo.state._house_index(record.house_id)]
		var entry:Dictionary=demo.state.house_entrances(record.house_id).filter(func(e):return e.cell_id==record.cell_id)[0]
		var normal:Vector2=demo.state.Frontage.Frame.normal(entry);var tangent:=Vector2(-normal.y,normal.x)
		for offset:float in [-.30,0.,.30]:
			var at:Vector2=entry.wall_at+normal*.3+tangent*offset;var top:float=house.base_y+.105;var installed:=-INF
			for node:MeshInstance3D in demo.town.house_roots[record.house_id].find_children("*","MeshInstance3D",true,false):installed=maxf(installed,mesh_height(node,at,top-.002,top+.002,top))
			check(is_finite(installed) and absf(installed-top)<.002,"actual doorstep triangle supports corridor width "+str(offset))
			at=record.street_at+tangent*offset;top=demo.state.street_height(at)
			check(is_finite(installed_deck(at,top)) and absf(installed_deck(at,top)-top)<.002,"actual street triangle supports corridor width "+str(offset))
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	for kind:String in ["flat","high","mismatch"]:
		var f:=SlopeFixture.build(kind,.4 if kind=="high" else 0.);check(f.ok,"public parallel road/terrain fixture "+kind)
		await show(f.city,Vector2(-27,-18),"旁路走廊 "+kind);quiet();demo.life.set_process(false)
		demo.focus=Vector3(-27,1.,-18);demo.zoom=15.;demo.pitch=.8;demo.yaw=.4;demo._update_camera();await settle()
		var before:Dictionary=demo.state.snapshot();var report:Dictionary=demo.state.functional_zones();var row:Dictionary=lane_rows()[0]
		if kind=="mismatch":
			check(not row.eligibility.district and row.evidence.rejected_entries.any(func(e):return e.height_access.get("corridor",{}).get("reason","")=="unsupported_corridor_height"),"published evidence rejects a side-width height break missed by the centre line")
		else:
			check(row.eligibility.district and row.evidence.public_entries.all(func(e):return e.height_access.corridor.ok and e.height_access.corridor.samples>e.height_access.samples*3),"published district carries full-width sampled support "+kind)
			width_geometry(row)
		await key(KEY_L);await refresh_page();check(demo.ledger.visible(),"native L opens parallel-access evidence "+kind);await capture(kind+"_ledger");await key(KEY_ESCAPE)
		check(demo.state.snapshot()==before,"native read keeps authored ground/road/rights "+kind)
		if kind=="high":
			var changed:Dictionary=demo.state.remove_road("r1");demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
			check(changed.ok and lane_rows().is_empty(),"road removal withdraws corridor evidence")
			await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false);check(demo.state.functional_zones()==report,"native Undo restores exact corridor proof")
			var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot()))).ok,"independent cold restore")
			await show(cold,Vector2(-27,-18),"旁路走廊冷读");quiet();demo.life.set_process(false)
			check(demo.state.functional_zones()==report,"cold publication matches incremental corridor evidence")
	var oblique:=State.new();oblique.initialize_free();SlopeFixture.Base.Brush.select(oblique,"pastoral","townhouse")
	check(oblique.add_house(Vector2(-25,-20)).ok and oblique.add_road([Vector2(-28,-18.25),Vector2(-22,-17.35)],"path","none").ok,"public oblique road fixture")
	await show(oblique,Vector2(-25,-19),"真实斜向旁路");quiet();demo.life.set_process(false)
	var entry:Dictionary=demo.state.house_entrances("h1")[0]
	var target:=Geometry2D.get_closest_point_to_segment(entry.at,Vector2(-28,-18.25),Vector2(-22,-17.35))
	var access:=preload("res://scripts/world/city_creation_entry_height.gd").assess(demo.state,demo.state.houses[0],entry,target,demo.state.roads[0])
	check(access.ok and access.corridor.get("corner_samples",0)>0,"actual oblique street attachment includes turning support")
	width_geometry({"evidence":{"public_entries":[{"house_id":"h1","cell_id":entry.cell_id,"street_at":target}]}})
	demo.focus=Vector3(-25,.5,-19);demo.zoom=8.;demo.pitch=.65;demo.yaw=.3;demo._update_camera();await settle();await capture("oblique_support")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"oblique":access,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("ENTRY_CORRIDOR_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
