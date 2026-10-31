extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const Affinity=preload("res://scripts/audio/city_creation_music_affinity.gd")
const Envelope=preload("res://scripts/audio/city_creation_affinity_envelope.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var began:=Time.get_ticks_msec();var f:=Fixture.courtyard("ring","none");var city:RefCounted=f.city;var before:Dictionary=city.snapshot()
	var affinity:=Affinity.new();affinity.refresh(city);var initial:=affinity.sample(Fixture.ORIGIN,18.)
	check(f.ok and city.roads.is_empty() and initial.enclosure==1. and initial.source_ids.size()==2,"real closed court without any road has full geometric affinity")
	check(initial.weights.size()==1,"sixteen rooms of one house get only one weight budget")
	check(city.functional_zones().spaces.all(func(s):return not s.eligibility.get("warm",false)),"music never grants old Warm qualification")
	check(city.snapshot()==before,"read-only facts preserve author state and receipts")
	for x in range(40):affinity.refresh(city);affinity.sample(Vector2(x*10.,-20.),18.+x)
	check(affinity.rebuilds==1,"camera movement reweights without rebuilding geometry")
	check(city.add_house(Vector2(18,-20)).ok,"ordinary remote house through public API")
	affinity.refresh(city)
	for focus:Vector2 in [Fixture.ORIGIN,Vector2(18,-20),Vector2(1000,1000)]:
		for zoom:float in [12.,32.,64.]:
			var sample:=affinity.sample(focus,zoom);var sum:=0.
			for weight:float in sample.weights.values():sum+=weight
			check(is_equal_approx(sum,1.) and sample.enclosure>=0. and sample.enclosure<=1.,"normalized local/global blend and far fallback")
	var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,"cold author restore")
	var independent:=Affinity.new();independent.refresh(cold)
	check(independent.records==affinity.records,"independent cold facts equal cached facts")
	var envelope:=Envelope.new();var now:=0.;var packet:Dictionary={}
	for i in range(50):now+=.1;packet=envelope.step(initial,now,.1)
	check(packet.value==0. and packet.candidate,"brief focus cannot enter new mix before observation")
	for i in range(100):now+=.1;packet=envelope.step(initial,now,.1)
	check(packet.value>.9 and packet.target==1.,"stable true court slowly enters mix")
	check(city.remove_house("h1").ok,"real geometry deletion")
	affinity.refresh(city);var missing:=affinity.sample(Fixture.ORIGIN,18.);packet=envelope.step(missing,now+.1,.1)
	check(missing.source_ids.is_empty() and packet.current_source_ids.is_empty() and packet.historical_tail and packet.value>0.,"deleted fact withdraws immediately; residual mix explicitly historical")
	var cells:Array=before.houses[0].cells.map(func(c):return {"x":c.x,"z":c.z,"level":c.level,"kind":c.kind})
	check(city.add_house_stroke(Fixture.ORIGIN,cells).ok,"new house can recreate the same physical ring")
	affinity.refresh(city);packet=envelope.step(affinity.sample(Fixture.ORIGIN,18.),now+.15,.05)
	check(packet.target==0. and packet.historical_source_ids.has("h1"),"new owner at identical geometry cannot inherit old source observation")
	check(city.undo().ok,"Undo replacement before restoring original")
	check(city.undo().ok,"real Undo restores geometry")
	affinity.refresh(city);packet=envelope.step(affinity.sample(Fixture.ORIGIN,18.),now+.2,.1)
	check(packet.target>0. and not packet.historical_tail,"Undo inside bounded tail reuses valid mix without a second observation hold")
	for i in range(70):now+=.1;packet=envelope.step(missing,now+.2,.1)
	check(packet.value==0. and packet.target==0.,"deleted source cannot leave indefinite residual gain")
	var empty:=Fixture.State.new();empty.initialize_free();affinity.refresh(empty);var silence:=affinity.sample(Vector2.ZERO,18.)
	check(silence.empty and silence.weights.is_empty() and silence.enclosure==0.,"empty city has explicit finite baseline")
	packet=envelope.step(silence,now+.3,.1)
	check(packet.value==0. and packet.current_source_ids.is_empty(),"new city clears prior envelope immediately")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path("res://验证记录/M84/music_affinity_20261031"));FileAccess.open("res://验证记录/M84/music_affinity_20261031/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("MUSIC_AFFINITY_CPU ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
