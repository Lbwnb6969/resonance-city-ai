extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Fixture=preload("res://tests/test_city_creation_clockwork.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _until(life:Node3D,condition:Callable,seconds:float=300.)->bool:
	for i in range(ceili(seconds/.1)):
		if condition.call():return true
		life._process(.1)
	return false
static func fixture()->RefCounted:
	var city:RefCounted=Fixture.fixture()
	for house:Dictionary in city.houses.duplicate():
		if str(house.id) not in ["h1","h2","h3","h4"]:city.remove_house(str(house.id))
	city.set_house_role("h2","clockmaker");city.set_house_era("h2","clockwork")
	return city
func _run()->void:
	var small:=State.new();small.initialize()
	_check(not small.set_house_role("h2","clockmaker").ok,"clockmaker requires earned third-era rights")
	var city:=fixture();var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	_check(life.workshop.workers.size()==1 and life.workshop.workers[0].carry.name=="CarriedMusicBox","actual reachable household supplies a clockmaker carrying a music-box prop")
	var worker:Dictionary=life.workshop.workers[0]
	_check(_until(life,func():return worker.phase=="crafting"),"clockmaker walks to its actual workshop before making anything")
	life._process(7.99)
	_check(city.workshop_status("h2").produced==0 and city.house_clockwork.is_empty(),"incomplete onsite clockwork labour grants no product or installed decoration")
	life._process(.02);life._process(0.)
	_check(worker.phase=="to_target" and worker.carry.visible and city.workshop_status("h2").transit.kind=="musicbox","completed onsite labour reserves a physical typed music-box delivery")
	var target:=str(worker.target_id);life._process(.4);var at:Vector3=worker.node.position
	var roads:Array[Dictionary]=city.roads.duplicate(true)
	city.remove_road("r1");life._process(1.)
	_check(worker.phase=="paused" and city.mechanism_level(target)==0 and worker.node.position==at,"broken road pauses carried music box without remote installation")
	_check(city.set_journey_checkpoint(life.checkpoint()).ok and city.snapshot().schema==15,"actual paused clockmaker checkpoints through optional schema fifteen")
	var snapshot:Dictionary=city.snapshot();var loaded:=State.new()
	var restored_result:Dictionary=loaded.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true)))
	_check(restored_result.ok and loaded.snapshot()==snapshot,"in-flight mechanical cargo and all city ledgers roundtrip exactly")
	var forged:Dictionary=snapshot.duplicate(true);forged.house_clockwork[target]=1
	_check(not loaded.restore(forged).ok and loaded.snapshot()==snapshot,"unbacked installed music box is rejected atomically by conservation ledger")
	forged=snapshot.duplicate(true);forged.schema=14
	_check(not loaded.restore(forged).ok,"old schema cannot import clockmaker or its new cargo")
	var resumed:=Life.new();root.add_child(resumed);resumed.set_process(false);resumed.setup(loaded)
	var restored:Dictionary=resumed.workshop.workers[0]
	_check(restored.node.position==at and restored.phase=="paused" and restored.carry.visible,"load resumes saved clockmaker position and actual music-box reservation")
	loaded.roads.assign(roads);loaded.revision+=1;resumed._sync()
	_check(_until(resumed,func():return restored.phase=="installing"),"road repair allows the same clockmaker to carry its box to recipient")
	resumed._process(1.99)
	_check(loaded.mechanism_level(target)==0,"arrival before completed two-second installation gives no decoration")
	resumed._process(.02)
	_check(loaded.mechanism_level(target)==1 and loaded.improvement_level(target)==0 and loaded.culture_level(target)==0 and loaded.workshop_status("h2").delivered==1,"physical installation grants one music box without inventing wood or artwork")
	_check(_until(resumed,func():return loaded.mechanism_level(target)==2),"continued onsite making and delivery installs recipient's second clockwork wind vane")
	_check(loaded._validate_craft_supply(loaded.snapshot(),loaded._high_watermark.house).ok,"actual mixed clockwork supply remains fully conserved")
	print("CLOCKMAKER ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"target":target,"level":loaded.mechanism_level(target)}));resumed.free();life.free();quit(0 if failures.is_empty() else 1)
