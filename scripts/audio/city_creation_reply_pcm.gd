extends RefCounted
## Original shared three-note contour, reharmonized to each actual phrase.
const RATE:=22050
const DURATION:=0.8
const VOICES: Dictionary={"warm":["piano",24],"deep":["wood",12],"weave":["pluck",24],"market":["accordion",12],"sylvan":["flute",24]}
static func render(chords: Array,add_note: Callable,make_stream: Callable) -> Dictionary:
	var streams: Dictionary={}
	var peaks: Dictionary={}
	var events: Dictionary={}
	var maximum:=0.0
	for style: String in VOICES:
		for phrase in range(8):
			var samples:=PackedFloat32Array()
			samples.resize(int(RATE*DURATION))
			var notes: Array=[]
			for index in range(3):
				var note: Dictionary={"start":[0.02,0.23,0.48][index],"duration":[0.22,0.24,0.26][index],
					"midi":int(chords[phrase][[0,2,1][index]])+int(VOICES[style][1]),"gain":0.045 if index==0 else 0.035,"timbre":str(VOICES[style][0])}
				add_note.call(samples,note.start,note.duration,note.midi,note.gain,note.timbre,false)
				notes.append(note)
			var peak:=0.0
			for value: float in samples: peak=maxf(peak,absf(value))
			var key: String="reply_%s_%d" % [style,phrase]
			streams[key]=make_stream.call(samples,false)
			peaks[key]=peak
			events[key]=notes
			maximum=maxf(maximum,peak)
	return {"streams":streams,"peaks":peaks,"events":events,"maximum":maximum,"bytes":VOICES.size()*8*int(RATE*DURATION)*2}
