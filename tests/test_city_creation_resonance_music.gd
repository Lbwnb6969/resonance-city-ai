extends SceneTree
## Isolated production-bank/restore proof. The full concert viewport fixture
## separately observes the real 24-second lifecycle and every audible phrase.
const Music := preload("res://scripts/audio/city_creation_music.gd")
const State := preload("res://scripts/world/city_creation_state.gd")
const OUTPUT := "res://验证记录/全街共鸣_2026-10-15/audio"
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	_run.call_deferred()

func _check(value: bool, label: String) -> void:
	checks += 1
	if not value:
		failures.append(label)
		push_error(label)

func _run() -> void:
	var city := State.new()
	city.initialize()
	var points: Array[Vector2] = [Vector2(-8,-6)]
	_check(city.add_district(points, 5.6, "deep").ok, "real deep house district")
	points = [Vector2(-2.4,-5)]
	_check(city.add_district(points, 5.6, "weave").ok, "real weave house district")
	var music := Music.new()
	root.add_child(music)
	music.setup(city)
	var view := {"phase":"playing","venue_id":"h4","elapsed":9.0,"duration":24.0,
		"chorus_house_ids":["h1","h2","h3","h5"],"ambient_house_ids":["h6"],
		"wake_house_ids":[],"afterglow":{}}
	music.set_concert_view(view)
	_check(not music.concert_can_start(), "loading bank cannot start another performance")
	var startup_ms:=45000
	for argument:String in OS.get_cmdline_user_args():
		if argument.begins_with("--bank-timeout-ms="):startup_ms=int(argument.trim_prefix("--bank-timeout-ms="))
	var until := Time.get_ticks_msec()+startup_ms
	while music.audio_report.is_empty() and Time.get_ticks_msec()<until:
		await process_frame
	_check(not music.audio_report.is_empty(), "actual production bank ready")
	if music.audio_report.is_empty():
		print("MUSIC_STARTUP_TIMEOUT ",JSON.stringify({"processing":music.is_processing(),"thread_alive":music._worker.is_alive() if music._worker!=null else false,"loading":music._loading,"acoustic_timer":music._acoustic_timer,"process_mode":music.process_mode,"paused":paused}))
		music.queue_free()
		await process_frame
		quit(1)
		return
	await create_timer(1.1).timeout
	var restored := music.music_report()
	_check(restored.active_source.phrase == 3 and restored.active_source.source_id == "h2", "restored PCM begins at saved answer phrase")
	_check(restored.active_source.style == "weave", "answer harmonic style comes from the actual responder")
	_check(float(restored.resonance.elapsed)>=9.0 and float(restored.resonance.elapsed)<12.0, "restored transport agrees with saved elapsed")
	var min_position := 24.0
	var max_position := 0.0
	var stream_ids := {}
	for key in Music.STEMS:
		var player: AudioStreamPlayer = music._players[key]
		min_position = minf(min_position, player.get_playback_position())
		max_position = maxf(max_position, player.get_playback_position())
		stream_ids[key] = player.stream.get_instance_id()
	_check(max_position-min_position<0.06, "all ten restored stems share one transport")
	_check(restored.resonance.audible and restored.resonance.chorus_ids.size()==4 and restored.resonance.ambient_ids==["h6"], "all real neighbor houses receive audible resonance")
	_check(restored.resonance.resonance_arcs==[{"from_id":"h4","to_id":"h2","strength":1.0}], "actual responding house owns the resonance arc")
	for phrase in range(8):
		var source: Dictionary = music._source_for_phrase(phrase)
		_check(city.houses.any(func(house: Dictionary) -> bool: return str(house.id)==str(source.source_id)), "source is a real house phrase %d" % phrase)
		_check(source.timbre == ("piano" if phrase%2==0 else "wood"), "PCM call response parity phrase %d" % phrase)
	_check(music._source_for_phrase(7).role=="finale" and music._source_for_phrase(7).source_id=="h4", "eighth phrase returns the full ensemble to the venue")
	for key in Music.STEMS:
		_check(music.concert_gain_for_phrase(key,7)>-30.0, "finale includes bounded shared voice "+key)
	_check(music.concert_gain_for_phrase("wood_weave",3)>-30.0 and music.concert_gain_for_phrase("wood",3)==-60.0, "responder district selects its real shared harmonic voice")
	var next_round: Dictionary=view.duplicate(true)
	next_round.completed_concerts=1
	music.set_concert_view(next_round)
	_check(music._source_for_phrase(1).source_id=="h5","next completed performance gives the previously unfeatured neighbor its reply")
	_check(music._source_for_phrase(3).source_id=="h1","bounded three reply slots rotate across the whole cast")
	music.set_concert_view(view)
	music.play_edit("arrival")
	music.set_muted(true)
	var silent := music.resonance_state()
	_check(not silent.audible and silent.lead_id.is_empty() and silent.chorus_ids.is_empty() and silent.ambient_ids.is_empty() and silent.resonance_arcs.is_empty() and silent.beat_pulse==0.0, "mute immediately clears every musical response")
	for effect: AudioStreamPlayer in music._effects:
		_check(not effect.playing, "mute stops a fixed-pool arrival voice")
	var before := music._playback_clock()
	await create_timer(0.15).timeout
	_check(music._playback_clock()>before, "muting keeps transport advancing")
	music.update_city(city)
	for key in Music.STEMS:
		_check(stream_ids[key]==music._players[key].stream.get_instance_id(), "city update retains PCM and player "+key)
	_check(music._players.size()==12 and music._effects.size()==4, "fixed twelve stems and four effect voices")
	var peak_report: Dictionary = music.audio_report.mix_peaks
	_check(float(peak_report.absolute_with_four_edit_voices)<1.0, "all transition tails, full finale and four effects fit below clipping")
	_check(float(peak_report.ensemble_finale_max_city)>0.0, "actual rendered full-finale mix measured")
	var export_report := {}
	if OS.get_cmdline_user_args().has("--export"):
		export_report = await _export(music)
	view = {"phase":"idle","afterglow":{"h1":60.0}}
	music.set_concert_view(view)
	_check(not music.active_source().audible and not music.resonance_state().concert_active, "completion immediately releases concert attribution")
	_check(music.resonance_state().afterglow=={"h1":60.0}, "afterglow persists as independent environmental state")
	music.set_muted(false)
	await create_timer(1.6).timeout
	for key in Music.STEMS:
		_check(music._players[key].volume_linear==0.0 if music._long_acoustic_weight(key)==0 else absf(music._players[key].volume_db-music.target_gain_db(key,false))<1.0, "daily arrangement restored "+key)
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"restored":restored,"audio":music.audio_report,"export":export_report}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	var file := FileAccess.open(OUTPUT+"/report.json", FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	print("RESONANCE_MUSIC ",JSON.stringify(report))
	music.queue_free()
	# AudioServer releases the ten stopped playbacks on its mix thread.
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)

func _export(music: Node) -> Dictionary:
	# The listener artifact uses the game's actual signed 16-bit PCM bank.
	# Its dB envelopes solve the same 2.8/s exponential transitions as _process;
	# no normalization, limiting, new synthesis or per-house tracks are added.
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	var samples := PackedFloat32Array()
	samples.resize(Music.FRAMES)
	var blend := 1.0-exp(-2.8/Music.RATE)
	for key in Music.STEMS:
		var bytes: PackedByteArray = music._players[key].stream.data
		var gain_db: float = music.target_gain_db(key,false)
		for index in range(Music.FRAMES):
			var phrase := clampi(int(float(index)/Music.RATE/3.0),0,7)
			gain_db = lerpf(gain_db,music.concert_gain_for_phrase(key,phrase),blend)
			samples[index] += float(bytes.decode_s16(index*2))/32768.0*db_to_linear(gain_db)
		await process_frame
	var peak := 0.0
	for value in samples:
		peak = maxf(peak,absf(value))
	var path := OUTPUT+"/全街共鸣_实际七声部与终曲.wav"
	_check(music._pcm_stream(samples,false).save_to_wav(path)==OK,"listenable 24s production-bank ensemble export")
	_check(peak<1.0, "exported dynamic ensemble never clips")
	return {"path":path,"seconds":Music.SECONDS,"peak":peak,"gain_slew_per_second":2.8,"pcm_bank":"actual AudioStreamWAV.data","transport_start_bar":0,"normalized":false}
