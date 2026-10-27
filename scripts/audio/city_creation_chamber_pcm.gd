extends RefCounted
## Existing foundation/air voices become real orchestral/chamber stems.
## Nocturne is one modal lead texture; the selected city's source stays intact.
static func note(at:float,duration:float,midi:int,gain:float,timbre:String)->Dictionary:
	return preload("res://scripts/audio/city_creation_chamber_score.gd").note(at,duration,midi,gain,timbre,3 if timbre=="felt_nocturne" else 2)
static func bed(kind:String,chords:Array,mode:int,palette:Script)->Array:
	var score=preload("res://scripts/audio/city_creation_chamber_score.gd")
	return score.foundation(chords) if kind=="foundation" else score.counter("air",chords,mode,palette)

static func nocturne(chords:Array,mode:int,palette:Script)->Array:
	var events:Array=[]
	# Eleven primary attacks replace the daytime sparse motif's sixteen.
	# Cello harmonics answer the piano; bar eight leaves a real quiet seam.
	for bar in range(7):
		var chord:Array=chords[bar];var start:=bar*3.+.1875
		var primary:int=palette.quantize(int(chord[[0,2,1,0,1,2,0][bar]])+24,mode,bar)
		events.append(note(start,1.30,primary,.064,"felt_nocturne"))
		if bar%2==0:events.append(note(start+1.5,.45,palette.quantize(int(chord[1])+24,mode,bar),.047,"felt_nocturne"))
		events.append(note(start+.42,2.05,palette.quantize(int(chord[0])+12,mode,bar),.021,"cello_harmonic"))
	return events
