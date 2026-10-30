extends RefCounted
## Read the existing ledgers without initializing offers or collecting receipts.
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const Scores=preload("res://scripts/world/city_creation_score_modifiers.gd")
const Spatial=preload("res://scripts/world/city_creation_functional_benefits.gd")
const Synergy=preload("res://scripts/world/city_creation_synergy_buffs.gd")
const Samples=preload("res://scripts/world/city_creation_inspiration_samples.gd")
static func report(city:RefCounted)->Dictionary:
	var journey:Dictionary=city.harmony_journey
	var catalog:=Journey.cards()
	var result:={"cards":[],"chords":[],"credits":Journey.credits(journey),"pending":journey.get("pending_draft",[]).duplicate(),"legacy_invitations":[],"level":int(journey.get("harmony_level",1)),"xp":int(journey.get("harmony_xp",0)),"xp_remainder":float(journey.get("xp_remainder",0.)),"inspiration_multiplier":1.}
	for id:String in catalog:
		var learned:bool=id in journey.get("traditions",[])
		var charter:bool=id in city.era_modifiers
		if not learned and not charter:continue
		var card:Dictionary=catalog[id]
		result.cards.append({"id":id,"name":card.name,"text":card.text,"rank":int(journey.get("ranks",{}).get(id,1 if learned else 0)),"rarity":int(journey.get("rarity_ranks",{}).get(id,0)),"charter":charter,"sample":id in Samples.IDS and int(journey.get("ranks",{}).get(id,0))>=2})
	for era:String in Scores.ERAS:
		if era in city.era_unlocks and int(journey.get("receipts",{}).get("legacy_charter/"+era,0))>0 and Scores.selected(city,era).is_empty():result.legacy_invitations.append(era)
	var active:Array=city.synergy_buffs().active_chords
	for id:String in Synergy.CHORD_NAMES:
		var receipts:Array=[]
		for key:String in journey.get("receipts",{}):
			if key.begins_with("chord/"+id+"/") and int(journey.receipts[key])>0:receipts.append(key)
		result.chords.append({"id":id,"name":Synergy.CHORD_NAMES[id],"active":id in active,"recorded":not receipts.is_empty()})
	if city.CreationPolicy.is_free(city):result.inspiration_multiplier=Spatial.for_city(city).inspiration_multiplier
	return result
