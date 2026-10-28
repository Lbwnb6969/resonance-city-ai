extends RefCounted
## Three authored subjects, each with A/B/C. Shared beat clock, distinct syntax.
const VERSION:=1
const STYLES:=["pastoral_breeze","deep_flow","felt_nocturne"]
const Pastoral=preload("res://scripts/audio/city_creation_pastoral_score.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Register=preload("res://scripts/audio/city_creation_score_register.gd")
const Events=preload("res://scripts/audio/city_creation_score_events.gd")
const DEEP:=[
	[[[0.,1.5,62],[2.,.5,66],[3.,.75,69]],[[.5,1.5,66],[2.5,1.,62]],[[0.,1.,59],[1.5,.5,62],[2.5,1.25,66]],[[.5,1.,64],[2.,1.5,61]],[[0.,1.,66],[1.5,.5,69],[2.5,1.,74]],[[.5,1.5,71],[2.5,1.,66]],[[0.,1.,64],[1.5,.5,61],[2.5,1.,57]],[[0.,1.5,66],[2.,1.75,62]]],
	[[[0.,.5,66],[.75,.5,69],[1.5,1.,74],[3.,.75,73]],[[0.,1.,71],[1.5,.5,66],[2.5,1.,62]],[[.5,.5,59],[1.25,.5,62],[2.,.5,66],[3.,.75,69]],[[0.,1.5,68],[2.,.5,64],[3.,.75,61]],[[0.,.5,69],[.75,.5,74],[1.5,1.,78]],[[.5,.5,74],[1.5,.5,71],[2.5,1.,66]],[[0.,1.5,64],[2.,.5,61],[3.,.75,57]],[[0.,1.,66],[1.5,.5,64],[2.5,1.25,62]]],
	[[[0.,2.,50],[2.5,1.,57]],[[.5,1.,54],[2.,1.5,50]],[[0.,2.5,47]],[[.5,1.,49],[2.,1.5,52]],[[0.,1.5,54],[2.,.75,57],[3.,.75,62]],[[.5,2.,59]],[[0.,1.5,57],[2.,1.,52]],[[0.,3.5,50]]]
]
const NIGHT:=[
	[[[.5,2.,78]],[[0.,1.5,74],[2.5,.75,73]],[[1.,2.,71]],[[.5,2.5,69]],[[0.,1.5,74],[2.5,1.,81]],[[1.,2.,78]],[[.5,1.5,76],[2.5,.75,73]],[[0.,3.5,74]]],
	[[[0.,1.,81],[1.5,1.5,78]],[[.5,2.,74]],[[0.,1.5,78],[2.,1.,71]],[[1.,2.,73]],[[.5,1.,81],[2.,1.5,83]],[[0.,2.5,78]],[[.5,1.,76],[2.,1.,69]],[[0.,3.5,74]]],
	[[[1.,2.5,74]],[[1.5,1.75,78]],[[.5,3.,71]],[[1.,2.5,69]],[[.5,2.,81]],[[1.5,1.5,78]],[[1.,1.5,76]],[[0.,3.75,74]]]
]
const PASTORAL_C:=[[[0.,2.,74]],[[1.,1.5,78]],[[.5,2.,71]],[[1.,1.,69]],[[0.,1.,81],[2.,1.,78]],[[.5,2.,74]],[[1.,1.5,76]],[[0.,3.5,74]]]
static func map_pitch(midi:int,mode:int)->int:
	var relative:=midi-62;var octave:=floori(float(relative)/12.);var pc:=posmod(relative,12)
	var steps:=[0,2,4,5,7,9,11];var degree:=steps.find(pc)
	if degree<0:degree=mini(6,steps.bsearch(pc))
	var tones:Array=Palette.KEY_TONES[mode];var root:int=int(tones[0]);var index:=roundi(float(degree)*(tones.size()-1)/6.)
	return 60+root+12*octave+posmod(int(tones[index])-root,12)
static func lead(style:String,material:int,mode:int)->Array[Dictionary]:
	var bars:Array=DEEP[material] if style=="deep_flow" else NIGHT[material] if style=="felt_nocturne" else Pastoral.A if material==0 else Pastoral.B if material==1 else PASTORAL_C
	var pitches:Array=[]
	for bar:Array in bars:
		for n:Array in bar:pitches.append(map_pitch(int(n[2]),mode))
	var bounds:=Vector2i(48,67) if style=="deep_flow" and material==2 else Vector2i(60,81) if style=="deep_flow" else Vector2i(69,88)
	var path:=Register.plan(pitches,bounds,Palette.KEY_TONES[mode]);var result:Array[Dictionary]=[];var serial:=0
	if path.is_empty():return result
	for bar in range(8):
		for i in range(bars[bar].size()):
			var n:Array=bars[bar][i];var timbre:="felt_nocturne" if style=="felt_nocturne" else "felt_piano" if style=="deep_flow" else "flute"
			var row:=Pastoral.event(bar*4.+float(n[0]),float(n[1]),path[serial],.060 if style!="felt_nocturne" else .050,timbre,"lead",3)
			row.preset=style;row.material=material;row.primary=true;row.register_profile="deep_lead" if bounds.x==48 else "normal_lead";serial+=1;result.append(row)
	return result
static func support(style:String,material:int,mode:int,role:String,color:int)->Array[Dictionary]:
	var result:Array[Dictionary]=[];var chords:=Palette.chords(mode)
	for bar in range(8):
		var chord:Array=chords[bar];var root:=36+posmod(int(chord[0]),12)
		if role=="foundation":
			result.append(Pastoral.event(bar*4.,4.28,root,.034,"bass",role,1))
			if material!=2:result.append(Pastoral.event(bar*4.+.25,3.9,root+7,.010,"horn",role,1))
			continue
		var pulse:=role=="pulse"
		var slots:Array=([.5,1.5,2.5] if material==0 else [0.,.75,1.5,2.25,3.] if material==1 else [1.,3.]) if pulse else ([3.25] if bar in [1,3,5] else [])
		if style=="deep_flow" and pulse:slots=[.5,1.,1.5,2.5,3.] if material==1 else [0.,1.5,2.5] if material==0 else [1.5]
		if style=="felt_nocturne":slots=([2.5] if bar%2==0 else []) if pulse else ([3.] if bar in [1,5] else [])
		for i in range(slots.size()):
			var pitch:=int(chord[(i+color+(bar%2))%chord.size()])+12
			var path:=Register.plan([pitch],Vector2i(52,72),Palette.KEY_TONES[mode])
			if path.is_empty():continue
			var timbre:="guitar" if style=="pastoral_breeze" and pulse else "felt_piano" if style=="deep_flow" and pulse else "cello_harmonic"
			result.append(Pastoral.event(bar*4.+float(slots[i]),.55 if pulse else .85,path[0],.025 if pulse else .018,timbre,role,2))
	# Empty textures still have a valid, intentionally inaudible authored event.
	if result.is_empty():result.append(Pastoral.event(0.,.25,60,0.,"guitar",role,2))
	return result
static func bundle(style:String,material:int,mode:int,color:int,add:Callable,make:Callable)->Dictionary:
	var score=load("res://scripts/audio/city_creation_chamber_score.gd");var out:={}
	for role:String in ["lead","foundation","pulse","answer"]:
		var events:=lead(style,material,mode) if role=="lead" else support(style,material,mode,role,color)
		if not Events.valid(events):return {}
		out[role]=score.render(events,add,make)
	return out
