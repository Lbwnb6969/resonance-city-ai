extends SceneTree
const Tide = preload("res://scripts/audio/city_creation_phrase_tide.gd")
const Emergence = preload("res://scripts/audio/city_creation_harmonic_emergence.gd")
const Field = preload("res://scripts/audio/city_creation_acoustic_field.gd")
var checks := 0
var failures: Array[String] = []
func _initialize() -> void: _run.call_deferred()
func check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label); push_error(label)
func _run() -> void:
	var records := {}
	for group in range(3):
		for i in range(5):
			var id := "h%d"%(group*5+i+1)
			records[id] = {"position":Vector2(-6. if group==0 else -14. if group==1 else 10.,float(i)-2.),"cluster_size":5,"cluster_id":"c"+str(group),"era_theme":"renaissance" if group==2 else "pastoral","style":"warm","role":"residential"}
	var field := Field.new(); field.set_view(Vector2(-4,0),40.); field.evaluate(records,[],[])
	var primary := ""; var secondary := ""
	for phrase in range(8):
		var score := Emergence.evaluate(records,field,[],phrase,false)
		var plan := Tide.arrange(records,field,score,phrase*3.)
		if phrase==0: primary=plan.primary;secondary=plan.secondary
		check(plan.primary==primary and plan.secondary==secondary and secondary=="c2","prefer a real other-bank different-era response over a nearer same-era group")
		check(plan.lead_cluster==(secondary if phrase in [2,3] else primary),"three-second source stages stay stable for each two-phrase passage")
		check(records[score.source_id].cluster_id==plan.lead_cluster and score.source_ids[score.lead_track]==score.source_id,"audible source attribution follows the conducting plan")
		check(is_equal_approx(score.targets[score.lead_track],-11.5 if phrase in [2,3] else -9. if phrase<2 else -10.5),"primary +1.5dB secondary +2dB and unboosted later passages")
	var score := Emergence.evaluate(records,field,[],0,false)
	Tide.arrange(records,field,score,50.)
	check(score.targets.wood>=-26. and score.targets.terrace>=-27.,"breathing retains an available gentle plucked layer")
	for clock: float in [0.,24.,47.,48.,72.,96.,120.]: check(is_zero_approx(Tide.breath(clock)),"full cycles and smooth boundaries "+str(clock))
	for clock: float in [50.,60.,70.,122.,132.]: check(is_equal_approx(Tide.breath(clock),1.),"twenty-four-second light cycle recurs every seventy-two seconds")
	check(Tide.breath(48.75)>0. and Tide.breath(48.75)<1. and Tide.breath(71.25)>0. and Tide.breath(71.25)<1.,"1.5-second envelopes remove step changes at both breathing boundaries")
	for key: String in ["foundation","renaissance_fugue"]:
		check(is_equal_approx((Tide.gain(key,score,60.)-Tide.LongForm.gain(key,score,60.))-(Tide.gain(key,score,30.)-Tide.LongForm.gain(key,score,30.)),-4.5),"existing dense accompaniment breath remains4.5dB before long-form shade")
	for key: String in ["wood","terrace","air"]: check(is_equal_approx(Tide.gain(key,score,60.)-Tide.LongForm.gain(key,score,60.),Tide.gain(key,score,30.)-Tide.LongForm.gain(key,score,30.)),"existing light plucks and air keep their targets before long-form shade")
	for clock: float in [12.,15.]:
		var family := "air" if clock == 12. else "terrace"
		score = Emergence.evaluate(records,field,[],int(clock/3.),false)
		score.targets[family] = -20.; score.source_ids[family] = "h11"
		var life_plan := Tide.arrange(records,field,score,clock)
		check(life_plan.lead_track==family and life_plan.lead_cluster=="c2" and is_equal_approx(score.targets[family],-18.5),"the actual life source leads its flute/harp turn with matching visual cluster")
	field.set_view(Vector2(-6,0),12.,func(id: String) -> bool: return records[id].cluster_id=="c0"); field.evaluate(records,[],[])
	score=Emergence.evaluate(records,field,[],2,false)
	var plan := Tide.arrange(records,field,score,6.)
	check(plan.primary==plan.secondary and records[score.source_id].position.x<0.,"off-screen group never receives an ordinary response")
	var reversed := {}; var ids: Array = records.keys(); ids.reverse()
	for id: String in ids: reversed[id] = records[id]
	check(Tide.groups(records,field)==Tide.groups(reversed,field),"conducting does not depend on insertion order")
	for cycle in range(4):
		check(Tide.Cadence.solo(cycle*24.+12.,4)==Tide.Cadence.SOLO_ROTATION[cycle],"four-cycle solo family "+str(cycle))
		check(Tide.Cadence.solo(cycle*24.+15.,5)==Tide.Cadence.SOLO_ROTATION[(cycle+1)%4],"following phrase keeps chamber rotation "+str(cycle))
	for clock:float in [0.,21.,22.8,24.,48.]:check(is_zero_approx(Tide.Cadence.taper(clock)),"cadence boundaries remain smooth "+str(clock))
	check(is_equal_approx(Tide.Cadence.taper(23.5),-2.5) and Tide.Cadence.taper(23.)<0.,"last 1.2 seconds contain actual 2.5dB accompaniment breath")
	var shaded:={"targets":{"air":-20.,"foundation":-16.},"lead_track":"air","cadence_night":true}
	check(is_equal_approx(Tide.Cadence.gain("air",shaded,23.5),.8),"night upper solo remains present during accompaniment breath")
	check(is_equal_approx(Tide.Cadence.gain("foundation",shaded,23.5),-2.5),"breath tapers accompaniment and preserves main melody")
	shaded.cadence_night=false;check(is_equal_approx(Tide.Cadence.gain("foundation",shaded,10.),.5),"daylight lower strings receive gentle warmth")
	shaded.targets.air=-60.;check(Tide.Cadence.gain("air",shaded,23.5)==0.,"shade cannot awaken an unavailable track")
	print("PHRASE_TIDE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)
