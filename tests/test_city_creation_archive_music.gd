extends SceneTree
const AudioComparison=preload("res://tests/city_creation_audio_comparison.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Bank=preload("res://scripts/audio/city_creation_bank_cache.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var bank:Dictionary=Bank.load_bank()
	check(not bank.is_empty(),"reward-mode production bank matches actual synthesis sources")
	if bank.is_empty():quit(1);return
	var synth:=Music.new()
	for mode:int in [8,9]:
		var prefix:=str(mode)+"/"
		var key:=prefix+"foundation"
		var notes:Array=bank.report.harmony_notes[key]
		var full:PackedFloat32Array=PackedFloat32Array();full.resize(529200)
		var final:Array=[]
		for note:Dictionary in notes:
			synth._add_harmony_note(full,note.start,note.duration,note.midi,note.gain,note.timbre,true)
			if note.start>=21. and note.get("held_root",false):final.append(int(note.midi))
		check(AudioComparison.matches(synth._pcm_stream(full,true),bank.harmony[key]),"independent event resynthesis exactly matches the actual reward foundation: "+str(mode))
		check(final==([36] if mode==8 else [41]),"stored chamber bass ends on the intended C/F tonic: "+str(mode))
		var keys_safe:=true;var key_waves:=true
		for rank in range(14):
			var pitch:int=Palette.stair_pitch(mode,rank)
			keys_safe=keys_safe and posmod(pitch,12) in ([0,2,4,7,9] if mode==8 else [5,7,9,10,0,2,4])
			var pcm:=PackedFloat32Array();pcm.resize(roundi((.42+.1875)*22050.))
			synth._add_harmony_note(pcm,0.,.38,pitch,.072,"piano",false)
			var expected:AudioStreamWAV=synth._pcm_stream(pcm,false)
			var preroll:=PackedByteArray();preroll.resize(roundi(.1875*22050.)*2);preroll.append_array(expected.data);expected.data=preroll
			key_waves=key_waves and AudioComparison.matches(expected,bank.harmony[prefix+"stair_key_"+str(rank)])
		check(keys_safe and key_waves,"all fourteen real key WAVs match independently generated reward pitches: "+str(mode))
		var present:=true
		for stem:String in synth.HarmonicEmergence.LEADS:
			for variant in range(3):present=present and bank.variations.has("%d/%s/%d"%[mode,stem,variant])
		check(present,"all eight instruments and three textures exist for reward key: "+str(mode))
		var safe:=true
		for name:String in bank.report.harmony_peaks:
			if name.begins_with(prefix):safe=safe and float(bank.report.harmony_peaks[name])<=.181
		check(safe,"actual reward cue and foundation waves retain expected peak headroom: "+str(mode))
	check(bank.harmony["8/foundation"].data!=bank.harmony["9/foundation"].data and bank.harmony["8/foundation"].data!=bank.harmony["0/foundation"].data,"new rewards contain genuinely different audio, preserving the original D bank")
	synth.free();print("ARCHIVE_MUSIC ",JSON.stringify({"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
