extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_side_shore_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array=[]
var out:=""
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func publish(city:RefCounted)->void:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);life.free()
func row(city:RefCounted)->Dictionary:return city.functional_zones().spaces.filter(func(s):return s.kind=="waterfront" and s.members==["h1"])[0]
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var cases:Array=[]
	for kind:String in ["wrap","arch_wrap","disconnected","gap"]:
		for yaw:float in [0.,.4]:
			var f:=Fixture.build(kind,yaw);var city:RefCounted=f.city;check(f.ok,"public side/back shore fixture "+kind+str(yaw))
			if not f.ok:continue
			publish(city);var before:Dictionary=city.snapshot();var report:=row(city);cases.append({"kind":kind,"yaw":yaw,"space":report})
			print("SIDE_CASE ",kind," ",yaw," ",JSON.stringify({"eligibility":report.eligibility,"entries":report.evidence.public_entries.size(),"rejected":report.evidence.rejected_entries.size()}))
			check(city.snapshot()==before,"side/back route discovery is read-only")
			if kind in ["wrap","arch_wrap"]:
				check(report.eligibility.district and report.evidence.public_entries.any(func(e):return e.has("street_path") and e.street_path.ok),"real front door can reach independent rear shore through a measured public street")
				if report.evidence.public_entries.is_empty():continue
				check(report.source_ids.has("r1") and report.source_ids.has("r2") and report.source_ids.has("w1"),"actual entry street, wrap street and shore water are source identities")
				check(report.evidence.public_entries.all(func(e):return e.height_access.ok and e.shore_access.ok and e.street_path.samples>1000),"every new qualification carries door, street and final shore physical proof")
				if kind=="arch_wrap":check(report.source_ids.has("h2") and not city.house_passages("h2").is_empty(),"actual passage clearance keeps its structural source in the proof")
				var saved:Dictionary=report.duplicate(true);check(city.remove_road("r2").ok,"public wrap removal");publish(city)
				check(not row(city).eligibility.district,"same connected front door cannot replace missing wrap geometry")
				check(city.undo().ok,"Undo wrap removal");publish(city);check(row(city)==saved,"Undo restores identical route and source proof")
			else:
				check(not report.eligibility.district,"separate shore street or actual stepping gap cannot grant a public waterfront")
				if kind=="gap":check(report.connected and not city.road_profile(city.roads[1]).stepping_runs.is_empty(),"negative has the same actual street component and a real non-continuous stepping crossing")
			var cold:=Fixture.Base.Base.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,"ordinary side-shore cold restore");publish(cold)
			check(row(cold)==row(city),"cold route and complete width evidence equal incremental publication")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SIDE_SHORE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if failures.is_empty() else 1)
