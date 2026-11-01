extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Opening=preload("res://scripts/ui/city_creation_new_city.gd")
const Ledger=preload("res://scripts/world/city_creation_progression_ledger.gd")
class Owner:
	extends Node3D
	var state:RefCounted
	var persistence:=true
	var save_blocked:=false
	var SAVE_PATH:=""
	var collection_directory:=""
var checks:=0
var failures:Array=[]
var out:=""
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):push_error("new isolated evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var owner:=Owner.new();owner.SAVE_PATH=out+"/active.json";owner.collection_directory=out+"/works";owner.state=State.new();owner.state.initialize_free()
	var cutoff:Dictionary=owner.state.harmony_journey.duplicate(true);Opening.startup(owner)
	var result:Dictionary=owner.get_meta("new_city_opening",{})
	check(result.get("ok",false) and owner.state.cozy_progression.enabled and owner.state.snapshot().schema==24,"fresh startup automatically creates enabled schema24 account")
	check(FileAccess.file_exists(owner.SAVE_PATH) and FileAccess.file_exists(result.backup) and owner.state.Serializer.read(owner.state,result.backup).ok,"startup saves active file after independently readable backup")
	check(owner.state.harmony_journey==cutoff and owner.state.cozy_progression.xp==0,"fresh opening preserves cutoff and issues no old rewards")
	check(owner.state.add_house(Vector2(-20,-15)).ok and Ledger.collect(owner.state).earned==2,"actual first authored building earns new account")
	check(owner.state.undo().ok and owner.state.redo().ok and Ledger.collect(owner.state).earned==0,"fresh account UndoRedo cannot farm XP")
	check(owner.state.CreationPolicy.set_progression_enabled(owner.state,false,owner.SAVE_PATH).ok,"pause current active save")
	var cold:=State.new();check(cold.load_city(owner.SAVE_PATH).ok,"restart loads saved paused epoch")
	owner.state=cold;var before:Dictionary=cold.snapshot();var raw:=FileAccess.get_file_as_bytes(owner.SAVE_PATH);Opening.startup(owner)
	check(cold.snapshot()==before and not cold.cozy_progression.enabled and FileAccess.get_file_as_bytes(owner.SAVE_PATH)==raw,"restart never resets or resumes paused account")
	for legacy:bool in [false,true]:
		owner.state=State.new()
		if legacy:owner.state.initialize_empty()
		else:owner.state.initialize_free()
		owner.SAVE_PATH=out+("/legacy.json" if legacy else "/old_free.json");check(owner.state.save_city(owner.SAVE_PATH).ok,"save old startup fixture")
		before=owner.state.snapshot();raw=FileAccess.get_file_as_bytes(owner.SAVE_PATH);Opening.startup(owner)
		check(owner.state.snapshot()==before and owner.state.cozy_progression.is_empty() and FileAccess.get_file_as_bytes(owner.SAVE_PATH)==raw,"existing old city does not auto-open or change file")
	owner.SAVE_PATH=out+"/invalid.json";FileAccess.open(owner.SAVE_PATH,FileAccess.WRITE).store_string("invalid original");raw=FileAccess.get_file_as_bytes(owner.SAVE_PATH);Opening.startup(owner)
	check(FileAccess.get_file_as_bytes(owner.SAVE_PATH)==raw and owner.state.cozy_progression.is_empty(),"unreadable existing original is never overwritten by fresh policy")
	owner.state=State.new();owner.state.initialize_free();owner.SAVE_PATH=out+"/blocked";DirAccess.make_dir_absolute(owner.SAVE_PATH);before=owner.state.snapshot();Opening.startup(owner)
	check(owner.save_blocked and owner.state.snapshot()==before and not owner.get_meta("new_city_opening").ok,"failed default account keeps original city and blocks autosave")
	owner.persistence=false;owner.save_blocked=false
	check(Opening.path_for(owner,true).begins_with(out+"/works/"),"isolated default path stays in assigned evidence works")
	owner.collection_directory="user://personal_works";check(Opening.path_for(owner).begins_with("res://验证记录/"),"unset isolated works never writes personal collection")
	owner.collection_directory=out+"/works";var biome:=State.new();check(biome.CreationPolicy.initialize_biome(biome,biome.Biomes.IDS[0]).ok,"new biome recipe")
	var opening:=Opening.begin(biome,owner);check(opening.ok and biome.cozy_progression.enabled and Ledger.collect(biome).earned==0,"new biome defaults enabled with authored seed events baselined")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	owner.free();var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("NEW_CITY ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
