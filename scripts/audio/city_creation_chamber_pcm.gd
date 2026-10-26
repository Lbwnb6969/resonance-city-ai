extends RefCounted
## Existing foundation/air voices become real orchestral/chamber stems.
## Nocturne is one modal lead texture; the selected city's source stays intact.
static func note(at:float,duration:float,midi:int,gain:float,timbre:String)->Dictionary:
	return {"start":at,"duration":duration,"midi":midi,"gain":gain,"timbre":timbre}
static func bed(kind:String,chords:Array,mode:int,palette:Script)->Array:
	var events:Array=[]
	for bar in range(8):
		var chord:Array=chords[bar];var start:=bar*3.
		if kind=="foundation":
			for midi:int in chord:events.append(note(start+.16,2.65,midi,.010,"strings"))
			events.append(note(start+.16,2.7,int(chord[0])-12,.038,"bass"))
			for midi:int in [int(chord[0]),int(chord[0])+7]:events.append(note(start+.16,2.65,midi,.012,"horn"))
		elif kind=="air":
			for beat in range(3):
				events.append(note(start+.16+beat*.75,.64,palette.quantize(int(chord[[0,2,1][beat]])+12,mode,bar),.035,"guitar"))
			events.append(note(start+.42,1.85,palette.quantize(int(chord[2])+24,mode,bar),.029,"flute"))
	return events
static func nocturne(chords:Array,mode:int,palette:Script)->Array:
	var events:Array=[]
	# Eleven primary attacks replace the daytime sparse motif's sixteen.
	# Cello harmonics answer the piano; bar eight leaves a real quiet seam.
	for bar in range(7):
		var chord:Array=chords[bar];var start:=bar*3.+.16
		var primary:int=palette.quantize(int(chord[[0,2,1,0,1,2,0][bar]])+24,mode,bar)
		events.append(note(start,1.60,primary,.064,"felt_nocturne"))
		if bar%2==0:events.append(note(start+1.5,1.15,palette.quantize(int(chord[1])+24,mode,bar),.047,"felt_nocturne"))
		events.append(note(start+.42,2.05,palette.quantize(int(chord[0])+12,mode,bar),.021,"cello_harmonic"))
	return events
