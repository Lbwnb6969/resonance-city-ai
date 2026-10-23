extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const Fixtures=preload("res://tools/fixtures/city_creation_juice_fixture.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	check(Journey.cards().size()==18 and Journey.Scores.CHOICES.size()==12,"twelve era charters and six traditions")
	var city:=State.new();city.initialize_empty();var legacy:=city.snapshot()
	check(not legacy.has("harmony_journey"),"untouched legacy omits optional field")
	Receipts.initialize(city);check(Receipts.collect(city).earned==0,"initial baseline grants no invented historical XP")
	var added:=city.add_house(Vector2(-14,-5));check(added.ok,"free house authoring before any draft")
	var row:=Receipts.collect(city);check(row.earned==2,"new real house earns exactly once")
	city.undo();Receipts.collect(city);city.redo();check(Receipts.collect(city).earned==0,"undo and redo cannot farm construction receipts")
	city.set_house_role(str(added.house_id),"bakery");city.produce_bread(str(added.house_id),2)
	row=Receipts.collect(city);check(row.events.has("bread") and row.earned>0,"real produced supply grants loaf XP")
	check(Receipts.collect(city).earned==0,"same counters do not double credit")
	var before:=city.harmony_journey.duplicate(true)
	Journey.add_harmony_xp(city.harmony_journey,1000)
	check(Journey.credits(city.harmony_journey)>=4 and city.harmony_journey.pending_draft.size()==3,"multiple earned levels preserve every pending choice")
	var pending:Array=city.harmony_journey.pending_draft.duplicate()
	check(not Journey.choose(city,"not_offered").ok,"unoffered card cannot be selected")
	var id:String=pending[0];var slots:=Journey.credits(city.harmony_journey)
	check(Journey.choose(city,id).ok and Journey.credits(city.harmony_journey)==slots-1,"one authored choice consumes exactly one credit")
	var ranks:Dictionary=city.harmony_journey.ranks.duplicate();var level:int=city.harmony_journey.harmony_level
	Journey.add_harmony_xp(city.harmony_journey,600)
	var earned_xp:int=city.harmony_journey.harmony_xp;var earned_level:int=city.harmony_journey.harmony_level
	city.undo()
	check(city.harmony_journey.traditions.is_empty() and city.harmony_journey.pending_draft==pending,"choice undo restores the same three leaves")
	check(city.harmony_journey.harmony_level==earned_level and city.harmony_journey.harmony_xp==earned_xp,"choice undo conserves subsequently earned life XP")
	city.redo();check(city.harmony_journey.ranks==ranks and city.harmony_journey.harmony_level==earned_level,"redo restores authored card and retains life XP")
	var snapshot:=city.snapshot();var copy:=State.new()
	check(snapshot.schema==19 and copy.restore(JSON.parse_string(JSON.stringify(snapshot))).ok,"JSON Schema 19 restores real state with journey")
	check(copy.harmony_journey==city.harmony_journey and copy.era_modifiers==city.era_modifiers,"chosen cards, queued leaves, ranks and receipts round trip exactly")
	check(Receipts.collect(copy).earned==0,"reload cannot farm old supply or homes")
	var xp_before:int=copy.harmony_journey.harmony_xp;copy.produce_bread(str(added.house_id),2);check(Receipts.collect(copy).earned>0 and copy.harmony_journey.harmony_xp>xp_before,"loaded city continues growth from a real new bake")
	for mutate:Callable in [
		func(d):d.harmony_level=0,
		func(d):d.harmony_level=NAN,
		func(d):d.harmony_xp=-1,
		func(d):d.harmony_xp=INF,
		func(d):d.harmony_xp=Journey.xp_for_next_level(int(d.harmony_level)),
		func(d):d.traditions=["unknown"],
		func(d):d.ranks[id]=0,
		func(d):d.ranks[id]=1000000,
		func(d):d.pending_draft=["warm_hearth_ballad","warm_hearth_ballad","stone_step_carillon"],
		func(d):d.receipts["tea"]=-1,
		func(d):d.xp_remainder=1.,
		func(d):d.traditions=null]:
		var invalid:=snapshot.duplicate(true);mutate.call(invalid.harmony_journey)
		var original:=copy.snapshot();check(not copy.restore(invalid).ok and copy.snapshot()==original,"malformed journey rejected atomically")
	var old_schema:=snapshot.duplicate(true);old_schema.schema=18;check(not copy.restore(old_schema).ok,"journey cannot sneak into Schema 18")
	var locked:=Journey.default_state();locked.harmony_level=2;locked.pending_draft=["polyphonic_academy","warm_hearth_ballad","stone_step_carillon"]
	check(not Journey.validate(locked),"locked era card cannot be imported into pastoral town")
	var long_run:=Journey.default_state();var unlocks:Array=["pastoral","renaissance","clockwork","modern_eco"]
	for n in range(100):
		Journey.add_harmony_xp(long_run,Journey.xp_for_next_level(int(long_run.harmony_level)),74001,unlocks)
		var selected:String=long_run.pending_draft[0]
		if n<18:
			for candidate:String in long_run.pending_draft:
				if candidate not in long_run.traditions:selected=candidate;break
		check(Journey.choose_inspiration(long_run,selected,unlocks) and Journey.validate(long_run,unlocks),"endless level %d offers three valid leaves and consumes one credit"%(n+2))
	check(long_run.traditions.size()==18 and Journey.choices_made(long_run)==100,"all eighteen remain useful through repeated study")
	for kind:String in ["pastoral_triad","highland_fifth","renaissance_fugue","clockwork_waltz","chrono_counterpoint"]:
		var chord:RefCounted=Fixtures.city(kind);Fixtures.apply(chord,kind,false);Receipts.initialize(chord);Fixtures.apply(chord,kind,true)
		check(Receipts.collect(chord).events.has("chord"),"real recipe earns chord XP: "+kind)
		chord.undo();Receipts.collect(chord);chord.redo();check(Receipts.collect(chord).earned==0,"recipe undo/redo cannot farm XP")
	# Each new card's stated effect is consumed by real production/tea/walk APIs.
	var effects:=State.new();effects.initialize_empty();effects.add_house(Vector2(-14,-5));var house:Dictionary=effects.houses[0]
	for entry:Array in [["hearth_neighbors","bakery",1.1],["woodland_workbench","workshop",1.15],["illuminated_atelier","atelier",1.15],["brass_orchard","clockmaker",1.15],["cloud_gallery","workshop",1.1],["warm_hearth_ballad","bakery",1.2],["sylvan_luthier_guild","workshop",1.25]]:
		house.role=entry[1];effects.era_modifiers.clear();effects.harmony_journey=Journey.default_state()
		if Journey.Scores.CHOICES.has(entry[0]):effects.era_modifiers.append(entry[0])
		else:effects.harmony_journey.traditions.append(entry[0])
		check(is_equal_approx(effects.ScoreModifiers.production(effects,house),entry[2]),"actual production effect: "+str(entry[0]))
	effects.era_modifiers.assign(["garden_salons"]);check(is_equal_approx(effects.cafe_time_multiplier(str(house.id)),.9),"real tea duration consumer")
	effects.era_modifiers.clear();effects.harmony_journey.traditions=["twilight_tea_pavilion"]
	check(is_equal_approx(effects.ScoreModifiers.afterglow(effects),1.25),"real tea and concert afterglow consumer")
	var shore:RefCounted=Fixtures.wishes();shore.add_water([Vector2(-33,-24)] as Array[Vector2],3.2,"pond");shore.harmony_journey=Journey.default_state();shore.harmony_journey.traditions=["lantern_bridge_echo"]
	check(is_equal_approx(shore.ScoreModifiers.production(shore,shore.houses[0]),1.15),"real water distance enables bridge-shadow production")
	var terrace:RefCounted=Fixtures.city("highland_fifth");terrace.harmony_journey=Journey.default_state();terrace.harmony_journey.traditions=["stone_step_carillon"]
	check(is_equal_approx(terrace.ScoreModifiers.walking(terrace,"h1"),1.2) and float(terrace.houses[0].get("base_y",0.))>=1.,"actual sculpted terrace enables walking bonus")
	var court:=State.new();court.restore(preload("res://scripts/world/city_creation_examples.gd").read("example_courtyard").world)
	var plans:Array=court.courtyard_plans();check(not plans.is_empty(),"real closed-court topology supplies members")
	if not plans.is_empty():
		var member:String=plans[0].members[0];court.set_house_role(member,"workshop");court.harmony_journey=Journey.default_state();court.harmony_journey.traditions=["courtyard_canon_spring"]
		check(is_equal_approx(court.ScoreModifiers.production(court,court.houses[court._house_index(member)]),1.3),"actual court member enables canon production bonus")
	var mature:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city();Receipts.initialize(mature)
	for n in range(18):
		Journey.add_harmony_xp(mature.harmony_journey,Journey.xp_for_next_level(int(mature.harmony_journey.harmony_level)),74001,mature.era_unlocks)
		var pick:String=mature.harmony_journey.pending_draft[0]
		for candidate:String in mature.harmony_journey.pending_draft:
			if candidate not in mature.harmony_journey.traditions:pick=candidate;break
		check(Journey.choose(mature,pick).ok and State.new().restore(mature.snapshot()).ok,"actual city mirrors and persists draft choice "+str(n+1))
	check(mature.era_modifiers.size()==12,"all twelve charters coexist when earned from drafts")
	for role:String in ["residential","bakery","garden_cafe","workshop","atelier","clockmaker"]:check(mature.set_house_role("h1",role).ok,"no draft imposes a role quota: "+role)
	# Cancel an actual seated invitation when its street disappears on restore.
	var daily:=State.new();daily.initialize();daily.set_house_role("h4","garden_cafe")
	var life:=preload("res://scripts/world/city_creation_life.gd").new();root.add_child(life);life.set_process(false);life.setup(daily)
	for i in range(4000):
		life._process(.05)
		if not life.cafe.groups.is_empty():break
	check(not life.cafe.groups.is_empty(),"actual tea invitation exists before route replacement")
	daily.roads.clear();daily.revision+=1;life._sync()
	check(life.cafe.groups.is_empty() and life.residents.all(func(resident):return resident.paused),"cancelled guests pause at real homes when restored streets disappear")
	life.free()
	preload("res://tests/helpers/city_creation_tradition_rules_checks.gd").run(self,check)
	print("HARMONY_JOURNEY_CPU ",checks-failures.size(),"/",checks," ",failures)
	quit(0 if failures.is_empty() else 1)
