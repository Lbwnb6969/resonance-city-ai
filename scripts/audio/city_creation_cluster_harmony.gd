extends RefCounted
## Pure views of actual attendance and the shared transport. No new players,
## invented purchases or independent scene timer are introduced here.
const Tide = preload("res://scripts/audio/city_creation_phrase_tide.gd")

static func life_stems(records:Dictionary,acoustic:RefCounted,bakers:Array,artisans:Array,cafes:Dictionary)->Dictionary:
	var targets:Dictionary={};var sources:Dictionary={};var families:Dictionary={}
	for worker:Dictionary in bakers:
		var id:=str(worker.bakery_id)
		if str(worker.phase)!="baking" or not _eligible(records,acoustic,id):continue
		_add(targets,sources,"wood_market",-20.,id);_add(targets,sources,"wood_deep",-22.,id)
		_temperament(targets,sources,records,id)
		families.foundation=true
	for worker:Dictionary in artisans:
		var id:=str(worker.workshop_id)
		if str(worker.phase) not in ["crafting","installing","to_target"] or not _eligible(records,acoustic,id):continue
		_add(targets,sources,"terrace",-25.,id);_add(targets,sources,"wood_weave",-24.,id)
		_temperament(targets,sources,records,id)
		families.terrace=true
		var role:=str(records[id].role)
		if role=="atelier":_add(targets,sources,"renaissance_fugue",-16.5,id)
		elif role=="clockmaker":_add(targets,sources,"clockwork_waltz",-16.5,id)
	for id:String in cafes:
		var view:Dictionary=cafes[id]
		if str(view.get("phase",""))!="tea" or not _eligible(records,acoustic,id):continue
		_add(targets,sources,"air",-20.,id);_add(targets,sources,"wood_sylvan",-24.,id)
		_temperament(targets,sources,records,id)
		families.air=true
	return {"targets":targets,"sources":sources,"families":families}

static func _eligible(records:Dictionary,acoustic:RefCounted,id:String)->bool:
	return records.has(id) and int(records[id].get("cluster_size",1))>=3 and acoustic.focus_weight(id)>0.

static func _add(targets:Dictionary,sources:Dictionary,track:String,db:float,id:String)->void:
	if not targets.has(track) or db>float(targets[track]) or (is_equal_approx(db,float(targets[track])) and id<str(sources[track])):
		targets[track]=db;sources[track]=id

static func choral_wave(records:Dictionary,acoustic:RefCounted,clock:float,conducting:Dictionary={})->Dictionary:
	var response:Dictionary={}
	var ranked := Tide.groups(records,acoustic)
	var lead := ""
	if not ranked.is_empty():
		var phrase := posmod(floori(clock/3.),8)
		lead = str(ranked[1].id) if phrase in [2,3] and ranked.size()>1 else str(ranked[0].id)
	if not conducting.is_empty(): lead = str(conducting.lead_cluster)
	for id:String in acoustic.focus_ids:
		if not _eligible(records,acoustic,id):continue
		var row:Dictionary=records[id];var count:=int(row.cluster_size)
		var phase:=clock/3.
		if count>=5:phase-=float(row.get("cluster_rank",0))/float(count)
		var crest:=pow(maxf(0.,cos(TAU*phase)),8.)
		var leader := str(row.get("cluster_id",id)) == lead
		var envelope := .65 if posmod(floori(clock/3.),8)>=6 else (1. if leader else .35)
		response[id]=(.12+.62*crest)*acoustic.focus_weight(id)*envelope*(1.-.3*Tide.breath(clock))
	return response

static func _temperament(targets:Dictionary,sources:Dictionary,records:Dictionary,id:String)->void:
	var mode:=str(records[id].get("temperament","andante"))
	if mode=="largo":
		_add(targets,sources,"foundation",-12.5,id);_add(targets,sources,"wood_deep",-18.,id)
	elif mode=="allegro":
		_add(targets,sources,"terrace",-22.,id);_add(targets,sources,"wood_weave",-22.,id)
