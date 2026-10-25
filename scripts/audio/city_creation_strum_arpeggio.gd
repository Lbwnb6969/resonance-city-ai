extends RefCounted
## Existing quantized foreground queue and four short players own every touch.
const Sequence=preload("res://scripts/audio/city_creation_strum_sequence.gd")
const Pitch=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
static func _stream(music,midi:int,timbre:String)->AudioStreamWAV:
	var key:=Pitch.stream_key(timbre,midi)
	if music._edit_streams.has(key):return music._edit_streams[key]
	var cache:Dictionary=music.get_meta("strum_pcm",{})
	if not cache.has(key):
		var samples:=PackedFloat32Array();samples.resize(9261)
		music._add_note(samples,0.,.38,midi,.07,timbre,false,false)
		if cache.size()>=32:cache.erase(cache.keys()[0])
		cache[key]=music._pcm_stream(samples,false);music.set_meta("strum_pcm",cache)
	return cache[key]
static func play(music,queued:Dictionary)->bool:
	var city:RefCounted=music._pluck_city
	if city==null or music.muted or music.concert_active or music._loading:return false
	if queued.held_epoch!=[city.get_instance_id(),city._wish_epoch]:return false
	var kind:=str(queued.world_kind);var at:Vector2=queued.position;var plan:Dictionary={}
	if kind=="house":
		plan=Pitch.plan(city,str(queued.house_id),music._playback_clock(),music.harmony_mode())
		if plan.is_empty():return false
		at=plan.position
		if music._house_music.has(plan.house_id) and music.acoustic.visible_test.is_valid() and not music.acoustic.visible_test.call(plan.house_id):return false
	elif kind=="stair":
		if not is_instance_valid(music.life_source):return false
		var site:Dictionary=music.life_source.travel.site(str(queued.source_id))
		if site.get("kind","")!="stair" or Vector2(site.at).distance_to(at)>.01:return false
	elif kind=="tree":
		if not city.plants.any(func(p):return str(p.id)==str(queued.source_id) and Vector2(p.position[0],p.position[1]).distance_to(at)<.01 and city.vegetation_visible(p)):return false
	elif kind=="water":
		if city.water_clearance(at)>=-.12:return false
	if music.acoustic.point_weight(at)<=0.:return false
	var midi:=Sequence.pitch(maxi(0,music.harmony_mode()),int(queued.strum_step))
	midi=Pitch.Palette.Grid.snap_to_chord_tone(midi,Pitch.Palette.chords(maxi(0,music.harmony_mode()))[Pitch.Palette.Grid.bar(Pitch.Palette.Grid.transport_clock(music))])
	var timbre:="marimba" if kind=="water" else "harp"
	var stream:=_stream(music,midi,timbre);var player:AudioStreamPlayer=music._effects[0]
	if kind=="stair":stream=preload("res://scripts/audio/city_creation_octave_dyad.gd").at_pitch(music,stream,midi)
	for candidate:AudioStreamPlayer in music._effects:
		if not candidate.playing:player=candidate;break
	music.play_effect_at(player,stream,at,.8)
	var event:={"kind":kind,"source_id":queued.source_id,"at":at,"midi":midi,"played_timbre":timbre,"step":queued.strum_step,"clock":music._playback_clock(),"serial":int(music.get_meta("held_strum_serial",0))+1,"voice_serial":player.get_meta("creation_voice_serial"),"stream_key":"held/"+str(midi)}
	event.player_id=player.get_instance_id()
	event.octave_dyad=bool(stream.get_meta("octave_dyad",false))
	event.held_epoch=queued.held_epoch.duplicate()
	music.set_meta("held_strum_serial",event.serial);music.set_meta("held_strum",event)
	if kind=="house":
		# Physical source fields retain their normal invalidation semantics.
		plan.midi=midi;plan.played_timbre=timbre;plan.strum_step=queued.strum_step
		music._pluck_player=player;music._pluck_stream=stream;music._pluck_active=plan
		music._pluck_started_clock=music._playback_clock();music._pluck_serial+=1;music._pluck_last_usec=Time.get_ticks_usec()
		music._pluck_voices[player.get_instance_id()]={"player":player,"stream":stream,"plan":plan}
	else:music.set_meta("world_pluck",event)
	return true
static func feedback(demo)->void:
	var event:Dictionary=demo.music.get_meta("held_strum",{})
	if event.is_empty() or event.serial==demo.get_meta("held_strum_seen",0):return
	demo.set_meta("held_strum_seen",event.serial)
	if event.held_epoch!=[demo.state.get_instance_id(),demo.state._wish_epoch]:return
	if event.kind=="house":
		demo.town.animate_house_bounce(str(event.source_id),.04);demo.life.greet_house(str(event.source_id))
