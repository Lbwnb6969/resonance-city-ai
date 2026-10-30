extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_free_signature_fixture.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var out:="res://验证记录/M84/free_signature_access_20261030/cpu"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var city:=Fixture.fresh();var baseline:Dictionary=city.snapshot()
	for kind:String in city.Signatures.IDS:
		var at:=Fixture.site(city,kind);var before:Dictionary=city.snapshot()
		check(at!=Vector2.INF and city.Signatures.available(city,kind) and city.snapshot()==before,"basic permission and valid site without history "+kind)
		var preview:Dictionary=city.preview_signature(kind,at)
		check(preview.ok and city.snapshot()==before,"public preview is read only "+kind)
		var result:Dictionary=city.place_signature(kind,at);check(result.ok,"new free public placement "+kind)
		if not result.ok:continue
		var id:String=result.house_id;var house:Dictionary=city.houses[city._house_index(id)].duplicate(true)
		check(not city.place_signature(kind,at+Vector2(8,0)).ok,"unique signature remains enforced "+kind)
		check(city.undo().ok and city._house_index(id)<0 and city.redo().ok and city.houses[city._house_index(id)]==house,"UndoRedo retains full fixed identity "+kind)
		var cold:=State.new();var path:=out+"/"+kind+".json"
		check(city.save_city(path).ok and cold.load_city(path).ok and cold.houses==city.houses and cold.signature_unlocks.is_empty(),"disk cold restore with no earned milestone "+kind)
		var moving:=Fixture.site(city,kind,id);check(city.place_signature(kind,moving,id).ok and city.houses[city._house_index(id)].cells==house.cells,"move retains all room IDs "+kind)
		check(city.remove_house(id).ok and city.undo().ok and city._house_index(id)>=0,"recycle and Undo preserve unearned access "+kind)
	check(city.houses.size()==6 and city.signature_unlocks.is_empty() and city.growth_memories.is_empty() and city.archive_unlocks.is_empty() and city.era_unlocks==["pastoral"] and city.life_progress==baseline.life_progress,"six actual landmarks coexist without fabricating milestone, era or activity")
	var retained:Dictionary=city.snapshot();var bad:Dictionary=retained.duplicate(true);bad.creative_settings=city.CreationPolicy.Save.defaults("legacy")
	check(not city.restore(bad).ok and city.snapshot()==retained,"legacy cannot borrow free structural permissions")
	bad=retained.duplicate(true);bad.houses[0].signature="unknown"
	check(not city.restore(bad).ok and city.snapshot()==retained,"unknown signature still rejected")
	bad=retained.duplicate(true);bad.signature_unlocks=["music_academy"]
	check(not city.restore(bad).ok and city.snapshot()==retained,"free build availability does not legitimize false milestone history")
	bad=retained.duplicate(true);bad.houses[0].role="bakery"
	check(not city.restore(bad).ok and city.snapshot()==retained,"fixed role validation remains")
	bad=retained.duplicate(true);bad.houses[0].cells.pop_back()
	check(not city.restore(bad).ok and city.snapshot()==retained,"fixed cell structure validation remains")
	var fresh:=Fixture.fresh()
	check(not fresh.preview_signature("watermill",Vector2(-30,20)).ok and not fresh.preview_signature("floating_amphitheater",Vector2(-30,20)).ok,"free permission preserves waterwheel and stage waterfront geometry")
	check(not fresh.preview_signature("bell_keep",Vector2(-40,-40)).ok and not fresh.Signatures.available(fresh,"unknown"),"bounds and enums remain strict")
	var legacy:=State.new();legacy.initialize_empty();var before:Dictionary=legacy.snapshot()
	for kind:String in legacy.Signatures.IDS:check(not legacy.Signatures.available(legacy,kind) and not legacy.place_signature(kind,Vector2(-25,-12)).ok and legacy.snapshot()==before,"unearned legacy still locked "+kind)
	var converted:Dictionary=legacy.CreationPolicy.convert(legacy,out+"/converted.json");var original:=State.new()
	check(converted.ok and original.load_city(converted.get("backup","")).ok and not original.Signatures.available(original,"bell_keep"),"conversion backup retains original legacy lock")
	check(legacy.place_signature("bell_keep",Vector2(-25,-12)).ok and legacy.signature_unlocks.is_empty() and legacy.undo().ok and legacy.CreationPolicy.is_free(legacy) and legacy.redo().ok,"converted free places and undoes without earned record")
	print("FREE_SIGNATURE_ACCESS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
