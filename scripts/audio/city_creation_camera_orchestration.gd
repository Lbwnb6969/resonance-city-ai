extends RefCounted
## Shared voices and buses; distance changes their balance continuously.
static func nocturne(owner:Node)->bool:
	return owner.night or (owner._pluck_city!=null and owner._pluck_city.microclimate in ["sun_shower","starlight_fireflies"])
static func gain(owner:Node,key:String,base:float)->float:
	return gain_for(owner.emergence.score,key,base,float(owner.acoustic.zoom),nocturne(owner))-float(owner.get_meta("solo_duck_db",0.))
static func lead(score:Dictionary)->String:
	if str(score.get("lead_track","")) in preload("res://scripts/audio/city_creation_harmonic_emergence.gd").LEADS:return str(score.lead_track)
	var weights:Dictionary=score.get("weights",{})
	var keys:Array=weights.keys()
	keys.sort_custom(func(a:String,b:String)->bool:return a<b if is_equal_approx(float(weights[a]),float(weights[b])) else float(weights[a])>float(weights[b]))
	return str(keys[0]) if not keys.is_empty() else str(score.get("lead_track",""))
static func gain_for(score:Dictionary,key:String,base:float,zoom:float,is_nocturne:bool)->float:
	var leader:=lead(score) if is_nocturne else str(score.get("lead_track",""))
	if leader.is_empty():return base
	var near:=1.-smoothstep(16.,30.,zoom)
	var far:=smoothstep(30.,60.,zoom)
	if is_nocturne:
		if base<=-55.:return base
		return maxf(base,-14.5) if key==leader else base-(4.5 if key=="foundation" else 6.)
	if key=="air" and near>.001:base=maxf(base,-23.+linear_to_db(near))
	if base<=-55.:return base
	if key=="foundation":return base-4.5*near+1.5*far
	if key in ["renaissance_fugue","modern_symphony"]:return base-4.5*near
	return base
static func update(owner:Node,delta:float)->void:
	var far:=smoothstep(16.,45.,float(owner.acoustic.zoom))
	var wet:=lerpf(.13,.24,far)
	for name:StringName in owner.spatial._names:
		var bus:=AudioServer.get_bus_index(name)
		if bus<0:continue
		for i in range(AudioServer.get_bus_effect_count(bus)):
			var effect:=AudioServer.get_bus_effect(bus,i)
			if effect is AudioEffectReverb:
				effect.wet=lerpf(effect.wet,wet,1.-exp(-maxf(0.,delta)*2.8));effect.dry=1.-effect.wet
	owner.set_meta("camera_orchestration",{"zoom":owner.acoustic.zoom,"nocturne":nocturne(owner),"wet_target":wet,"near":1.-smoothstep(16.,30.,float(owner.acoustic.zoom)),"far":far})
