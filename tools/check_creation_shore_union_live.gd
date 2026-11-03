extends "res://tools/check_creation_bank_entry_live.gd"
const ShoreFixture=preload("res://tools/fixtures/city_creation_waterfront_contract_fixture.gd")
const Approach=preload("res://scripts/world/city_creation_shore_approach.gd")
func actual_height(at:Vector2,wanted:float)->float:
	var best:=INF;var height:=-INF
	for face:Array in local_faces:
		var hit:Variant=Geometry3D.segment_intersects_triangle(Vector3(at.x,wanted+.025,at.y),Vector3(at.x,wanted-.025,at.y),face[0],face[1],face[2])
		if hit!=null and absf(float(hit.y)-wanted)<best:best=absf(float(hit.y)-wanted);height=hit.y
	return height
func walk_points(access:Dictionary)->Array[Vector2]:
	var result:Array[Vector2]=[];var street:Vector2=access.street_at;var end:Vector2=access.standing_at
	var direction:Vector2=(access.bank_at-street).normalized();var tangent:=Vector2(-direction.y,direction.x)
	var count:=maxi(1,ceili(street.distance_to(end)/.04))
	for row in range(count+1):
		for column in range(19):result.append(street.lerp(end,float(row)/count)+tangent*lerpf(-.35,.35,float(column)/18))
	for z in range(-9,10):
		for x in range(-9,10):
			if x*x+z*z<=81:result.append(end+Vector2(x,z)*(.35/9.))
	return result
func geometry(row:Dictionary)->void:
	var total:=0;var missing:=0;var maximum:=0.
	for entry:Dictionary in row.evidence.public_entries:
		var access:Dictionary=entry.shore_access;var points:=walk_points(access)
		var bounds:=Rect2(access.street_at,Vector2.ZERO).expand(access.standing_at).grow(.5);cache_faces(bounds)
		var road:Dictionary=demo.state.roads.filter(func(r):return r.id==entry.road_id)[0]
		for at:Vector2 in points:
			var sample:=Approach.surface(demo.state,road,at);var gap:=mesh_support(at,float(sample.y));total+=1
			if not is_finite(gap):missing+=1
			else:maximum=maxf(maximum,gap)
	check(missing==0 and maximum<.012,"every width and standing-disk sample has real visible terrain or road support")
	facts.get_or_add("full_width",[]).append({"samples":total,"missing":missing,"max_gap":maximum})
	for entry:Dictionary in row.evidence.rejected_entries:
		var access:Dictionary=entry.shore_access
		if not access.has("blocked_at"):continue
		var at:Vector2=access.blocked_at;cache_faces(Rect2(at-Vector2.ONE*.15,Vector2.ONE*.3))
		var road:Dictionary=demo.state.roads.filter(func(r):return r.id==entry.road_id)[0]
		var measured:=0.;var supported:=true
		var surface:=Approach.surface(demo.state,road,at);var actual:=actual_height(at,float(surface.y));supported=supported and is_finite(actual)
		for offset:Vector2 in [Vector2(-.35/9.,0),Vector2(0,-.35/9.)]:
			var neighbor:=Approach.surface(demo.state,road,at+offset);var other:=actual_height(at+offset,float(neighbor.y));supported=supported and is_finite(other)
			if is_finite(actual) and is_finite(other):measured=maxf(measured,absf(actual-other)/offset.length())
		check(supported and measured>.22,"rejected standing-side grade exists in production ground triangles")
		facts.rejected_grade=measured
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	for kind:String in ["overlap","rotation"]:
		var f:=ShoreFixture.build("shore",.4 if kind=="rotation" else 0.);check(f.ok,"actual public shore fixture "+kind)
		if kind=="overlap":check(f.city.add_water([ShoreFixture.ORIGIN+Vector2(-3,6.6),ShoreFixture.ORIGIN+Vector2(7,6.6)] as Array[Vector2],2.,"pond").ok,"actual overlapping authored water body")
		await show(f.city,Vector2(-26,-17),kind);quiet();demo.life.set_process(false)
		demo.focus=Vector3(-26,.6,-17);demo.zoom=17.;demo.pitch=.8;demo.yaw=.35;demo._update_camera();await settle()
		var before:Dictionary=demo.state.snapshot();var report:Dictionary=demo.state.functional_zones();var row:Dictionary=report.spaces.filter(func(s):return s.kind=="waterfront")[0]
		check(row.eligibility.district,"published supported waterfront remains qualified "+kind)
		if kind=="overlap":check(not row.source_ids.has("w2") and row.evidence.shore_faces.all(func(s):return s.water_id=="w1"),"submerged interior boundary cannot fabricate a public shore source")
		else:check(row.evidence.public_entries.size()==2 and row.evidence.rejected_entries.size()==1,"published full-width proof withdraws unsupported standing side")
		geometry(row)
		await key(KEY_L);await refresh_page();check(demo.ledger.visible(),"native L shows revised shore evidence");await capture(kind+"_ledger");await key(KEY_ESCAPE)
		check(demo.state.snapshot()==before,"shore inspection preserves author state")
		var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before))).ok,"independent shore cold restore")
		await show(cold,Vector2(-26,-17),"岸线冷读");quiet();demo.life.set_process(false);check(demo.state.functional_zones()==report,"cold and incremental published shore evidence agree")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SHORE_UNION_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
