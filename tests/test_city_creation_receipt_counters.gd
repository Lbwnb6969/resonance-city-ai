extends SceneTree
## Real counter extraction and epoch high-water baseline in an isolated session.
const Counters=preload("res://scripts/world/city_creation_receipt_counters.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
class Policy:
	extends RefCounted
	static func is_free(city:RefCounted)->bool:return city.free_policy
class Fixture:
	extends RefCounted
	const CreationPolicy=Policy
	var free_policy:=false
	var life_progress:={"tea_parties":3}
	var houses:Array=[{"id":"h1"},{"id":"h2"}]
	var bakery_supply:={"h1":{"produced":6}}
	var workshop_supply:={"h2":{"delivered":4}}
	var wish_rewards:={"h1":{"bread":1}}
	var cafe_progress:={"h1":{"groups":2}}
	var harmony_journey:={"receipts":{"house/undone":1,"bread/undone":7,"bread/h1":9,"tea":5,"batch_count/undone":12,"delivery_count/undone":4,"debut/undone/craft":1,"civic_received/old_hall":1,"heritage/draft":1}}
	func synergy_buffs()->Dictionary:
		return {"active_chords":["pastoral_triad"],"chord_scopes":{"alpha":{"chords":["pastoral_triad"]}}}
	func data()->Array:
		return [life_progress,houses,bakery_supply,workshop_supply,wish_rewards,cafe_progress,harmony_journey].duplicate(true)
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	if not OS.get_cmdline_user_args().has("--isolated-session"):push_error("isolated session required");quit(1);return
	var city:=Fixture.new();var before:=city.data()
	var current:=Counters.current(city)
	check(current=={"tea":3,"house/h1":1,"house/h2":1,"bread/h1":6,"craft/h2":4,"wish/h1/bread":1,"chord/pastoral_triad/alpha":1,"tea_house/h1":2,"bake/undone":12,"delivery/undone":4,"wish/undone/craft":1,"civic/old_hall":1},"current counts reflect actual sources, not stock or inferred geometry")
	check(Receipts.counters(city)==current,"old ledger delegates to the shared current counters")
	var baseline:=Counters.baseline(city)
	check(baseline.tea==5 and baseline["bread/h1"]==9,"baseline retains higher earned counts")
	check(baseline["house/undone"]==1 and baseline["bread/undone"]==7,"Undo-absent canonical identities survive")
	check(baseline["bake/undone"]==12 and baseline["delivery/undone"]==4 and baseline["wish/undone/craft"]==1 and baseline["civic/old_hall"]==1,"Undo-absent alias identities survive")
	check(not baseline.has("heritage/draft") and not baseline.has("batch_count/undone"),"historical rights are not treated as event counters")
	check(city.data()==before,"current and baseline never initialize or advance ledgers or production")
	var aliases:=Counters.historical({"bake/h1":9,"batch_count/h1":3,"delivery_count/h2/old":7,"debut/h3/craft":0,"civic_received/square/event":1,"batch_count/":2})
	check(aliases=={"bake/h1":9,"delivery/h2":7,"wish/h3/craft":1,"civic/square/event":1},"alias collisions take maxima, identity slices and presence flags retain existing semantics")
	city.free_policy=true
	city.harmony_journey.receipts["chord/pastoral_triad/z_old"]=1
	city.harmony_journey.receipts["chord/pastoral_triad/a_old"]=1
	before=city.data();current=Counters.current(city)
	check(current.has("chord/pastoral_triad/a_old") and not current.has("chord/pastoral_triad/alpha"),"free chord keeps its existing stable receipt identity")
	check(city.data()==before,"free chord lookup stays read-only")
	city.harmony_journey={};before=city.data();current=Counters.current(city)
	check(current.has("chord/pastoral_triad/functional_city"),"new free chord uses the existing fallback identity")
	check(city.data()==before,"empty ledger stays empty")
	print("RECEIPT_COUNTERS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
