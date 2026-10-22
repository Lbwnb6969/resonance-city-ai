extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array[String]=[]
var events:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func fixture()->RefCounted:
	var city:=State.new();city.initialize_empty()
	for at:Vector2 in [Vector2(-30,-22),Vector2(-26,-22),Vector2(-22,-22),Vector2(-30,-17),Vector2(-26,-17),Vector2(-22,-17)]:city.add_house(at)
	city.set_house_role("h1","bakery");city.set_house_role("h2","workshop")
	city.add_road([Vector2(-33,-20.45),Vector2(-33,-15.45)] as Array[Vector2])
	for z:float in [-20.45,-15.45]:city.add_road([Vector2(-33,z),Vector2(-22,z)] as Array[Vector2])
	return city
func new_life(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func water(city:RefCounted)->void:check(city.add_water([Vector2(-33,-24)] as Array[Vector2],3.2,"pond").ok,"legal actual pond")
func trees(city:RefCounted)->void:
	for at:Vector2 in [Vector2(-26,-25),Vector2(-29,-25),Vector2(-23,-25)]:check(city.place_plant(at,"olive").ok,"legal actual tree")
func run()->void:
	var city:=fixture();var life:=new_life(city)
	water(city);trees(city);life._sync()
	check(city.wish_rewards.is_empty() and int(city.bakery_status("h1").produced)==0 and int(city.workshop_status("h2").produced)==0,"unaccepted construction and first opening never invent a reward")
	life.free()
	city=fixture();city.set_bakery_open("h1",false);city.set_workshop_open("h2",false);life=new_life(city)
	for i:int in range(2400):
		if life.bakery.workers[0].phase=="baking" and life.workshop.workers[0].phase=="crafting":break
		life._process(.05)
	check(life.bakery.workers[0].phase=="baking" and life.workshop.workers[0].phase=="crafting","real assigned workers reach their closed oven and workbench")
	life.wish_callback=func(id,kind,quantity):events.append({"id":id,"kind":kind,"quantity":quantity})
	life.site_wishes.arm("h1","water");life.site_wishes.arm("h2","tree")
	check(city.wish_rewards.is_empty(),"accepting a wish gives nothing before environmental completion")
	var clock:float=life.time
	water(city);life._sync()
	check(city.wish_rewards.is_empty(),"closed oven postpones its reward without losing accepted wish")
	city.set_bakery_open("h1",true);life._sync()
	check(int(city.bakery_status("h1").produced)==city.bakery_batch_size("h1") and city.wish_rewards.h1.water==city.bakery_batch_size("h1") and life.time==clock,"opening fulfilled oven grants exactly one real batch without simulating time")
	trees(city);life._sync();check(not city.wish_rewards.has("h2"),"closed workbench grants no object")
	city.set_workshop_open("h2",true)
	var before:Vector3=life.workshop.workers[0].node.position
	life._sync()
	var worker:Dictionary=life.workshop.workers[0];var supply:Dictionary=city.workshop_status("h2")
	check(supply.produced==1 and supply.stock==0 and not supply.transit.is_empty() and worker.phase=="to_target" and worker.carry.visible,"fulfilled good wood produces, reserves and dispatches its actual object in the same publication")
	check(life.time==clock and worker.node.position==before and not worker.route.is_empty(),"immediate dispatch preserves current physical position and actual route without advancing time")
	check(events.size()==2,"one completion callback for each accepted wish")
	var earned:Dictionary=city.wish_rewards.duplicate(true);var bread:int=city.bakery_status("h1").produced;var craft:int=supply.produced
	for i:int in range(3):life._sync();life.site_wishes.poll()
	check(city.wish_rewards==earned and city.bakery_status("h1").produced==bread and city.workshop_status("h2").produced==craft and events.size()==2,"repeated publication and polling never grant twice")
	city.undo();life._sync();city.redo();life._sync()
	check(city.wish_rewards==earned and city.bakery_status("h1").produced==bread and city.workshop_status("h2").produced==craft,"construction undo and redo preserve completed living progress")
	check(city.set_journey_checkpoint(life.checkpoint()).ok,"real newly dispatched route and inventory form a valid checkpoint")
	var saved:Dictionary=city.snapshot();var decoded:Dictionary=JSON.parse_string(JSON.stringify(saved));var copy:=State.new()
	check(saved.schema==19 and copy.restore(decoded).ok and copy.wish_rewards==earned and copy.wish_rewards.h1.water is int,"schema19 real JSON restores conserved integer reward history")
	life.free();life=new_life(copy)
	check(copy.wish_rewards==earned and copy.bakery_status("h1").produced==bread and copy.workshop_status("h2").produced==craft and life.site_wishes.pending.is_empty(),"reopening restored work grants nothing and restores its existing worker")
	life.free()
	for malformed:Variant in [[],false,{"h999":{"water":1}},{"h1":{"bogus":1}},{"h1":{"water":0}},{"h1":{"water":.5}},{"h1":{"water":999}},{"h1":[]},{"h1":{}},{"h1":{"water":INF}}]:
		var bad:Dictionary=saved.duplicate(true);bad.wish_rewards=malformed;var retained:Dictionary=copy.snapshot()
		check(not copy.restore(bad).ok and copy.snapshot()==retained,"invalid reward history is rejected atomically: "+str(malformed))
	var old_schema:Dictionary=saved.duplicate(true);old_schema.schema=18
	check(not copy.restore(old_schema).ok,"reward history cannot be smuggled into an older schema")
	city=fixture();life=new_life(city);life.site_wishes.arm("h1","water");water(city);life._sync()
	check(city.wish_rewards.has("h1") and life.bakery.workers[0].phase=="walking","outpouring is immediate while the actual travelling baker remains at their real position")
	life.free()
	city=fixture();life=new_life(city)
	var unopened:Dictionary=city.snapshot();life.site_wishes.arm("h1","water")
	check(city.restore(unopened).ok,"same State object can restore another work")
	water(city);life._sync()
	check(life.site_wishes.pending.is_empty() and city.wish_rewards.is_empty(),"successful restore cancels an old work's unfulfilled wish even when house IDs match")
	life.free()
	city=fixture();life=new_life(city);city.produce_bread("h1",city.bakery_capacity("h1"));life.site_wishes.arm("h1","water");water(city);life._sync()
	check(city.wish_rewards.is_empty() and city.bakery_status("h1").stock==city.bakery_capacity("h1"),"full shelf postpones without overflowing or consuming the one-off reward")
	for i:int in range(city.bakery_batch_size("h1")):city.serve_bread("h1")
	life.site_wishes.poll()
	check(city.wish_rewards.h1.water==city.bakery_batch_size("h1") and city.bakery_status("h1").stock==city.bakery_capacity("h1"),"actual sales create room and postponed hot batch fills exactly that room")
	life.free()
	print("WISH_FULFILMENT ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)
