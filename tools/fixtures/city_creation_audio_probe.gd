extends RefCounted
## Record the actual Master bus in an isolated artifact; allocate no audio voices.
static func record(path: String, seconds: float = 3.2) -> Dictionary:
	var effect := AudioEffectRecord.new()
	AudioServer.add_bus_effect(0,effect)
	effect.set_recording_active(true)
	var tree := Engine.get_main_loop() as SceneTree
	await tree.create_timer(seconds).timeout
	effect.set_recording_active(false)
	var wave: AudioStreamWAV = effect.get_recording()
	var peak := 0.
	var clipped := 0
	var saved := false
	if wave != null:
		var pcm := wave.data
		for i: int in range(pcm.size()/2):
			var value := absi(pcm.decode_s16(i*2))
			peak = maxf(peak,float(value)/32768.)
			if value >= 32767: clipped += 1
		saved = wave.save_to_wav(path) == OK
	for i: int in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i) == effect: AudioServer.remove_bus_effect(0,i)
	return {"ok":saved and peak > .0001 and peak < .99 and clipped == 0,"peak":peak,"clipped_samples":clipped,"seconds":wave.get_length() if wave != null else 0.,"requested_seconds":seconds}
