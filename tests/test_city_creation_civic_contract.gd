extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_civic_contract_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
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
	var before:Dictionary=city.snapshot();var result:Array=city.functional_zones().spaces.filter(func(s):return s.kind=="civic")
	check(before==city.snapshot(),"read-only civic query preserves author/history/rights")
	return result
func run()->void:
	var began:=Time.get_ticks_msec()
	for kind:String in ["ionic_stoa","roman_basilica","rotunda","guildhall","plateau","label","high","columns","wall","water"]:
		for yaw:float in [0.,.4,PI*.5]:
			var f:=Fixture.build(kind,yaw);var city:RefCounted=f.city;check(f.ok,"public civic fixture "+kind+str(yaw))
			check(rows(city).all(func(s):return not s.eligibility.district),"unpublished graph never grants civic district")
			network(city);var result:=rows(city)
			if kind in ["label","high"]:check(result.is_empty(),"ordinary use or high plateau cannot invent cultural mass "+kind)
			else:
				var expected:bool=kind in ["ionic_stoa","roman_basilica","rotunda","guildhall","plateau","columns"]
				check(result.size()==1 and result[0].eligibility.district==expected,"actual cultural front qualification "+kind+str(yaw))
				if expected and (result.is_empty() or not result[0].eligibility.district):print("CIVIC_DIAG ",kind," ",JSON.stringify(result))
				if expected and not result.is_empty():
					check(result[0].members==["h1"] and result[0].source_ids.has("r1") and result[0].eligibility.lyrical and result[0].eligibility.virtuoso,"single compound culture front, actual road source and read-only limits")
					check(result[0].evidence.public_entries.all(func(e):return e.height_access.ok and e.height_access.samples>0),"accepted civic entries have real support samples")
				if kind=="columns" and not result.is_empty():check(result[0].evidence.public_entries.any(func(e):return absf(e.column_offset)>.1),"actual Ionic gaps admit a small lateral approach instead of rejecting an open colonnade")
			var cold:=Fixture.Base.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"disk-compatible civic restore");network(cold)
			check(rows(cold)==result,"independent cold civic evidence equals incremental")
			cases.append({"kind":kind,"yaw":yaw,"spaces":result})
	var f:=Fixture.build("ionic_stoa",0.,false);check(f.ok,"public no-road culture");network(f.city);check(rows(f.city)[0].stage=="cluster","dry public front remains local without road")
	f=Fixture.build();var city:RefCounted=f.city;network(city);var initial:=rows(city);var rights:Dictionary=city.functional_benefits()
	check(city.remove_road("r1").ok and not rows(city)[0].eligibility.district,"road removal invalidates immediately");network(city);check(rows(city)[0].stage=="cluster","no road leaves local forecourt")
	check(city.undo().ok,"Undo civic road");network(city);check(rows(city)==initial and city.functional_benefits()==rights,"Undo restores sources and original formal rights")
	var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok,"public scenery switch");network(city);check(rows(city)==initial,"visible decorations never certify cultural district")
	check(city.set_house_role("h1","workshop").ok,"mixed authored workshop use");network(city);check(rows(city)[0].eligibility.district and city.functional_benefits().inspiration_multiplier==1.35,"actual culture survives mixed kind and old artisan benefit")
	var blocked:=Fixture.build("wall");network(blocked.city);check(blocked.city.remove_house("h2").ok,"remove foreground blocker");network(blocked.city);check(rows(blocked.city)[0].eligibility.district,"actual removal frees public forecourt")
	check(blocked.city.undo().ok,"Undo forecourt blocker");network(blocked.city);check(not rows(blocked.city)[0].eligibility.district,"Undo blocks front again")
	var ridge:=Fixture.build();check(ridge.city.add_terrain_stroke([Fixture.ORIGIN+Vector2(-2,2.9),Fixture.ORIGIN+Vector2(6,2.9)] as Array[Vector2],"plateau",1.3,1.,2).ok,"public ridge across cultural forecourt");network(ridge.city)
	check(not rows(ridge.city)[0].eligibility.district,"actual ground ridge prevents public forecourt")
	check(ridge.city.undo().ok,"Undo ridge");network(ridge.city);check(rows(ridge.city)[0].eligibility.district,"Undo opens dry public front")
	var remote:=Fixture.build();Fixture.Base.Brush.select(remote.city,"pastoral","townhouse")
	check(remote.ok and remote.city.add_house(Vector2(-12,-20)).ok and remote.city.add_road([Vector2(-22,-18.1),Vector2(-10,-18.1)] as Array[Vector2],"path","none").ok,"remote ordinary body on shared road")
	network(remote.city);check(remote.city.functional_zones().houses.h2.connected and rows(remote.city).size()==1 and rows(remote.city)[0].members==["h1"] and not rows(remote.city)[0].source_ids.has("h2"),"remote connected house cannot extend a local cultural front")
	check(city.set_house_architecture("h1","townhouse").ok,"public cultural body removal");network(city);check(rows(city).is_empty(),"architecture change withdraws real culture")
	check(city.undo().ok,"Undo cultural body change");network(city);check(rows(city)[0].eligibility.district,"Undo restores real cultural body")
	var ghost:=Fixture.build("guildhall");check(ghost.city.set_house_era("h1","pastoral").ok,"public pastoral guild choice");network(ghost.city)
	check(rows(ghost.city).is_empty(),"pastoral name without installed guild shell never certifies cultural mass")
	var legacy:=Fixture.Base.State.new();legacy.initialize();check(legacy.functional_zones().spaces.is_empty(),"legacy spaces remain unchanged")
	var out:="res://验证记录/M84/civic_contract_20261030/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CIVIC_CONTRACT ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
