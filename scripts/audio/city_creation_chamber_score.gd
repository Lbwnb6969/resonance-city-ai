extends RefCounted
## One shared eight-bar score: audible MIDI registers, not volume labels.
const BOUNDS:=[Vector2i(36,50),Vector2i(52,64),Vector2i(64,76),Vector2i(76,88)]
const DUETS:=[true,true,false,true,false,true,true,false,true,false,true,false,true,true,false,true,true,false,true,true]
const TIMBRES:={"wood":"flute","wood_deep":"clarinet","wood_weave":"guitar","wood_market":"accordion","wood_sylvan":"flute","renaissance_fugue":"harpsichord","clockwork_waltz":"oboe","modern_symphony":"felt_piano"}
const FAMILIES:={"wood":"pastoral","wood_deep":"pastoral","wood_weave":"pastoral","wood_market":"pastoral","wood_sylvan":"pastoral","renaissance_fugue":"renaissance","clockwork_waltz":"clockwork","modern_symphony":"modern_eco"}
static func fold(midi:int,layer:int)->int:
	var bounds:Vector2i=BOUNDS[layer-1]
	while midi<bounds.x:midi+=12
	while midi>bounds.y:midi-=12
	return midi
static func note(at:float,duration:float,midi:int,gain:float,timbre:String,layer:int,extra:Dictionary={})->Dictionary:
	var result:={"start":at,"duration":duration,"midi":fold(midi,layer),"gain":gain,"timbre":timbre,"layer":layer,"dyad":false,"suspension":false}
	result.merge(extra,true);return result
static func anchor(chord:Array,bar:int,second:bool,palette:Script,mode:int)->int:
	var degree:int=([0,2,1,0,1,2,0,0][bar] if not second else [2,1,2,1,2,1,1,0][bar])%chord.size()
	return fold(palette.quantize(int(chord[degree])+12,mode,bar),3)
static func partner(primary:int,previous:int,prior_lead:int,mode:int,palette:Script)->int:
	var best:=-1;var score:=INF;var motion:=signi(primary-prior_lead)
	for midi in range(52,65):
		if posmod(midi,12) not in palette.KEY_TONES[mode] or posmod(primary-midi,12) not in [3,4,8,9]:continue
		var delta:=midi-previous;var rank:=absf(delta)*.2+(0. if delta==0 else 1. if delta*motion<0 else 8.)
		if rank<score:best=midi;score=rank
	# Gong pentatonic has no diatonic third above D. Keep its five pitches;
	# an explicit open fifth replaces that duet, without inventing F or B.
	if best<0 and mode==8:
		for midi in range(52,65):
			if posmod(midi,12) in palette.KEY_TONES[mode] and posmod(primary-midi,12)==7:best=midi;break
	return best
static func lead(key:String,variant:int,chords:Array,mode:int,palette:Script)->Array[Dictionary]:
	var result:Array[Dictionary]=[];var prior:=57;var prior_lead:=69;var serial:=0
	for bar in range(8):
		var chord:Array=chords[bar];var first:=anchor(chord,bar,false,palette,mode);var second:=anchor(chord,bar,true,palette,mode)
		var attacks:Array=[.1875,1.3125] if variant==0 else [.1875,.9375,1.3125] if variant==1 else [.1875,.9375,1.3125,1.875]
		for i in range(attacks.size()):
			var is_first:bool=i==0;var midi:=first if is_first else second if attacks[i]==1.3125 else fold(palette.quantize(int(chord[(bar+i)%chord.size()])+12,mode,bar),3)
			var duration:=1. if variant==0 and is_first else .75 if variant==0 else .65 if i==0 or variant==1 and i==2 else .25 if i in [1,3] else .40
			result.append(note(bar*3.+float(attacks[i]),duration,midi,.068 if is_first else .052,TIMBRES[key],3,{"primary":true,"duet_candidate":true,"duet_slot":serial,"legato_max":minf(duration+.13,2.18-float(attacks[i]))}))
			var companion:=partner(midi,prior,prior_lead,mode,palette);var delay:=.022 if is_first else 0.
			if DUETS[serial%20] and companion>=0:
				result[-1].companion_midi=companion;result[-1].companion_delay=delay;result[-1].companion_interval_pc=posmod(midi-companion,12)
				result.append(note(bar*3.+float(attacks[i])+delay,duration*.91-delay,companion,.019,TIMBRES[key],2,{"dyad":true,"motion":signi(companion-prior)*signi(midi-prior_lead)}));prior=companion
			prior_lead=midi;serial+=1
	return result
static func counter(family:String,chords:Array,mode:int,palette:Script)->Array[Dictionary]:
	var result:Array[Dictionary]=[];var last:=57;var last_lead:=69
	var timbre:String={"pastoral":"guitar","renaissance":"strings","clockwork":"clarinet","modern_eco":"felt_piano","air":"flute","terrace":"guitar"}[family]
	for bar in range(8):
		var chord:Array=chords[bar];var primary:=anchor(chord,bar,false,palette,mode)
		var companion:=partner(primary,last,last_lead,mode,palette)
		if companion<0:companion=fold(int(chord[1]),2)
		# 28 of 40 planned slots play: twelve genuine rests. Two replies fit
		# entirely after every variant's last primary ends, before the quiet seam.
		var slots:Array=[.2095,.9375,1.6875] if bar%2==0 else [.2095,1.3125,2.25,2.625]
		for i in range(slots.size()):
			var response:bool=float(slots[i])>=2.25
			var midi:=fold(int(chord[2 if i==2 else 1]),2) if response else companion
			result.append(note(bar*3.+float(slots[i]),.25 if response else .48,midi,.032 if response else .030,("guitar" if family=="air" and not response else timbre),2,{"response":response,"planned_slots":5,"motion":signi(companion-last)*signi(primary-last_lead)}))
		last=companion;last_lead=primary
	return result
static func foundation(chords:Array)->Array[Dictionary]:
	var result:Array[Dictionary]=[]
	for bar in range(8):
		var chord:Array=chords[bar];var root:=posmod(int(chord[0]),12)+36;var third:=fold(int(chord[1]),1)
		result.append(note(bar*3.+.2095,2.60,root,.045,"bass",1,{"held_root":true}))
		result.append(note(bar*3.+.2095,2.60,root+7,.014,"horn",1))
		if bar in [3,7] and posmod(third-root,12) in [3,4]:
			var suspended:=fold(root+5,1)
			result.append(note(bar*3.+.2095,1.29,suspended,.018,"strings",1,{"suspension":true,"resolves_to":third}))
			result.append(note(bar*3.+1.4995,1.31,third,.018,"strings",1,{"resolved":true}))
		else:result.append(note(bar*3.+.2095,2.60,third,.016,"strings",1))
	return result
static func sparkle(chord:Array,ordinal:int)->Dictionary:
	var root:=int(chord[0]);var choices:Array[int]=[]
	for interval:int in [7,9,14]:
		var pitch:=fold(root+interval,4)
		if chord.any(func(n):return posmod(int(n)-pitch,12)==0) and not choices.has(pitch):choices.append(pitch)
	if choices.is_empty():choices.append(fold(root,4))
	return note(0.,.40,choices[ordinal%choices.size()],.060,"harp" if ordinal%2==0 else "celesta",4,{"ornament":true,"root_pc":posmod(root,12)})
static func render(events:Array,add:Callable,make:Callable,looped:bool=true)->Dictionary:
	var samples:=PackedFloat32Array();samples.resize(529200 if looped else 17640)
	for event:Dictionary in events:add.call(samples,event.start,event.duration,event.midi,event.gain,event.timbre,looped)
	var peak:=0.
	for value:float in samples:peak=maxf(peak,absf(value))
	var scale:=minf(1.,.18/maxf(.000001,peak))
	if scale<1.:
		for i in range(samples.size()):samples[i]*=scale
		for event:Dictionary in events:event.gain*=scale
	var stream:AudioStreamWAV=make.call(samples,looped);stream.set_meta("chamber_layered",true)
	return {"stream":stream,"peak":peak*scale,"notes":events,"bytes":samples.size()*2}
static func variations(add:Callable,make:Callable,chords:Array,leads:Array,mode:int,palette:Script)->Dictionary:
	var out:={"streams":{},"notes":{},"peaks":{},"bytes":0}
	for key:String in leads:
		for variant in range(3):
			var id:="%s/%d"%[key,variant];var rendered:=render(lead(key,variant,chords,maxi(0,mode),palette),add,make)
			out.streams[id]=rendered.stream;out.notes[id]=rendered.notes;out.peaks[id]=rendered.peak;out.bytes+=rendered.bytes
	return out
