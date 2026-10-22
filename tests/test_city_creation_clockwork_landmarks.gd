extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_phase_eight_fixture.gd")
const QualityFixture=preload("res://tools/fixtures/city_creation_quality_fixture.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var scene:=Fixture.build(self);var city:RefCounted=scene.city;var life:Node3D=scene.life
	_check(scene.facts.ten_tea and int(city.life_progress.tea_parties)>=10 and city.Signatures.planted_count(city)>=150,"real life produces ten tea tables and public planting APIs create at least one hundred fifty player plants")
	if not failures.is_empty():
		print("FIXTURE_FAILURE ",JSON.stringify({"facts":scene.facts,"progress":city.life_progress,"plants":city.plants.slice(0,3),"bakery":city.bakery_supply,"cafe":life.cafe.view()}));life.free();quit(1);return
	_check(city.signature_unlocks.has("botanical_palace") and city.signature_unlocks.has("clockwork_depot") and city.era_unlocks.has("clockwork") and city.Signatures.wide_street_metres(city)>=40.,"actual tea planting third era and wide streets earn both new landmarks")
	var before:Dictionary=city.snapshot()
	var preview:Dictionary=city.preview_signature("botanical_palace",Vector2(-23,0))
	_check(preview.ok and preview.house.cells.size()==10 and city.snapshot()==before,"full botanical palace preview remains read-only with original cell-based structure")
	var palace:Dictionary=city.place_signature("botanical_palace",Vector2(-23,0))
	_check(palace.ok and city.signature_bonuses().afterglow_seconds==180. and not city.preview_signature("botanical_palace",Vector2(-30,0)).ok,"one free palace activates global long afterglow and rejects a second palace")
	var depot:Dictionary=city.place_signature("clockwork_depot",Vector2(22,8))
	_check(depot.ok and city.signature_bonuses().depot_id==depot.house_id and is_equal_approx(city.signature_bonuses().tram_speed,1.2),"one real clockmaker depot supplies a dispatch identity and fleet speed bonus")
	var points:Array[Vector2]=[Vector2(-23,-3.2),Vector2(-23,-3.45),Vector2(-18,-3.45)]
	var access:Dictionary=city.add_road(points)
	life._sync()
	print("PALACE_ACCESS ",JSON.stringify({"road":access,"entrances":city.house_entrances(palace.house_id),"connected":life.connected_houses.get(palace.house_id),"layout":life.cafe.layouts.get(palace.house_id)}))
	_check(access.ok and life.connected_houses.has(palace.house_id) and life.cafe.layouts.has(palace.house_id) and not life.cafe.layouts[palace.house_id].is_empty(),"palace office receives a real street connection and functional outdoor tea layout")
	var tea:int=city.life_progress.tea_parties
	_check(QualityFixture.until(life,func():return int(city.life_progress.tea_parties)>tea,500.),"existing town completes a new actual tea gathering after palace placement")
	var global_glow:=false
	for id: String in city.resonance_afterglow:
		if city.afterglow_remaining(id)>179.:global_glow=true
	_check(global_glow,"actual tea creates one-hundred-eighty-second afterglow even outside palace")
	var venue:String=scene.venues[0]
	_check(life.invite_concert(venue).ok,"actual audience receives invitation while palace is active")
	var concerts:int=city.life_progress.concerts
	_check(QualityFixture.until(life,func():return int(city.life_progress.concerts)>concerts,700.),"actual audience and full performance finish with palace active")
	_check(city.afterglow_remaining(venue)>179.,"actual completed concert gains the palace's one-hundred-eighty-second duration")
	var saved:Dictionary=city.snapshot();var fresh:=State.new()
	var restored:Dictionary=fresh.restore(JSON.parse_string(JSON.stringify(saved,"",true,true)))
	_check(restored.ok and fresh.houses==city.houses and fresh.signature_unlocks==city.signature_unlocks and fresh.building_quality==city.building_quality and fresh.resonance_afterglow==city.resonance_afterglow,"current optional schema restores actual landmark identities quality and earned long durations")
	var bad:Dictionary=saved.duplicate(true);bad.schema=14
	_check(not fresh.restore(bad).ok,"older schema cannot smuggle new landmarks or extended afterglow")
	var moved:Dictionary=city.place_signature("botanical_palace",Vector2(-31,0),palace.house_id)
	_check(moved.ok and city.signature_bonuses().palace_id==palace.house_id and city.undo().ok and city.houses[city._house_index(palace.house_id)].origin==[-23.,0.],"free palace movement retains identity buff and exact construction undo")
	var duration:float=city.afterglow_remaining(venue)
	_check(city.remove_house(palace.house_id).ok and city.signature_bonuses().palace_id.is_empty() and city.afterglow_remaining(venue)==duration,"palace removal withdraws future buff while preserving already earned resonance duration")
	_check(city.record_concert_completion(venue)<180. and city.undo().ok and city.signature_bonuses().palace_id==palace.house_id,"new performances return to base duration after removal and building undo restores palace")
	var tram_points:Array[Vector2]=[Vector2(10,12),Vector2(36,12)]
	var rail:Dictionary=city.add_road(tram_points,"tram");life._sync()
	var dispatch:Dictionary=life.tram.report()
	_check(rail.ok and dispatch.cars.size()==1 and dispatch.depot_id==depot.house_id and dispatch.dispatch_station!="" and is_equal_approx(dispatch.speed,3.36),"connected depot dispatches a real carriage from its local tram station at boosted speed")
	if not dispatch.cars.is_empty():
		var key:String=dispatch.dispatch_station
		_check(life.tram.cars[0].line.tour[0]==key and life.tram.cars[0].node.position.distance_to(life.tram.plan.positions[key])<.01,"actual dispatched carriage starts at the depot station rather than an arbitrary line end")
	var car:Dictionary=life.tram.cars[0]
	car.wait=0.;var position:Vector3=car.node.position;life.tram.tick(.1)
	# This established town also contains the real clock-hub synergy (+15%).
	_check(not city.clockwork_speed_zones().is_empty() and absf(Vector2(car.node.position.x,car.node.position.z).distance_to(Vector2(position.x,position.z))-(2.8*1.2*1.15*.1))<.002,"real carriage displacement stacks depot twenty-percent and clock-hub fifteen-percent gains")
	city.remove_house(depot.house_id);life._sync()
	_check(life.tram.report().depot_id.is_empty() and is_equal_approx(life.tram.speed(),2.8) and city.signature_unlocks.has("clockwork_depot"),"depot recycling removes dispatch boost while retaining earned free-placement right")
	print("CLOCKWORK_LANDMARKS ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"facts":scene.facts,"palace":palace,"depot":depot}));life.free();quit(0 if failures.is_empty() else 1)
