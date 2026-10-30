extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Rewards=preload("res://scripts/world/city_creation_archive_rewards.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var out:="res://验证记录/M84/free_mode_access_20261030/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var city:=State.new();city.initialize_free();check(city.add_house(Vector2(-25,-12)).ok,"public free house")
	var baseline:=city.snapshot()
	for id:String in Rewards.MODES:
		var before:Dictionary=city.snapshot()
		check(Rewards.mode_available(id,[],true) and not Rewards.mode_available(id,[]) and city.snapshot()==before,"free permission is separate and read only "+id)
		check(city.set_music_mode(id).ok and city.music_mode==id and Palette.for_city(city)==(8 if id=="gong_pentatonic" else 9),"public mode uses actual palette index "+id)
		var path:=out+"/"+id+".json";var cold:=State.new()
		check(city.save_city(path).ok and cold.load_city(path).ok and cold.music_mode==id and cold.archive_unlocks.is_empty(),"disk cold mode without award "+id)
		check(city.undo().ok and city.music_mode.is_empty() and city.redo().ok and city.music_mode==id,"UndoRedo retains selected key "+id)
		var locked:=city.snapshot();locked.creative_settings=city.CreationPolicy.Save.defaults("legacy")
		check(not cold.restore(locked).ok and cold.music_mode==id,"legacy cold snapshot cannot borrow free mode "+id)
		check(city.set_music_mode("").ok and city.music_mode.is_empty(),"neutral mode remains available "+id)
	check(city.archive_unlocks.is_empty() and city.growth_memories.is_empty() and city.harmony_journey==baseline.get("harmony_journey",{}) and city.life_progress==baseline.life_progress,"mode selection fabricates no award, chapter, XP or activity")
	var retained:=city.snapshot()
	for invalid:String in ["unknown","lydian","8","../../escape"]:
		check(not Rewards.mode_available(invalid,[],true) and not city.set_music_mode(invalid).ok and city.snapshot()==retained,"unknown and unconnected modes rejected "+invalid)
		var bad:=retained.duplicate(true);bad.music_mode=invalid
		check(not city.restore(bad).ok and city.snapshot()==retained,"unknown cold mode preserves open city "+invalid)
	var bad:=retained.duplicate(true);bad.music_mode="gong_pentatonic";bad.creative_settings.creation_policy="bad"
	check(not city.restore(bad).ok and city.snapshot()==retained,"bad policy rejected before publication")
	bad=retained.duplicate(true);bad.music_mode="gong_pentatonic";bad.archive_unlocks=["unknown"]
	check(not city.restore(bad).ok and city.snapshot()==retained,"free mode never bypasses archive validation")
	bad=retained.duplicate(true);bad.music_mode="gong_pentatonic";bad.schema=19
	check(not city.restore(bad).ok and city.snapshot()==retained,"schema19 cannot inject free policy")
	var classic:=State.new();classic.initialize_empty();check(classic.add_house(Vector2(-25,-12)).ok,"public legacy house")
	for id:String in Rewards.MODES:check(not classic.set_music_mode(id).ok,"unearned legacy mode remains locked "+id)
	var converted:=classic.CreationPolicy.convert(classic,out+"/converted.json");var original:=State.new()
	check(converted.ok and original.load_city(converted.get("backup","")).ok and not original.CreationPolicy.is_free(original) and not original.set_music_mode("gong_pentatonic").ok,"converted original keeps real legacy policy and locks")
	check(classic.set_music_mode("impressionist_major7").ok and classic.archive_unlocks.is_empty() and classic.undo().ok and classic.CreationPolicy.is_free(classic) and classic.redo().ok,"converted city chooses/undoes/redoes without award")
	for id:String in Rewards.MODES:
		var earned:=State.new();earned.initialize_empty();earned.apply_archive_unlocks([Rewards.MODES[id]])
		check(earned.set_music_mode(id).ok and State.new().restore(earned.snapshot()).ok and earned.archive_unlocks==[Rewards.MODES[id]],"earned legacy key and receipt remain valid "+id)
	print("FREE_MODE_ACCESS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
