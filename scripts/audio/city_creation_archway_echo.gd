extends RefCounted
const Grid=preload("res://scripts/audio/city_creation_cue_grid.gd")
const Pluck=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
var demo
var pending:Array[Dictionary]=[]
var voices:Array[Dictionary]=[]
var cooldowns:Dictionary={}
var events:Array[Dictionary]=[]
func allowed(row:Dictionary)->bool:
	var music=demo.music
	return not music.muted and not music.concert_active and not music._loading and not music.phonograph.active and music.acoustic.zoom<=30. and music.acoustic.point_weight(row.at)>0.
func trigger(row:Dictionary,actor:String,kind:String)->bool:
	if not allowed(row):return false
	var music=demo.music;var clock:=Grid.transport_clock(music)
	if clock-float(cooldowns.get(row.id,-INF))<6.:return false
	var banks:Array=row.banks
	if banks.size()!=2 or str(banks[0]).is_empty() or str(banks[1]).is_empty():return false
	for id:String in banks:
		if not music._house_music.has(id):return false
	cooldowns[row.id]=clock
	for i in range(2):pending.append({"site":row.id,"source":banks[i],"actor":actor,"trigger":kind,"due":Grid.quantize_cue_onset(clock)+i*.75,"answer":i})
	return true
func clear()->void:
	pending.clear();cooldowns.clear()
	for voice:Dictionary in voices:
		var player:AudioStreamPlayer=voice.player
		if player.stream==voice.stream and int(player.get_meta("creation_voice_serial",-1))==int(voice.serial):player.stop()
	voices.clear()
func tick(sites:Dictionary)->void:
	var music=demo.music;var clock:=Grid.transport_clock(music)
	for voice:Dictionary in voices.duplicate():
		var player:AudioStreamPlayer=voice.player
		if player.stream!=voice.stream or not player.playing or int(player.get_meta("creation_voice_serial",-1))!=int(voice.serial):voices.erase(voice);continue
		if not sites.has(voice.site) or not allowed(sites[voice.site]):player.stop();voices.erase(voice)
	for event:Dictionary in pending.duplicate():
		if not sites.has(event.site) or not allowed(sites[event.site]):pending.erase(event);continue
		if clock<float(event.due)-Grid.GRID:continue
		pending.erase(event)
		if clock>float(event.due)+.19:continue
		preload("res://scripts/audio/city_creation_chamber_ornaments.gd").request(music,"arch_echo",str(event.site)+"/"+str(event.answer),Vector2(sites[event.site].at),func():emit(event,sites))

func emit(event:Dictionary,sites:Dictionary)->void:
	var music=demo.music;var clock:=Grid.transport_clock(music)
	if not sites.has(event.site) or not allowed(sites[event.site]):return
	var player:AudioStreamPlayer
	for candidate:AudioStreamPlayer in music._effects:
		if not candidate.playing:player=candidate;break
	if player==null:return
	var plan:=Pluck.plan(demo.state,event.source,maxf(clock,float(event.due)),music.harmony_mode())
	plan=preload("res://scripts/audio/city_creation_score_harmony.gd").pluck(music,plan,clock)
	if plan.is_empty() or not music._edit_streams.has(plan.stream_key):return
	var stream:AudioStreamWAV=preload("res://scripts/audio/city_creation_chamber_ornaments.gd").wave(music,music._edit_streams[plan.stream_key],int(event.answer))
	music.play_effect_at(player,stream,plan.position,.8 if event.answer==0 else .62)
	# Retain exact static pre-roll; the second bank answers four grid steps later.
	var serial:=int(player.get_meta("creation_voice_serial"))
	voices.append({"site":event.site,"player":player,"stream":stream,"serial":serial})
	var diagnostic:=event.duplicate();diagnostic.merge({"clock":clock,"position":plan.position,"era":plan.era_theme,"timbre":plan.timbre,"midi":stream.get_meta("chamber_midi",plan.midi),"pan":music.spatial.map_pan(plan.position),"serial":serial,"stream":stream.get_meta("chamber_key",plan.stream_key)})
	events.append(diagnostic)
	if events.size()>128:events.pop_front()
