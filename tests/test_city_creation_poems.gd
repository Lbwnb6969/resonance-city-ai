extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_poem_fixture.gd")
const Vignettes=Fixture.Vignettes
const Catalog=Fixture.Catalog
const State=Fixture.State
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	check(Catalog.TEMPLATES.size()==12 and Vignettes.IDS.size()==4,"twelve themes retain four legacy contract IDs")
	for index in range(4,12):
		var city:=Fixture.start(index);var id:=str(Catalog.TEMPLATES[index].id)
		check(city.harmony_journey.active_vignette.id==id,"era and legal site offer actual theme: "+id)
		if city.harmony_journey.active_vignette.id!=id:continue
		check(Vignettes.complete(city,{}).is_empty(),"new offer never claims old construction")
		check(State.new().restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,"unfinished poem accepts actual Schema19 JSON")
		var built:=Fixture.construct(city)
		check(not built.is_empty() and built.all(func(r):return r.ok),"public geometry witness: "+id)
		if not built.all(func(r):return r.ok):print("BUILD_FAILURE ",id," ",built);continue
		var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
		var status:=Vignettes.candidates(city,life.connected_houses);print("POEM_STATUS ",id," ",status)
		var reward:=Vignettes.complete(city,life.connected_houses)
		check(not reward.is_empty() and reward.get("tier",0)==1,"actual geometry and connected households earn tier1: "+id)
		if reward.is_empty():life.free();continue
		check(is_equal_approx(Vignettes.music(city,reward.members),.6),"first poem retains .6dB lead")
		var earned:Dictionary=city.harmony_journey.duplicate(true)
		city.undo();city.redo();check(city.harmony_journey==earned,"geometry undo retains earned complete ledger")
		check(State.new().restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,"completed poem JSON validates")
		Vignettes.offer(city,id);check(Vignettes.complete(city,life.connected_houses).is_empty(),"new offer cannot reclaim the same physical feature")
		life.free()
	var locked:=State.new();locked.initialize_empty();preload("res://scripts/world/city_creation_harmony_receipts.gd").initialize(locked)
	var offers:Dictionary=preload("res://scripts/world/city_creation_vignette_sites.gd").proposals(locked)
	for index in range(7,12):check(not offers.has(Catalog.TEMPLATES[index].id),"locked era absent from legal pool: "+str(index))
	var second:=Fixture.start(5);Fixture.construct(second);var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(second)
	var first:=Vignettes.complete(second,life.connected_houses);check(not first.is_empty(),"first pond completed before repeat")
	check(Vignettes.offer(second,str(Catalog.TEMPLATES[5].id)) and second.harmony_journey.active_vignette.tier==2,"completed theme is offered as second-tier poem")
	var repeated:=Fixture.construct(second);check(repeated.all(func(r):return r.ok),"another actual legal pond creates distinct scenery")
	life._sync();var reward:=Vignettes.complete(second,life.connected_houses)
	check(reward.get("tier",0)==2 and int(reward.get("xp",0))>int(first.get("xp",0)) and is_equal_approx(Vignettes.music(second,reward.get("members",[])),.8),"new second-tier scenery earns higher XP and .8dB only for involved homes")
	if reward.is_empty():life.free();print("REPEAT_FAILURE ",repeated);quit(1);return
	var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(second.snapshot()))).ok and copy.harmony_journey==second.harmony_journey,"second-tier integer echo scopes and history round-trip exactly")
	var bad:Dictionary=second.snapshot();bad.harmony_journey.vignette_echoes[reward.members[0]][reward.id]=3
	check(not copy.restore(bad).ok,"unsupported echo tier rejected atomically")
	life.free()
	print("POEMS_CPU ",checks-failures.size(),"/",checks," ",failures);quit(0 if failures.is_empty() else 1)
