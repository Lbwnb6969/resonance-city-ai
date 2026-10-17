extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_tram_tea_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=Fixture.city();var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var passenger:Dictionary={};var spent:=0;var parties:=0
	for i in range(20000):
		life._process(.05)
		for ticket:Dictionary in life.tram.tickets.values():
			if ticket.get("state","")=="onboard" and ticket.resident.has("cafe_visit") and ticket.resident.cafe_visit.phase=="walking":passenger=ticket.resident;break
		if not passenger.is_empty():break
	_check(not passenger.is_empty(),"real bread purchaser chooses a tea seat then actually boards a beneficial rail trip")
	if passenger.is_empty():
		print("TEA_DIAGNOSTIC ",JSON.stringify({"progress":city.life_progress,"tram":life.tram.report(),"cafe":life.cafe.view(),"credits":city.cafe_credits}));life.free();quit(1);return
	var home:String=passenger.home_id;var at:Vector3=passenger.node.position
	spent=int(city.cafe_credits[home].spent);parties=int(city.life_progress.tea_parties)
	_check(city.has_cafe_credit(home) and spent<city.cafe_credits[home].earned and passenger.destination_id=="h3","riding retains earned unspent bread credit and actual cafe destination")
	var checkpoint:Dictionary=life.checkpoint();var checkpointed:Dictionary=city.set_journey_checkpoint(checkpoint)
	var fresh:=State.new();var restored:Dictionary=fresh.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(checkpointed.ok and restored.ok,"actual onboard cafe journey and unchanged service ledger save and restore")
	var resumed:=Life.new();root.add_child(resumed);resumed.set_process(false);resumed.setup(fresh)
	var guest:Dictionary={}
	for resident:Dictionary in resumed.residents:
		if resident.home_id==home:guest=resident
	_check(guest.has("cafe_visit") and Vector2(guest.node.position.x,guest.node.position.z).distance_to(Vector2(at.x,at.z))<.001 and int(fresh.cafe_credits[home].spent)==spent,"loaded passenger resumes same tea intent from actual saved position without consuming credit")
	var seated:=false;var finished:=false
	for i in range(6000):
		resumed._process(.05)
		if guest.has("cafe_visit") and guest.cafe_visit.phase=="seated":seated=true
		if int(fresh.cafe_credits[home].spent)>spent:finished=true;break
	_check(seated and finished and int(fresh.cafe_credits[home].spent)==spent+1 and int(fresh.life_progress.tea_parties)==parties+1,"restored trip physically reaches assigned chair and one full gathering consumes exactly one credit")
	var original_finished:=false;var originally_seated:=false
	for i in range(6000):
		life._process(.05)
		if passenger.has("cafe_visit") and passenger.cafe_visit.phase=="seated":originally_seated=true
		if int(city.cafe_credits[home].spent)>spent:original_finished=true;break
	_check(life.tram.completed>0 and originally_seated and original_finished and int(city.cafe_credits[home].spent)==spent+1,"original real carriage alights and completes the same actual six-second tea service once")
	var purchase_city:=Fixture.city();purchase_city.set_house_role("h2","residential");purchase_city.set_house_role("h3","bakery")
	var purchase_life:=Life.new();root.add_child(purchase_life);purchase_life.set_process(false);purchase_life.setup(purchase_city)
	var boarding:String=purchase_life._network._key(Vector2(-14,0))
	for i in range(1000):
		var car:Dictionary=purchase_life.tram.cars[0]
		if car.key==boarding and float(car.wait)>.1:break
		purchase_life.tram.tick(.05)
	var shopper:Dictionary={};var purchases:int=purchase_city.life_progress.purchases
	for i in range(10000):
		purchase_life._process(.05)
		var ticket:Dictionary=purchase_life.tram.tickets.get("h1",{})
		if ticket.get("state","")=="onboard" and ticket.resident.destination_id=="h3":shopper=ticket.resident;break
	_check(not shopper.is_empty(),"actual commuter boards a useful rail leg to a real bakery for procurement")
	if shopper.is_empty():print("SHOPPER_DIAGNOSTIC ",JSON.stringify({"houses":purchase_city.houses,"progress":purchase_city.life_progress,"tram":purchase_life.tram.report(),"journey":purchase_life.checkpoint(),"credits":purchase_city.cafe_credits}))
	if not shopper.is_empty():
		var credit:int=purchase_city.cafe_credits.get("h1",{}).get("earned",0)
		var position:Vector3=shopper.node.position
		var points:Array[Vector2]=[Vector2(-16,0),Vector2(-1,0)];var replaced:Dictionary=purchase_city.add_road(points,"promenade");purchase_life._sync()
		_check(replaced.ok and purchase_life.tram.cars.is_empty() and Vector2(shopper.node.position.x,shopper.node.position.z).distance_to(Vector2(position.x,position.z))<.01 and shopper.destination_id=="h3" and purchase_city.cafe_credits.get("h1",{}).get("earned",0)==credit,"editing an occupied rail street releases shopper at actual position with procurement intent and no fabricated purchase")
		var bought:=false
		for i in range(6000):
			purchase_life._process(.05)
			if purchase_city.cafe_credits.get("h1",{}).get("earned",0)>credit:bought=true;break
		_check(bought and purchase_city.cafe_credits["h1"].earned==credit+1 and purchase_city.life_progress.purchases>purchases,"released commuter finishes actual walking arrival and bakery service before earning exactly one purchase credit")
	purchase_life.free()
	print("TRAM_TEA ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"home":home,"boarded":life.tram.boarded,"completed":life.tram.completed,"progress":city.life_progress}));life.free();resumed.free();quit(0 if failures.is_empty() else 1)
