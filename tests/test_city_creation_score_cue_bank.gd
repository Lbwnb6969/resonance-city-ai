extends SceneTree
const Cues=preload("res://scripts/audio/city_creation_score_cue_bank.gd")
const Master=preload("res://scripts/audio/city_creation_master_score.gd")
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var began:=Time.get_ticks_msec();var bank:=Cache.load_bank();check(not bank.is_empty(),"actual precompiled catalogue loads without rebake")
	var music:=preload("res://scripts/audio/city_creation_music.gd").new();music._harmony_streams=bank.harmony;music.audio_report=bank.report;music._edit_streams=bank.edits.duplicate()
	var original:Dictionary=music._harmony_streams.duplicate();var ledger:Dictionary=music.audio_report.harmony_notes.duplicate(true);var sizes:Array=[]
	for mode in range(10):
		var templates:=Cues.templates(music,mode);sizes.append(templates.size())
		check(templates.size()==320,"complete existing 40-per-bar short catalogue "+str(mode))
		check(templates.keys().all(func(k):return not k.contains("stair_key") and templates[k].bar>=0 and templates[k].bar<=7),"only bar-addressed unlooped cues; no fixed-pitch keys or long roles "+str(mode))
		var data:=Master.section(0,mode);var valid:=true
		for row:Dictionary in templates.values():
			for note:Dictionary in row.notes:
				var midi:=Cues.Grid.snap_to_chord_tone(int(note.midi),data.harmony[row.bar])
				valid=valid and data.harmony[row.bar].any(func(n):return posmod(int(n)-midi,12)==0)
		check(valid,"all ten modal recipe projections fit the written chord "+str(mode))
	var templates:=Cues.templates(music,4);var data:=Master.section(0,4);var waves:=Cues.render(templates,data.harmony,data.signature,music);var pcm_bytes:=0;var unchanged:=true;var pitches:=true;var lengths:=true;var real_pcm:=true
	for key:String in waves:
		var wave:AudioStreamWAV=waves[key];var notes:Array=wave.get_meta("master_cue_notes");var source:Array=templates[key].notes;var bar:int=templates[key].bar
		pcm_bytes+=wave.data.size();lengths=lengths and wave.data.size()==(roundi(templates[key].seconds*22050.)+roundi(Cues.Grid.GRID*22050.))*2 and wave.loop_mode==AudioStreamWAV.LOOP_DISABLED
		pitches=pitches and notes.all(func(n):return data.harmony[bar].any(func(c):return posmod(int(c)-int(n.midi),12)==0))
		for i in range(notes.size()):
			unchanged=unchanged and notes[i].start==source[i].start and notes[i].duration==source[i].duration and notes[i].timbre==source[i].timbre and notes[i].gain<=source[i].gain+.000001
		real_pcm=real_pcm and wave.format==AudioStreamWAV.FORMAT_16_BITS and wave.mix_rate==22050 and wave.data.count(0)<wave.data.size()
	check(lengths,"actual PCM preserves catalogue durations and exactly one shared pre-roll")
	check(pitches,"all synthesized mode4 note ledgers use actual mother chords")
	check(unchanged,"polyphonic onset, durations, instruments and source gain ceilings retained")
	check(real_pcm,"every adapted recipe has real nonzero native PCM")
	var key:="4/world_water_1";var notes:Array=waves[key].get_meta("master_cue_notes")
	check(notes.map(func(n):return int(n.midi))==[67,79],"independent regression: old A/G water becomes G/G over written Em7")
	check(templates[key].notes.map(func(n):return int(n.midi))==[69,79],"original bank recipe remains A/G after its palette quantization; input ledger is immutable")
	Cues.install(music,waves);music._edit_streams.world_water_1=waves[key]
	check(bank.harmony==original,"owner-local install never mutates the shared cached Resource catalogue seen by another music owner")
	check(music._harmony_streams[key]==waves[key] and music.get_meta("score_cue_originals")[key]==original[key],"install keeps exact original references for restoration")
	check(Cues.templates(music,4)==templates,"replacement preview reads original recipes and durations, never re-tunes prior output")
	var active:AudioStreamWAV=waves[key];Cues.retire(music)
	check(music._harmony_streams==original and music._edit_streams.world_water_1==original[key] and not music.has_meta("score_cue_originals"),"retire restores both source catalogue and currently aliased short table exactly")
	check(active.get_meta("master_score_signature")==data.signature and not active.data.is_empty(),"already-owned short wave remains valid after catalogue retirement")
	check(music.audio_report.harmony_notes==ledger,"original report and original wave samples never rewritten")
	music.free();print("SCORE_CUE_BANK ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"catalogues":sizes,"pcm_bytes":pcm_bytes,"seconds":(Time.get_ticks_msec()-began)/1000.}));quit(0 if failures.is_empty() else 1)
