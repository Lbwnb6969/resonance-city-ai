extends SceneTree
## Targeted state + real production integrator check; no personal files touched.
const State = preload("res://scripts/world/city_creation_state.gd")
const Prosperity = preload("res://scripts/world/city_creation_prosperity.gd")
const Bakery = preload("res://scripts/world/city_creation_bakery.gd")
const Workshop = preload("res://scripts/world/city_creation_workshop.gd")
const Growth = preload("res://scripts/world/city_creation_growth.gd")
var failures: Array[String] = []

class LifeStub extends Node3D:
	var state: RefCounted
	var production_callback := Callable()
	var craft_callback := Callable()

class FountainCity extends RefCounted:
	var houses: Array[Dictionary] = [{"id":"b", "origin":[0.0,0.0]}]
	var fountain: Dictionary = {}
	func water_clearance(_at: Vector2) -> float: return 20.0
	func courtyard_plans() -> Array:
		return [{"members":["b"], "fountain":fountain}]

func _initialize() -> void:
	_run.call_deferred()

func _check(value: bool, label: String) -> void:
	if not value:
		failures.append(label)
		push_error(label)

func _house(id: String, role: String, at: Vector2) -> Dictionary:
	return {"id":id, "role":role, "origin":[at.x,at.y], "cells":[{"id":"c"+id.substr(1),"kind":"room","x":0,"z":0,"level":0}], "seed":1}

func _run() -> void:
	var state := State.new()
	state.initialize()
	var old_snapshot: Dictionary = state.snapshot()
	var restored := State.new()
	_check(bool(restored.restore(old_snapshot).ok), "existing city snapshot restores without a schema change")
	state.houses.assign([
		_house("h1","bakery",Vector2(state.river_x(0.0)+6.0,0.0)),
		_house("h2","residential",Vector2(15,15)),
		_house("h3","residential",Vector2(20,15)),
		_house("h4","workshop",Vector2(-15,-15)),
		_house("h5","garden_cafe",Vector2(20,0))])
	state.roads.clear()
	state.plants.clear()
	state.waters.clear()
	state.revision += 1
	_check(bool(state.site_blessing("h1").blessed), "near-water oven has an actual site blessing")
	_check(state.bakery_batch_size("h1")==2 and state.bakery_capacity("h1")==6, "water adds one loaf per batch without inventing storage")
	var life := LifeStub.new()
	life.state = state
	var bakery := Bakery.new(life)
	var worker := {"bakery_id":"h1","phase":"baking","elapsed":0.0,"batches":0}
	bakery._bake(worker, 6.0/1.35)
	_check(int(state.bakery_status("h1").stock)==2, "real oven produces its boosted batch in 4.44 seconds")
	worker.elapsed = 0.0
	state.resonance_afterglow["h1"] = 1.0
	bakery._bake(worker, 2.0)
	_check(is_equal_approx(float(worker.elapsed), 3.0375), "site speed composes once with expiring afterglow")
	_check(state.serve_bread("h1","h2"), "real bread purchase succeeds")
	_check(state.house_harmony_tier("h2")==1 and state.house_harmony_tier("h3")==0, "one household's purchase does not feed its neighbor")
	state.cafe_credits.h3 = {"earned":1,"spent":0}
	_check(state.complete_tea("h5",["h2","h3"]), "real tea consumes both households' purchase credits")
	_check(state.house_harmony_tier("h2")==2, "spent food credit still proves a purchase and tea attendance")
	state.house_improvements.h2 = 1
	_check(state.house_harmony_tier("h2")==3, "delivered craft completes the three household needs")
	_check(not bool(state.site_blessing("h4").blessed), "bare workshop receives no forest bonus")
	for at: Vector2 in [Vector2(-12,-12),Vector2(-18,-12),Vector2(-18,-18)]:
		state.plants.append({"id":"p%d" % (state.plants.size()+1),"kind":"olive","position":[at.x,at.y],"scale":1.0,"seed":1,"source":"player"})
	state.revision += 1
	_check(bool(state.site_blessing("h4").blessed), "three visible trees within eight meters bless the workshop")
	var workshop := Workshop.new(life)
	var craft_worker := {"workshop_id":"h4","elapsed":0.0}
	workshop._craft(craft_worker, 1.0)
	_check(is_equal_approx(float(craft_worker.elapsed), 1.35), "real craft integrator applies the forest speed")
	state.plants.pop_back()
	state.revision += 1
	_check(not bool(state.site_blessing("h4").blessed), "removing a required tree invalidates the blessing")
	state.roads.append({"id":"r1","style":"promenade","width":1.75,"points":[[18.0,2.5],[22.0,2.5]]})
	state.revision += 1
	_check(state.cafe_afterglow_extension("h5")==45.0, "actual promenade extends tea afterglow to 45 seconds")
	state.roads.clear()
	state.revision += 1
	_check(state.cafe_afterglow_extension("h5")==30.0, "removing the promenade restores the base extension")
	var fountain_city := FountainCity.new()
	_check(not bool(Prosperity.bakery_blessing(fountain_city,"b").blessed), "empty fountain plan does not invent water")
	fountain_city.fountain = {"at":Vector2(5,0),"radius":0.73}
	_check(bool(Prosperity.bakery_blessing(fountain_city,"b").blessed), "real derived fountain dictionary blesses its courtyard member")
	state.growth_memories.assign(["dawn","tide","festival"])
	state.houses[0].base_y = 1.0
	state.houses[0].style = "round_tower"
	state.roads.append({"id":"r1","style":"promenade","width":1.75,"points":[[18.0,2.5],[22.0,2.5]]})
	state.musical_links.append({"a":"d1","b":"d2"})
	state.revision += 1
	_check(bool(Growth.report(state)[3].ready), "fourth chapter recognizes real highland, promenade and eligible round tower")
	_check(state.refresh_growth()==["nocturne"], "fourth chapter awards once after the previous three chapters")
	_check(state.refresh_growth().is_empty(), "completed fourth chapter does not award repeatedly")
	restored.growth_memories.assign(Growth.CHAPTERS)
	_check(bool(restored.set_house_finish(str(restored.houses[0].id),"nocturne").ok), "earned fourth finish is selectable")
	var finished := State.new()
	_check(bool(finished.restore(restored.snapshot()).ok) and str(finished.houses[0].get("finish",""))=="nocturne", "fourth finish and ordered chapter memories survive a real snapshot restore")
	life.free()
	print(JSON.stringify({"check":"creation_prosperity","passed":failures.is_empty(),"failures":failures}))
	quit(0 if failures.is_empty() else 1)
