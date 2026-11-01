extends RefCounted
## Only an explicitly disabled epoch pauses economy; old free/legacy keep semantics.
static func paused(city:RefCounted)->bool:
	var policy:Variant=city.get("cozy_progression")
	return policy is Dictionary and not policy.is_empty() and not policy.enabled
static func bind(life:Node3D,city:RefCounted)->void:
	city.set_meta("progression_life",weakref(life))
static func owner(city:RefCounted)->Node3D:
	if not city.has_meta("progression_life"):return null
	var reference:Variant=city.get_meta("progression_life")
	var life:Node3D=reference.get_ref() if reference is WeakRef else null
	return life if life!=null and life.state==city else null
static func retained_homes(city:RefCounted)->Dictionary:
	var result:Dictionary={}
	if not paused(city):return result
	for row:Dictionary in city.journey_checkpoint.get("residents",[]):
		if not row.get("paused",false) or row.has("daily_snapshot") or row.has("cafe_visit"):result[str(row.home_id)]=true
	return result
static func ready(life:Node3D)->bool:
	return not life.budget_sync_pending() and not life._budget_hold and (life.last_revision==life.state.revision or life._signature()==life._network_signature)
