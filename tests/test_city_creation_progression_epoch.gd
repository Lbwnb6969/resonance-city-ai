extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Ledger=preload("res://scripts/world/city_creation_progression_ledger.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
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
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):push_error("isolated session and new evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var city:=State.new();city.initialize_empty();Receipts.initialize(city)
	var built:Array=[]
	for i in range(60):built.append(city.add_house(Vector2(-37+(i%6)*4.5,-30+(i/6)*4.5)))
	check(built.all(func(row):return row.ok),"sixty actual legacy houses fit the west bank")
	check(Receipts.collect(city).earned==120 and city.harmony_journey.harmony_level==2 and city.harmony_journey.pending_draft.size()==3,"real pre-conversion construction earned old level and pending invitation")
	var legacy:Dictionary=city.snapshot()
	check(not city.begin_progression_epoch(out+"/legacy_rejected.json").ok and city.snapshot()==legacy and not FileAccess.file_exists(out+"/legacy_rejected.json"),"legacy never starts a new free epoch implicitly")
	var path:=out+"/converted.json";var converted:Dictionary=city.CreationPolicy.convert(city,path)
	check(converted.ok and FileAccess.file_exists(converted.get("backup","")),"real conversion preserves its own old-cutoff backup")
	var before:Dictionary=city.snapshot();var old:Dictionary=city.harmony_journey.duplicate(true)
	var raw:=FileAccess.get_file_as_bytes(path);var undo_count:int=city._undo.size()
	var opened:Dictionary=city.begin_progression_epoch(path)
	check(opened.ok and not opened.no_op and opened.earned==0,"explicit backed-up first epoch opens with zero historical XP")
	check(city.snapshot().schema==24 and Ledger.valid(city.cozy_progression),"strict version24 ledger is now serialized")
	check(city.cozy_progression.level==1 and city.cozy_progression.xp==0 and city.cozy_progression.receipts.is_empty(),"new epoch does not inherit the old level, balance or pending offer")
	check(city.harmony_journey==old and city._undo.size()==undo_count,"opening preserves all old rights and construction Undo")
	check(FileAccess.get_file_as_bytes(opened.original_backup)==raw and city.Serializer.read(city,opened.backup).ok,"raw target original and validated source backup retained")
	check(FileAccess.get_sha256(opened.backup)==city.cozy_progression.origin_sha256,"epoch source hash names the exact immutable pre-epoch snapshot")
	var backup:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(opened.backup))
	check(not backup.has("cozy_progression") and backup.schema==before.schema,"backup predates the new schema and epoch")
	var old_file:=FileAccess.get_file_as_bytes(path);var epoch:Dictionary=city.cozy_progression.duplicate(true)
	check(city.begin_progression_epoch(path).no_op and city.cozy_progression==epoch and FileAccess.get_file_as_bytes(path)==old_file,"repeated activation is an IO-free same-epoch no-op")
	check(city.undo().ok and city.cozy_progression==epoch,"pre-epoch construction Undo cannot remove the newly committed account")
	check(city.redo().ok and Receipts.collect(city).progression.earned==0 and city.cozy_progression==epoch,"pre-epoch Redo stays behind the initial high-water baseline")
	check(Receipts.collect(city).progression.earned==0,"first collection never replays sixty old houses")
	var added:Dictionary=city.add_house(Vector2(25,15));check(added.ok,"actual post-epoch house built")
	var reward:Dictionary=Receipts.collect(city)
	check(reward.earned==0 and reward.progression.earned==2 and city.cozy_progression.xp==2,"one shared collection pays only the new ledger")
	check(Ledger.collect(city).earned==0 and Receipts.collect(city).progression.earned==0,"direct and polling consumers cannot pay an event twice")
	check(city.harmony_journey.harmony_level==old.harmony_level and city.harmony_journey.harmony_xp==old.harmony_xp and city.harmony_journey.pending_draft==old.pending_draft and city.HarmonyJourney.credits(city.harmony_journey)==1,"old balance, credit and actual pending invitation remain separately claimable")
	var earned:Dictionary=city.cozy_progression.duplicate(true)
	check(city.undo().ok and city.cozy_progression==earned and not city.houses.any(func(h):return h.id==added.house_id),"Undo removes construction and retains the complete earned epoch")
	check(city.redo().ok and Receipts.collect(city).progression.earned==0 and city.cozy_progression==earned,"Redo restores the same identity without farming XP")
	var checkpoint:=out+"/earned.json";check(city.save_city(checkpoint).ok,"new earned ledger saves through the formal serializer")
	var cold:=State.new();var loaded:Dictionary=cold.load_city(checkpoint)
	check(loaded.ok and cold.cozy_progression==earned and Receipts.collect(cold).progression.earned==0,"formal cold opening preserves epoch and consumed receipts without migrating or replaying")
	check(cold.harmony_journey.growth_cutoff==old.growth_cutoff and cold.harmony_journey.pending_draft==old.pending_draft,"cold opening preserves original cutoff and historical pending offer")
	validation(city)
	var no_epoch:=State.new();no_epoch.initialize_free();var untouched:Dictionary=no_epoch.snapshot()
	check(not untouched.has("cozy_progression") and untouched.schema==23,"normal new-city entry keeps its current explicit policy until consumers and UI are ready")
	var badpath:=out+"/unreadable_target.json";var file:=FileAccess.open(badpath,FileAccess.WRITE);file.store_string("original invalid bytes");file.flush();file.close()
	var failed:Dictionary=no_epoch.begin_progression_epoch(badpath)
	check(not failed.ok and no_epoch.snapshot()==untouched and FileAccess.get_file_as_string(badpath)=="original invalid bytes","failed original readback leaves current city and original file intact")
	var blocked:=out+"/blocked_publish.json";check(no_epoch.save_city(blocked).ok,"valid original for a late publication failure")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(blocked+".tmp"))
	var retained:=FileAccess.get_file_as_bytes(blocked);untouched=no_epoch.snapshot()
	failed=no_epoch.begin_progression_epoch(blocked)
	check(not failed.ok and no_epoch.snapshot()==untouched and no_epoch.cozy_progression.is_empty() and FileAccess.get_file_as_bytes(blocked)==retained,"publication failure after immutable backups preserves live state and original bytes")
	var source:=JSON.stringify(untouched,"\t",true,true).sha256_text();var folder:=out+"/废弃/经营新账期/"+source
	var archives:=DirAccess.get_directories_at(folder)
	check(archives.size()==1 and no_epoch.Serializer.read(no_epoch,folder.path_join(archives[0]).path_join("原城市.json")).ok,"failed publication retains its verified source backup for recovery")
	var pre:RefCounted=preload("res://tools/fixtures/city_creation_pre_cutoff_free.gd").fresh();var pre_before:Dictionary=pre.snapshot()
	check(not pre.begin_progression_epoch(out+"/precutoff_rejected.json").ok and pre.snapshot()==pre_before,"pre-cutoff free work must complete the existing backed-up migration first")
	check(city.HarmonyJourney.choose(city,city.harmony_journey.pending_draft[0]).ok and city.HarmonyJourney.credits(city.harmony_journey)==0 and city.cozy_progression==earned,"claiming one actual historical invitation spends only its old credit")
	spatial_checks()
	math_checks()
	fractional_checkpoint_backup()
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"scope":"First-epoch backup/save/accounting regression; toggle UI and normal new-city entry not switched"}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PROGRESSION_EPOCH ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func validation(city:RefCounted)->void:
	var source:Dictionary=city.snapshot();var before:Dictionary=city.snapshot();var cases:Array=[]
	for pair:Array in [["enabled",1],["version",true],["epoch_id","invalid"],["origin_sha256","A".repeat(64)],["started_at",-1],["level",0],["xp",100],["xp_remainder",1.],["baseline",{"unknown/x":1}],["receipts",{"house/x":true}],["inflight_policy","destroy"]]:
		var bad:=source.duplicate(true);bad.cozy_progression[pair[0]]=pair[1];cases.append(bad)
	var bad:=source.duplicate(true);bad.schema=23;cases.append(bad)
	bad=source.duplicate(true);bad.erase("cozy_progression");cases.append(bad)
	bad=source.duplicate(true);bad.cozy_progression.prosperity_enabled=true;cases.append(bad)
	bad=source.duplicate(true);bad.prosperity_enabled=true;cases.append(bad)
	bad=source.duplicate(true);bad.harmony_journey.erase("growth_cutoff");cases.append(bad)
	bad=source.duplicate(true);bad.creative_settings.creation_policy="legacy";cases.append(bad)
	for i in range(cases.size()):check(not city.restore(cases[i]).ok and city.snapshot()==before,"malformed ledger rejected transactionally "+str(i))
	bad=source.duplicate(true);bad.cozy_progression.enabled=false
	var paused:=State.new();check(paused.restore(bad).ok and Ledger.collect(paused).earned==0,"persisted disabled epoch does not accumulate XP")
	paused.initialize_empty();check(paused.cozy_progression.is_empty(),"new legacy initialization clears a previous epoch")
func publish_graph(city:RefCounted)->void:
	var network:RefCounted=preload("res://scripts/world/city_creation_network.gd").new();network.state=city;network._build_graph();city.prepare_regional_echo(network)
func spatial_checks()->void:
	var fixture:=preload("res://tools/fixtures/city_creation_functional_zones_fixture.gd").build();var city:RefCounted=fixture.city
	check(fixture.ok and city.begin_progression_epoch(out+"/spatial_epoch.json").ok,"real preexisting spatial contract opens a backed-up epoch")
	publish_graph(city);var first:=Receipts.collect(city)
	check(first.progression.earned==0 and first.progression.events.is_empty() and city.cozy_progression.baseline.has("chord/clockwork_waltz/functional_city"),"pre-epoch network derivation prevents existing artisan and chord geometry from replaying XP")
	check(is_equal_approx(float(city.functional_benefits().inspiration_multiplier),1.35),"real connected artisan source retains its global nonstacking multiplier")
	check(city.add_house(Vector2(-30,12)).ok,"first actual new house for fractional payout");publish_graph(city)
	var a:=Receipts.collect(city)
	check(a.earned==0 and a.progression.earned==2 and is_equal_approx(city.cozy_progression.xp_remainder,.7),"new epoch owns the first 35 percent fractional remainder")
	check(city.add_house(Vector2(-26,12)).ok,"second actual new house for fractional payout");publish_graph(city)
	var b:=Receipts.collect(city)
	check(b.earned==0 and b.progression.earned==3 and city.cozy_progression.xp==5 and is_equal_approx(city.cozy_progression.xp_remainder,.4),"new epoch carries its own fractional remainder into the next real event")
	check(city.harmony_journey.get("xp_remainder",0.)==0. and city.harmony_journey.harmony_level==1,"new payouts never consume or advance the historical ledger")
func math_checks()->void:
	for level in range(1,7):
		for amount:int in [0,99,100,1000,100000]:
			var policy:={"level":level,"xp":0};var old:=State.HarmonyJourney.default_state();old.harmony_level=level
			State.HarmonyJourney._advance_xp(old,amount);Ledger._advance(policy,amount)
			check(policy.level==old.harmony_level and policy.xp==old.harmony_xp,"bounded binary level arithmetic agrees with existing thresholds")
	var policy:={"level":1,"xp":0};Ledger._advance(policy,Ledger.MAX_INTEGER)
	var steps:int=policy.level-1;var spent:int=steps*100+65*steps*(steps-1)/2
	check(spent+int(policy.xp)==Ledger.MAX_INTEGER and policy.xp<Ledger.threshold(policy.level),"large exact counter settles without a linear level-up loop")
func fractional_checkpoint_backup()->void:
	var city:=State.new();city.initialize_free();check(city.add_house(Vector2(-25,-12)).ok,"real house for fractional resident checkpoint")
	var checkpoint:={"schema":1,"concert":{},"residents":[{"home_id":"h1","destination_id":"h1","stops":["h1"],"position":[-25.,-12.],"phase":1.7*9,"wait":0.,"yaw":0.,"paused":true,"dwell_id":"","service_pending":""}]}
	check(city.set_journey_checkpoint(checkpoint).ok,"valid live-style phase retains its pre-JSON final bits")
	var source:=JSON.stringify(city.snapshot(),"\t",true,true);var path:=out+"/fractional_checkpoint.json"
	check(city.save_city(path).ok,"original checkpoint is written before opening")
	var raw:=FileAccess.get_file_as_bytes(path);var opened:Dictionary=city.begin_progression_epoch(path)
	check(opened.ok,"backed-up epoch accepts actual non-round binary resident phase")
	check(FileAccess.get_file_as_string(opened.get("backup",""))==source and city.cozy_progression.get("origin_sha256")==source.sha256_text(),"exact original bytes and source hash remain immutable despite JSON float decoding")
	check(FileAccess.get_file_as_bytes(opened.get("original_backup",""))==raw,"raw target archive preserves its exact pre-epoch bytes")
	var cold:=State.new();check(cold.load_city(path).ok and cold.cozy_progression.epoch_id==city.cozy_progression.epoch_id and cold.journey_checkpoint.residents[0].phase==JSON.parse_string(source).journey_checkpoint.residents[0].phase,"cold checkpoint agrees with normal validated JSON decoding")
