extends RefCounted
## Real counter transitions become one quiet spatial phrase, never a new voice.
const DURATION := 0.64
const RADIUS := 14.0
var _owner: Node
var _seen: Dictionary = {}
var _pending: Dictionary = {}
var _active: Dictionary = {}
var _player: AudioStreamPlayer
var _stream: AudioStreamWAV
var _last_phrase := -1
var cues := 0
var skipped := 0
var coalesced:=0
var _group_last:Dictionary={}

func setup(music: Node) -> void:
	_owner=music
	reset()

func reset() -> void:
	clear()
	_seen.clear()
	_group_last.clear()
	if _owner==null or _owner._pluck_city==null: return
	for house: Dictionary in _owner._pluck_city.houses:
		var id := str(house.id)
		var supply: Dictionary = _owner._pluck_city.bakery_supply.get(id,{})
		_seen[id]=[int(supply.get("produced",0)),int(supply.get("served",0))]

func clear() -> void:
	_pending.clear()
	if _player!=null and _player.stream==_stream: _player.stop()
	_active.clear();_player=null;_stream=null

func _valid(event: Dictionary) -> bool:
	if _owner==null or _owner._loading or _owner.muted or _owner.concert_active: return false
	if str(_owner._concert_view.get("phase","idle"))!="idle": return false
	# State edits are immediate; the rendered/music source table can still be
	# the last published version during an asynchronous rebuild.
	var index: int = _owner._pluck_city._house_index(str(event.source_id))
	if index<0 or str(_owner._pluck_city.houses[index].role)!="bakery": return false
	var shop: Dictionary = _owner._house_music.get(str(event.source_id),{})
	if shop.is_empty() or str(shop.role)!="bakery" or _owner.acoustic.focus_weight(str(event.source_id))<=0.0 or _owner.acoustic.mode=="city": return false
	if str(event.kind)=="purchased":
		var home_index: int = _owner._pluck_city._house_index(str(event.home_id))
		if home_index<0 or str(_owner._pluck_city.houses[home_index].role)!="residential": return false
		var home: Dictionary = _owner._house_music.get(str(event.home_id),{})
		if home.is_empty() or str(home.role)!="residential": return false
	return shop.position==event.position

func queue(kind: String,shop_id: String,home_id: String="") -> bool:
	if kind not in ["baked","purchased"] or _owner==null or _owner._pluck_city==null: return false
	var supply: Dictionary = _owner._pluck_city.bakery_supply.get(shop_id,{})
	var index := 0 if kind=="baked" else 1
	var count := int(supply.get("produced" if index==0 else "served",0))
	var seen: Array = _seen.get(shop_id,[0,0])
	if count<=int(seen[index]): return false
	seen[index]=count;_seen[shop_id]=seen
	var shop: Dictionary = _owner._house_music.get(shop_id,{})
	if shop.is_empty(): return false
	var event := {"kind":kind,"source_id":shop_id,"home_id":home_id,"counter":count,"position":shop.position,"queued_at":_owner._playback_clock()}
	if not _valid(event): skipped+=1;return false
	var region:=str(shop.get("district_id",""))
	if region.is_empty():region=shop_id
	event.region_id=region
	if _owner._playback_clock()-float(_group_last.get(region,-INF))<6.:coalesced+=1;return true
	# One pending phrase for the entire city. A purchase takes precedence over
	# production; simultaneous batches/people never create an audible backlog.
	if not _pending.is_empty() and str(_pending.kind)=="purchased" and kind=="baked":coalesced+=1;return true
	if not _pending.is_empty() and str(_pending.kind)==kind and _owner._listener_focus.distance_squared_to(_pending.position)<_owner._listener_focus.distance_squared_to(event.position):coalesced+=1;return true
	_pending=event
	return true

func at_phrase(phrase: int,offset_sec:float=0.) -> void:
	if phrase==_last_phrase: return
	_last_phrase=phrase
	if _pending.is_empty(): return
	var event := _pending;_pending={}
	if not _valid(event) or _owner._playback_clock()-float(event.queued_at)>3.1 or absf(fposmod(_owner._playback_clock(),3.0)-offset_sec)>.12: skipped+=1;return
	# Independent micro-slots fit the bounded pool; an earlier cafe or bell
	# no longer discards this real production reward.
	var key := "bakery_%s_%d" % [event.kind,posmod(phrase,8)]
	if not _owner._edit_streams.has(key): skipped+=1;return
	for player: AudioStreamPlayer in _owner._effects:
		if player.playing: continue
		_player=player;_stream=preload("res://scripts/audio/city_creation_chamber_ornaments.gd").wave(_owner,_owner._edit_streams[key])
		_active=event.duplicate();_active.phrase=phrase;_active.stream_key=key
		_owner.play_effect_at(player,_stream,event.position,_owner.acoustic.focus_weight(str(event.source_id))*(1.0-smoothstep(18.0,32.0,_owner.acoustic.zoom)))
		cues+=1
		_group_last[str(event.get("region_id",event.source_id))]=_owner._playback_clock()
		return
	skipped+=1

func report() -> Dictionary:
	if not _pending.is_empty() and not _valid(_pending): _pending.clear()
	var audible := _player!=null and _player.playing and _player.stream==_stream and not _active.is_empty() and _valid(_active)
	if not audible and _player!=null and _player.stream==_stream and _player.playing: _player.stop()
	var result := {"audible":audible,"pending":_pending.duplicate(),"cues":cues,"skipped":skipped,"coalesced":coalesced,"source_id":"","home_id":"","kind":"","duration":DURATION,"elapsed":0.0,"phrase":-1}
	if audible: result.merge(_active,true);result.elapsed=_player.get_playback_position()
	return result

static func render(chords: Array,add_note: Callable,pcm_stream: Callable) -> Dictionary:
	var result := {"streams":{},"peaks":{},"events":[],"bytes":0,"maximum":0.0}
	for bar in range(chords.size()):
		for kind: String in ["baked","purchased"]:
			var samples := PackedFloat32Array();samples.resize(int(22050*DURATION))
			var notes: Array = [int(chords[bar][0])+12,int(chords[bar][1])+12] if kind=="baked" else [int(chords[bar][2])+12,int(chords[bar][0])+12]
			var timbre := "wood" if kind=="baked" else "pluck"
			var key := "bakery_%s_%d" % [kind,bar]
			for index in range(2):
				var event := {"stream":key,"phrase":bar,"start":index*.1875,"duration":.42,"midi":notes[index],"gain":.055 if index==0 else .040,"timbre":timbre}
				add_note.call(samples,event.start,event.duration,event.midi,event.gain,event.timbre,false)
				result.events.append(event)
			var peak := 0.0
			for value: float in samples: peak=maxf(peak,absf(value))
			result.streams[key]=pcm_stream.call(samples,false);result.peaks[key]=peak
			result.maximum=maxf(result.maximum,peak);result.bytes+=samples.size()*2
	return result
