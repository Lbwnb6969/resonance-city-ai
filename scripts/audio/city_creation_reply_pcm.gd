extends RefCounted
## Original shared three-note contour, reharmonized to each actual phrase.
const RATE:=22050
const DURATION:=0.8
const VOICES: Dictionary={"warm":["piano",24],"deep":["wood",12],"weave":["pluck",24],"market":["accordion",12],"sylvan":["flute",24]}
const ERA_VOICES: Dictionary={"pastoral":["pluck",12],"renaissance":["harpsichord",24],"clockwork":["piano",24],"modern_eco":["felt_piano",24]}

static func plan(event: Dictionary, phrase: int, answer: bool) -> Dictionary:
	var side: String="to" if answer else "from"
	var era: String=str(event.get(side+"_era","pastoral"))
	var style: String=str(event[side+"_style"])
	# Existing pastoral duets keep their five district instruments. Across
	# eras, even two warm districts answer with their own authored instrument.
	var era_voice: bool=era!="pastoral" or str(event.get("from_era","pastoral"))!=str(event.get("to_era","pastoral"))
	var voice: Array=ERA_VOICES[era] if era_voice else VOICES[style]
	var key: String="reply_era_%s_%d"%[era,posmod(phrase,8)] if era_voice else "reply_%s_%d"%[style,posmod(phrase,8)]
	return {"era_theme":era,"style":style,"timbre":str(voice[0]),"stream_key":key}

static func render(chords: Array,add_note: Callable,make_stream: Callable) -> Dictionary:
	var streams: Dictionary={}
	var peaks: Dictionary={}
	var events: Dictionary={}
	var maximum:=0.0
	var voices: Dictionary=VOICES.duplicate()
	for era: String in ERA_VOICES: voices["era_"+era]=ERA_VOICES[era]
	for style: String in voices:
		for phrase in range(8):
			var samples:=PackedFloat32Array()
			samples.resize(int(RATE*DURATION))
			var notes: Array=[]
			for index in range(3):
				var note: Dictionary={"start":[0.02,0.23,0.48][index],"duration":[0.22,0.24,0.26][index],
					"midi":int(chords[phrase][[0,2,1][index]])+int(voices[style][1]),"gain":0.045 if index==0 else 0.035,"timbre":str(voices[style][0])}
				add_note.call(samples,note.start,note.duration,note.midi,note.gain,note.timbre,false)
				notes.append(note)
			var peak:=0.0
			for value: float in samples: peak=maxf(peak,absf(value))
			var key: String="reply_%s_%d" % [style,phrase]
			streams[key]=make_stream.call(samples,false)
			peaks[key]=peak
			events[key]=notes
			maximum=maxf(maximum,peak)
	return {"streams":streams,"peaks":peaks,"events":events,"maximum":maximum,"bytes":streams.size()*int(RATE*DURATION)*2}
