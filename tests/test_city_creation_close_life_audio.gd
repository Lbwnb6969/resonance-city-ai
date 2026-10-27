extends SceneTree
const Foley=preload("res://scripts/audio/city_creation_close_life_audio.gd")
const Gait=preload("res://scripts/visual/city_creation_citizen_gait.gd")
const Visual=preload("res://scripts/visual/city_creation_citizen_visual.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var helper:=Foley.new()
	check(Foley.weight(9.,0.)==1. and Foley.weight(18.,0.)==0. and Foley.weight(9.,5.5)==0.,"only close zoom and close sources audible")
	check(Foley.weight(12.,2.)>Foley.weight(16.,2.) and Foley.weight(12.,2.)>Foley.weight(12.,4.),"continuous zoom and distance falloff")
	var actor:=Visual.person(0);root.add_child(actor)
	Gait.pose(actor,0.,false)
	check(actor.get_meta("life_foley").kind.is_empty(),"idle resident has no contact sound")
	Gait.pose(actor,.17,true);var before:Dictionary=actor.get_meta("life_foley").duplicate()
	Gait.pose(actor,.19,true)
	check(before.kind=="step" and actor.get_meta("life_foley").tick==before.tick+1,"foot contact changes at visible stride extremum")
	Gait.pose(actor,3.5,false,true);before=actor.get_meta("life_foley").duplicate()
	Gait.pose(actor,3.6,false,true)
	check(before.kind=="cup" and actor.get_meta("life_foley").tick==before.tick+1,"cup contact follows lowering from actual sip")
	for role:String in ["bakery","workshop","atelier","clockmaker"]:
		Visual.identify(actor,role);Gait.pose(actor,1.,false,false,true)
		check(actor.get_meta("life_foley").kind=={"bakery":"bread","workshop":"wood"}.get(role,""),"working contact matches profession "+role)
	var maximum:=0.;var duration:=0.
	for kind:String in Foley.BANK:
		for i in range(Foley.BANK[kind].size()):
			var wave:AudioStreamWAV=helper._bank(kind,i)
			check(wave.mix_rate==22050 and not wave.stereo and wave.get_meta("life_foley_kind")==kind,"packaged real mono PCM "+kind+str(i))
			var pcm:=wave.data
			for sample in range(pcm.size()/2):maximum=maxf(maximum,absf(pcm.decode_s16(sample*2)/32768.))
			duration=maxf(duration,wave.get_length())
	check(maximum<=.141 and maximum>.10 and duration<=.5,"short restrained PCM bank with no clipping")
	var voice:=AudioStreamPlayer.new();root.add_child(voice)
	voice.stream=helper._bank("step",0);voice.set_meta("creation_voice_serial",1)
	helper.active={"player":voice,"stream":voice.stream,"serial":1}
	check(helper._owned(),"exact borrowed short voice ownership")
	voice.set_meta("creation_voice_serial",2)
	check(not helper._owned(),"musical reuse serial revokes Foley ownership")
	voice.play();helper.stop();check(voice.playing,"Foley stop preserves a reused playing musical voice")
	helper.active={"player":voice,"stream":voice.stream,"serial":2}
	helper._tail({"music":{"muted":true}},.01,true)
	check(not voice.playing and helper.active.is_empty(),"mute stops an actually playing owned Foley voice")
	voice.free();actor.free();await process_frame
	print("CLOSE_LIFE_AUDIO ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"pcm_peak":maximum,"max_seconds":duration}))
	quit(0 if failures.is_empty() else 1)
