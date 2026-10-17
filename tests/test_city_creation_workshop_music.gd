extends SceneTree

const Music := preload("res://scripts/audio/city_creation_music.gd")
const State := preload("res://scripts/world/city_creation_state.gd")
const OUTPUT := "res://验证记录/制琴工坊_2026-10-15/music.json"
var checks := 0
var failures: Array[String] = []


func _initialize() -> void:
	_run.call_deferred()


func _run() -> void:
	var city := State.new()
	city.initialize()
	_check(city.set_house_role("h2", "workshop").ok and city.produce_craft("h2", 8), "actual workshop produces supply")
	var music := Music.new()
	root.add_child(music)
	music.set_listener_focus(Vector2(-21, -6))
	music.setup(city)
	var deadline := Time.get_ticks_msec() + 25000
	while music.audio_report.is_empty() and Time.get_ticks_msec() < deadline: await process_frame
	_check(not music.audio_report.is_empty(), "production PCM bank ready")
	if music.audio_report.is_empty():
		music.queue_free()
		await process_frame
		quit(1)
		return
	await create_timer(0.7).timeout
	_check(music.daily_source().source_id == "h1" and music.daily_source().audible, "focused actual house owns audible daily phrase")
	var stream_ids := {}
	var player_ids := {}
	for key in Music.STEMS:
		stream_ids[key] = music._players[key].stream.get_instance_id()
		player_ids[key] = music._players[key].get_instance_id()
	var daily_before := {"air":music.target_gain_db("air", false),"terrace":music.target_gain_db("terrace", false)}
	var old_phrase: int = maxi(music._daily_phrase, int(music._playback_clock() / 3.0))
	var before_clock: float = music._playback_clock()
	for tier in range(1, 4):
		_check(city.reserve_craft("h2", "h3", "h1") and city.complete_craft("h2", "h3", "h1") and city.improvement_level("h1") == tier, "real conserved delivery installs daily source tier %d" % tier)
		music.update_city(city)
		_check(music.daily_source().improvement == 0 and music.target_gain_db("air", false) == daily_before.air and music.target_gain_db("terrace", false) == daily_before.terrace, "installation waits for musical boundary at tier %d" % tier)
	await _next_phrase(music, old_phrase)
	_check(music.daily_source().improvement == 3, "next real three-second phrase adopts installed daily tier")
	_check(is_equal_approx(music.target_gain_db("air", false), daily_before.air + 2.4) and is_equal_approx(music.target_gain_db("terrace", false), daily_before.terrace + 3.0), "daily upgrade changes actual air and chime target gains")
	await create_timer(0.9).timeout
	_check(absf(music._players.air.volume_db - music.target_gain_db("air", false)) < 0.5 and absf(music._players.terrace.volume_db - music.target_gain_db("terrace", false)) < 0.5, "real daily PCM players audibly converge to upgraded gains")
	_check(music._playback_clock() > before_clock, "delivery preserves advancing music transport")
	# Real even-bar start keeps the existing call-and-response PCM in phase.
	deadline = Time.get_ticks_msec() + 7500
	while not music.concert_can_start() and Time.get_ticks_msec() < deadline: await process_frame
	_check(music.concert_can_start(), "concert begins at real even-bar boundary")
	music.set_concert_view({"phase":"playing","venue_id":"h4","elapsed":0.0,"duration":24.0,"chorus_house_ids":["h1"],"ambient_house_ids":[],"wake_house_ids":[],"afterglow":{}})
	var concert_before := {"air":music.target_gain_db("air", true),"terrace":music.target_gain_db("terrace", true)}
	old_phrase = maxi(music._daily_phrase, int(music._playback_clock() / 3.0))
	_check(city.reserve_craft("h2", "h3", "h4") and city.complete_craft("h2", "h3", "h4"), "real installation upgrades concert venue")
	music.update_city(city)
	_check(music._source_for_phrase(0).improvement == 0 and music.target_gain_db("air", true) == concert_before.air and music.target_gain_db("terrace", true) == concert_before.terrace, "current concert phrase retains previous actual gains")
	await _next_phrase(music, old_phrase)
	_check(music._source_for_phrase(0).improvement == 1 and music._source_for_phrase(1).improvement == 3, "next actual phrase latches real venue and responder improvements")
	_check(is_equal_approx(music.concert_gain_for_phrase("air", 0), concert_before.air + 1.0) and is_equal_approx(music.concert_gain_for_phrase("terrace", 0), concert_before.terrace + 1.5), "venue upgrades alter real concert air and chime envelopes")
	deadline = Time.get_ticks_msec() + 200
	while music._concert_phrase() < 1 and Time.get_ticks_msec() < deadline: await process_frame
	_check(music.active_source().source_id == "h1" and music.active_source().audible and music.active_source().improvement == 3, "actual answering house is upgraded audible source")
	_check(music.target_gain_db("air", true) == -20.0 and music.target_gain_db("terrace", true) == -20.5, "current upgraded response drives actual bounded concert targets")
	await create_timer(0.9).timeout
	_check(absf(music._players.air.volume_db + 20.0) < 0.5 and absf(music._players.terrace.volume_db + 20.5) < 0.5, "real concert players audibly adopt upgraded response gains")
	var maximums := {"foundation":-10.0,"wood":-10.0,"wood_deep":-10.0,"wood_weave":-10.0,"air":-13.0,"terrace":-15.0,"concert":-8.0}
	for key in Music.STEMS:
		_check(music.target_gain_db(key, false) <= maximums[key], "daily gain remains under production mix bound " + key)
		for phrase in range(8): _check(music.concert_gain_for_phrase(key, phrase) <= maximums[key], "concert envelope bounded %s phrase %d" % [key, phrase])
		_check(music._players[key].get_instance_id() == player_ids[key] and music._players[key].stream.get_instance_id() == stream_ids[key] and music._players[key].playing, "permanent upgrades retain live shared player and PCM " + key)
	var min_position := 24.0
	var max_position := 0.0
	for player: AudioStreamPlayer in music._players.values():
		min_position = minf(min_position, player.get_playback_position())
		max_position = maxf(max_position, player.get_playback_position())
	_check(max_position - min_position < 0.06, "all nine PCM voices retain one phase")
	_check(music._players.size() == 9 and music._effects.size() == 4, "permanent improvement uses fixed nine stems and four effect pool")
	# Reach the existing geometry caps through legal room/terrace edits, then
	# verify upgrades cannot raise either shared color above its prior maximum.
	var expansion_ok := true
	for level in range(1, 11): expansion_ok = city.add_cell("h1", 0, 0, level).ok and expansion_ok
	for level in range(1, 9): expansion_ok = city.add_cell("h1", 1, 0, level, "terrace").ok and expansion_ok
	_check(expansion_ok, "actual supported construction reaches existing large-city arrangement caps")
	music.update_city(city)
	_check(music.target_gain_db("air", false) == -13.0 and music.target_gain_db("terrace", false) == -15.0, "installed colors clamp at original large-city gain maxima")
	_test_effect(music, "craft", [57, 62], "wood")
	_test_effect(music, "installed", [74, 78, 81], "bell")
	for i in range(5): music.play_edit("craft" if i % 2 == 0 else "installed")
	_check(music._effects.size() == 4 and music.get_child_count() == 13, "overlapping completion cues reuse bounded effect nodes")
	_check(music.audio_report.mix_peaks.absolute_with_four_edit_voices < 1.0, "maximum city and four actual completion effects fit below clipping")
	music.set_muted(true)
	_check(not music.daily_source().audible and not music.active_source().audible, "mute clears real audible ownership")
	for effect: AudioStreamPlayer in music._effects: _check(not effect.playing, "mute stops completion cue")
	var report := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"daily_before":daily_before,"concert_before":concert_before,"audio":music.music_report(),"supply":city.workshop_supply,"installed":city.house_improvements}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT.get_base_dir()))
	var file := FileAccess.open(OUTPUT, FileAccess.WRITE)
	file.store_string(JSON.stringify(report, "\t", true, true))
	file.close()
	print("CITY_CREATION_WORKSHOP_MUSIC ", JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"mix_bound":music.audio_report.mix_peaks.absolute_with_four_edit_voices}))
	music.queue_free()
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)


func _next_phrase(music: Node, previous: int) -> void:
	var deadline := Time.get_ticks_msec() + 4000
	while music._daily_phrase <= previous and Time.get_ticks_msec() < deadline: await process_frame
	_check(music._daily_phrase > previous, "actual PCM clock crossed next three-second phrase")


func _test_effect(music: Node, kind: String, notes: Array, timbre: String) -> void:
	var samples := PackedFloat32Array()
	samples.resize(int(Music.RATE * 0.8))
	for i in range(notes.size()): music._add_note(samples, i * 0.065, 0.58, notes[i], 0.09, timbre, false)
	var expected: AudioStreamWAV = music._pcm_stream(samples, false)
	_check(music._edit_streams[kind].data == expected.data, "actual completion PCM uses harmonious " + timbre + " timbre for " + kind)


func _check(condition: bool, label: String) -> void:
	checks += 1
	if not condition:
		failures.append(label)
		push_error(label)
