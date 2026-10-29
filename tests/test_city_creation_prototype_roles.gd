extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var cases:={"clockwork":{"sawtooth_atrium":"workshop","clock_turret":"clockmaker","iron_conservatory":"workshop"},"modern_eco":{"twin_gable":"workshop","chalet":"residential"},"pastoral":{"rotunda":"atelier","ionic_stoa":"venue","roman_basilica":"venue","portico":"residential"}}
	for era:String in cases:
		for prototype:String in cases[era]:
			var city:=State.new();city.initialize_free();var before:Dictionary=city.snapshot()
			check(Brush.select(city,era,prototype) and city.snapshot()==before,"transient choice "+prototype)
			var cells:Array=[{"x":0,"z":0,"level":0,"kind":"room"}]
			var preview:Dictionary=city.preview_house_stroke(Vector2(-25,-15),cells)
			check(preview.ok and city.snapshot()==before,"preview leaves author data unchanged "+prototype)
			var result:Dictionary=city.add_house_stroke(Vector2(-25,-15),cells)
			check(result.ok and city.houses[0].role==cases[era][prototype] and city.houses[0].architecture==prototype,"legal seeded role "+prototype)
			var seeded:Array=city.houses.duplicate(true)
			var seeded_copy:=State.new();var seeded_snapshot:Dictionary=city.snapshot()
			check(seeded_copy.restore(JSON.parse_string(JSON.stringify(seeded_snapshot,"",true,true))).ok and seeded_copy.snapshot()==seeded_snapshot,"cold read retains automatic role without reseeding "+prototype)
			check(city.undo().ok and city.houses.is_empty() and city.redo().ok and city.houses==seeded,"creation and role share one history entry "+prototype)
			check(city.set_house_role("h1","bakery").ok and city.set_house_architecture("h1","" ).ok and city.houses[0].role=="bakery","explicit role survives later prototype edit "+prototype)
			var saved:Dictionary=city.snapshot();var cold:=State.new()
			check(cold.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and cold.snapshot()==saved,"cold read preserves manual role "+prototype)
			check(city.undo().ok and city.undo().ok and city.houses==seeded,"undo manual edits restores seeded author fields "+prototype)
	# Classic creation retains residential even with an unlocked civic prototype.
	var legacy:=State.new();legacy.initialize_empty();Brush.select(legacy,"pastoral","rotunda")
	check(legacy.add_house(Vector2(-25,-15)).ok and legacy.houses[0].role=="residential","classic new construction remains unchanged")
	var copy:=State.new();var old:Dictionary=legacy.snapshot()
	check(copy.restore(old).ok and copy.snapshot()==old,"old role is never reseeded on load")
	print("PROTOTYPE_ROLES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
