extends RefCounted
## Original rising forks and hanging sprays, cached by the existing foliage bank.
static func append(f,leaves:Dictionary,wood:Dictionary,rng:RandomNumberGenerator,variant:int)->void:
	var fork:=Vector3(.09*(variant-1),1.44,.04)
	f._branch(wood,Vector3.ZERO,fork,.14,.075,"weeping_willow")
	for arm in range(7):
		var angle:float=arm*TAU/7.+variant*.47
		var reach:float=.82+rng.randf()*.15
		var crown:Vector3=fork+Vector3(cos(angle)*reach,.92+sin(arm*1.8)*.22,sin(angle)*reach)
		f._branch(wood,fork,crown,.052,.019,"weeping_willow")
		f._lobe(leaves,crown+Vector3(0,.08,0),Vector3(.48,.33,.43),rng,"willow",3.05)
		for spray in range(3):
			var phase:float=angle+(spray-1)*.37
			var top:Vector3=crown+Vector3(cos(phase)*.19,.08,sin(phase)*.19)
			var end:Vector3=top+Vector3(cos(phase)*(.30+.04*spray),-1.38-rng.randf()*.28,sin(phase)*(.30+.04*spray))
			var bend:Vector3=top.lerp(end,.30)+Vector3(cos(phase)*.09,.10,sin(phase)*.09)
			f._branch(wood,crown,bend,.016,.009,"weeping_willow")
			f._branch(wood,bend,end,.009,.003,"weeping_willow")
			for step in range(2):
				var t:float=(step+.58)/2.
				var at:Vector3=top.lerp(end,t)+Vector3(cos(phase)*sin(t*PI)*.10,0,sin(phase)*sin(t*PI)*.10)
				f._lobe(leaves,at,Vector3(.20-.095*t,.56-.06*t,.17-.075*t),rng,"willow",3.05)
