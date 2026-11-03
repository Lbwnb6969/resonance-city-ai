extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Festival=preload("res://scripts/world/city_creation_festival_scenery.gd")
const Ledger=preload("res://scripts/world/city_creation_progression_ledger.gd")
const Lantern=preload("res://scripts/world/city_creation_water_lantern_plan.gd")
const Bunting=preload("res://scripts/visual/city_creation_bunting.gd")
const Roof=preload("res://tests/test_city_creation_bunting_index.gd").RoofView
static func fixture()->Dictionary:
	var city:=State.new();city.initialize_free();var ok:bool=city.add_water([Vector2(-28,-24),Vector2(-19,-24)] as Array[Vector2],2.4,"pond").ok
	for x:float in [-26.,-21.]:
		var row:Dictionary=city.add_house_stroke(Vector2(x,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"}]);ok=ok and row.ok
	return {"city":city,"ok":ok}
static func earn(city)->Dictionary:
	var built:Array=[];var cells:Array=[]
	for level in range(4):cells.append({"x":0,"z":0,"level":level,"kind":"room"})
	for z in range(-37,37,4):
		for x in range(-37,-12,4):
			if built.size()>=100:break
			var result:Dictionary=city.add_house_stroke(Vector2(x,z),cells)
			if result.ok:built.append(result.house_id)
	var earned:=Ledger.collect(city);var removed:=true
	for id:String in built:removed=city.remove_house(id).ok and removed
	return {"ok":earned.ok and built.size()==100 and removed and Festival.unlocked(city),"built":built.size(),"earned":earned}
static func pairs(city)->Array:
	var view:=Roof.new();view.state=city;var result:=Bunting._pairs(city,Bunting._anchors(view));view.free();return result
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(value:bool,label:String)->void:
	checks+=1
	if not value:failures.append(label);push_error(label)
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var f:=fixture();check(f.ok,"real unconnected water-side upper rooms")
	var city:RefCounted=f.city;var original:Dictionary=city.snapshot();check(not Festival.enabled(city) and not original.creative_settings.presentation.has(Festival.FIELD),"old missing presentation key stays absent and off")
	check(not Festival.set_enabled(city,true).ok and city.snapshot()==original,"unearned festival rejects atomically")
	check(city.begin_progression_epoch(out+"/epoch.json").ok,"actual immutable backed level1 epoch")
	check(pairs(city).is_empty(),"ordinary residential upper facades do not invent festive service flags")
	var earned:=earn(city);check(earned.ok and city.houses.size()==2,"one hundred actual four-story house transactions earn retained level4");var account:Dictionary=city.cozy_progression.duplicate(true);var history:Dictionary=city.harmony_journey.duplicate(true)
	var life:=preload("res://scripts/world/city_creation_life.gd").new();root.add_child(life);life.set_process(false);life.setup(city)
	check(Lantern.derive(city).is_empty(),"original unconnected waterfront cannot borrow older market lantern condition")
	var affinity:=preload("res://scripts/audio/city_creation_music_affinity.gd").new();affinity.refresh(city);var inputs:Array=affinity.records.duplicate(true)
	var before:Dictionary=city.snapshot();check(Festival.set_enabled(city,true).ok and Festival.enabled(city) and city.snapshot().schema==before.schema,"explicit optional strict boolean uses existing schema/presentation")
	affinity.refresh(city);check(affinity.records==inputs,"actual music geometry input remains independent of decorative preference")
	life.setup(city);var lanterns:=Lantern.derive(city);var festive_pairs:=pairs(city);check(not lanterns.is_empty() and not festive_pairs.is_empty(),"earned permanent opt-in derives real clear floats and original facing-facade wires without roads")
	for row:Dictionary in lanterns:check(Lantern.clear(city,row.at,[],Lantern.Street.derive(city).piers),"permanent float retains actual wet-ground and object clearance")
	check(city.cozy_progression==account and city.harmony_journey==history and city.houses==before.houses and city.roads==before.roads,"appearance cannot grant XP or rewrite original households/roads")
	var chosen:Dictionary=city.snapshot();check(Festival.set_enabled(city,true).no_op and city.snapshot()==chosen,"repeat selection is a real no-op")
	check(city.undo().ok and not Festival.enabled(city) and city.redo().ok and Festival.enabled(city),"one-transaction Undo and Redo")
	check(city.save_city(out+"/festival.json").ok,"actual disk save");var cold:=State.new();check(cold.load_city(out+"/festival.json").ok and cold.snapshot()==city.snapshot(),"independent cold read preserves optional field and earned ledger")
	life.setup(cold);check(Lantern.derive(cold)==lanterns and pairs(cold)==festive_pairs,"independent cold geometry equals original opt-in plans")
	check(city.CreationPolicy.set_progression_enabled(city,false,out+"/paused.json").ok and Festival.enabled(city),"actual economy pause retains earned permanent choice")
	var prefs:Dictionary=city.creative_settings.presentation.duplicate(true);prefs.automatic_decoration=false;check(city.CreationPolicy.set_preferences(city,{"presentation":prefs}).ok and not Festival.enabled(city) and pairs(city).is_empty() and Lantern.derive(city).is_empty(),"automatic scenery switch hides both reused assets without losing saved choice")
	check(city.creative_settings.presentation[Festival.FIELD] and city.cozy_progression.level>=4,"hidden appearance and qualification remain retained")
	for value:Variant in [1,"true",null]:
		var bad:Dictionary=chosen.duplicate(true);bad.creative_settings.presentation[Festival.FIELD]=value;var reader:=State.new();var empty:Dictionary=reader.snapshot();check(not reader.restore(bad).ok and reader.snapshot()==empty,"malformed presentation value rejects atomically")
	var legacy:=State.new();legacy.initialize();check(not Festival.unlocked(legacy) and Festival.festive(legacy,true) and not Festival.set_enabled(legacy,true).ok,"legacy geometry and progression stay independent")
	life.queue_free();await process_frame;var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"earned":earned,"lanterns":lanterns,"pairs":festive_pairs};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FESTIVAL_SCENERY_CPU ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if report.ok else 1)
