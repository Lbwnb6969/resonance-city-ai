extends RefCounted
const SOLO_ROTATION=["air","terrace","wood_weave","wood_sylvan"]
static func solo(clock:float,phrase:int)->String:
	return SOLO_ROTATION[posmod(floori(maxf(0.,clock)/24.)+(1 if phrase==5 else 0),4)]
static func taper(clock:float)->float:
	var at:=fposmod(maxf(0.,clock),24.)
	return -2.5*smoothstep(22.8,23.35,at)*(1.-smoothstep(23.8,24.,at))
static func gain(track:String,score:Dictionary,clock:float)->float:
	if float(score.targets.get(track,-60.))<=-55.:return 0.
	var db:float=0. if track==str(score.get("lead_track","")) else taper(clock)
	var season:String=score.get("cadence_season","");var night:bool=score.get("cadence_night",false)
	if (night or season=="autumn_gold") and track in ["air","terrace"]:db+=.8
	elif (not night or season=="sun_shower") and track in ["foundation","wood_deep"]:db+=.5
	return db+preload("res://scripts/world/city_creation_season_moment.gd").gain(track,season,int(score.get("cadence_light",2 if night else 0)),clock,float(score.get("cadence_moment_start",0.)))
static func source(family:String,records:Dictionary,acoustic,score:Dictionary)->String:
	var id:String=score.source_ids.get(family,score.get("source_id",""))
	if family in ["air","terrace"]:
		return id if float(score.targets.get(family,-60.))> -38. and records.has(id) and acoustic.focus_weight(id)>0. else ""
	var best:=0.;var result:=""
	for key:String in acoustic.focus_ids:
		var row:Dictionary=records[key]
		if row.get("era_theme","pastoral")!="pastoral" or int(row.get("cluster_size",1))<3:continue
		if row.get("style","warm")!={"wood_weave":"weave","wood_sylvan":"sylvan"}[family]:continue
		var weight:float=acoustic.focus_weight(key)
		if weight>best:best=weight;result=key
	return result
