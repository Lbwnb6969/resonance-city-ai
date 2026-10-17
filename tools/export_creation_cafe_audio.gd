extends SceneTree
## A reviewable production-PCM mix, not a recording of the sound device.
const Music=preload("res://scripts/audio/city_creation_music.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUTPUT := "res://验证记录/花圃茶座_2026-10-15/audio"

func _initialize() -> void: _run.call_deferred()

func _run() -> void:
	var city := State.new()
	city.initialize()
	city.set_house_role("h3","garden_cafe")
	var music := Music.new()
	root.add_child(music)
	music.setup(city)
	var deadline := Time.get_ticks_msec()+20000
	while music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	if music.audio_report.is_empty():
		quit(1)
		return
	var samples := PackedFloat32Array()
	samples.resize(Music.RATE*8)
	var gains := {}
	for key: String in Music.STEMS:
		var gain: float=music.target_gain_db(key,false)
		gains[key]=gain
		_add_pcm(samples,music._players[key].stream,0.0,gain)
	_add_pcm(samples,music._edit_streams.cafe_flute_0,0.0,-10.0)
	_add_pcm(samples,music._edit_streams.cafe_flute_1,3.0,-10.0)
	_add_pcm(samples,music._edit_streams.tea,6.0,-10.0)
	# A preview ends mid-loop; soften its cut without changing gameplay PCM.
	for index in range(samples.size()-int(Music.RATE*0.15),samples.size()):
		samples[index]*=float(samples.size()-1-index)/(Music.RATE*0.15)
	var peak := 0.0
	for value in samples: peak=maxf(peak,absf(value))
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	var error: int=music._pcm_stream(samples,false).save_to_wav(OUTPUT+"/花下品茶_源码PCM试听.wav")
	var record := {"ok":error==OK and peak<1.0,"provenance":"actual production AudioStreamWAV.data mixed at existing target gains; not sound-device capture","rate":Music.RATE,"seconds":8,"review_fade_out_seconds":0.15,"peak":peak,"loop_gains_db":gains,"cues":[{"kind":"cafe_flute_0","at":0,"gain_db":-10},{"kind":"cafe_flute_1","at":3,"gain_db":-10},{"kind":"tea","at":6,"gain_db":-10}]}
	var file := FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(record,"\t",true,true))
	file.close()
	print("CAFE_AUDIO_EXPORT ",JSON.stringify(record))
	music.queue_free()
	await create_timer(0.2).timeout
	quit(0 if record.ok else 1)

func _add_pcm(samples: PackedFloat32Array, stream: AudioStreamWAV, start: float, gain_db: float) -> void:
	var data := stream.data
	var offset := roundi(start*Music.RATE)
	var gain := db_to_linear(gain_db)
	for index in range(mini(data.size()/2,samples.size()-offset)):
		samples[offset+index]+=data.decode_s16(index*2)/32767.0*gain
