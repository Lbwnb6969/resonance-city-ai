extends SceneTree
const Master=preload("res://scripts/audio/city_creation_master_score.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var master:=Master.read();check(not master.is_empty() and master.bars*4.*.75==144.,"written complete 144-second container")
	for part:Dictionary in master.sections:check(range(8).all(func(b):return part.harmony[b].map(func(n):return int(n))==Master.Palette.chords(0)[b]),"audition and interaction share actual D-major harmony")
	check(not preload("res://scripts/audio/city_creation_authored_score.gd").request_master(null,0,4).ok,"live unsupported shared harmony rejected before synth")
	for mode in range(10):
		for p in range(6):
			var data:=Master.section(p,mode);check(data.ok,"public schema1 compatible section "+str([p,mode]))
			if not data.ok:continue
			check(data.events.all(func(e):return posmod(int(e.midi),12) in Master.Palette.KEY_TONES[mode]),"actual modal pitches "+str([p,mode]))
			for bar in [0,2,4,6]:
				var echo:Array=data.events.filter(func(e):return e.role=="answer" and int(e.beat/4.)==bar)
				check(echo.size()==3 and echo.map(func(e):return e.beat-bar*4.)==[2.,2.75,3.25],"written three-note echo timing")
				check(data.events.filter(func(e):return e.role=="lead" and int(e.beat/4.)==bar).all(func(e):return e.beat+e.beats<=bar*4.+2.),"real lead rests before echo")
	check(not Master.section(6).ok and not Master.section(0,10).ok,"invalid passage and mode rejected")
	var old:Dictionary=Master.section(0).document;old.bars=48;check(not Master.Document.validate(old).ok,"public eight-bar boundary not silently widened")
	print("MASTER_SCORE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
