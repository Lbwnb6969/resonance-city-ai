extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Rewards=preload("res://scripts/world/city_creation_unified_rewards.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
 var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").city()
 # Model a continuing town already enrolled in the unified flow before its next era.
 Receipts.initialize(city);Rewards.initialize(city)
 var old_houses:Array=city.houses.duplicate(true);var before:Dictionary=city.harmony_journey.duplicate(true)
 var a:String=city.districts[0].id;var b:String=city.districts[1].id;var c:String=city.districts[2].id
 city.record_district_answer(a,b,"pastoral","renaissance");city.record_district_answer(b,c,"renaissance","clockwork")
 check("modern_eco" in city.era_unlocks and city.houses==old_houses,"actual era unlock keeps old houses")
 check("modern_eco" not in Rewards.pending(city) and city.harmony_journey==before,"new era adds catalogue rights without second free reward")
 var old:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city();Receipts.initialize(old)
 var modifiers:Array=old.era_modifiers.duplicate();var available:Array=Rewards.pending(old);check(not available.is_empty(),"old city retains pending earned charter rights")
 Journey.add_harmony_xp(old.harmony_journey,100,74001,old.era_unlocks)
 var invitation:Array=old.harmony_journey.pending_draft.duplicate();var credits:int=Journey.credits(old.harmony_journey);var era:String=available[0];var id:String=Rewards.cards(era)[0]
 check(Rewards.choose_legacy(old,era,id).ok and id in old.era_modifiers,"legacy charter uses actual authored API")
 check(old.harmony_journey.pending_draft==invitation and Journey.credits(old.harmony_journey)==credits and old.harmony_journey.get("rarity_ranks",{}).is_empty(),"legacy choice consumes no new draft or rank and awards no fake rarity")
 var after:Dictionary=old.snapshot();check(not Rewards.choose_legacy(old,era,id).ok and old.snapshot()==after,"duplicate charter claim rejected atomically")
 check(old.undo().ok and old.era_modifiers==modifiers and era in Rewards.pending(old),"legacy claim undo retains original rights")
 check(old.redo().ok and id in old.era_modifiers and era not in Rewards.pending(old),"legacy claim redo preserves one choice")
 var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(old.snapshot(),"",true,true))).ok and copy.snapshot()==old.snapshot() and Rewards.pending(copy)==Rewards.pending(old),"old earned and pending rights cold-restore exactly")
 var modern:=State.new();modern.initialize();Receipts.initialize(modern);Rewards.initialize(modern)
 check(Rewards.pending(modern).is_empty(),"fresh town has no old charter grants")
 var j:Dictionary=modern.harmony_journey
 Journey.add_harmony_xp(j,100000,74001,modern.era_unlocks)
 for i in range(30):Journey.choose(modern,str(modern.harmony_journey.pending_draft[0]))
 var repeat:int=Journey.choices_made(j)-j.traditions.size();check(repeat>0 and repeat*.02>0 and Journey.Rarity.xp_multiplier(j)>=1.,"repeated research and rarity multipliers still available")
 check(is_equal_approx(Journey.Rarity.xp_multiplier({"rarity_ranks":{"a":2}}),1.12) and is_equal_approx(Journey.Rarity.xp_multiplier({"rarity_ranks":{"a":3}}),1.25),"protected rarity numerical rules unchanged")
 print("UNIFIED_REWARDS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
