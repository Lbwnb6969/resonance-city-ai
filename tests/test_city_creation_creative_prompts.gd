extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Prompts=preload("res://scripts/world/city_creation_creative_prompts.gd")
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
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var began:=Time.get_ticks_msec();var city:=State.new();city.initialize_free()
	var old:=city.snapshot()
	check(Prompts.selected(city).is_empty() and city.creative_settings.version==1,"old defaults have no implicit selection or upgrade")
	for id:String in Prompts.IDS:check(not str(Prompts.CARDS[id].text).is_empty(),"preview content exists "+id)
	check(city.snapshot()==old,"browsing content is read-only")
	check(not Prompts.choose(city,"unknown").ok and city.snapshot()==old,"unknown ID fails without mutation")
	check(Prompts.choose(city,"").no_op and city.snapshot()==old,"ignore never upgrades or creates an account")
	var picked:=Prompts.choose(city,"quiet_corner")
	check(picked.ok and picked.before_upgrade==old and city.creative_settings.version==2,"explicit selection provides exact old snapshot before version upgrade")
	check(city.cozy_progression.is_empty() and city.harmony_journey==old.harmony_journey,"prompt does not require economy or change old rights")
	var revision:int=city.revision
	check(Prompts.choose(city,"quiet_corner").no_op and city.revision==revision,"repeated choice has no transaction")
	check(city.undo().ok and city.creative_settings==old.creative_settings,"Undo restores exact version1 settings")
	check(city.redo().ok and Prompts.selected(city)=="quiet_corner","Redo restores explicit prompt")
	check(city.save_city(out+"/selected.json").ok,"real isolated file saves version2 settings")
	var cold:=State.new()
	check(cold.load_city(out+"/selected.json").ok and Prompts.selected(cold)=="quiet_corner","cold file load retains selection")
	check(Prompts.choose(city,"roof_walk").ok and Prompts.selected(city)=="roof_walk","author can replace inspiration")
	check(Prompts.choose(city,"").ok and Prompts.selected(city).is_empty(),"author can put prompt aside")
	check(city.undo().ok and Prompts.selected(city)=="roof_walk","putting aside is undoable")
	var before:=city.snapshot()
	check(city.add_house(Vector2(-8,-8)).ok and Prompts.selected(city)=="roof_walk","real construction does not auto-complete or replace prompt")
	check(city.undo().ok and Prompts.selected(city)=="roof_walk","geometry Undo keeps current author intent")
	check(city.begin_progression_epoch(out+"/epoch.json").ok,"existing epoch API accepts prompt settings")
	check(city.CreationPolicy.set_progression_enabled(city,false,out+"/paused.json").ok and Prompts.selected(city)=="roof_walk","economy pause retains inspiration")
	var checkpoint:=city.snapshot();var invalids:Array=[]
	for value:Variant in [{"version":2,"selected":"quiet_corner"},{"version":true,"selected":"quiet_corner"},{"version":1,"selected":"bad"},{"version":1,"selected":false},{"version":1,"selected":"","extra":0},{}]:
		var bad:Dictionary=checkpoint.duplicate(true);bad.creative_settings.inspiration=value;invalids.append(bad)
	var downgrade:Dictionary=checkpoint.duplicate(true);downgrade.creative_settings.version=1;invalids.append(downgrade)
	var missing:Dictionary=checkpoint.duplicate(true);missing.creative_settings.erase("inspiration");invalids.append(missing)
	for bad:Dictionary in invalids:
		check(not city.restore(bad).ok and city.snapshot()==checkpoint,"strict malformed input leaves current city unchanged")
	var legacy:=State.new();legacy.initialize_empty();var legacy_before:=legacy.snapshot()
	check(not Prompts.choose(legacy,"quiet_corner").ok and legacy.snapshot()==legacy_before,"legacy policy not silently converted")
	var fresh:=State.new();fresh.initialize_free()
	check(Prompts.selected(fresh).is_empty() and city.cozy_progression==checkpoint.cozy_progression,"new city has no cross-city unlock or reward transfer")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CREATIVE_PROMPTS ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
