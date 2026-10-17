extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_amphitheater_fixture.gd")
const Quality=preload("res://tools/fixtures/city_creation_quality_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var scene:=Fixture.build(self);var city:RefCounted=scene.city;var life:Node3D=scene.life
	var placed:=Fixture.place_connected(city);life._sync()
	_check(placed.ok and placed.access.ok and life.connected_houses.has(placed.house_id),"actual water theater has a real dry street-connected office entrance")
	if not placed.ok or not placed.access.ok:print("ACCESS_ERROR ",placed);life.free();quit(1);return
	var before:int=city.life_progress.concerts;var invitation:Dictionary=life.invite_grand_festival(placed.house_id)
	_check(invitation.ok and life._concert.grand_festival and life._concert.era_cast.size()==4 and life.concert_status().phase=="gathering" and city.life_progress.concerts==before,"real grand invitation reserves four reachable current-era houses while actual audience is still gathering")
	_check(Quality.until(life,func()->bool:return life.concert_status().phase=="playing",600.) and life.concert_status().arrived==life.concert_status().invited,"whole-canvas invitation waits for each actual audience member to physically arrive")
	life._process(7.4)
	var checkpoint:Dictionary=life.checkpoint();var checkpointed:Dictionary=city.set_journey_checkpoint(checkpoint)
	var saved:Dictionary=city.snapshot();var fresh:=State.new();var restored:Dictionary=fresh.restore(JSON.parse_string(JSON.stringify(saved,"",true,true)))
	_check(checkpointed.ok and restored.ok,"schema sixteen saves actual in-progress grand performance with assigned era cast")
	if not restored.ok:print("GRAND_RESTORE_ERROR ",restored)
	var resumed:=Life.new();root.add_child(resumed);resumed.set_process(false);resumed.setup(fresh)
	_check(resumed._concert.get("grand_festival",false) and resumed._concert.era_cast==life._concert.era_cast and absf(resumed.concert_status().elapsed-life.concert_status().elapsed)<.001,"restoration retains exact grand cast phase and arrived audience")
	var music:=Music.new();music.update_city(city);music.set_concert_view(life.concert_view())
	var sources:Array=[];var scheduled:=true
	for phrase in range(8):
		var source:Dictionary=music._source_for_phrase(phrase);sources.append(source)
		scheduled=scheduled and source.era==city.GrandFestival.PHRASES[phrase] and (source.source_id==placed.house_id if phrase==7 else source.source_id==life._concert.era_cast[source.era])
	_check(scheduled,"production score uses actual assigned house sources for two pastoral two renaissance two clockwork one modern and tutti phrases")
	var staged:=true
	for phrase in range(7):
		var expected:String="wood" if phrase<2 else "renaissance_fugue" if phrase<4 else "clockwork_waltz" if phrase<6 else "modern_symphony"
		for key:String in ["wood","renaissance_fugue","clockwork_waltz","modern_symphony"]:staged=staged and (music.concert_gain_for_phrase(key,phrase)>-30. if key==expected else music.concert_gain_for_phrase(key,phrase)==-60.)
	_check(staged and music.concert_gain_for_phrase("wood",7)>-30. and music.concert_gain_for_phrase("modern_symphony",7)>-30.,"actual existing long voices alternate era lead and join bounded full final chord")
	var bad:Dictionary=saved.duplicate(true);bad.journey_checkpoint.concert.era_cast.clockwork=bad.journey_checkpoint.concert.era_cast.pastoral
	_check(not fresh.restore(bad).ok,"forged duplicate or mislabeled era cast is rejected on load")
	_check(Quality.until(resumed,func()->bool:return resumed.concert_status().phase=="idle",30.) and fresh.life_progress.concerts==before+1,"restored actual twenty-four-second performance completes exactly once after remaining time")
	var old_count:int=city.life_progress.concerts;var leader:String=life._concert.era_cast.renaissance
	city.set_house_era(leader,"clockwork");life._sync()
	_check(life.concert_status().phase=="idle" and city.life_progress.concerts==old_count,"changing a real cast member's era cancels in-progress festival without granting completion")
	var missing:Array[String]=[]
	for house:Dictionary in city.houses:
		if city.house_era(house)=="renaissance" and not house.has("signature"):missing.append(house.id)
	for id:String in missing:city.set_house_era(id,"clockwork")
	life._sync()
	_check(not life.invite_grand_festival(placed.house_id).ok and life.concert_status().phase=="idle" and city.life_progress.concerts==old_count,"town lacking one actually reachable era cannot manufacture a complete four-era festival")
	print("GRAND_FESTIVAL ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"site":placed.at,"sources":sources}));music.free();life.free();resumed.free();quit(0 if failures.is_empty() else 1)
