extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const ThemePCM=preload("res://scripts/audio/city_creation_theme_pcm.gd")
const PitchPluck=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _until(life: Node3D,condition: Callable,seconds: float=250.0)->bool:
	for i in range(ceili(seconds/.1)):
		if condition.call():return true
		life._process(.1)
	return false
func _life(city: RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func _run()->void:
	var city:=State.new();city.initialize()
	var connected: Dictionary={"h1":true,"h2":true,"h3":true,"h4":true}
	_check(city.refresh_quality(connected).is_empty() and city.building_quality.is_empty(),"mere road adjacency never upgrades unserved buildings")
	_check(city.produce_bread("h2",2) and city.serve_bread("h2","h1"),"real finite bakery stock supplies the first household")
	city.refresh_quality(connected)
	_check(city.level_tier("h1")==2 and city.level_tier("h2")==2 and city.level_tier("h3")==1,"bread customer and actual serving bakery earn tier two; unrelated home stays tier one")
	city.set_house_role("h3","workshop")
	city.produce_craft("h3",1);city.reserve_craft("h3","h1","h1");city.complete_craft("h3","h1","h1")
	city.refresh_quality(connected,{"h3":"h1"})
	_check(city.level_tier("h1")==3 and city.level_tier("h3")==3,"delivered wooden craft and real artisan household support tier three")
	_check(city.level_tier("h4")==1,"global craft production does not credit another house")
	city.serve_bread("h2","h5");city.set_house_role("h4","garden_cafe")
	_check(city.complete_tea("h4",["h1","h5"]),"two paid bread credits complete a real tea ledger transaction")
	city.refresh_quality(connected,{"h3":"h1"})
	_check(city.level_tier("h1")==3,"tea alone lacks quality-four street amenity")
	city.roads[0].style="promenade";city.roads[0].width=1.75;city.revision+=1
	city.refresh_quality(connected,{"h3":"h1"})
	_check(city.level_tier("h1")==4 and city.level_tier("h3")==4 and city.site_production_multiplier("h3")==1.25,"tea with real stone street promotes home and its artisan workplace with exact 25 percent production benefit")
	var stable: Dictionary=city.building_quality.duplicate(true)
	city.set_house_name("h1","品质小屋");city.undo()
	_check(city.building_quality==stable,"construction undo preserves earned quality records")
	city.roads.clear();city.revision+=1;city.refresh_quality({})
	_check(city.level_tier("h1")==4,"removing street after achievement does not demote earned quality")
	var snap: Dictionary=city.snapshot();var restored:=State.new()
	_check(snap.schema==17 and restored.restore(JSON.parse_string(JSON.stringify(snap,"",true,true))).ok and restored.snapshot()==snap,"quality-four historic evidence restores exactly after roads are removed")
	var bad: Dictionary=snap.duplicate(true);bad.building_quality.h1.level_tier=5
	var before: Dictionary=restored.snapshot()
	_check(not restored.restore(bad).ok and restored.snapshot()==before,"quality five cannot be forged without actual concert relay and cultural delivery")
	bad=snap.duplicate(true);bad.building_quality.h1.source_id="h99999"
	_check(not restored.restore(bad).ok,"quality cannot borrow service from an unissued household")
	bad=snap.duplicate(true);bad.schema=13
	_check(not restored.restore(bad).ok,"older schema cannot carry quality records")
	for bar in range(8):
		var previous: int=PitchPluck.pitch(bar,0,0)-1
		for i in range(5):
			var midi: int=PitchPluck.pitch(bar,i,0)
			_check(midi>previous and ThemePCM.quantize(midi)==midi,"upgrade arpeggio stays strictly ascending in common pentatonic scale")
			previous=midi
	# Actual walking and full 24-second performance, not a global completion count.
	city=State.new();city.initialize();var life:=_life(city)
	_check(_until(life,func():return city.level_tier("h1")>=2),"normal live simulation automatically promotes real bread customer")
	_check(life.invite_concert("h4").ok and _until(life,func():return life.concert_status().phase=="playing"),"actual audience walks to concert before it starts")
	life._process(23.9)
	_check(city.house_concerts.is_empty(),"unfinished concert grants no permanent performance history")
	life._process(.2);life._refresh_quality()
	_check(int(city.house_concerts.get("h1",{}).get("concerts",0))==1 and city.level_tier("h1")==3,"only completed real concert records participant history and unlocks tier-three harmonic decor")
	_check(not city.house_concerts.has("h6"),"unreachable nonparticipating house receives no concert credit")
	_check(city.set_journey_checkpoint(life.checkpoint()).ok and city._validate_snapshot(city.snapshot()).ok,"completed audience history and evolved city retain save invariants")
	life.free()
	print("CITY_CREATION_QUALITY ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
