extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const Affinity=preload("res://scripts/audio/city_creation_music_affinity.gd")
const Geometry=preload("res://scripts/audio/city_creation_expression_geometry.gd")
const Context=Geometry.Context
class ActivityHost:
	extends Node3D
	var life:Node3D
class ActivityOwner:
	extends Node
	var _pluck_city:RefCounted
var checks:=0
var failures:Array=[]
var out:=""
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	for f:Dictionary in [Fixture.courtyard("U","none"),Fixture.lane(2.6,0.,false,true)]:
		var city:RefCounted=f.city;var before:Dictionary=city.snapshot();var a:=Affinity.new();a.refresh(city);var sample:=a.sample(Fixture.ORIGIN+Vector2(1.8,1.8),18.)
		check(sample.enclosure>=.55 and sample.enclosure<=.8 and not sample.source_ids.is_empty(),"real half-enclosure or lane supplies independent warm sources without road eligibility")
		check(city.snapshot()==before,"warm geometry reads leave author and receipts intact")
		var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,"real spatial cold read");var b:=Affinity.new();b.refresh(cold);check(a.records==b.records,"independent warm source facts match")
	var hill:=Fixture.State.new();hill.initialize_free();var plan:Dictionary=hill.plan_terrain_target([Vector2(-28,-20)] as Array[Vector2],5.,3.2,true)
	check(plan.ok and hill.apply_terrain_target(plan).ok and hill.add_house(Vector2(-28,-20)).ok and hill.add_house(Vector2(-19,-20)).ok,"actual natural target terrain and high/low houses")
	var a:=Affinity.new();a.refresh(hill);var g:=Geometry.new();g.refresh(hill);var weights:Dictionary=a.sample(Vector2(-24,-20),18.).weights;var facts:=g.sample(weights)
	check(facts.highland.span_m>1. and facts.highland.value>0. and facts.flow==0.,"actual terrain contour is independent from thresholded water and curve input")
	var low:={"h1":1.,"h2":0.};check(g.sample(low).highland.value==0.,"single-height focus cannot manufacture a slope")
	var city:RefCounted=preload("res://tests/test_city_creation_tea_deck.gd").populated(out)
	var life=load("res://scripts/world/city_creation_life.gd").new();root.add_child(life);life.set_process(false);life.setup(city)
	var arrived:=false
	for i in range(6000):
		if life.cafe_status("h1").phase=="tea":arrived=true;break
		life._process(.05)
	check(arrived and city.bakery_status("h4").served>=2,"actual production and purchased qualifications produce real seated tea")
	var host:=ActivityHost.new();root.add_child(host);host.life=life
	var music:=ActivityOwner.new();music._pluck_city=city;host.add_child(music)
	var at_tea:=Context.activity(music,{"h1":1.});check(at_tea.value==1. and at_tea.source_ids==["h1"],"multiple seated residents share one cafe identity and weight")
	var camera:=Camera3D.new();root.add_child(camera);camera.position=Vector3(300,80,300);camera.look_at(Vector3(400,80,400));life.view_camera=camera
	check(Context.activity(music,{"h1":1.}).value==0.,"offscreen tea cannot claim visible activity")
	life.view_camera=null;camera.free()
	var before:Dictionary=city.snapshot();var mixed:=Context.merge_activity({"craft":.65,"craft_sources":["h1"]},at_tea)
	check(mixed.craft==1. and mixed.craft_sources==["h1"] and city.snapshot()==before,"activity is bounded and cannot duplicate geometry source or mutate state")
	for i in range(200):life._process(.05)
	check(Context.activity(music,{"h1":1.}).value==0.,"completed tea withdraws activity without fake tail facts")
	host.free();life.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("EXPRESSION_CONTEXT ",JSON.stringify(report));quit(0 if report.ok else 1)
