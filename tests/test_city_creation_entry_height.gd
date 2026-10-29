extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_slope_entry_fixture.gd")
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
func rows(city:RefCounted)->Array:
	var before:Dictionary=city.snapshot();var result:Array=city.functional_zones().spaces.filter(func(s):return s.evidence.geometry=="narrow_lane")
	check(before==city.snapshot(),"height query preserves authored data and receipts")
	return result
func run()->void:
	var began:=Time.get_ticks_msec()
	for kind:String in ["flat","high","mismatch"]:
		for yaw:float in [0.,.4,PI*.5]:
			var f:=Fixture.build(kind,yaw);var city:RefCounted=f.city;check(f.ok,"public slope fixture "+kind+str(yaw))
			var pending:=rows(city);check(pending.size()==1 and pending[0].eligibility.reason=="network_waiting","unpublished graph waits despite height diagnosis")
			network(city);var result:=rows(city);check(result.size()==1,"real facing wall cluster remains "+kind+str(yaw))
			if result.size()!=1:continue
			var row:Dictionary=result[0]
			if kind=="mismatch":
				check(row.connected and not row.eligibility.district and row.eligibility.reason=="height_access_missing","2D connected graph cannot prove vertical door access")
				check(not row.evidence.rejected_entries.is_empty() and row.evidence.rejected_entries.all(func(e):return not e.height_access.ok),"rejected source records keep actual measured height reason")
				check(city.functional_zones().zones.any(func(z):return z.kind=="courtyard" and z.active),"original formal active remains separate from new accessibility")
			else:
				check(row.eligibility.district and row.evidence.public_entries.size()==4,"matching actual doorstep/street remains usable "+kind)
				check(row.evidence.public_entries.all(func(e):return e.height_access.ok and e.height_access.samples>0),"all four accepted doors carry actual height samples")
				if kind=="high":check(city.houses.all(func(h):return h.base_y>=1.5),"high plateau is not rejected by a base_y gate")
			var cold:=Fixture.Base.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"independent slope snapshot restore");network(cold)
			check(rows(cold)==result,"independent cold terrain/road/door result equals incremental")
			cases.append({"kind":kind,"yaw":yaw,"spaces":result})
	var f:=Fixture.build("mismatch");var city:RefCounted=f.city;network(city);var initial:=rows(city);var rights:Dictionary=city.functional_benefits()
	check(city.remove_road("r1").ok,"public mismatched road removal");network(city);check(rows(city).is_empty(),"removed street keeps no stale height diagnostic")
	check(city.undo().ok,"Undo mismatched street removal");network(city);check(rows(city)==initial and city.functional_benefits()==rights,"Undo restores exact heights and formal rights")
	var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok,"public decoration toggle");network(city)
	check(rows(city)==initial,"decorations cannot provide missing vertical support")
	check(city.undo().ok,"Undo decoration toggle");network(city)
	var active:=Fixture.Base.State.new();active.initialize_free();Fixture.Base.Brush.select(active,"pastoral","townhouse")
	check(active.add_house(Vector2(-28,-20)).ok and active.add_road([Vector2(-28,-18.7),Vector2(-28,-15)] as Array[Vector2],"path","none").ok,"public endpoint creates real active porch")
	network(active);var door:Dictionary=active.house_entrances("h1").filter(func(e):return e.active and not e.get("passage",false))[0]
	var access:=Access.assess(active,active.houses[0],door,Vector2(-28,-18.7),active.roads[0])
	check(access.ok and access.active_steps and access.step_count==3,"existing active three-step porch is read as actual support")
	var modern:=Fixture.build("mismatch");check(modern.ok and modern.city.set_house_era("h1","modern_eco").ok,"public alternate modern facade")
	network(modern.city);var modern_entries:Array=modern.city.house_entrances("h1")
	var deferred:=Access.assess(modern.city,modern.city.houses[0],modern_entries[0],Vector2(-28,-17.8),modern.city.roads[0])
	check(deferred.kind=="existing_modern_facade" and deferred.scope=="unchanged" and not deferred.has("step_count"),"modern doors never borrow nonexistent classical stone steps")
	var arch:=Fixture.Base.courtyard("ring","portal");check(arch.ok,"public existing through-arch layout");network(arch.city)
	var portal:Dictionary=arch.city.house_entrances("h1").filter(func(e):return e.get("passage",false))[0]
	deferred=Access.assess(arch.city,arch.city.houses[0],portal,portal.at,arch.city.roads[0])
	check(deferred.kind=="existing_passage" and deferred.scope=="unchanged","existing arch road-floor policy remains explicit and unchanged")
	var out:="res://验证记录/M84/slope_entry_20261029/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ENTRY_HEIGHT ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
