extends RefCounted
## A supplied salon's flute/oboe answer is one PCM in one existing short slot.
const Supply=preload("res://scripts/world/city_creation_civic_supply.gd")
static func tick(demo:Node3D)->void:
	var music:Node=demo.music;var before:int=demo.get_meta("civic_tea_cue",0)
	if music._cafe_cues==before:return
	demo.set_meta("civic_tea_cue",music._cafe_cues)
	var id:=str(music._cafe_source)
	if music._loading or music.muted or music.concert_active or Supply.status(demo.state,id).tier<2:return
	var mode:=maxi(0,music.harmony_mode());var bar:int=music.CueGrid.bar(music.CueGrid.transport_clock(music))
	var chord:Array=music.Palette.chords(mode)[bar];var key:="%d/%d"%[mode,bar]
	var cache:Dictionary=music.get_meta("civic_duets",{})
	if not cache.has(key):
		var samples:=PackedFloat32Array();samples.resize(17640)
		music._add_harmony_note(samples,0.,.65,int(chord[0])+24,.038,"flute",false)
		music._add_harmony_note(samples,0.,.65,int(chord[1])+24,.026,"oboe",false)
		if cache.size()>=16:cache.erase(cache.keys()[0])
		cache[key]=music._pcm_stream(samples,false);music.set_meta("civic_duets",cache)
	for effect:AudioStreamPlayer in music._effects:
		if effect.playing:continue
		music.play_effect_at(effect,cache[key],music._source_position(id),music.acoustic.focus_weight(id)*.7)
		var events:Array=music.get_meta("civic_duet_events",[]);events.append({"source":id,"mode":mode,"bar":bar,"pitches":[int(chord[0])+24,int(chord[1])+24]})
		if events.size()>64:events.pop_front()
		music.set_meta("civic_duet_events",events);return
