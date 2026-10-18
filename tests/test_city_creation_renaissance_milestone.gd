extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_renaissance_milestone_fixture.gd")
const Legacy=preload("res://tests/test_city_creation_eras.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void: _run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok: failures.append(label);push_error(label)
func _tea(city: RefCounted)->bool:
	# Unit-level completed service events use the public conserved stock API.
	return city.produce_bread("h2",2) and city.serve_bread("h2","h1") and city.serve_bread("h2","h3") and city.complete_tea("h4",["h1","h3"])
func _answer(city: RefCounted)->bool:
	return city.record_district_answer(city.districts[0].id,city.districts[1].id)
func _run()->void:
	var dawn:=State.new();dawn.initialize()
	var bridge: Array[Vector2]=[Vector2(-11,9),Vector2(15,9)]
	_check(dawn.add_road(bridge).ok and dawn.produce_bread("h2",1),"public bridge and production prepare the old first chapter")
	dawn.record_concert_completion("h4");dawn.refresh_growth()
	_check(dawn.growth_memories.has("dawn") and dawn.era_unlocks==["pastoral"],"first chapter alone no longer grants the second era")
	var city:=Fixture.build(13)
	var events: Array[String]=[]
	city.era_unlocked.connect(func(era: String)->void:events.append(era))
	_check(_tea(city) and _answer(city) and city.era_unlocks==["pastoral"],"thirteen houses stay locked even after a complete tea and answer")
	_check(city.Eras.journal(city).contains("房屋 13/14") and city.Eras.journal(city).contains("茶聚 1/1") and city.Eras.journal(city).contains("跨区问答 1/1"),"locked journal reports the three actual counters")
	_check(not city.set_house_role("h2","atelier").ok and city.house_era(city.houses[0])=="pastoral","locked atelier and original facades remain unchanged")
	var before: Dictionary=city.snapshot()
	var added: Dictionary=city.add_house(Vector2(-36,0))
	_check(added.ok and city.houses.size()==14 and city.era_unlocks==["pastoral","renaissance"] and events==["renaissance"],"fourteenth real house grants the era immediately and emits one earned event")
	_check(city.houses.slice(0,13)==before.houses and city.districts==before.districts,"unlock changes no existing house facade or district music")
	_check(city.undo().ok and city.houses.size()==13 and city.era_unlocks.has("renaissance") and city.redo().ok and events.size()==1,"undo and redo preserve earned rights without repeating the reward event")
	var clone:=State.new();var loaded_events: Array[String]=[]
	clone.era_unlocked.connect(func(era: String)->void:loaded_events.append(era))
	var restored: Dictionary=clone.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(restored.ok and clone.era_unlocks==city.era_unlocks and loaded_events.is_empty(),"JSON restore preserves rights and never replays an unlock reward: "+str(restored))
	city=Fixture.build()
	_check(_answer(city) and city.era_unlocks==["pastoral"],"fourteen houses and an answered pair still require tea")
	_check(not city.complete_tea("h4",["h1","h3"]) and city.era_unlocks==["pastoral"],"tea without earned bread credits cannot unlock the era")
	_check(_tea(city) and city.era_unlocks.has("renaissance"),"last qualifying real tea completion grants the era immediately")
	city=Fixture.build()
	_check(_tea(city) and city.era_unlocks==["pastoral"] and city.musical_links.size()==1 and city.district_answers.is_empty(),"a permanent manual link is not a completed musical answer")
	_check(_answer(city) and city.era_unlocks.has("renaissance"),"last qualifying completed answer grants the era immediately")
	var answers: int=city.district_answers.size()
	_check(not _answer(city) and city.district_answers.size()==answers,"duplicate answered events do not inflate the milestone")
	var receiver:=State.new();receiver.initialize();var unchanged: Dictionary=receiver.snapshot()
	var unsupported: Dictionary=Fixture.build().snapshot()
	unsupported.schema=14;unsupported.era_unlocks=["pastoral","renaissance"]
	_check(not receiver.restore(unsupported).ok and receiver.snapshot()==unchanged,"new era flag without conserved tea and answer records rejects atomically")
	city.undo()
	_check(city.era_unlocks.has("renaissance") and receiver.restore(city.snapshot()).ok,"earned new milestone remains saveable after undoing a district edit")
	city=Fixture.build(13);_tea(city);_answer(city)
	_check(city.add_house_stroke(Vector2(-36,0),[{"x":0,"z":0,"level":0,"kind":"room"}]).ok and city.era_unlocks.has("renaissance"),"normal drag-stroke construction also grants the fourteenth-house milestone")
	var legacy: RefCounted=Legacy.fixture()
	_check(legacy.houses.size()==4 and legacy.life_progress.tea_parties==0 and legacy.district_answers.is_empty() and legacy.era_unlocks.has("renaissance"),"frozen old four-house work retains its earlier era rights")
	_check(legacy.Eras.refresh(legacy)==false and legacy.set_house_era("h1","renaissance").ok and legacy._validate_snapshot(legacy.snapshot()).ok,"old rights still allow new era editing and valid saving")
	print("RENAISSANCE_MILESTONE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
