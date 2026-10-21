extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Fixtures=preload("res://tools/fixtures/city_creation_chord_fixture.gd")
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const Harmony=preload("res://scripts/audio/city_creation_harmonic_emergence.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func score(city:RefCounted,at:Vector2)->Dictionary:
	var rows:Dictionary=Catalog.prepare(city).houses;var acoustic:=Acoustic.new();acoustic.focus=at;acoustic.zoom=50.;acoustic.evaluate(rows,[],[])
	return Harmony.evaluate(rows,acoustic,[],0,false)
func run()->void:
	var city:=State.new();city.initialize_empty()
	var built:=true
	for at:Vector2 in [Vector2(-26,-20),Vector2(-22.4,-20),Vector2(-18.8,-20)]:built=built and city.add_house(at).ok
	check(built and city.set_house_role("h1","bakery").ok and city.set_house_role("h2","garden_cafe").ok and city.set_house_role("h3","workshop").ok,"three actual homes form an automatic living cluster")
	check(not city.has_chord("h1","pastoral_triad"),"living roles alone do not replace a real local pond")
	check(city.add_water([Vector2(-26,-16.6)] as Array[Vector2],3.,"pond").ok and city.has_chord("h1","pastoral_triad"),"actual near-house pond activates the auto-cluster recipe")
	check(is_equal_approx(float(city.planning_bonus("h1").production_mult),1.25) and is_equal_approx(float(city.planning_bonus("h2").production_mult),1.25) and is_equal_approx(city.installation_multiplier("h3","h1"),1.25),"pastoral production and genuine wood growth receive a quarter bonus")
	check(float(score(city,Vector2(-24,-20)).targets.air)>=-22.,"active pastoral chord feeds the synchronized flute layer")
	var ring:=State.new();ring.initialize_empty()
	var positions:Array[Vector2]=[Vector2(-30,-26),Vector2(-26.4,-26),Vector2(-22.8,-26),Vector2(-19.2,-26),Vector2(-15.6,-26),Vector2(-15.6,-22.4),Vector2(-15.6,-18.8),Vector2(-19.2,-18.8),Vector2(-22.8,-18.8),Vector2(-26.4,-18.8),Vector2(-30,-18.8)]
	built=true
	for at:Vector2 in positions:built=built and ring.add_house(at).ok
	check(built and ring.set_house_role("h1","bakery").ok and ring.set_house_role("h10","garden_cafe").ok and ring.add_water([Vector2(-28,-22.4)] as Array[Vector2],1.8,"pond").ok,"real U-shaped automatic cluster encloses an unoccupied pond")
	check(not ring.has_chord("h1","pastoral_triad"),"a fictitious segment between sorted automatic members cannot claim the interior pond")
	var high:RefCounted=Fixtures.highland(1)
	check(high.houses.all(func(h):return is_equal_approx(float(h.base_y),1.)) and high.has_chord("h1","highland_fifth"),"four real one-metre foundations and a stair road activate the new highland boundary")
	check(float(score(high,Vector2(-22,0)).targets.wood_sylvan)>=-25.,"one-metre highland chord adds its actual woodwind layer")
	var fugue:RefCounted=Fixtures.renaissance()
	for cell:Dictionary in fugue.houses[fugue._house_index("h3")].cells.duplicate(true):
		if int(cell.level)==1:fugue.remove_cell("h3",str(cell.id))
	check(fugue.remove_roundabout(Vector2(-22,0)).ok and fugue.has_chord("h1","renaissance_fugue"),"two arcades and the two actual crafts no longer require a roundabout")
	check(is_equal_approx(float(fugue.planning_bonus("h2").yield_mult),1.5) and float(score(fugue,Vector2(-12,0)).targets.renaissance_fugue)>=-18.,"fugue supplies the real fifty-percent yield rule and synchronized era stem")
	fugue.set_house_temperament("h2","allegro")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(fugue)
	var batches:Array[int]=[]
	life.craft_callback=func(kind:String,shop:String,_target:String,quantity:int)->void:
		if kind=="crafted" and shop=="h2":batches.append(quantity)
	for i:int in range(5000):
		if not batches.is_empty():break
		life._process(.05)
	check(batches==[1] and fugue.workshop_yield_remainder.get("h2",0.)==.5,"first genuine one-piece craft retains half an earned object")
	check(fugue.set_journey_checkpoint(life.checkpoint()).ok,"actual odd-batch worker checkpoint is accepted")
	var saved:Dictionary=fugue.snapshot();var copy:=State.new();var loaded:Dictionary=copy.restore(JSON.parse_string(JSON.stringify(saved,"",true,true)))
	check(loaded.ok and saved.schema==19 and copy.workshop_yield_remainder==fugue.workshop_yield_remainder,"fractional yield survives Schema19 without losing stock: "+str(loaded))
	var more:Array[int]=[]
	if loaded.ok:
		var resumed:=Life.new();root.add_child(resumed);resumed.set_process(false);resumed.setup(copy)
		resumed.craft_callback=func(kind:String,shop:String,_target:String,quantity:int)->void:
			if kind=="crafted" and shop=="h2":more.append(quantity)
		for i:int in range(5000):
			if not more.is_empty():break
			resumed._process(.05)
		check(more==[2] and not copy.workshop_yield_remainder.has("h2"),"next real craft after load completes exactly three objects over two one-piece batches")
		var produced:=int(copy.workshop_status("h2").produced)
		copy.set_house_palette("h1",2);copy.undo()
		check(int(copy.workshop_status("h2").produced)==produced and not copy.workshop_yield_remainder.has("h2"),"undo preserves already made goods and consumed fractional yield")
		resumed.free()
	var invalid:=saved.duplicate(true);invalid.workshop_yield_remainder.h2=1.5
	check(not State.new().restore(invalid).ok,"invalid fractional carry cannot forge an extra finished object")
	invalid=saved.duplicate(true);invalid.schema=18
	check(not State.new().restore(invalid).ok,"fractional yield cannot hide in a legacy schema")
	invalid=saved.duplicate(true);invalid.workshop_yield_remainder.h1=.5
	check(not State.new().restore(invalid).ok,"a home without real craft production cannot claim fractional yield")
	life.free()
	var chrono:RefCounted=Fixtures.chrono()
	var remote:Dictionary=chrono.add_house(Vector2(-30,30))
	check(remote.ok and chrono.synergy_buffs().counterpoint_multiplier==1.3 and float(chrono.planning_bonus(str(remote.house_id)).production_mult)>=1.3,"true cross-era counterpart increases city-wide production beyond its own scope")
	var raised:=State.new();raised.restore(JSON.parse_string(FileAccess.get_file_as_string("res://tools/fixtures/legacy_renaissance_schema13.json")))
	var hill:Array[Vector2]=[Vector2(-28,16),Vector2(-24.4,16),Vector2(-28,19.6)]
	check(raised.add_terrain_stroke(hill,"plateau",6.,1.,1).ok,"author a real one-metre plateau on the same riverbank")
	built=true
	for at:Vector2 in hill:built=built and raised.add_house(at).ok
	var low:Dictionary=raised.add_district([Vector2(-14,-2),Vector2(-2,-2)] as Array[Vector2],6.,"warm")
	var upper:Dictionary=raised.add_district(hill,5.6,"deep")
	check(built and low.ok and upper.ok and raised.set_district_era(str(upper.district_id),"renaissance").ok and raised.link_districts(str(low.district_id),str(upper.district_id)).ok,"three actual highland houses form an era group connected by musical arc")
	check(raised.has_chord("h1","chrono_counterpoint"),"different actual eras on high and low land activate counterpoint without crossing the main river")
	check(raised.set_district_era(str(upper.district_id),"pastoral").ok and not raised.has_chord("h1","chrono_counterpoint"),"matching eras cannot claim the cross-era recipe even across a height difference")
	check(raised.undo().ok and raised.has_chord("h1","chrono_counterpoint"),"undo restores the exact high-low era recipe")
	print("CONSOLIDATED_STRATEGY ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"first_batches":batches,"resumed_batches":more}))
	quit(0 if failures.is_empty() else 1)
