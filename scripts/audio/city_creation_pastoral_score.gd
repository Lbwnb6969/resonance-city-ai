extends RefCounted
## Authored River Sketch v1: presentation, answer, ascent, cadence. 80BPM / 4/4.
const VERSION:=1
const ID:="pastoral_breeze_v1"
const Register=preload("res://scripts/audio/city_creation_score_register.gd")
const Events=preload("res://scripts/audio/city_creation_score_events.gd")
# Bar-local [beat, duration in beats, MIDI]. E connects D to F# on a weak eighth.
const A:=[[[0.,1.,74],[1.5,.5,76],[2.,1.5,78]],[[.5,1.,78],[2.,1.,74],[3.5,.5,73]],[[0.,1.5,71],[2.,.5,74],[3.,.75,78]],[[.5,.5,76],[1.5,.5,73],[2.5,1.,69]],[[0.,.75,74],[1.,.5,78],[2.,1.25,81]],[[.5,.5,78],[1.5,.5,74],[2.5,1.,71]],[[0.,1.,71],[1.5,.5,73],[2.,1.,76]],[[0.,1.,78],[1.5,.5,76],[2.,1.75,74]]]
const B:=[[[0.,1.5,74],[2.,.5,76],[2.5,1.,78]],[[0.,.75,81],[1.5,.5,78],[2.5,1.,74]],[[.5,.5,71],[1.5,1.,74],[3.,.75,78]],[[0.,1.,76],[1.5,.5,73],[2.5,1.,69]],[[0.,.5,78],[.75,.5,81],[1.5,.5,83],[2.5,1.,81]],[[.5,1.,78],[2.,.5,74],[3.,.75,71]],[[0.,1.,73],[1.5,.5,76],[2.5,1.,69]],[[0.,1.,78],[1.5,.5,76],[2.,1.75,74]]]

static func event(beat:float,length:float,midi:int,gain:float,timbre:String,role:String,layer:int)->Dictionary:
	return {"start":beat*.75,"duration":length*.75,"beat":beat,"beats":length,"midi":midi,"gain":gain,"timbre":timbre,"role":role,"layer":layer,"register_planned":true,"preset":ID,"preset_version":VERSION,"dyad":false,"suspension":false}

static func lead(variant:int,night:bool=false)->Array[Dictionary]:
	var material:Array=A if variant==0 else B
	var pitches:Array=[]
	for bar:Array in material:
		for n:Array in bar:pitches.append(int(n[2]))
	var planned:=Register.plan(pitches,Vector2i(69,86),[2,4,6,7,9,11,1])
	var out:Array[Dictionary]=[];var serial:=0
	for bar in range(8):
		for i in range(material[bar].size()):
			var n:Array=material[bar][i];var midi:int=planned[serial];serial+=1
			if night and i==1 and bar%2==1:continue
			var row:=event(bar*4.+float(n[0]),float(n[1])*(1.10 if night else 1.),midi,.056 if night else .068 if i==0 else .052,"felt_nocturne" if night else "flute","lead",3)
			row.primary=true;row.phrase_function=["presentation","answer","development","cadence"][bar/2];row.passing=bar==0 and i==1
			if row.passing:row.passing_from=74;row.resolves_to=78
			out.append(row)
	return out

static func accompaniment(kind:String,chords:Array)->Array[Dictionary]:
	var out:Array[Dictionary]=[];var previous:=57
	for bar in range(8):
		var chord:Array=chords[bar]
		if kind=="foundation":
			var root:=36+posmod(int(chord[0]),12)
			out.append(event(bar*4.,4.32,root,.040,"bass","foundation",1))
			out.append(event(bar*4.,4.25,root+7,.012,"horn","foundation",1))
			continue
		var slots:Array=([.5,1.5,2.5] if bar%2==0 else [0.,1.,3.]) if kind=="air" else ([3.25] if bar in [1,3,5] else [])
		for i in range(slots.size()):
			var pitch:int=int(chord[[0,2,1][i%3]])+12
			var choices:=Register.plan([previous,pitch],Vector2i(52,69),[2,4,6,7,9,11,1])
			var midi:int=choices[-1];previous=midi
			out.append(event(bar*4.+float(slots[i]),.60 if kind=="air" else .65,midi,.025 if kind=="air" else .020,"guitar" if kind=="air" else "cello_harmonic","pulse" if kind=="air" else "answer",2))
	return out

static func bake(add:Callable,make:Callable,score:Script,chords:Array)->Dictionary:
	var out:={"streams":{},"notes":{},"peaks":{}}
	for variant in range(3):
		var key:=ID+"/lead/"+str(variant);var events:=lead(variant)
		if not Events.valid(events):return {}
		var rendered:Dictionary=score.render(events,add,make)
		out.streams[key]=rendered.stream;out.notes[key]=rendered.notes;out.peaks[key]=rendered.peak
	for kind:String in ["foundation","air","terrace","night"]:
		var key:=ID+"/"+kind
		var events:=lead(0,true) if kind=="night" else accompaniment(kind,chords)
		if not Events.valid(events):return {}
		var rendered:Dictionary=score.render(events,add,make)
		out.streams[key]=rendered.stream;out.notes[key]=rendered.notes;out.peaks[key]=rendered.peak
	return out
