extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Supply=preload("res://scripts/world/city_creation_civic_supply.gd")
const Rarity=preload("res://scripts/world/city_creation_draft_rarity.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
var checks:=0
var failures:Array=[]
var events:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
static func fixture()->RefCounted:
	var city:=State.new();city.initialize_empty();city.era_unlocks.assign(["pastoral","renaissance","clockwork"]);city.growth_memories.assign(["dawn","tide","festival"])
	for z:float in [-22.,-17.]:
		for x:float in [-30.,-26.,-22.,-18.]:city.add_house(Vector2(x,z))
	city.add_cell("h5",0,0,1)
	city.add_road([Vector2(-33,-20.45),Vector2(-33,-15.45)] as Array[Vector2])
	for z:float in [-20.45,-15.45]:city.add_road([Vector2(-33,z),Vector2(-18,z)] as Array[Vector2])
	city.add_water([Vector2(-33,-24)] as Array[Vector2],3.2,"pond")
	for at:Vector2 in [Vector2(-26,-25),Vector2(-29,-25),Vector2(-23,-25)]:city.place_plant(at,"olive")
	return city
func attach(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func run()->void:
	var city:=fixture();var life:=attach(city)
	life.wish_callback=func(id,kind,quantity):events.append({"id":id,"kind":kind,"quantity":quantity})
	var began:=Time.get_ticks_usec()
	for i in range(5):
		var role:String=Supply.ROLES[i]
		var result:Dictionary=city.set_house_role("h%d"%[i+1],role)
		check(result.ok,"public role selection "+role);life.site_wishes.on_edit(result)
	check((Time.get_ticks_usec()-began)/1000.<200. and events.size()==5,"all five accepted connected roles respond in the edit handler within .2s")
	check(city.bakery_status("h1").produced==2 and city.workshop_status("h2").produced==1 and city.workshop_status("h4").produced==1 and city.workshop_status("h5").produced==1,"first objects are real bounded bread/instrument/art/musicbox inventories")
	check(city.life_progress.tea_parties==0 and city.cafe_credits.is_empty(),"cafe debut prepares a table and never invents attendance or tea rewards")
	life._sync();Supply.bind(life)
	check(Supply.status(city,"h4").tier==2 and Supply.status(city,"h2").tier==2,"real road-connected wood instrument upgrades both workshop and academy")
	check(city.workshop_status("h2").stock==0 and city.workshop_status("h2").delivered==1,"the academy's durable instrument consumes exactly one real stock item")
	var paid:Dictionary=city.workshop_supply.duplicate(true)
	for i in range(4):Supply.pump(life)
	check(city.workshop_supply==paid,"durable instrument is not charged repeatedly by polling")
	check(Supply.receive(life,"h3",true),"a real connected bakery supplies the next cafe party")
	check(city.bakery_status("h1").stock==1 and city.bakery_status("h1").served==1,"one tea meal debits stock and credits served without changing production")
	check(Supply.status(city,"h3").tier==2 and Supply.status(city,"h1").tier==2,"food receipt activates both sides of the cafe supply link")
	check(is_equal_approx(Supply.speed(city,"h4"),1.4*1.35) and is_equal_approx(Supply.tea_speed(city,"h3"),1.4*1.35),"1.4x salon/academy and 1.35x clock speed reach actual production/tea multipliers")
	var bread:Dictionary=city.bakery_supply.duplicate(true)
	check(Supply.receive(life,"h3",true) and city.bakery_supply==bread,"same or cancelled party reuses its prepaid meal")
	var saved:Dictionary=JSON.parse_string(JSON.stringify(city.snapshot()));var restored:=State.new()
	var restore_result:Dictionary=restored.restore(saved);print("CIVIC_COLD_RESTORE ",restore_result)
	check(restore_result.ok,"optional receipts and all actual inventories restore through real JSON Schema19")
	var previous:Dictionary=restored.snapshot();var replay:=attach(restored)
	check(restored.bakery_supply==city.bakery_supply and restored.workshop_supply==city.workshop_supply and events.size()==5,"cold-load baseline grants no extra debut or instrument")
	check(Supply.status(restored,"h4").tier==2 and is_equal_approx(Supply.tea_speed(restored,"h3"),1.4*1.35),"paid instrument and pending tea meal survive a new Life/network instance")
	replay.free()
	for mutate:Callable in [func(d):d.harmony_journey.receipts["civic_instrument/h4/h2"]=2,func(d):d.harmony_journey.receipts.erase("civic_instrument/h4/h2"),func(d):d.harmony_journey.receipts["civic_instrument/h999/h2"]=1,func(d):d.harmony_journey.receipts["debut/h4/arcade"]=0]:
		var invalid:Dictionary=saved.duplicate(true);mutate.call(invalid);var retained:Dictionary=restored.snapshot()
		check(not restored.restore(invalid).ok and restored.snapshot()==retained,"forged instrument/first-show receipts cannot weaken stock or issued-ID conservation")
	var old_count:=events.size();city.set_house_role("h4","residential");life._sync();city.set_house_role("h4","atelier");life._sync()
	check(events.size()==old_count and city.workshop_status("h4").produced==1,"changing a role cannot replay the same first canvas")
	check(city.remove_road(str(city.roads[1].id)).ok,"delete the real supply street")
	life._sync();check(Supply.status(city,"h4").tier==0 and Supply.status(city,"h3").tier==0,"disconnected consumers lose tier and tempo; proximity cannot forge a route")
	check(city.add_road([Vector2(-33,-20.45),Vector2(-18,-20.45)] as Array[Vector2]).ok,"reconnect actual doors")
	life._sync();check(Supply.status(city,"h4").tier==2 and city.workshop_status("h2").delivered==1,"reconnection reuses the saved durable instrument")
	city.set_workshop_open("h5",false);life._sync()
	check(Supply.status(city,"h4").tempo_mult==1.,"closing a clock hub removes its real efficiency aura")
	life.free()
	verify_rarity()
	print("CIVIC_SUPPLY ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"debut_events":events}))
	quit(0 if failures.is_empty() else 1)
func verify_rarity()->void:
	check(Rarity.roll_card_rarity(0,.99,0)==1 and Rarity.roll_card_rarity(0,.2,0)==2 and Rarity.roll_card_rarity(0,.05,0)==3,"silver/gilded/prismatic use actual 62/28/10 ranges")
	check(Rarity.roll_card_rarity(3,.30,0)==3 and Rarity.roll_card_rarity(0,.99,2)==3,"school affinity and the third-draw guarantee change real rarity")
	var city:=State.new();city.initialize_empty();preload("res://scripts/world/city_creation_harmony_receipts.gd").initialize(city)
	Journey.add_harmony_xp(city.harmony_journey,1000)
	var original:Array=city.harmony_journey.pending_draft.duplicate();var tiers:Dictionary=city.harmony_journey.draft_rarities.duplicate()
	check(Rarity.rerolls_left(city.harmony_journey)==1 and Rarity.reroll(city).ok,"one free reroll is a real authored transaction")
	var replacement:Array=city.harmony_journey.pending_draft.duplicate()
	check(Rarity.rerolls_left(city.harmony_journey)==0 and not Rarity.reroll(city).ok,"same invitation cannot exceed its free allowance")
	city.undo();check(city.harmony_journey.pending_draft==original and city.harmony_journey.draft_rarities==tiers and Rarity.rerolls_left(city.harmony_journey)==0,"undo restores original rarity/offer but cannot refund spent rerolls")
	city.redo();check(city.harmony_journey.pending_draft==replacement and Rarity.rerolls_left(city.harmony_journey)==0,"redo restores the replacement and the same spent allowance")
	var id:String=city.harmony_journey.pending_draft[0];var rarity:=Rarity.tier(city.harmony_journey,id)
	check(Journey.choose(city,id).ok and int(city.harmony_journey.rarity_ranks[id])==rarity,"chosen card persists its real rarity beside the original stable ID")
	var decoded:Dictionary=JSON.parse_string(JSON.stringify(city.snapshot()));var copy:=State.new()
	check(copy.restore(decoded).ok and copy.harmony_journey==city.harmony_journey,"rarity, drought, serial, spent rerolls and owned effects round trip exactly")
	for mutate:Callable in [func(d):d.rarity_ranks[id]=2.5,func(d):d.rarity_ranks[id]=4,func(d):d.draft_rarities={},func(d):d.draft_serial=INF]:
		var invalid:Dictionary=decoded.duplicate(true);mutate.call(invalid.harmony_journey);var before:Dictionary=copy.snapshot()
		check(not copy.restore(invalid).ok and copy.snapshot()==before,"invalid optional rarity data is rejected before replacing the live town")
	verify_credit_replay()
func verify_credit_replay()->void:
	var city:=State.new();city.initialize_empty();preload("res://scripts/world/city_creation_harmony_receipts.gd").initialize(city)
	Journey.add_harmony_xp(city.harmony_journey,1000)
	var first:String=city.harmony_journey.pending_draft[0]
	Journey.choose(city,first);var serial:int=city.harmony_journey.draft_serial
	check(Rarity.reroll(city).ok,"next earned invitation can spend its first real reroll")
	var offered:Array=city.harmony_journey.pending_draft.duplicate();var tiers:Dictionary=city.harmony_journey.draft_rarities.duplicate()
	city.undo();city.undo()
	var drought:int=city.harmony_journey.receipts.prismatic_drought
	for cycle in range(4):
		check(Journey.choose(city,first).ok and city.harmony_journey.draft_serial==serial,"rechoosing a prior card reuses the next credit's invitation identity")
		check(Rarity.rerolls_left(city.harmony_journey)==0 and not Rarity.reroll(city).ok,"cross-choice undo cannot replenish a spent reroll")
		check(city.harmony_journey.pending_draft==offered and city.harmony_journey.draft_rarities==tiers and city.harmony_journey.receipts.prismatic_drought==drought,"revisiting an invitation keeps its actual cards, rarity and pity history")
		city.undo()
