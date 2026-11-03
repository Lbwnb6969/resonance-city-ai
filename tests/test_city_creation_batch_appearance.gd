extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Batch=preload("res://scripts/world/city_creation_batch_appearance.gd")
const Bar=preload("res://scripts/ui/city_creation_batch_edit_bar.gd")
var checks:=0
var failures:Array=[]
var out:=""
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture()->RefCounted:
	var city:=State.new();city.initialize_free()
	for i in range(6):
		var added:Dictionary=city.add_house(Vector2(-28+i*2.0,-20));assert(added.ok)
		assert(city.add_cell(added.house_id,0,0,1).ok)
		assert(city.add_cell(added.house_id,0,1,0).ok);assert(city.add_cell(added.house_id,0,1,1).ok)
	assert(city.set_house_role("h1","bakery").ok)
	assert(city.set_house_colors("h3",Color("915d57"),Color("5c8586")).ok)
	return city
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var city:=fixture();var ids:Array=city.houses.map(func(h):return h.id)
	var before:Dictionary=city.snapshot();var undo:int=city._undo.size();var revision:int=city.revision
	var plan:=Batch.plan(city,ids,{"kind":"palette","value":2})
	check(plan.changed.size()==5 and plan.protected==["h3"] and plan.skipped.is_empty(),"six-house group protects the exact individually colored home")
	check(city.snapshot()==before and city.revision==revision and city._undo.size()==undo,"real API draft planning never changes author State or history")
	city.houses[0].stock=3;city.houses[0].served=7;var custom:Dictionary=city.houses[2].duplicate(true)
	var result:=Batch.apply(city,plan);check(result.ok and result.appearance_house_ids.size()==5,"palette batch reports all exact fast-path targets")
	check(city.revision==revision+1 and city._undo.size()==undo+1,"confirmation commits exactly one transaction for five homes")
	check(city.houses[0].stock==3 and city.houses[0].served==7,"live business counters changing after preview survive confirmation")
	check(city.houses[2]==custom,"protected home retains every authored and business field")
	check(city.undo().ok and city.houses[0].palette==before.houses[0].palette and city.houses[0].stock==3,"one Undo restores the whole edit while retaining pre-confirmation live counters")
	check(city.redo().ok and city.houses[0].palette==2,"one Redo reapplies the whole edit")
	var full:=Batch.plan(city,ids,{"kind":"palette","value":1},false);check(full.changed.size()==6,"explicit unchecking includes hand-colored home")
	check(Batch.apply(city,full).ok and not city.houses[2].has("custom_colors"),"explicit whole-group palette matches existing individual palette semantics")
	var stale:=Batch.plan(city,ids,{"kind":"palette","value":3},false);city.set_house_name("h1","预览后的新名");var saved:Dictionary=city.snapshot()
	check(not Batch.apply(city,stale).ok and city.snapshot()==saved,"stale draft cannot overwrite later author edits")
	var other:=fixture();saved=other.snapshot();check(not Batch.apply(other,stale).ok and other.snapshot()==saved,"same revision in another city cannot accept old preview")
	var prototype:=Batch.plan(city,ids,{"kind":"architecture","value":"recessed_townhouse"},false);check(prototype.changed.size()==6 and Batch.apply(city,prototype).ok,"all compatible houses use existing prototype API")
	for row:Array in [["windows","timber_shutters"],["dormer","gable_light"],["chimney","brick_twin_pots"],["gable_trim","timber_verge"],["porch","flower_pots"]]:
		var choice:=Batch.plan(city,ids,{"kind":row[0],"value":row[1]},false);check(choice.changed.size()==6 and Batch.apply(city,choice).ok,"existing five-slot intent batches without new schema: "+str(row[0]))
	saved=city.snapshot();var cold:=State.new();var restored:Dictionary=cold.restore(JSON.parse_string(JSON.stringify(saved)));check(restored.ok,"batched existing slot records restore: "+JSON.stringify(restored))
	FileAccess.open(out+"/before_cold.txt",FileAccess.WRITE).store_string(var_to_str(saved));FileAccess.open(out+"/after_cold.txt",FileAccess.WRITE).store_string(var_to_str(cold.snapshot()))
	check(JSON.parse_string(JSON.stringify(cold.snapshot()))==JSON.parse_string(JSON.stringify(saved)),"cold restore preserves every JSON author value despite typed-array and StringName normalization")
	var noop:=Batch.plan(city,ids,{"kind":"porch","value":"flower_pots"},false);revision=city.revision;undo=city._undo.size();check(Batch.apply(city,noop).no_op and city.revision==revision and city._undo.size()==undo,"unchanged group creates no history or revision")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("BATCH_APPEARANCE ",JSON.stringify(report));quit(0 if report.ok else 1)
