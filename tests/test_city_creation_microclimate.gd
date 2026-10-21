extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
const Links=preload("res://scripts/world/city_creation_district_links.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func cycle(mode:String,craft:bool)->Dictionary:
	var city:=State.new();city.initialize()
	if craft:city.set_house_role("h4","workshop")
	if not mode.is_empty():check(city.set_microclimate(mode).ok,"choose actual production weather")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var workers:Array=life.workshop.workers if craft else life.bakery.workers
	for i:int in range(3000):
		if workers.any(func(w):return w.phase==("crafting" if craft else "baking")):break
		life._process(.05)
	check(workers.any(func(w):return w.phase==("crafting" if craft else "baking")),"real worker reaches production site")
	var elapsed:=0.;var produced:=0
	for i:int in range(500):
		life._process(.05);elapsed+=.05
		produced=int(city.workshop_status("h4").produced if craft else city.bakery_status("h2").produced)
		if produced>0:break
	check(produced>0,"real weather production completes without ledger injection")
	check(city.set_journey_checkpoint(life.checkpoint()).ok and State.new().restore(city.snapshot()).ok,"weather and actual production checkpoint round trip")
	life.free();return {"elapsed":elapsed,"produced":produced}
func run()->void:
	var city:=State.new();city.initialize()
	check(not city.snapshot().has("microclimate"),"legacy town retains original weather and schema")
	var legacy:=city.snapshot();var base:=city.cafe_afterglow_extension("h1")
	check(not city.set_microclimate("fake").ok and city.snapshot()==legacy,"unknown climate is atomic")
	city.set_microclimate("spring_breeze")
	check(is_equal_approx(city.cafe_afterglow_extension("h1"),base*1.25),"spring extends real cafe afterglow by a quarter")
	for mode:String in State.Microclimate.IDS:
		city.set_microclimate(mode);var saved:=city.snapshot();var copy:=State.new()
		check(saved.schema==19 and copy.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and copy.microclimate==mode,"weather full precision JSON round trip: "+mode)
	var authored:=city.snapshot();var forged:=authored.duplicate(true);forged.microclimate="fake"
	check(not city.restore(forged).ok and city.snapshot()==authored,"forged climate does not damage city")
	forged=authored.duplicate(true);forged.schema=18
	check(not city.restore(forged).ok,"new field cannot masquerade as schema eighteen")
	city.set_microclimate("autumn_gold");check(city.undo().ok and city.microclimate=="starlight_fireflies" and city.redo().ok and city.microclimate=="autumn_gold","weather undo and redo preserve authored selection")
	check(city.restore(legacy).ok and city.microclimate.is_empty(),"opening legacy town removes prior seasonal bonus")
	city.initialize_empty();check(city.microclimate=="spring_breeze","new blank town opens in spring")
	var ovens:Dictionary={"dry":cycle("",false),"rain":cycle("sun_shower",false)}
	check(absf(float(ovens.rain.elapsed)*1.3-float(ovens.dry.elapsed))<.1 and ovens.rain.produced==ovens.dry.produced,"summer accelerates actual waterfront baking thirty percent with original batch")
	var crafts:Dictionary={"plain":cycle("",true),"autumn":cycle("autumn_gold",true)}
	check(absf(float(crafts.autumn.elapsed)*1.25-float(crafts.plain.elapsed))<.1 and crafts.autumn.produced==crafts.plain.produced,"autumn accelerates actual artisan cycle by a quarter")
	city=State.new();city.initialize_empty();city.add_house(Vector2(-30,-12));city.add_house(Vector2(-12,-12))
	city.add_road([Vector2(-31,-10.45),Vector2(-11,-10.45)] as Array[Vector2])
	city.add_district([Vector2(-30,-12),Vector2(-21,-12)] as Array[Vector2],8.,"warm")
	city.add_district([Vector2(-12,-12),Vector2(-21,-12)] as Array[Vector2],8.,"deep")
	var network:=Network.new();network.state=city;network._build_graph()
	var planner:=Links.new()
	check(network.connected_houses.size()==2 and planner.derive(city,network).is_empty(),"real eighteen-metre neighbors remain beyond daytime reply reach")
	city.set_microclimate("starlight_fireflies")
	var pairs:Array=planner.derive(city,network)
	check(pairs.size()==1 and pairs[0].route.size()>1,"starry forty percent reach admits the actual street route")
	city.set_microclimate("spring_breeze");check(planner.derive(city,network).is_empty(),"leaving starry weather restores daytime reach")
	var targets:Dictionary={"air":-20.,"terrace":-25.,"wood_sylvan":-60.,"foundation":-13.}
	State.Microclimate.music(targets,"spring_breeze")
	check(targets.air==-18.5 and targets.terrace==-23.5 and targets.wood_sylvan==-60. and targets.foundation==-13.,"weather lifts active flute and harp while silent stems stay silent")
	var tea:Dictionary={}
	for mode:String in ["plain","spring_breeze"]:
		var garden:=State.new();garden.initialize();garden.set_house_role("h4","garden_cafe")
		if mode!="plain":garden.set_microclimate(mode)
		garden.grant_resonance_afterglow(["h1","h3","h5","h4"],180.)
		var living:=Life.new();root.add_child(living);living.set_process(false);living.setup(garden)
		var before:Dictionary={}
		for i:int in range(8000):
			before=garden.resonance_afterglow.duplicate();living._process(.05)
			if garden.life_progress.tea_parties>0:break
		var observed:=0.
		for id:String in ["h1","h3","h5","h4"]:
			observed=maxf(observed,garden.afterglow_remaining(id)-maxf(0.,float(before.get(id,0.))-.05))
		check(garden.life_progress.tea_parties>0 and observed>0.,"actual purchased bread and tea extend existing resonance: "+mode)
		tea[mode]=observed;living.free()
	check(absf(float(tea.spring_breeze)-float(tea.plain)*1.25)<.02,"actual completed spring tea earns a quarter more afterglow")
	print("MICROCLIMATE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"ovens":ovens,"crafts":crafts,"tea":tea}))
	quit(0 if failures.is_empty() else 1)
