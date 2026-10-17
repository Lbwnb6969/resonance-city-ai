extends SceneTree
const Fixture=preload("res://tests/test_city_creation_clockwork.gd")
const Plan=preload("res://scripts/world/city_creation_bridge_plan.gd")
const Bridge=preload("res://scripts/visual/city_creation_bridge.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:RefCounted=Fixture.fixture()
	var crossing:Array[Vector2]=[Vector2(-11,9),Vector2(15,9)];city.add_road(crossing,"promenade")
	var road:Dictionary=city.roads[-1];var original:Dictionary=city.road_profile(road)
	var old:Dictionary=original.bridge_runs[0]
	var points:Array[Vector2]=[Plan._point(original.samples,(old.start+old.end)*.5).at]
	var district:Dictionary=city.add_district(points,8.)
	_check(city.set_district_era(district.district_id,"clockwork").ok,"public district era switch selects industrial bridge grammar")
	var profile:Dictionary=city.road_profile(road);var run:Dictionary=profile.bridge_runs[0]
	_check(run.family=="clockwork_truss" and run.arch_count==1 and run.deck_y<old.deck_y,"actual cached street profile switches from raised double stone arch to flat truss deck")
	var same:=true
	for sample:Dictionary in profile.samples:
		if sample.distance>=run.start and sample.distance<=run.end:same=same and absf(city.street_height(sample.xz)-run.deck_y)<.001
	_check(same,"industrial bridge visual profile and authoritative walking height match")
	var geometry:Dictionary=Bridge.prepare(profile)
	_check(geometry.faces.is_empty() and geometry.trusses.size()==1 and geometry.trusses[0].iron.size()>400 and geometry.trusses[0].cross_braces>0 and geometry.trusses[0].lane_clearance>1.73,"worker prepares real iron arch and web geometry with cross-braces above collector wire")
	var fresh:=State.new();var saved:Dictionary=city.snapshot()
	var restored:Dictionary=fresh.restore(JSON.parse_string(JSON.stringify(saved,"",true,true)))
	if not restored.ok:print("RESTORE_ERROR ",restored)
	_check(restored.ok and fresh.road_profile(road).bridge_runs==profile.bridge_runs,"new industrial bridge remains derived from existing era and road save fields")
	_check(city.undo().ok and city.road_profile(road).bridge_runs==original.bridge_runs and city.redo().ok and city.road_profile(road).bridge_runs==profile.bridge_runs,"actual era undo and redo restore both original stone bridge and new industrial grammar")
	print("TRUSS_BRIDGE ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"deck_y":run.deck_y,"span":run.end-run.start}));quit(0 if failures.is_empty() else 1)
