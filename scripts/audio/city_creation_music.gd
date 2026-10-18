class_name CityCreationMusic
extends Node
## Original D-major pentatonic morning miniature. A worker loads the baked
## PCM bank, or synthesizes changed sources. Twelve synchronized loops give districts distinct phrases
## without adding a voice for every house or restarting the musical clock.
const RATE := 22050
const SHORT_GAIN_DB := -12.0
const SECONDS := 24.0
const FRAMES := 529200
const Arrangement = preload("res://scripts/audio/city_creation_arrangement.gd")
const ThemePCM = preload("res://scripts/audio/city_creation_theme_pcm.gd")
const BankCache=preload("res://scripts/audio/city_creation_bank_cache.gd")
const GrandFestival=preload("res://scripts/world/city_creation_grand_festival.gd")
const Towers = preload("res://scripts/world/city_creation_towers.gd")
const DistrictReply = preload("res://scripts/audio/city_creation_district_reply.gd")
const ReplyPCM = preload("res://scripts/audio/city_creation_reply_pcm.gd")
const Spatial = preload("res://scripts/audio/city_creation_spatial.gd")
const PitchPluck = preload("res://scripts/audio/city_creation_pitch_pluck.gd")
const CircularCanon=preload("res://scripts/audio/city_creation_circular_canon.gd")
var canon:=CircularCanon.new()
const ManualLinks = preload("res://scripts/world/city_creation_manual_links.gd")
const BakeryCues = preload("res://scripts/audio/city_creation_bakery_cues.gd")
const AcousticField = preload("res://scripts/audio/city_creation_acoustic_field.gd")
var acoustic:=AcousticField.new()
var _acoustic_timer:=0.0
var _signature_phrase := -1
var _signature_active: Dictionary={}
var _tower_remote:=false
var bakery_cues := BakeryCues.new()
var reply:=DistrictReply.new()
var spatial:=Spatial.new()
const STEMS := ["foundation", "wood", "air", "terrace", "concert", "wood_deep", "wood_weave", "wood_market", "wood_sylvan", "renaissance_fugue", "clockwork_waltz", "modern_symphony"]
const STYLE_TRACKS := {"warm":"wood", "deep":"wood_deep", "weave":"wood_weave", "market":"wood_market", "sylvan":"wood_sylvan"}

const TRACK_STYLES := {"wood":"warm","wood_deep":"deep","wood_weave":"weave","wood_market":"market","wood_sylvan":"sylvan"}
const STYLE_NAMES := {"warm":"暖庭","deep":"深流","weave":"织机","market":"市集长街","sylvan":"林间静谧"}
const DEFAULT_ARRANGEMENT := {"adaptive":false,"base_style":"warm","weights":{"warm":1.0},"secondary":"","secondary_weight":0.0}
const FINALE_GAINS := {"foundation":-10.0,"wood":-17.0,"wood_deep":-18.0,"wood_weave":-19.0,"wood_market":-25.0,"wood_sylvan":-25.0,"air":-14.0,"terrace":-17.0,"concert":-8.0,"renaissance_fugue":-23.0,"clockwork_waltz":-24.0,"modern_symphony":-24.0}
var _daily_arrangement: Dictionary = DEFAULT_ARRANGEMENT
var _concert_arrangement: Dictionary = {}
var _arrangement_concert_origin := INF
var _arrangement_concert_phrase := -1
var _arrangement_concert_source := ""

var muted := false
var night := false
var harmony_gains: Dictionary = {}
var _harmony_timer := 0.0
var concert_active := false
var audio_report: Dictionary = {}
var _daily_houses: Array[String] = []
var _players: Dictionary = {}
var _targets := {"foundation": -10.0, "wood": -12.0, "air": -17.0, "terrace": -22.0, "concert": -60.0}
var _effects: Array[AudioStreamPlayer] = []
var _edit_streams: Dictionary = {}
var _worker: Thread
var _loading := false
var _concert_venue := ""
var _concert_houses: Array[String] = []
var _concert_loop := 0
var _concert_previous_position := 0.0
var _house_music: Dictionary = {}
var _listener_focus := Vector2(-3,0)
var _listener_right := Vector2.RIGHT
var _daily_source_id := ""
var _daily_district_id := ""
var _daily_style := "warm"
var _daily_phrase := -1
var _daily_improvement := 0
var _phrase_improvements: Dictionary = {}
var _concert_view: Dictionary = {}
var _ensemble_context := false
var _concert_clock_origin := 0.0
var _clock_cycles := 0
var _clock_previous := 0.0
var _cafe_view: Dictionary = {}
var _cafe_player: AudioStreamPlayer
var _cafe_source := ""
var _cafe_stream: AudioStreamWAV
var _cafe_phrase := -1
var _cafe_cues := 0
var travel_source_gate: Callable
var _travel_pending: Dictionary = {}
var tram_source_gate: Callable
var _tram_pending: Dictionary={}
var _tram_active: Dictionary={}
var _tram_player: AudioStreamPlayer
var _tram_cues := 0
var _tram_last := -10.0

func clear_tram_cues()->void:
	if _tram_player!=null and _tram_player.stream==_tram_active.get("stream"):_tram_player.stop()
	_tram_pending.clear();_tram_active.clear();_tram_player=null;_tram_last=-10.

func queue_tram_chime(car_id: String,station: String,at: Vector2)->void:
	if muted or _loading or _playback_clock()-_tram_last<2.5:return
	_tram_pending={"car_id":car_id,"station":station,"position":at,"at":_playback_clock()}

func _tram_at_clock()->void:
	if _tram_pending.is_empty():return
	var event := _tram_pending
	var clock := _playback_clock()
	if muted or clock-float(event.at)>1.2 or (tram_source_gate.is_valid() and not tram_source_gate.call(event.car_id,event.station)):
		_tram_pending={};return
	if clock<ceilf(float(event.at)/.375)*.375:return
	var phrase := posmod(int(floor(clock/3.)),8)
	var kind := "tram_chime_%d"%phrase
	var weight := acoustic.point_weight(event.position)
	var remote := weight<=0.
	for effect: AudioStreamPlayer in _effects:
		if effect.playing:continue
		play_effect_at(effect,_edit_streams[kind],event.position,.25 if remote else weight,remote)
		_tram_player=effect;_tram_cues+=1;_tram_last=clock
		_tram_active=event.duplicate();_tram_active.merge({"phrase":phrase,"stream":_edit_streams[kind],"remote":remote,"gain_weight":.25 if remote else weight})
		_tram_pending={};break

func tram_music_report()->Dictionary:
	var audible: bool=not muted and _tram_player!=null and _tram_player.playing and not _tram_active.is_empty() and _tram_player.stream==_tram_active.stream
	if audible and tram_source_gate.is_valid() and not tram_source_gate.call(_tram_active.car_id,_tram_active.station):
		_tram_player.stop();audible=false
	return {"audible":audible,"cues":_tram_cues,"car_id":_tram_active.get("car_id",""),"station":_tram_active.get("station",""),"position":_tram_active.get("position",Vector2.ZERO),"phrase":_tram_active.get("phrase",-1),"remote":_tram_active.get("remote",false),"gain_weight":_tram_active.get("gain_weight",0.),"pool_size":_effects.size(),"timbres":["celesta","bell"]}
var _travel_active: Dictionary = {}
var _travel_player: AudioStreamPlayer
var _travel_stream: AudioStreamWAV
var _travel_phrase := -1
var _travel_cues := 0
var _travel_cooldowns: Dictionary = {}
const TRAVEL_DURATION := 0.8
const STEPPING_DURATION := 0.42
const STEPPING_INTERVAL := 0.48
var _stepping_last := -INF
const TOWER_DURATION := 1.6
var _tower_player: AudioStreamPlayer
var _tower_stream: AudioStreamWAV
var _tower_source := ""
var _tower_position := Vector2.INF
var _tower_phrase := -1
var _tower_concert_origin := -1.0
var _tower_concert_phrase := -1
var _tower_cues := 0
var _tower_count := 0
var _pluck_city: RefCounted
var _pluck_player: AudioStreamPlayer
var _pluck_stream: AudioStreamWAV
var _pluck_active: Dictionary = {}
var _pluck_voices: Dictionary = {}
var _pluck_serial := 0
var _pluck_started_clock := 0.0
var _pluck_last_usec := -1000000
var _manual_city: RefCounted
var _manual_revision := -1
var _manual_pairs: Array = []
var _linked_key: Variant = null
var _linked_ids: Array[String] = []
var _linked_mix: Dictionary = {}

func manual_reply_pairs() -> Array:
	if _pluck_city==null: return []
	if _manual_city!=_pluck_city or _manual_revision!=_pluck_city.revision:
		_manual_city=_pluck_city
		_manual_revision=_pluck_city.revision
		_manual_pairs=ManualLinks.derive(_pluck_city)
		_linked_key=null
	return _manual_pairs

func _refresh_linked_music() -> void:
	manual_reply_pairs()
	var key := [_manual_revision,_concert_venue]
	if _linked_key==key: return
	_linked_key=key
	_linked_ids.clear()
	_linked_mix={}
	var district := str(_house_music.get(_concert_venue,{}).get("district_id",""))
	var styles: Array[String] = []
	if district.is_empty(): return
	styles.append(str(_house_music[_concert_venue].style))
	for house_id:String in _concert_houses:
		var local_style:=str(_house_music.get(house_id,{}).get("style",""))
		if not local_style.is_empty() and not styles.has(local_style): styles.append(local_style)
	for pair: Dictionary in _manual_pairs:
		var side := "to" if str(pair.from_district)==district else ("from" if str(pair.to_district)==district else "")
		if side.is_empty(): continue
		for member: String in pair.get(side+"_members",[]):
			if member==_concert_venue or not _house_music.has(member) or _linked_ids.has(member): continue
			_linked_ids.append(member)
			var style := str(_house_music[member].style)
			if not styles.has(style): styles.append(style)
	_linked_ids.sort()
	if _linked_ids.is_empty(): return
	var weights: Dictionary = {}
	for style: String in styles: weights[style]=1.0/float(styles.size())
	_linked_mix=DEFAULT_ARRANGEMENT.duplicate(true)
	_linked_mix.merge({"base_style":str(_house_music[_concert_venue].style),"weights":weights,"manual":true,"linked_ids":_linked_ids.duplicate()},true)

func set_night(value: bool) -> void:
	night = value

func _refresh_harmony_gains() -> void:
	harmony_gains.clear()
	if _pluck_city==null: return
	var districts := {}
	for house: Dictionary in _pluck_city.houses:
		if str(house.role)!="residential": continue
		var id := str(house.id)
		var district := str(_house_music.get(id,{}).get("district_id",""))
		if district.is_empty(): continue
		if not districts.has(district): districts[district]={"total":0.0,"count":0}
		districts[district].total += _pluck_city.house_harmony_tier(id)
		districts[district].count += 1
	for id: String in districts:
		harmony_gains[id]=3.5 if float(districts[id].total)/float(districts[id].count)>=2.0 else 0.0

func play_house(house_id: String) -> bool:
	if muted or concert_active or _loading or _pluck_city==null: return false
	var now := Time.get_ticks_usec()
	if now-_pluck_last_usec<80000: return false
	var plan := PitchPluck.plan(_pluck_city,house_id,_playback_clock())
	if plan.is_empty() or not _edit_streams.has(plan.stream_key): return false
	if acoustic.point_weight(plan.position)<=0.0: return false
	if _house_music.has(house_id) and acoustic.visible_test.is_valid() and not acoustic.visible_test.call(house_id): return false
	canon.clear()
	var selected: AudioStreamPlayer
	for effect: AudioStreamPlayer in _effects:
		if not effect.playing: selected=effect;break
	if selected==null and _pluck_player!=null and _pluck_player.stream==_pluck_stream:
		selected=_pluck_player
	if selected==null: return false
	# Only our own previous cue can be recycled. A cafe, tower, crossing or
	# construction sound which took that player keeps its ownership intact.
	_pluck_player=selected
	_pluck_stream=_edit_streams[plan.stream_key]
	_pluck_active=plan
	_pluck_started_clock=_playback_clock()
	_pluck_serial+=1
	_pluck_last_usec=now
	play_effect_at(selected,_pluck_stream,plan.position)
	_pluck_voices[selected.get_instance_id()]={"player":selected,"stream":_pluck_stream,"plan":plan}
	return true

func _prune_plucks() -> void:
	for id: int in _pluck_voices.keys():
		var voice: Dictionary = _pluck_voices[id]
		var player: AudioStreamPlayer = voice.player
		if player.stream!=voice.stream or not player.playing:
			_pluck_voices.erase(id)
			continue
		var plan: Dictionary = PitchPluck.plan(_pluck_city,str(voice.plan.house_id),_playback_clock())
		var visible: bool=not acoustic.visible_test.is_valid() or not _house_music.has(str(voice.plan.house_id)) or bool(acoustic.visible_test.call(str(voice.plan.house_id)))
		if muted or concert_active or not visible or not _same_pluck_source(plan,voice.plan) or acoustic.point_weight(voice.plan.position)<=0.0:
			player.stop()
			_pluck_voices.erase(id)

func _same_pluck_source(current: Dictionary,started: Dictionary)->bool:
	return not current.is_empty() and current.style==started.style and current.era_theme==started.era_theme and current.timbre==started.timbre and current.max_level==started.max_level and current.position==started.position

func house_pluck_report() -> Dictionary:
	var owned := _pluck_player!=null and _pluck_player.stream==_pluck_stream
	var clock:=_playback_clock()
	var elapsed:=maxf(0.0,clock-_pluck_started_clock)
	var active := owned and not muted and not concert_active and not _loading and not _pluck_active.is_empty() and elapsed<PitchPluck.GLOW_DURATION
	if active:
		var id: String=_pluck_active.house_id
		var current := PitchPluck.plan(_pluck_city,id,clock)
		active=_same_pluck_source(current,_pluck_active) and acoustic.point_weight(_pluck_active.position)>0.0 and (not _house_music.has(id) or not acoustic.visible_test.is_valid() or bool(acoustic.visible_test.call(id)))
	if not active:
		if owned and _pluck_player.playing: _pluck_player.stop()
		_pluck_active.clear()
	var audible := active and _pluck_player.playing
	var result := {"audible":audible,"glowing":active,"house_id":"","position":Vector2.ZERO,"midi":0,"timbre":"","style":"","max_level":0,"elapsed":0.0,"duration":PitchPluck.DURATION,"glow_duration":PitchPluck.GLOW_DURATION,"serial":_pluck_serial}
	if active:
		result.merge(_pluck_active,true)
		result.elapsed=elapsed
	return result


func tower_count() -> int:
	return _tower_count


func _tower_eligible(id: String) -> bool:
	return not muted and str(acoustic.zones.get(id,{}).get("zone","silent")) in ["focus","linked"] and _nearest_tower(id)!=Vector2.INF


func _nearest_tower(id: String) -> Vector2:
	var row: Dictionary = _house_music.get(id,{})
	var nearest := Vector2.INF
	var distance := INF
	for at: Vector2 in row.get("tower_positions",[]):
		var value := _listener_focus.distance_to(at)
		if value<distance:
			distance=value
			nearest=at
	return nearest


func tower_music_report() -> Dictionary:
	var owns_voice := _tower_player!=null and _tower_player.stream==_tower_stream
	var positions: Array = _house_music.get(_tower_source,{}).get("tower_positions",[])
	var audible := owns_voice and _tower_player.playing and not muted and positions.has(_tower_position) and (_tower_remote or acoustic.weight(_tower_source)>0.0)
	if owns_voice and _tower_player.playing and not audible: _tower_player.stop()
	return {"audible":audible,"source_id":_tower_source if audible else "","elapsed":_tower_player.get_playback_position() if audible else 0.0,
		"duration":TOWER_DURATION,"phrase":_tower_phrase,"cues":_tower_cues,"pool_size":_effects.size(),"count":_tower_count,"position":_tower_position if audible else Vector2.ZERO,"remote":_tower_remote,"gain_weight":.25 if _tower_remote else acoustic.weight(_tower_source)}


func _tower_at_phrase(phrase: int) -> void:
	var concert_phrase := _concert_phrase() if concert_active else -1
	if concert_active:
		# Performance origin can sit a few audio frames past the absolute bar.
		# Latch the real local phrase, so a pre-boundary frame cannot consume
		# the new bar while still attributing it to the previous household.
		if _tower_concert_origin==_concert_clock_origin and _tower_concert_phrase==concert_phrase: return
		_tower_concert_origin=_concert_clock_origin
		_tower_concert_phrase=concert_phrase
	elif phrase==_tower_phrase: return
	_tower_phrase=phrase
	if muted or _loading: return
	var candidates: Array[String] = []
	if concert_active:
		# An actual tower answers only in its own scheduled source slot. The
		# finale can include one participating tower, never a city-wide pileup.
		var source := _source_for_phrase(concert_phrase)
		var id := str(source.source_id)
		if _tower_eligible(id): candidates.append(id)
		elif str(source.role)=="finale":
			for member: String in _concert_houses:
				if _tower_eligible(member): candidates.append(member)
	else:
		if phrase%2!=0: return
		if reply.reserves_tower_gap(phrase): return
		for id: String in _daily_houses:
			if _tower_eligible(id): candidates.append(id)
	# A single remote bell may mark the 24-second cycle. Ordinary distant
	# houses remain silent; a tower is an explicit high-value horizon event.
	if candidates.is_empty() and posmod(phrase,8)==0:
		for id: String in _daily_houses:
			if _nearest_tower(id)!=Vector2.INF: candidates.append(id)
	if candidates.is_empty() or bool(cafe_music_report().audible) or bool(travel_music_report().audible): return
	for effect: AudioStreamPlayer in _effects:
		if effect.playing: continue
		_tower_source=candidates[posmod(int(phrase/2),candidates.size())]
		_tower_position=_nearest_tower(_tower_source)
		_tower_player=effect
		_tower_stream=_edit_streams["tower_bell_%d" % posmod(phrase,8)]
		_tower_remote=str(acoustic.zones.get(_tower_source,{}).get("zone","silent")) not in ["focus","linked"]
		play_effect_at(effect,_tower_stream,_tower_position,.25 if _tower_remote else acoustic.weight(_tower_source),_tower_remote)
		_tower_cues+=1
		return


func _travel_eligible(event: Dictionary) -> bool:
	return not muted and not concert_active and not _loading and acoustic.point_weight(event.position)>0.0 and acoustic.mode=="detail" and travel_source_gate.is_valid() and travel_source_gate.call(event.kind,event.source_id,event.position)


func queue_travel(actor_id: String, kind: String, source_id: String, at: Vector2) -> void:
	var event := {"actor_id":actor_id,"kind":kind,"source_id":source_id,"position":at,"queued_at":_playback_clock()}
	if kind not in ["bridge","arch","stepping"] or not _travel_eligible(event): return
	var clock := _playback_clock()
	# A crowd shares one response. Keep only a nearby, recent crossing, never
	# a backlog which would play long after the residents have walked away.
	for id: String in _travel_cooldowns.keys():
		if clock-float(_travel_cooldowns[id]) >= 6.0: _travel_cooldowns.erase(id)
	if _travel_cooldowns.has(source_id): return
	if kind=="stepping":
		_stepping_now(event,clock)
		return
	if _travel_pending.is_empty() or _listener_focus.distance_to(at)<_listener_focus.distance_to(_travel_pending.position):
		_travel_pending=event

func _stepping_now(event: Dictionary, clock: float) -> void:
	# A real footfall answers immediately in the current chord. Crowds share
	# one .48s spacing and construction/foreground phrases keep their voices.
	if clock-_stepping_last<STEPPING_INTERVAL or not _travel_pending.is_empty(): return
	if bool(travel_music_report().audible) or bool(cafe_music_report().audible) or bool(tower_music_report().audible) or bool(reply.report().audible): return
	var phrase := int(floor(clock/3.0))
	var note := posmod(hash(str(event.source_id)),3)
	var key := "travel_stepping_%d_%d" % [posmod(phrase,8),note]
	if not _edit_streams.has(key): return
	for effect: AudioStreamPlayer in _effects:
		if effect.playing: continue
		_travel_player=effect
		_travel_stream=_edit_streams[key]
		_travel_active=event.duplicate()
		_travel_active.merge({"phrase":phrase,"duration":STEPPING_DURATION,"timbre":"water_marimba","note":note},true)
		_travel_cooldowns[str(event.source_id)]=clock
		_stepping_last=clock
		play_effect_at(effect,_travel_stream,event.position,acoustic.point_weight(event.position))
		_travel_cues+=1
		return


func clear_travel() -> void:
	_travel_pending.clear()
	_travel_active.clear()
	if _travel_player!=null and _travel_player.stream==_travel_stream: _travel_player.stop()


func travel_music_report() -> Dictionary:
	var audible := not _travel_active.is_empty() and _travel_player!=null and _travel_player.playing and _travel_player.stream==_travel_stream and _travel_eligible(_travel_active)
	var result := {"audible":audible,"kind":"","source_id":"","position":Vector2.ZERO,"elapsed":0.0,"duration":TRAVEL_DURATION,"cues":_travel_cues,"pending":not _travel_pending.is_empty(),"pool_size":_effects.size()}
	if audible:
		result.merge(_travel_active,true)
		result.elapsed=_travel_player.get_playback_position()
	elif not _travel_active.is_empty():
		# Deleting a bridge, closing an arch, moving away or starting a concert
		# also stops the transient sound; an edit may already own this player.
		if _travel_player!=null and _travel_player.stream==_travel_stream: _travel_player.stop()
		_travel_active.clear()
	return result


func _travel_at_phrase(phrase: int) -> void:
	if phrase==_travel_phrase: return
	_travel_phrase=phrase
	if _travel_pending.is_empty(): return
	var event := _travel_pending
	_travel_pending={}
	if not _travel_eligible(event) or _playback_clock()-float(event.queued_at)>3.1 or _travel_cooldowns.has(str(event.source_id)): return
	# Tea and performances keep the foreground. Construction can preempt a
	# flourish through the existing pool, while travel never steals a voice.
	if bool(cafe_music_report().audible): return
	var key := "travel_%s_%d" % [event.kind,posmod(phrase,8)]
	for effect: AudioStreamPlayer in _effects:
		if effect.playing: continue
		_travel_player=effect
		_travel_stream=_edit_streams[key]
		_travel_active=event
		_travel_active["phrase"]=phrase
		_travel_cooldowns[str(event.source_id)]=_playback_clock()
		play_effect_at(effect,_travel_stream,event.position,acoustic.point_weight(event.position))
		_travel_cues+=1
		return


func set_cafe_view(view: Dictionary) -> void:
	_cafe_view = view
	if _cafe_player != null and not _cafe_eligible(_cafe_source):
		if _cafe_player.stream == _cafe_stream: _cafe_player.stop()
		_cafe_source = ""


func _cafe_eligible(id: String) -> bool:
	var row: Dictionary = _cafe_view.get(id,{})
	return not muted and str(row.get("phase",""))=="tea" and int(row.get("arrived",0))>=2 and _house_music.has(id) and str(_house_music[id].role)=="garden_cafe" and acoustic.focus_weight(id)>0.0 and acoustic.mode!="city"


func cafe_music_report() -> Dictionary:
	var audible := _cafe_player!=null and _cafe_player.playing and _cafe_player.stream==_cafe_stream and _cafe_eligible(_cafe_source)
	return {"source_id":_cafe_source if audible else "","audible":audible,"phrase":_cafe_phrase,"cues":_cafe_cues,"timbre":"flute","pool_size":_effects.size()}


func _cafe_at_phrase(phrase: int) -> void:
	if phrase==_cafe_phrase: return
	_cafe_phrase=phrase
	# One quiet shared flourish at the real downbeat. Leave silence when all
	# four effect voices are occupied; construction cues keep their priority.
	var ids: Array = _cafe_view.keys()
	ids.sort()
	var eligible: Array[String] = []
	for id: String in ids:
		if _cafe_eligible(id): eligible.append(id)
	if eligible.is_empty(): return
	var kind := "cafe_flute_%d" % posmod(phrase,8)
	if not _edit_streams.has(kind): return
	for effect: AudioStreamPlayer in _effects:
		if effect.playing: continue
		_cafe_source=eligible[posmod(phrase,eligible.size())]
		_cafe_player=effect
		_cafe_stream=_edit_streams[kind]
		play_effect_at(effect,_cafe_stream,_house_music[_cafe_source].position,acoustic.focus_weight(_cafe_source)*(1.0-smoothstep(18.0,32.0,acoustic.zoom)))
		_cafe_cues+=1
		return


func _playback_clock() -> float:
	if not _players.has("concert") or not _players.concert.playing:
		return 0.0
	var position := fposmod(_players.concert.get_playback_position(), SECONDS)
	# The parent UI reads this before this child's _process. Account for a
	# just-wrapped audio buffer without waiting a frame to commit the cycle.
	var cycles := _clock_cycles + (1 if position + 0.1 < _clock_previous else 0)
	return cycles * SECONDS + position


func concert_can_start() -> bool:
	# An even bar preserves the piano/wood call-and-response parity of the
	# already-running PCM bank. Muting never suspends the musical clock.
	return not _loading and _players.has("concert") and _players.concert.playing and fposmod(_playback_clock(), 6.0) < 0.075


func set_concert_view(view: Dictionary) -> void:
	var entering := str(view.get("phase", "idle")) == "playing" and str(_concert_view.get("phase", "idle")) != "playing"
	_concert_view = view
	_ensemble_context = true
	var houses: Array[String] = []
	for house_id in view.get("chorus_house_ids", []):
		houses.append(str(house_id))
	set_concert_sources(str(view.get("venue_id", "")), houses)
	if entering:
		# At normal starts this is an even bar; restored performances are
		# seeded coherently when the bank is first assigned below.
		_concert_clock_origin = _playback_clock() - float(view.get("elapsed", 0.0))
	set_concert_active(str(view.get("phase", "idle")) == "playing")


func restore_city_transport(view: Dictionary) -> void:
	# Switching complete works reuses the fixed bank. Short cues belong to the
	# previous city; a restored performance resumes its exact saved bar phase.
	clear_travel()
	canon.reset()
	bakery_cues.reset()
	reply.clear()
	_travel_cooldowns.clear()
	_stepping_last=-INF
	_pluck_active.clear()
	_pluck_last_usec=-1000000
	for effect: AudioStreamPlayer in _effects: effect.stop()
	_cafe_view.clear()
	_cafe_source=""
	_tower_source=""
	_tower_position=Vector2.INF
	_concert_view={}
	set_concert_view(view)
	_daily_phrase=-1
	_daily_arrangement=DEFAULT_ARRANGEMENT
	_concert_arrangement={}
	_arrangement_concert_origin=INF
	_arrangement_concert_phrase=-1
	_arrangement_concert_source=""
	_cafe_phrase=-1
	_travel_phrase=-1
	_tower_phrase=-1
	_tower_concert_origin=-1.0
	_tower_concert_phrase=-1
	if str(view.get("phase","idle"))=="playing":
		var elapsed := float(view.get("elapsed",0.0))
		if not _loading:
			for player: AudioStreamPlayer in _players.values(): player.play(elapsed)
		_clock_cycles=0
		_clock_previous=0.0
		_concert_loop=0
		_concert_previous_position=0.0
		_concert_clock_origin=0.0


func _concert_phrase() -> int:
	if _ensemble_context:
		return clampi(int(maxf(0.0, _playback_clock() - _concert_clock_origin) / 3.0), 0, 7)
	return clampi(int(fposmod(_playback_clock(), SECONDS) / 3.0), 0, 7)


func resonance_state(view: Dictionary = {}) -> Dictionary:
	var context: Dictionary = _concert_view if view.is_empty() else view
	var source := active_source() if concert_active else daily_source()
	var audible := bool(source.get("audible", false))
	var clock := _playback_clock()
	var phrase := _concert_phrase() if concert_active else int(source.get("phrase", 0))
	var chorus: Array[String] = []
	var ambient: Array[String] = []
	var linked: Array[String] = []
	if audible and concert_active:
		for house_id in context.get("chorus_house_ids", []):
			if _house_music.has(str(house_id)) and acoustic.weight(str(house_id))>0.0 and not chorus.has(str(house_id)):
				chorus.append(str(house_id))
		_refresh_linked_music()
		linked.assign(_linked_ids)
		for house_id: String in linked:
			if acoustic.weight(house_id)>0.0 and not chorus.has(house_id): chorus.append(house_id)
		for house_id in context.get("ambient_house_ids", []):
			if _house_music.has(str(house_id)) and acoustic.focus_weight(str(house_id))>0.0 and not chorus.has(str(house_id)) and str(house_id) != _concert_venue:
				ambient.append(str(house_id))
	elif audible:
		for house_id: String in acoustic.focus_ids:
			if house_id!=str(source.get("source_id","")): chorus.append(house_id)
	var lead := str(source.get("source_id", "")) if audible else ""
	var circular: Dictionary=canon.report()
	if not concert_active and not circular.members.is_empty():
		# The ring's actual note owns its visual turn; the daily long backing
		# does not light all its houses together or restart its angular sequence.
		for id: String in circular.members:chorus.erase(id)
		if lead in circular.members:lead=""
		if circular.glowing:lead=str(circular.house_id);audible=true
	var arcs: Array[Dictionary] = []
	if audible and concert_active and lead != _concert_venue and not lead.is_empty():
		arcs.append({"from_id":_concert_venue,"to_id":lead,"strength":1.0})
	# This envelope describes the real shared 80 BPM transport, rather than
	# a separate scene timer which could keep flashing after the audio stops.
	var pulse := pow(0.5 + 0.5 * cos(TAU * clock / 0.75), 2.0) if audible else 0.0
	return {"clock_sec":clock,"beat_pulse":pulse,"lead_id":lead,"venue_id":_concert_venue,
		"chorus_ids":chorus,"ambient_ids":ambient,"concert_active":concert_active and audible,
		"phrase":phrase,"finale":concert_active and phrase == 7 and audible,"audible":audible,
		"role":str(source.get("role", "daily")),"timbre":str(source.get("timbre", "")),
		"elapsed":maxf(0.0, clock-_concert_clock_origin) if concert_active else 0.0,
		"phase":str(context.get("phase", "idle")),"wake_ids":context.get("wake_house_ids", []).duplicate(),
		"afterglow":context.get("afterglow", {}).duplicate(true),"resonance_arcs":arcs,
		"festival_ready_ids":context.get("festival_ready_ids",[]),"tower":tower_music_report(),"reply":reply.report(),
		"manual_pairs":manual_reply_pairs().size(),"linked_chorus_ids":linked,"linked_finale_mix":_linked_mix.duplicate(true) if audible and concert_active and phrase==7 else {},"canon":circular}


func setup(state: RefCounted) -> void:
	reply.setup(self)
	canon.setup(self)
	update_city(state)
	bakery_cues.setup(self)
	if not _players.is_empty():
		return
	for key in STEMS:
		var player := AudioStreamPlayer.new()
		player.name = "Morning_" + key
		player.volume_db = -60.0
		add_child(player)
		_players[key] = player
	for i in range(4):
		var effect := AudioStreamPlayer.new()
		effect.volume_db = SHORT_GAIN_DB
		add_child(effect)
		_effects.append(effect)
	var themes: Array=[]
	for key: String in STYLE_TRACKS.values(): themes.append(_players[key])
	themes.append(_players.renaissance_fugue)
	themes.append(_players.clockwork_waltz)
	themes.append(_players.modern_symphony)
	spatial.setup(self,themes,_players.concert,_effects)
	spatial.set_listener(_listener_focus,_listener_right)
	_worker = Thread.new()
	_loading = true
	_worker.start(_load_bank)


func update_city(state: RefCounted) -> void:
	_pluck_city=state
	canon.sync(state)
	_linked_key=null
	var rooms := 0
	var upper := 0
	var terraces := 0
	var houses: Array = state.get("houses")
	var groups: Dictionary = {}
	var towers: Dictionary = Towers.derive(houses,state.roads)
	_tower_count=0
	_daily_houses.clear()
	_house_music.clear()
	for house: Dictionary in houses:
		_daily_houses.append(str(house.id))
		var district: Dictionary = state.district_for_house(str(house.id))
		var district_id:=str(district.get("id",""))
		if not groups.has(district_id): groups[district_id]={"houses":[],"style":str(district.get("style","warm")),"adaptive":bool(district.get("adaptive",false))}
		groups[district_id].houses.append(house)
		var count: int = towers.get(str(house.id),[]).size()
		if house.get("signature","")=="bell_keep":count=maxi(1,count)
		_tower_count+=count
		var positions: Array[Vector2] = []
		for cell: Dictionary in towers.get(str(house.id),[]):
			positions.append(Vector2(float(house.origin[0])+int(cell.x)*1.8,float(house.origin[1])+int(cell.z)*1.8))
		_house_music[str(house.id)] = {"position":Vector2(float(house.origin[0]),float(house.origin[1])),
			"level_tier":state.level_tier(str(house.id)),"signature":str(house.get("signature","")),"era_theme":state.house_era(house),"culture":state.culture_level(str(house.id)),"mechanisms":state.mechanism_level(str(house.id)),"base_y":float(house.get("base_y",0.0)),"district_id":str(district.get("id","")),"style":str(district.get("style","warm")),"improvement":int(state.improvement_level(str(house.id))),"role":str(house.role),"towers":count,"tower_positions":positions}
		for cell: Dictionary in house.cells:
			if cell.kind == "terrace":
				terraces += 1
			else:
				rooms += 1
				if int(cell.level) > 0:
					upper += 1
	for group: Dictionary in groups.values():
		var arrangement: Dictionary=Arrangement.compose(group.houses,group.style,group.adaptive)
		for house: Dictionary in group.houses: _house_music[str(house.id)]["mix"]=arrangement
	# Even the starting six houses have the full musical phrase. Building adds
	# gentle color rather than requiring construction to unlock sound.
	_targets.foundation = -10.0
	_targets.wood = lerpf(-14.0, -10.0, clampf(float(rooms) / 30.0, 0.0, 1.0))
	_targets.air = lerpf(-21.0, -13.0, clampf(float(upper) / 10.0, 0.0, 1.0))
	_targets.terrace = lerpf(-26.0, -15.0, clampf(float(terraces) / 8.0, 0.0, 1.0))
	_daily_houses.sort()
	# Removing a source clears its attribution immediately; the audible tail
	# still fades normally, and a real replacement enters at the next phrase.
	if not _house_music.has(_daily_source_id):
		_daily_source_id = ""
		_daily_district_id = ""
	_refresh_acoustic()
	if _tower_player!=null: tower_music_report()

func set_listener_focus(at: Vector2) -> void:
	_listener_focus = at
	spatial.set_listener(at,_listener_right)
	acoustic.set_view(at,acoustic.zoom,acoustic.visible_test,acoustic.point_visible_test)
	_refresh_acoustic()

func set_listener_frame(at: Vector2,right: Vector2,view_zoom: float=-1.0,in_view: Callable=Callable(),point_in_view: Callable=Callable()) -> void:
	_listener_right=right.normalized()
	acoustic.set_view(at,acoustic.zoom if view_zoom<0 else view_zoom,in_view,point_in_view)
	set_listener_focus(at)

func _refresh_acoustic()->void:
	acoustic.radius_bonus=float(_pluck_city.signature_bonuses().focus_radius) if _pluck_city!=null else 0.0
	var pairs: Array=reply._pairs.values()
	pairs.append_array(manual_reply_pairs())
	var events: Array=[]
	if concert_active and not _concert_venue.is_empty(): events.append(_concert_venue)
	if _tower_player!=null and _tower_player.playing and _tower_player.stream==_tower_stream: events.append(_tower_source)
	acoustic.evaluate(_house_music,pairs,events)

func acoustic_report()->Dictionary:
	return acoustic.report()

func _source_position(id: String) -> Vector2:
	return _house_music[id].position if _house_music.has(id) else Vector2.INF

func spatial_music_report() -> Dictionary:
	var result: Dictionary=spatial.report()
	var id:=str(_source_for_phrase(_concert_phrase()).source_id) if concert_active else _daily_source_id
	result["source_id"]=id
	result["position"]=_house_music[id].position if _house_music.has(id) else Vector2.ZERO
	result["phase"]="concert" if concert_active else "daily"
	return result

func _focused_houses() -> Array[String]:
	var near: Array[String]=[]
	near.assign(acoustic.focus_ids.slice(0,2))
	return near

func _advance_daily_phrase(phrase: int) -> void:
	if phrase == _daily_phrase: return
	_daily_phrase = phrase
	_phrase_improvements.clear()
	for id: String in _house_music: _phrase_improvements[id]=int(_house_music[id].improvement)
	var houses := _focused_houses()
	_daily_source_id = "" if houses.is_empty() else houses[phrase % houses.size()]
	var source: Dictionary = _house_music.get(_daily_source_id,{})
	_daily_district_id = str(source.get("district_id",""))
	_daily_style = str(source.get("style","warm"))
	_daily_improvement = int(source.get("improvement",0))
	_daily_arrangement = source.get("mix",DEFAULT_ARRANGEMENT).duplicate(true)
	if acoustic.mode=="city" and not acoustic.focus_ids.is_empty():
		var weights: Dictionary={};var total:=0.0
		for id: String in acoustic.focus_ids:
			var style:=str(_house_music[id].style);var weight:=acoustic.focus_weight(id)
			weights[style]=float(weights.get(style,0.0))+weight;total+=weight
		for style: String in weights: weights[style]/=total
		_daily_arrangement.weights=weights

func _mix_label(arrangement: Dictionary) -> String:
	var label: String=STYLE_NAMES[str(arrangement.base_style)]
	if bool(arrangement.get("manual",false)):
		var names:Array[String]=[]
		for style:String in arrangement.weights: names.append(STYLE_NAMES[style])
		return " × ".join(names)+" · 共鸣"
	if bool(arrangement.adaptive):
		var secondary:=str(arrangement.secondary)
		label+=" · "+STYLE_NAMES[secondary]+"伴奏" if not secondary.is_empty() else " · 随用途变化"
	return label

func _same_sound(a: Dictionary,b: Dictionary) -> bool:
	return a.weights==b.weights and a.base_style==b.base_style and a.adaptive==b.adaptive

func district_music_report() -> Dictionary:
	var source := active_source() if concert_active else daily_source()
	var id:=str(source.get("source_id",""))
	var heard: Dictionary=source.get("mix",_daily_arrangement)
	var planned: Dictionary=_house_music.get(id,{}).get("mix",DEFAULT_ARRANGEMENT)
	return {"source_id":id,"district_id":str(_house_music.get(id,{}).get("district_id","")),"style":str(heard.base_style),
		"pending":not _same_sound(planned,heard),"pending_style":str(planned.base_style),"audible":source.audible,
		"phrase":int(source.get("phrase",0)),"listener_focus":[_listener_focus.x,_listener_focus.y],
		"mix":heard.duplicate(true),"planned_mix":planned.duplicate(true),"mix_label":_mix_label(heard),"pending_label":_mix_label(planned)}

func _advance_concert_arrangement() -> void:
	if not concert_active: return
	var phrase:=_concert_phrase()
	if _arrangement_concert_origin==_concert_clock_origin and _arrangement_concert_phrase==phrase: return
	var source:=_source_for_phrase(phrase)
	_arrangement_concert_origin=_concert_clock_origin
	_arrangement_concert_phrase=phrase
	_arrangement_concert_source=str(source.source_id)
	_concert_arrangement=_house_music.get(_arrangement_concert_source,{}).get("mix",DEFAULT_ARRANGEMENT).duplicate(true)

func _source_arrangement(id: String,phrase: int) -> Dictionary:
	if concert_active and phrase==7:
		_refresh_linked_music()
		if not _linked_mix.is_empty(): return _linked_mix
	if concert_active and _arrangement_concert_origin==_concert_clock_origin and _arrangement_concert_phrase==phrase and _arrangement_concert_source==id:
		return _concert_arrangement
	return _house_music.get(id,{}).get("mix",DEFAULT_ARRANGEMENT)

func _style_gain_db(key: String,arrangement: Dictionary,base_gain: float) -> float:
	var weight:=float(arrangement.weights.get(TRACK_STYLES[key],0.0))
	return maxf(-60.0,base_gain+linear_to_db(weight)) if weight>0.0 else -60.0


func set_muted(value: bool) -> void:
	if muted == value:
		return
	muted = value
	if muted:
		clear_travel()
		canon.clear()
		bakery_cues.clear()
		reply.clear()
		for player: AudioStreamPlayer in _players.values():
			player.volume_linear = 0.0
		for effect in _effects:
			effect.stop()
	else:
		# Silence is -INF dB. Resume fading from a finite floor, keeping every
		# player's existing playback position and the concert lifecycle intact.
		for player: AudioStreamPlayer in _players.values():
			player.volume_db = -60.0


func set_concert_active(active: bool) -> void:
	concert_active = active
	if active:canon.clear()
	if active: bakery_cues.clear()
	if active: _prune_plucks()


func set_concert_sources(venue_id: String, house_ids: Array[String]) -> void:
	_linked_key=null
	_concert_venue = venue_id
	_concert_houses.clear()
	for house_id in house_ids:
		if not house_id.is_empty() and house_id != venue_id and not _concert_houses.has(house_id):
			_concert_houses.append(house_id)
	_concert_houses.sort()


func _source_schedule() -> Array[Dictionary]:
	var schedule: Array[Dictionary] = []
	for phrase in range(8):
		schedule.append(_source_for_phrase(phrase))
	return schedule


func _source_for_phrase(phrase: int) -> Dictionary:
	if _grand_active():
		var era:String=GrandFestival.PHRASES[clampi(phrase,0,7)]
		var id:String=_concert_venue if era=="tutti" else str(_concert_view.era_cast[era])
		var row:Dictionary=_house_music.get(id,{})
		return {"source_id":id,"phrase":phrase,"role":"finale" if era=="tutti" else "era_lead","timbre":{"pastoral":"wood","renaissance":"strings","clockwork":"horn","modern_eco":"warm_pad","tutti":"orchestra"}[era],"start":phrase*3.,"duration":3.,"finale":era=="tutti","era":era,"style":str(row.get("style","warm")),"improvement":int(row.get("improvement",0)),"mix":row.get("mix",DEFAULT_ARRANGEMENT)}
	var answer := phrase % 2 == 1 and not _concert_houses.is_empty()
	var finale := _ensemble_context and phrase == 7
	if finale: answer = false
	var source_id := _concert_venue
	if answer:
		# Four answers per loop. Continue through every participating house
		# across subsequent loops without allocating extra audio voices.
		# Three replies per performance rotate through every neighbor across
		# completed concerts; saved progress keeps the same cast on reload.
		var rotation := int(_concert_view.get("completed_concerts",0))*3 if _ensemble_context else _concert_loop * 4
		source_id = _concert_houses[(rotation + int(phrase / 2)) % _concert_houses.size()]
		if str(acoustic.zones.get(source_id,{}).get("zone","silent"))=="silent": source_id=_concert_venue;answer=false
	var result := {"source_id": source_id, "phrase": phrase, "role": "finale" if finale else ("answer" if answer else "lead"), "timbre": "wood" if phrase % 2 == 1 else "piano", "start": phrase * 3.0, "duration": 3.0,
		"finale":finale,"style":str(_house_music.get(source_id, {}).get("style", "warm")),"improvement":int(_phrase_improvements.get(source_id,0))}
	var arrangement:=_source_arrangement(source_id,phrase)
	result["mix"]=arrangement
	result["style"]=str(arrangement.base_style)
	return result


func active_source() -> Dictionary:
	var result := {"source_id": "", "phrase": 0, "role": "lead", "timbre": "piano", "audible": false}
	if not _players.has("concert"):
		return result
	var player: AudioStreamPlayer = _players.concert
	result = _source_for_phrase(_concert_phrase())
	if _grand_active():
		var key:String={"pastoral":"wood","renaissance":"renaissance_fugue","clockwork":"clockwork_waltz","modern_eco":"modern_symphony","tutti":"concert"}[str(result.era)]
		player=_players[key]
	if _remote_concert() and not _grand_active(): result.source_id=_concert_venue;result.role="remote_concert"
	result["audible"] = concert_active and not muted and player.playing and player.volume_db > -38.0 and _house_music.has(String(result.source_id)) and _long_acoustic_weight("concert")>0.0
	return result


func target_gain_db(key: String, during_concert: bool) -> float:
	if _grand_active():return GrandFestival.gain(key,_concert_phrase())
	if key=="modern_symphony":return -24.0 if during_concert else -21.0
	if key=="clockwork_waltz":return -24.0 if during_concert else -21.0
	if key=="renaissance_fugue": return -23.0 if during_concert else -19.0
	if during_concert and _ensemble_context:
		return concert_gain_for_phrase(key, _concert_phrase())
	if key == "concert":
		return -8.0 if during_concert else -60.0
	var style_track := key in STYLE_TRACKS.values()
	var gain := _style_gain_db(key,_daily_arrangement,float(_targets.wood)) if style_track else float(_targets[key])
	if not during_concert:
		if key=="air": gain=minf(-13.0,gain+float(_daily_improvement)*0.8)
		elif key=="terrace": gain=minf(-15.0,gain+float(_daily_improvement))
	if during_concert:
		if style_track:
			gain -= 10.0
		elif key == "air":
			gain -= 7.0
	if not during_concert:
		if key in ["foundation","terrace"]: gain += float(harmony_gains.get(_daily_district_id,0.0))
		if night: gain -= 2.5 if key=="air" or style_track else 1.2
	return gain


func concert_gain_for_phrase(key: String, phrase: int) -> float:
	if _grand_active():return GrandFestival.gain(key,phrase)
	# Every house shares these fixed voices. The final chord opens the
	# harmonic colors once, regardless of how many houses join the response.
	if phrase == 7:
		if key in STYLE_TRACKS.values():
			_refresh_linked_music()
			if not _linked_mix.is_empty(): return _style_gain_db(key,_linked_mix,-17.0)
		return float(FINALE_GAINS[key])
	if key == "concert": return -8.0
	if key == "foundation": return -11.0
	var source := _source_for_phrase(phrase)
	var improvement := int(source.improvement)
	if key == "air": return -23.0+float(improvement)
	if key == "terrace": return -25.0+float(improvement)*1.5
	if key=="clockwork_waltz":return -24.0
	if key=="modern_symphony":return -24.0
	if key=="renaissance_fugue": return -23.0
	return _style_gain_db(key,source.mix,-21.0)

func daily_source() -> Dictionary:
	var result := {"source_id":_daily_source_id,"district_id":_daily_district_id,"style":_daily_style,"role":"daily","audible":false,
		"timbre":{"warm":"wood","deep":"air","weave":"pluck","market":"accordion","sylvan":"flute"}[_daily_style],"improvement":_daily_improvement,"mix":_daily_arrangement}
	if not _house_music.has(_daily_source_id) or not _players.has(STYLE_TRACKS[_daily_style]): return result
	var player: AudioStreamPlayer = _players[STYLE_TRACKS[_daily_style]]
	var phrase := clampi(int(player.get_playback_position()/3.0),0,7)
	result["phrase"] = phrase
	result.audible = not concert_active and not muted and player.playing and player.volume_db > -38.0 and acoustic.focus_weight(_daily_source_id)>0.0
	return result


func music_report() -> Dictionary:
	var result := audio_report.duplicate(true)
	result["night"] = night
	result["harmony_gains"] = harmony_gains.duplicate()
	result["loading"] = _loading
	result["muted"] = muted
	result["concert_active"] = concert_active
	result["players"] = _players.size()
	result["gains_db"] = {}
	result["positions"] = {}
	result["source_schedule"] = _source_schedule()
	result["source_loop"] = _concert_loop
	result["active_source"] = active_source()
	result["daily_source"] = daily_source()
	result["daily_houses"] = _daily_houses.duplicate()
	result["district_music"] = district_music_report()
	result["resonance"] = resonance_state()
	result["transport_clock"] = _playback_clock()
	result["concert_clock_origin"] = _concert_clock_origin
	result["cafe"] = cafe_music_report()
	result["travel"] = travel_music_report()
	result["tower"] = tower_music_report()
	result["reply"] = reply.report()
	result["spatial"] = spatial_music_report()
	result["acoustic"] = acoustic_report()
	result["manual_pairs"] = manual_reply_pairs().duplicate(true)
	_refresh_linked_music()
	result["linked_chorus_ids"] = _linked_ids.duplicate() if concert_active else []
	result["linked_finale_mix"] = _linked_mix.duplicate(true) if concert_active else {}
	for key in _players:
		result.gains_db[key] = _players[key].volume_db if not muted else -80.0
		result.positions[key] = _players[key].get_playback_position()
	return result


func play_edit(kind: String) -> void:
	if kind=="terrain": kind="road"
	if muted or not _edit_streams.has(kind):
		return
	var selected: AudioStreamPlayer = _effects[0]
	for effect in _effects:
		if not effect.playing:
			selected = effect
			break
	play_effect_at(selected,_edit_streams[kind])

func queue_bakery_cue(kind: String,shop_id: String,home_id: String="") -> bool:
	return bakery_cues.queue(kind,shop_id,home_id)

func bakery_music_report() -> Dictionary:
	return bakery_cues.report()

func record_completed_district_answer(from_id: String,to_id: String,from_era:String="",to_era:String="") -> void:
	if _pluck_city!=null:_pluck_city.record_district_answer(from_id,to_id,from_era,to_era)

func _signature_at_phrase(phrase: int) -> void:
	if phrase==_signature_phrase:return
	_signature_phrase=phrase
	if muted or _loading:return
	var source: String="";var kind: String="";var weight:=0.0
	if concert_active and str(_house_music.get(_concert_venue,{}).get("signature",""))=="music_academy":
		source=_concert_venue;kind="quartet";weight=.25 if _remote_concert() else acoustic.weight(source)
	elif not concert_active and posmod(phrase,2)==0:
		for id: String in _house_music:
			if _house_music[id].signature=="watermill" and acoustic.focus_weight(id)>0.0:source=id;kind="waterwheel";weight=acoustic.focus_weight(id);break
	if source.is_empty() and posmod(phrase,2)==1:
		var candidate: String=str(_source_for_phrase(_concert_phrase()).source_id) if concert_active else ""
		if not concert_active and acoustic.mode!="city":
			var score:=0.0
			for id: String in acoustic.focus_ids:
				var current: float=float(_house_music[id].level_tier)+acoustic.focus_weight(id)*.2
				if int(_house_music[id].level_tier)>=3 and current>score:score=current;candidate=id
		if _house_music.has(candidate) and int(_house_music[candidate].level_tier)>=3:
			source=candidate;kind="quality_flourish_%d"%int(_house_music[candidate].level_tier)
			weight=acoustic.focus_weight(candidate)
	if source.is_empty() and not concert_active and posmod(phrase,2)==1:
		for id: String in acoustic.focus_ids:
			if int(_house_music[id].mechanisms)>0:source=id;kind="musicbox";weight=acoustic.focus_weight(id);break
	if source.is_empty() or weight<=0:return
	var key: String="%s_%d"%[kind,posmod(phrase,8)]
	if kind=="musicbox":key="tram_chime_%d"%posmod(phrase,8)
	if not _edit_streams.has(key):return
	for effect: AudioStreamPlayer in _effects:
		if effect.playing:continue
		var stream: AudioStreamWAV=_edit_streams[key]
		play_effect_at(effect,stream,_house_music[source].position,weight,kind=="quartet" and _remote_concert())
		_signature_active[effect.get_instance_id()]={"player":effect,"stream":stream,"kind":kind,"source_id":source,"phrase":phrase,"weight":weight}
		break

func signature_music_report() -> Array[Dictionary]:
	var result: Array[Dictionary]=[]
	for id: int in _signature_active.keys():
		var row: Dictionary=_signature_active[id]
		var owned: bool=row.player.stream==row.stream
		var invalid: bool=not _house_music.has(str(row.source_id)) or (row.kind=="quartet" and (not concert_active or _concert_venue!=str(row.source_id)))
		if invalid or not owned or not row.player.playing:
			if invalid and owned:row.player.stop()
			_signature_active.erase(id);continue
		result.append({"kind":row.kind,"source_id":row.source_id,"phrase":row.phrase,"weight":row.weight,"elapsed":row.player.get_playback_position(),"audible":not muted and row.player.volume_linear>0})
	return result

func play_quality_upgrade(house_id: String, tier: int) -> bool:
	if muted or _loading or not _house_music.has(house_id):return false
	var key: String="quality_upgrade_%d"%posmod(floori(_playback_clock()/3.0),8)
	if not _edit_streams.has(key):return false
	for effect: AudioStreamPlayer in _effects:
		if effect.playing:continue
		var weight: float=acoustic.focus_weight(house_id)
		play_effect_at(effect,_edit_streams[key],_house_music[house_id].position,weight if weight>0.0 else .25,weight<=0.0)
		return true
	return false

func play_effect_at(player: AudioStreamPlayer,stream: AudioStreamWAV,at: Vector2=Vector2.INF,gain_weight: float=1.0,remote: bool=false) -> void:
	# Every use of a pooled voice sets its position, including centered edits
	# that preempt a previous spatial cue. Existing stream ownership stays real.
	spatial.place_effect(player,at,remote)
	player.volume_db=SHORT_GAIN_DB+linear_to_db(clampf(gain_weight,0.0,1.0))
	player.set_meta("creation_voice_serial",int(player.get_meta("creation_voice_serial",0))+1)
	player.stream=stream
	player.play()

func _remote_concert()->bool:
	if _grand_active():return acoustic.focus_weight(str(_source_for_phrase(_concert_phrase()).source_id))<=0.
	return concert_active and str(acoustic.zones.get(_concert_venue,{}).get("zone","silent")) in ["event","silent"]

func _grand_active()->bool:
	return concert_active and bool(_concert_view.get("grand_festival",false))

func grand_festival_report()->Dictionary:
	var active:=_grand_active();var source:Dictionary=_source_for_phrase(_concert_phrase()) if active else {}
	var gains:Dictionary={}
	if active:
		for key:String in STEMS:gains[key]=GrandFestival.gain(key,int(source.phrase))
	return {"active":active,"audible":active and not muted,"venue_id":_concert_venue,"source_id":str(source.get("source_id","")),"era":str(source.get("era","")),"phrase":int(source.get("phrase",-1)),"cast":_concert_view.get("era_cast",{}).duplicate(),"gains":gains,"remote":active and _remote_concert(),"elapsed":maxf(0.,_playback_clock()-_concert_clock_origin) if active else 0.}

func _long_acoustic_weight(key: String)->float:
	if _grand_active():return .25 if _remote_concert() else acoustic.focus_weight(str(_source_for_phrase(_concert_phrase()).source_id))
	if key=="modern_symphony":return modern_music_report().weight
	if key=="clockwork_waltz":return clockwork_music_report().weight
	if key=="renaissance_fugue": return renaissance_music_report().weight
	if concert_active and not _remote_concert(): return acoustic.weight(str(_source_for_phrase(_concert_phrase()).source_id))
	if concert_active and key=="concert": return .25
	return acoustic.focus_weight(_daily_source_id)


func modern_music_report()->Dictionary:
	var source:="";var weight:=0.
	for id:String in _house_music:
		if _house_music[id].era_theme!="modern_eco" and _house_music[id].role!="symphony_hall":continue
		var current:=acoustic.focus_weight(id)
		if concert_active and id==_concert_venue and _remote_concert():current=.25
		if current>weight:weight=current;source=id
	return {"source_id":source,"weight":weight,"track":"modern_symphony","timbres":["felt_piano","warm_pad","vibraphone","strings"]}

func clockwork_music_report()->Dictionary:
	var source := "";var weight := 0.
	for id: String in _house_music:
		if _house_music[id].era_theme!="clockwork" and _house_music[id].role!="clockmaker":continue
		var current:=acoustic.focus_weight(id)
		if concert_active and id==_concert_venue and _remote_concert():current=.25
		if current>weight:weight=current;source=id
	return {"source_id":source,"weight":weight,"track":"clockwork_waltz"}

func renaissance_music_report() -> Dictionary:
	var atelier := false; var weight := 0.0; var source := ""
	for id: String in _house_music:
		if _house_music[id].role == "atelier": atelier=true; break
	if atelier:
		for id: String in _house_music:
			if _house_music[id].era_theme != "renaissance" and _house_music[id].role != "atelier" and int(_house_music[id].culture)==0: continue
			var current := acoustic.focus_weight(id)
			if current>weight: weight=current; source=id
	return {"unlocked":atelier,"source_id":source,"weight":weight,"track":"renaissance_fugue"}

func _process(delta: float) -> void:
	_acoustic_timer-=delta
	if _acoustic_timer<=0.0:
		_acoustic_timer=.25
		_refresh_acoustic()
	_harmony_timer -= delta
	if _harmony_timer<=0.0:
		_harmony_timer=0.5
		_refresh_harmony_gains()
	if _loading and not _worker.is_alive():
		var bank: Dictionary = _worker.wait_to_finish()
		_worker = null
		_loading = false
		audio_report = bank.report
		_edit_streams = bank.edits
		# These play commands run in one frame before the next audio mix. All
		# streams have exactly the same length and sample rate.
		var restored_elapsed := float(_concert_view.get("elapsed", 0.0)) if str(_concert_view.get("phase", "idle")) == "playing" else 0.0
		for key in STEMS:
			_players[key].stream = bank.streams[key]
			_players[key].play(restored_elapsed)
		_clock_previous = restored_elapsed
		_concert_clock_origin = 0.0
	if _players.has("concert") and _players.concert.playing:
		var position: float = _players.concert.get_playback_position()
		if position + 0.1 < _clock_previous:
			_clock_cycles += 1
		_clock_previous = position
		if position + 0.1 < _concert_previous_position:
			_concert_loop += 1
		_concert_previous_position = position
		_advance_daily_phrase(_concert_loop*8+clampi(int(position/3.0),0,7))
		_advance_concert_arrangement()
		_cafe_at_phrase(_concert_loop*8+clampi(int(position/3.0),0,7))
		_travel_at_phrase(_concert_loop*8+clampi(int(position/3.0),0,7))
		_tower_at_phrase(_concert_loop*8+clampi(int(position/3.0),0,7))
		reply.at_phrase(_concert_loop*8+clampi(int(position/3.0),0,7))
		_signature_at_phrase(_concert_loop*8+clampi(int(position/3.0),0,7))
		bakery_cues.at_phrase(_concert_loop*8+clampi(int(position/3.0),0,7))
		_tram_at_clock()
		canon.step(_playback_clock())
	bakery_cues.report()
	signature_music_report()
	if not _travel_active.is_empty(): travel_music_report()
	if not _tram_active.is_empty():tram_music_report()
	_prune_plucks()
	if not _pluck_active.is_empty(): house_pluck_report()
	if _tower_player!=null: tower_music_report()
	var source_id:=str(_source_for_phrase(_concert_phrase()).source_id) if concert_active else _daily_source_id
	var source_at:=_source_position(source_id)
	spatial.update(delta,source_at,source_at if concert_active else Vector2.INF)
	spatial.set_concert_remote(_remote_concert())
	spatial.set_theme_remote(_grand_active() and _remote_concert())
	for key in _players:
		var weight:=_long_acoustic_weight(key)
		if muted or weight<=0.0:
			_players[key].volume_linear = 0.0
			continue
		var target := target_gain_db(key, concert_active and (key=="concert" or not _remote_concert()))+linear_to_db(weight)
		if not is_finite(_players[key].volume_db): _players[key].volume_db=-60.0
		_players[key].volume_db = lerpf(_players[key].volume_db, target, 1.0 - exp(-delta * 2.8))


func _exit_tree() -> void:
	for player: AudioStreamPlayer in _players.values():
		player.stop()
		player.stream = null
	for effect: AudioStreamPlayer in _effects:
		effect.stop()
		effect.stream = null
	spatial.close()
	if _loading:
		_worker.wait_to_finish()
		_loading = false
	_worker = null
	_edit_streams.clear()


func _load_bank()->Dictionary:
	var cached:=BankCache.load_bank()
	return cached if not cached.is_empty() else _render_bank()

func _render_bank() -> Dictionary:
	var synthesis_started:=Time.get_ticks_usec()
	var streams: Dictionary = {}
	var report := {"rate": RATE, "frames": FRAMES, "seconds": SECONDS, "stem_count": STEMS.size(), "peaks": {}, "seam_steps": {}, "pcm_bytes": FRAMES * 2 * STEMS.size(), "synthesis": "original_procedural_miniature"}
	var chords := [[50, 57, 62], [47, 54, 59], [45, 52, 57], [50, 57, 64], [50, 57, 62], [47, 54, 62], [45, 52, 59], [50, 57, 64]]
	var bass := [38, 35, 33, 38, 38, 35, 33, 38]
	var melody := [74, 69, 66, 71, 69, 64, 66, 69, 74, 76, 71, 69, 66, 64, 69, 66]
	var day_mix := PackedFloat32Array()
	var concert_mix := PackedFloat32Array()
	var finale_mix := PackedFloat32Array()
	day_mix.resize(FRAMES)
	concert_mix.resize(FRAMES)
	finale_mix.resize(FRAMES)
	var maximum_gains := {"foundation": -6.5, "wood": -10.0, "air": -13.0, "terrace": -11.5, "concert": -60.0,"wood_deep":-10.0,"wood_weave":-10.0,"wood_market":-10.0,"wood_sylvan":-10.0,"renaissance_fugue":-18.0,"clockwork_waltz":-18.0,"modern_symphony":-18.0}
	report["theme_notes"] = {}
	report["scale_pitch_classes"] = ThemePCM.PITCH_CLASSES
	var absolute_bound := 0.0
	for key in STEMS:
		var samples := PackedFloat32Array()
		samples.resize(FRAMES)
		match key:
			"foundation":
				for bar in range(8):
					for note in chords[bar]:
						_add_note(samples, bar * 3.0, 3.8, int(note), 0.027, "pad", true)
					_add_note(samples, bar * 3.0 + 0.05, 2.8, bass[bar], 0.075, "bass", true)
			"wood":
				for i in range(melody.size()):
					_add_note(samples, i * 1.5 + 0.12, 1.4, melody[i] - 12, 0.105 if i % 2 == 0 else 0.073, "wood", true)
			"wood_deep":
				# Eight spacious low breaths, aligned with the same chord changes.
				for bar in range(8):
					_add_note(samples,bar*3.0+0.25,2.35,melody[bar*2]-12,0.089,"air",true)
			"wood_weave":
				# Light chord arpeggios leave a clear half-bar of silence.
				for bar in range(8):
					for n in range(3):
						_add_note(samples,bar*3.0+0.12+n*0.5,0.68,chords[bar][n]+12,0.082 if n==0 else 0.063,"pluck",true)
			"wood_market", "wood_sylvan":
				report.theme_notes[key] = ThemePCM.render(samples,key,chords,melody,_add_note,_add_pulse)
			"renaissance_fugue", "clockwork_waltz", "modern_symphony":
				report.theme_notes[key] = ThemePCM.render(samples,key,chords,melody,_add_note,_add_pulse)
			"air":
				for i in range(8):
					_add_note(samples, i * 3.0 + 0.75, 2.05, melody[i * 2], 0.064, "air", true)
			"terrace":
				for i in range(4):
					_add_note(samples, i * 6.0 + 2.25, 2.6, [81, 78, 83, 78][i], 0.054, "bell", true)
			"concert":
				# An original call-and-response phrase. The low chord plucks give
				# residents a small shared pulse without turning town music into
				# a rhythm-game backing track. All tails wrap through the loop.
				var lead := [69, 74, 76, 74, 71, 69, 66, 69, 71, 74, 69, 66, 64, 66, 69, 74]
				for i in range(lead.size()):
					var timbre := "piano" if int(i / 2) % 2 == 0 else "wood"
					_add_note(samples, i * 1.5 + 0.18, 1.65, lead[i], 0.105 if i % 4 == 0 else 0.081, timbre, true)
				for bar in range(8):
					# Stage piano keeps a quiet chord beneath each wood response;
					# any odd bar can support the shared tutti finale when the
					# performance begins at a different even bar.
					if bar % 2 == 1:
						for n in range(3):
							_add_note(samples, bar*3.0+0.12+n*0.08, 1.8, chords[bar][n]+12, 0.012, "piano", true)
					for n in range(3):
						_add_note(samples, bar * 3.0 + 0.10 + n * 0.07, 1.30, chords[bar][n], 0.033, "pluck", true)
					_add_note(samples, bar * 3.0 + 1.60, 0.95, chords[bar][1] + 12, 0.026, "pluck", true)
					_add_pulse(samples, bar * 3.0 + 0.02, 0.065, false)
					_add_pulse(samples, bar * 3.0 + 1.52, 0.022, true)
		var peak := 0.0
		for sample in samples:
			peak = maxf(peak, absf(sample))
		report.peaks[key] = peak
		report.seam_steps[key] = absf(samples[0] - samples[FRAMES - 1])
		var day_gain := db_to_linear(float(maximum_gains[key]))
		var concert_db := float(maximum_gains[key])
		if key in STYLE_TRACKS.values():
			concert_db -= 10.0
		elif key == "air":
			concert_db -= 7.0
		elif key == "concert":
			concert_db = -8.0
		var concert_gain := db_to_linear(concert_db)
		# The worker renders a fixed bank without touching live State links.
		# Linked runtime style gains stay below each existing daily maximum.
		var finale_gain := db_to_linear(float(FINALE_GAINS[key]))
		absolute_bound += peak * maxf(day_gain, maxf(concert_gain, finale_gain))
		for i in range(FRAMES):
			day_mix[i] += samples[i] * day_gain
			concert_mix[i] += samples[i] * concert_gain
			finale_mix[i] += samples[i] * finale_gain
		streams[key] = _pcm_stream(samples, true)
	var day_peak := 0.0
	var concert_peak := 0.0
	var finale_peak := 0.0
	for i in range(FRAMES):
		day_peak = maxf(day_peak, absf(day_mix[i]))
		concert_peak = maxf(concert_peak, absf(concert_mix[i]))
		finale_peak = maxf(finale_peak, absf(finale_mix[i]))
	report["mix_peaks"] = {"daily_max_city": day_peak, "concert_max_city": concert_peak,"ensemble_finale_max_city":finale_peak, "absolute_transition_bound": absolute_bound}
	report["mix_seam_steps"] = {"daily_max_city": absf(day_mix[0] - day_mix[FRAMES - 1]), "concert_max_city": absf(concert_mix[0] - concert_mix[FRAMES - 1]),"ensemble_finale_max_city":absf(finale_mix[0]-finale_mix[FRAMES-1])}
	var edits: Dictionary = {}
	report["effect_peaks"] = {}
	var effect_peak := 0.0
	var edit_notes := {"room": [62, 69], "terrace": [74, 81], "road": [57, 62, 66], "erase": [66, 62], "history": [69, 64], "concert": [62, 66, 69], "arrival":[57,62,66], "bakery": [62, 69], "craft":[57,62],"installed":[74,78,81],"tea":[86,81]}
	for kind in edit_notes:
		var samples := PackedFloat32Array()
		samples.resize(int(RATE * 0.8))
		var notes: Array = edit_notes[kind]
		for i in range(notes.size()):
			var timbre := "pluck" if kind in ["concert", "arrival"] else ("wood" if kind in ["road", "craft"] else "bell")
			_add_note(samples, i * 0.065, 0.58, notes[i], 0.09, timbre, false)
		var peak := 0.0
		for sample in samples:
			peak = maxf(peak, absf(sample))
		report.effect_peaks[kind] = peak
		effect_peak = maxf(effect_peak, peak)
		edits[kind] = _pcm_stream(samples, false)
	# Phrase-local flute miniatures follow the same real eight-chord cycle.
	# They use idle effect voices, never a player per cafe or a new loop.
	for bar in range(8):
		var samples := PackedFloat32Array()
		samples.resize(int(RATE*0.8))
		for index in range(2):
			_add_note(samples,0.07+index*0.36,0.34,int(chords[bar][index])+24,0.07,"flute",false)
		var peak := 0.0
		for sample in samples: peak=maxf(peak,absf(sample))
		var kind := "cafe_flute_%d" % bar
		report.effect_peaks[kind]=peak
		effect_peak=maxf(effect_peak,peak)
		edits[kind]=_pcm_stream(samples,false)
	# Actual station arrivals use a single chord-aligned celesta/bell doublet.
	for bar in range(8):
		var samples := PackedFloat32Array();samples.resize(int(RATE*.95))
		_add_note(samples,.0,.68,int(chords[bar][0])+24,.052,"celesta",false)
		_add_note(samples,.19,.68,int(chords[bar][2])+12,.044,"bell",false)
		var peak := 0.
		for sample: float in samples:peak=maxf(peak,absf(sample))
		report.effect_peaks["tram_chime_%d"%bar]=peak;effect_peak=maxf(effect_peak,peak)
		edits["tram_chime_%d"%bar]=_pcm_stream(samples,false)
	# Resident crossings reuse the current chord and the four effect voices.
	# One short arpeggio per real phrase leaves room for the daily melody.
	for bar in range(8):
		for travel_kind: String in ["bridge","arch"]:
			var samples := PackedFloat32Array()
			samples.resize(int(RATE*TRAVEL_DURATION))
			for index in range(3):
				_add_note(samples,index*0.12,0.50,int(chords[bar][index])+12,0.052 if index==0 else 0.040,"pluck" if travel_kind=="bridge" else "wood",false)
			var peak := 0.0
			for sample in samples: peak=maxf(peak,absf(sample))
			var kind := "travel_%s_%d" % [travel_kind,bar]
			report.effect_peaks[kind]=peak
			effect_peak=maxf(effect_peak,peak)
			edits[kind]=_pcm_stream(samples,false)
	report["travel_pcm_bytes"]=8*2*int(RATE*TRAVEL_DURATION)*2
	# Three quiet water/wood pitches per current chord. They are samples for
	# the same four short players; neither stones nor residents create tracks.
	report["stepping_notes"] = []
	for bar in range(8):
		for index in range(3):
			var samples := PackedFloat32Array()
			samples.resize(int(RATE*STEPPING_DURATION))
			var midi := int(chords[bar][index])+24
			_add_note(samples,0.0,0.34,midi,0.055,"water_marimba",false)
			var peak := 0.0
			for sample in samples: peak=maxf(peak,absf(sample))
			var kind := "travel_stepping_%d_%d" % [bar,index]
			report.effect_peaks[kind]=peak
			effect_peak=maxf(effect_peak,peak)
			edits[kind]=_pcm_stream(samples,false)
			report.stepping_notes.append({"stream":kind,"bar":bar,"midi":ThemePCM.quantize(midi),"duration":STEPPING_DURATION,"timbre":"water_marimba"})
	report["stepping_pcm_bytes"]=8*3*int(RATE*STEPPING_DURATION)*2
	# Sparse high bells follow the current chord. They share the four short
	# voices, so more towers do not add loops, nodes or overlapping peals.
	for bar in range(8):
		var samples := PackedFloat32Array()
		samples.resize(int(RATE*TOWER_DURATION))
		_add_note(samples,0.0,1.55,int(chords[bar][0])+24,0.074,"bell",false)
		_add_note(samples,0.375,1.2,int(chords[bar][1])+24,0.035,"bell",false)
		var peak := 0.0
		for sample in samples: peak=maxf(peak,absf(sample))
		var kind := "tower_bell_%d" % bar
		report.effect_peaks[kind]=peak
		effect_peak=maxf(effect_peak,peak)
		edits[kind]=_pcm_stream(samples,false)
	report["tower_pcm_bytes"]=8*int(RATE*TOWER_DURATION)*2
	var replies: Dictionary=ReplyPCM.render(chords,_add_note,_pcm_stream)
	edits.merge(replies.streams)
	report.effect_peaks.merge(replies.peaks)
	report["reply_notes"]=replies.events
	report["reply_pcm_bytes"]=replies.bytes
	effect_peak=maxf(effect_peak,float(replies.maximum))
	var signature_notes: Array=[]
	for bar in range(8):
		var samples:=PackedFloat32Array();samples.resize(int(3.0*RATE))
		for voice in range(4):
			var midi: int=ThemePCM.quantize(int(chords[bar][voice%3])+12*(1 if voice>1 else 0))
			_add_note(samples,.06+voice*.04,2.65,midi,.020,"strings",false)
			signature_notes.append({"bar":bar,"voice":voice,"midi":midi,"timbre":"strings"})
		edits["quartet_%d"%bar]=_pcm_stream(samples,false)
		var peak:=0.0
		for sample: float in samples:peak=maxf(peak,absf(sample))
		report.effect_peaks["quartet_%d"%bar]=peak;effect_peak=maxf(effect_peak,peak)
		samples=PackedFloat32Array();samples.resize(int(.45*RATE))
		_add_note(samples,0,.38,int(chords[bar][0])+12,.035,"wood",false)
		edits["waterwheel_%d"%bar]=_pcm_stream(samples,false)
		peak=0.0
		for sample: float in samples:peak=maxf(peak,absf(sample))
		report.effect_peaks["waterwheel_%d"%bar]=peak;effect_peak=maxf(effect_peak,peak)
	report["signature_notes"]=signature_notes
	var flourishes: Array=[]
	for bar in range(8):
		for tier in range(3,6):
			var samples:=PackedFloat32Array();samples.resize(int(.95*RATE))
			for i in range(tier-1):
				var midi: int=PitchPluck.pitch(bar,i,1)
				_add_note(samples,i*.14,.48,midi,.022,"harp",false)
				flourishes.append({"bar":bar,"tier":tier,"midi":midi,"start":i*.14,"timbre":"harp"})
			if tier==5:
				_add_note(samples,.04,.80,PitchPluck.pitch(bar,4,0),.015,"strings",false)
				_add_note(samples,.30,.58,PitchPluck.pitch(bar,2,0),.014,"strings",false)
			var key: String="quality_flourish_%d_%d"%[tier,bar]
			edits[key]=_pcm_stream(samples,false)
			var peak:=0.0
			for sample: float in samples:peak=maxf(peak,absf(sample))
			report.effect_peaks[key]=peak;effect_peak=maxf(effect_peak,peak)
	report["quality_flourish_notes"]=flourishes
	var upgrades: Array=[]
	for bar in range(8):
		var samples:=PackedFloat32Array();samples.resize(int(1.25*RATE))
		for i in range(5):
			var midi: int=PitchPluck.pitch(bar,i,0)
			_add_note(samples,.10*i,.75,midi,.038,"harp",false)
			upgrades.append({"bar":bar,"midi":midi,"start":.10*i,"timbre":"harp"})
		var key: String="quality_upgrade_%d"%bar
		var peak:=0.0
		for sample: float in samples:peak=maxf(peak,absf(sample))
		edits[key]=_pcm_stream(samples,false);report.effect_peaks[key]=peak;effect_peak=maxf(effect_peak,peak)
	report["quality_upgrade_notes"]=upgrades
	var plucks: Dictionary=PitchPluck.render(_add_note,_pcm_stream)
	edits.merge(plucks.streams)
	report.effect_peaks.merge(plucks.peaks)
	report["house_pluck_notes"]=plucks.notes
	report["house_pluck_pcm_bytes"]=plucks.bytes
	effect_peak=maxf(effect_peak,float(plucks.maximum))
	var bakery: Dictionary=BakeryCues.render(chords,_add_note,_pcm_stream)
	edits.merge(bakery.streams)
	report.effect_peaks.merge(bakery.peaks)
	report["bakery_notes"]=bakery.events
	report["bakery_pcm_bytes"]=bakery.bytes
	effect_peak=maxf(effect_peak,float(bakery.maximum))
	report.mix_peaks["absolute_with_four_edit_voices"] = absolute_bound + effect_peak * db_to_linear(SHORT_GAIN_DB) * 4.0
	# This engine's Panner crossfeeds the opposite channel. With our .65 pan
	# cap, any one output is bounded by 1.65 times the old absolute bound.
	# Apply it even to centered beds for a conservative whole-pool bound.
	report.mix_peaks["absolute_stereo_with_four_short_voices"] = report.mix_peaks.absolute_with_four_edit_voices*(1.0+Spatial.PAN_LIMIT)
	report.synthesis_ms=float(Time.get_ticks_usec()-synthesis_started)/1000.
	return {"streams": streams, "edits": edits, "report": report}


func _add_note(samples: PackedFloat32Array, start: float, duration: float, midi: int, gain: float, timbre: String, wrap: bool) -> void:
	midi = ThemePCM.quantize(midi)
	var frequency := 440.0 * pow(2.0, float(midi - 69) / 12.0)
	var phase_step := TAU * frequency / RATE
	var count := int(duration * RATE)
	var start_frame := int(start * RATE)
	var decay := exp(-1.0 / (RATE * (0.6 if timbre == "bell" else 0.34)))
	var tail := 1.0
	for i in range(count):
		var index := start_frame + i
		if wrap:
			index %= samples.size()
		elif index >= samples.size():
			break
		var t := float(i) / RATE
		var phase := phase_step * i
		var tone := sin(phase)
		var envelope := 0.0
		match timbre:
			"felt_piano":
				envelope=minf(t/.012,1.)*exp(-t*1.9)*minf((duration-t)/.16,1.)
				tone=sin(phase)+.17*sin(phase*2.)*exp(-t*5.)+.035*sin(phase*3.)*exp(-t*7.)
			"warm_pad":
				envelope=pow(sin(PI*t/duration),2.)
				tone=.72*sin(phase+.009*sin(TAU*.7*t))+.22*sin(phase*1.0015)+.08*sin(phase*2.)
			"vibraphone":
				envelope=minf(t/.005,1.)*exp(-t*2.25)*minf((duration-t)/.18,1.)*(.86+.14*cos(TAU*5.6*t))
				tone=sin(phase)+.18*sin(phase*4.)*exp(-t*5.)+.045*sin(phase*10.)*exp(-t*9.)
			"pad":
				envelope = sin(PI * t / duration)
				envelope *= envelope
				tone += 0.10 * sin(phase * 2.0)
			"bass":
				envelope = minf(t / 0.12, 1.0) * minf((duration - t) / 0.5, 1.0)
				tone += 0.14 * sin(phase * 2.0)
			"air":
				envelope = minf(t / 0.35, 1.0) * minf((duration - t) / 0.65, 1.0)
				tone = sin(phase + 0.025 * sin(TAU * 4.6 * t)) + 0.07 * sin(phase * 2.0)
			"horn":
				envelope=minf(t/.12,1.)*minf((duration-t)/.25,1.)
				tone=sin(phase+.012*sin(TAU*4.3*t))+.19*sin(phase*2.)+.065*sin(phase*3.)
			"clarinet":
				envelope=minf(t/.045,1.)*minf((duration-t)/.13,1.)
				tone=sin(phase+.012*sin(TAU*4.8*t))+.29*sin(phase*3.)+.095*sin(phase*5.)
			"celesta":
				envelope=minf(t/.004,1.)*exp(-t*5.3)*minf((duration-t)/.12,1.)
				tone=sin(phase)+.24*sin(phase*2.)*exp(-t*8.)+.085*sin(phase*4.)*exp(-t*12.)
			"strings":
				envelope=minf(t/.16,1.0)*minf((duration-t)/.23,1.0)
				tone=sin(phase+.022*sin(TAU*5.0*t))+.22*sin(phase*2.0)+.10*sin(phase*3.0)+.04*sin(phase*4.0)
			"harpsichord":
				envelope=minf(t/.003,1.0)*exp(-t*5.0)*minf((duration-t)/.10,1.0)
				tone=sin(phase)+.42*sin(phase*2.0)+.23*sin(phase*3.0)+.13*sin(phase*4.0)+.08*sin(phase*6.0)
			"oboe":
				envelope=minf(t/.065,1.0)*minf((duration-t)/.17,1.0)
				tone=sin(phase+.014*sin(TAU*5.2*t))+.38*sin(phase*2.0)+.24*sin(phase*3.0)+.09*sin(phase*5.0)
			"flute":
				envelope=minf(t/0.055,1.0)*minf((duration-t)/0.12,1.0)
				tone=sin(phase+0.018*sin(TAU*5.1*t))+0.09*sin(phase*2.0)+0.025*sin(phase*3.0)
			"accordion":
				envelope = minf(t/0.035,1.0)*minf((duration-t)/0.085,1.0)
				tone = sin(phase+0.01*sin(TAU*4.7*t))+0.28*sin(phase*2.0)+0.15*sin(phase*3.0)+0.07*sin(phase*4.0)+0.035*sin(phase*6.0)
			"wood":
				envelope = minf(t / 0.008, 1.0) * tail * minf((duration - t) / 0.12, 1.0)
				tone += 0.24 * sin(phase * 2.0) + 0.08 * sin(phase * 3.0)
			"water_marimba":
				envelope=minf(t/0.006,1.0)*exp(-t*10.0)*minf((duration-t)/0.10,1.0)
				tone=sin(phase+0.18*exp(-t*28.0)*sin(phase*2.0))+0.18*sin(phase*3.0)*exp(-t*18.0)+0.08*sin(phase*4.0)*exp(-t*28.0)
			"harp":
				envelope=minf(t/0.004,1.0)*exp(-t*4.7)*minf((duration-t)/0.16,1.0)
				tone=sin(phase)+0.28*sin(phase*2.0)*exp(-t*5.0)+0.12*sin(phase*3.0)*exp(-t*8.0)+0.05*sin(phase*4.0)*exp(-t*12.0)
			"marimba":
				envelope=minf(t/0.006,1.0)*exp(-t*7.5)*minf((duration-t)/0.12,1.0)
				tone=sin(phase)+0.27*sin(phase*4.0)*exp(-t*20.0)+0.06*sin(phase*7.0)*exp(-t*30.0)
			"bell":
				envelope = minf(t / 0.012, 1.0) * tail * minf((duration - t) / 0.2, 1.0)
				tone += 0.18 * sin(phase * 3.0)
			"piano":
				envelope = minf(t / 0.009, 1.0) * exp(-t * 2.0) * minf((duration - t) / 0.22, 1.0)
				tone += 0.32 * sin(phase * 2.0) * exp(-t * 3.0) + 0.13 * sin(phase * 3.0) * exp(-t * 5.0)
			"pluck":
				envelope = minf(t / 0.004, 1.0) * exp(-t * 4.0) * minf((duration - t) / 0.15, 1.0)
				tone += 0.30 * sin(phase * 2.0) + 0.12 * sin(phase * 3.0) + 0.05 * sin(phase * 5.0)
		samples[index] += tone * envelope * gain
		tail *= decay


func _add_pulse(samples: PackedFloat32Array, start: float, gain: float, light: bool) -> void:
	var duration := 0.18 if light else 0.40
	var start_frame := int(start * RATE)
	for i in range(int(duration * RATE)):
		var t := float(i) / RATE
		var envelope := minf(t / 0.004, 1.0) * exp(-t * (28.0 if light else 13.0)) * minf((duration - t) / 0.025, 1.0)
		var phase := TAU * (145.0 * t if light else 54.0 * t + 16.0 * (1.0 - exp(-t * 24.0)) / 24.0)
		var tone := sin(phase) + (0.24 * sin(phase * 3.17) if light else 0.08 * sin(phase * 2.0))
		samples[(start_frame + i) % samples.size()] += tone * envelope * gain


func _pcm_stream(samples: PackedFloat32Array, looped: bool) -> AudioStreamWAV:
	var bytes := PackedByteArray()
	bytes.resize(samples.size() * 2)
	for i in range(samples.size()):
		bytes.encode_s16(i * 2, int(clampf(samples[i], -1.0, 1.0) * 32767.0))
	var stream := AudioStreamWAV.new()
	stream.format = AudioStreamWAV.FORMAT_16_BITS
	stream.mix_rate = RATE
	stream.stereo = false
	stream.data = bytes
	if looped:
		stream.loop_mode = AudioStreamWAV.LOOP_FORWARD
		stream.loop_begin = 0
		stream.loop_end = samples.size()
	return stream
