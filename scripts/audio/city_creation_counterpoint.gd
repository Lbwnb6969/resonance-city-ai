extends RefCounted
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
static func previous(events:Array,timbre:String,start:float)->Dictionary:
	for i in range(events.size()-1,-1,-1):
		var row:Dictionary=events[i]
		if not row.get("dyad",false) and row.get("timbre","")==timbre and float(row.start)<start-.0001 and row.has("companion_midi"):return row
	return {}
static func choose(primary:int,mode:int,prior:Dictionary,fallback:int)->int:
	if prior.is_empty():return fallback
	var motion:=signi(primary-int(prior.midi))
	var last:int=int(prior.companion_midi)
	var best:=fallback;var score:=INF
	for interval:int in [-9,-8,-4,-3,3,4,8,9]:
		var candidate:=primary+interval
		if candidate<45 or candidate>88 or posmod(candidate,12) not in Palette.KEY_TONES[maxi(0,mode)]:continue
		var travel:=candidate-last
		var rank:float=absf(travel)*.2+(0. if travel==0 else (1. if signi(travel)*motion<0 else 12.))
		if rank<score:best=candidate;score=rank
	return best
