extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array=[]
var out:=""
static func loop_points()->Array[Vector2]:return [Vector2(-25,-20),Vector2(-25,-15),Vector2(-20,-15),Vector2(-20,-20),Vector2(-25,-20)]
static func fixture()->RefCounted:
	var city:=State.new();city.initialize_free();assert(city.add_water([Vector2(-25,-20)] as Array[Vector2],1.8,"pond").ok);return city
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var city:=fixture();var before:Dictionary=city.snapshot()
	var preview:Dictionary=city.preview_water(loop_points(),1.8,"channel")
	check(preview.ok and not preview.get("no_op",false) and city.snapshot()==before,"read-only continuous sweep permits a wet-ended loop")
	check(city.add_water(loop_points(),1.8,"channel").ok and city.waters.size()==2,"closed channel is one real authored water record")
	check(city.water_clearance(Vector2(-22.5,-17.5))>0. and city.water_clearance(Vector2(-25,-17.5))<0.,"closed sweep keeps dry island and wet canal")
	var saved:Dictionary=city.snapshot();var revision:int=city.revision;var history:int=city._undo.size()
	var repeat:Dictionary=city.add_water(loop_points(),1.8,"channel")
	check(repeat.ok and repeat.no_op and city.snapshot()==saved and city.revision==revision and city._undo.size()==history,"repeat creates no water ID, history or revision")
	var reversed:=loop_points();reversed.reverse();check(city.preview_water(reversed,1.8,"channel").no_op,"reverse duplicate is also contained")
	check(city.undo().ok and city.waters.size()==1 and city.redo().ok and city.waters==saved.waters,"one Undo/Redo restores the entire ring")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok and cold.waters==city.waters,"ordinary schema cold restore supports closed water union")
	check(cold.preview_water(loop_points(),1.8,"channel").no_op,"cold no-op classification equals incremental")
	check(city.preview_water(loop_points(),3.2,"channel").ok and not city.preview_water(loop_points(),3.2,"channel").get("no_op",false),"new swept side area counts even when all centre points are wet")
	var joined:=fixture();check(joined.add_water([Vector2(-20,-20)] as Array[Vector2],1.8,"pond").ok,"second independent pond")
	check(joined.add_water([Vector2(-25,-20),Vector2(-20,-20)] as Array[Vector2],1.8,"channel").ok,"sparse wet endpoints still expose a dry connecting span")
	before=joined.snapshot();check(not joined.add_water([Vector2(-30,-20),Vector2(-29,-20)] as Array[Vector2],1.8,"channel").ok and joined.snapshot()==before,"dry start remains atomic refusal")
	var conflict:=fixture();check(conflict.add_road([Vector2(-28,-17.5),Vector2(-18,-17.5)] as Array[Vector2],"path","none").ok,"pre-existing road crosses proposed loop")
	before=conflict.snapshot();var refused:Dictionary=conflict.add_water(loop_points(),1.8,"channel")
	check(not refused.ok and not refused.conflicts.is_empty() and conflict.snapshot()==before,"road remains an explicit conflict until compound preview is implemented")
	var river:=State.new();river.initialize_free();var x:=State.river_x(-25.)
	check(river.add_water([Vector2(x,-25),Vector2(x,-24)] as Array[Vector2],1.2,"channel").no_op,"sweep fully within the native sine river is no-op")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CHANNEL_RETURN ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
