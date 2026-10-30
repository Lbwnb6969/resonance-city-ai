extends "res://tools/check_creation_curved_lane_live.gd"
const SlopeFixture=preload("res://tools/fixtures/city_creation_slope_entry_fixture.gd")
func mesh_height(node:MeshInstance3D,at:Vector2,low:float,cap:float,wanted:float=NAN)->float:
	var best:=-INF
	for surface in range(node.mesh.get_surface_count()):
		var arrays:Array=node.mesh.surface_get_arrays(surface);var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
		var ids:PackedInt32Array=arrays[Mesh.ARRAY_INDEX] if arrays[Mesh.ARRAY_INDEX]!=null else PackedInt32Array()
		if ids.is_empty():
			ids.resize(points.size())
			for i in range(points.size()):ids[i]=i
		for i in range(0,ids.size(),3):
			var a:=node.to_global(points[ids[i]]);var b:=node.to_global(points[ids[i+1]]);var c:=node.to_global(points[ids[i+2]])
			var ab:=Vector2(b.x-a.x,b.z-a.z);var ac:=Vector2(c.x-a.x,c.z-a.z);var det:=ab.cross(ac)
			if absf(det)<.000001:continue
			var q:=at-Vector2(a.x,a.z);var u:=q.cross(ac)/det;var v:=ab.cross(q)/det
			if u<-.00001 or v<-.00001 or u+v>1.00001:continue
			var y:=a.y+u*(b.y-a.y)+v*(c.y-a.y)
			if y<low or y>cap:continue
			if not is_finite(best) or (is_nan(wanted) and y>best) or (not is_nan(wanted) and absf(y-wanted)<absf(best-wanted)):best=y
	return best
func installed_deck(at:Vector2,wanted:float)->float:
	var best:=-INF
	for node:MeshInstance3D in demo.town.road_roots.r1.find_children("*","MeshInstance3D",true,false):
		if node.name not in ["PathSurface","StoneTreads"]:continue
		var height:=mesh_height(node,at,-INF,INF,wanted)
		if is_finite(height) and (not is_finite(best) or absf(height-wanted)<absf(best-wanted)):best=height
	return best
func installed_sill(entry:Dictionary)->float:
	var house:Dictionary=demo.state.houses[demo.state._house_index(entry.house_id)];var base:float=house.base_y
	var door:Dictionary=demo.state.house_entrances(entry.house_id).filter(func(e):return e.cell_id==entry.cell_id and e.at.is_equal_approx(entry.at))[0]
	# Sample the exposed tread, beyond the door leaf's underside at z=.167.
	var at:Vector2=door.wall_at+demo.state.Frontage.Frame.normal(door)*(.18 if door.active else .3);var best:=-INF
	for node:MeshInstance3D in demo.town.house_roots[entry.house_id].find_children("*","MeshInstance3D",true,false):best=maxf(best,mesh_height(node,at,base-.02,base+.2))
	return best
func height_geometry(row:Dictionary)->void:
	var maximum:=0.;var sills:=0
	for entry:Dictionary in row.evidence.public_entries+row.evidence.rejected_entries:
		var deck:=installed_deck(entry.street_at,float(entry.height_access.street_y));check(is_finite(deck),"actual road triangle under projected entry")
		maximum=maxf(maximum,absf(deck-float(entry.height_access.street_y)))
		var sill:=installed_sill(entry)
		if is_finite(sill):sills+=1;check(absf(sill-float(entry.height_access.sill_y))<.002,"actual sill top equals sampled support")
	check(maximum<.002 and sills==4,"four actual sills and road mesh heights match spatial evidence")
	facts.get_or_add("height_geometry",[]).append({"road_gap":maximum,"sills":sills})
func build_fixture(kind:String)->Dictionary:return SlopeFixture.build(kind)
func output_directory()->String:return "res://验证记录/M84/slope_entry_20261029/live"
func run()->void:
	OUT=output_directory()
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var f:=build_fixture("mismatch");check(f.ok,"real low/high houses and same road")
	await show(f.city,Vector2(-27,-18),"坡地入口");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-27.,1.2,-17.8);demo.zoom=18.;demo.pitch=.75;demo.yaw=1.15;demo._update_camera();await settle()
	var report:Dictionary=demo.state.functional_zones();var initial:=meshes();var roads:=road_meshes();var authored:Dictionary=demo.state.snapshot()
	check(lane_rows().size()==1 and lane_rows()[0].connected and lane_rows()[0].stage=="cluster" and lane_rows()[0].eligibility.reason=="height_access_missing","published 2D connection cannot grant unsupported vertical access")
	height_geometry(lane_rows()[0]);await select_house("h1");await key(KEY_ESCAPE)
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await key(KEY_L);await refresh_page()
		check(demo.ledger.visible() and "门前高差尚无可用接续" in demo.ledger.body.text and "局部空间" in demo.ledger.body.text,"native L explains actual missing support "+str(size.x))
		check(demo.ledger.scrollbook.get_global_rect().end.y<=size.y,"height page fits viewport");await capture("height_ledger_"+str(size.x));await key(KEY_ESCAPE)
	check(demo.state.snapshot()==authored,"native read/pick preserve authored terrain and history")
	root.size=Vector2i(1440,900);demo.ui_layer.hide()
	for phase in range(3):demo._set_light_phase(phase);await create_timer(.5).timeout;await capture("height_phase"+str(phase))
	demo.ui_layer.show();var changed:Dictionary=demo.state.remove_road("r1");demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and lane_rows().is_empty(),"actual road removal clears stale height reason")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and meshes()==initial and road_meshes()==roads,"native Undo restores exact height source and road/house arrays")
	await key(KEY_Y,true);await settle();quiet();demo.life.set_process(false);check(lane_rows().is_empty(),"native Redo withdraws interface")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	var path:=OUT+"/work.json";var file:=FileAccess.open(path,FileAccess.WRITE);file.store_string(JSON.stringify(demo.state.snapshot(),"",true,true));file.close()
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok,"independent slope disk restore")
	await show(cold,Vector2(-27,-18),"坡地冷读");quiet();demo.life.set_process(false)
	check(demo.state.functional_zones()==report and meshes()==initial and road_meshes()==roads,"cold terrain/road/support diagnosis equals incremental publication")
	var high:=build_fixture("high");check(high.ok,"real shared plateau houses")
	await show(high.city,Vector2(-27,-18),"可达高地入口");quiet();demo.life.set_process(false)
	check(lane_rows().size()==1 and lane_rows()[0].eligibility.district and demo.state.houses.all(func(h):return h.base_y>=1.5),"actual matching high entries remain a district")
	height_geometry(lane_rows()[0]);await key(KEY_L);await refresh_page();check("两侧入口与公共路网已接通" in demo.ledger.body.text,"native L distinguishes usable high plateau");await capture("high_ledger");await key(KEY_ESCAPE)
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual PCM and original bounded pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"spaces":report.spaces,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("ENTRY_HEIGHT_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
