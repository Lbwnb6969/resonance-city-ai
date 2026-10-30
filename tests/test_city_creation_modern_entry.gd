extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_modern_entry_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Access=preload("res://scripts/world/city_creation_entry_height.gd")
var checks:=0
var failures:Array=[]
var cases:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func network(city:RefCounted)->void:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);life.free()
func rows(city:RefCounted)->Array:return city.functional_zones().spaces.filter(func(s):return s.evidence.geometry=="narrow_lane")
func run()->void:
	var began:=Time.get_ticks_msec()
	for architecture:String in ["chalet","pavilion","panorama","twin_gable","green_lodge"]:
		for kind:String in ["flat","high","mismatch"]:
			for yaw:float in [0.,.4,PI*.5]:
				var f:=Fixture.build(kind,yaw,architecture);var city:RefCounted=f.city
				check(f.ok,"public modern fixture "+architecture+kind+str(yaw))
				check(rows(city).size()==1 and rows(city)[0].eligibility.reason=="network_waiting","unpublished modern interface waits")
				network(city);var before:Dictionary=city.snapshot();var result:=rows(city)
				check(city.snapshot()==before,"spatial modern query is read only")
				check(result.size()==1,"modern facing wall interface remains")
				if result.size()!=1:continue
				var row:Dictionary=result[0];var records:Array=row.evidence.public_entries+row.evidence.rejected_entries
				check(row.eligibility.district==(kind!="mismatch"),"only actually supported modern approaches qualify "+architecture+kind+str(yaw))
				check(records.size()==4 and records.all(func(e):return e.height_access.kind=="modern_ground_door" and not e.height_access.active_steps and e.height_access.step_count==0),"no modern facade borrows classical steps")
				if kind=="mismatch":check(row.eligibility.reason=="height_access_missing" and not row.evidence.rejected_entries.is_empty(),"actual missing modern support explains cluster")
				else:check(row.evidence.public_entries.all(func(e):return e.height_access.samples>0),"all accepted modern entries sampled")
				var house:Dictionary=city.houses[0];var entry:Dictionary=city.house_entrances(house.id)[0]
				var at:Vector2=entry.wall_at+city.Frontage.Frame.normal(entry)*.3
				check(Access._surface(city,house,entry,at,city.roads[0],city.road_profile(city.roads[0]),{}).kind=="ground","actual facade has no exterior stone tread")
				var cold:=Fixture.Slope.Base.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before,"",true,true))).ok,"independent modern cold restore");network(cold)
				check(rows(cold)==result,"modern cold source and diagnostics equal incremental")
				cases.append({"architecture":architecture,"kind":kind,"yaw":yaw,"district":row.eligibility.district})
	var f:=Fixture.build("mismatch");var city:RefCounted=f.city;network(city);var original:=rows(city);var rights:Dictionary=city.functional_benefits()
	check(city.remove_road("r1").ok,"public modern street removal");network(city);check(rows(city).is_empty(),"no stale modern height interface")
	check(city.undo().ok,"modern road Undo");network(city);check(rows(city)==original and city.functional_benefits()==rights,"Undo restores modern evidence and original rights")
	var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok,"public modern decoration toggle");network(city)
	check(rows(city)==original,"decoration cannot create modern support")
	var terrace:=Fixture.build("mismatch",0.,"terrace");network(terrace.city)
	var door:Dictionary=terrace.city.house_entrances("h1")[0]
	var deferred:=Access.assess(terrace.city,terrace.city.houses[0],door,door.at,terrace.city.roads[0])
	check(deferred.kind=="existing_modern_deck" and deferred.scope=="unchanged","terrain-supported terrace deck explicitly deferred")
	var out:="res://验证记录/M84/modern_entry_20261030/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("MODERN_ENTRY ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
