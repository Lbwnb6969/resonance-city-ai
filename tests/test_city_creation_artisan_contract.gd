extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_artisan_contract_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func network(city:RefCounted)->void:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);life.free()
func rows(city:RefCounted)->Array:
	var before:Dictionary=city.snapshot();var result:Array=city.functional_zones().spaces.filter(func(s):return s.kind=="artisan")
	check(before==city.snapshot(),"read-only author/history/rights")
	return result
func run()->void:
	var began:=Time.get_ticks_msec()
	for kind:String in ["workshop","clock","label","wall","water"]:
		for yaw:float in [0.,.4,PI*.5]:
			var f:=Fixture.build(kind,yaw);var city:RefCounted=f.city;check(f.ok,"public fixture "+kind+str(yaw))
			check(rows(city).all(func(s):return not s.eligibility.district),"unpublished graph never qualifies")
			network(city);var result:=rows(city)
			if kind=="label":check(result.is_empty() and city.functional_benefits().inspiration_multiplier==1.35,"authored workshop label preserves real old benefit without new district")
			else:
				check(result.size()==1 and result[0].eligibility.district==(kind=="workshop"),"body/public court/access "+kind+str(yaw))
				if kind=="workshop":check(result[0].members==["h1"] and result[0].source_ids.has("r1") and result[0].eligibility.echo,"one actual body qualifies without second house")
			var cold:=Fixture.Base.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"disk-compatible restore");network(cold)
			check(rows(cold)==result,"cold/incremental exact evidence")
	var f:=Fixture.build("workshop",0.,false);network(f.city);check(rows(f.city)[0].stage=="cluster","no road retains usable local court")
	f=Fixture.build();var city:RefCounted=f.city;network(city);var initial:=rows(city);var rights:Dictionary=city.functional_benefits()
	check(city.remove_road("r1").ok and not rows(city)[0].eligibility.district,"remove immediately withdraws")
	network(city);check(rows(city)[0].stage=="cluster","published removal retains local court")
	check(city.undo().ok,"Undo road");network(city);check(rows(city)==initial and city.functional_benefits()==rights,"Undo exact geometry and formal rights")
	var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok,"decoration switch");network(city);check(rows(city)==initial,"decoration not qualification evidence")
	check(city.set_house_role("h1","garden_cafe").ok,"mixed authored kind");network(city);check(rows(city)[0].eligibility.district,"mixed usage retains actual craft body")
	var blocked:=Fixture.build("wall");network(blocked.city);check(blocked.city.remove_house("h2").ok,"remove blocker");network(blocked.city)
	check(rows(blocked.city)[0].eligibility.district,"removal opens real court");check(blocked.city.undo().ok,"Undo blocker");network(blocked.city);check(not rows(blocked.city)[0].eligibility.district,"Undo blocks real court")
	for variant:Array in [["clockwork","iron_conservatory"],["modern_eco","twin_gable"]]:
		var v:=Fixture.build();check(v.city.set_house_era("h1",variant[0]).ok and v.city.set_house_architecture("h1",variant[1]).ok,"public additional work body");network(v.city)
		check(rows(v.city)[0].eligibility.district,"actual selected work body with supported forecourt "+str(variant[1]))
	var ridge:=Fixture.build();check(ridge.city.add_terrain_stroke([Fixture.ORIGIN+Vector2(0,2.5)] as Array[Vector2],"plateau",1.3,1.,2).ok,"public forecourt terrain ridge");network(ridge.city)
	check(not rows(ridge.city)[0].eligibility.district,"steep actual ground cannot borrow an open forecourt")
	check(ridge.city.undo().ok,"Undo ridge");network(ridge.city);check(rows(ridge.city)[0].eligibility.district,"Undo restores real dry forecourt")
	var legacy:=Fixture.Base.State.new();legacy.initialize();check(legacy.functional_zones().spaces.is_empty(),"legacy untouched")
	var out:="res://验证记录/M84/artisan_contract_20261030/cpu"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ARTISAN_CONTRACT ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
