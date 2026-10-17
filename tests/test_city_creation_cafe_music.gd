extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
var checks := 0
var failures: Array[String]=[]

func _initialize() -> void: _run.call_deferred()

func _check(ok: bool, label: String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)

func _boundary(music: Node) -> void:
	var phrase: int=music._cafe_phrase
	var until := Time.get_ticks_msec()+4000
	while music._cafe_phrase<=phrase and Time.get_ticks_msec()<until: await process_frame
	_check(music._cafe_phrase>phrase,"production music clock reaches next actual phrase")

func _run() -> void:
	var city := State.new()
	city.initialize()
	_check(city.set_house_role("h3","garden_cafe").ok,"real cafe house owns music source")
	var music := Music.new()
	root.add_child(music)
	music.setup(city)
	var until := Time.get_ticks_msec()+25000
	while music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not music.audio_report.is_empty(),"production bank renders fixed loops and cafe cues")
	var identities := {}
	for key: String in Music.STEMS: identities[key]=[music._players[key].get_instance_id(),music._players[key].stream.get_instance_id()]
	var tea := {"h3":{"phase":"gathering","arrived":1}}
	music.set_cafe_view(tea)
	await _boundary(music)
	_check(music._cafe_cues==0 and not music.cafe_music_report().audible,"one waiting person produces no social flute")
	tea={"h3":{"phase":"tea","arrived":2}}
	music.set_cafe_view(tea)
	var phase: int=music._cafe_phrase
	var clock: float=music._playback_clock()
	_check(music._cafe_cues==0,"tea starts without an offbeat flourish")
	await _boundary(music)
	await process_frame
	var cue := music.cafe_music_report()
	_check(cue.audible and cue.source_id=="h3" and int(cue.cues)==1,"actual phrase launches one real audible cafe flourish")
	_check(music._cafe_player.stream==music._edit_streams["cafe_flute_%d" % posmod(phase+1,8)],"actual flute notes follow the same production chord phase")
	_check(music._playback_clock()>clock,"cafe flourish preserves advancing transport")
	_check(music._effects.size()==4 and music._players.size()==9 and music.get_child_count()==13,"cafe reuses four short voices and nine loops")
	for key: String in Music.STEMS:
		_check(identities[key]==[music._players[key].get_instance_id(),music._players[key].stream.get_instance_id()],"cafe keeps real loop/player "+key)
	music.set_cafe_view({"h3":{"phase":"waiting","arrived":0}})
	_check(not music.cafe_music_report().audible and not music._cafe_player.playing,"finished or cancelled tea immediately clears actual cue")
	music.set_cafe_view(tea)
	# Automatic music leaves room for meaningful editing instead of stealing
	# an occupied effect node or allocating another one.
	for effect: AudioStreamPlayer in music._effects:
		effect.stream=music._players.foundation.stream
		effect.play()
	var cues: int=music._cafe_cues
	await _boundary(music)
	_check(music._cafe_cues==cues,"full short-voice pool leaves a musical rest")
	for effect: AudioStreamPlayer in music._effects: effect.stop()
	music.set_listener_focus(Vector2(17,14))
	await _boundary(music)
	_check(music._cafe_cues==cues,"distant real tea does not add a foreground flute")
	music.set_listener_focus(Vector2(-3,0))
	music.set_muted(true)
	await _boundary(music)
	_check(music._cafe_cues==cues and not music.cafe_music_report().audible,"muting preserves musical clock but suppresses cafe flourishes")
	music.set_muted(false)
	music.set_cafe_view({"ghost":{"phase":"tea","arrived":3}})
	await _boundary(music)
	_check(music._cafe_cues==cues,"unknown house cannot become audible social source")
	_check(music._edit_streams.tea.data.size()==int(Music.RATE*.8)*2,"actual cup cue is a short PCM")
	var sample_max := 0.0
	for bar in range(8):
		var pcm: PackedByteArray=music._edit_streams["cafe_flute_%d" % bar].data
		_check(pcm.size()==int(Music.RATE*.8)*2,"flute cue bounded duration phrase %d" % bar)
		for index in range(0,pcm.size(),2): sample_max=maxf(sample_max,absf(pcm.decode_s16(index)/32767.0))
	_check(sample_max>0.02 and sample_max<0.1,"production flute has audible bounded samples")
	_check(music.audio_report.mix_peaks.absolute_with_four_edit_voices<1.0,"all existing loops plus any four flute/cup/edit tails remain below clipping")
	var record := {"ok":failures.is_empty(),"checks":checks,"failures":failures,"cafe_cues":music._cafe_cues,"flute_peak":sample_max,"audio":music.music_report()}
	var file := FileAccess.open("res://验证记录/花圃茶座_2026-10-15/music.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(record,"\t",true,true))
	file.close()
	print("CAFE_MUSIC ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"mix_bound":music.audio_report.mix_peaks.absolute_with_four_edit_voices}))
	music.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)
