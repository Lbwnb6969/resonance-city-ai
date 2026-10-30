extends RefCounted
## Static PCM pre-roll gives every pooled voice an exact future sample onset.
const GRID:=.1875
const MAX_ZOOM:=30.
static func quantize_cue_onset(clock:float)->float:
	return ceil(maxf(0.,clock)/GRID-.0000001)*GRID
static func bar(clock:float)->int:return posmod(floori(quantize_cue_onset(clock)/3.),8)
static func zoom_attenuation(zoom:float)->float:
	return lerpf(1.,.20,smoothstep(14.,30.,zoom))
static func snap_to_chord_tone(midi:int,chord:Array)->int:
	for distance in range(7):
		for candidate:int in [midi-distance,midi+distance]:
			for note:int in chord:
				if posmod(candidate-note,12)==0:return candidate
	return midi
static func duck_gain_for_cue(base:float,count:int)->float:
	return base*pow(10.,-.5*mini(3,count)/20.)
static func prepare_short_bank(edits:Dictionary,harmony:Dictionary)->void:
	var visited:Dictionary={}
	for group:Dictionary in [edits,harmony]:
		for stream:AudioStreamWAV in group.values():
			if stream.loop_mode!=AudioStreamWAV.LOOP_DISABLED or visited.has(stream.get_instance_id()):continue
			visited[stream.get_instance_id()]=true
			var prefix:=PackedByteArray();prefix.resize(roundi(GRID*stream.mix_rate)*(4 if stream.stereo else 2))
			prefix.append_array(stream.data);stream.data=prefix
			stream.set_meta("cue_preroll",GRID)
static func transport_clock(owner:Node)->float:
	var reference:AudioStreamWAV=owner._players.concert.stream
	if owner.get_meta("cue_clock_stream",0)!=reference.get_instance_id():
		var probe:=reference.instantiate_playback()
		probe.start(0.)
		owner.set_meta("cue_clock_bias",probe.get_playback_position())
		owner.set_meta("cue_clock_stream",reference.get_instance_id());probe.stop()
	return maxf(0.,owner._playback_clock()-float(owner.get_meta("cue_clock_bias",0.)))
static func play(owner:Node,player:AudioStreamPlayer,stream:AudioStreamWAV,at:Vector2,weight:float,remote:bool)->void:
	if not stream.has_meta("cue_preroll"):prepare_short_bank({"wave":stream},{})
	owner.spatial.place_effect(player,at,remote)
	var active:=0
	for other:AudioStreamPlayer in owner._effects:
		if other!=player and other.playing:active+=1
	player.volume_db=owner.SHORT_GAIN_DB+linear_to_db(duck_gain_for_cue(clampf(weight,0.,1.),active))
	player.set_meta("creation_voice_serial",int(player.get_meta("creation_voice_serial",0))+1)
	var clock:=transport_clock(owner)
	var onset:=quantize_cue_onset(clock)
	stream=preload("res://scripts/audio/city_creation_score_playback.gd").resolve_cue(owner,stream,onset)
	player.stream=stream
	var preroll:float=stream.get_meta("cue_preroll",0.)
	player.play(maxf(0.,preroll-(onset-clock)))
	var report:Array=owner.get_meta("cue_grid_events",[])
	report.append({"clock":clock,"onset":onset,"delay":onset-clock,"bar":bar(clock),"preroll":preroll,"stream_id":stream.get_instance_id(),"serial":player.get_meta("creation_voice_serial")})
	if report.size()>128:report.pop_front()
	owner.set_meta("cue_grid_events",report)
