extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Modern=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();city.initialize()
	var legacy:=city.snapshot()
	check(not city.choose_era_modifier("arcade_market").ok and not city.choose_era_modifier("bogus").ok,"locked era and unknown ID cannot award a modifier")
	city=Modern.earned_city()
	check(city.era_unlocks.size()==4 and city.era_modifiers.is_empty(),"real milestone fixture earns all four eras without manufacturing a choice")
	var plain:=city.snapshot()
	for id:String in ["polyphonic_academy","hydraulic_guild","lasting_resonance"]:check(city.choose_era_modifier(id).ok,"choose earned modifier: "+id)
	check(not city.choose_era_modifier("arcade_market").ok and city.era_modifiers.size()==3,"one choice per era")
	check(city.set_house_role("h4","atelier").ok and is_inf(city.craft_radius("h4")) and not is_inf(city.craft_radius("h2")),"academy removes only painter delivery distance")
	city.grant_resonance_afterglow(["h1"],300.)
	check(is_equal_approx(city.afterglow_remaining("h1"),360.) and is_equal_approx(city.afterglow_limit("h1"),360.),"lasting resonance extends and caps actual reward, without retroactive credit")
	var saved:Dictionary=JSON.parse_string(JSON.stringify(city.snapshot()))
	var restored:=State.new()
	check(saved.schema==19 and restored.restore(saved).ok and restored.era_modifiers==city.era_modifiers and restored.afterglow_remaining("h1")==360.,"three string IDs and extended earned glow survive actual JSON restore")
	for invalid:Variant in [["polyphonic_academy","arcade_market"],["unknown"],"arcade_market",[1]]:
		var bad:=saved.duplicate(true);bad.era_modifiers=invalid
		check(not restored.restore(bad).ok,"invalid/duplicate selections rejected atomically: "+str(invalid))
	var bad:=saved.duplicate(true);bad.schema=18
	check(not restored.restore(bad).ok,"modifier cannot masquerade as legacy schema")
	bad=legacy.duplicate(true);bad.schema=19;bad.era_modifiers=["arcade_market"]
	check(not restored.restore(bad).ok,"save cannot choose a still locked era")
	check(restored.restore(legacy).ok and restored.era_modifiers.is_empty(),"legacy town stays neutral after switching away from a modified city")
	city.restore(plain);city.choose_era_modifier("lasting_resonance");city.grant_resonance_afterglow(["h1"],300.)
	check(city.undo().ok and city.era_modifiers.is_empty() and city.afterglow_remaining("h1")==240. and city.era_unlocks.size()==4,"undo removes authored choice and caps glow while earned era rights survive")
	check(State.new().restore(city.snapshot()).ok and city.redo().ok and city.era_modifiers==["lasting_resonance"],"undo snapshot remains valid and redo restores the authored plaque")
	for pair:Array in city.ScoreModifiers.PAIRS:
		for id:String in pair:
			var town:=State.new();town.restore(plain)
			check(town.choose_era_modifier(id).ok and State.new().restore(town.snapshot()).ok,"all six alternatives persist: "+id)
	var normal:=cycle(false);var sped:=cycle(true)
	check(float(normal.elapsed)>2. and absf(float(sped.elapsed)*1.25-float(normal.elapsed))<.11 and sped.produced==normal.produced,"hydraulic guild accelerates a real waterfront baker cycle, without minting extra bread")
	city.restore(plain);city.set_house_role("h4","workshop")
	var speed:float=city.site_production_multiplier("h4");var delivery:float=city.installation_multiplier("h4","h1")
	city.choose_era_modifier("craft_federation")
	check(is_equal_approx(city.site_production_multiplier("h4"),speed*1.25) and is_equal_approx(city.installation_multiplier("h4","h1"),delivery*1.25),"craft federation reaches actual production and delivery consumers")
	tram_service()
	artist_delivery()
	arcade_walk()
	print("SCORE_MODIFIERS ",JSON.stringify({"checks":checks,"failures":failures,"normal":normal,"hydraulic":sped}))
	quit(0 if failures.is_empty() else 1)
func cycle(boost:bool)->Dictionary:
	var city:=State.new();city.initialize()
	city.era_unlocks.assign(Modern.earned_city().era_unlocks)
	city.set_house_role("h2","bakery")
	city.microclimate=""
	if boost:city.choose_era_modifier("hydraulic_guild")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var workers:Array=life.bakery.workers
	for i in range(4000):
		if workers.any(func(w):return w.phase=="baking"):break
		life._process(.05)
	var elapsed:=0.
	var produced:=0
	for i in range(500):
		life._process(.05);elapsed+=.05
		produced=int(city.bakery_status("h2").produced)
		if produced>0:break
	life.free()
	check(produced>0,"real baker reaches oven and completes a batch")
	return {"elapsed":elapsed,"produced":produced}

func artist_delivery()->void:
	var city:=State.new();city.initialize_empty()
	city.era_unlocks.assign(["pastoral","renaissance"])
	for at:Vector2 in [Vector2(-12,0),Vector2(-8,0),Vector2(-36,0)]:city.add_house(at)
	city.set_house_role("h2","atelier")
	city.house_culture.h1=2
	city.add_road([Vector2(-38,1.55),Vector2(-5,1.55)] as Array[Vector2])
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var worker:Dictionary=life.workshop.workers[0]
	check(life.workshop._art_order(worker).target=="","ordinary painter cannot select the 28-metre distant home")
	city.choose_era_modifier("polyphonic_academy");life._sync()
	worker=life.workshop.workers[0]
	check(life.workshop._art_order(worker).target=="h3","academy selects the real connected distant destination")
	for i in range(5000):
		life._process(.1)
		if city.culture_level("h3")>0:break
	check(city.culture_level("h3")>0 and int(city.workshop_status("h2").produced)>0,"painter actually crafts, walks the full street and installs distant artwork")
	city.remove_road(str(city.roads[0].id));life._sync()
	check(life.workshop.workers[0].phase=="paused","unlimited range never bypasses disconnected streets")
	life.free()

func arcade_walk()->void:
	var city:=State.new();city.initialize_empty();city.era_unlocks.assign(["pastoral","renaissance"])
	for at:Vector2 in [Vector2(-12,0),Vector2(-8,0)]:city.add_house(at)
	city.set_house_era("h2","renaissance");city.add_cell("h2",0,0,1)
	city.add_road([Vector2(-16,1.55),Vector2(-4,1.55)] as Array[Vector2])
	city.choose_era_modifier("arcade_market")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var site:Dictionary={}
	for row:Dictionary in life.travel.sites.values():
		if row.kind=="arcade_tea" and row.owner_id=="h2":site=row;break
	check(not site.is_empty(),"actual two-floor medieval arcade publishes tea sensor on its adjacent street")
	var prepared:=preload("res://scripts/world/city_creation_network.gd").new()
	prepared.prepare(city.snapshot(),{},[])
	check(prepared.state.era_modifiers==["arcade_market"] and prepared.prepared_travel.sites.values().any(func(row):return row.kind=="arcade_tea"),"private network worker copies choice and publishes matching real tea sensors")
	if not site.is_empty():
		var at:Vector2=site.at;var axis:Vector2=site.axis
		life.record_travel("resident/h1",at-axis*.3,at+axis*.3)
		check(city.afterglow_remaining("h1")==30. and city.life_progress.tea_parties==0,"real sensor crossing grants warmth without fabricating a completed seated tea party")
		city.advance_resonance_afterglow(1.);life.time+=1.
		life.record_travel("resident/h1",at+axis*.3,at-axis*.3)
		check(city.afterglow_remaining("h1")==29.,"crossing cooldown prevents jitter from refreshing the reward")
		city.undo();life._sync();city.resonance_afterglow.clear()
		life.record_travel("resident/h1",at-axis*.3,at+axis*.3)
		check(city.afterglow_remaining("h1")==0. and not life.travel.sites.values().any(func(row):return row.kind=="arcade_tea"),"undo removes arcade sensor and actual reward")
	life.free()

func tram_service()->void:
	var city:=State.new();city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json")))
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);life._process(.001)
	var normal:float=city.site_production_multiplier("h104")
	var far:float=city.site_production_multiplier("h115")
	var tea:float=life.cafe.status("h103").duration
	check(city.choose_era_modifier("tram_promenade").ok,"choose tram plaque on real six-landmark city")
	life._process(.001)
	check(is_equal_approx(city.site_production_multiplier("h104"),normal*1.25) and is_equal_approx(city.site_production_multiplier("h115"),far),"actual connected depot corridor alone gets the extra production speed")
	check(is_equal_approx(float(life.cafe.status("h103").duration)*1.25,tea),"published cafe service uses the additional rail bonus")
	for house:Dictionary in city.houses:
		if house.get("signature","")=="clockwork_depot":city.remove_house(str(house.id));break
	life._process(.001)
	check(city.transit_efficiency("h104")==1. and is_equal_approx(float(life.cafe.status("h103").duration),6.),"recycling actual depot withdraws both corridor service bonuses")
	life.free()
