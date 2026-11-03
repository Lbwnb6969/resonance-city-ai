extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_flowering_vines_fixture.gd")
const Plan=preload("res://scripts/world/city_creation_window_pennants.gd")
var checks:=0
var failures:Array=[]
var out:="res://验证记录/M84/window_pennants_20261101"
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or DirAccess.dir_exists_absolute(out):push_error("new isolated evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var city:=Fixture.seed()
	check(not Plan.unlocked(city) and Plan.plans(city).is_empty() and not Plan.set_enabled(city,true).ok,"unearned account cannot enable the new sample")
	var began:Dictionary=city.begin_progression_epoch(out+"/first.json");check(began.ok and not Plan.unlocked(city),"level one account remains ineligible")
	var earned:Dictionary=Fixture.earn(city);check(earned.ok and Plan.unlocked(city),"real authored growth reaches the existing level two qualification")
	var before:Dictionary=city.snapshot();check(Plan.set_enabled(city,true).ok and city.snapshot()!=before,"author explicitly enables the new appearance")
	var rows:=Plan.plans(city);check(rows.size()==1 and city.snapshot()!=before,"one real house receives one deterministic pair anchor")
	before=city.snapshot();check(Plan.plans(city)==rows and city.snapshot()==before,"derived plan is read-only and idempotent")
	check(city.undo().ok and Plan.plans(city).is_empty() and city.redo().ok and Plan.plans(city)==rows,"Undo/Redo changes only the author choice")
	check(city.CreationPolicy.set_progression_enabled(city,false,out+"/paused.json").ok and Plan.plans(city)==rows,"pause preserves earned use")
	var saved:Dictionary=JSON.parse_string(JSON.stringify(city.snapshot()));var cold:=Fixture.State.new()
	check(cold.restore(saved).ok and Plan.plans(cold)==rows and cold.creative_settings.presentation.window_pennants,"cold read keeps the earned choice")
	var bad:Dictionary=saved.duplicate(true);bad.creative_settings.presentation.window_pennants=1
	check(not cold.restore(bad).ok,"strict boolean validation rejects forged preference")
	var host:String=city.houses[0].id
	check(city.rotate_house(host,PI*.5).ok and is_equal_approx(float(Plan.plans(city)[0].yaw),PI*.5),"rotated house carries the authored orientation")
	check(city.add_cell(host,0,0,1).ok and Plan.plans(city)[0].position.y>rows[0].position.y,"upper room becomes the support candidate")
	var mixed:Dictionary=city.houses[0].duplicate(true)
	mixed.cells.push_front({"x":4,"z":4,"level":0,"kind":"balcony"})
	city.houses[0]=mixed
	check(Plan.plans(city).size()==1,"non-room first cell does not hide real rooms")
	city.houses[0].cells=[{"x":4,"z":4,"level":0,"kind":"balcony"}]
	check(Plan.plans(city).is_empty(),"non-room-only geometry cannot support a pennant")
	city.houses[0]=cold.houses[0].duplicate(true)
	var prefs:Dictionary=city.creative_settings.presentation.duplicate();prefs.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":prefs}).ok and Plan.plans(city).is_empty(),"global decoration switch hides derived geometry")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"rows":rows,"earned":earned}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WINDOW_PENNANTS ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
