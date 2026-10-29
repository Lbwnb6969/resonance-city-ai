extends RefCounted
const Grid=preload("res://scripts/audio/city_creation_cue_grid.gd")
const Harmony=preload("res://scripts/audio/city_creation_score_harmony.gd")
var demo
var last_tick:=-INF
var mark:=""
var events:Array[Dictionary]=[]
func allowed()->bool:return not demo.music.muted and not demo.music.concert_active and not demo.music._loading and not demo.music.phonograph.active
func tick(ruler:Dictionary,at:Vector2)->void:
	var current:=""
	if ruler.get("snap_enabled",false):
		for arc:Dictionary in ruler.get("arcs",[]):
			var degrees:=rad_to_deg(float(arc.turn))
			if absf(degrees-snappedf(degrees,15.))<.001:current+="%d/"%roundi(degrees)
	if current==mark:return
	mark=current
	if current.is_empty() or not allowed():return
	var clock:=Grid.transport_clock(demo.music)
	if clock-last_tick<.35:return
	last_tick=clock;_play(at,false)
func close(at:Vector2)->void:
	if not allowed():return
	preload("res://scripts/audio/city_creation_chamber_ornaments.gd").request(demo.music,"road_closure",str(at),at,func():closure_pair(at),2)
static func closure_notes(chord:Array)->Array[int]:
	var notes:Array[int]=[]
	for midi in range(76,89):
		if chord.any(func(n):return posmod(int(n)-midi,12)==0):notes.append(midi)
	for gap in [7,5]:
		for first:int in notes:
			if first+gap in notes:return [first,first+gap]
	return []
func closure_pair(at:Vector2)->void:
	if not allowed():return
	var music=demo.music;var clock:=Grid.transport_clock(music)
	var notes:=closure_notes(Harmony.current(music,clock).chord)
	var free:Array[AudioStreamPlayer]=[]
	for player:AudioStreamPlayer in music._effects:
		if not player.playing:free.append(player)
	if notes.size()!=2 or free.size()<2:return
	for index in range(2):
		var key:="house_pluck_harp_%d"%notes[index]
		var stream:AudioStreamWAV=music._edit_streams[key].duplicate()
		stream.set_meta("chamber_midi",notes[index]);stream.set_meta("chamber_key",key);stream.set_meta("chamber_timbre","harp")
		music.play_effect_at(free[index],stream,at,.68)
	events.append({"kind":"perfect_fifth" if notes[1]-notes[0]==7 else "inverted_fifth","clock":clock,"onset":Grid.quantize_cue_onset(clock),"midi":notes,"at":at,"voices":2})
	if events.size()>64:events.pop_front()
func _play(at:Vector2,closure:bool)->void:
	var music=demo.music;var clock:=Grid.transport_clock(music);var onset:=Grid.quantize_cue_onset(clock)
	var root:int=Harmony.current(music,clock).chord[0]+24
	var notes:Array[int]=[root]
	if closure:notes.append(root+7)
	var free:Array[AudioStreamPlayer]=[]
	for player:AudioStreamPlayer in music._effects:
		if not player.playing:free.append(player)
	if free.size()<notes.size():return
	for i in range(notes.size()):
		var key:="house_pluck_%s_%d"%["harp" if closure else "pluck",notes[i]]
		var player:AudioStreamPlayer=free[i];var stream:AudioStreamWAV=music._edit_streams[key]
		music.play_effect_at(player,stream,at,.68 if closure else .12)
		player.play(maxf(0.,float(stream.get_meta("cue_preroll",0.))-(onset-clock)))
	events.append({"kind":"perfect_fifth" if closure else "tick","clock":clock,"onset":onset,"midi":notes,"at":at,"voices":notes.size()})
	if events.size()>64:events.pop_front()
