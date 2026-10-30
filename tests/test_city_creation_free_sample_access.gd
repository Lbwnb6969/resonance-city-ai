extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_free_sample_fixture.gd")
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
const State=Fixture.State
var checks:=0
var failures:Array=[]
var out:="res://验证记录/M84/free_sample_access_20261030/cpu"
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func records(city)->Dictionary:
	return {"journey":city.harmony_journey.duplicate(true),"eras":city.era_unlocks.duplicate(),"signatures":city.signature_unlocks.duplicate(),"archive":city.archive_unlocks.duplicate(),"life":city.life_progress.duplicate(true)}
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var city:=Fixture.fresh();var initial:=records(city);var before:Dictionary=city.snapshot();var rows:=Samples.plans(city)
	check(rows.size()==3 and rows.filter(func(r):return r.kind=="pier_lantern").size()==2 and rows.filter(func(r):return r.kind=="column_vines").size()==1,"zero-history public construction derives two real piers and one Ionic stoa")
	check(Samples.IDS.all(func(id):return Samples.rank(city,id)==0) and city.harmony_journey.is_empty(),"no card, rank or rarity is supplied by fixture")
	check(city.snapshot()==before and records(city)==initial,"planning is read-only across all historical ledgers")
	var cold:=State.new()
	check(city.save_city(out+"/new_free.json").ok and cold.load_city(out+"/new_free.json").ok and Samples.plans(cold)==rows and records(cold)==initial,"unearned expressions survive actual Schema20 disk reconstruction")
	for row:Dictionary in rows:
		check(Samples.for_source(city,row.house_id)==row.card,"answer variation follows actual source "+str(row.house_id))
	check(Samples.for_source(city,"missing")=="","missing geometry grants no variation")
	var stoa:Dictionary=rows.filter(func(r):return r.kind=="column_vines")[0];var id:String=stoa.house_id
	for architecture:String in ["roman_basilica",""]:
		check(city.set_house_architecture(id,architecture).ok and Samples.for_source(city,id)=="","other architecture is not generalized into Ionic stoa "+architecture)
		check(city.undo().ok and Samples.plans(city)==rows,"Undo restores actual supported architecture "+architecture)
	check(city.set_house_era(id,"renaissance").ok and Samples.for_source(city,id)=="","later-era columns do not receive pastoral stoa vines")
	check(city.undo().ok and Samples.plans(city)==rows,"Undo restores pastoral stoa without earnings")
	check(city.rotate_house(id,.6).ok and Samples.plans(city).filter(func(r):return r.kind=="column_vines")[0].columns!=stoa.columns,"actual column anchors follow authored rotation")
	check(city.undo().ok and Samples.plans(city)==rows,"Undo restores original column anchors")
	for row:Dictionary in rows:
		check(city.remove_house(row.house_id).ok and Samples.for_source(city,row.house_id)=="","removing real support removes eligibility "+str(row.house_id))
		check(city.undo().ok and Samples.plans(city)==rows,"Undo restores source geometry "+str(row.house_id))
	var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok and Samples.plans(city)==rows and records(city)==initial,"appearance switch preserves actual music anchors and all earned records")
	check(city.undo().ok and city.creative_settings.presentation.automatic_decoration and Samples.plans(city)==rows,"appearance Undo restores explicit choice")
	var classic:=State.new();check(classic.restore(before).ok,"same geometry restored for legacy comparison");classic.creative_settings={}
	check(Samples.plans(classic).is_empty(),"unconverted legacy keeps original appearance and no spatial variation")
	var converted:Dictionary=classic.CreationPolicy.convert(classic,out+"/converted.json")
	check(converted.ok and Samples.plans(classic)==rows and records(classic)==initial,"explicit conversion opens existing expressions without historical cards")
	var backup:=State.new();check(backup.load_city(converted.backup).ok and not backup.CreationPolicy.is_free(backup) and Samples.plans(backup).is_empty() and records(backup)==initial,"conversion backup cold reads exact legacy rights and appearance")
	var earned:RefCounted=preload("res://tests/test_city_creation_inspiration_samples.gd").fixture();var earned_records:=records(earned);var earned_rows:=Samples.plans(earned)
	check(not earned_rows.is_empty() and Samples.IDS.all(func(card):return Samples.rank(earned,card)==2),"historically earned two-study fixture retains original ranks")
	var prefs:Dictionary=earned.creative_settings.presentation.duplicate();prefs.automatic_decoration=false;earned.CreationPolicy.set_preferences(earned,{"presentation":prefs})
	check(records(earned)==earned_records and Samples.plans(earned)==earned_rows,"historical second-study cards, rarity and receipts remain intact")
	check("无需手札阶数" in Samples.describe(city) and "仅列原有记录" in Samples.describe(city),"player explanation separates basic spatial access from historical rank")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"rows":rows}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("FREE_SAMPLE_ACCESS ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
