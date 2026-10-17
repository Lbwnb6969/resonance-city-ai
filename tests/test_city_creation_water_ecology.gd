extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Bridge=preload("res://scripts/visual/city_creation_bridge.gd")
const Lilypads=preload("res://scripts/visual/city_creation_lilypads.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func city_fixture()->Dictionary:
	var city:=State.new();city.initialize()
	var points: Array[Vector2]=[Vector2(-11,9),Vector2(15,9)]
	var road:Dictionary=city.add_road(points,"promenade")
	points=[Vector2(-14.5,-20),Vector2(-14.5,4)]
	var pond:Dictionary=city.add_water(points,5.4,"pond")
	return {"city":city,"road":road,"pond":pond}
func _run()->void:
	var fixture:=city_fixture();var city:RefCounted=fixture.city
	_check(fixture.road.ok and fixture.pond.ok,"public edit APIs create promenade river crossing and pond")
	var road:Dictionary={}
	for candidate:Dictionary in city.roads:
		if candidate.id==fixture.road.road_id:road=candidate
	var profile:Dictionary=city.road_profile(road)
	var runs:Array=profile.get("bridge_runs",[])
	_check(runs.size()==1 and runs[0].arch_count==2,"actual street profile selects one classical double arch")
	if runs.is_empty():quit(1);return
	var run:Dictionary=runs[0]
	var continuous:=true
	for sample:Dictionary in profile.samples:
		var arc:float=sample.distance
		if arc>=float(run.start) and arc<=float(run.end):continuous=continuous and absf(float(sample.y)-float(run.deck_y))<.001 and absf(city.street_height(sample.xz)-float(sample.y))<.001
	_check(continuous and float(run.deck_y)>.24,"physical path and bridge share raised level deck")
	var data:=Bridge.prepare(profile)
	_check(data.faces.size()>300 and data.stones.size()>100 and data.lamps.size()==144,"worker prepares actual arch barrel wedges and four bridgehead lamps")
	var lily:=Lilypads.new();lily.setup(city);lily.record_only=true;lily.rebuild()
	var leaves:=0;var flowers:=0;var band:=true
	for records:Array in lily.prepared_blocks.values():
		for row:Dictionary in records:
			var water:Dictionary={}
			for candidate:Dictionary in city.waters:
				if candidate.id==row.pond_id:water=candidate
			var distance:float=city._water_stroke_distance(row.position,water.points)-float(water.width)*.5
			band=band and distance>=-.85 and distance<=-.25
			if row.part=="leaf":leaves+=1
			else:flowers+=1
	_check(band and leaves>0 and flowers>0,"deterministic actual pond candidates include flowers and stay inside shallow shore band")
	var saved:Dictionary=city.snapshot();var fresh:=State.new()
	_check(fresh.restore(JSON.parse_string(JSON.stringify(saved))).ok and fresh.road_profile(road).bridge_runs==runs,"JSON restoration derives identical arches without new save fields")
	_check(city.remove_road(str(road.id)).ok and city.undo().ok and city.road_profile(road).bridge_runs==runs,"actual bridge removal and undo restore exact geometry and walking profile")
	# A path in a renaissance river district changes both cached road geometry
	# and Life's network input; unrelated music/name changes do not.
	var path_city:=State.new();path_city.initialize();var points:Array[Vector2]=[Vector2(-11,9),Vector2(15,9)]
	var path:Dictionary=path_city.add_road(points)
	var record:Dictionary=path_city.roads[-1]
	_check(path.ok and path_city.road_profile(record).get("bridge_runs",[]).is_empty(),"ordinary path across wide river retains ordinary bridge")
	path_city.era_unlocks=["pastoral","renaissance"]
	points=[preload("res://scripts/world/city_creation_bridge_plan.gd")._point(profile.samples,(float(run.start)+float(run.end))*.5).at]
	var district:Dictionary=path_city.add_district(points,7.)
	_check(district.ok and path_city.set_district_era(district.district_id,"renaissance").ok and path_city.road_profile(record).bridge_runs.size()==1,"real renaissance district edit invalidates cached path profile into classical bridge")
	_check(path_city.undo().ok and path_city.road_profile(record).bridge_runs.is_empty(),"era undo restores ordinary geometry and elevation")
	print("WATER_ECOLOGY ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"deck_y":run.deck_y,"span":float(run.end)-float(run.start),"leaves":leaves,"flowers":flowers}))
	lily.free();quit(0 if failures.is_empty() else 1)
