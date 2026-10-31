extends RefCounted
## Independent struck-string audition: evolving partials and key-release damping.
## Procedural material, not a recording of an acoustic instrument.
const ID:="comfort_felt_v2"
const RATE:=22050
const PARTIALS:=[1.,.19,.075,.028,.012,.005]
const DECAYS:=[1.15,2.8,4.5,6.,8.,10.]
static func add(samples:PackedFloat32Array,start:float,duration:float,midi:int,gain:float,timbre:String,wrap:bool)->void:
	if timbre!="felt_piano":
		preload("res://scripts/audio/city_creation_comfort_profile.gd").add(samples,start,duration,midi,gain,timbre,wrap);return
	var frequency:=440.*pow(2.,(midi-69.)/12.)
	var first:=int(start*RATE);var attack:=minf(.016,duration*.2);var release:=minf(.12,duration*.3)
	var rates:=PackedFloat64Array();var bands:=PackedFloat64Array()
	for index in range(PARTIALS.size()):
		var harmonic:=float(index+1)
		# Slight string stiffness, normalized to preserve the declared fundamental.
		var partial:=frequency*harmonic*sqrt((1.+.00008*harmonic*harmonic)/1.00008)
		rates.append(TAU*partial/RATE);bands.append(clampf((RATE*.5-partial)/(RATE*.1),0.,1.))
	for i in range(int(duration*RATE)):
		var target:=first+i
		if wrap:target=posmod(target,samples.size())
		elif target>=samples.size():break
		var t:=float(i)/RATE;var tone:=0.
		for index in range(PARTIALS.size()):
			tone+=sin(rates[index]*i)*PARTIALS[index]*bands[index]*exp(-t*DECAYS[index])
		var envelope:=smoothstep(0.,attack,t)*smoothstep(0.,release,duration-t)
		samples[target]+=tone*envelope*gain
