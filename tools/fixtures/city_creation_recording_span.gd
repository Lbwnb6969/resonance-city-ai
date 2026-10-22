extends RefCounted
static func start()->AudioEffectRecord:
	var effect:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,effect);effect.set_recording_active(true);return effect
static func finish(effect:AudioEffectRecord,path:String)->Dictionary:
	effect.set_recording_active(false);var wave:AudioStreamWAV=effect.get_recording();var peak:=0.;var clipped:=0;var saved:=false
	if wave!=null:
		var pcm:=wave.data
		for i in range(pcm.size()/2):
			var value:=absi(pcm.decode_s16(i*2));peak=maxf(peak,value/32768.)
			if value>=32767:clipped+=1
		saved=wave.save_to_wav(path)==OK
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==effect:AudioServer.remove_bus_effect(0,i)
	return {"ok":saved and clipped==0 and peak>.0001 and peak<1.,"peak":peak,"clipped_samples":clipped,"seconds":wave.get_length() if wave!=null else 0.}
