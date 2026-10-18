extends RefCounted
## One actual question and one answer, sharing Music's existing short voices.
const ReplyPCM=preload("res://scripts/audio/city_creation_reply_pcm.gd")
const DURATION := 0.8
const FOCUS_RADIUS := 14.0
const BOUNDARY_WINDOW := 0.12
var enabled := true
var ready := false
var calls := 0
var answers := 0
var skipped := 0
var _owner: Node
var _pairs: Dictionary = {}
var _links_hash := 0
var _have_links := false
var _last_phrase := -1
var _pending: Dictionary = {}
var _active: Dictionary = {}
var _player: AudioStreamPlayer
var _stream: AudioStreamWAV

func setup(music: Node) -> void:
	_owner=music

func set_enabled(value: bool) -> void:
	enabled=value
	if not enabled: clear()

func update_links(pairs: Array, is_ready: bool) -> void:
	var signature := pairs.hash()
	if _have_links and signature==_links_hash and ready==is_ready: return
	_have_links=true
	_links_hash=signature
	ready=is_ready
	_pairs.clear()
	for pair: Dictionary in pairs: _pairs[str(pair.id)]=pair.duplicate(true)
	if not _pending.is_empty() and not _valid(_pending): clear()
	elif not _active.is_empty() and not _valid(_active): clear()

func clear() -> void:
	_pending.clear()
	_clear_active()

func _clear_active() -> void:
	if _player!=null and _player.stream==_stream: _player.stop()
	_active.clear()
	_player=null
	_stream=null

func _pair_valid(pair: Dictionary) -> bool:
	if _owner==null or not enabled or not ready: return false
	if _owner.muted or _owner._loading or _owner.concert_active: return false
	if str(_owner._concert_view.get("phase","idle"))!="idle": return false
	var manual := bool(pair.get("manual",false))
	if not manual and (float(pair.distance)>22.0 or float(pair.empty_gap)>2.7): return false
	if str(pair.from_district).is_empty() or str(pair.to_district).is_empty(): return false
	if pair.from_district==pair.to_district or (not manual and pair.from_style==pair.to_style): return false
	for side: String in ["from","to"]:
		var id := str(pair[side+"_id"])
		if not _owner._house_music.has(id): return false
		var house: Dictionary = _owner._house_music[id]
		if str(house.district_id)!=str(pair[side+"_district"]) or str(house.style)!=str(pair[side+"_style"]): return false
		var at: Vector2 = pair[side+"_position"]
		if Vector2(house.position).distance_to(at)>0.001: return false
	if _owner.acoustic.focus_weight(str(pair.from_id))<=0.0 and _owner.acoustic.focus_weight(str(pair.to_id))<=0.0: return false
	return true

func _valid(event: Dictionary) -> bool:
	var pair: Dictionary = _pairs.get(str(event.pair_id),{})
	for side:String in ["from","to"]:
		if event.has(side+"_era") and str(_owner._house_music.get(str(event[side+"_id"]),{}).get("era_theme","pastoral"))!=str(event[side+"_era"]):return false
	return not pair.is_empty() and int(event.pair_hash)==pair.hash() and _pair_valid(pair)

func _foreground_busy() -> bool:
	return bool(_owner.cafe_music_report().audible) or bool(_owner.travel_music_report().audible) or bool(_owner.tower_music_report().audible)

func reserves_tower_gap(phrase: int) -> bool:
	# Nearby towers otherwise take every even bar, starving a two-bar reply.
	# Leave one potential question bar per 24s cycle; three other bell bars
	# remain, and tea/travel/construction still take precedence.
	if posmod(phrase,8)!=4 or not _pending.is_empty() or _foreground_busy(): return false
	var has_slot:=false
	for effect: AudioStreamPlayer in _owner._effects:
		if not effect.playing: has_slot=true;break
	if not has_slot: return false
	for pair: Dictionary in _pairs.values():
		if _pair_valid(pair): return true
	return false

func _direction(pair: Dictionary, phrase: int) -> Dictionary:
	var reverse: bool = _owner.acoustic.focus_weight(str(pair.to_id))>_owner.acoustic.focus_weight(str(pair.from_id))
	var a := "to" if reverse else "from"
	var b := "from" if reverse else "to"
	return {"pair_id":str(pair.id),"pair_hash":pair.hash(),"from_id":str(pair[a+"_id"]),"to_id":str(pair[b+"_id"]),
		"manual":bool(pair.get("manual",false)),
		"from_district":str(pair[a+"_district"]),"to_district":str(pair[b+"_district"]),
		"from_style":str(pair[a+"_style"]),"to_style":str(pair[b+"_style"]),
		"from_era":str(_owner._house_music[str(pair[a+"_id"])].get("era_theme","pastoral")),"to_era":str(_owner._house_music[str(pair[b+"_id"])].get("era_theme","pastoral")),
		"from_position":Vector2(pair[a+"_position"]),"to_position":Vector2(pair[b+"_position"]),"call_phrase":phrase}

func _play(event: Dictionary, phrase: int, answer: bool) -> bool:
	if not _valid(event) or _foreground_busy(): return false
	var plan: Dictionary=ReplyPCM.plan(event,phrase,answer)
	var key: String=plan.stream_key
	if not _owner._edit_streams.has(key): return false
	for effect: AudioStreamPlayer in _owner._effects:
		if effect.playing: continue
		_clear_active()
		_player=effect
		_stream=_owner._edit_streams[key]
		_active=event.duplicate(true)
		_active.merge(plan,true)
		_active.merge({"phase":"answer" if answer else "call","generation":1 if answer else 0,
			"source_id":str(event.to_id if answer else event.from_id),"phrase":phrase},true)
		var source_id:=str(event.to_id if answer else event.from_id)
		_owner.play_effect_at(effect,_stream,event.to_position if answer else event.from_position,_owner.acoustic.weight(source_id))
		if answer: answers+=1
		else: calls+=1
		return true
	return false

func _observe_finished() -> void:
	if _active.is_empty() or _player==null or _player.stream!=_stream or _player.playing:return
	if not _valid(_active):clear();return
	if str(_active.phase)=="call" and not _pending.is_empty() and _pending.pair_id==_active.pair_id:
		_pending["call_complete"]=true
	elif str(_active.phase)=="answer" and bool(_active.get("call_complete",false)):
		_owner.record_completed_district_answer(str(_active.from_district),str(_active.to_district),str(_active.from_era),str(_active.to_era))
	_clear_active()

func at_phrase(absolute_phrase: int) -> void:
	_observe_finished()
	# Mark every observed phrase, including startup halfway through a bar.
	# A later call in that same phrase must never manufacture a downbeat.
	if absolute_phrase==_last_phrase: return
	_last_phrase=absolute_phrase
	if not _pending.is_empty() and not _valid(_pending): clear()
	if not _active.is_empty() and not _valid(_active): clear()
	if _owner==null: return
	var on_boundary := fposmod(float(_owner._playback_clock()),3.0)<=BOUNDARY_WINDOW
	if not _pending.is_empty():
		var pending := _pending
		_pending={}
		if absolute_phrase==int(pending.call_phrase)+1 and on_boundary:
			if not _play(pending,absolute_phrase,true): skipped+=1
		else: skipped+=1
		return
	if posmod(absolute_phrase,4)!=0 or not on_boundary: return
	var eligible: Array[String] = []
	for id: String in _pairs:
		if _pair_valid(_pairs[id]): eligible.append(id)
	if eligible.is_empty(): return
	eligible.sort()
	var selected: Dictionary = _pairs[eligible[posmod(int(absolute_phrase/4),eligible.size())]]
	var event := _direction(selected,absolute_phrase)
	if _play(event,absolute_phrase,false): _pending=event
	else: skipped+=1

func report() -> Dictionary:
	_observe_finished()
	if not _pending.is_empty() and not _valid(_pending): clear()
	if not _active.is_empty():
		if not _valid(_active): clear()
		elif _player!=null and _player.stream!=_stream:
			# Construction may take this voice. An interrupted question cannot
			# leave a detached answer queued after its attribution disappears.
			if str(_active.phase)=="call": _pending.clear()
			_clear_active()
		elif _player==null or not _player.playing: _clear_active()
	var audible := not _active.is_empty()
	var result := {"audible":audible,"phase":"","generation":0,"source_id":"","from_id":"","to_id":"",
		"style":"","era_theme":"","timbre":"","from_style":"","to_style":"","phrase":_last_phrase,"elapsed":0.0,"duration":DURATION,
		"enabled":enabled,"ready":ready,"pair_count":_pairs.size(),"calls":calls,"answers":answers,"skipped":skipped,
		"stream_key":"","pending":not _pending.is_empty(),"manual":false,"manual_pairs":0}
	for pair: Dictionary in _pairs.values():
		if bool(pair.get("manual",false)): result.manual_pairs+=1
	if audible:
		result.merge(_active,true)
		result.elapsed=_player.get_playback_position()
	return result
