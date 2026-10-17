extends RefCounted
## Original deterministic wind, bird and insect beds; no musical notes/tracks.
const RATE := 22050
const SECONDS := 12.0

static func render(include_water: bool=false) -> Dictionary:
	var streams: Dictionary = {}
	var peaks: Dictionary = {}
	var layers: Dictionary = {}
	var kinds: Array = ["wind","birds","insects"]
	if include_water: kinds.append("water")
	for kind: String in kinds:
		var samples := PackedFloat32Array()
		samples.resize(int(RATE*SECONDS))
		var rng := RandomNumberGenerator.new()
		rng.seed=261016+kind.hash()
		var low := 0.0
		for index in range(samples.size()):
			var t := float(index)/RATE
			var value := 0.0
			if kind=="water":
				low=lerpf(low,rng.randf_range(-1.0,1.0),0.18)
				value=low*(0.62+0.12*sin(TAU*t/3.0))+0.035*sin(TAU*480.0*t+3.0*sin(TAU*t/2.0))
			elif kind=="wind":
				low=lerpf(low,rng.randf_range(-1.0,1.0),0.055)
				value=low*(0.58+0.25*sin(TAU*t/12.0)+0.12*sin(TAU*t/4.0))
			elif kind=="insects":
				var pulse := pow(maxf(0.0,sin(TAU*4.0*t)),4.0)
				value=(sin(TAU*4180.0*t)+0.28*sin(TAU*5630.0*t))*pulse*(0.48+0.15*sin(TAU*t/6.0))
			# Every loop has a short quiet seam with no hard sample jump.
			var edge := minf(1.0,minf(t,SECONDS-t)/0.08)
			samples[index]=value*maxf(0.0,edge)
		if kind=="birds":
			for call_index in range(6):
				var start := 0.7+float(call_index)*1.8+rng.randf_range(-0.18,0.18)
				var length := rng.randf_range(0.22,0.36)
				var hz := rng.randf_range(1900.0,2950.0)
				for index in range(int(length*RATE)):
					var t := float(index)/RATE
					var phase := TAU*(hz*t+210.0*length/PI*(1.0-cos(PI*t/length)))
					var envelope := pow(sin(PI*t/length),2.0)
					samples[int(start*RATE)+index]+=(sin(phase)+0.12*sin(phase*2.0))*envelope
		var peak := 0.0
		for sample: float in samples: peak=maxf(peak,absf(sample))
		var bytes := PackedByteArray()
		bytes.resize(samples.size()*2)
		# A fixed normalized PCM peak keeps runtime layer caps easy to audit.
		var gain := 0.82/maxf(peak,0.000001)
		for index in range(samples.size()):
			samples[index]*=gain
			bytes.encode_s16(index*2,int(samples[index]*32767.0))
		layers[kind]=samples
		var stream := AudioStreamWAV.new()
		stream.format=AudioStreamWAV.FORMAT_16_BITS
		stream.mix_rate=RATE
		stream.stereo=false
		stream.data=bytes
		stream.loop_mode=AudioStreamWAV.LOOP_FORWARD
		stream.loop_begin=0
		stream.loop_end=samples.size()
		streams[kind]=stream
		peaks[kind]=0.82
	return {"streams":streams,"samples":layers,"peaks":peaks,"rate":RATE,"seconds":SECONDS,"bytes":kinds.size()*int(RATE*SECONDS)*6,"source":"original_procedural_environment"}
