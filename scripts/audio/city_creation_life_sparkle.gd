extends RefCounted
## A lowest-priority existing instrument note, resolved at the shared cue slot.
const Pitch=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
static func play(owner:Node,payload:Dictionary)->bool:
	var demo=payload.life_demo.get_ref();var actor=payload.life_actor.get_ref();var helper=payload.life_helper.get_ref()
	if demo==null or actor==null or helper==null or helper.epoch!=payload.epoch:return false
	if not demo.state.CreationPolicy.is_free(demo.state) or not helper._allowed(demo):return false
	var contact:Dictionary=actor.get_meta("life_foley",{})
	if contact.get("kind","")!=payload.kind or int(contact.get("tick",-1))!=int(payload.tick):return false
	if absf(demo.life.time-float(contact.get("time",-1.)))>.20:return false
	var strength:float=helper._weight(demo,actor)
	if strength<=.01 or (helper._owned() and helper.active.player.playing):return false
	var free:Array=owner._effects.filter(func(p):return not p.playing)
	if free.size()<2:helper.skipped_busy+=1;return false
	var clock:float=owner.CueGrid.transport_clock(owner)
	var plan:Dictionary=Pitch.plan(demo.state,str(payload.source_id),clock,owner.harmony_mode())
	if plan.is_empty() or not owner._edit_streams.has(plan.stream_key):return false
	var player:AudioStreamPlayer=free[-1];var stream:AudioStreamWAV=owner._edit_streams[plan.stream_key]
	var at:=Vector2(actor.global_position.x,actor.global_position.z)
	owner.play_effect_at(player,stream,at,strength*.32)
	var serial:=int(player.get_meta("creation_voice_serial",0))
	helper.active={"player":player,"stream":stream,"serial":serial,"node":actor,"kind":payload.kind,"gain":strength,"base_db":player.volume_db-linear_to_db(strength)}
	helper.counts[payload.kind]=int(helper.counts.get(payload.kind,0))+1
	helper.events.append({"kind":payload.kind,"policy":"musical","source_id":payload.source_id,"actor_id":actor.get_instance_id(),"contact_tick":payload.tick,"life_time":demo.life.time,"zoom":demo.zoom,"gain":strength,"at":at,"serial":serial,"player_id":player.get_instance_id(),"stream_id":stream.get_instance_id(),"stream_key":plan.stream_key,"midi":plan.midi,"timbre":plan.timbre,"bar":plan.bar,"mode":owner.harmony_mode(),"clock":clock})
	if helper.events.size()>48:helper.events.pop_front()
	return true
