extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Deck=preload("res://scripts/world/city_creation_tea_deck_plan.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture()->RefCounted:
	var city:=State.new();city.initialize_free();city.add_water([Vector2(-32,-17.6),Vector2(-24,-17.6)] as Array[Vector2],2.2,"pond");city.add_house(Vector2(-28,-20));city.set_house_era("h1","modern_eco");city.set_house_architecture("h1",Deck.ID);return city
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var city:RefCounted=fixture();var plan:Dictionary=Deck.find(city,"h1")
	check(not plan.is_empty(),"actual authored pond and dry house produce a real cantilever and side landing")
	if not plan.is_empty():
		check(is_equal_approx(plan.floors[0].size.y,1.4) and city.water_clearance(Deck.at(plan,Vector2(0,1.3)))<0.,"actual 1.4m deck reaches real water")
		check(Deck.supported(plan,Deck.at(plan,Vector2(0,.85)),.28) and Deck.supported(plan,Deck.at(plan,Vector2(plan.wing*1.25,.25)),.20),"actual table and side walkway footprints have continuous structural support")
		check(city.water_clearance(plan.landing)>.15 and plan.rails.size()==5,"side landing is dry while real guard segments leave the approach open")
		check(is_equal_approx(city.street_height(Deck.at(plan,Vector2(0,1.1))),plan.top) and city.water_clearance(Deck.at(plan,Vector2(0,1.1)))<0.,"real walking floor is above unchanged real water")
		check(city.set_house_role("h1","garden_cafe").ok,"existing public role can use the actual platform")
		var api=preload("res://scripts/world/city_creation_cafe_layout.gd").create_context();var cafe:Dictionary=api.layout(city,"h1")
		check(not cafe.is_empty() and cafe.seats.size()==2 and cafe.has("tea_deck"),"shared furniture and actor planner uses two real compact deck seats")
		if not cafe.is_empty():
			for seat:Vector2 in cafe.seats:check(not api.route(city,"h1",plan.landing,seat).is_empty(),"both real chairs are reachable along supported boards without crossing table or glass")
		check(city.add_road([Vector2(-34,-23),Vector2(-26,-23)] as Array[Vector2],"path","none").ok and city.add_road([Vector2(-28,-23),Vector2(-28,-21.35)] as Array[Vector2],"path","none").ok,"actual back street and normal terminal reach the original dry entrance")
		var waiting:Array=city.functional_zones().spaces.filter(func(s):return s.kind=="waterfront" and s.members.has("h1"));check(not waiting.is_empty() and not waiting[0].eligibility.district,"unpublished network never becomes a public platform by prototype name")
		var life=preload("res://scripts/world/city_creation_life.gd").new();root.add_child(life);life.set_process(false);life.setup(city)
		var public:Array=city.functional_zones().spaces.filter(func(s):return s.kind=="waterfront" and s.members.has("h1"))
		check(public.size()==1 and public[0].eligibility.district and public[0].evidence.geometry=="supported_cantilever_public_face","actual public street reaches a supported water-facing platform across an independently checked route")
		check(city.remove_road("r2").ok,"actual public entry road can be removed")
		life._process(0.);public=city.functional_zones().spaces.filter(func(s):return s.kind=="waterfront" and s.members.has("h1"))
		check(public.size()==1 and not public[0].eligibility.district and not Deck.find(city,"h1").is_empty(),"removing the real public road withdraws public qualification while retaining the actual private structure")
		life.free()
	history_and_siting(out)
	actual_visits(out)
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("TEA_DECK_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func history_and_siting(out:String)->void:
	var city:RefCounted=fixture();var original:Dictionary=city.snapshot();var plan:Dictionary=Deck.find(city,"h1")
	var before:Dictionary=city.snapshot();var preview:Dictionary=city.houses[0].duplicate(true);preview.origin=[-27.9,-20.]
	check(not Deck.preview(city,preview).is_empty() and city.snapshot()==before,"actual moved preview derives a deck without writing author state")
	check(not Deck.supported(plan,Deck.at(plan,Vector2(-.94,.74)),.14),"exact L-shaped support rejects a disk spanning the inner air corner")
	check(not city.add_house(Deck.at(plan,Vector2(-1.25,-.25))).ok and city.snapshot()==before,"public new-house placement cannot erase an occupied side landing")
	check(not city.add_road([Deck.at(plan,Vector2(-3.,.4)),Deck.at(plan,Vector2(3.,.4))] as Array[Vector2],"path","none").ok and city.snapshot()==before,"actual new road footprint cannot overlap the cantilever")
	check(not city.place_plant(plan.landing,"olive",.4).ok,"actual structural landing reserves plant clearance")
	check(city.remove_water_at(Vector2(-28,-17.6)).ok and Deck.find(city,"h1").is_empty() and city.houses==original.houses,"filling authored water withdraws the structure without changing its chosen identity")
	check(city.undo().ok and Deck.find(city,"h1")==plan,"Undo restores exactly the same supported deck")
	check(city.redo().ok and Deck.find(city,"h1").is_empty() and city.undo().ok,"Redo and second Undo invalidate the structural cache")
	check(city.save_city(out+"/deck.json").ok,"ordinary atomic save accepts the new explicit optional architecture")
	var cold:=State.new();check(cold.load_city(out+"/deck.json").ok and cold.houses==original.houses and Deck.find(cold,"h1")==plan,"disk cold read derives exactly the same structural support")
	cold.initialize_free();check(Deck.all(cold).is_empty() and cold.restore(original).ok and Deck.find(cold,"h1")==plan,"same state object reset and restore cannot reuse an obsolete structural cache")
	check(city.set_house_era("h1","pastoral").ok and Deck.find(city,"h1").is_empty() and city.undo().ok and city.houses==original.houses,"existing era-alignment rule withdraws the deck and Undo restores its exact author choice")
	var inland:=State.new();inland.initialize_free();inland.add_house(Vector2(-28,-20));inland.set_house_era("h1","modern_eco");inland.set_house_architecture("h1",Deck.ID)
	check(Deck.find(inland,"h1").is_empty(),"prototype name never creates a false water-facing platform inland")
	var born:=State.new();born.initialize_free();check(born.begin_progression_epoch(out+"/new_role.json").ok and preload("res://scripts/world/city_creation_build_brush.gd").select(born,"modern_eco",Deck.ID) and born.add_house(Vector2(-28,-20)).ok and born.houses[0].role=="garden_cafe","enabled new-construction brush seeds the matching role without modifying existing houses")
	check(city.set_house_role("h1","residential").ok and city.set_house_architecture("h1","pavilion").ok and city.set_house_architecture("h1",Deck.ID).ok and city.houses[0].role=="residential","switching an existing house preserves its manually chosen purpose")
static func populated(out:String,prototype:String="cantilever_tea_deck",homes:int=2)->RefCounted:
	var city:RefCounted=fixture();city.begin_progression_epoch(out+"/epoch.json");city.set_house_architecture("h1",prototype);city.set_house_role("h1","garden_cafe")
	var home_z:float=-28.6 if homes==3 else -25.6
	for i in range(homes+1):
		city.add_house(Vector2(-32+i*4,home_z))
		if i==homes:city.set_house_role(str(city.houses[-1].id),"bakery")
	city.add_road([Vector2(-34,-23),Vector2(-30+(homes+1)*4,-23)] as Array[Vector2],"path","none")
	city.add_road([Vector2(-28,-23),Vector2(-28,-21.35)] as Array[Vector2],"path","none")
	for i in range(homes+1):city.add_road([Vector2(-32+i*4,-23),Vector2(-32+i*4,home_z+1.35)] as Array[Vector2],"path","none")
	return city
func make_life(city)->Node3D:
	var life=preload("res://scripts/world/city_creation_life.gd").new();root.add_child(life);life.set_process(false);life.setup(city);return life
func until(life:Node3D,predicate:Callable,seconds:float=250.)->bool:
	for ignored in range(ceili(seconds/.05)):
		if predicate.call():return true
		life._process(.05)
	return predicate.call()
func actual_visits(out:String)->void:
	var city:RefCounted=populated(out);var life:=make_life(city)
	check(life.cafe.layouts.has("h1") and life.cafe.layouts.h1.seats.size()==2 and life.residents.size()==2,"actual street graph publishes both compact seats and two resident journeys")
	check(until(life,func():return life.cafe_status("h1").phase=="tea"),"real baking, stock service and walking produce a genuine two-person deck party")
	if life.cafe_status("h1").phase=="tea":
		check(int(city.life_progress.purchases)>=2 and int(city.bakery_status("h4").served)>=2 and life.cafe.groups.h1.participants.size()==2,"actual deck visitors own distinct purchased qualifications with no phantom third chair")
		for home:String in life.cafe.groups.h1.participants:
			var guest:Dictionary=life.cafe._resident(home);var seat:Vector2=life.cafe.layouts.h1.seats[guest.cafe_visit.seat]
			check(Vector2(guest.node.position.x,guest.node.position.z).distance_to(seat)<.15 and absf(guest.node.position.y-city.street_height(seat)-.1)<.01,"actual resident root reaches its real elevated deck chair")
		life._process(2.);var elapsed:float=life.cafe.groups.h1.elapsed;check(city.set_journey_checkpoint(life.checkpoint()).ok,"actual mid-deck party checkpoint validates")
		var saved:Dictionary=city.snapshot();var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(saved))).ok,"two-seat deck intent cold reads through the existing schema")
		var resumed:=make_life(copy);check(resumed.cafe_status("h1").phase=="tea" and absf(resumed.cafe.groups.h1.elapsed-elapsed)<.001,"cold read restores actual chairs and exactly the earned normalized dwell")
		check(until(resumed,func():return int(copy.life_progress.tea_parties)==1,(6.-elapsed)*copy.cafe_time_multiplier("h1")+.1) and int(copy.life_progress.tea_visits)==2,"remaining real seated dwell settles exactly one two-person party");resumed.free()
	life.free()
	old_three_seats(out)
	old_three_seats(out,false)
func old_three_seats(out:String,free_city:bool=true)->void:
	var city:=State.new()
	if free_city:city.initialize_free(false);city.terrain_policy=1;city.begin_progression_epoch(out+"/old/epoch.json")
	else:
		# A historical legacy fixture keeps earned rights after its districts were removed.
		city.initialize();city.era_unlocks.assign(["pastoral","renaissance","clockwork","modern_eco"]);city._high_watermark.district=3;city._next_district_id=4
		city._high_watermark.house=50;city._next_house_id=51;city._high_watermark.cell=200;city._next_cell_id=201
		city.district_answers.assign([{"from":"d1","to":"d2"},{"from":"d2","to":"d3"}]);city.era_answers.assign([{"from":"d1","to":"d2","from_era":"pastoral","to_era":"renaissance"},{"from":"d2","to":"d3","from_era":"renaissance","to_era":"clockwork"}])
	city.set_house_era("h4","modern_eco");city.set_house_architecture("h4","pavilion");city.set_house_role("h4","garden_cafe")
	check(city.add_water([Vector2(-4,-1.4),Vector2(-.5,-1.4)] as Array[Vector2],2.2,"pond").ok,"old-policy compatibility fixture authors real water behind its existing cafe")
	var life:=make_life(city);check(city.produce_bread("h2",3),"old-policy compatibility fixture produces real finite bread stock")
	var invited:=0
	for resident:Dictionary in life.residents:
		if life.connected_houses.has(resident.home_id) and city.serve_bread("h2",resident.home_id) and life.cafe.try_visit(resident):invited+=1
	check(invited==3 and until(life,func():return life.cafe_status("h4").phase=="tea"),"three purchased old-policy visitors genuinely walk to the original three chairs")
	if invited==3 and life.cafe_status("h4").phase=="tea":
		if not free_city:
			check(until(life,func():return int(city.life_progress.tea_parties)==1,10.) and until(life,func():return not life.cafe.groups.has("h4"),70.),"legacy fixture earns the historical tea milestone through an actual full party and exit")
			city.produce_bread("h2",mini(3,city.bakery_capacity("h2")-int(city.bakery_status("h2").stock)))
			for resident:Dictionary in life.residents:
				if not life.connected_houses.has(resident.home_id):continue
				if not city.has_cafe_credit(resident.home_id):city.serve_bread("h2",resident.home_id)
				life.cafe.try_visit(resident)
			check(life.cafe.groups.get("h4",{}).get("participants",[]).size()==3 and until(life,func():return life.cafe_status("h4").phase=="tea"),"legacy fixture begins another genuine three-person party after that earned milestone")
		var previous_parties:int=city.life_progress.tea_parties
		life._process(1.);var elapsed:float=life.cafe.groups.h4.elapsed;var credits:Dictionary=city.cafe_credits.duplicate(true)
		check(city.set_house_architecture("h4",Deck.ID).ok and not Deck.find(city,"h4").is_empty(),"existing old-policy house explicitly switches to a real two-seat deck")
		life._process(0.)
		if not free_city:
			check(not life.cafe.groups.has("h4") and city.cafe_credits==credits and int(city.life_progress.tea_parties)==previous_parties,"pure legacy retains its original cancellation semantics with unused qualifications and no fabricated completion")
			var checkpoint_result:Dictionary=city.set_journey_checkpoint(life.checkpoint());var save_result:Dictionary=city.save_city(out+"/legacy_deck.json")
			check(checkpoint_result.ok and save_result.ok,"pure legacy can save its actual changed tea-deck city: "+str(city._validate_snapshot(JSON.parse_string(JSON.stringify(city.snapshot())))))
			var restored:=State.new();check(restored.load_city(out+"/legacy_deck.json").ok and restored.CreationPolicy.is_free(restored)==false and not restored.journey_checkpoint.has("cafe_terrain"),"pure legacy cold read retains its original policy without free-only checkpoint fields")
			life.free();return
		check(life.cafe.groups.has("h4") and life.cafe.terrain_resume.get("h4",{}).get("suspended",false) and life.cafe.terrain_resume.h4.elapsed==elapsed,"third occupied seat suspends the complete party and preserves earned dwell without indexing a nonexistent chair")
		check(city.cafe_credits==credits and int(city.life_progress.tea_parties)==0 and city.set_journey_checkpoint(life.checkpoint()).ok,"capacity change neither spends qualifications nor invents completion and saves its pending intent")
		var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,"old-policy pending three-seat intent remains a valid cold snapshot")
		var resumed:=make_life(copy);check(resumed.cafe.groups.has("h4") and resumed.cafe.terrain_resume.h4==life.cafe.terrain_resume.h4,"cold old-policy capacity mismatch preserves exact suspended intent");resumed.free()
		check(city.undo().ok,"Undo restores the original three-chair house");life._process(0.)
		check(life.cafe.groups.has("h4") and life.cafe.groups.h4.phase=="tea" and life.cafe.groups.h4.elapsed==elapsed,"Undo restores original chairs under residents and resumes exactly the retained dwell")
	life.free()
