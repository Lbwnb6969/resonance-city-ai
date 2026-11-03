extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array=[]
var out:=""
static func points()->Array[Vector2]:return [Vector2(-25,-20),Vector2(-13,-20)]
static func fixture()->RefCounted:
	var city:=State.new();city.initialize_free()
	assert(city.add_water([Vector2(-25,-20)] as Array[Vector2],1.8,"pond").ok)
	assert(city.add_road([Vector2(-20,-25),Vector2(-20,-15)] as Array[Vector2],"path","none").ok)
	assert(city.add_road([Vector2(-17,-25),Vector2(-17,-15)] as Array[Vector2],"brick","none").ok)
	return city
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var city:=fixture();var before:Dictionary=city.snapshot();var plan:Dictionary=city.preview_water_crossing(points(),1.8)
	check(plan.ok and plan.get("requires_confirmation",false),"explicit plan contains candidate water and crossing roads")
	if not plan.ok:print(plan);quit(1);return
	check(city.snapshot()==before and city._undo.size()==3,"preview never writes original world, IDs or history")
	check(plan.affected_roads==["r1","r2"] and plan.after.roads.all(func(r):return r.bridge),"all affected roads are reviewed together")
	check(not plan.candidate.road_profile(plan.candidate.roads[0]).stepping_runs.is_empty(),"candidate narrow path has real stepping stones")
	check(not plan.candidate.road_profile(plan.candidate.roads[1]).bridge_runs.is_empty(),"candidate brick street has a real architectural bridge")
	check(not city.add_water(points(),1.8,"channel").ok and city.snapshot()==before,"ordinary add_water keeps its explicit road conflict contract")
	var corrupt:Dictionary=plan.duplicate(true);corrupt.after.roads[0].width=5.
	check(not city.commit_water_crossing(corrupt).ok and city.snapshot()==before,"tampered reviewed candidate is rejected without IDs")
	var wrong_version:Dictionary=plan.duplicate(true);wrong_version.rules_version=0
	check(not city.commit_water_crossing(wrong_version).ok,"obsolete compound rule version is rejected")
	var changed_model:Dictionary=city.preview_water_crossing(points(),1.8);changed_model.candidate.add_house(Vector2(-30,-30))
	check(not city.commit_water_crossing(changed_model).ok and city.snapshot()==before,"changed preview model cannot commit a different reviewed world")
	var other:=fixture();check(not other.commit_water_crossing(plan).ok,"review cannot be reused for a different identical city")
	var accepted:Dictionary=city.commit_water_crossing(plan)
	check(accepted.ok and city.waters.size()==2 and city._undo.size()==4,"one confirmed water and road transaction")
	for i in range(before.roads.size()):
		var original:Dictionary=before.roads[i].duplicate(true);var result:Dictionary=city.roads[i].duplicate(true);original.erase("bridge");result.erase("bridge")
		check(original==result,"road centreline, identity, width, paving and street furniture remain intact")
	var saved:Dictionary=city.snapshot();var cold:=State.new()
	check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"ordinary schema cold restores compound result")
	check(city.undo().ok and city.waters==before.waters and city.roads==before.roads,"single Undo restores original water and roads")
	check(city.redo().ok and city.waters==saved.waters and city.roads==saved.roads,"single Redo restores full crossing result")
	check(city.remove_water_at(Vector2(-20,-20)).ok and city.roads.all(func(r):return not r.bridge),"fill recomputes bridge flags over the remaining water union")
	var stale:=fixture();var stale_plan:Dictionary=stale.preview_water_crossing(points(),1.8);stale.add_house(Vector2(-30,-30));var changed:Dictionary=stale.snapshot()
	check(not stale.commit_water_crossing(stale_plan).ok and stale.snapshot()==changed,"stale plan cannot publish after another edit")
	var blocked:=fixture();blocked.add_house(Vector2(-15,-20));var blocked_before:Dictionary=blocked.snapshot()
	check(not blocked.preview_water_crossing(points(),1.8).ok and blocked.snapshot()==blocked_before,"any house conflict rejects the entire candidate")
	var longitudinal:=State.new();longitudinal.initialize_free();longitudinal.add_water([Vector2(-25,-20)] as Array[Vector2],1.8,"pond")
	longitudinal.add_road([Vector2(-21,-20),Vector2(-15,-20)] as Array[Vector2],"path","none");var long_before:Dictionary=longitudinal.snapshot()
	check(not longitudinal.preview_water_crossing(points(),1.8).ok and longitudinal.snapshot()==long_before,"longitudinal flooded road is not promoted into a bridge")
	var roundabout:=fixture();roundabout.add_road([Vector2(-23,-23),Vector2(-14,-23)] as Array[Vector2],"path","none")
	check(roundabout.add_roundabout(Vector2(-20,-23)).ok,"real street platform in future water path")
	var round_before:Dictionary=roundabout.snapshot();check(not roundabout.preview_water_crossing(points(),1.8).ok and roundabout.snapshot()==round_before,"existing roundabout platform prevents compound flooding")
	var checkpoint:=fixture();var checkpoint_plan:Dictionary=checkpoint.preview_water_crossing(points(),1.8)
	var life:=preload("res://scripts/world/city_creation_life.gd").new();root.add_child(life);life.set_process(false);life.setup(checkpoint)
	var captured:Dictionary=life.checkpoint();life.free()
	check(checkpoint.journey_checkpoint!=captured and checkpoint.set_journey_checkpoint(captured).ok,"real production capture updates only the checkpoint")
	check(checkpoint.commit_water_crossing(checkpoint_plan).ok and checkpoint.journey_checkpoint==captured,"checkpoint capture survives unchanged-author confirmation")
	check(checkpoint.undo().ok and checkpoint.journey_checkpoint==captured,"construction Undo preserves the captured economic journey")
	var junction:=fixture();check(junction.add_road([Vector2(-23,-23),Vector2(-14,-23)] as Array[Vector2],"path","none").ok,"real pre-existing road junctions")
	var junction_plan:Dictionary=junction.preview_water_crossing(points(),1.8)
	check(junction_plan.ok and junction_plan.access.junctions==2,"compound candidate prepares actual graph and both measured junction heights")
	for z:float in [-23.,-22.2,-21.9]:
		var entry_city:=fixture();var built:Dictionary=entry_city.add_house(Vector2(-14.8,z))
		check(built.ok and entry_city.rotate_house("h1",-PI*.5).ok,"real side entrance near brick bridge approach")
		var entry_plan:Dictionary=entry_city.preview_water_crossing(points(),1.8)
		check(entry_plan.ok and entry_plan.access.entries.size()==1 and entry_plan.access.network_houses==1,"nearby original doorway retains measured full-width support and production connectivity")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WATER_CROSSING ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
