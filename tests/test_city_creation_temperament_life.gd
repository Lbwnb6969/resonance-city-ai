extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Harmony=preload("res://scripts/audio/city_creation_cluster_harmony.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var facts:Dictionary={}
	for mode:String in ["andante","allegro","largo"]:
		var city:=State.new();city.initialize();city.set_house_temperament("h2",mode)
		var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
		var elapsed:=0.;var produced:=-1
		for i:int in range(3000):
			if life.bakery.workers.any(func(w):return w.phase=="baking"):break
			life._process(.05)
		check(life.bakery.workers.any(func(w):return w.phase=="baking"),mode+" actual worker reaches the oven")
		for i:int in range(250):
			life._process(.05);elapsed+=.05
			produced=int(city.bakery_status("h2").produced)
			if produced>0:break
		facts[mode]={"elapsed":elapsed,"produced":produced,"bonus_batch":int(city.site_blessing("h2").get("bonus_batch",0)),"capacity":city.bakery_capacity("h2"),"glow":city.afterglow_remaining("h1")}
		check(produced>0,mode+" actual oven produces")
		var retained_stock:=int(city.bakery_status("h2").stock)
		city.set_house_temperament("h2","allegro")
		check(int(city.bakery_status("h2").stock)==retained_stock and city.bakery_capacity("h2")==int(facts[mode].capacity),"tempo change preserves stock and shelf capacity")
		city.set_journey_checkpoint(life.checkpoint());var saved:=city.snapshot();var copy:=State.new()
		check(copy.restore(saved).ok,mode+" real inventory and normalized worker checkpoint round trip")
		life.free()
	check(int(facts.allegro.produced)==1+int(facts.allegro.bonus_batch) and float(facts.allegro.elapsed)<float(facts.andante.elapsed),"allegro makes one loaf sooner")
	check(int(facts.largo.produced)==int(facts.andante.produced)*2 and float(facts.largo.elapsed)>float(facts.andante.elapsed),"largo genuinely doubles the batch with a 30 percent longer cycle")
	check(float(facts.largo.glow)>0 and float(facts.andante.glow)==0.,"largo completion grants actual nearby afterglow")
	var city:=State.new();city.initialize();city.set_house_role("h4","workshop")
	var base:=city.workshop_batch_size("h4");var capacity:=city.workshop_capacity("h4");var speed:=city.site_production_multiplier("h4");var walk:=city.artisan_walking_multiplier("h1","h4","h3","to_target")
	city.set_house_temperament("h4","largo")
	check(city.workshop_batch_size("h4")==base*2 and is_equal_approx(city.site_production_multiplier("h4"),speed/1.3) and city.workshop_capacity("h4")==capacity,"woodworker largo uses the real production path without shrinking stock")
	city.set_house_temperament("h4","allegro")
	check(is_equal_approx(city.artisan_walking_multiplier("h1","h4","h3","to_target"),walk*1.25),"artisan delivery actually receives allegro walking speed")
	var choir:=State.new();choir.initialize_empty()
	for at:Vector2 in [Vector2(-28,-20),Vector2(-24.4,-20),Vector2(-20.8,-20)]:check(choir.add_house(at).ok,"form real workshop choir")
	choir.set_house_role("h1","workshop");choir.set_house_temperament("h1","allegro")
	var records:Dictionary=Catalog.prepare(choir).houses;var acoustic:=Acoustic.new();acoustic.focus=Vector2(-25,-20);acoustic.evaluate(records,[],[])
	var workers:Array=[{"workshop_id":"h1","phase":"crafting"}]
	var bright:=Harmony.life_stems(records,acoustic,[],workers,{})
	choir.set_house_temperament("h1","largo");records=Catalog.prepare(choir).houses
	var deep:=Harmony.life_stems(records,acoustic,[],workers,{})
	check(bright.targets.has("wood_weave") and deep.targets.has("wood_deep") and deep.targets.has("foundation"),"tempo changes map real crafting into distinct synchronized instrument colors")
	print("TEMPERAMENT_LIFE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"ovens":facts}))
	quit(0 if failures.is_empty() else 1)
