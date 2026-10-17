extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const EraFixture=preload("res://tests/test_city_creation_eras.gd")
const Conservatory=preload("res://scripts/world/city_creation_conservatory_plan.gd")
const Clockwork=preload("res://scripts/visual/city_creation_clockwork.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture()->RefCounted:
	var city:RefCounted=EraFixture.fixture()
	for z in range(-32,-11,4):
		for x in range(-34,-13,4):
			if city.houses.size()>=28:break
			city.add_house(Vector2(x,z))
	var points:Array[Vector2]=[Vector2(-14,-2)]
	var first:Dictionary=city.add_district(points,3.6,"warm")
	points=[Vector2(-10,-2)]
	var second:Dictionary=city.add_district(points,3.6,"deep")
	city.set_district_era(second.district_id,"renaissance");city.refresh_growth()
	return city
func _run()->void:
	var city:=fixture()
	_check(city.houses.size()==28 and city.era_unlocks==["pastoral","renaissance","clockwork"],"twenty-eight actual houses and two occupied district eras unlock third era in order")
	var short:RefCounted=EraFixture.fixture()
	short.era_unlocks.assign(["pastoral","renaissance"])
	_check(not short.Eras.refresh(short) and not short.era_unlocks.has("clockwork"),"small town cannot enter third era")
	_check(city.set_house_era("h1","clockwork").ok and city.house_era(city.houses[0])=="clockwork","earned third era can be assigned per house")
	_check(city.undo().ok and city.era_unlocks.has("clockwork") and city.house_era(city.houses[0])=="pastoral","undo retains earned rights while restoring chosen house era")
	city.set_house_era("h1","clockwork")
	_check(city.add_cell("h1",1,0,0).ok and city.add_cell("h1",0,0,1).ok and city.add_cell("h1",1,0,1).ok,"public building tools make a supported two-storey clockwork roof row")
	var plan:Dictionary=Conservatory.for_house(city,city.houses[0])
	_check(not plan.is_empty() and plan.get("on_roof",false) and plan.cell_ids.size()==2 and is_equal_approx(plan.base_y,4.4),"exposed upper room row automatically derives a clear roof winter garden above mansard")
	_check(Clockwork.roof_height(.28)>Clockwork.roof_height(.14) and Clockwork.roof_height(.28)-Clockwork.roof_height(.14)>Clockwork.roof_height(.56)-Clockwork.roof_height(.28),"mansard lower slope is steeper than upper slate roof")
	var loaded:=State.new();var snapshot:Dictionary=city.snapshot()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true))).ok and loaded.snapshot()==snapshot,"third era and roof derivation preserve full JSON city contract")
	_check(Conservatory.for_house(loaded,loaded.houses[0])==plan,"roof greenhouse retains stable identity after restoration")
	_check(not city.set_house_era("h1","modern_eco").ok,"fourth era remains unavailable during phase eight")
	print("CLOCKWORK ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
