extends RefCounted
const Family=preload("res://scripts/world/city_creation_prototype_resonance.gd")
static func conduct(records:Dictionary,score:Dictionary)->Dictionary:
	var result:Dictionary={};var source:String=score.get("source_id","")
	var key:String=records.get(source,{}).get("prototype","")
	# Reuse the actual plucked-string stem; terrace retains its bell harmonics.
	if Family.octave_dyad_db_bonus(key)>0. and not source.is_empty():
		score.targets.wood_weave=maxf(float(score.targets.get("wood_weave",-60.)),-29.)
		score.source_ids.wood_weave=source
	for track:String in score.targets:
		if float(score.targets[track])<=-55.:continue
		var id:String=score.source_ids.get(track,source);var prototype:String=records.get(id,{}).get("prototype","")
		if track in ["terrace","wood_weave"]:result[track]=Family.octave_dyad_db_bonus(prototype)
		if track in ["wood","wood_deep","wood_weave","wood_market","wood_sylvan","renaissance_fugue","clockwork_waltz","modern_symphony"]:
			result[track]=float(result.get(track,0.))+Family.chamber_warmth_db_bonus(prototype)
	return result
