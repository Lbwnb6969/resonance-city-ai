extends RefCounted
## Choose an octave path for a whole phrase; never invent a clamped semitone.
static func plan(pitches:Array,bounds:Vector2i,tones:Array)->Array[int]:
	var paths:Dictionary={}
	for i in range(pitches.size()):
		var pitch:int=int(pitches[i]);var next:Dictionary={}
		if posmod(pitch,12) not in tones:return []
		for octave in range(-5,6):
			var midi:=pitch+12*octave
			if midi<bounds.x or midi>bounds.y:continue
			var cost:=absf(midi-pitch)*.025;var path:Array[int]=[midi]
			if i>0:
				var best:=INF
				for previous:int in paths:
					var leap:=midi-previous;var contour:=signi(pitch-int(pitches[i-1]))
					var rank:float=paths[previous].cost+cost+absf(leap)+maxf(0.,absf(leap)-7.)*2.+(4. if contour!=0 and signi(leap)!=contour else 0.)
					if rank<best:best=rank;path=paths[previous].path.duplicate();path.append(midi)
				cost=best
			next[midi]={"cost":cost,"path":path}
		if next.is_empty():return []
		paths=next
	var result:Array[int]=[];var best:=INF
	for midi:int in paths:
		if paths[midi].cost<best:best=paths[midi].cost;result=paths[midi].path
	return result
