extends RefCounted
## Settle-before-close and same-epoch resume, backed up before publishing.
const Ledger=preload("res://scripts/world/city_creation_progression_ledger.gd")
const Pause=preload("res://scripts/world/city_creation_economy_pause.gd")
const Backup=preload("res://scripts/world/city_creation_progression_backup.gd")
static func set_enabled(city:RefCounted,enabled:Variant,path:String)->Dictionary:
	if not enabled is bool:return city._fail("经营启停必须是明确布尔值")
	if city.cozy_progression.is_empty():return city._fail("请先主动建立新经营账期")
	if city.cozy_progression.enabled==enabled:return {"ok":true,"no_op":true,"epoch_id":city.cozy_progression.epoch_id,"earned":0}
	var life:=Pause.owner(city)
	if life!=null and not Pause.ready(life):return {"ok":false,"retry_after_geometry":true,"message":"街道变更尚未发布，接合后再更改经营"}
	var checkpoint:Dictionary=life.checkpoint(false) if life!=null else city.journey_checkpoint.duplicate(true)
	var before:Dictionary=city.snapshot();before.journey_checkpoint=checkpoint
	var candidate:RefCounted=city.get_script().new();var restored:Dictionary=candidate.restore(before)
	if not restored.ok:return restored
	var archive:=Backup.create(city,before,path,"经营启停")
	if not archive.ok:return archive
	var network:RefCounted=load("res://scripts/world/city_creation_network.gd").new()
	network.state=candidate;network._build_graph();candidate.prepare_regional_echo(network)
	var settled:={"ok":true,"earned":0,"events":{}}
	if enabled:Ledger.skip_counts(candidate,candidate.cozy_progression)
	else:
		settled=Ledger.collect(candidate)
		if not settled.ok:return settled
	candidate.cozy_progression.enabled=enabled
	if not enabled:Ledger.skip_counts(candidate,candidate.cozy_progression)
	candidate.revision+=1
	var saved:Dictionary=candidate.save_city(path)
	if not saved.ok:return saved
	city.cozy_progression=candidate.cozy_progression.duplicate(true);city.journey_checkpoint=checkpoint.duplicate(true)
	city.revision=candidate.revision;city.dirty=false;city.life_progress_dirty=false
	if life!=null and not enabled:life._budget_delta=0.
	if life!=null and enabled:
		life._sync();life._sync_people()
		life.set_meta("progression_resume_delta",true)
	return {"ok":true,"no_op":false,"enabled":enabled,"epoch_id":city.cozy_progression.epoch_id,"earned":settled.earned,"events":settled.events,"path":path,"backup":archive.backup,"original_backup":archive.original_backup}
