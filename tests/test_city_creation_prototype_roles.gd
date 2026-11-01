extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
var checks:=0
var failures:Array=[]
var out:=""
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):push_error("new isolated evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var cases:={"clockwork":{"sawtooth_atrium":"workshop","clock_turret":"clockmaker","iron_conservatory":"workshop"},"modern_eco":{"twin_gable":"workshop","chalet":"residential"},"pastoral":{"rotunda":"atelier","ionic_stoa":"venue","roman_basilica":"venue","portico":"residential"}}
	for era:String in cases:
		for prototype:String in cases[era]:
			var city:=State.new();city.initialize_free()
			check(city.begin_progression_epoch(out+"/"+prototype+".json").ok,"active account "+prototype)
			var before:Dictionary=city.snapshot()
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
	policy_boundaries()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PROTOTYPE_ROLES ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func policy_boundaries()->void:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","rotunda")
	check(city.add_house(Vector2(-30,-20)).ok and city.houses[-1].role=="residential","old free without epoch does not silently seed a new business")
	check(city.set_house_role("h1","atelier").ok,"old free manual economic purpose remains available")
	check(city.begin_progression_epoch(out+"/boundary.json").ok,"explicit active epoch")
	check(city.add_house(Vector2(-25,-20)).ok and city.houses[-1].role=="atelier","active simple add path uses prototype default")
	check(city.CreationPolicy.set_progression_enabled(city,false,out+"/paused.json").ok,"pause active account")
	check(city.add_house(Vector2(-20,-20)).ok and city.houses[-1].role=="residential" and city.houses[0].role=="atelier" and city.houses[1].role=="atelier","paused new building is dwelling and earlier uses remain")
	var kept:Array=city.houses.duplicate(true)
	check(city.undo().ok and city.redo().ok and city.houses==kept,"paused construction undo/redo never reapplies active defaults")
	check(city.set_house_role("h3","bakery").ok,"paused manual purpose remains authoritative")
	check(city.CreationPolicy.set_progression_enabled(city,true,out+"/resumed.json").ok and city.houses[2].role=="bakery","resume keeps manually authored paused use")
	check(city.add_house(Vector2(-15,-20)).ok and city.houses[-1].role=="atelier","new construction after resume seeds again")
	check(city.set_house_role("h2","residential").ok and city.set_house_architecture("h2","").ok and city.set_house_architecture("h2","rotunda").ok and city.houses[1].role=="residential","manual dwelling never overwritten by later prototype edits")
	var old:Dictionary=city.snapshot();var copy:=State.new()
	check(copy.restore(JSON.parse_string(JSON.stringify(old,"",true,true))).ok and copy.snapshot()==old,"mixed active and paused manual roles cold-restore exactly")
	check(city.life_progress.purchases==0 and city.life_progress.tea_parties==0 and city.workshop_supply.is_empty(),"seeding creates no fake purchases, tea or workshop supply")
