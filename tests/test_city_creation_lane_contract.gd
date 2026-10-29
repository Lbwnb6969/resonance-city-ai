extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
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
	check(before==city.snapshot(),"lane query preserves author data and receipts")
	return rows
func run()->void:
	var started:=Time.get_ticks_msec()
	for yaw:float in [0.,.4,-.65,PI*.5]:
		var pair_only:bool=yaw in [.4,-.65]
		var f:=Fixture.lane(2.6,yaw,pair_only);var city:RefCounted=f.city;check(f.ok,"public facing-house lane yaw "+str(yaw))
		var pending:=lanes(city)
		check(pending.size()==1 and pending[0].stage=="cluster" and pending[0].evidence.network=="waiting","unpublished graph retains walls without district")
		network(city);var rows:=lanes(city)
		check(rows.size()==1 and rows[0].stage=="district","actual facing entrances qualify narrow lane "+str(yaw))
		if rows.size()!=1:continue
		var row:Dictionary=rows[0]
		check(row.members.size()==(2 if pair_only else 3) and row.evidence.public_entries.size()>=row.members.size(),"real owners and actual projected public entrances")
		check(is_equal_approx(row.evidence.width_min,2.6) and is_equal_approx(row.evidence.width_max,2.6),"measure facade gap rather than road width")
		check(not row.eligibility.warm,"open lane does not invent enclosed Warm entitlement")
		var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"cold restore rotated lane");network(cold)
		check(lanes(cold)==rows,"independent cold network and facade evidence match")
		cases.append({"yaw":yaw,"spaces":rows})
	for width:float in [1.9,3.3,5.2]:
		var f:=Fixture.lane(width);check(f.ok,"public non-narrow street "+str(width));network(f.city)
		check(lanes(f.city).is_empty(),"outside tested gap is not claimed as a narrow lane "+str(width))
	var pair:=Fixture.lane(2.6,0.,true);check(pair.ok,"two genuine long facing houses");network(pair.city)
	check(lanes(pair.city).any(func(s):return s.eligibility.district),"three-house fixture is not a universal house-count gate")
	var straight:=lanes(pair.city)
	check(pair.city.remove_road("r1").ok,"remove sparse straight street")
	var points:Array[Vector2]=[]
	for i in range(21):points.append(Fixture.ORIGIN+Vector2(-2.+i*.3,2.2))
	check(pair.city.add_road(points,"path","none").ok,"same straight street with 21 authored samples");network(pair.city)
	var sampled:=lanes(pair.city)
	check(sampled.size()==1 and sampled[0].stage=="district" and sampled[0].members==straight[0].members,"collinear resampling cannot fragment space or lose projected entrances")
	check(sampled[0].evidence.from.is_equal_approx(straight[0].evidence.from) and sampled[0].evidence.to.is_equal_approx(straight[0].evidence.to),"resampling preserves exact measured facade extent")
	var mixed:=Fixture.courtyard("U","none");network(mixed.city)
	var half:Array=mixed.city.functional_zones().spaces.filter(func(s):return s.evidence.geometry=="half_enclosure")
	check(mixed.ok and mixed.city.add_house_stroke(Vector2(-32.4,-16.4),[{"x":0,"z":0,"level":0,"kind":"room"}]).ok and mixed.city.rotate_house("h2",PI*.5).ok,"public adjacent lane and half-enclosure owners")
	check(mixed.city.add_road([Vector2(-30.2,-22),Vector2(-30.2,-10)] as Array[Vector2],"path","none").ok,"public street beside existing half enclosure");network(mixed.city)
	var combined:Array=mixed.city.functional_zones().spaces
	check(combined.any(func(s):return s.evidence.geometry=="narrow_lane") and combined.any(func(s):return s.evidence.geometry=="half_enclosure" and s.evidence.pocket_id==half[0].evidence.pocket_id and s.evidence.usable_tiles==half[0].evidence.usable_tiles),"mixed public interfaces retain independent pre-existing half-enclosure evidence")
	check(mixed.city.undo().ok,"Undo mixed street");network(mixed.city)
	check(mixed.city.functional_zones().spaces.any(func(s):return s.evidence.geometry=="half_enclosure" and s.evidence.pocket_id==half[0].evidence.pocket_id),"Undo lane leaves real half enclosure intact")
	var f:=Fixture.lane();var city:RefCounted=f.city;network(city);var initial:=lanes(city);var rights:Dictionary=city.functional_benefits()
	check(city.remove_road("r1").ok,"public lane-road removal")
	check(not lanes(city).any(func(s):return s.eligibility.district),"remove road immediately invalidates district")
	network(city);check(lanes(city).is_empty(),"no imaginary street after graph publication")
	check(city.undo().ok,"Undo road removal");network(city);check(lanes(city)==initial and city.functional_benefits()==rights,"Undo restores exact lane and original formal rights")
	var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok,"decoration preference");network(city)
	check(lanes(city)==initial,"decoration visibility is not space evidence")
	check(city.undo().ok,"Undo decoration preference");network(city)
	check(city.set_house_role("h2","workshop").ok,"manual use removes one residential interface");network(city)
	check(lanes(city).is_empty(),"a label or one-sided street cannot replace facing residential mass")
	check(city.undo().ok,"Undo manual use");network(city);check(lanes(city)==initial,"restored authored use restores exact lane")
	check(city.add_house(Vector2(-22,-6)).ok and city.add_road([Vector2(-28,-17.8),Vector2(-22,-17.8),Vector2(-22,-4.1)] as Array[Vector2],"path","none").ok,"remote home on connected public road")
	network(city);check(lanes(city).all(func(s):return not s.members.has("h4")),"same-component remote owner is never absorbed into lane")
	var none:=Fixture.lane(2.6,0.,false,false);check(none.ok,"facing homes without road");network(none.city)
	check(lanes(none.city).is_empty(),"physical house count alone does not manufacture a public lane")
	var legacy:=Fixture.State.new();legacy.initialize();check(lanes(legacy).is_empty(),"legacy city remains unchanged")
	var out:="res://验证记录/M84/narrow_lane_20261029/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"elapsed_seconds":(Time.get_ticks_msec()-started)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("LANE_CONTRACT ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
