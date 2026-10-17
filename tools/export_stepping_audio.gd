extends SceneTree
## Exports existing production short PCM for listening; not device recording.
const Music = preload("res://scripts/audio/city_creation_music.gd")
const State = preload("res://scripts/world/city_creation_state.gd")
const OUTPUT := "res://验证记录/浅水汀步_2026-10-16"
const NAME := "水滴木琴试听.wav"

func _initialize() -> void:
	_run.call_deferred()

func _run() -> void:
	var city := State.new()
	city.initialize()
	var music := Music.new()
	root.add_child(music)
	music.setup(city)
	var deadline := Time.get_ticks_msec()+25000
	while music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:
		await process_frame
	if music.audio_report.is_empty():
		push_error("Production PCM bank did not finish")
		music.queue_free()
		await process_frame
		quit(1)
		return
	var samples := PackedFloat32Array()
	samples.resize(int(Music.RATE*1.5))
	var sources: Array[Dictionary] = []
	for note in range(3):
		var key := "travel_stepping_0_%d" % note
		if not music._edit_streams.has(key):
			push_error("Missing production stream: "+key)
			music.queue_free()
			await process_frame
			quit(1)
			return
		var stream: AudioStreamWAV = music._edit_streams[key]
		var bytes := stream.data
		var start := roundi(float(note)*0.48*Music.RATE)
		# The same -10dB effect-player gain as gameplay, without normalization.
		for index in range(mini(bytes.size()/2,samples.size()-start)):
			samples[start+index]+=float(bytes.decode_s16(index*2))/32767.0*db_to_linear(-10.0)
		var digest := HashingContext.new()
		digest.start(HashingContext.HASH_SHA256)
		digest.update(bytes)
		sources.append({"key":key,"start_seconds":float(note)*0.48,"gain_db":-10.0,"pcm_sha256":digest.finish().hex_encode()})
	var peak := 0.0
	for sample: float in samples: peak=maxf(peak,absf(sample))
	var directory_error := DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	var error := ERR_CANT_CREATE
	if directory_error==OK:
		error=music._pcm_stream(samples,false).save_to_wav(OUTPUT+"/"+NAME)
	var report := {"ok":error==OK,"output":OUTPUT+"/"+NAME,"rate":Music.RATE,"seconds":1.5,"peak":peak,"sources":sources,
		"provenance":"Existing production _edit_streams PCM at gameplay short-player gain, arranged for audition; not a sound-device capture or an actual resident-walk recording."}
	var file := FileAccess.open(OUTPUT+"/水滴木琴试听.json",FileAccess.WRITE)
	if file!=null:
		file.store_string(JSON.stringify(report,"\t",true,true))
		file.close()
	print("STEPPING_AUDIO_EXPORT ",JSON.stringify(report))
	music.set_process(false)
	for player: AudioStreamPlayer in music._players.values(): player.stop()
	for player: AudioStreamPlayer in music._effects: player.stop()
	await create_timer(.15).timeout
	music.queue_free();await process_frame;await create_timer(.15).timeout
	quit(0 if error==OK else 1)
