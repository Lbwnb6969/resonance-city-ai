extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_placed_landmarks.gd")
const Sites=preload("res://tests/test_city_creation_placed_landmarks.gd")
const Legend=preload("res://scripts/world/city_creation_legendary_wonder_plan.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var out:="res://验证记录/M84/free_landmark_access_20261030/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var city:=State.new();city.initialize_free()
	var original:Dictionary=city.snapshot()
	check(Plan.available_blueprints(city.creative_settings,city.harmony_journey).size()==4 and Legend.unlocked(city).is_empty(),"four basic rights without earned history")
	for family:String in Plan.SIZES:
		var at:=Sites.empty_site(city,family);var before:Dictionary=city.snapshot()
		check(Plan.preview(city,family,at).ok and city.snapshot()==before,"preview stays read only "+family)
		var placed:=Plan.place(city,family,at)
		check(placed.ok,"fresh free public placement "+family)
		if not placed.ok:continue
		var id:String=placed.landmark_id
		check(not Plan.place(city,family,at+Vector2(0,10)).ok,"one entity per family "+family)
		check(city.undo().ok and Plan.row(city,id).is_empty() and city.redo().ok and not Plan.row(city,id).is_empty(),"UndoRedo without earned card "+family)
		check(Plan.place(city,family,at,PI*.5,id).ok,"rotate without earned card "+family)
		var target:=Sites.empty_site(city,family,id)
		check(Plan.place(city,family,target,0.,id).ok and Plan.position(Plan.row(city,id))==target,"move preserves identity "+family)
		check(Plan.remove(city,id).ok and city.undo().ok and not Plan.row(city,id).is_empty(),"recycle and restore without earned card "+family)
		var path:=out+"/"+family+".json";var cold:=State.new()
		check(city.save_city(path).ok and cold.load_city(path).ok and cold.placed_landmarks==city.placed_landmarks,"disk cold load without fabricated ledger "+family)
	check(city.harmony_journey==original.get("harmony_journey",{}) and city.era_unlocks==["pastoral"] and city.archive_unlocks.is_empty() and city.growth_memories.is_empty(),"public operations invent no earned card, chapter, era or archive")
	var saved:=city.snapshot();var retained:=saved.duplicate(true)
	var legacy:=saved.duplicate(true);legacy.creative_settings=city.CreationPolicy.Save.defaults("legacy")
	check(not city.restore(legacy).ok and city.snapshot()==retained,"legacy snapshot cannot borrow free build rights")
	var malformed:=saved.duplicate(true);malformed.creative_settings.creation_policy="anything"
	check(not city.restore(malformed).ok and city.snapshot()==retained,"bad policy preserves current work")
	var malformed_history:=saved.duplicate(true);malformed_history.harmony_journey={"traditions":["fake"]}
	check(not city.restore(malformed_history).ok and city.snapshot()==retained,"free access never bypasses ledger validation")
	var duplicate:=saved.duplicate(true);duplicate.placed_landmarks[1].blueprint=duplicate.placed_landmarks[0].blueprint
	check(not city.restore(duplicate).ok and city.snapshot()==retained,"duplicate family remains invalid")
	var overlap:=saved.duplicate(true);overlap.placed_landmarks[1].position=overlap.placed_landmarks[0].position
	check(not city.restore(overlap).ok and city.snapshot()==retained,"overlap remains invalid on cold read")
	var plain:=State.new();plain.initialize_empty();var previous:=plain.snapshot()
	check(not Plan.place(plain,"riverbank",Vector2(-40,-28)).ok and plain.snapshot()==previous,"legacy API still requires explicit conversion")
	check(Plan.available_blueprints(plain.creative_settings,plain.harmony_journey).is_empty(),"empty legacy gains no basic blueprints")
	var converted:=plain.CreationPolicy.convert(plain,out+"/converted.json");var backup:=State.new()
	check(converted.ok and backup.load_city(converted.get("backup","")).ok and not backup.CreationPolicy.is_free(backup),"conversion preserves readable legacy original")
	var converted_site:=Sites.empty_site(plain,"riverbank");var converted_place:=Plan.place(plain,"riverbank",converted_site)
	if not converted_place.ok:print("CONVERSION_PLACE ",converted_place)
	check(converted_place.ok and Legend.unlocked(plain).is_empty(),"converted city gains build access without earned record")
	check(plain.undo().ok and plain.CreationPolicy.is_free(plain) and plain.redo().ok,"Undo cannot undo conversion or basic access")
	var earned:=Sites.fixture();var rights:=Legend.unlocked(earned);var history:Dictionary=earned.harmony_journey.duplicate(true)
	check(rights.size()==4 and Plan.available_blueprints(earned.creative_settings,history).size()==4,"old earned city retains all four historical rights")
	check(Plan.place(earned,"riverbank",Sites.empty_site(earned,"riverbank")).ok and earned.harmony_journey==history and Legend.unlocked(earned)==rights,"earned records remain byte equivalent after basic placement")
	print("FREE_LANDMARK_ACCESS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
