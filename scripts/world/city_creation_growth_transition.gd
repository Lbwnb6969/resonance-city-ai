extends RefCounted
## Called inside the backed-up work transaction, before publishing free policy.
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const Benefits=preload("res://scripts/world/city_creation_functional_benefits.gd")
const Unified=preload("res://scripts/world/city_creation_unified_rewards.gd")
const Cutoff=preload("res://scripts/world/city_creation_growth_cutoff.gd")
static func begin_new(city:RefCounted)->void:
	Receipts.initialize(city)
	Cutoff.record(city.harmony_journey,"new_free")
static func settle(city:RefCounted,source:String)->Dictionary:
	if source not in Cutoff.SOURCES:return city._fail("成长截止来源无效")
	if city.harmony_journey.has("growth_cutoff"):return {"ok":true,"no_op":true,"earned":0}
	var pending:=Receipts.take_events(city)
	var result:=Benefits._award_recorded_xp(city,pending.amount)
	Unified.initialize(city)
	Cutoff.record(city.harmony_journey,source)
	city.dirty=true;city.life_progress_dirty=true
	return {"ok":true,"earned":result.earned,"events":pending.events}
