extends RefCounted
## Full diatonic companions; the existing five-note lead stays recognizable.
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const THIRD:=[3,4]
const SIXTH:=[8,9]
static func companion_midi(midi:int,mode:int=-1,bar:int=0,prefer_sixth:bool=false)->int:
	var tones:Array=Palette.KEY_TONES[maxi(0,mode)]
	var intervals:Array=SIXTH if prefer_sixth else THIRD
	for direction:int in ([1,-1] if midi<76 else [-1,1]):
		for interval:int in intervals:
			var candidate:=midi+direction*interval
			if posmod(candidate,12) in tones:return candidate
	return midi
static func suspension_midi(primary:int,resolved:int,mode:int=-1,_bar:int=0)->int:
	# A real fourth above the held bass descends to its third; never a random
	# neighboring pentatonic pitch mislabeled as a 4-3 suspension.
	var fourth:=primary+5
	return fourth if resolved-primary in THIRD and posmod(fourth,12) in Palette.KEY_TONES[maxi(0,mode)] else resolved
static func emit(samples:PackedFloat32Array,events:Array[Dictionary],add:Callable,start:float,duration:float,midi:int,gain:float,timbre:String,mode:int=-1)->void:
	var bar:=floori(start/3.)
	var prior:Dictionary=preload("res://scripts/audio/city_creation_counterpoint.gd").previous(events,timbre,start)
	var primary:int=Palette.quantize(midi,mode,bar) if mode>=0 else midi+[-1,1,0,-1,0,-1,0,-1,1,0,-1,0][posmod(midi,12)]
	_note(samples,events,add,start,duration,primary,gain,timbre,false)
	var primary_event:Dictionary=events[-1]
	if duration<.65 or timbre not in ["wood","felt_piano","piano","strings","flute","harpsichord"]:return
	var cadence:=duration>=1.1 and fposmod(start,3.)>=1.35
	var other:=companion_midi(primary,mode,bar,not cadence and floori(start/.75)%2==1)
	other=preload("res://scripts/audio/city_creation_counterpoint.gd").choose(primary,mode,prior,other)
	primary_event["companion_midi"]=other
	if other==primary:return
	var delay:=.022 if fposmod(start,3.)<.1875 else 0.
	primary_event["companion_delay"]=delay
	var suspension:=suspension_midi(primary,other,mode,bar) if cadence else other
	if suspension!=other:
		_note(samples,events,add,start+delay,duration*.375-delay,suspension,gain*.28,timbre,true,true)
		_note(samples,events,add,start+duration*.375,duration*.56,other,gain*.30,timbre,true)
	else:_note(samples,events,add,start+delay,duration*.92-delay,other,gain*.30,timbre,true)
static func _note(samples:PackedFloat32Array,events:Array[Dictionary],add:Callable,start:float,duration:float,midi:int,gain:float,timbre:String,dyad:bool,suspension:bool=false)->void:
	add.call(samples,start,duration,midi,gain,timbre,true)
	events.append({"start":start,"duration":duration,"midi":midi,"gain":gain,"timbre":timbre,"dyad":dyad,"suspension":suspension})
