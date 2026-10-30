extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Rights=preload("res://scripts/world/city_creation_growth_rights.gd")
const Journey=Rights.Journey
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func read_unchanged(city:RefCounted)->Dictionary:
	var before:Dictionary=city.snapshot();var dirty:bool=city.dirty;var life_dirty:bool=city.life_progress_dirty
	var result:=Rights.report(city)
	check(city.snapshot()==before and city.dirty==dirty and city.life_progress_dirty==life_dirty,"read leaves authored data, rewards and dirty flags exact")
	return result
func run()->void:
	var began:=Time.get_ticks_msec()
	for free:bool in [false,true]:
		var city:=State.new()
		if free:city.initialize_free()
		else:city.initialize_empty()
		var row:=read_unchanged(city)
		check(row.cards.is_empty() and row.credits==0 and row.pending.is_empty() and row.legacy_invitations.is_empty(),"untouched city never initializes an invitation")
		check(row.chords.size()==5 and row.chords.all(func(c):return not c.active and not c.recorded),"empty city never fabricates a discovered chord")
	# Synthetic historical records exercise every supported ID, not new earnings.
	var mature:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
	var old_world:Dictionary=mature.snapshot()
	for id:String in Journey.cards():
		var city:=State.new();check(city.restore(old_world).ok,"real three-era answer history supports archived rights")
		var history:=Journey.default_state();history.harmony_level=3;history.traditions=[id];history.ranks={id:2};history.rarity_ranks={id:3}
		city.harmony_journey=history
		if Rights.Scores.CHOICES.has(id):city.era_modifiers.assign([id])
		check(Journey.validate(history,city.era_unlocks),"valid synthetic old two-rank record "+id)
		var row:=read_unchanged(city)
		check(row.cards.size()==1 and row.cards[0].id==id and row.cards[0].rank==2 and row.cards[0].rarity==3,"exact owned ID/rank/rarity "+id)
		check(row.cards[0].sample==(id in Rights.Samples.IDS),"only two implemented rank2 samples "+id)
		var cold:=State.new();var restored:=cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
		check(restored.ok,"Schema20 accepts old rights "+id+str(restored))
		check(read_unchanged(cold)==row,"cold report preserves exact right "+id)
	var classic:=State.new();classic.initialize_empty();classic.era_unlocks.append("renaissance");classic.era_modifiers.assign(["illuminated_atelier"])
	var row:=read_unchanged(classic)
	check(row.cards.size()==1 and row.cards[0].rank==0 and row.cards[0].charter,"pre-journey charter stays owned without inventing rank")
	classic.harmony_journey=Journey.default_state();classic.harmony_journey.receipts={"legacy_charter/clockwork":1,"legacy_charter/renaissance":1,"chord/pastoral_triad/old_scope":1,"chord/clockwork_waltz/unpaid":0}
	row=read_unchanged(classic)
	check(row.legacy_invitations.is_empty(),"selected or locked charter cannot create invitation")
	check(row.chords.filter(func(c):return c.recorded).size()==1 and not row.chords[0].active,"past receipt does not confer current qualification")
	classic.era_modifiers.clear();row=read_unchanged(classic)
	check(row.legacy_invitations==["renaissance"],"unclaimed existing charter receipt remains accessible")
	var city:=preload("res://tools/fixtures/city_creation_pre_cutoff_free.gd").fresh();Receipts.initialize(city)
	for z:int in range(8):
		for x:int in range(7):
			if city.houses.size()<50:check(city.add_house(Vector2(-36+x*4.,-36+z*4.)).ok,"real authored home")
	check(Receipts.collect(city).earned==100,"actual pre-cutoff free history retains original earning formula")
	row=read_unchanged(city);check(row.credits==1 and row.pending.size()==3,"actual earned invitation copied without reroll")
	var first:String=row.pending[0];row.pending.clear();check(city.harmony_journey.pending_draft.size()==3,"report arrays do not alias original offer")
	check(Journey.choose(city,first).ok,"actual old claim entry still works")
	row=read_unchanged(city);check(row.cards.size()==1 and row.cards[0].id==first and row.credits==0,"claimed right appears once")
	var house:Dictionary=city.add_house(Vector2(-36,-1));check(house.ok and city.undo().ok and city.redo().ok,"real geometry Undo/Redo")
	check(read_unchanged(city).cards==row.cards,"geometry history cannot lose owned right")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	print("GROWTH_RIGHTS ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
