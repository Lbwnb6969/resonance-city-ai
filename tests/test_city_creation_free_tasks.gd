extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Vignettes=preload("res://scripts/world/city_creation_vignettes.gd")
const Sites=preload("res://scripts/world/city_creation_vignette_sites.gd")
const Search=preload("res://scripts/world/city_creation_vignette_site_worker.gd")
const Pins=preload("res://scripts/ui/city_creation_wish_pins.gd")
const Journey=preload("res://scripts/ui/city_creation_vignette_journey.gd")
const Fixture=preload("res://tools/fixtures/city_creation_vignette_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
class Gallery extends Node:
	var busy:=false
class Host extends Node3D:
	var state:RefCounted
	var gallery:Node
	var life:Node3D
	var messages:Array=[]
	func edit_pending()->bool:return false
	func _message(text:String)->void:messages.append(text)
class SearchOwner extends Node:
	var demo:Node3D
	var replacements:=0
	func replace()->void:replacements+=1
var checks:=0
var failures:Array=[]
var OUT:="res://验证记录/M84/free_task_retirement_20261030/cpu"
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func host(city:RefCounted)->Node3D:
	var value:=Host.new();value.state=city;value.gallery=Gallery.new();value.add_child(value.gallery);root.add_child(value);return value
func network(value:Node3D)->void:
	if value.life!=null:value.life.free()
	value.life=Life.new();value.add_child(value.life);value.life.set_process(false);value.life.setup(value.state)
func convert_free(city:RefCounted,label:String)->void:
	check(city.CreationPolicy.convert(city,OUT+"/"+label+".json").ok,"public isolated conversion "+label)
func wait_search(owner:Node)->void:
	var search:Node=owner.get_node("SiteSearch");var until:=Time.get_ticks_msec()+30000
	while search.worker!=null and Time.get_ticks_msec()<until:await process_frame
	check(search.worker==null,"real worker joined after completion");await process_frame
func run()->void:
	var began:=Time.get_ticks_msec()
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var pins:=Pins.new();var journey:=Journey.new()
	check(pins.offers().is_empty(),"uninitialized typed Array offers are safe");pins.refresh();journey.poll();journey.refresh();journey.replace();journey._process(1.)
	journey.look_at();check(journey.continue_history().status=="waiting","uninitialized manual history entry does not touch UI nodes")
	var city:=State.new();city.initialize_free();check(city.add_house(Vector2(-25,-12)).ok,"real new free house")
	var value:=host(city);pins.demo=value;journey.demo=value;value.add_child(pins);value.add_child(journey)
	pins.set_process(false);journey.set_process(false);var before:Dictionary=city.snapshot()
	for i in range(3):
		pins.offers();pins.refresh();pins._process(60.);journey.poll();journey.replace();journey.refresh();journey._process(60.)
	check(city.snapshot()==before and not city.has_meta("vignette_proposal_cache") and journey.get_node_or_null("SiteSearch")==null,"free public entries neither scan sites nor dispatch hidden offers")
	check(not Vignettes.offer(city) and Sites.proposals(city).is_empty() and Sites._derive_proposals(city).is_empty(),"world entry points also stop free automatic proposals")
	check(pins.elapsed==0. and journey.elapsed==0. and pins.pins.is_empty() and journey.look_until==0,"free timers and old markers stay retired")
	var old_city:=State.new();old_city.initialize_empty();value.state=old_city
	pins.sync_context();journey.sync_context();pins.target={"house_id":"h1"};pins.highlight_left=8.;journey.look_until=Time.get_ticks_msec()+8000
	convert_free(old_city,"visual_context");pins.sync_context();journey.sync_context()
	check(pins.target.is_empty() and pins.highlight_left==0. and journey.look_until==0,"conversion clears old target and manual-look clock immediately")
	value.queue_free();await process_frame
	for transition:String in ["convert","new_city","same_city_restore"]:
		city=State.new();city.initialize_empty();city.add_house(Vector2(-25,-12));value=host(city)
		var owner:=SearchOwner.new();owner.demo=value;value.add_child(owner)
		check(not Search.available(owner,true),"manual legacy search starts actual worker "+transition)
		var search:Node=owner.get_node("SiteSearch")
		if transition=="convert":convert_free(city,"worker_convert");check(not Search.available(owner,true),"free cannot replace in-flight legacy request")
		elif transition=="new_city":value.state=State.new();value.state.initialize_empty()
		else:check(city.restore(city.snapshot()).ok,"restore into same city increments request epoch")
		await wait_search(owner)
		check(not value.state.has_meta("vignette_proposal_cache") and owner.replacements==0 and not search.manual,"obsolete request never publishes/replays into new mode or city "+transition)
		value.queue_free();await process_frame
	city=Fixture.start(Vignettes.IDS[0]);convert_free(city,"retained_quest");value=host(city);network(value)
	journey=Journey.new();journey.demo=value;value.add_child(journey);journey.set_process(false)
	before=city.snapshot();journey.poll();journey._process(60.)
	check(city.snapshot()==before,"free leaves loaded active quest and all earned rights untouched")
	var result:Dictionary=journey.continue_history()
	check(result.status=="progress" and city.snapshot()==before,"explicit read preserves incomplete old conditions without rewards")
	var changes:=Fixture.construct(city);check(not changes.is_empty() and changes.all(func(r):return r.ok),"real free construction can meet retained classic geometry")
	network(value);before=city.snapshot();journey.poll();journey._process(60.)
	check(city.snapshot()==before and not city.harmony_journey.active_vignette.is_empty(),"ready old quest is not silently paid by free polling")
	var expected:=Vignettes.candidates(city,value.life.connected_houses);check(expected.count>=expected.needed and not expected.members.is_empty(),"actual graph and authored new sources satisfy old quest")
	result=journey.continue_history();check(result.status=="claimed" and result.reward.xp==Vignettes.template(Vignettes.IDS[0]).reward_xp,"one explicit read awards the original real reward")
	var earned:Dictionary=city.harmony_journey.duplicate(true);check(journey.continue_history().status=="empty" and city.harmony_journey==earned,"repeated explicit access never reissues receipts")
	check(city.undo().ok and city.redo().ok and city.harmony_journey==earned,"geometry history retains collected historical reward")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok and cold.harmony_journey==earned,"collected history cold restores under existing Schema20")
	value.queue_free();await process_frame
	city=State.new();city.initialize_empty();value=host(city);var owner:=SearchOwner.new();owner.demo=value;value.add_child(owner)
	check(not Search.available(owner),"legacy official entry still schedules");await wait_search(owner)
	check(Search.available(owner) and Vignettes.offer(city),"legacy true production entry still publishes and offers")
	value.queue_free();await process_frame
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FREE_TASKS ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
