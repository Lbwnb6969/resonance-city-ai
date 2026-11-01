extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_flowering_vines_fixture.gd")
const Plan=preload("res://scripts/world/city_creation_flowering_vines.gd")
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
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
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):push_error("new isolated evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var city:=Fixture.seed()
	var base:=Samples.plans(city).duplicate(true);var before:Dictionary=city.snapshot()
	check(not base.is_empty() and Plan.plans(city).is_empty() and not Plan.set_enabled(city,true).ok and city.snapshot()==before,"old free base vines remain free; unearned new flowers rejected without mutation")
	check(city.begin_progression_epoch(out+"/first.json").ok and not Plan.unlocked(city),"new account level1 has no unearned variant")
	var earned:=Fixture.earn(city);check(earned.ok and earned.built==50 and Plan.unlocked(city),"50 real authored buildings earn level2 without forged receipts")
	check(city.houses.size()==1 and Samples.plans(city)==base and Plan.plans(city).is_empty(),"earned appearance is optional and base anchors unchanged")
	check(Plan.set_enabled(city,true).ok,"author enables earned flowers")
	var rows:=Plan.plans(city);before=city.snapshot();check(rows.size()==10 and city.snapshot()==before,"ten actual outer-column flower clusters, read-only plan")
	var outside:=true
	for row:Dictionary in rows:outside=outside and (Vector3(row.position)-Vector3(row.column)).dot(row.outward)>.14 and row.length>0.
	check(outside,"all flower envelopes face away from central opening")
	check(city.undo().ok and Plan.plans(city).is_empty() and city.redo().ok and Plan.plans(city)==rows,"native history replays preference without awarding content again")
	check(city.CreationPolicy.set_progression_enabled(city,false,out+"/paused.json").ok and Plan.plans(city)==rows,"earned appearance survives economy pause")
	var prefs:Dictionary=city.creative_settings.presentation.duplicate();prefs.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":prefs}).ok and Plan.plans(city).is_empty() and Samples.plans(city)==base,"global decoration off hides flowers without changing free music anchors")
	check(city.undo().ok and Plan.plans(city)==rows,"global switch undo restores derived flowers")
	check(city.rotate_house("h1",.6).ok and Plan.plans(city)!=rows,"flowers follow real host rotation")
	check(city.undo().ok and Plan.plans(city)==rows,"rotation undo restores exact anchors")
	var saved:Dictionary=JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true));var cold:=Fixture.State.new()
	check(cold.restore(saved).ok and Plan.plans(cold)==rows and cold.creative_settings.presentation.flowering_vines,"optional preference cold-loads with retained earned level")
	var bad:Dictionary=saved.duplicate(true);bad.creative_settings.presentation.flowering_vines=1
	check(not cold.restore(bad).ok,"new preference rejects numeric boolean")
	bad=saved.duplicate(true);bad.creative_settings.presentation.erase("flowering_vines");bad.creative_settings.presentation.other=true
	check(not cold.restore(bad).ok,"unknown presentation option remains rejected")
	check(city.remove_house("h1").ok and Plan.plans(city).is_empty() and city.undo().ok and Plan.plans(city)==rows,"source deletion and undo derive appearance without persistent orphan geometry")
	check(Plan.set_enabled(city,false).ok and Plan.plans(city).is_empty() and Samples.plans(city)==base,"individual switch preserves original free vines")
	check(city.add_house(Vector2(-12,-12)).ok and not Plan.clear(city,Vector3(-12,1.3,-12),"h1"),"real neighbouring footprint rejects a flower envelope")
	check(city.add_road([Vector2(-8,-15),Vector2(-8,-10)] as Array[Vector2],"path","none").ok and not Plan.clear(city,Vector3(-8,1.3,-12),"h1"),"real public road keeps its full width clear")
	check(Plan.clear(city,Vector3(-6,1.3,-12),"h1"),"actual clear space remains available outside the road envelope")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"earned":earned}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FLOWERING_VINES ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
