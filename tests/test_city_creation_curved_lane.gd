extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_curved_lane_fixture.gd")
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
func lanes(city:RefCounted)->Array:
	var before:Dictionary=city.snapshot();var rows:Array=city.functional_zones().spaces.filter(func(s):return s.evidence.geometry=="narrow_lane")
	check(before==city.snapshot(),"pure curved frontage cannot rewrite author data/receipts")
	return rows
func run()->void:
	var started:=Time.get_ticks_msec()
	for yaw:float in [0.,.4,-.65,PI*.5]:
		var f:=Fixture.build(yaw);var city:RefCounted=f.city;check(f.ok,"public curved street and offset facing entrances "+str(yaw))
		var waiting:=lanes(city)
		check(waiting.size()==1 and waiting[0].stage=="cluster" and waiting[0].evidence.network=="waiting","real curved interface waits for graph publication")
		network(city);var rows:=lanes(city)
		check(rows.size()==1 and rows[0].eligibility.district,"one continuous curved frontage qualifies "+str(yaw))
		if rows.size()!=1:continue
		var row:Dictionary=rows[0]
		check(row.members==["h1","h2"] and row.evidence.segments.size()>2 and row.evidence.public_entries.size()==4,"actual many-segment path shares four staggered entrances")
		check(not row.eligibility.warm and row.source_ids.has("r1"),"open curved lane stays distinct from enclosed Warm")
		var cold:=Fixture.Base.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"independent rotated cold restore");network(cold)
		check(lanes(cold)==rows,"cold world/network equals incremental curved evidence")
		var dense:=Fixture.build(yaw,true);check(dense.ok,"public extra collinear samples in curved path");network(dense.city)
		check(lanes(dense.city)==rows,"subdividing each actual curve segment changes no spatial result")
		cases.append({"yaw":yaw,"spaces":rows})
	var f:=Fixture.build();var city:RefCounted=f.city;network(city);var initial:=lanes(city);var rights:Dictionary=city.functional_benefits()
	var before:Dictionary=city.snapshot();var preview:Dictionary=city.preview_road([Vector2(-28,-17.8),Vector2(-20,-17.8)] as Array[Vector2],"path","none")
	check(preview.ok and city.snapshot()==before and lanes(city)==initial,"preview cannot publish a second interface")
	check(city.remove_road("r1").ok and not lanes(city).any(func(s):return s.eligibility.district),"delete curve immediately withdraws eligibility")
	network(city);check(lanes(city).is_empty(),"removed curve cannot borrow another network")
	check(city.undo().ok,"Undo curve removal");network(city);check(lanes(city)==initial and city.functional_benefits()==rights,"Undo restores exact evidence and original rights")
	check(city.redo().ok,"Redo curve removal");network(city);check(lanes(city).is_empty(),"Redo withdraws frontage")
	check(city.undo().ok,"restore curve again");network(city)
	var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok,"public decoration switch");network(city)
	check(lanes(city)==initial,"visible decoration never supplies a curved interface")
	check(city.undo().ok,"Undo decoration switch");network(city)
	check(city.set_house_role("h2","workshop").ok,"real authored use changes opposite mass");network(city)
	check(lanes(city).is_empty(),"one-sided residential wall cannot become a curved courtyard by label")
	check(city.undo().ok,"Undo use edit");network(city);check(lanes(city)==initial,"restore facing residential source")
	var split:=Fixture.build(0.,false,"split");check(split.ok,"two authored roads on one connected curve");network(split.city)
	var parts:=lanes(split.city)
	check(parts.size()>=2 and parts.any(func(s):return s.evidence.road_id=="r1") and parts.any(func(s):return s.evidence.road_id=="r2"),"shared component does not erase distinct authored street scopes")
	var wet:=Fixture.build(0.,false,"curve",true);check(wet.ok,"real pond and bridge street in narrow interface");network(wet.city)
	var fragments:=lanes(wet.city);check(fragments.size()>=2,"water separates dry frontage even on a connected bridge")
	check(not fragments.any(func(s):return s.evidence.from.x<-27.7 and s.evidence.to.x>-26.5),"no merged district crosses the real wet gap")
	var blocked:=Fixture.build();check(blocked.ok,"public dry curve before obstruction");network(blocked.city);var open_rows:=lanes(blocked.city)
	check(blocked.city.add_house_stroke(Fixture.ORIGIN+Vector2(.9,2.2),[{"x":0,"z":0,"level":0,"kind":"room"}]).ok,"real third-party room occupies the curved interface")
	network(blocked.city);var obstructed:=lanes(blocked.city)
	check(not obstructed.any(func(s):return s.evidence.from.x<-28. and s.evidence.to.x>-26.2),"a shared street cannot merge across actual occupied floor")
	check(blocked.city.undo().ok,"Undo physical obstruction");network(blocked.city)
	check(lanes(blocked.city)==open_rows,"obstruction Undo restores exact continuous source")
	var reverse:=Fixture.build(0.,false,"reverse");check(reverse.ok,"public reverse-authored curve");network(reverse.city)
	check(lanes(reverse.city).size()==1 and lanes(reverse.city)[0].eligibility.district,"opposite authoring direction retains physical qualification")
	var none:=Fixture.build(0.,false,"none");check(none.ok,"facing residences without a street");network(none.city)
	check(lanes(none.city).is_empty(),"offset houses alone never create a curved public connection")
	var out:="res://验证记录/M84/curved_lane_20261029/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"elapsed_seconds":(Time.get_ticks_msec()-started)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("CURVED_LANE ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
