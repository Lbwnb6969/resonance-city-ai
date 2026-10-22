extends RefCounted
const Encoder=preload("res://tools/bake_creation_portable_bank.gd")
## Keep independent event resynthesis assertions exact for both local PCM and
## the shipped QOA bank. Prefix comparisons stop before the final partial frame.
static func matches(expected:AudioStreamWAV,actual:AudioStreamWAV)->bool:
	if actual.format==AudioStreamWAV.FORMAT_16_BITS:return expected.data==actual.data.slice(0,expected.data.size())
	if actual.format!=AudioStreamWAV.FORMAT_QOA:return false
	var encoded:=Encoder.encode(expected)
	if expected.get_length()==actual.get_length():return encoded.data==actual.data
	var source_frames:=floori(expected.get_length()*expected.mix_rate/5120.)*5120
	if source_frames<=8:return false
	var frames:=floori(float(source_frames-8)*AudioServer.get_mix_rate()/expected.mix_rate)
	var a:=encoded.instantiate_playback();var b:=actual.instantiate_playback();a.start();b.start()
	var equal:=a.mix_audio(1.,frames)==b.mix_audio(1.,frames);a.stop();b.stop()
	return equal
