extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_bank_entry_fixture.gd")
var checks:=0
var failures:Array=[]
var out:=""
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var cases:Array=[]
	for kind:String in ["bridge","bridge_edge","wet_corner"]:
		var f:=Fixture.build(kind);check(f.ok,"public bank fixture "+kind)
		if not f.ok:continue
		cases.append({"kind":kind,"access":f.access})
		var city:RefCounted=f.city;var before:Dictionary=city.snapshot()
		if kind!="wet_corner":check(not city.road_profile(city.roads[0]).bridge_runs.is_empty(),"real bridge shares the approach street")
		if kind=="bridge":check(f.access.ok and f.access.corridor.get("corner_samples",0)>0,"dry oblique entrance reaches bridge approach through sampled turning area")
		elif kind=="bridge_edge":check(not f.access.ok and f.access.reason=="unsupported_corridor_height" and f.access.samples>0,"centreline access cannot hide a transverse bridge approach ledge")
		else:check(not f.access.ok,"wet turning area cannot grant public access")
		var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before))).ok,"bank city cold restores")
		check(Fixture.Height.assess(cold,cold.houses[0],cold.house_entrances("h1")[0],f.target,cold.roads[0])==f.access,"cold and incremental bank support agree")
		check(city.snapshot()==before,"bank query preserves authored water/roads/houses")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("BANK_ENTRY ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if failures.is_empty() else 1)
