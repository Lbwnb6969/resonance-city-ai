extends SceneTree
## Exports the actual pre-rendered bank and checks live transitions with the
## production API. Run graphically to validate the real audio playback clock.
const Music = preload("res://scripts/audio/city_creation_music.gd")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUTPUT := "res://验证记录/街坊演出_2026-10-14"
var failures: Array[String] = []


func _initialize() -> void:
	_run.call_deferred()


func _run() -> void:
	var state := State.new()
	state.initialize()
	var music := Music.new()
	root.add_child(music)
	music.setup(state)
	var source_houses: Array[String] = ["h3", "h1", "h2", "h1", "h4"]
	music.set_concert_sources("h4", source_houses)
	print("CONCERT_AUDIO_STAGE waiting_for_production_bank")
	var started := Time.get_ticks_msec()
	while music.audio_report.is_empty() and Time.get_ticks_msec() - started < 25000:
		await process_frame
	_check(not music.audio_report.is_empty(), "PCM bank finished")
	if music.audio_report.is_empty():
		music.queue_free()
		await process_frame
		quit(1)
		return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	print("CONCERT_AUDIO_STAGE production_bank_ready ", Time.get_ticks_msec() - started, "ms")
	var report: Dictionary = music.audio_report.duplicate(true)
	report["description"] = "原创程序合成 D 大调五声音阶城市小品；日常与街坊演出各 24 秒，取自游戏实际 PCM bank、未经响度归一化。"
	report["actual_pcm"] = {}
	var pcm_bank: Dictionary = {}
	for key in Music.STEMS:
		var stream: AudioStreamWAV = music._players[key].stream
		# AudioStreamWAV.data is a getter which returns a copied PCM buffer.
		# Cache it once: reading stream.data inside the sample loop copies a
		# megabyte 529,200 times rather than decoding one fixed megabyte.
		var bytes: PackedByteArray = stream.data
		pcm_bank[key] = bytes
		_check(bytes.size() == Music.FRAMES * 2 and stream.mix_rate == Music.RATE, "same PCM length/rate: " + key)
		var peak := 0.0
		for i in range(Music.FRAMES):
			peak = maxf(peak, absf(float(bytes.decode_s16(i * 2)) / 32768.0))
		var seam := absf(float(bytes.decode_s16(0) - bytes.decode_s16((Music.FRAMES - 1) * 2)) / 32768.0)
		report.actual_pcm[key] = {"peak": peak, "seam_step": seam, "bytes": bytes.size()}
		_check(peak < 0.5 and seam < 0.005, "headroom and loop seam: " + key)
		print("CONCERT_AUDIO_STAGE actual_pcm_checked ", key, " ", Time.get_ticks_msec() - started, "ms")
		await process_frame
	for during_concert in [false, true]:
		var samples := PackedFloat32Array()
		samples.resize(Music.FRAMES)
		for key in Music.STEMS:
			var bytes: PackedByteArray = pcm_bank[key]
			var gain := db_to_linear(music.target_gain_db(key, during_concert))
			for i in range(Music.FRAMES):
				samples[i] += float(bytes.decode_s16(i * 2)) / 32768.0 * gain
			await process_frame
		var filename := "街坊演出_原创程序小品.wav" if during_concert else "河湾日常_原创程序小品.wav"
		var result := music._pcm_stream(samples, false).save_to_wav(OUTPUT + "/" + filename)
		_check(result == OK, "WAV export: " + filename)
		print("CONCERT_AUDIO_STAGE exported ", filename, " ", Time.get_ticks_msec() - started, "ms")
		await process_frame
	print("CONCERT_AUDIO_STAGE checking_live_transitions")
	await create_timer(1.6).timeout
	var before: Dictionary = music.music_report()
	_check(bool(before.daily_source.audible) and state.houses.any(func(house:Dictionary)->bool:return str(house.id) == str(before.daily_source.source_id)),"daily melody belongs to a real existing house")
	_check(not music.active_source().audible, "daily audio does not claim a concert source")
	var expected_houses: Array[String] = ["h1", "h2", "h3"]
	for phrase in range(8):
		var source: Dictionary = before.source_schedule[phrase]
		var expected_answer: String = expected_houses[(int(before.source_loop) * 4 + int(phrase / 2)) % expected_houses.size()]
		_check(source.source_id == ("h4" if phrase % 2 == 0 else expected_answer), "stable source schedule: %d" % phrase)
		_check(source.timbre == ("piano" if phrase % 2 == 0 else "wood"), "call and response timbre: %d" % phrase)
	music.set_concert_active(true)
	await create_timer(1.6).timeout
	var active: Dictionary = music.music_report()
	_check(absf(float(active.gains_db.concert) + 8.0) < 1.0, "concert fades in")
	_check(float(active.gains_db.wood) < float(before.gains_db.wood) - 8.0, "wood yields to lead")
	_check(float(active.gains_db.air) < float(before.gains_db.air) - 5.0, "air yields to lead")
	_check(music.active_source().audible, "active source follows audible concert player")
	var heard_roles := {}
	var phrase_observations: Array[Dictionary] = []
	var observed_until := Time.get_ticks_msec() + 6500
	while Time.get_ticks_msec() < observed_until:
		var source: Dictionary = music.active_source()
		if not heard_roles.has(source.role):
			heard_roles[source.role] = true
			phrase_observations.append(source)
		await process_frame
	_check(heard_roles.has("lead") and heard_roles.has("answer"), "real playback moves between venue lead and house answer")
	report["phrase_observations"] = phrase_observations
	active = music.music_report()
	var positions_before_mute: Dictionary = active.positions
	music.play_edit("concert")
	music.set_muted(true)
	_check(not music.active_source().audible, "muted source never claims audibility")
	for key in Music.STEMS:
		_check(music._players[key].volume_linear == 0.0, "immediate mute: " + key)
	for effect: AudioStreamPlayer in music._effects:
		_check(not effect.playing, "mute stops effects")
	music.play_edit("concert")
	for effect: AudioStreamPlayer in music._effects:
		_check(not effect.playing, "muted edit remains silent")
	await create_timer(0.4).timeout
	var muted_report: Dictionary = music.music_report()
	for key in Music.STEMS:
		var advance := fposmod(float(muted_report.positions[key]) - float(positions_before_mute[key]), Music.SECONDS)
		_check(music._players[key].playing and advance > 0.15 and advance < 1.0, "clock continues while muted: " + key)
	music.set_concert_active(false)
	_check(not music.active_source().audible, "cancelled source never claims audibility during fade")
	music.set_muted(false)
	await create_timer(1.6).timeout
	var restored: Dictionary = music.music_report()
	for key in Music.STEMS:
		_check(absf(float(restored.gains_db[key]) - music.target_gain_db(key, false)) < 1.0, "daily gains restored: " + key)
	_check(music._players.size() == Music.STEMS.size(), "fixed shared synchronized players")
	var min_position := Music.SECONDS
	var max_position := 0.0
	for position: float in restored.positions.values():
		min_position = minf(min_position, position)
		max_position = maxf(max_position, position)
	_check(max_position - min_position < 0.06, "stems stay synchronized")
	report["transition"] = {"before": before, "active": active, "muted": muted_report, "restored": restored}
	report["failures"] = failures
	report["ok"] = failures.is_empty()
	var file := FileAccess.open(OUTPUT + "/audio_report.json", FileAccess.WRITE)
	file.store_string(JSON.stringify(report, "\t", true, true))
	file.close()
	print("CONCERT_AUDIO ", JSON.stringify(report))
	music.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)


func _check(ok: bool, message: String) -> void:
	if not ok:
		failures.append(message)
		push_error(message)
