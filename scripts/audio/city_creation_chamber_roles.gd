extends RefCounted
const Score=preload("res://scripts/audio/city_creation_chamber_score.gd")
const Emergence=preload("res://scripts/audio/city_creation_harmonic_emergence.gd")
static func prepare(owner:Node)->Dictionary:
	var cache_key:Array=[owner._daily_phrase,owner.acoustic.revision,owner.concert_active,owner.harmony_mode(),owner.night,owner._concert_phrase() if owner.concert_active else -1,owner.get_meta("legacy_score",false)]
	cache_key.append(preload("res://scripts/audio/city_creation_core_orchestration.gd").key(owner))
	if owner.get_meta("chamber_role_key",[])==cache_key:return owner.get_meta("chamber_roles",{})
	owner.set_meta("chamber_role_key",cache_key)
	var source:=str(owner.emergence.score.get("source_id",""));var leader:=str(owner.emergence.score.get("lead_track",""))
	if owner.concert_active:
		var active:Dictionary=owner._source_for_phrase(owner._concert_phrase());source=str(active.get("source_id",""));leader="concert"
	else:
		var groups:Array=owner.ClusterHarmony.Tide.groups(owner._house_music,owner.acoustic,owner._pluck_city)
		if not groups.is_empty():source=str(groups[0].source);leader=str(groups[0].track)
	# A camera-centred district keeps the melodic line. Conducted phrases can
	# answer in a second district, but texture solos never create another lead.
	if leader not in Emergence.LEADS and leader!="concert":
		var row:Dictionary=owner._house_music.get(source,{})
		leader=owner.ClusterHarmony.Tide.track(row) if not row.is_empty() else ""
	if not owner.concert_active and not leader.is_empty():
		owner.emergence.score.lead_track=leader;owner.emergence.score.source_id=source;owner.emergence.score.source_ids[leader]=source
		owner.emergence.score.targets[leader]=maxf(float(owner.emergence.score.targets.get(leader,-60.)),-13.5)
		var source_row:Dictionary=owner._house_music.get(source,{})
		owner._daily_source_id=source;owner._daily_style=str(source_row.get("style","warm"));owner._daily_district_id=str(source_row.get("district_id",""))
		owner._daily_arrangement=source_row.get("mix",owner.DEFAULT_ARRANGEMENT).duplicate(true);owner._daily_improvement=int(source_row.get("improvement",0))
	var mode:=maxi(0,owner.harmony_mode());var variant:=int(owner.emergence.score.get("variant",0));var roles:Dictionary={};var contributors:Dictionary={}
	var winners:Dictionary={};var ranks:Dictionary={}
	for key:String in Emergence.LEADS:
		if key==leader:continue
		var id:=str(owner.emergence.score.get("source_ids",{}).get(key,""));var family:String=Score.FAMILIES[key]
		var gain:float=float(owner.emergence.score.get("targets",{}).get(key,-60.))
		if owner.concert_active:gain=owner._legacy_target_gain_db(key,true);id=source
		if gain<=-55. or id.is_empty():continue
		var weight:float=owner.acoustic.focus_weight(id)*db_to_linear(gain)
		if not contributors.has(family):contributors[family]=[]
		contributors[family].append(id)
		if weight>float(ranks.get(family,-1.)) or is_equal_approx(weight,float(ranks.get(family,-1.))) and key<str(winners.get(family,"~")):
			winners[family]=key;ranks[family]=weight
	for key:String in owner.STEMS:
		if key==leader:
			var melodic:=key
			if key=="concert":melodic=owner.ClusterHarmony.Tide.track(owner._house_music.get(source,{}))
			var id:="%s/%d"%[melodic,variant]
			if mode>0:id="%d/"%mode+id
			var night:bool=preload("res://scripts/audio/city_creation_camera_orchestration.gd").nocturne(owner)
			if night:id="%d/nocturne"%mode
			roles[key]={"layer":3,"id":id,"source_id":source,"bank":"harmony" if night else "variations","base_id":id,"legato":preload("res://scripts/audio/city_creation_chamber_context.gd").organic(owner._house_music,source)}
		elif key in Emergence.LEADS:
			var family:String=Score.FAMILIES[key]
			roles[key]={"layer":2,"id":"%d/chamber_counter_%s"%[mode,family],"bank":"harmony","active":winners.get(family,"")==key,"contributors":contributors.get(family,[])}
		elif key in ["foundation","air","terrace"]:roles[key]={"layer":1 if key=="foundation" else 2,"id":"%d/%s"%[mode,key],"bank":"harmony","active":true}
		else:roles[key]={"layer":0,"active":false}
	preload("res://scripts/audio/city_creation_score_sample_routing.gd").apply(owner,roles,leader,mode,variant)
	preload("res://scripts/audio/city_creation_core_orchestration.gd").apply(owner,roles,leader,mode)
	var result:={"lead_track":leader,"source_id":source,"roles":roles,"contributors":contributors,"mode":mode,"variant":variant}
	owner.set_meta("chamber_roles",result);return result
static func desired(owner:Node,key:String,original:String)->String:
	var row:Dictionary=owner.get_meta("chamber_roles",{}).get("roles",{}).get(key,{})
	if row.get("legato",false):row.id=preload("res://scripts/audio/city_creation_chamber_legato.gd").request(owner,str(row.base_id))
	return str(row.get("id",original))
static func gain(owner:Node,key:String,original:float)->float:
	var row:Dictionary=owner.get_meta("chamber_roles",{}).get("roles",{}).get(key,{})
	if row.is_empty():return original
	if not row.get("active",true) or row.get("layer",0)==0:return -80.
	if row.get("id","").begins_with("core1/") and row.get("role","") in ["foundation","pulse","answer"]:original=maxf(original,-19. if row.role=="foundation" else -24. if row.role=="pulse" else -28.)
	var active:=str(owner._variation_active.get(key,""))
	if owner._variation_pending.has(key) and not active.is_empty():
		var melodic:bool=key in Emergence.LEADS+["concert"] and not "chamber_counter_" in active
		if (int(row.get("layer",0))==3)==melodic:return original
	if active!=str(row.get("id","")) and not (row.get("legato",false) and active==str(row.get("base_id",""))):return -80.
	return original+float(row.get("gain_offset",0.))
static func reconstruction(city:RefCounted,view:Dictionary,catalog:Dictionary,acoustic:RefCounted,score:Dictionary,mode:int)->Dictionary:
	var context:Node=load("res://scripts/audio/city_creation_music.gd").new()
	context._pluck_city=city;context._house_music=catalog.houses;context.acoustic=acoustic;context.emergence.score=score;context._biome_mode=mode;context._daily_phrase=0;context.night=int(view.get("light_phase",0))==2
	var plan:=prepare(context);var tracks:Dictionary={};var camera=preload("res://scripts/audio/city_creation_camera_orchestration.gd")
	for key:String in context.STEMS:
		var row:Dictionary=plan.roles[key];var bank:=str(row.get("bank","harmony"));var id:=str(row.get("id","%d/concert"%mode))
		if row.get("legato",false):bank="harmony";id="chamber_legato/"+str(row.base_id)
		var db:=camera.gain_for(score,key,float(score.targets.get(key,-60.)),float(view.get("zoom",25.)),camera.nocturne(context))-2.
		if not row.get("active",true) or row.layer==0:db=-60.
		tracks[key]={"bank":bank,"key":id,"db":db}
	context.free();return tracks
static func can_lead(owner:Node,key:String,id:String)->bool:
	var roles:Dictionary=owner.get_meta("chamber_roles",{}).get("roles",{})
	if int(roles.get(key,{}).get("layer",0))!=3:return true
	for other:String in owner._players:
		if other==key:continue
		var current:=str(owner._variation_active.get(other,""))
		if current.begins_with("core1/") and not current.ends_with("/lead"):continue
		if current.is_empty() or current=="original" or "chamber_counter_" in current or current.ends_with("/foundation") or current.ends_with("/air") or current.ends_with("/terrace"):continue
		if owner._players[other].volume_db> -45.:return false
	return true
