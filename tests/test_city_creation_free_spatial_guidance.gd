extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_functional_zones_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Guidance=preload("res://scripts/ui/city_creation_free_spatial_guidance.gd")
const Step=preload("res://scripts/ui/city_creation_business_step.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var fixture:=Fixture.build();var city:RefCounted=fixture.city;check(fixture.ok,"public four-zone fixture")
	var life:=Life.new();root.add_child(life);life.set_process(false)
	check(Guidance.inspector(city,"h3").action.is_empty(),"pending graph never claims current activation")
	life.setup(city);var saved:Dictionary=city.snapshot();var demo:Dictionary={"state":city,"life":life}
	for id:String in ["h1","h3","h4","h5"]:
		var step:Dictionary=Step.describe(demo,id)
		check(step.command=="spatial_ledger" and step.tool==-1,"actual connected zone opens spatial ledger "+id)
		check(not "库存" in step.text and not "通勤" in step.text and not "面包" in step.text,"free inspector has no business prerequisite "+id)
	check("+35%" in Step.describe(demo,"h3").text,"actual workshop bonus appears from real source")
	check(Guidance.hint(city).stage=="wander","connected actual zones offer optional viewing")
	check(city.snapshot()==saved,"guidance creates no roles history or rewards")
	check(city.remove_road("r1").ok and Guidance.hint(city).stage=="spatial","pending road edit withdraws connected claims")
	life.setup(city);check(Step.describe(demo,"h3").tool==2 and not "+35%" in Step.describe(demo,"h3").text,"actual disconnected workshop requests road without fake benefit")
	check(city.undo().ok,"actual road Undo");life.setup(city);check(Step.describe(demo,"h3").command=="spatial_ledger","Undo restores spatial action")
	var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"cold snapshot read")
	life.setup(cold);check(Guidance.inspector(cold,"h3")==Guidance.inspector(city,"h3"),"cold guidance equals live source evidence")
	var old:=Fixture.State.new();old.initialize();old.set_house_role("h1","garden_cafe");life.setup(old)
	var classic:Dictionary=Step.describe({"state":old,"life":life},"h1");check(classic.command!="spatial_ledger" and not "门前已接路" in classic.text,"classic business flow retained")
	life.queue_free();await process_frame;print("FREE_SPATIAL_GUIDANCE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
