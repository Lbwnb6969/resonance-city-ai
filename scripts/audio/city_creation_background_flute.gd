extends RefCounted
## Audition articulation only. The original flute and external schema1 stay intact.
const ID:="background_flute_v1"
const RATE:=22050
const LEAD_GAIN_DB:=-3.
static func add(samples:PackedFloat32Array,note:Dictionary)->void:
	var frequency:=440.*pow(2.,(float(note.midi)-69.)/12.)
	var step:=TAU*frequency/RATE;var duration:=float(note.duration)
	var attack:=minf(.10,duration*.4);var release:=minf(.20,duration*.45)
	var start:=int(float(note.start)*RATE);var count:=int(duration*RATE)
	var register_rolloff:=minf(1.,600./frequency)
	for i in range(count):
		var t:=float(i)/RATE;var phase:=step*i
		var envelope:=smoothstep(0.,attack,t)*smoothstep(0.,release,duration-t)
		var vibrato:=.012*smoothstep(.30,.70,t)*sin(TAU*5.1*t)
		var tone:=sin(phase+vibrato)+.045*register_rolloff*exp(-t*2.4)*sin(phase*2.)+.008*register_rolloff*exp(-t*4.)*sin(phase*3.)
		samples[(start+i)%samples.size()]+=tone*envelope*float(note.gain)
