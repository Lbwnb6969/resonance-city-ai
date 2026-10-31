extends RefCounted
## Independent mono audition profile. No edits to the original bank synthesis.
const ID:="comfort_warm_v1"
const RATE:=22050
static func add(samples:PackedFloat32Array,start:float,duration:float,midi:int,gain:float,timbre:String,wrap:bool)->void:
	var frequency:=440.*pow(2.,(midi-69.)/12.)
	var step:=TAU*frequency/RATE;var first:=int(start*RATE)
	var plucked:bool=timbre in ["guitar","harp","celesta"]
	var attack:=minf(duration*.3,.012 if plucked else .085)
	var release:=minf(duration*.4,.22)
	for i in range(int(duration*RATE)):
		var target:=first+i
		if wrap:target=posmod(target,samples.size())
		elif target>=samples.size():break
		var t:=float(i)/RATE;var phase:=step*i
		var envelope:=smoothstep(0.,attack,t)*smoothstep(0.,release,duration-t)
		var h2:=.05;var h3:=.015;var decay:=0.
		match timbre:
			"bass":h2=.14;h3=.025
			"horn":h2=.10;h3=.035
			"strings":h2=.12;h3=.04
			"cello_harmonic":h2=.24;h3=.035
			"guitar":h2=.23*exp(-t*3.);h3=.065*exp(-t*5.);decay=2.45
			"harp":h2=.18*exp(-t*3.5);h3=.04*exp(-t*6.);decay=2.1
			"celesta":h2=.08*exp(-t*4.);h3=.015;decay=2.8
		var tone:=sin(phase)
		# Harmonics taper before Nyquist; this profile has no FM/noise layer.
		for harmonic:int in [2,3]:
			var band:=clampf((RATE*.5-frequency*harmonic)/(RATE*.1),0.,1.)
			tone+=sin(phase*harmonic)*(h2 if harmonic==2 else h3)*band
		samples[target]+=tone*envelope*exp(-t*decay)*gain
