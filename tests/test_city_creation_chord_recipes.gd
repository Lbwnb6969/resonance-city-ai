extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Fixtures=preload("res://tools/fixtures/city_creation_chord_fixture.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _roundtrip(city:RefCounted,label:String)->void:
	var restored:=State.new();var result:Dictionary=restored.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(result.ok,"real service ledgers roundtrip: "+label+" "+str(result.get("message","")))
	if result.ok:_check(restored.synergy_buffs()==city.synergy_buffs(),"same authored geometry derives the same chords: "+label)
func _life(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func _remove(city:RefCounted,id:String,x:int,z:int,level:int)->bool:
	for cell:Dictionary in city.houses[city._house_index(id)].cells:
		if int(cell.x)==x and int(cell.z)==z and int(cell.level)==level:return city.remove_cell(id,str(cell.id)).ok
	return false
func _queue()->void:
	var city:RefCounted=Fixtures.pastoral();var extra:Dictionary=city.add_house(Vector2(-14,0));var points:Array[Vector2]=[Vector2(-11,1.55),Vector2(-14,1.55)]
	_check(extra.ok and city.add_road(points,"path","none").ok,"fourth real household connects to the bakery and cafe network")
	var life:=_life(city);var homes:Array[String]=[]
	for resident:Dictionary in life.residents:
		if city.has_chord(str(resident.home_id),"pastoral_triad") and life.connected_houses.has(str(resident.home_id)):homes.append(str(resident.home_id))
	_check(homes.size()==4 and city.produce_bread("h2",4),"four actual households have four real loaves available")
	var queued:Dictionary={}
	for id:String in homes:
		var resident:Dictionary=life.cafe._resident(id);resident.node.position=life.positions[life.connected_houses.h2]+Vector3.UP*.1
		resident.destination_id="h2";resident.dwell_id="h2";resident.service_pending="bakery";resident.wait=0.;resident.paused=false
		life._tick_citizen(resident,0.,0.,false)
		if not resident.has("cafe_visit"):queued=resident
	_check(not queued.is_empty() and str(queued.dwell_id)=="h2" and str(queued.service_pending).is_empty(),"full real three-seat cafe retains the fourth paid visitor at the bakery")
	if not queued.is_empty():
		var purchased:=int(city.life_progress.purchases)
		for i in range(4):queued.wait=0.;life._tick_citizen(queued,0.,0.,false)
		_check(int(city.life_progress.purchases)==purchased and city.has_cafe_credit(str(queued.home_id)),"retries never consume another loaf or spend tea credit")
		_check(city.set_journey_checkpoint(life.checkpoint()).ok,"ordinary saved doorstep dwell can represent the paid tea queue")
		var restored:=State.new();_check(restored.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"queued city and conserved bread load normally")
		var resumed:=_life(restored);var person:Dictionary=resumed.cafe._resident(str(queued.home_id))
		_check(str(person.dwell_id)=="h2" and str(person.service_pending).is_empty() and person.node.position.distance_to(queued.node.position)<.001,"load keeps the paid waiting place without a second purchase")
		var visits:=false
		for i in range(2400):
			if person.has("cafe_visit"):visits=true;break
			resumed._process(.05)
		_check(visits and int(restored.cafe_progress.get("h4",{}).get("groups",0))>0,"existing seated guests complete real tea and the waiting visitor walks straight to the released seat")
		resumed.queue_free();await process_frame
	life.queue_free();await process_frame
func _scope()->void:
	var city:RefCounted=Fixtures.pastoral();_check(city.remove_district("d1").ok,"the original broad recipe district is actually removed")
	var points:Array[Vector2]=[Vector2(-2.4,-5)]
	var bakery:Dictionary=city.add_district(points,3.2,"warm")
	points=[Vector2(-2.4,1)];var cafe:Dictionary=city.add_district(points,3.2,"market")
	points=[Vector2(-16,8)];var pond:Dictionary=city.add_district(points,3.2,"sylvan")
	_check(bakery.ok and cafe.ok and pond.ok and city.link_districts(bakery.district_id,cafe.district_id).ok and city.link_districts(cafe.district_id,pond.district_id).ok,"bakery cafe and pond occupy three real linked districts")
	_check(not city.has_chord("h2","pastoral_triad"),"a transitive three-district chain cannot substitute for one district or one direct pair")
	points=[Vector2(-2.4,1),Vector2(-16,8)];var garden:Dictionary=city.add_district(points,3.2,"sylvan")
	_check(garden.ok and city.link_districts(bakery.district_id,garden.district_id).ok and city.shares_chord("h2","h4","pastoral_triad"),"a direct pair with the actual cafe pond and bakery does activate the recipe")
func _run()->void:
	var city:RefCounted=Fixtures.pastoral()
	_check(city.has_chord("h1","pastoral_triad") and city.has_chord("h4","pastoral_triad"),"actual pond bakery and cafe activate the local pastoral recipe")
	_check(not city.has_chord("h6","pastoral_triad"),"opposite unpainted bank receives no unrelated local recipe")
	_check(is_equal_approx(city.installation_multiplier("h2","h1"),1.),"an oven cannot accelerate craft installation")
	var supply:Dictionary=city.add_house(Vector2(-18,0));_check(supply.ok and city.set_house_role(str(supply.house_id),"workshop").ok,"real wood workshop opens for upgrade timing")
	_check(is_equal_approx(city.installation_multiplier(str(supply.house_id),"h1"),1.25),"pastoral households receive twenty five percent faster early wood installation")
	_roundtrip(city,"pastoral")
	_check(city.remove_water_at(Vector2(-16,8)).ok and not city.has_chord("h1","pastoral_triad"),"removing the actual local pond invalidates the recipe")
	_check(city.undo().ok and city.has_chord("h1","pastoral_triad"),"undo restores the pond and exact recipe")
	var points:Array[Vector2]=[Vector2(-30,20)]
	var remote:Dictionary=city.add_district(points,4.,"deep");_check(remote.ok,"unrelated third district exists")
	_check(not city.has_chord("h1","renaissance_fugue"),"bakery and cafe cannot stand in for actual arcade architecture")
	city=Fixtures.highland()
	_check(city.has_chord("h1","highland_fifth") and is_equal_approx(city.walking_multiplier("h1"),1.25*1.1),"four real raised foundations three-storey bell and actual treads grant highland walking")
	_check(city.undo().ok and not city.has_chord("h1","highland_fifth"),"tower and elevation alone cannot replace a real stair road")
	_check(city.redo().ok and city.has_chord("h1","highland_fifth"),"redo of the actual stair road restores highland scope")
	_roundtrip(city,"highland")
	city=Fixtures.renaissance()
	_check(city.has_chord("h1","renaissance_fugue"),"three generated arcade houses atelier wood workshop and actual lamp-street ring activate fugue")
	var shop:=""
	for house:Dictionary in city.houses:
		if house.role=="workshop":shop=str(house.id)
	_check(city.produce_craft(shop,1) and city.reserve_craft(shop,"h4","h1") and city.complete_craft(shop,"h4","h1"),"one actual wood object is crafted reserved and delivered")
	_check(city.improvement_level("h1")==1 and city.culture_level("h1")==1 and int(city.workshop_status(shop).produced)==2 and int(city.workshop_status(shop).delivered)==2,"shared workbench gifts a real counted cultural object without breaking stock conservation")
	_roundtrip(city,"fugue gift")
	_check(city.produce_craft("h2",1) and city.reserve_craft("h2","h3","h1","art"),"a real atelier reserves a second cultural object")
	_check(city.produce_craft(shop,1) and city.reserve_craft(shop,"h4","h1") and city.complete_craft(shop,"h4","h1") and city.culture_level("h1")==1,"wood gift preserves the atelier's already reserved final cultural slot")
	_check(city.complete_craft("h2","h3","h1") and city.culture_level("h1")==2,"reserved artist finishes exactly once after the wood delivery")
	_roundtrip(city,"concurrent wood and art")
	_check(city.add_cell("h1",0,0,2).ok,"existing arcade can grow into a bell tower")
	# Keep the other recipe pieces but remove its actual third arcade upper room.
	_check(_remove(city,"h3",0,0,1) and city.has_chord("h1","renaissance_fugue"),"two actual arcades satisfy the consolidated fugue threshold")
	_check(_remove(city,"h4",0,0,1) and not city.has_chord("h1","renaissance_fugue"),"one arcade cannot satisfy the two-house recipe")
	city=Fixtures.clockwork()
	_check(city.has_chord("h2","clockwork_waltz"),"clockmaker two generated glasshouses and actual tram street activate waltz")
	var enhanced:float=city.site_production_multiplier("h2")
	var life:=_life(city);var car:Dictionary={};var at:=Vector2(-18,1)
	life.tram._charge_waltz(car,at)
	_check(city.afterglow_remaining("h1")>=30.,"actual tram entering the recipe district charges nearby homes")
	city.advance_resonance_afterglow(5.);life.tram._charge_waltz(car,at)
	_check(is_equal_approx(city.afterglow_remaining("h1"),25.),"same tram within the same district never refreshes glow every frame")
	_check(city.afterglow_remaining("h4")<=0.,"homes more than ten metres from the passed street remain uncharged")
	life.tram._charge_waltz(car,Vector2(-2,1))
	_check(is_equal_approx(city.afterglow_remaining("h4"),30.) and is_equal_approx(city.afterglow_remaining("h1"),25.),"same district passage charges newly reached homes without refreshing earlier ones")
	life.tram._charge_waltz(car,Vector2(-35,30));life.tram._charge_waltz(car,at)
	_check(is_equal_approx(city.afterglow_remaining("h1"),30.),"a real return to the district charges it again")
	life.queue_free();await process_frame
	_check(_remove(city,"h4",1,0,1) and city.has_chord("h2","clockwork_waltz") and is_equal_approx(city.site_production_multiplier("h2"),enhanced),"one remaining glasshouse retains the consolidated waltz recipe")
	_check(_remove(city,"h1",1,0,1) and not city.has_chord("h2","clockwork_waltz") and is_equal_approx(city.site_production_multiplier("h2")*1.4,enhanced),"removing the last glasshouse removes exactly the forty percent speed bonus")
	_roundtrip(city,"clockwork")
	city=Fixtures.chrono()
	var east:=str(city.houses[-1].id)
	_check(city.shares_chord("h1",east,"chrono_counterpoint"),"different real eras manual link and shared double arch bridge activate counterpoint")
	_check(city.Quality.prestige(city,city.houses[0]),"cross-river counterpart grants the final tier qualification")
	life=_life(city)
	var worker:Dictionary={"workshop_id":"h2","deliveries":0}
	for house:Dictionary in city.houses:
		if house.role=="residential" and str(house.id)!=east:city.house_improvements[str(house.id)]=3
	var order:Dictionary=life.workshop._recipient_order(worker)
	if str(order.target)!=east:print("COUNTERPOINT_ROUTE ",JSON.stringify({"order":order,"east":east,"ports":life.connected_houses,"roles":life._roles,"route":life.workshop._between("h2",east)}))
	_check(str(order.target)==east,"real road-reachable opposite service can exceed the original twenty two metre delivery radius")
	_check(city.unlink_districts("d1","d2").ok and city.has_chord("h1","chrono_counterpoint"),"real cross-river bridge alone connects two formed era groups")
	for road:Dictionary in city.roads.duplicate(true):
		if road.bridge:city.remove_road(str(road.id))
	_check(not city.has_chord("h1","chrono_counterpoint"),"removing both bridge and audio link removes counterpoint")
	_check(city.link_districts("d1","d2").ok and city.has_chord("h1","chrono_counterpoint"),"audio arc alone connects formed era groups for the chord")
	life._sync()
	_check(life.workshop._between("h2",east).is_empty(),"musical service sharing never fabricates a pedestrian crossing")
	life.queue_free();await process_frame
	_scope()
	await _queue()
	print("CHORD_RECIPES ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
