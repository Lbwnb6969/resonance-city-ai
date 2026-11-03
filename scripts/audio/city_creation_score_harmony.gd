extends RefCounted
## Read-only, owner-local harmony for short notes; never stored on the city.
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Pitch=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
static func note(owner:Node,midi:int,clock:float)->int:
	var harmony:=current(owner,clock)
	return midi if harmony.signature.is_empty() else Palette.Grid.snap_to_chord_tone(midi,harmony.chord)
static func current(owner:Node,clock:float)->Dictionary:
	var candidate:=preload("res://scripts/audio/city_creation_game_music_harmony.gd").current(owner,clock)
	if not candidate.is_empty():return candidate
	var onset:=Palette.Grid.quantize_cue_onset(clock)
	var bar:=Palette.Grid.bar(clock);var data:=preload("res://scripts/audio/city_creation_score_playback.gd").at(owner,onset)
	var city:RefCounted=owner._pluck_city
	if city!=null and not data.is_empty() and data.get("harmony",[]).size()==8:
		bar=preload("res://scripts/audio/city_creation_score_playback.gd").bar_at(owner,onset)
		return {"chord":data.harmony[bar],"bar":bar,"mode":int(data.document.harmony_mode),"signature":str(data.signature)}
	return {"chord":Palette.chords(maxi(0,owner.harmony_mode()))[bar],"bar":bar,"mode":owner.harmony_mode(),"signature":""}
static func pluck(owner:Node,base:Dictionary,clock:float)->Dictionary:
	if base.is_empty():return base
	var physical:=preload("res://scripts/audio/city_creation_free_music_route.gd").plan(owner,base)
	if not physical.is_empty():return physical
	var harmony:=current(owner,clock)
	if harmony.signature.is_empty():return base
	var result:=base.duplicate();var midi:=Palette.Grid.snap_to_chord_tone(int(base.midi),harmony.chord)
	var candidate_key:=preload("res://scripts/audio/city_creation_game_music_shorts.gd").plan_key(owner,str(base.timbre),int(base.midi))
	if not candidate_key.is_empty():return result.merged({"midi":-1 if harmony.unpitched else midi,"bar":-1,"stream_key":candidate_key,"harmony_signature":harmony.signature,"unpitched":harmony.unpitched},true)
	result.merge({"midi":midi,"bar":harmony.bar,"stream_key":Pitch.stream_key(str(base.timbre),midi),"harmony_signature":harmony.signature},true)
	return result
