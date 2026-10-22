extends SceneTree
const AudioComparison=preload("res://tests/city_creation_audio_comparison.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Pluck=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
const EXPECTED:={0:[2,4,6,7,9,11,1],4:[7,9,11,1,2,4,6],5:[11,1,2,4,6,8,9],6:[9,11,1,2,4,6,8],7:[6,8,9,11,1,2,4]}
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var music:=Music.new();var roots:Array=[]
	for id:String in State.Biomes.IDS:
		var city:=State.new();check(city.Biomes.create(city,id,"2026-10-21").ok,"create actual biome for music: "+id)
		music.update_city(city)
		var wanted:int={"sunny_banks":0,"terraced_peaks":4,"misty_archipelago":5,"sylvan_sanctuary":6,"starlight_nocturne":7,"daily_resonance":Palette.BIOME_MODES[int(city.Biomes.profile(city.biome_seed).voice)]}[id]
		check(music.harmony_mode()==wanted,"actual city selects its required music key: "+id)
		music.concert_active=true
		check(music.harmony_mode()==wanted,"landmark keeps the same key: "+id)
		music.concert_active=false
		var home:=""
		for at:Vector2 in [Vector2(-8,0),Vector2(-12,0),Vector2(-16,0),Vector2(8,0)]:
			var added:Dictionary=city.add_house(at)
			if added.ok:home=str(added.house_id);break
		check(not home.is_empty(),"build real pluck source: "+id)
		var before:Dictionary=city.snapshot();var safe:=true
		for bar in range(8):
			var plan:Dictionary=Pluck.plan(city,home,float(bar)*3.,wanted)
			safe=safe and posmod(int(plan.midi),12) in EXPECTED[wanted]
		check(safe and city.snapshot()==before,"every actual roof phrase uses the biome key without changing a save: "+id)
		var restored:=State.new();check(restored.restore(JSON.parse_string(JSON.stringify(before,"",true,true))).ok,"music city JSON restores: "+id)
		music.update_city(restored);check(music.harmony_mode()==wanted,"JSON restores key from the persisted seed: "+id)
	var legacy:=State.new();legacy.initialize();music.update_city(legacy)
	check(music._biome_mode==-1 and music.harmony_mode()>=0,"legacy cities retain their adaptive color wheel")
	music.concert_active=true;check(music.harmony_mode()==-1,"legacy performances retain their original score")
	var bank:=Cache.load_bank();check(not bank.is_empty(),"production bank matches the synthesis sources")
	if not bank.is_empty():
		var waves:Array[PackedByteArray]=[]
		for mode:int in EXPECTED:
			var complete:=true;var in_key:=true;var bounded:=true
			for kind:String in ["foundation","air","terrace","concert","edit/room/0","edit/tea/7","reply_warm_0","reply_era_modern_eco_7","tower_bell_0","tram_chime_7","quality_upgrade_0","stair_key_0","stair_key_13"]:
				var key:="%d/%s"%[mode,kind];complete=complete and bank.harmony.has(key)
				if not bank.harmony.has(key):continue
				bounded=bounded and float(bank.report.harmony_peaks[key])>0. and float(bank.report.harmony_peaks[key])<=.180001
				for note:Dictionary in bank.report.harmony_notes[key]:in_key=in_key and posmod(int(note.midi),12) in EXPECTED[mode]
			check(complete and in_key and bounded,"real background, landmark, edit, reply, bell and stair waves stay in key: "+str(mode))
			var name:="wood/1" if mode==0 else "%d/wood/1"%mode
			var wave:AudioStreamWAV=bank.variations[name];waves.append(wave.data)
			var samples:=PackedFloat32Array();samples.resize(66150)
			for event:Dictionary in bank.report.variation_notes[name]:
				if float(event.start)<3.:music._add_harmony_note(samples,event.start,event.duration,event.midi,event.gain,event.timbre,false)
			check(AudioComparison.matches(music._pcm_stream(samples,false),wave),"independent note synthesis proves the actual modal melody audio: "+str(mode))
			var notes_ok:=true
			for rank in range(14):
				var key:="%d/stair_key_%d"%[mode,rank];var note:Dictionary=bank.report.harmony_notes[key][0]
				notes_ok=notes_ok and posmod(int(note.midi),12) in EXPECTED[mode] and note.timbre=="piano"
				samples=PackedFloat32Array();samples.resize(9261)
				music._add_harmony_note(samples,note.start,note.duration,note.midi,note.gain,note.timbre,false)
				notes_ok=notes_ok and AudioComparison.matches(music._pcm_stream(samples,false),bank.harmony[key])
			check(notes_ok,"fourteen actual piano keys match their note score and PCM: "+str(mode))
		var different:=true
		for a in range(waves.size()):
			for b in range(a):different=different and waves[a]!=waves[b]
		check(different,"all five biome keys have different actual melody waveforms")
		var raised_sixth:=false;var bright_fourth:=false
		for note:Dictionary in bank.report.harmony_notes["5/foundation"]:raised_sixth=raised_sixth or posmod(int(note.midi),12)==8
		for note:Dictionary in bank.report.harmony_notes["4/foundation"]:bright_fourth=bright_fourth or posmod(int(note.midi),12)==1
		check(raised_sixth and bright_fourth,"B Dorian really sounds G-sharp and G Lydian really sounds C-sharp")
		check(Palette.chords(4)[7][0]==43 and Palette.chords(5)[7][0]==47 and Palette.chords(6)[7][0]==45 and Palette.chords(7)[7][0]==42,"final bars resolve to the four actual biome tonics")
		check(float(bank.report.mix_peaks.biome_stage_stereo_bound)<1.,"modal stage and four simultaneous short voices remain below the stereo clipping bound")
	music.free();print("BIOME_MUSIC ",checks-failures.size(),"/",checks," ",failures);quit(0 if failures.is_empty() else 1)
