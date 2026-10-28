extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
const Plan=preload("res://scripts/audio/city_creation_orchestration_plan.gd")
const Learn=preload("res://tools/fixtures/city_creation_tradition_fixture.gd")
var checks:=0
var failures:Array=[]
static func fixture()->RefCounted:
	var city:RefCounted=preload("res://tests/test_city_creation_eras.gd").fixture()
	city.creative_settings=city.CreationPolicy.Save.defaults()
	city.add_water([Vector2(-22,-15)] as Array[Vector2],3.2,"pond")
	city.add_house(Vector2(-22,-10.9));city.add_house(Vector2(-25.7,-15))
	var added:Dictionary=city.add_house(Vector2(-32,-32));var id:=str(added.house_id)
	city.add_cell(id,1,0,0);city.set_house_architecture(id,"ionic_stoa")
	for card:String in Samples.IDS:
		Learn.learn(city,card);Learn.learn(city,card)
	return city
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=fixture();var rows:=Samples.plans(city);var before:Dictionary=city.snapshot()
	check(rows.any(func(r):return r.kind=="pier_lantern") and rows.any(func(r):return r.kind=="column_vines"),"two actual earned rank2 samples derive from model supports")
	check(city.snapshot()==before,"planning never modifies save or earned receipts")
	var stoa:Dictionary=rows.filter(func(r):return r.kind=="column_vines")[0]
	check(stoa.columns.size()==2 and stoa.columns[0].distance_to(stoa.columns[1])>3.,"vines attach to distinct original columns")
	var cold:=State.new();var restored:Dictionary=cold.restore(JSON.parse_string(JSON.stringify(before,"",true,true)));check(restored.ok and Samples.plans(cold)==rows,"Schema20 cold reconstruction keeps exact sample anchors")
	var hidden:Dictionary=city.creative_settings.presentation.duplicate();hidden.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":hidden}).ok and Samples.plans(city)==rows,"hiding appearance preserves actual music anchors and earned cards")
	var prefs:={"mode":"fixed","style":"pastoral_breeze","seed":74001}
	var ctx:={"night":false,"strolling":false,"era":"pastoral","water":999.,"peers":[],"living":false,"source":"h1","inspiration":""}
	var initial:=Plan.choose({},ctx,prefs,1.)
	for card:String in Samples.IDS:
		ctx.inspiration=card
		var same:=Plan.choose(initial,ctx,prefs,23.9)
		check(same.inspiration=="" and same.answer_material==same.material,"studied card waits for next phrase boundary "+card)
		var boundary:=Plan.choose(same,ctx,prefs,24.)
		check(boundary.inspiration==card and boundary.answer_material!=boundary.material and boundary.style==initial.style,"boundary selects different existing answer material without replacing lead style "+card)
		ctx.inspiration="";check(Plan.choose(boundary,ctx,prefs,25.).inspiration==card and Plan.choose(boundary,ctx,prefs,48.).inspiration=="","removed support retires variant at next boundary "+card)
	var source:=str(stoa.house_id);check(Samples.for_source(city,source)==Samples.IDS[1] and Samples.for_source(city,"missing")=="","variant belongs to a real source with geometry")
	check(city.rotate_house(source,.6).ok,"actual rotated column host")
	check(Samples.plans(city).filter(func(r):return r.kind=="column_vines")[0].position!=stoa.position,"column decorations follow authored house rotation")
	check(city.undo().ok and Samples.plans(city)==rows,"Undo rederives original anchors without another reward")
	var legacy:=State.new();legacy.restore(before);legacy.creative_settings={}
	check(Samples.plans(legacy).is_empty(),"classic old city retains original appearance by default")
	city.harmony_journey.ranks[Samples.IDS[0]]=1;city.harmony_journey.ranks[Samples.IDS[1]]=1
	check(Samples.plans(city).is_empty(),"rank1 does not claim second study effects")
	print("INSPIRATION_SAMPLES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
