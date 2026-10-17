extends SceneTree
## Offline production PCM evidence only; no audio device or player setup.
const Music = preload("res://scripts/audio/city_creation_music.gd")
# This frozen oracle proves the original nine stems remain byte-exact. Era
# additions have separate production-bank, acoustic and peak verification.
const ORIGINAL_STEMS = ["foundation","wood","air","terrace","concert","wood_deep","wood_weave","wood_market","wood_sylvan"]
const State = preload("res://scripts/world/city_creation_state.gd")
const Arrangement = preload("res://scripts/audio/city_creation_arrangement.gd")
const BACKUP := "res://备份/街坊配器前_20261016/原源码与设计.zip"
const OUT := "res://验证记录/街坊自动配器_2026-10-16"
var checks: Array = []
var failures: Array[String] = []
var evidence: Dictionary = {}

func _initialize() -> void:
	_run.call_deferred()

func _check(condition: bool,label: String) -> void:
	checks.append({"label":label,"passed":condition})
	if not condition:
		failures.append(label)
		push_error(label)

func _finish() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"evidence":evidence,
		"scope":"Offline actual production PCM, exact frozen-source comparison and static target-gain WAV previews. No physical listening, device recording, fade/phrase timing or perceived-loudness claim. The amplitude claim compares conservative peak-times-gain bounds, not actual instantaneous peaks between different arrangements."}
	var file := FileAccess.open(OUT+"/pcm.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("CREATION_ARRANGEMENT_PCM ",JSON.stringify(report))
	quit(0 if failures.is_empty() else 1)

func _metadata(stream: AudioStreamWAV) -> Dictionary:
	return {"format":stream.format,"rate":stream.mix_rate,"stereo":stream.stereo,
		"loop_mode":stream.loop_mode,"loop_begin":stream.loop_begin,"loop_end":stream.loop_end,"seconds":stream.get_length()}

func _metrics(data: PackedByteArray) -> Dictionary:
	var peak := 0.0
	var energy := 0.0
	var frames := data.size()/2
	for frame in range(frames):
		var value := float(data.decode_s16(frame*2))/32768.0
		peak = maxf(peak,absf(value))
		energy += value*value
	return {"bytes":data.size(),"peak":peak,"rms":sqrt(energy/frames)}

func _gains(music: Node) -> Dictionary:
	var gains := {}
	for key: String in ORIGINAL_STEMS: gains[key] = music.target_gain_db(key,false)
	return gains

func _bound(peaks: Dictionary,gains: Dictionary) -> float:
	var bound := 0.0
	for key: String in ORIGINAL_STEMS: bound += float(peaks[key])*db_to_linear(float(gains[key]))
	return bound

func _mix(music: Node,pcm: Dictionary,gains: Dictionary,filename: String) -> Dictionary:
	var samples := PackedFloat32Array()
	samples.resize(Music.FRAMES)
	for key: String in ORIGINAL_STEMS:
		# Cache data once per stream outside all sample loops. The bank itself
		# has already been read once and these packed arrays share COW storage.
		var data: PackedByteArray = pcm[key]
		var gain := db_to_linear(float(gains[key]))
		for frame in range(Music.FRAMES): samples[frame] += float(data.decode_s16(frame*2))/32768.0*gain
	var peak := 0.0
	var energy := 0.0
	for value in samples:
		peak = maxf(peak,absf(value))
		energy += value*value
	var stream: AudioStreamWAV = music._pcm_stream(samples,false)
	var error := stream.save_to_wav(OUT+"/"+filename)
	_check(error==OK and peak<1.0,"24-second unnormalized production PCM preview exports without clipping: "+filename)
	return {"file":filename,"rate":Music.RATE,"seconds":Music.SECONDS,"frames":samples.size(),"peak":peak,"rms":sqrt(energy/samples.size()),"gains_db":gains,"save_error":error}

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var zip := ZIPReader.new()
	var opened := zip.open(BACKUP)
	_check(opened==OK,"frozen pre-arrangement source ZIP opens")
	if opened!=OK:
		_finish()
		return
	var source := zip.read_file("scripts/audio/city_creation_music.gd").get_string_from_utf8()
	zip.close()
	var frozen := GDScript.new()
	frozen.source_code = source.replace("\r\n","\n").replace("class_name CityCreationMusic\n","")
	var compiled := frozen.reload()
	_check(compiled==OK,"frozen Music compiles after removing only its global class_name")
	if compiled!=OK:
		_finish()
		return
	var old: Node = frozen.new()
	var current := Music.new()
	var city := State.new()
	city.initialize()
	var painted := city.add_district([Vector2(-6,-8),Vector2(-6,8)],10.0,"warm",true)
	_check(bool(painted.ok),"actual State creates adaptive warm district")
	var district_id := str(painted.get("district_id",""))
	var ids: Array = city.district_members(district_id)
	var houses: Array = []
	for house: Dictionary in city.houses:
		if str(house.id) in ids: houses.append(house)
	_check(ids==["h1","h2","h3","h4","h5"],"actual left-bank ownership supplies five houses")
	var arrangement := Arrangement.compose(houses,"warm",true)
	old.update_city(city)
	current.update_city(city)
	old._advance_daily_phrase(0)
	current._advance_daily_phrase(0)
	_check(current._daily_arrangement==arrangement and current._daily_source_id=="h1","actual Music source uses helper arrangement from real district members")
	var started := Time.get_ticks_usec()
	var original: Dictionary = old._render_bank()
	var original_ms := float(Time.get_ticks_usec()-started)/1000.0
	started = Time.get_ticks_usec()
	var bank: Dictionary = current._render_bank()
	var current_ms := float(Time.get_ticks_usec()-started)/1000.0
	var pcm := {}
	var peaks := {}
	var streams := {}
	var effects := {}
	var maximum_effect_peak := 0.0
	for category: String in ["streams","edits"]:
		var old_keys: Array = original[category].keys()
		var new_keys: Array = bank[category].keys()
		old_keys.sort()
		new_keys.sort()
		_check(old_keys==new_keys,"complete production bank identities unchanged: "+category)
		for key: String in old_keys:
			var before: AudioStreamWAV = original[category][key]
			var after: AudioStreamWAV = bank[category][key]
			var old_data := before.data
			var data := after.data
			var metadata := _metadata(after)
			var exact := old_data==data and _metadata(before)==metadata
			_check(exact,"PCM bytes and all WAV length/rate/loop parameters match frozen source: "+key)
			var metrics := _metrics(data)
			var row := {"identical":exact,"metadata":metadata,"actual_pcm":metrics}
			if category=="streams":
				pcm[key] = data
				peaks[key] = metrics.peak
				streams[key] = row
			else:
				effects[key] = row
				maximum_effect_peak = maxf(maximum_effect_peak,float(metrics.peak))
	_check(pcm.size()==9,"original nine-loop oracle remains complete")
	var automatic_gains := _gains(current)
	var automatic_bound := _bound(peaks,automatic_gains)
	var manual_bounds := {}
	var maximum_manual_bound := 0.0
	for style: String in Arrangement.STYLES:
		old._daily_style = style
		var bound := _bound(peaks,_gains(old))
		manual_bounds[style] = bound
		maximum_manual_bound = maxf(maximum_manual_bound,bound)
	_check(automatic_bound<=maximum_manual_bound+0.0000001,"actual adaptive PCM peak-times-gain bound stays within maximum old manual theme budget")
	# Common stems and effect voices do not change. For each style stem,
	# max(floor,gain*w) <= w*gain+(1-w)*floor. Thus normalized nonnegative
	# style weights make its bound <= the weighted old single-theme bounds.
	var weighted_manual_bound := 0.0
	for style: String in arrangement.weights: weighted_manual_bound += float(arrangement.weights[style])*float(manual_bounds[style])
	_check(automatic_bound<=weighted_manual_bound+0.0000001,"actual -60 dB inactive floors satisfy convex single-theme budget bound")
	var effect_bound := maximum_effect_peak*db_to_linear(-10.0)*4.0
	_check(automatic_bound+effect_bound<1.0,"conservative adaptive nine-loop plus four actual short-effect voices cannot clip")
	old._daily_style = "warm"
	var manual_gains := _gains(old)
	for key: String in ORIGINAL_STEMS:
		if not Music.STYLE_TRACKS.values().has(key): _check(automatic_gains[key]==manual_gains[key],"actual common-stem target gain unchanged: "+key)
	evidence = {"backup":BACKUP,"source_entry":"scripts/audio/city_creation_music.gd","bank_render_calls":{"original":1,"current":1},
		"synthesis_ms":{"original":original_ms,"current":current_ms},"streams":streams,"effects":effects,"members":ids,"arrangement":arrangement,
		"amplitude_bounds":{"automatic":automatic_bound,"manual_themes":manual_bounds,"maximum_old_manual":maximum_manual_bound,"weighted_old_manual":weighted_manual_bound,
			"four_effects":effect_bound,"automatic_with_four_effects":automatic_bound+effect_bound,"proof":"sum(abs(actual decoded PCM peak) * actual linear target gain). Style amplitudes are nonnegative and sum to one; max(floor,g*w) <= w*g+(1-w)*floor, with the actual -60 dB floor. Common stems/effect budgets are unchanged. This bounds amplitude and clipping, not perceived loudness or pointwise equality to the old warm waveform."},
		"previews":{"automatic":_mix(current,pcm,automatic_gains,"自动配器_左岸五屋_24秒.wav"),"original_manual_warm":_mix(old,pcm,manual_gains,"旧手动暖庭_同城_24秒.wav")}}
	current.free()
	old.free()
	_finish()
