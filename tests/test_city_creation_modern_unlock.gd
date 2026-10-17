extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=Fixture.city(49)
	var a:String=city.districts[0].id;var b:String=city.districts[1].id;var c:String=city.districts[2].id
	_check(city.houses.size()==49 and not city.era_unlocks.has("modern_eco"),"forty-nine real houses and three visual eras alone do not unlock modern era")
	city.record_district_answer(a,b)
	city.set_district_era(b,"clockwork");city.refresh_growth()
	_check(city.era_answers.is_empty() and not city.era_unlocks.has("modern_eco"),"old untyped district answer and subsequent repaint never fabricate historical era evidence")
	city.set_district_era(b,"renaissance")
	_check(city.record_district_answer(a,b,"pastoral","renaissance") and city.era_answers.size()==1 and not city.Eras.three_era_resonance(city.era_answers),"new actually completed era attribution supplements an existing old district pair")
	_check(not city.record_district_answer(b,a,"renaissance","pastoral") and city.era_answers.size()==1,"reversed duplicate cannot inflate unique era proof")
	city.record_district_answer(b,c,"renaissance","clockwork")
	_check(city.Eras.three_era_resonance(city.era_answers) and not city.era_unlocks.has("modern_eco"),"connected three-district three-era historical chain still requires fifty buildings")
	var added:Dictionary=city.add_house(Vector2(-36,-24));city.refresh_growth()
	_check(added.ok and city.houses.size()==50 and city.era_unlocks.has("modern_eco") and city.set_house_era("h1","modern_eco").ok,"fiftieth actual house plus completed era chain unlocks modern visual choice in order")
	var snapshot:Dictionary=city.snapshot();var fresh:=State.new()
	_check(snapshot.schema==16 and fresh.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true))).ok and fresh.era_answers==city.era_answers,"schema sixteen preserves historical heard-era evidence independently of current facade colors")
	var bad:Dictionary=snapshot.duplicate(true);bad.schema=15
	_check(not fresh.restore(bad).ok,"schema fifteen cannot smuggle fourth era and modern attribution")
	bad=snapshot.duplicate(true);bad.erase("era_answers")
	_check(not fresh.restore(bad).ok,"modern rights require connected historical three-era proof on load")
	bad=snapshot.duplicate(true);bad.era_answers[0].from_era="modern_eco";bad.era_answers[1].from_era="modern_eco"
	_check(not fresh.restore(bad).ok,"incomplete three-era proof cannot be replaced by modern tags")
	city.remove_house(added.house_id);city.undo();city.undo()
	_check(city.era_unlocks.has("modern_eco") and city.era_answers.size()==2,"earned modern rights and actual performances survive construction undo")
	print("MODERN_UNLOCK ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
