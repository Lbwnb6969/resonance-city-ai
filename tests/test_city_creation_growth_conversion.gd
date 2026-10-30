extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_growth_conversion_fixture.gd")
const State=Fixture.State
const Receipts=Fixture.Receipts
const Journey=Fixture.Journey
const Benefits=preload("res://scripts/world/city_creation_functional_benefits.gd")
const Unified=preload("res://scripts/world/city_creation_unified_rewards.gd")
const Quest=preload("res://tools/fixtures/city_creation_vignette_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var out:="res://验证记录/M84/growth_conversion_20261030/cpu"
var checks:=0
var failures:Array=[]
class FailedSave extends State:
	func save_city(_path:String=DEFAULT_PATH)->Dictionary:return {"ok":false,"message":"injected write failure"}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func economic(city)->Array:
	return [city.harmony_journey.harmony_xp,city.harmony_journey.harmony_level,city.harmony_journey.get("xp_remainder",0.),Journey.credits(city.harmony_journey),city.harmony_journey.pending_draft.duplicate(),city.harmony_journey.get("draft_rarities",{}).duplicate()]
func run()->void:
	var began:=Time.get_ticks_msec();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var city:=Fixture.legacy_pending();var before:Dictionary=city.snapshot();var pending:Array=city.harmony_journey.pending_draft.duplicate();var metadata:Array=[city.harmony_journey.draft_serial,city.harmony_journey.draft_rarities.duplicate()]
	var expected:=State.new();check(expected.restore(before).ok,"independent pre-cutoff city restored");var old:Dictionary=Receipts.collect(expected);Unified.initialize(expected)
	check(old.earned==4 and Journey.credits(expected.harmony_journey)==1,"two actual uncollected houses own exactly four old XP")
	check(city.save_city(out+"/target.json").ok,"actual old target saved");var target:=FileAccess.get_file_as_bytes(out+"/target.json")
	var result:Dictionary=city.CreationPolicy.convert(city,out+"/target.json")
	check(result.ok and city.harmony_journey.growth_cutoff.source=="converted_legacy","explicit conversion commits a separate versioned cutoff")
	var actual:Dictionary=city.harmony_journey.duplicate(true);actual.erase("growth_cutoff")
	check(actual==expected.harmony_journey,"one-time settlement equals independent original collector including exact old counters")
	check(city.harmony_journey.pending_draft==pending and [city.harmony_journey.draft_serial,city.harmony_journey.draft_rarities]==metadata,"original invitation, serial and rarity stay byte-equivalent")
	var backup:=State.new();check(backup.load_city(result.backup).ok and backup.snapshot()==before and FileAccess.get_file_as_bytes(result.original_backup)==target,"conversion retains cold-readable pre-settlement city and original target bytes")
	var cut:=economic(city)
	check(city.add_house(Vector2(-29,-14)).ok and Receipts.collect(city).earned==0 and economic(city)==cut,"post-cutoff real construction cannot earn XP or use old remainder")
	check(city.undo().ok and city.redo().ok and economic(city)==cut and city.harmony_journey.has("growth_cutoff"),"geometry history preserves cutoff and existing invitation")
	var ledger:Dictionary=city.harmony_journey.duplicate(true)
	check(Benefits.award_xp(city,999.).earned==0 and city.harmony_journey==ledger,"normal direct city XP API cannot assert an old reward")
	check(not Journey.add_harmony_xp(city.harmony_journey,999,74001,city.era_unlocks).leveled_up and city.harmony_journey==ledger,"raw dictionary XP API cannot restart normal growth")
	check(city.CreationPolicy.convert(city,out+"/again.json").get("no_op",false) and city.harmony_journey==ledger,"repeat conversion never settles new events")
	var reader:=State.new();check(city.save_city(out+"/cut.json").ok and reader.load_city(out+"/cut.json").ok and reader.harmony_journey==ledger and Receipts.collect(reader).earned==0,"cold reconstruction preserves cutoff and cannot settle post-cutoff events")
	check(Journey.choose(city,pending[0]).ok and Journey.credits(city.harmony_journey)==0,"actual original credit can still be redeemed")
	check(city.undo().ok and city.harmony_journey.pending_draft==pending and Journey.credits(city.harmony_journey)==1 and city.redo().ok and Journey.credits(city.harmony_journey)==0,"choice Undo/Redo restores only the same historic credit")
	var failed:=FailedSave.new();check(failed.restore(before).ok,"write-failure city restored");failed.dirty=true;failed.life_progress_dirty=true
	var retained:Dictionary=failed.snapshot();var history:Array=[failed._undo.duplicate(true),failed._redo.duplicate(true),failed._wish_epoch]
	var retained_target:=FileAccess.get_file_as_bytes(out+"/target.json")
	check(not failed.CreationPolicy.convert(failed,out+"/target.json").ok and failed.snapshot()==retained and failed.dirty and failed.life_progress_dirty and [failed._undo,failed._redo,failed._wish_epoch]==history,"failed publication rolls back settlement, cutoff, policy, revision, flags and history")
	check(FileAccess.get_file_as_bytes(out+"/target.json")==retained_target,"failed publication retains original target bytes")
	check(not failed.CreationPolicy.convert(failed,out).ok and failed.snapshot()==retained,"invalid target fails before any settlement")
	legacy_formats(before)
	zero_and_threshold()
	reroll_history(before)
	legacy_charters()
	old_vignette()
	var baseline:Dictionary=reader.snapshot()
	var mutations:Array[Callable]=[
		func(d):d.harmony_journey.growth_cutoff.version=2,
		func(d):d.harmony_journey.growth_cutoff.version=1.5,
		func(d):d.harmony_journey.growth_cutoff.source="unknown",
		func(d):d.harmony_journey.growth_cutoff.extra=true,
		func(d):d.creative_settings.migration_version=0,
		func(d):d.harmony_journey.growth_cutoff.vignette=[],
		func(d):d.harmony_journey.growth_cutoff.vignette={"id":"bad","serial":1,"claimed":false},
		func(d):d.harmony_journey.growth_cutoff.vignette={"id":Quest.Vignettes.IDS[0],"serial":1,"claimed":true},
		func(d):d.creative_settings.creation_policy="legacy";d.creative_settings.migration_version=0,
		func(d):d.schema=19;d.erase("creative_settings");d.erase("placed_landmarks");d.erase("next_landmark_id");d.erase("landmark_high_watermark")]
	for mutate:Callable in mutations:
		var bad:Dictionary=baseline.duplicate(true);mutate.call(bad);check(not reader.restore(bad).ok and reader.snapshot()==baseline,"bad cutoff/version/policy rejects before replacing live city")
	var fresh:=State.new();fresh.initialize_empty();Receipts.initialize(fresh);fresh.add_house(Vector2(-25,-12));check(Receipts.collect(fresh).earned==2 and not fresh.harmony_journey.has("growth_cutoff"),"unconverted legacy keeps original accumulation")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("GROWTH_CONVERSION ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func legacy_formats(before:Dictionary)->void:
	# Valid synthetic archived numeric/offer formats; not fabricated new earnings.
	for missing_metadata:bool in [false,true]:
		var city:=State.new();city.restore(before);var journey:Dictionary=city.harmony_journey
		journey.harmony_level=3;journey.harmony_xp=7;journey.xp_remainder=.7
		check(city.rotate_house("h1",.3).ok,"actual pre-conversion geometry history captured before legacy format adjustment")
		if missing_metadata:journey.erase("draft_rarities");journey.erase("draft_serial")
		check(city._validate_snapshot(city.snapshot()).ok,"valid archived multi-credit numeric format")
		var offer:Array=journey.pending_draft.duplicate();var serial:int=int(journey.get("draft_serial",0));var pity:int=int(journey.receipts.get("prismatic_drought",0));var receipts:Dictionary=journey.receipts.duplicate()
		var converted:Dictionary=city.CreationPolicy.convert(city,out+"/format_"+str(missing_metadata)+".json")
		check(converted.ok and journey.harmony_xp==11 and is_equal_approx(journey.xp_remainder,.7) and Journey.credits(journey)==2,"exact old uncollected event preserves fractional remainder and two credits")
		check(journey.pending_draft==offer and int(journey.get("draft_serial",0))==serial and journey.receipts.get("prismatic_drought",0)==pity and (journey.has("draft_rarities")!=missing_metadata),"migration never rerolls or eagerly fills missing offer metadata")
		var cold:=State.new();check(cold.load_city(out+"/format_"+str(missing_metadata)+".json").ok and cold.harmony_journey==journey,"multi-credit cutoff disk cold reads exact original invitation format")
		var undone:Dictionary=city.undo();var redone:Dictionary=city.redo()
		if journey!=city.harmony_journey:
			for field:Variant in journey.keys()+city.harmony_journey.keys():
				if journey.get(field)!=city.harmony_journey.get(field):print("CUTOFF_UNDO_DIFF ",missing_metadata," ",field," ",JSON.stringify(journey.get(field))," -> ",JSON.stringify(city.harmony_journey.get(field)))
		check(undone.ok and redone.ok and journey==city.harmony_journey and int(city.harmony_journey.get("draft_serial",0))==serial,"pre-conversion geometry history cannot initialize rarity or alter pending invitation")
		check(Journey.choose(city,offer[0]).ok and Journey.credits(city.harmony_journey)==1 and city.harmony_journey.pending_draft.size()==3,"first preserved credit opens next existing-credit offer")
		check(int(city.harmony_journey.receipts.get("draft_slot/1",0))==int(receipts.get("draft_slot/1",0)),"claim with missing rarity uses original offer slot before incrementing rank")
		var next:String=city.harmony_journey.pending_draft[0]
		check(Journey.choose(city,next).ok and Journey.credits(city.harmony_journey)==0 and city.harmony_journey.pending_draft.is_empty(),"all original credits remain redeemable without new growth")
		var empty:=State.new();empty.initialize_empty();empty.add_house(Vector2(-25,-12));empty.add_house(Vector2(-22,-12))
		check(empty.CreationPolicy.convert(empty,out+"/no_journey_"+str(missing_metadata)+".json").ok and empty.harmony_journey.harmony_xp==0 and empty.harmony_journey.harmony_level==1 and Journey.credits(empty.harmony_journey)==0,"pre-journey geometry establishes baseline without retroactive XP")
func old_vignette()->void:
	var city:RefCounted=Quest.start(Quest.Vignettes.IDS[0]);var original:Dictionary=city.harmony_journey.active_vignette.duplicate(true)
	check(city.CreationPolicy.convert(city,out+"/quest.json").ok and city.harmony_journey.active_vignette==original,"uncompleted old letter remains exact across cutoff")
	check(Quest.Vignettes.complete(city,{}).is_empty() and not city.harmony_journey.growth_cutoff.vignette.claimed,"unfinished letter never prepays XP or claims its entitlement")
	var built:=Quest.construct(city);check(built.all(func(r):return r.ok),"actual post-cutoff geometry meets old letter requirements")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	check(Receipts.collect(city).earned==0,"new construction and chord events do not add XP before old letter claim")
	var result:=Quest.Vignettes.complete(city,life.connected_houses)
	check(not result.is_empty() and result.xp==Quest.Vignettes.template(original.id).reward_xp and city.harmony_journey.growth_cutoff.vignette.claimed,"one real old letter claims original XP and records consumption atomically")
	var earned:Dictionary=city.harmony_journey.duplicate(true)
	check(Quest.Vignettes.complete(city,life.connected_houses).is_empty() and Benefits.award_xp(city,100.).earned==0 and city.harmony_journey==earned,"consumed reward and arbitrary normal API cannot pay again")
	check(city.undo().ok and city.redo().ok and city.harmony_journey==earned,"geometry Undo/Redo cannot restore consumed old letter or XP")
	var cold:=State.new();check(city.save_city(out+"/quest_done.json").ok and cold.load_city(out+"/quest_done.json").ok and cold.harmony_journey==earned,"cold save validates consumed old letter and exact blessing/XP history")
	check(not Quest.Vignettes.offer(city) and city.harmony_journey==earned,"cutoff city never offers replacement operating quests")
	life.free()
func zero_and_threshold()->void:
	var city:=State.new();city.initialize_empty();Receipts.initialize(city)
	city.harmony_journey.harmony_xp=99;city.harmony_journey.xp_remainder=.7
	check(city.add_house(Vector2(-25,-12)).ok,"actual final pre-cutoff event for threshold crossing")
	check(city.CreationPolicy.convert(city,out+"/threshold.json").ok and city.harmony_journey.harmony_level==2 and city.harmony_journey.harmony_xp==1 and Journey.credits(city.harmony_journey)==1,"only actual pending difference crosses old threshold into one preserved credit")
	check(city.harmony_journey.pending_draft.size()==3 and not city.harmony_journey.has("draft_rarities") and not city.harmony_journey.has("draft_serial"),"threshold settlement creates valid pending without eagerly assigning rarity/pity")
	var clone:=State.new();check(clone.load_city(out+"/threshold.json").ok and clone.harmony_journey==city.harmony_journey,"newly positive historic credit is immediately cold-valid")
	var old:=State.new();old.initialize_empty();Receipts.initialize(old);Journey.add_harmony_xp(old.harmony_journey,100);old.harmony_journey.erase("draft_rarities");old.harmony_journey.erase("draft_serial");old.harmony_journey.xp_remainder=.7
	var before:Dictionary=old.harmony_journey.duplicate(true)
	check(old.CreationPolicy.convert(old,out+"/no_events.json").ok,"no-difference old pending converted")
	var after:Dictionary=old.harmony_journey.duplicate(true);after.erase("growth_cutoff");after.receipts.erase("unified_rewards/v1")
	check(after==before,"zero settlement leaves exact old XP/fraction/offer and rarity metadata absence")
func reroll_history(before:Dictionary)->void:
	var city:=State.new();city.restore(before);check(city.CreationPolicy.convert(city,out+"/reroll.json").ok,"original invitation cutoff for reroll history")
	check(Journey.Rarity.reroll(city).ok,"original paid reroll still usable after cutoff")
	var offer:Array=city.harmony_journey.pending_draft.duplicate();var metadata:Array=[city.harmony_journey.draft_serial,city.harmony_journey.draft_rarities.duplicate()];var receipts:Dictionary=city.harmony_journey.receipts.duplicate()
	check(city.undo().ok and city.harmony_journey.pending_draft==offer and [city.harmony_journey.draft_serial,city.harmony_journey.draft_rarities]==metadata and city.harmony_journey.receipts==receipts and Journey.Rarity.rerolls_left(city.harmony_journey)==0,"reroll Undo keeps newest paid invitation and consumed budget")
	check(city.redo().ok and city.harmony_journey.pending_draft==offer and city.harmony_journey.receipts==receipts,"reroll Redo creates no new pity/serial/offer")
	check(Journey.choose(city,offer[0]).ok and city.undo().ok and city.harmony_journey.pending_draft==offer and [city.harmony_journey.draft_serial,city.harmony_journey.draft_rarities]==metadata and city.harmony_journey.receipts==receipts,"choice Undo restores newest recorded offer without refunding reroll")
func legacy_charters()->void:
	var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
	check(city.harmony_journey.is_empty() and Unified.Scores.ERAS.all(func(era):return era in city.era_unlocks),"real earned era fixture predates journey and still owns old charter eligibility")
	check(city.CreationPolicy.convert(city,out+"/charters.json").ok and Unified.pending(city)==Unified.Scores.ERAS,"cutoff records all real unclaimed old-era charter invitations")
	for era:String in Unified.Scores.ERAS:
		var id:String=Unified.cards(era)[0]
		check(Unified.choose_legacy(city,era,id).ok and id in city.era_modifiers and Journey.credits(city.harmony_journey)==0,"old charter remains claimable without spending or inventing ordinary credit "+era)
	check(Unified.pending(city).is_empty() and city.undo().ok and Unified.pending(city)==["modern_eco"] and city.redo().ok and Unified.pending(city).is_empty(),"old charter choice Undo/Redo retains original eligibility only")
	var cold:=State.new();check(city.save_city(out+"/charters_done.json").ok and cold.load_city(out+"/charters_done.json").ok and cold.harmony_journey==city.harmony_journey and cold.era_modifiers==city.era_modifiers,"claimed old charters and cutoff remain cold-valid together")
