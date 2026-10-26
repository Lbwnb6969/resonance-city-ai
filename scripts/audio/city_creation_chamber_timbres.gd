extends RefCounted
## Deterministic modal-string and felt/hammer synthesis, rendered at bake time.
## Mechanical noise is band-limited, quiet, and tied to the actual key attack.
static func sample(kind:String,t:float,duration:float,phase:float)->Vector2:
	var edge:=clampf((duration-t)/.16,0.,1.)
	if kind=="guitar":
		var envelope:=minf(t/.004,1.)*exp(-t*3.8)*edge
		var body:=sin(phase)+.34*sin(phase*2.)*exp(-t*5.)+.18*sin(phase*3.002)*exp(-t*7.)+.055*sin(phase*5.008)*exp(-t*12.)
		return Vector2(body,envelope)
	if kind=="cello_harmonic":
		var envelope:=pow(maxf(0.,sin(PI*t/duration)),.8)*edge
		var vibrato:=.013*sin(TAU*4.4*t)
		return Vector2(.30*sin(phase+vibrato)+.65*sin(phase*2.+vibrato)+.11*sin(phase*4.001),envelope)
	var envelope:=minf(t/.018,1.)*exp(-t*1.7)*edge
	var felt:=sin(phase)+.11*sin(phase*2.)*exp(-t*6.)+.025*sin(phase*3.003)*exp(-t*9.)
	var mechanism:float=(sin(TAU*437.*t)+sin(TAU*683.*t)*.4)*.009*exp(-t*45.)
	return Vector2(felt+mechanism,envelope)
