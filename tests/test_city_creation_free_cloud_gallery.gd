extends "res://tests/test_city_creation_layered_windows.gd"
const Cloud=preload("res://tools/fixtures/city_creation_cloud_gallery_fixture.gd")
const Span=preload("res://scripts/world/city_creation_skybridge_span.gd")
const Plan=preload("res://scripts/world/city_creation_skybridge_plan.gd")
const Old=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var facts:Array=[]
	for yaw:float in [0.,.4,PI*.5]:
		var city:=Cloud.city(8.5,yaw);var before:Dictionary=city.snapshot();var signature:=Plan.adjacency_signature(city,city.houses[0]);var old:=build(city)
		check(city.houses.size()==2 and Plan.for_house(city,city.houses[0]).is_empty() and old.house.get_meta("skybridges",[]).is_empty(),"new free without explicit nine-metre choice preserves original geometry")
		old.house.free();old.r.free();var edit:Dictionary=city.set_house_skybridge_span("h2",true);var plans:=Plan.for_house(city,city.houses[0]);var saved:Dictionary=city.snapshot()
		check(edit.ok and edit.before_upgrade==before and plans.size()==1 and plans[0].level==2 and is_equal_approx(plans[0].length,6.76) and saved.schema==31,"explicit choice on higher-ID endpoint creates one highest-floor span with original backup snapshot")
		check(Plan.adjacency_signature(city,city.houses[0])!=signature and city.harmony_journey==before.harmony_journey and city.era_modifiers==before.get("era_modifiers",[]) and city.houses[0]==before.houses[0] and city.houses[1].seed==before.houses[1].seed,"foreign endpoint invalidates owner geometry without awarding card/XP or rerolling seed")
		var revision:int=city.revision;check(city.set_house_skybridge_span("h2",true).no_op and city.revision==revision,"repeat choice writes no transaction")
		check(city.undo().ok and city.houses==before.houses and Plan.for_house(city,city.houses[0]).is_empty() and city.redo().ok and Plan.for_house(city,city.houses[0])==plans,"Undo/Redo preserve original house data and exact derived bridge")
		var path:=out+"/cloud_"+str(yaw)+".json";var cold:=Cloud.State.new();var written:Dictionary=city.save_city(path);var loaded:Dictionary=cold.load_city(path);print("CLOUD_DISK ",written," ",loaded)
		check(written.ok and loaded.ok and cold.snapshot()==city.snapshot() and Plan.for_house(cold,cold.houses[0])==plans,"real schema31 file cold reads exact author record and span")
		var made:=build(city);check(made.house.get_meta("skybridges",[])==plans and not made.house.find_children("ModernSkybridge*","Node3D",true,false).is_empty(),"actual bridge mesh and collision are built from authoritative plan");made.house.free();made.r.free();facts.append({"yaw":yaw,"plan":plans[0]})
		check(city.set_house_skybridge_span("h2",false).ok and city.snapshot().schema==before.schema and city.houses==before.houses and Plan.for_house(city,city.houses[0]).is_empty(),"clearing only explicit option restores exact old author format and original span")
	var city:=Cloud.city(9.01);city.set_house_skybridge_span("h1",true);check(Plan.for_house(city,city.houses[0]).is_empty(),"actual centre gap beyond nine metres stays rejected")
	city=Cloud.city(9.);city.set_house_skybridge_span("h1",true);check(Plan.for_house(city,city.houses[0]).size()==1,"exact nine-metre centre gap is legal")
	var original:Dictionary=city.snapshot();var reader:=Cloud.State.new();reader.restore(original)
	for schema:int in [20,24,25,27,28,29,30]:
		var bad:Dictionary=original.duplicate(true);bad.schema=schema;check(not reader.restore(bad).ok and reader.snapshot()==original,"old schema cannot smuggle new bridge author record")
	for change:Callable in [func(d):d.version=true,func(d):d.version=2,func(d):d.meters=true,func(d):d.meters=10,func(d):d.extra=0,func(d):d.erase("meters")]:
		var bad:Dictionary=original.duplicate(true);change.call(bad.houses[0][Span.FIELD]);check(not reader.restore(bad).ok and reader.snapshot()==original,"malformed new record rejected atomically")
	var bad:Dictionary=original.duplicate(true);bad.erase("creative_settings");check(not reader.restore(bad).ok,"new explicit span cannot be loaded as legacy")
	var legacy:=Old.architecture();var prior:Dictionary=legacy.snapshot();var old_plans:=Plan.for_house(legacy,legacy.houses[0]);check(not legacy.set_house_skybridge_span("h1",true).ok and legacy.snapshot()==prior and Plan.for_house(legacy,legacy.houses[0])==old_plans,"legacy API and original bridge geometry stay unchanged")
	var converted:Dictionary=legacy.CreationPolicy.convert(legacy,out+"/converted.json");check(converted.ok and FileAccess.file_exists(converted.backup) and Plan.for_house(legacy,legacy.houses[0])==old_plans,"explicit conversion backs up original without creating extra bridges")
	var blocked:=Cloud.city();blocked.set_house_skybridge_span("h1",true);check(blocked.add_house(Vector2(-25.75,-20)).ok and blocked.add_cell("h3",0,0,1).ok and blocked.add_cell("h3",0,0,2).ok and blocked.set_house_era("h3","pastoral").ok and Plan.for_house(blocked,blocked.houses[0]).is_empty(),"intervening real three-storey house blocks nine-metre crossing")
	check(blocked.remove_house("h3").ok and Plan.for_house(blocked,blocked.houses[0]).size()==1,"removing blocker restores actual chosen bridge")
	var low:=Cloud.city(8.5,0.,2);low.set_house_skybridge_span("h1",true);check(low.add_road([Vector2(-25.75,-24),Vector2(-25.75,-16)] as Array[Vector2],"path").ok and Plan.for_house(low,low.houses[0]).is_empty(),"second-floor span refuses real street headroom conflict")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FREE_CLOUD_GALLERY ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
