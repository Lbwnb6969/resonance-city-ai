extends RefCounted
const Rewards=preload("res://scripts/world/city_creation_archive_rewards.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
static func grant(city:RefCounted,awards:Array)->bool:
	if city.harmony_journey.has("growth_cutoff"):return false
	if not Rewards.heritage_available(awards) or city.biome_seed.is_empty():return false
	if city.houses.any(func(h):return not h.has("signature")):return false
	Receipts.initialize(city)
	var journey:Dictionary=city.harmony_journey
	if int(journey.get("heritage_credit",0))>0 or journey.receipts.has("heritage/draft"):return false
	city.apply_archive_unlocks(awards)
	journey["heritage_credit"]=1;journey.receipts["heritage/draft"]=1
	journey.pending_draft=Journey.roll_inspiration_draft(journey,1,JSON.stringify(city.biome_seed).hash(),city.era_unlocks)
	city.dirty=true;city.life_progress_dirty=true
	return true

