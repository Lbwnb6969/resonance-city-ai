extends SceneTree
const Examples=preload("res://scripts/world/city_creation_examples.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Canon=preload("res://scripts/audio/city_creation_circular_canon.gd")
const Skybridge=preload("res://scripts/world/city_creation_skybridge_plan.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var path: String="res://数据/四库共鸣交响大城样例.json";var bytes:=FileAccess.get_file_as_bytes(path)
	_check(Examples.CATALOG[0].id=="example_flagship" and Examples.CATALOG[0].file=="四库共鸣交响大城样例.json","flagship is the first official packaged starting point")
	var chosen:=Examples.read("example_flagship");var city:=State.new()
	_check(chosen.ok and city.restore(chosen.world).ok and city.houses.size()>=120,"actual bundled JSON restores through the strict production State format with over 120 editable houses")
	if not chosen.ok:quit(1);return
	var signatures: Dictionary={};var eras: Dictionary={};var highlands:=0;var spans:=0;var stairs:=0
	for house: Dictionary in city.houses:
		var era: String=city.house_era(house);eras[era]=int(eras.get(era,0))+1
		if house.has("signature"):signatures[house.signature]=house.id
		if float(house.get("base_y",0.))>1.:highlands+=1
		spans+=Skybridge.for_house(city,house).size()
	for road: Dictionary in city.roads:stairs+=city.road_profile(road).treads.size()
	_check(eras.size()==4 and eras.values().min()>=20,"four substantial era districts coexist rather than isolated token buildings")
	_check(signatures.size()==6 and city.signature_unlocks.size()==6 and int(city.life_progress.tea_parties)>=8 and int(city.life_progress.purchases)>0,"all six unique signatures retain their actual earned service milestones")
	_check(highlands>=8 and stairs>0,"eight highland houses and automatic slope stairs exist in the saved work")
	_check(spans>0,"modern district really derives elevated glass bridges from its actual upper rooms")
	var rings:=Canon.derive(city);var court:=false
	for ring: Dictionary in rings:
		if ring.kind=="courtyard" and ring.members.size()==5:court=true
	_check(court and city.Roundabouts.all(city.roads).size()>0,"five-house enclosed canon court and authored fountain plaza coexist")
	_check(city.musical_links.size()>=4,"actual saved musical links connect the four era quarters across the river")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var components: Dictionary={}
	for port: String in life.connected_houses.values():components[life._network.component_of[port]]=true
	_check(life.connected_houses.size()==city.houses.size() and components.size()==1 and life.current_population>=200,"every real house joins one traversable city network supporting over 200 inhabitants")
	var rail: Dictionary=life.tram.report()
	_check(not rail.cars.is_empty() and rail.track_metres>30. and not str(rail.depot_id).is_empty() and is_equal_approx(float(rail.speed),3.36),"actual clockwork station dispatches the live rail loop at its earned speed")
	var workers: Dictionary={}
	for worker: Dictionary in life.bakery.workers:workers[str(worker.bakery_id)]=true
	_check(life.bakery.workers.size()>=3 and life.workshop.workers.size()>=3 and workers.has(str(signatures.watermill)),"district services and the real watermill receive physical household workers")
	var invited: Dictionary=life.invite_grand_festival(str(signatures.floating_amphitheater))
	_check(invited.ok and life._concert.get("grand_festival",false) and life._concert.era_cast.size()==4 and life.concert_status().phase=="gathering","actual water theater invites all four era sources while the audience still has to arrive")
	var saved: Dictionary=city.snapshot();saved.journey_checkpoint=life.checkpoint();var clone:=State.new()
	_check(clone.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"full flagship with its actual gathering audience saves and reloads through the existing journey schema")
	_check(FileAccess.get_file_as_bytes(path)==bytes,"opening inviting and checkpointing never modify the shipped source")
	print("FLAGSHIP ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"houses":city.houses.size(),"population":life.current_population,"eras":eras,"highlands":highlands,"stairs":stairs,"skybridges":spans,"rings":rings.size(),"rail":rail}));life.free();quit(0 if failures.is_empty() else 1)
