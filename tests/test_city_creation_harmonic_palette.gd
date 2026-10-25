extends SceneTree
const AudioComparison=preload("res://tests/city_creation_audio_comparison.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Score=preload("res://scripts/audio/city_creation_harmonic_emergence.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	for mode in range(4):
		var chords:=Palette.chords(mode)
		_check(chords.size()==8 and chords[7]==Palette.PIVOT,"all eight-bar palettes meet at the same final Dadd9 chord: "+str(mode))
		var pitches:=true
		for bar in range(8):
			var last:=-1
			for band in range(5):
				var midi:=Palette.pitch(mode,bar,band,0)
				pitches=pitches and midi>last and posmod(midi,12) in Palette.scale(mode,bar);last=midi
		_check(pitches,"five floors climb through five distinct safe tones in all phrases: "+str(mode))
		var seen:Dictionary={};var deterministic:=true
		for cycle in range(100):
			var a:=Palette.next_mode(mode,mode,567,cycle)
			deterministic=deterministic and a==Palette.next_mode(mode,mode,567,cycle) and a>=0 and a<=3;seen[a]=true
		_check(deterministic and seen.size()==4,"weighted transitions are deterministic and can reach every related color: "+str(mode))
	_check(Palette.PROGRESSIONS[0][0]==[50,54,57,64] and Palette.PROGRESSIONS[1][0][0]==47 and Palette.PROGRESSIONS[2][0][0]==43 and Palette.PROGRESSIONS[3][0].has(64),"D major, B minor, G Lydian and suspended night color retain distinct actual voicings")
	var acoustic:=Acoustic.new();acoustic.set_view(Vector2.ZERO,20.)
	var houses:Dictionary={"h":{"position":Vector2.ZERO,"era_theme":"modern_eco","style":"warm","level_tier":4,"base_y":0.,"rooms":4,"upper_rooms":2}}
	acoustic.evaluate(houses,[])
	var score:=Score.new();score.advance(houses,acoustic,[],0,true)
	var first:int=score.mode
	for phrase in range(1,8):score.advance(houses,acoustic,[],phrase,true)
	_check(score.mode==first,"night preference cannot change the harmony halfway through a cycle")
	var reached:Dictionary={}
	for phrase in range(8,81):
		var previous:int=score.mode;score.advance(houses,acoustic,[],phrase,true)
		if score.mode!=previous:reached[score.mode]=true;_check(phrase%8==0,"actual color change occurs only on an eight-bar cycle boundary")
	_check(reached.has(3),"night preference reaches the suspended night palette through the weighted wheel")
	if "--bank" in OS.get_cmdline_user_args():_bank()
	print("HARMONIC_PALETTE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
func _bank()->void:
	var bank:=Cache.load_bank();_check(not bank.is_empty(),"all current sources load the baked four-color bank")
	if bank.is_empty():return
	_check(bank.variations.size()==Palette.NAMES.size()*8*3,"all legacy colors and biome keys contain eight instruments times three actual variations")
	var music:=Music.new();var distinct:Array[PackedByteArray]=[]
	for mode in range(4):
		var key:String="wood/1" if mode==0 else "%d/wood/1"%mode
		var wave:AudioStreamWAV=bank.variations[key]
		distinct.append(wave.data)
		var expected:=PackedFloat32Array();expected.resize(66150)
		for event:Dictionary in bank.report.variation_notes[key]:
			if event.start<3.:music._add_harmony_note(expected,event.start,event.duration,event.midi,event.gain,event.timbre,false)
		_check(AudioComparison.matches(music._pcm_stream(expected,false),wave),"independently synthesized first motif matches the actual palette audio: "+str(mode))
		for kind:String in ["foundation","air","terrace","cafe_flute_0","tower_bell_0","reply_warm_0","bakery_baked_0","travel_bridge_0","tram_chime_0","quality_upgrade_0"]:
			var id:String="%d/%s"%[mode,kind]
			_check(bank.harmony.has(id) and bank.report.harmony_peaks[id]>0. and bank.report.harmony_peaks[id]<=.180001,"real harmonized bed or service wave is present and bounded: "+id)
		var chord:Array=Palette.chords(mode)[0]
		_check(bank.report.harmony_notes["%d/cafe_flute_0"%mode][0].midi==int(chord[0])+24 and bank.report.harmony_notes["%d/reply_warm_0"%mode][0].midi==int(chord[0])+24,"actual cafe and duet notes follow the active palette chord root: "+str(mode))
	var different:=true
	for a in range(4):
		for b in range(a):different=different and distinct[a]!=distinct[b]
	_check(different,"all four palette voicings have different actual melody waveforms")
	var bounded:=true;var looped:=true
	for id:String in bank.harmony:
		bounded=bounded and float(bank.report.harmony_peaks[id])>0. and float(bank.report.harmony_peaks[id])<=.180001
		var bed:bool=id.get_slice("/",1) in ["foundation","air","terrace","concert"]
		var wav:AudioStreamWAV=bank.harmony[id]
		looped=looped and (wav.loop_mode==AudioStreamWAV.LOOP_FORWARD and wav.get_length()==24. if bed else wav.loop_mode==AudioStreamWAV.LOOP_DISABLED)
	_check(bounded and looped,"every actual modal wave is bounded and only long beds loop")
	var stage:=0.
	for key:String in Music.STEMS:stage+=.18*db_to_linear(float(Music.FINALE_GAINS[key]))
	for phrase in range(8):
		var bound:=0.
		for key:String in Music.STEMS:bound+=.18*db_to_linear(Music.GrandFestival.gain(key,phrase))
		stage=maxf(stage,bound)
	var short_peak:=maxf(.18,float(bank.report.effect_peaks.values().max()))
	var simultaneous:=(stage+short_peak*db_to_linear(Music.SHORT_GAIN_DB)*4.)*(1.+Music.Spatial.PAN_LIMIT)
	_check(bank.report.mix_peaks.emergent_stereo_bound<1. and simultaneous<1.,"actual simultaneous finale or festival voicing plus four worst-case short tails fits below full scale")
	print("ACTUAL_STAGE_STEREO_BOUND ",simultaneous,"; independent per-track historical maximum ",bank.report.mix_peaks.biome_stage_stereo_bound)
	music.free()
