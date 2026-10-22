extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_vignette_fixture.gd")
const Vignettes=Fixture.Vignettes
const State=Fixture.State
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	for kind:String in Vignettes.IDS:
		var city:RefCounted=Fixture.start(kind)
		check(city.harmony_journey.active_vignette.id==kind,"terrain-aware proposal exists: "+kind)
		var proposal:Dictionary=city.harmony_journey.active_vignette.duplicate(true)
		check(Vignettes.complete(city,{}).is_empty(),"existing town never auto-completes a new offer")
		var before:Dictionary=city.snapshot();var copy:=State.new()
		check(copy.restore(JSON.parse_string(JSON.stringify(before,"",true,true))).ok and copy.harmony_journey==city.harmony_journey,"unfinished quest round-trips exactly")
		var results:=Fixture.construct(city);check(not results.is_empty() and results.all(func(row):return row.ok),"actual public construction completes geometry: "+kind)
		var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
		var status:=Vignettes.candidates(city,life.connected_houses);print("VIGNETTE_STATUS ",kind," ",status)
		var reward:=Vignettes.complete(city,life.connected_houses)
		check(not reward.is_empty(),"only actual geometry and real connections earn: "+kind)
		if reward.is_empty():life.free();continue
		check(reward.xp==Vignettes.template(kind).reward_xp and city.harmony_journey.completed_vignettes[kind]==1,"reward amount and completion receipt are exact")
		check(reward.members.all(func(id):return is_equal_approx(Vignettes.production(city,id),1.1)) and is_equal_approx(Vignettes.music(city,reward.members),.6),"permanent production and actual lead gain belong to involved homes")
		if kind==Vignettes.IDS[1]:check(reward.members.all(func(id):return is_equal_approx(city.walking_multiplier(id),1.08)),"terrace blessing reaches actual walking API")
		var earned:Dictionary=city.harmony_journey.duplicate(true);check(Vignettes.complete(city,life.connected_houses).is_empty(),"consumed offer never pays twice")
		city.undo();city.redo();check(city.harmony_journey==earned,"geometry history preserves earned blessings and XP")
		var saved:Dictionary=city.snapshot();check(copy.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and copy.harmony_journey==city.harmony_journey,"completed quest/blessings restore exactly")
		Vignettes.offer(city,kind);check(Vignettes.complete(city,life.connected_houses).is_empty(),"next offer excludes existing houses/courts/trees")
		var xp:int=city.harmony_journey.harmony_xp;var serial:int=city.harmony_journey.vignette_serial
		check(Vignettes.offer(city) and city.harmony_journey.active_vignette.id!=kind and int(city.harmony_journey.vignette_serial)==serial+1 and int(city.harmony_journey.harmony_xp)==xp,"refresh changes the page without costs or rewards")
		for invalid:String in ["serial","unknown","anchor","houses","blessing","completion","era"]:
			var bad:Dictionary=city.snapshot();var journey:Dictionary=bad.harmony_journey
			match invalid:
				"serial":journey.vignette_serial=-1
				"unknown":journey.active_vignette.id="unknown"
				"anchor":journey.active_vignette.anchor=[NAN,0]
				"houses":journey.active_vignette.houses_before=["h9999999"]
				"blessing":journey.vignette_blessings[reward.members[0]]=[kind,kind]
				"completion":journey.completed_vignettes[kind]=0
				"era":journey.celebrated_eras=["modern_eco"]
			var original:=copy.snapshot();check(not copy.restore(bad).ok and copy.snapshot()==original,"malformed optional quest rejected atomically: "+invalid)
		for i in range(results.size()):city.undo()
		Vignettes.offer(city,kind)
		for i in range(results.size()):city.redo()
		life._sync()
		check(Vignettes.complete(city,life.connected_houses).is_empty(),"undo construction, refresh, then redo issued geometry cannot farm: "+kind)
		life.free()
	print("VIGNETTES_CPU ",checks-failures.size(),"/",checks," ",failures);quit(0 if failures.is_empty() else 1)
