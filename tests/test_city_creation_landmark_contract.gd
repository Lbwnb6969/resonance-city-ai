extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_landmark_contract_fixture.gd")
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
	var before:Dictionary=city.snapshot();var result:Array=city.functional_zones().spaces.filter(func(s):return s.evidence.geometry=="landmark_forecourt")
	check(before==city.snapshot(),"landmark query preserves author intent, earned rights and receipts")
	return result
func run()->void:
	var began:=Time.get_ticks_msec()
	for family:String in Fixture.Plan.SIZES:
		for kind:String in ["front","back","none","wall","water","columns"]:
			for yaw:float in [0.,.4,PI*.5]:
				var f:=Fixture.build(family,yaw,kind);var city:RefCounted=f.city;check(f.ok,"public earned landmark fixture "+family+kind+str(yaw))
				var pending:=rows(city);check(pending.size()==1 and not pending[0].eligibility.district and pending[0].eligibility.reason=="network_waiting","unpublished road graph waits")
				network(city);var result:=rows(city)
				check(result.size()==1 and result[0].eligibility.district==(kind=="front"),"real entity/public front/local road "+family+kind+str(yaw))
				if result.is_empty():continue
				if kind=="front":
					check(city.houses.is_empty() and result[0].members==[f.id] and result[0].source_ids==[f.id,f.road_id],"independent entity never borrows house identity or neighboring recipients")
					check(result[0].evidence.public_entries.all(func(e):return e.height_access.ok and e.height_access.samples>0 and e.components.has(result[0].component)),"physical foundation steps and actual local published segment")
				if kind in ["back","none"]:check(result[0].stage=="cluster","local public front survives without a front street")
				if kind=="columns":check(result[0].stage=="trait","real external column feet block even when neighbor cells are clear")
				var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"independent disk-compatible entity restore");network(cold)
				check(rows(cold)==result,"incremental and cold entity evidence match exactly")
				cases.append({"family":family,"kind":kind,"yaw":yaw,"spaces":result})
	var f:=Fixture.build();var city:RefCounted=f.city;network(city);var initial:=rows(city);var rights:Dictionary=city.harmony_journey.duplicate(true)
	check(city.remove_road(f.road_id).ok and not rows(city)[0].eligibility.district,"road removal withdraws immediately");network(city);check(rows(city)[0].stage=="cluster","published disconnected entity keeps usable front")
	check(city.undo().ok,"Undo independent front road");network(city);check(rows(city)==initial and city.harmony_journey==rights,"Undo restores sources without reissuing rights")
	var presentation:Dictionary=city.creative_settings.presentation.duplicate();presentation.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":presentation}).ok,"public decoration switch");network(city);check(rows(city)==initial,"entity qualification ignores automatic decoration")
	check(Fixture.Plan.remove(city,f.id).ok,"remove real independent entity");network(city);check(rows(city).is_empty() and city.harmony_journey==rights,"absent entity cannot qualify; blueprint and receipts retained")
	check(city.undo().ok,"Undo entity removal");network(city);check(rows(city)==initial,"Undo entity keeps exact stable source identity")
	var raw:=Fixture.empty();check(raw.ok and rows(raw.city).is_empty(),"earned but unplaced blueprints do not fabricate a civic space")
	var item:Dictionary=city.placed_landmarks[0]
	check(Fixture.Plan.place(city,item.blueprint,Fixture.Plan.position(item),PI,item.id).ok,"public entity rotation");network(city)
	check(not rows(city)[0].eligibility.district,"rotated entrance cannot borrow the street behind it")
	check(city.undo().ok,"Undo entity rotation");network(city);check(rows(city)==initial,"Undo rotation restores exact sources")
	var remote:=Fixture.build();var front_depth:float=Fixture.Plan.SIZES.riverbank.y*.5
	Fixture.Brush.select(remote.city,"pastoral","townhouse")
	check(remote.city.add_house(Fixture.ORIGIN+Vector2(9,front_depth+.15)).ok and remote.city.set_house_role(remote.city.houses[-1].id,"workshop").ok,"public remote mixed artisan use")
	check(remote.city.add_road([Fixture.ORIGIN+Vector2(3,front_depth+1.7),Fixture.ORIGIN+Vector2(11,front_depth+1.7)] as Array[Vector2],"path","none",1.25).ok,"remote shared-road extension");network(remote.city)
	check(rows(remote.city)[0].members==[remote.id] and rows(remote.city)[0].source_ids==[remote.id,remote.road_id] and remote.city.functional_benefits().inspiration_multiplier==1.35,"remote same component cannot expand landmark members or cancel formal benefits")
	check(remote.city.remove_road(remote.road_id).ok,"remove local front road while remote street survives");network(remote.city)
	check(not rows(remote.city)[0].eligibility.district,"remote published component is not a local entrance")
	check(remote.city.undo().ok,"Undo local road");network(remote.city);check(rows(remote.city)[0].eligibility.district,"Undo republishes local component")
	var denied:=Fixture.State.new();denied.initialize_free();check(not Fixture.Plan.place(denied,"riverbank",Fixture.ORIGIN).ok and rows(denied).is_empty(),"unearned blueprint cannot invent a landmark space")
	var ridge:=Fixture.build();var front:float=Fixture.Plan.SIZES.riverbank.y*.5
	check(ridge.city.add_terrain_stroke([Fixture.ORIGIN+Vector2(0,front+2.4)] as Array[Vector2],"plateau",1.,1.,2).ok,"public ridge outside protected entity foundation");network(ridge.city)
	check(not rows(ridge.city)[0].eligibility.district,"real forecourt terrain rejects steep ridge");check(ridge.city.undo().ok,"Undo entity forecourt ridge");network(ridge.city);check(rows(ridge.city)[0].eligibility.district,"Undo restores actual ground")
	var out:="res://验证记录/M84/landmark_contract_20261030/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cases":cases,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("LANDMARK_CONTRACT ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
