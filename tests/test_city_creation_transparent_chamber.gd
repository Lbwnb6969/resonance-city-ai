extends SceneTree
const DemoScene=preload("res://scenes/city_creation.tscn")
const Legato=preload("res://scripts/audio/city_creation_chamber_legato.gd")
const Context=preload("res://scripts/audio/city_creation_chamber_context.gd")
const Arch=preload("res://scripts/audio/city_creation_archway_echo.gd")
const Canon=preload("res://scripts/audio/city_creation_circular_canon.gd")
const Closure=preload("res://scripts/audio/city_creation_road_closure_audio.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Score=preload("res://scripts/audio/city_creation_chamber_score.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Roles=preload("res://scripts/audio/city_creation_chamber_roles.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var consonant:=true;var registers:=true;var contrary:=0;var oblique:=0;var duets:=0;var primaries:=0
	for mode in range(10):
		var chords:=Palette.chords(mode)
		for key:String in Score.TIMBRES:
			for variant in range(3):
				var events:=Score.lead(key,variant,chords,mode,Palette);var leads:=0;var partners:=0
				for event:Dictionary in events:
					var bounds:Vector2i=Score.BOUNDS[int(event.layer)-1];registers=registers and event.midi>=bounds.x and event.midi<=bounds.y
					if event.get("primary",false):
						leads+=1
						if event.has("companion_midi"):consonant=consonant and posmod(int(event.midi)-int(event.companion_midi),12) in ([3,4,7,8,9] if mode==8 else [3,4,8,9])
					else:
						partners+=1
						if event.motion<0:contrary+=1
						if event.motion==0:oblique+=1
				primaries+=leads;duets+=partners
				check(absf(float(partners)/leads-.65)<.04,"actual duet attacks stay near65percent mode/style/variant "+str([mode,key,variant]))
		var foundation:=Score.foundation(chords)
		check(foundation.all(func(e):return e.layer==1 and e.midi>=36 and e.midi<=50) and foundation.filter(func(e):return e.get("held_root",false)).all(func(e):return is_equal_approx(fposmod(e.start,3.),.1875+.022)),"bass register and real22ms after the melodic onset "+str(mode))
		for family:String in ["pastoral","renaissance","clockwork","modern_eco","air","terrace"]:
			var counter:=Score.counter(family,chords,mode,Palette)
			check(counter.size()==28 and counter.all(func(e):return e.midi>=52 and e.midi<=64) and counter.filter(func(e):return e.response).size()==8,"30percent planned rests and eight real two-eighth response notes "+str([mode,family]))
	check(registers and consonant and contrary>0 and oblique>0,"real lead and companion MIDI obey separate registers and contrary/oblique consonance")
	print("TRANSPARENT_CHAMBER ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"primary_attacks":primaries,"duet_attacks":duets,"contrary":contrary,"oblique":oblique,"failures":failures}));quit(0 if failures.is_empty() else 1)
