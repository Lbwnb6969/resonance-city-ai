extends SceneTree
const Reply=preload("res://scripts/audio/city_creation_reply_pcm.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
const Pitch=preload("res://scripts/audio/city_creation_pitch_pluck.gd")
const Fixture=preload("res://tools/fixtures/city_creation_two_banks_fixture.gd")
var failures: Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok: failures.append(label);push_error(label)
func _run()->void:
	var event: Dictionary={"from_style":"warm","to_style":"warm","from_era":"pastoral","to_era":"renaissance"}
	var selection_ok:=true
	for era: String in Reply.ERA_VOICES:
		event.to_era=era
		for phrase in range(16):
			var plan: Dictionary=Reply.plan(event,phrase,true)
			var expected: String="reply_warm_%d"%posmod(phrase,8) if era=="pastoral" else "reply_era_%s_%d"%[era,posmod(phrase,8)]
			selection_ok=selection_ok and plan.stream_key==expected and plan.era_theme==era
	_check(selection_ok,"same-style districts select real era and actual wrapped phrase")
	event.to_era="renaissance"
	_check(Reply.plan(event,0,false).timbre=="pluck" and Reply.plan(event,1,true).timbre=="harpsichord","cross-era question and answer use guitar and harpsichord")
	event.from_era="renaissance";event.to_era="pastoral"
	_check(Reply.plan(event,4,false).timbre=="harpsichord" and Reply.plan(event,5,true).timbre=="pluck","camera-reversed duet retains actual source instruments")
	event.from_era="pastoral"
	var pastoral_ok:=true
	for style: String in Reply.VOICES:
		event.from_style=style
		pastoral_ok=pastoral_ok and Reply.plan(event,0,false).stream_key=="reply_%s_0"%style
	_check(pastoral_ok,"existing five pastoral duet instruments retain their keys")
	var bank: Dictionary=Cache.load_bank()
	_check(not bank.is_empty(),"production cached bank matches changed synthesis sources")
	if bank.is_empty():quit(1);return
	var music:=Music.new()
	for era: String in Reply.ERA_VOICES:
		var notes_ok:=true;var waves_ok:=true
		for phrase in range(8):
			var key: String="reply_era_%s_%d"%[era,phrase]
			var stream: AudioStreamWAV=bank.edits[key]
			var notes: Array=bank.report.reply_notes[key]
			var samples:=PackedFloat32Array();samples.resize(int(Reply.RATE*Reply.DURATION))
			for i in range(notes.size()):
				var note: Dictionary=notes[i]
				notes_ok=notes_ok and notes.size()==3 and note.timbre==Reply.ERA_VOICES[era][0] and int(note.midi)==int(Pitch.CHORDS[phrase][[0,2,1][i]])+int(Reply.ERA_VOICES[era][1])
				music._add_note(samples,note.start,note.duration,note.midi,note.gain,note.timbre,false)
			waves_ok=waves_ok and stream.data==music._pcm_stream(samples,false).data and stream.data.size()==35280 and bank.report.effect_peaks[key]>.001 and bank.report.effect_peaks[key]<1.
		_check(notes_ok,"eight shared-contour authored note lists: "+era)
		_check(waves_ok,"eight actual waves regenerate, stay audible and unclipped: "+era)
	var previous: String=""
	for arg: String in OS.get_cmdline_user_args():
		if arg.begins_with("--previous-bank="):previous=arg.trim_prefix("--previous-bank=")
	if not previous.is_empty():
		var old: Dictionary=load(previous).get_meta("bank")
		var same:=0
		for group: String in ["streams","edits"]:
			for key: String in old[group]:
				if key=="renaissance_fugue":continue
				var a: AudioStreamWAV=old[group][key];var b: AudioStreamWAV=bank[group][key]
				if a.data==b.data and a.mix_rate==b.mix_rate and a.loop_mode==b.loop_mode and a.loop_end==b.loop_end:same+=1
		_check(same==286,"all 286 unrelated old PCM and loop metadata remain identical")
	var timbres: Dictionary={}
	for note: Dictionary in bank.report.theme_notes.renaissance_fugue:timbres[note.timbre]=true
	_check(timbres.has("oboe") and timbres.has("strings") and timbres.has("harpsichord"),"actual fugue includes keyboard subject, strings and oboe imitation")
	_check(bank.report.seam_steps.renaissance_fugue<.01 and bank.report.mix_peaks.absolute_stereo_with_four_short_voices<1.,"new orchestra retains seamless loop and shared stereo peak bound")
	var fixture: Dictionary=Fixture.build()
	_check(fixture.city._validate_snapshot(fixture.city.snapshot()).ok and fixture.city.house_era(fixture.city.houses[0])=="pastoral" and fixture.city.house_era(fixture.city.houses[4])=="renaissance","two-bank fixture is a valid conserved work with west pastoral and east renaissance")
	music.free()
	print("ERA_REPLY ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
