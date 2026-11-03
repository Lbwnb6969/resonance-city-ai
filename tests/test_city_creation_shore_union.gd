extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Boundary=preload("res://scripts/world/city_creation_shore_boundary.gd")
const Fixture=preload("res://tools/fixtures/city_creation_waterfront_contract_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array=[]
var out:=""
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func publish(city:RefCounted)->void:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);life.free()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var city:=State.new();city.initialize_free()
	check(city.add_water([Vector2(-25,-20)] as Array[Vector2],4.,"pond").ok and city.add_water([Vector2(-25,-18.5)] as Array[Vector2],4.,"pond").ok,"actual overlapping ponds")
	var before:Dictionary=city.snapshot();var shores:=Boundary.candidates(city,Vector2(-25,-24))
	check(shores.any(func(s):return s.water_id=="w1") and not shores.any(func(s):return s.water_id=="w2"),"hidden south edge of second pond cannot stand in for exposed union boundary")
	check(shores.all(func(s):return absf(city.water_clearance(s.bank))<.002 and city.water_clearance(s.wet)<0.),"every candidate bank lies on real union exterior with wet interior")
	check(city.snapshot()==before,"shore search leaves author content and IDs unchanged")
	check(city.add_water([Vector2(-25,-20)] as Array[Vector2],4.,"pond").ok,"coincident authored water sources remain intact")
	shores=Boundary.candidates(city,Vector2(-25,-24))
	check(shores.filter(func(s):return s.water_id!="river").all(func(s):return s.water_ids.has("w1") and s.water_ids.has("w3")),"coincident exposed surface retains both real water source IDs")
	var native:=State.new();native.initialize_free();var from:=Vector2(-7,0);var bank:=Boundary.river_bank(native,from,-1.)
	var horizontal:=Vector2(State.river_x(from.y)-State.RIVER_HALF_WIDTH,from.y)
	check(absf(bank.y-from.y)>.1 and bank.distance_squared_to(from)<horizontal.distance_squared_to(from),"sine shore is closest in world space rather than at the same z")
	var brute:=INF
	for i in range(2001):
		var z:float=-5.+float(i)*.005;brute=minf(brute,Vector2(State.river_x(z)-State.RIVER_HALF_WIDTH,z).distance_to(from))
	check(absf(bank.distance_to(from)-brute)<.00001 and absf(native.water_clearance(bank))<.00001,"native river solution agrees with independent dense scan and analytic clearance")
	var f:=Fixture.build("shore",.4);check(f.ok,"rotated actual waterfront fixture");publish(f.city)
	var row:Dictionary=f.city.functional_zones().spaces.filter(func(s):return s.kind=="waterfront")[0]
	check(row.eligibility.district and row.evidence.public_entries.size()==2 and row.evidence.rejected_entries.size()==1,"real rotated coast keeps supported faces while withdrawing one unstepped standing area")
	check(row.evidence.public_entries.all(func(e):return e.shore_access.ok and e.shore_access.samples>1000 and e.shore_access.corner_samples==253),"accepted shore access measures full width and standing disk")
	check(row.evidence.rejected_entries[0].shore_access.reason=="unsupported_corridor_height" and row.evidence.rejected_entries[0].shore_access.max_grade>.22,"standing-side grade cannot hide outside the previous three approach lines")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(f.city.snapshot()))).ok,"independent ordinary waterfront cold restore");publish(cold)
	check(cold.functional_zones()==f.city.functional_zones(),"cold union source identities and full-width evidence equal incremental publication")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SHORE_UNION ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
