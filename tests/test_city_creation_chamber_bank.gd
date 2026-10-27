extends SceneTree
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Compare=preload("res://tests/city_creation_audio_comparison.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var bank:=Cache.load_bank();check(not bank.is_empty(),"actual shipped bank matches the current synthesis signature")
	if bank.is_empty():quit(1);return
	check(bank.streams.size()==12 and bank.edits.size()==307 and bank.variations.size()==240,"all original voice/sample identities and ten modal variation families remain available")
	var bounded:=true;var duet:=0;var primaries:=0;var silence:=true;var responses:=0
	for events:Array in bank.report.variation_notes.values():
		for event:Dictionary in events:
			bounded=bounded and int(event.midi)>=(64 if int(event.layer)==3 else 52) and int(event.midi)<=(76 if int(event.layer)==3 else 64)
			if event.get("primary",false):primaries+=1
			if event.get("dyad",false):duet+=1
			silence=silence and fposmod(float(event.start),3.)+float(event.duration)<2.21
	check(bounded and absf(float(duet)/primaries-.65)<.04 and silence,"the actual baked lead/partner ledger separates registers,keeps65percent duets and leaves the real response window")
	for mode in range(10):
		var valid:=true
		for family:String in ["pastoral","renaissance","clockwork","modern_eco"]:
			var id:="%d/chamber_counter_%s"%[mode,family];var events:Array=bank.report.harmony_notes[id]
			valid=valid and bank.harmony.has(id) and events.size()==28 and events.all(func(e):return e.layer==2 and e.midi>=52 and e.midi<=64)
			responses+=events.filter(func(e):return e.response).size()
		check(valid,"actual modal counterpoint textures contain30percent rests and lower-register replies "+str(mode))
		valid=true
		for bar in range(8):
			for ordinal in range(2):
				var id:="%d/chamber_sparkle_%d_%d"%[mode,bar,ordinal];var events:Array=bank.report.harmony_notes[id];var wave:AudioStreamWAV=bank.harmony[id]
				valid=valid and events.size()==1 and events[0].midi>=76 and events[0].midi<=88 and Palette.chords(mode)[bar].any(func(n):return posmod(int(n)-int(events[0].midi),12)==0) and wave.get_meta("chamber_midi",-1)==events[0].midi and wave.get_meta("cue_preroll",0.)==.1875
		check(valid,"actual sparkle PCM metadata has one high chord tone and exact pre-roll in every bar "+str(mode))
	var music:=Music.new();var exact:=true
	for spec:Array in [["variations","wood/0"],["harmony","4/chamber_counter_clockwork"],["harmony","9/foundation"]]:
		var id:=str(spec[1]);var events:Array=bank.report.variation_notes[id] if spec[0]=="variations" else bank.report.harmony_notes[id]
		var samples:=PackedFloat32Array();samples.resize(Music.FRAMES)
		for event:Dictionary in events:music._add_harmony_note(samples,event.start,event.duration,event.midi,event.gain,event.timbre,true)
		var expected:AudioStreamWAV=music._pcm_stream(samples,true);var actual:AudioStreamWAV=bank[spec[0]][id]
		exact=exact and Compare.matches(expected,actual)
	check(exact,"independent ledger resynthesis matches three actual QOA voices: duet lead,lower counterpoint and cadence bass")
	music.free();print("CHAMBER_BANK ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"primary_attacks":primaries,"duet_attacks":duet,"response_notes":responses,"failures":failures}));quit(0 if failures.is_empty() else 1)
