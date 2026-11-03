extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const State=Fixture.State
const Ledger=preload("res://scripts/world/city_creation_progression_ledger.gd")
const Epoch=preload("res://scripts/world/city_creation_epoch_counters.gd")
var out:=""
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func network(city:RefCounted)->void:
	var n=load("res://scripts/world/city_creation_network.gd").new();n.state=city;n._build_graph();city.prepare_regional_echo(n)
func opened(label:String)->RefCounted:
	var city:=State.new();city.initialize_free();check(city.begin_progression_epoch(out+"/"+label+".json").ok,"backed-up empty epoch "+label);return city
func cells(shape:String)->Array:
	var f:=Fixture.courtyard(shape,"none");return f.city.houses[0].cells.map(func(c):return {"x":c.x,"z":c.z,"level":c.level,"kind":c.kind})
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var city:=opened("houses");var old:Dictionary=city.harmony_journey.duplicate(true)
	for i in range(5):check(city.add_house(Vector2(-35+i*5,-25)).ok,"actual peak house")
	check(Ledger.collect(city).earned==10,"five net houses pay original two point valuation")
	var xp:int=city.cozy_progression.xp
	for i in range(20):
		check(city.remove_house(city.houses[-1].id).ok and Ledger.collect(city).earned==0,"actual deletion never pays")
		check(city.add_house(Vector2(-15,-25)).ok and Ledger.collect(city).earned==0,"twenty fresh IDs at same net peak cannot farm")
	check(city.cozy_progression.xp==xp and city.cozy_progression.receipts.house_peak==5,"net peak high-water persists across twenty replacements")
	check(city.add_house(Vector2(-10,-25)).ok and Ledger.collect(city).earned==2,"sixth net house pays once")
	check(city.add_cell(city.houses[0].id,1,0,0).ok and Ledger.collect(city).earned==1,"additional authored module raises expansion peak")
	check(city.undo().ok and city.redo().ok and Ledger.collect(city).earned==0,"module Undo Redo cannot farm")
	check(city.harmony_journey==old,"epoch valuation never edits old cutoff or rights")
	var court:=opened("spaces");check(court.add_house_stroke(Fixture.ORIGIN,cells("U")).ok,"pure geometric half court")
	network(court);var earned:Dictionary=Ledger.collect(court)
	check(earned.events.get("space_cluster",0)>0 and not earned.events.has("space_district"),"half enclosure discovered without shops or residents")
	for x in range(1,4):check(court.add_cell("h1",x,4,0).ok,"close real courtyard edge")
	check(court.add_road([Fixture.ORIGIN+Vector2(-2,3.6),Fixture.ORIGIN+Vector2(10,3.6)] as Array[Vector2],"path","none").ok,"real public court portal")
	network(court);earned=Ledger.collect(court);check(earned.events.get("space_district",0)>0,"closed court geometry and portal publish district discovery")
	var paid:Dictionary=court.cozy_progression.duplicate(true);var space_keys:Array=Epoch.spaces(court).keys()
	check(court.remove_house("h1").ok,"remove actual court");Ledger.collect(court)
	check(court.add_house_stroke(Fixture.ORIGIN,cells("ring")).ok,"recreate court with fresh owner and cell IDs");network(court);earned=Ledger.collect(court)
	check(earned.earned==0 and court.cozy_progression==paid and Epoch.spaces(court).keys()==space_keys,"same-place geometric rediscovery does not repay on fresh IDs")
	check(court.save_city(out+"/paid.json").ok,"new counter keys serialize with existing schema")
	var cold:=State.new();check(cold.load_city(out+"/paid.json").ok and cold.cozy_progression==paid and Ledger.collect(cold).earned==0,"disk cold state retains paid peaks and discoveries")
	# A real existing account with pre-extension counters is a compatibility fixture.
	var raw:Dictionary=court.snapshot();raw.cozy_progression.baseline.erase("house_peak");raw.cozy_progression.baseline.erase("cell_peak")
	for field:String in ["baseline","receipts"]:
		for key:String in raw.cozy_progression[field].keys():
			if key in ["house_peak","cell_peak"] or key.begins_with("space_"):raw.cozy_progression[field].erase(key)
	var before_raw:Dictionary=raw.duplicate(true);var legacy_epoch:=State.new();check(legacy_epoch.restore(raw).ok,"old schema account restores")
	check(raw==before_raw and legacy_epoch.cozy_progression.baseline.has("house_peak") and Ledger.collect(legacy_epoch).earned==0,"old geometric content is baseline with no historical replay or input mutation")
	check(legacy_epoch.cozy_progression.xp==raw.cozy_progression.xp and legacy_epoch.cozy_progression.level==raw.cozy_progression.level,"old earned balance preserved")
	var old_path:=out+"/pre_extension_account.json";FileAccess.open(old_path,FileAccess.WRITE).store_string(JSON.stringify(raw,"\t"));var original_bytes:=FileAccess.get_file_as_bytes(old_path)
	var file_reader:=State.new();check(file_reader.load_city(old_path).ok and Ledger.collect(file_reader).earned==0,"normal old-account opening baselines existing geometry before new edits")
	check(FileAccess.get_file_as_bytes(old_path)==original_bytes and file_reader.harmony_journey==raw.harmony_journey,"old original bytes and cutoff rights remain intact during baseline opening")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("EPOCH_GEOMETRY ",JSON.stringify(report));quit(0 if report.ok else 1)
