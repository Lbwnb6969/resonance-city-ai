extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_stepping_support_fixture.gd")
const Surface=preload("res://scripts/world/city_creation_stepping_surface.gd")
const Corridor=preload("res://scripts/world/city_creation_entry_corridor.gd")
var checks:=0
var failures:Array=[]
var out:=""
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var city:=Fixture.build();var before:Dictionary=city.snapshot();var profile:Dictionary=city.road_profile(city.roads[0])
	check(profile.stepping_runs.size()==1,"public channel crossing has a real stone run")
	var run:Dictionary=profile.stepping_runs[0];var stone:Dictionary=run.stones[1]
	var gap:Vector2=(Vector2(stone.at)+Vector2(run.stones[2].at))*.5
	var supported:Dictionary=city._road_heights.surface_at(stone.at);var missing:Dictionary=city._road_heights.surface_at(gap)
	check(supported.supported and supported.stone_index==1 and supported.top_y==stone.y,"real top centre supports an actual foot placement")
	check(not missing.supported and city.water_clearance(gap)<0.,"wet inter-stone gap is not a continuous surface")
	check(absf(float(missing.y)-city.street_height(gap))<.000001,"existing animated stride height remains unchanged")
	var house:Dictionary=city.houses[0];var entry:Dictionary=city.house_entrances("h1")[0]
	var plan:Dictionary=city.Frontage.porch_plan(city,house,entry) if entry.active else {}
	var sample:Dictionary=preload("res://scripts/world/city_creation_entry_height.gd")._surface(city,house,entry,gap,city.roads[0],profile,plan)
	check(sample.kind=="road_gap","entry height never borrows virtual stride as a deck")
	sample.at=gap;var evidence:={"samples":0,"max_rise":0.,"max_grade":0.}
	check(not Corridor.supported(city,sample,[],evidence) and evidence.reason=="road_surface_gap","continuous corridor rejects missing surface before height comparison")
	var corner:Vector2=stone.at+Vector2(stone.axis)*float(stone.radius_along)*.8+Vector2(-stone.axis.y,stone.axis.x)*float(stone.radius_cross)*.8
	check(not Surface.support([run],corner).supported,"bounding rectangle corner is outside the actual ten-sided top")
	var cap:Vector2=Vector2(run.stones[0].at)-Vector2(run.stones[0].axis)*.25
	check(not city._road_heights.surface_at(cap).supported,"rounded road cut extends beyond first stone arc")
	var cap_surface:Dictionary=preload("res://scripts/world/city_creation_entry_height.gd")._surface(city,house,entry,cap,city.roads[0],profile,plan)
	check(cap_surface.kind in ["ground","porch_step","door_step","road_gap"],"cut approach cannot borrow absent road paving")
	check(city.snapshot()==before,"support queries preserve authored water, roads and identity")
	var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before))).ok,"stepping city cold restore")
	cold.prepare_ground_height();check(cold._road_heights.surface_at(gap)==missing,"cold gap evidence equals incremental classification")
	check(city.remove_road("r1").ok and city.undo().ok,"real crossing road removal/Undo")
	city.prepare_ground_height();check(city._road_heights.surface_at(gap)==missing,"Undo restores exact support and stride classification")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("STEPPING_SUPPORT ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
