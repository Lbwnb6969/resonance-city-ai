extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Golden=preload("res://tools/fixtures/city_creation_golden_corridor_fixture.gd")
const Local=preload("res://tools/fixtures/city_creation_landmark_adjacency_fixture.gd")
const Theater=preload("res://tools/fixtures/city_creation_amphitheater_fixture.gd")
const Quality=preload("res://tools/fixtures/city_creation_quality_fixture.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _life(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func _roundtrip(city:RefCounted,label:String)->void:
	var copy:=State.new();var result:Dictionary=copy.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(result.ok,label+": "+str(result.get("message","")))
func _corridor()->void:
	var scene:=Golden.build();var city:RefCounted=scene.city;var life:=_life(city)
	_check(life.tram.cars.size()==1 and life.tram.report().depot_id==scene.depot and life.tram.capacity(life.tram.cars[0])==24,"real depot dispatches one twenty-four-passenger car onto its actual rail component")
	_check(life.tram.corridor_house(str(scene.cafe)) and life.tram.direct(str(scene.home),str(scene.cafe)),"actual six metre corridor and a long continuous rail route waive remote cafe distance")
	var guest:Dictionary=life.cafe._resident(str(scene.home));_check(city.produce_bread("h2",1) and city.serve_bread("h2",str(scene.home)),"remote home pays for a conserved real loaf")
	_check(life.cafe.try_visit(guest) and guest.destination_id==scene.cafe and life.cafe._approach(guest.node.position,str(scene.cafe),int(guest.cafe_visit.seat)).size()>2,"earned far guest reserves a real seat along its actual approach path")
	life.cafe.cancel_all()
	var points:Array[Vector2]=[Vector2(-34,16),Vector2(-4,16)];_check(city.add_road(points,"tram").ok,"second disconnected rail line is actually authored")
	points=[Vector2(-34,0),Vector2(-34,16)];_check(city.add_road(points).ok,"ordinary road connects street networks without joining their rail graphs")
	var second:Dictionary=city.add_house(Vector2(-6,14));assert(second.ok);life._sync()
	_check(life.tram.cars.size()==2 and not life.tram.corridor_house(str(second.house_id)) and not life.tram.direct(str(second.house_id),str(scene.cafe)),"ordinary street connection never extends depot gold corridor across disconnected rails")
	var capacities:Array[int]=[]
	for car:Dictionary in life.tram.cars:capacities.append(life.tram.capacity(car))
	capacities.sort();_check(capacities==[6,24],"only the dispatched component receives fourfold capacity")
	_check(city.remove_house(str(scene.depot)).ok,"depot can be recycled during service")
	life._sync();_check(not life.tram.corridor_house(str(scene.cafe)) and not life.tram.direct(str(scene.home),str(scene.cafe)) and life.tram.capacity(life.tram.cars[0])==6,"recycling immediately withdraws express service and capacity")
	_check(city.undo().ok,"depot recycling has real edit undo");life._sync()
	_check(life.tram.direct(str(scene.home),str(scene.cafe)),"undo rebuilds gold corridor from the actual published graph")
	_roundtrip(city,"depot dispatch and service ledgers retain the old save format")
	life.free()
func _load_test(with_depot:bool)->int:
	var scene:=Golden.build();var city:RefCounted=scene.city
	for z in range(-34,-9,4):
		for x in range(-34,-9,4):
			if city.houses.size()>=30:break
			city.add_house(Vector2(x,z))
	if not with_depot:assert(city.remove_house(str(scene.depot)).ok)
	var life:=_life(city);var tram:RefCounted=life.tram;var car:Dictionary=tram.cars[0]
	# Twenty-four distinct households already waiting at the real end station.
	var board:String=life._network._key(Vector2(-36,0));var exit:String=life._network._key(Vector2(-1,0))
	for i in range(4000):
		if str(car.key)==board and float(car.wait)>.2:break
		tram.tick(.05)
	var route:Array[Vector3]=life._route(board,exit)
	_check(route.size()>2 and life.residents.size()>=24,"actual rail route and twenty-four household identities prepare a capacity comparison")
	for i in range(24):
		var person:Dictionary=life.residents[i];person.paused=false;person.wait=0.;person.dwell_id="";person.route=route.duplicate();person.index=0;person.destination_id=scene.cafe;person.node.position=life.positions[board]+Vector3(0,.1,0)
		tram.intercept(person,0.)
	var boarded:=int(tram.boarded);var maximum_offset:=0.;var shown:=0
	for id:String in car.riders:
		var person:Dictionary=tram.tickets[id].resident
		maximum_offset=maxf(maximum_offset,person.node.position.distance_to(car.node.position))
		if person.node.get_child(0).visible:shown+=1
	_check(boarded==(24 if with_depot else 6) and maximum_offset<1.2 and shown<=6,"actual boarding respects enhanced capacity while aggregated riders remain inside the car")
	life._update_citizen_lod(0.)
	var hidden_correct:=true
	for id:String in car.riders:
		var ticket:Dictionary=tram.tickets[id]
		hidden_correct=hidden_correct and ticket.resident.node.get_child(0).visible==(int(ticket.seat)<6)
	_check(hidden_correct,"camera LOD never reveals aggregated passengers outside the six visible seats")
	for i in range(4000):
		tram.tick(.05)
		if int(tram.completed)==boarded:break
	_check(int(tram.completed)==boarded and car.riders.is_empty(),"moving production car completes every boarded ride exactly once")
	var visible_again:=true
	for ticket:Dictionary in tram.tickets.values():
		if ticket.state=="completed":visible_again=visible_again and ticket.resident.node.get_child(0).visible
	_check(visible_again,"all actual passengers regain ordinary visible bodies on alighting")
	life.free();return boarded
func _reply()->void:
	var city:RefCounted=Local.build(self)
	var academy:Dictionary=city.place_signature("music_academy",Vector2(-18,15));assert(academy.ok)
	var points:Array[Vector2]=[Vector2(-18,15),Vector2(-8,0)];var a:Dictionary=city.add_district(points,4.,"weave")
	var b:=str(city.district_for_house("h6").id);assert(city.link_districts(str(a.district_id),b).ok)
	city.resonance_afterglow.clear();city.record_district_answer(str(a.district_id),b)
	_check(city.resonance_afterglow.is_empty(),"drawing or recording a link alone grants no completed-phrase reward")
	var progress:Dictionary=city.life_progress.duplicate(true);var earned:Dictionary=city.cafe_credits.duplicate(true)
	var reward:Dictionary=city.reward_completed_district_reply(str(a.district_id),b)
	_check(reward.durations[str(a.district_id)]==60. and reward.durations[b]==30. and city.afterglow_remaining("h3")==60. and city.afterglow_remaining("h6")==30.,"actual completed reply grants thirty seconds and doubles the academy district's reward")
	city.advance_resonance_afterglow(20.);city.reward_completed_district_reply(str(a.district_id),b)
	_check(city.afterglow_remaining("h3")==60. and city.life_progress==progress and city.cafe_credits==earned,"repeated real phrase rewards refresh aura without duplicating purchases tea or milestones")
	_roundtrip(city,"actual district reward uses existing afterglow save ledger")
func _finale()->void:
	var scene:=Theater.build(self);var city:RefCounted=scene.city;var life:Node3D=scene.life;var placed:=Theater.place_connected(city);assert(placed.ok)
	life._sync();var starting:int=city.life_progress.concerts;_check(life.invite_grand_festival(str(placed.house_id)).ok,"earned theater actually invites its four-era audience")
	_check(Quality.until(life,func()->bool:return life.concert_status().phase=="playing",600.),"actual audience physically arrives before the finale can occur")
	# Earlier services remain authoritative; postpone their quality check until completion.
	city.building_quality.clear();life._quality_cursor=-1;life._quality_timer=100.;life._quality_inputs=hash([city.revision,city.Quality.data(city)])
	for house:Dictionary in city.houses:city.grant_resonance_afterglow([str(house.id)],40.)
	for i in range(480):life._process(.05)
	var finale:Dictionary=life.finale_view();_check(not finale.is_empty() and city.life_progress.concerts==starting+1,"actual twenty-four second performance triggers exactly one completion wave")
	_check(finale.get("checked_house_ids",[]).size()>16 and finale.checked_house_ids.size()==city.houses.size(),"completion immediately checks every glowing eligible house beyond the ordinary sixteen-house update batch")
	_check(not finale.get("changes",[]).is_empty() and city.level_tier("h1")>=4,"real food craft culture and concert evidence can yield an immediate multi-level promotion")
	var untouched:=0
	for house:Dictionary in city.houses:
		if city.level_tier(str(house.id))==1:untouched+=1
	_check(untouched>20,"glowing homes without actual service evidence receive no invented quality levels")
	_check(not city.snapshot().has("finale") and city.set_journey_checkpoint(life.checkpoint()).ok,"one-shot visual wave is transient while completed quality is saved")
	_roundtrip(city,"finale quality and earned services reload normally")
	life._process(12.1);_check(life.finale_view().is_empty() and city.life_progress.concerts==starting+1,"completion wave expires without another concert reward")
	life.free()
func _run()->void:
	_corridor();var plain:=_load_test(false);var enhanced:=_load_test(true);_check(enhanced==plain*4,"same route delivers four times as many actual passengers per trip with depot capacity")
	_reply();_finale()
	var flagship:=State.new();_check(flagship.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"actual 127-house flagship still restores")
	var large:=_life(flagship);var report:Dictionary=large.tram.report()
	_check(not str(report.depot_id).is_empty() and not report.corridor_houses.is_empty(),"actual flagship depot publishes its current rail corridor")
	print("FLAGSHIP_CORRIDOR ",JSON.stringify({"houses":flagship.houses.size(),"corridor_houses":report.corridor_houses.size(),"corridor_prepare_ms":report.corridor_prepare_ms,"regional_prepare_ms":flagship.regional_prepare_ms}));large.free()
	print("LANDMARK_EVENTS ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
