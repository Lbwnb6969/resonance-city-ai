extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_amphitheater_fixture.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var scene:=Fixture.build(self);var city:RefCounted=scene.city;var life:Node3D=scene.life
	_check(scene.facts.festival_crafted and scene.facts.festival_used and city.growth_memories.size()>=3 and city.era_unlocks.has("modern_eco") and city.signature_unlocks.has("floating_amphitheater"),"actual attended craft delivery prepared concert and three completed journal chapters unlock final signature after modern era")
	if not failures.is_empty():print("THEATER_FIXTURE ",JSON.stringify(scene.facts));life.free();quit(1);return
	var at:=Fixture.site(city)
	_check(at!=Vector2.INF and not city.preview_signature("floating_amphitheater",Vector2(-30,15)).ok,"final signature requires real shoreline and rejects inland selection")
	if at==Vector2.INF:life.free();quit(1);return
	var before:Dictionary=city.snapshot();var preview:Dictionary=city.preview_signature("floating_amphitheater",at)
	_check(preview.ok and preview.house.cells.size()==4 and city.snapshot()==before,"water theater preview keeps original room-cell identity and remains read-only")
	var plants:Array=city.plants.duplicate(true);var hidden_plants:Array[Dictionary]=[];var preview_plan:Dictionary=city.AmphitheaterPlan.for_house(city,preview.house)
	for plant:Dictionary in city.plants:
		var p:=Vector2(plant.position[0],plant.position[1])
		if city.vegetation_visible(plant) and city.AmphitheaterPlan.occupies(preview_plan,p,.72*float(plant.scale)):hidden_plants.append(plant)
	var placed:Dictionary=city.place_signature("floating_amphitheater",at);var house:Dictionary=city.houses[city._house_index(placed.house_id)]
	var plan:Dictionary=city.AmphitheaterPlan.for_house(city,house)
	_check(placed.ok and house.role=="symphony_hall" and house.era_theme=="modern_eco" and city.water_clearance(plan.stage)<-.65 and plan.tiers==3,"real modern symphony hall anchors a wet floating stage jetty and three shore stands")
	_check(not city.preview_signature("floating_amphitheater",Vector2(9,24)).ok and city.concert_radius(placed.house_id)>100.,"only one free final signature serves whole-canvas concert invitation radius")
	var clear:=true
	for plant:Dictionary in hidden_plants:clear=clear and not city.vegetation_visible(plant)
	_check(clear and city.plants==plants,"existing seed and player plants are hidden beneath true stage and stands without deleting any authored intent")
	var saved:Dictionary=city.snapshot();var fresh:=State.new();var restored:Dictionary=fresh.restore(JSON.parse_string(JSON.stringify(saved,"",true,true)))
	_check(restored.ok and fresh.snapshot()==saved,"schema sixteen restores final signature original cells and true shoreline stage exactly")
	if not restored.ok:print("RESTORE_ERROR ",restored)
	var former:Dictionary=house.duplicate(true)
	_check(city.remove_house(placed.house_id).ok and city.undo().ok and city.houses[city._house_index(placed.house_id)]==former,"whole theater recycling and undo preserve all original room IDs and architecture")
	var moved_at:=Vector2.INF
	for offset:Vector2 in [Vector2(0,8),Vector2(1,8),Vector2(0,-4),Vector2(1,4)]:
		if city.preview_signature("floating_amphitheater",at+offset,placed.house_id).ok:moved_at=at+offset;break
	var moved:Dictionary=city.place_signature("floating_amphitheater",moved_at,placed.house_id) if moved_at!=Vector2.INF else {"ok":false}
	_check(moved.ok and city.houses[city._house_index(placed.house_id)].cells==former.cells and city.undo().ok and city.AmphitheaterPlan.for_house(city,city.houses[city._house_index(placed.house_id)])==plan,"free move to another valid shore retains all cells and actual undo restores original water stage geometry")
	var bad:Dictionary=saved.duplicate(true);bad.growth_memories.resize(2)
	_check(not fresh.restore(bad).ok,"forged final-signature save without three chapters is rejected")
	print("AMPHITHEATER ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"site":at,"plan":plan,"facts":scene.facts}));life.free();quit(0 if failures.is_empty() else 1)
