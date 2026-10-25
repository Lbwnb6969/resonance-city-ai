extends SceneTree
## Production PCM, independent legacy-bank comparison, bounded mix and preview.
const Music = preload("res://scripts/audio/city_creation_music.gd")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUTPUT := "res://验证记录/五音乐主题_2026-10-16/audio"
var checks := 0
var failures: Array[String] = []

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok:
		failures.append(label)
		push_error(label)

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	var city := State.new()
	city.initialize()
	var music := Music.new()
	music.update_city(city)
	var started := Time.get_ticks_usec()
	var bank: Dictionary = music.BankCache.load_bank()
	_check(not bank.is_empty(),"current production PCM bank is baked before validation")
	if bank.is_empty():music.free();quit(1);return
	var synthesis_ms := float(Time.get_ticks_usec()-started)/1000.0
	_check(bank.streams.size()==Music.STEMS.size() and Music.STYLE_TRACKS.size()==5,"five real themes and era music use current fixed PCM stream pool")
	_check(int(bank.report.pcm_bytes)==Music.FRAMES*2*Music.STEMS.size(),"fixed PCM budget matches actual twenty-four-second loop pool")
	var actual := {}
	var pcm := {}
	for key: String in Music.STEMS:
		var stream: AudioStreamWAV = bank.streams[key]
		var data := stream.data
		pcm[key] = data
		var peak := 0.0
		var energy := 0.0
		for index in range(Music.FRAMES):
			var sample := float(data.decode_s16(index*2))/32768.0
			peak = maxf(peak,absf(sample))
			energy += sample*sample
		var seam := absf(float(data.decode_s16(0)-data.decode_s16((Music.FRAMES-1)*2))/32768.0)
		actual[key] = {"peak":peak,"rms":sqrt(energy/Music.FRAMES),"seam":seam,"bytes":data.size()}
		_check(data.size()==Music.FRAMES*2 and stream.mix_rate==22050 and stream.loop_end==529200 and peak>0.01 and peak<0.5 and seam<0.005,"actual 24-second PCM has level, phase length and clean seam: "+key)
	_check(pcm.wood_market!=pcm.wood and pcm.wood_market!=pcm.wood_weave and pcm.wood_sylvan!=pcm.air and pcm.wood_sylvan!=pcm.wood_market,"new styles have distinct actual waveforms")
	var market: Array = bank.report.theme_notes.wood_market
	var sylvan: Array = bank.report.theme_notes.wood_sylvan
	_check(market.size()==32 and market.filter(func(note:Dictionary)->bool:return note.timbre=="accordion").size()==16 and market.filter(func(note:Dictionary)->bool:return note.timbre=="pluck").size()==16,"market PCM actually renders sixteen reed notes and sixteen separated plucks")
	_check(sylvan.size()==20 and sylvan.filter(func(note:Dictionary)->bool:return note.timbre=="flute").size()==16 and sylvan.filter(func(note:Dictionary)->bool:return note.timbre=="bell").size()==4,"sylvan PCM actually renders eight long diatonic dyads and four sparse high bells")
	var notes_valid := true
	for note: Dictionary in market+sylvan:
		notes_valid = notes_valid and posmod(int(note.midi),12) in ([2,4,6,7,9,11,1] if note.get("dyad",false) else [2,4,6,9,11]) and float(note.start)>=0.0 and float(note.start)+float(note.duration)<=24.0
	_check(notes_valid,"lead notes keep the pentatonic theme while diatonic companions stay in key and inside the loop")
	_check(float(bank.report.mix_peaks.absolute_with_four_edit_voices)<0.8,"all nine long voices plus four simultaneous effects retain conservative headroom")
	var gains_finite := true
	for style: String in State.DISTRICT_STYLES:
		music._daily_style=style
		for key: String in Music.STEMS:
			gains_finite = gains_finite and is_finite(music.target_gain_db(key,false)) and is_finite(music.concert_gain_for_phrase(key,7))
	_check(gains_finite,"all five daily arrangements and nine-voice finale have defined gains")
	var legacy_checked := false
	for argument: String in OS.get_cmdline_user_args():
		if not argument.begins_with("--baseline="): continue
		var source := FileAccess.get_file_as_string(argument.trim_prefix("--baseline=")).replace("\r\n","\n").replace("class_name CityCreationMusic\n","")
		var baseline_script := GDScript.new()
		baseline_script.source_code = source
		_check(baseline_script.reload()==OK,"original seven-voice production source compiles for independent comparison")
		var baseline: Node = baseline_script.new()
		var original: Dictionary = baseline._render_bank()
		var unchanged: bool = original.streams.size()==7
		for key: String in original.streams:
			unchanged = unchanged and original.streams[key].data==bank.streams[key].data
		for key: String in original.edits:
			unchanged = unchanged and original.edits[key].data==bank.edits[key].data
		_check(unchanged,"all seven existing loops and every short effect remain byte-identical after global quantization")
		legacy_checked = true
		baseline.free()
	var preview := _preview(music,pcm)
	_check(music._pcm_stream(preview,false).save_to_wav(OUTPUT+"/五主题_30秒.wav")==OK,"production PCM five-theme listening preview exports")
	var result := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"synthesis_ms":synthesis_ms,"legacy_checked":legacy_checked,"actual_pcm":actual,"production_report":bank.report,"preview":"five themes, six seconds each; production PCM and the same exponential dB fade, offline mix, not a device capture"}
	FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("FIVE_THEME_PCM ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"synthesis_ms":synthesis_ms,"mix":bank.report.mix_peaks,"legacy_checked":legacy_checked}))
	music.free()
	quit(0 if failures.is_empty() else 1)

func _preview(music: Node, pcm: Dictionary) -> PackedFloat32Array:
	var seconds := 6
	var samples := PackedFloat32Array()
	samples.resize(30*Music.RATE)
	var current := {}
	for key: String in Music.STEMS: current[key]=-60.0
	for section in range(5):
		music._daily_style = State.DISTRICT_STYLES[section]
		var target := {}
		for key: String in Music.STEMS: target[key]=music.target_gain_db(key,false)
		var gains := {}
		for frame in range(seconds*Music.RATE):
			if frame%128==0:
				for key: String in Music.STEMS:
					current[key] = lerpf(current[key],target[key],1.0-exp(-128.0/Music.RATE*2.8))
					gains[key] = db_to_linear(current[key])
			var index := section*seconds*Music.RATE+frame
			var at := index%Music.FRAMES
			for key: String in Music.STEMS: samples[index] += float(pcm[key].decode_s16(at*2))/32768.0*float(gains[key])
	return samples
