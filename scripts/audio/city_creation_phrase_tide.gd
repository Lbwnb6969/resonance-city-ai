extends RefCounted
## Shared-transport conducting; no player, timer, PCM or persistent field.
const Emergence = preload("res://scripts/audio/city_creation_harmonic_emergence.gd")
const HEAVY := ["foundation","wood_deep","wood_market","renaissance_fugue","clockwork_waltz","modern_symphony"]
const Cadence=preload("res://scripts/audio/city_creation_cadence_variation.gd")
const LongForm=preload("res://scripts/audio/city_creation_long_form.gd")
static func breath(clock: float) -> float:
	var at := fposmod(maxf(0.,clock),72.)
	return smoothstep(48.,49.5,at)*(1.-smoothstep(70.5,72.,at))
static func gain(track: String, score: Dictionary, clock: float) -> float:
	var db := float(score.get("targets",{}).get(track,-60.))
	return (db-4.5*breath(clock) if db > -55. and track in HEAVY else db)+Cadence.gain(track,score,clock)+float(score.get("prototype_gain",{}).get(track,0.))+LongForm.gain(track,score,clock)
static func groups(records: Dictionary, acoustic: RefCounted, city: RefCounted = null) -> Array:
	var collected := {}
	for id: String in acoustic.focus_ids:
		var row: Dictionary = records[id]; var weight: float = acoustic.focus_weight(id)
		if int(row.get("cluster_size",1)) < 3 or weight <= 0.: continue
		var cid := str(row.get("cluster_id",id))
		if not collected.has(cid): collected[cid] = {"id":cid,"weight":0.,"members":[],"source":"","nearest":-1.}
		var group: Dictionary = collected[cid]
		group.weight += weight; group.members.append(id)
		if weight > float(group.nearest) or (is_equal_approx(weight,float(group.nearest)) and id < str(group.source)):
			group.source = id; group.nearest = weight
	var ranked: Array = collected.values()
	for group: Dictionary in ranked:
		var row: Dictionary = records[group.source]; var at: Vector2 = row.position
		group.era = str(row.get("era_theme","pastoral")); group.track = track(row)
		group.bank = signf(at.x-float(city.river_x(at.y))) if city != null else signf(at.x)
		group.weight /= float(group.members.size())
		group.waterfront=city!=null and group.members.any(func(id):return city.water_clearance(Vector2(records[id].position))<6.)
		group.school_db=preload("res://scripts/world/city_creation_tradition_synergy.gd").lead_boost_db(city,bool(group.waterfront)) if city!=null else 0.
		group.weight*=db_to_linear(float(group.school_db))
		group.members.sort()
	ranked.sort_custom(func(a: Dictionary,b: Dictionary) -> bool: return str(a.id)<str(b.id) if is_equal_approx(a.weight,b.weight) else float(a.weight)>float(b.weight))
	return ranked
static func track(row: Dictionary) -> String:
	var era := str(row.get("era_theme","pastoral"))
	return str(Emergence.STYLE_TRACKS.get(str(row.get("style","warm")),"wood")) if era == "pastoral" else str(Emergence.ERA_TRACKS.get(era,"wood"))
static func arrange(records: Dictionary, acoustic: RefCounted, score: Dictionary, clock: float, city: RefCounted = null) -> Dictionary:
	var ranked := groups(records,acoustic,city)
	if ranked.is_empty(): return {}
	var primary: Dictionary = ranked[0]; var secondary: Dictionary = primary
	var best := -INF
	for group: Dictionary in ranked.slice(1):
		var priority := float(group.weight)+(.5 if group.bank != primary.bank else 0.)+(.35 if group.era != primary.era else 0.)
		if priority > best: secondary = group; best = priority
	var phrase := posmod(floori(clock/3.),8)
	var stage := phrase/2
	var selected: Dictionary = secondary if stage == 1 else primary
	var source := str(selected.source); var lead := str(selected.track)
	var boosts := {}
	var targets: Dictionary = score.targets; var sources: Dictionary = score.source_ids
	for group: Dictionary in [primary,secondary]:
		var key := str(group.track)
		if not sources.has(key): sources[key] = group.source
		if key != lead: targets[key] = maxf(float(targets.get(key,-60.)),-24.)-3.
	if stage == 2:
		var family := Cadence.solo(clock,phrase)
		var id := Cadence.source(family,records,acoustic,score)
		if id.is_empty():family="air" if phrase==4 else "terrace";id=Cadence.source(family,records,acoustic,score)
		if not id.is_empty():
			source = id; lead = family
			for group: Dictionary in ranked:
				if id in group.members: selected = group; break
			boosts[family] = 1.5
	elif stage == 3:
		for group: Dictionary in ranked:
			var key := str(group.track)
			targets[key] = maxf(float(targets.get(key,-60.)),-17. if int(records[group.source].cluster_size)>=5 else -24.)
			sources[key] = group.source
	else: boosts[lead] = 2. if stage == 1 else 1.5
	var floor_db := -13.5 if int(records[source].get("cluster_size",1)) >= 5 else -24.
	targets[lead] = maxf(float(targets.get(lead,-60.)),floor_db if lead in Emergence.LEADS else -23.)+float(boosts.get(lead,0.))
	sources[lead] = source
	var light := posmod(floori(clock/24.),3) == 2
	if light:
		for key: String in ["wood","terrace"]:
			targets[key] = maxf(float(targets.get(key,-60.)),-26. if key == "wood" else -27.)
			sources[key] = source
	var vignette_db:float=preload("res://scripts/world/city_creation_vignettes.gd").music(city,selected.members) if city!=null else 0.
	targets[lead]+=vignette_db+float(selected.get("school_db",0.))
	score.source_id = source; score.lead_track = lead
	return {"phrase":phrase,"stage":["起","承","转","合"][stage],"primary":primary.id,"secondary":secondary.id,
		"lead_cluster":selected.id,"source_id":source,"lead_track":lead,"groups":ranked.size(),"light_cycle":light,"vignette_db":vignette_db,"school_db":selected.get("school_db",0.),"boosts":boosts}
static func conduct(owner: Node) -> void:
	if owner.concert_active or owner.emergence.score.is_empty(): return
	owner.emergence.score.phrase_tide = arrange(owner._house_music,owner.acoustic,owner.emergence.score,owner._playback_clock(),owner._pluck_city)
	owner.emergence.score.prototype_gain=preload("res://scripts/audio/city_creation_prototype_mix.gd").conduct(owner._house_music,owner.emergence.score)
	owner.emergence.score.cadence_night=owner.night
	owner.emergence.score.long_form=LongForm.view(owner._playback_clock(),owner.emergence.score)
	owner.emergence.score.cadence_season=owner._pluck_city.microclimate if owner._pluck_city!=null else ""
