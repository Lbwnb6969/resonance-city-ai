extends RefCounted
## Read-only, owner-local harmony for short notes; never stored on the city.
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Pitch=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
static func note(owner:Node,midi:int,clock:float)->int:
	var harmony:=current(owner,clock)
	return midi if harmony.signature.is_empty() else Palette.Grid.snap_to_chord_tone(midi,harmony.chord)
static func current(owner:Node,clock:float)->Dictionary:
	var bar:=Palette.Grid.bar(clock);var data:Dictionary=owner.get_meta("authored_score",{})
	var city:RefCounted=owner._pluck_city
	if city!=null and data.get("city",0)==city.get_instance_id() and data.get("revision",-1)==city.revision and data.get("harmony",[]).size()==8:
		return {"chord":data.harmony[bar],"bar":bar,"mode":int(data.document.harmony_mode),"signature":str(data.signature)}
	return {"chord":Palette.chords(maxi(0,owner.harmony_mode()))[bar],"bar":bar,"mode":owner.harmony_mode(),"signature":""}
static func pluck(owner:Node,base:Dictionary,clock:float)->Dictionary:
	if base.is_empty():return base
	var harmony:=current(owner,clock)
	if harmony.signature.is_empty():return base
	var result:=base.duplicate();var midi:=Palette.Grid.snap_to_chord_tone(int(base.midi),harmony.chord)
	result.merge({"midi":midi,"bar":harmony.bar,"stream_key":Pitch.stream_key(str(base.timbre),midi),"harmony_signature":harmony.signature},true)
	return result
