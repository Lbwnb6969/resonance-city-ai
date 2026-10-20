extends SceneTree
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
const Stamp=preload("res://scripts/audio/city_creation_bank_stamp.gd")
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	_check(Cache.source_signature()==Stamp.SIGNATURE,"working source and exported bank stamp identify the same normalized synthesis sources")
	var bank:=Cache.load_bank()
	_check(not bank.is_empty(),"saved production bank loads without synthesizing")
	if bank.is_empty():quit(1);return
	_check(bank.streams.size()==12 and bank.edits.size()==307,"all twelve long voices, house plucks and thirty-two era reply samples remain available")
	_check(bank.variations.size()==96,"four harmonic colors retain all eight era/style leads and three separately baked textures")
	for key:String in Music.STEMS:
		var wav:AudioStreamWAV=bank.streams[key]
		_check(wav.data.size()==Music.FRAMES*2 and wav.mix_rate==Music.RATE and wav.format==AudioStreamWAV.FORMAT_16_BITS and not wav.stereo,"original uncompressed mono PCM shape: "+key)
		_check(wav.loop_mode==AudioStreamWAV.LOOP_FORWARD and wav.loop_begin==0 and wav.loop_end==Music.FRAMES,"exact synchronized twenty-four-second loop: "+key)
	for key:String in bank.edits:
		var wav:AudioStreamWAV=bank.edits[key]
		_check(wav.loop_mode==AudioStreamWAV.LOOP_DISABLED and wav.data.size()>0,"non-looping authored sample: "+key)
	_check(bank.report.bank_source=="precompiled","runtime loads the precompiled bank instead of synthesizing it")
	_check(bank.report.mix_peaks.absolute_stereo_with_four_short_voices<1.,"original stereo/four-short-voice clipping bound remains below unity")
	print("BANK_CACHE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"load_ms":bank.report.bank_load_ms,"original_synthesis_ms":bank.report.synthesis_ms,"long_streams":bank.streams.size(),"short_streams":bank.edits.size()}));quit(0 if failures.is_empty() else 1)
