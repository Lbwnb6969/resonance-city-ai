extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Rewards=preload("res://scripts/world/city_creation_archive_rewards.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var out:="res://验证记录/M84/free_finish_access_20261030/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var city:=State.new();city.initialize_free();check(city.add_house(Vector2(-25,-12)).ok,"public empty free house")
	var baseline:=city.snapshot();var first:Dictionary=city.houses[0].duplicate(true)
	for id:String in city.Growth.FINISHES:
		var before:Dictionary=city.snapshot()
		check(city.finish_available(id) and city.snapshot()==before,"availability is read only "+id)
		check(city.set_house_finish("h1",id).ok and city.houses[0].finish==id,"free public API applies "+id)
		check(city.undo().ok and city.houses[0]==first and city.redo().ok and city.houses[0].finish==id,"UndoRedo preserves actual finish "+id)
		var path:=out+"/"+id+".json";var cold:=State.new()
		check(city.save_city(path).ok and cold.load_city(path).ok and cold.houses==city.houses,"disk cold read without earned history "+id)
		var legacy:=city.snapshot();legacy.creative_settings=city.CreationPolicy.Save.defaults("legacy")
		check(not cold.restore(legacy).ok and cold.houses==city.houses,"legacy cannot borrow free finish permission "+id)
		check(city.set_house_palette("h1",0).ok and city.houses[0]==first,"base palette resets finish "+id)
		check(city.set_house_colors("h1",Color(.3,.4,.5),Color(.6,.5,.4)).ok and city.set_house_finish("h1",id).ok and not city.houses[0].has("custom_colors"),"finish replaces custom color using original API "+id)
		check(city.set_house_palette("h1",0).ok,"restore baseline palette "+id)
	check(city.growth_memories.is_empty() and city.archive_unlocks.is_empty() and city.harmony_journey==baseline.get("harmony_journey",{}) and city.life_progress==baseline.life_progress,"all finishes fabricate no chapter, award, XP or actual event")
	var retained:=city.snapshot()
	for id:String in ["unknown","", "five_chords"]:
		check(not city.finish_available(id) and not Rewards.finish_available(id,[id],[id],true) and not city.set_house_finish("h1",id).ok and city.snapshot()==retained,"unknown finish rejected even in free mode "+id)
	var bad:=retained.duplicate(true);bad.houses[0].finish="unknown"
	check(not city.restore(bad).ok and city.snapshot()==retained,"unknown cold finish preserves open world")
	bad=retained.duplicate(true);bad.growth_memories=["nocturne"]
	check(not city.restore(bad).ok and city.snapshot()==retained,"free availability keeps earned chapter order validation")
	bad=retained.duplicate(true);bad.archive_unlocks=["unknown"]
	check(not city.restore(bad).ok and city.snapshot()==retained,"free availability keeps archive enum validation")
	bad=retained.duplicate(true);bad.creative_settings.creation_policy="bad"
	check(not city.restore(bad).ok and city.snapshot()==retained,"bad policy still fails")
	bad=retained.duplicate(true);bad.schema=19;bad.houses[0].finish="opal"
	check(not city.CreationPolicy.data_is_free(bad) and not city.restore(bad).ok and city.snapshot()==retained,"old schema cannot inject free settings")
	var classic:=State.new();classic.initialize_empty();check(classic.add_house(Vector2(-25,-12)).ok,"public classic house")
	for id:String in classic.Growth.FINISHES:check(not classic.finish_available(id) and not classic.set_house_finish("h1",id).ok,"unearned legacy stays locked "+id)
	var converted:=classic.CreationPolicy.convert(classic,out+"/converted.json");var original:=State.new()
	check(converted.ok and original.load_city(converted.get("backup","")).ok and not original.CreationPolicy.is_free(original) and not original.finish_available("opal"),"conversion backup retains original locked legacy")
	check(classic.set_house_finish("h1","opal").ok and classic.undo().ok and classic.CreationPolicy.is_free(classic) and classic.redo().ok,"converted city applies and undoes free finish")
	check(classic.growth_memories.is_empty() and classic.archive_unlocks.is_empty(),"conversion availability creates no award")
	print("FREE_FINISH_ACCESS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
