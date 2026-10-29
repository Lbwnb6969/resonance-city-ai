extends RefCounted
## Spotlight the sounding mother lead, without replaying or duplicating it.
static func enabled(owner:Node)->bool:
	var data:Dictionary=owner.get_meta("authored_score",{});var city:RefCounted=owner._pluck_city
	return city!=null and data.get("harmony",[]).size()==8 and data.get("city",0)==city.get_instance_id() and data.get("revision",-1)==city.revision
static func voice(owner:Node)->Dictionary:
	var data:Dictionary=owner.get_meta("authored_score",{})
	if data.get("harmony",[]).size()!=8:return {}
	if not enabled(owner):return {"pending":true}
	var stem:=str(owner.get_meta("chamber_roles",{}).get("lead_track",""))
	var id:="study1/"+str(data.signature)+"/lead"
	if not owner._players.has(stem) or owner._variation_active.get(stem,"")!=id:return {"pending":true}
	var player:AudioStreamPlayer=owner._players[stem]
	if player.stream!=owner._harmony_streams.get(id):return {"pending":true}
	return {"player":player,"stem":stem,"peak":float(owner.audio_report.get("harmony_peaks",{}).get(id,.18)),"signature":data.signature}
static func context(owner:Node)->Dictionary:
	var data:Dictionary=owner.get_meta("score_solo",{});var city:RefCounted=owner._pluck_city
	return data if city!=null and data.get("city",0)==city.get_instance_id() and data.get("revision",-1)==city.revision and owner.get_meta("authored_score",{}).get("harmony",[]).size()==8 else {}
static func adopt(solo:Node)->bool:
	if solo._score_voice.is_empty():return false
	var owner:Node=solo.demo.music;var choice:Dictionary=solo._score_voice
	if context(owner).get("player_id",0)==solo.player.get_instance_id():return true
	solo.stream=solo.player.stream;solo.track=str(choice.stem);solo.pcm_peak=float(choice.peak);solo.mode=owner.harmony_mode();solo.serial=int(solo.player.get_meta("creation_voice_serial",-1))
	owner.set_meta("score_solo",{"city":owner._pluck_city.get_instance_id(),"revision":owner._pluck_city.revision,"source":solo.source,"stem":choice.stem,"player_id":solo.player.get_instance_id()})
	owner.remove_meta("chamber_role_key");return true
static func follow(solo:Node)->bool:
	if solo._score_voice.is_empty():return not enabled(solo.demo.music)
	var owner:Node=solo.demo.music;var data:Dictionary=owner.get_meta("authored_score",{});var stem:=str(solo._score_voice.stem)
	if data.get("harmony",[]).size()!=8 or context(owner).is_empty():return false
	var id:=str(owner._variation_active.get(stem,""))
	if not id.begins_with("study1/") or not id.ends_with("/lead"):return false
	solo.stream=solo.player.stream;solo.mode=owner.harmony_mode()
	solo.pcm_peak=maxf(solo.pcm_peak,float(owner.audio_report.get("harmony_peaks",{}).get(id,solo.pcm_peak)))
	return true
static func normal_db(owner:Node,stem:String)->float:
	var weight:float=owner._long_acoustic_weight(stem)
	if owner.muted or weight<=0.:return -80.
	return owner.target_gain_db(stem,false)+float(owner.get_meta("solo_duck_db",0.))+linear_to_db(weight)+owner.attention.backing_duck_db+owner.ATTENTION_HEADROOM_DB+owner.Experience.lift(owner)
static func gain(solo:Node,clock:float)->void:
	var weight:=minf(smoothstep(0.,.12,clock-solo.started),smoothstep(0.,.15,solo.ends-clock))
	var background:=db_to_linear(normal_db(solo.demo.music,str(solo._score_voice.stem)))
	solo.player.volume_linear=lerpf(background,.18/maxf(.000001,solo.pcm_peak),weight)
static func release(solo:Node)->bool:
	if solo._score_voice.is_empty():return false
	var owner:Node=solo.demo.music
	if is_instance_valid(solo.player):solo.player.volume_db=normal_db(owner,str(solo._score_voice.stem))
	owner.remove_meta("score_solo");owner.remove_meta("chamber_role_key");solo._score_voice={};return true
