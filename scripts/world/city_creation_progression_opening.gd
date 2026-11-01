extends RefCounted
## Explicit first epoch transaction. Normal loads and previews never create one.
const Ledger=preload("res://scripts/world/city_creation_progression_ledger.gd")
const Pause=preload("res://scripts/world/city_creation_economy_pause.gd")
const Backup=preload("res://scripts/world/city_creation_progression_backup.gd")
static func begin(city:RefCounted,path:String)->Dictionary:
	if not city.CreationPolicy.is_free(city) or not city.harmony_journey.has("growth_cutoff"):return city._fail("请先完成自由创作及旧成长截止，再主动建立新账期")
	if not city.cozy_progression.is_empty():return {"ok":true,"no_op":true,"epoch_id":city.cozy_progression.epoch_id}
	var life:=Pause.owner(city)
	if life!=null and not Pause.ready(life):return {"ok":false,"retry_after_geometry":true,"message":"街道变更尚未发布，接合后再建立经营账期"}
	var checkpoint:Dictionary=life.checkpoint(false) if life!=null else city.journey_checkpoint.duplicate(true)
	var before:Dictionary=city.snapshot();before.journey_checkpoint=checkpoint
	var candidate:RefCounted=city.get_script().new();var restored:Dictionary=candidate.restore(before)
	if not restored.ok:return restored
	var archive:=Backup.create(city,before,path,"经营新账期")
	if not archive.ok:return archive
	# Derive the pre-epoch real network once; do not run Life or production.
	var network:RefCounted=load("res://scripts/world/city_creation_network.gd").new()
	network.state=candidate;network._build_graph();candidate.prepare_regional_echo(network)
	candidate.cozy_progression=Ledger.create(candidate,archive.source,archive.operation_id);candidate.revision+=1
	var saved:Dictionary=candidate.save_city(path)
	if not saved.ok:return saved
	city.cozy_progression=candidate.cozy_progression.duplicate(true);city.journey_checkpoint=checkpoint.duplicate(true)
	city.revision=candidate.revision;city.dirty=false;city.life_progress_dirty=false
	return {"ok":true,"no_op":false,"epoch_id":archive.operation_id,"path":path,"backup":archive.backup,"original_backup":archive.original_backup,"earned":0}
