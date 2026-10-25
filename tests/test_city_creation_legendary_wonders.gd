extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const Rarity=preload("res://scripts/world/city_creation_draft_rarity.gd")
const Plan=preload("res://scripts/world/city_creation_legendary_wonder_plan.gd")
const Family=preload("res://scripts/world/city_creation_tradition_synergy.gd")
const Catalog=preload("res://scripts/world/city_creation_vignette_catalog.gd")
const Whispers=preload("res://scripts/ui/city_creation_city_whispers.gd")
const RoofSupport=preload("res://scripts/visual/city_creation_roof_crown_support.gd")
var checks:=0
var failures:Array=[]
static func fixture()->RefCounted:
	var city:RefCounted=preload("res://tests/test_city_creation_civic_supply.gd").fixture()
	for x:float in [-30.,-26.,-22.,-18.]:city.add_house(Vector2(x,-12))
	city.add_road([Vector2(-33,-15.45),Vector2(-33,-10.45)] as Array[Vector2])
	city.add_road([Vector2(-33,-10.45),Vector2(-18,-10.45)] as Array[Vector2])
	preload("res://scripts/world/city_creation_harmony_receipts.gd").initialize(city)
	return city
static func choose_crowns(city:RefCounted)->int:
	Journey.add_harmony_xp(city.harmony_journey,100000,74001,city.era_unlocks)
	var turns:=0
	while Plan.unlocked(city).size()<4 and turns<70 and not city.harmony_journey.pending_draft.is_empty():
		var id:String=city.harmony_journey.pending_draft[0]
		for card:String in city.harmony_journey.pending_draft:
			if Rarity.tier(city.harmony_journey,card)==3 and not Plan.unlocked(city).has(Family.family_of(card)):id=card;break
		Journey.choose(city,id);turns+=1
	return turns
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	check(is_equal_approx(RoofSupport.triangle_max(Vector3(-4,-2,-4),Vector3(4,6,-4),Vector3(0,2,5),Vector2.ZERO,1.),3.),"disk-clipped sloped triangle keeps its exact interior circular maximum")
	check(RoofSupport.triangle_max(Vector3(3,20,3),Vector3(4,21,3),Vector3(3,20,4),Vector2.ZERO,.74)==-INF,"high trim outside the crown disk never lifts its platform")
	check(is_equal_approx(RoofSupport.triangle_max(Vector3(0,5,0),Vector3(2,0,2),Vector3(-2,0,2),Vector2.ZERO,.74),5.),"a roof ridge vertex inside the platform determines real clearance")
	check(is_equal_approx(RoofSupport.triangle_max(Vector3(0,1,0),Vector3(0,3,0),Vector3(0,1,2),Vector2.ZERO,.74),3.),"vertical visible roof trim still contributes inside the disk")
	var city:=fixture();check(Plan.derive(city).crowns.is_empty(),"unselected offers and old cities create no rare crown")
	var turns:=choose_crowns(city);var data:=Plan.derive(city)
	check(data.crowns.size()==4,"real deterministic weighted draws and public choices unlock all four schools")
	var hosts:Array=[]
	for row:Dictionary in data.crowns:
		check(row.house_id not in hosts and city._house_index(row.house_id)>=0,"crowns choose distinct actual non-landmark hosts")
		hosts.append(row.house_id)
	var before:Dictionary=city.snapshot();var copy:=State.new()
	var loaded:Dictionary=copy.restore(JSON.parse_string(JSON.stringify(before,"",true,true)));print("CROWN_RESTORE ",loaded)
	check(loaded.ok,"actual chosen rarities and credit invitation cache cold restore")
	var other:=Plan.derive(copy).duplicate(true);data=data.duplicate(true);other.erase("key");data.erase("key")
	check(other==data and city.snapshot()==before,"full rare wonder plan is stable and does not write city entities")
	Journey.add_harmony_xp(city.harmony_journey,10000,74001,city.era_unlocks)
	var hand:String=city.harmony_journey.pending_draft[0];Journey.choose(city,hand);city.undo()
	check(Plan.derive(city).crowns==data.crowns,"undoing a later card cannot relock earlier earned rare crowns")
	check(Plan.POEMS.size()==12 and Catalog.TEMPLATES.all(func(p):return Plan.POEMS.has(p.id)),"all twelve actual poem IDs have an explicit school")
	# Valid already-earned save fixture isolates optional old poem presentation.
	var historical:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
	preload("res://scripts/world/city_creation_harmony_receipts.gd").initialize(historical)
	var poems:Dictionary=historical.harmony_journey;poems["completed_vignettes"]={};poems["vignette_blessings"]={"h1":[]};poems["vignette_echoes"]={"h1":{}};poems["active_vignette"]={};poems["vignette_serial"]=24
	for row:Dictionary in Catalog.TEMPLATES:
		poems.completed_vignettes[row.id]=2;poems.vignette_blessings["h1"].append(row.id);poems.vignette_echoes["h1"][row.id]=2
	var restored:=State.new();check(restored.restore(JSON.parse_string(JSON.stringify(historical.snapshot(),"",true,true))).ok,"all twelve historical second-tier poem receipts validate under Schema19")
	var monuments:Array=Plan.derive(restored).monuments;var represented:Array=[]
	for monument:Dictionary in monuments:
		for values:Array in monument.groups.values():represented.append_array(values)
	check(represented.size()==12 and monuments.size()<=12,"twelve poems appear once each as four school motifs without one object per neighbor")
	restored.harmony_journey.erase("rarity_ranks")
	check(Plan.unlocked(restored).size()==4,"actual second-tier poem recipients independently unlock four legendary schools")
	check(restored.remove_house("h1").ok and Plan.unlocked(restored).size()==4,"demolishing the original poem recipient preserves all earned wonder blueprints")
	var moved:=Plan.derive(restored)
	check(moved.crowns.size()==4 and moved.crowns.all(func(row):return row.house_id!="h1"),"earned crowns migrate to actual surviving rooftops while removed recipient has no monument")
	var rebuilt:=State.new();check(rebuilt.restore(JSON.parse_string(JSON.stringify(restored.snapshot(),"",true,true))).ok and Plan.unlocked(rebuilt).size()==4,"demolished-recipient historical achievement survives real cold restore")
	restored.undo();check(Plan.unlocked(restored).size()==4,"undo of demolition keeps the earned blueprint")
	restored.harmony_journey["vignette_echoes"]={}
	check(Plan.unlocked(restored).is_empty(),"two different first-tier blessings never impersonate a second-tier poem")
	check(Whispers.text(restored).contains("面包坊") and restored.snapshot().houses.size()==historical.houses.size(),"mature-town whisper reads unexperienced real supply without creating progress")
	print("LEGENDARY_WONDERS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"actual_drafts":turns}))
	quit(0 if failures.is_empty() else 1)
