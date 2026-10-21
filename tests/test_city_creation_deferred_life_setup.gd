extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func compare(saved:Dictionary,label:String)->void:
	var a:=State.new();var b:=State.new()
	check(a.restore(saved).ok and b.restore(saved).ok,label+": complete saved worlds restore")
	var direct:=Life.new();root.add_child(direct);direct.set_process(false);direct.setup(a)
	var deferred:=Life.new();root.add_child(deferred);deferred.set_process(false);deferred.setup(b,true)
	check(deferred.residents.is_empty() and deferred.last_revision==-1,label+": cold preparation has no prematurely visible residents")
	check(deferred.begin_budget_sync(),label+": routing begins in its independent worker")
	while not deferred.poll_budget_sync(false):await process_frame
	check(deferred.residents.is_empty(),label+": joined routes still wait for publication")
	check(deferred.commit_budget_sync(),label+": prepared routing commits")
	deferred.finish_initial_setup()
	check(deferred.last_revision==b.revision and not deferred.budget_sync_pending(),label+": completed life describes the current revision")
	check(deferred.connected_houses==direct.connected_houses,label+": exact normal-load street connectivity")
	var expected:Dictionary=direct.checkpoint();var actual:Dictionary=deferred.checkpoint()
	check(actual==expected,label+": actual resident positions, waits, workers, tea and concert resume exactly like normal loading")
	var same:=true
	for key:String in ["life_progress","bakery_supply","workshop_supply","craft_transit","cafe_progress","house_improvements","house_culture","house_clockwork"]:
		same=same and a.snapshot().get(key)==b.snapshot().get(key)
	check(same,label+": background loading creates no extra purchases, production or rewards")
	direct.queue_free();deferred.queue_free();await process_frame
func run()->void:
	Engine.max_fps=100
	var chosen:Dictionary=Examples.read("example_town")
	check(chosen.ok,"packaged legacy life town validates")
	await compare(chosen.world,"legacy town")
	var city:=State.new();city.restore(chosen.world)
	var source:=Life.new();root.add_child(source);source.set_process(false);source.setup(city)
	var venue:=""
	for house:Dictionary in city.houses:
		if city.can_host_concert(str(house.id)):venue=str(house.id);break
	check(not venue.is_empty() and source.invite_concert(venue).ok,"invite a real legacy performance")
	for tick in range(2000):
		if str(source.concert_status().phase)=="playing":break
		source._process(.1)
	check(str(source.concert_status().phase)=="playing","actual audience arrives and performance starts")
	for tick in range(17):source._process(.1)
	var checkpoint:Dictionary=source.checkpoint()
	check(checkpoint.concert.get("elapsed",0.)>1.5 and not checkpoint.residents.is_empty(),"checkpoint contains a real in-progress concert and journeys")
	city.set_journey_checkpoint(checkpoint)
	await compare(city.snapshot(),"in-progress performance")
	source.queue_free();await process_frame
	print("DEFERRED_LIFE_SETUP ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	quit(0 if failures.is_empty() else 1)
