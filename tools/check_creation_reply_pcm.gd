extends SceneTree
## Offline production-bank verification. No player setup, playback or save I/O.
const Music := preload("res://scripts/audio/city_creation_music.gd")
const ThemePCM := preload("res://scripts/audio/city_creation_theme_pcm.gd")
const OLD := "res://废弃/街坊连奏_20261016/旧Music.gd"
const OUT := "res://验证记录/街坊连奏_2026-10-16"
const CHORDS := [[50,57,62],[47,54,59],[45,52,57],[50,57,64],[50,57,62],[47,54,62],[45,52,59],[50,57,64]]
const VOICES := {"warm":["piano",24],"deep":["wood",12],"weave":["pluck",24],"market":["accordion",12],"sylvan":["flute",24]}
var checks: Array[Dictionary] = []
var failures: Array[String] = []
var evidence: Dictionary = {}

func _initialize() -> void:
	_run.call_deferred()

func _check(ok: bool, label: String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok:
		failures.append(label)
		push_error(label)

func _sha(data: PackedByteArray) -> String:
	var context := HashingContext.new()
	context.start(HashingContext.HASH_SHA256)
	context.update(data)
	return context.finish().hex_encode()

func _metadata(stream: AudioStreamWAV) -> Dictionary:
	return {"format":stream.format,"rate":stream.mix_rate,"stereo":stream.stereo,"loop":stream.loop_mode,
		"begin":stream.loop_begin,"end":stream.loop_end,"seconds":stream.get_length()}

func _finish() -> void:
	var created := DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	_check(created==OK,"evidence output directory available")
	var result := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"evidence":evidence,
		"scope":"Offline actual production _render_bank once per old/new source, exact PCM byte comparison and metadata-driven regeneration. No device playback, physical listening or real mixed-audio evidence."}
	var file := FileAccess.open(OUT+"/pcm.json",FileAccess.WRITE)
	if file==null:
		push_error("Cannot write reply PCM evidence")
		quit(1)
		return
	file.store_string(JSON.stringify(result,"\t",true,true))
	var written := file.get_error()
	file.close()
	print("CREATION_REPLY_PCM %s checks=%d failures=%s" % ["PASS" if failures.is_empty() and written==OK else "FAIL",checks.size(),failures])
	quit(0 if failures.is_empty() and written==OK else 1)

func _run() -> void:
	_check(FileAccess.file_exists(OLD),"frozen pre-reply Music source exists")
	if not FileAccess.file_exists(OLD):
		_finish()
		return
	var frozen: Script = load(OLD)
	_check(frozen!=null and frozen.can_instantiate(),"frozen Music source loads without class_name conflict")
	if frozen==null or not frozen.can_instantiate():
		_finish()
		return
	var old: Node = frozen.new()
	var current := Music.new()
	var began := Time.get_ticks_usec()
	var original: Dictionary = old._render_bank()
	var old_ms := float(Time.get_ticks_usec()-began)/1000.0
	began=Time.get_ticks_usec()
	var bank: Dictionary = current._render_bank()
	var new_ms := float(Time.get_ticks_usec()-began)/1000.0
	_check(original.streams.size()==9 and bank.streams.size()==9,"old and new production banks each have exactly nine long PCM")
	var long_hashes := {}
	for key: String in original.streams:
		var before: AudioStreamWAV = original.streams[key]
		var after: AudioStreamWAV = bank.streams.get(key)
		var identical := after!=null and before.data==after.data and _metadata(before)==_metadata(after)
		_check(identical,"long PCM bytes and loop metadata unchanged: "+key)
		long_hashes[key]={"old_sha256":_sha(before.data),"new_sha256":_sha(after.data) if after!=null else "","identical":identical}
	var edits_equal := true
	var old_edit_hashes := {}
	for key: String in original.edits:
		var before: AudioStreamWAV = original.edits[key]
		var after: AudioStreamWAV = bank.edits.get(key)
		var identical := after!=null and before.data==after.data and _metadata(before)==_metadata(after)
		edits_equal=edits_equal and identical
		old_edit_hashes[key]={"old_sha256":_sha(before.data),"new_sha256":_sha(after.data) if after!=null else "","identical":identical}
	_check(edits_equal,"every previous edit/tea/travel/tower PCM and metadata remains byte identical")
	var new_keys: Array[String] = []
	for key: String in bank.edits:
		if not original.edits.has(key): new_keys.append(key)
	new_keys.sort()
	_check(new_keys.size()==40,"exactly forty new reply short streams")
	var notes: Dictionary = bank.report.get("reply_notes",{})
	_check(notes.size()==40,"full production report exposes forty reply event lists")
	var total_bytes := 0
	var replies := {}
	for style: String in VOICES:
		var wave_ok := true
		var contour_ok := true
		var regenerated_ok := true
		for bar in range(8):
			var key := "reply_%s_%d" % [style,bar]
			var stream: AudioStreamWAV = bank.edits.get(key)
			if stream==null:
				wave_ok=false
				contour_ok=false
				regenerated_ok=false
				continue
			var data := stream.data
			total_bytes+=data.size()
			wave_ok=wave_ok and new_keys.has(key) and data.size()==35280 and stream.mix_rate==22050 and not stream.stereo and stream.format==AudioStreamWAV.FORMAT_16_BITS and stream.loop_mode==AudioStreamWAV.LOOP_DISABLED and is_equal_approx(stream.get_length(),0.8)
			var events: Array = notes.get(key,[])
			contour_ok=contour_ok and events.size()==3
			var samples := PackedFloat32Array()
			samples.resize(17640)
			for index in range(events.size()):
				var event: Dictionary = events[index]
				if index>=3:
					contour_ok=false
					continue
				var expected_midi := int(CHORDS[bar][[0,2,1][index]])+int(VOICES[style][1])
				var midi := int(event.midi)
				contour_ok=contour_ok and midi==expected_midi and ThemePCM.PITCH_CLASSES.has(posmod(ThemePCM.quantize(midi),12)) and str(event.timbre)==str(VOICES[style][0]) and is_equal_approx(float(event.start),[0.02,0.23,0.48][index]) and float(event.start)+float(event.duration)<=0.75
				current._add_note(samples,float(event.start),float(event.duration),midi,float(event.gain),str(event.timbre),false)
			var regenerated: AudioStreamWAV = current._pcm_stream(samples,false)
			regenerated_ok=regenerated_ok and regenerated.data==data
			var peak := 0.0
			var nonzero := false
			for frame in range(data.size()/2):
				var value := absf(float(data.decode_s16(frame*2))/32768.0)
				peak=maxf(peak,value)
				if value>0.0: nonzero=true
			var quiet_tail := true
			for frame in range(17640-220,17640):
				if data.decode_s16(frame*2)!=0: quiet_tail=false
			wave_ok=wave_ok and nonzero and quiet_tail and peak<1.0 and float(bank.report.effect_peaks.get(key,INF))<=1.0
			replies[key]={"sha256":_sha(data),"bytes":data.size(),"peak":peak,"last_220_frames_silent":quiet_tail,"metadata":_metadata(stream),"notes":events,"regenerated_identical":regenerated.data==data}
		_check(wave_ok,"eight "+style+" production waves are 0.8 sec, nonzero, unclipped and end in real silence")
		_check(contour_ok,"eight "+style+" phrases use actual chord contour 0/2/1, shared timing, D-pentatonic quantization and theme timbre")
		_check(regenerated_ok,"eight "+style+" waves exactly regenerate from reported notes through production _add_note")
	_check(total_bytes==1411200 and int(bank.report.get("reply_pcm_bytes",0))==total_bytes,"forty short PCM total exactly 1411200 bytes")
	_check(float(bank.report.mix_peaks.absolute_with_four_edit_voices)<1.0,"production conservative nine-loop plus four-short peak bound remains below one")
	var raw := PackedFloat32Array()
	var quantized := PackedFloat32Array()
	raw.resize(17640)
	quantized.resize(17640)
	current._add_note(raw,0.02,0.22,60,0.045,"piano",false)
	current._add_note(quantized,0.02,0.22,ThemePCM.quantize(60),0.045,"piano",false)
	_check(raw==quantized and ThemePCM.quantize(60)!=60,"actual production _add_note quantizes out-of-scale input")
	evidence={"old_source":OLD,"bank_render_calls":{"old":1,"new":1},"synthesis_ms":{"old":old_ms,"new":new_ms},
		"nine_long_pcm":long_hashes,"previous_short_pcm":old_edit_hashes,"forty_reply_pcm":replies,"reply_pcm_bytes":total_bytes,
		"mix_peak_bounds":bank.report.mix_peaks,"chords":CHORDS,"voices":VOICES}
	old.free()
	current.free()
	_finish()
