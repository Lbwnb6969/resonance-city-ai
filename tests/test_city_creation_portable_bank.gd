extends SceneTree
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
var failures:Array[String]=[]
var checks:=0
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var output:="res://验证记录/缺库首开_2026-10-22"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	var bank:=Cache.load_bank_at(Cache.PORTABLE_PATH)
	check(not bank.is_empty() and bank.report.get("bank_codec","")=="qoa","complete portable bank matches current synthesis signature")
	if bank.is_empty():quit(1);return
	var original:=Cache.load_bank_at(Cache.PATH)
	var count:=0;var samples:=0;var power:=0.;var errors:=0.;var maximum:=0.;var metadata_ok:=true;var finite:=true;var diagnostics:Array=[]
	for group:String in ["streams","edits","variations","harmony"]:
		if not original.is_empty():check(bank[group].keys()==original[group].keys(),"complete original catalogue retained: "+group)
		for key:String in bank[group]:
			var prior_error:=errors;var prior_power:=power
			var wave:AudioStreamWAV=bank[group][key]
			metadata_ok=metadata_ok and wave.format in [AudioStreamWAV.FORMAT_QOA,AudioStreamWAV.FORMAT_16_BITS] and wave.mix_rate==22050 and wave.get_length()>0.
			var reference:AudioStreamWAV=original[group][key] if not original.is_empty() else null
			if reference!=null:metadata_ok=metadata_ok and wave.stereo==reference.stereo and wave.get_length()==reference.get_length() and wave.loop_mode==reference.loop_mode and wave.loop_begin==reference.loop_begin and wave.loop_end==reference.loop_end
			var playback:=wave.instantiate_playback()
			var source:AudioStreamPlayback=reference.instantiate_playback() if reference!=null else null
			for at:float in [0.,wave.get_length()*.45,maxf(0.,wave.get_length()-.05)]:
				playback.start(at)
				var actual:=playback.mix_audio(1.,1024)
				if source!=null:
					source.start(at);var expected:=source.mix_audio(1.,1024)
					for i in range(actual.size()):
						var difference:=float(actual[i].x-expected[i].x)
						maximum=maxf(maximum,absf(difference));errors+=difference*difference;power+=expected[i].x*expected[i].x
					source.stop()
				for frame:Vector2 in actual:finite=finite and frame.is_finite() and absf(frame.x)<1. and absf(frame.y)<1.
				samples+=actual.size();playback.stop()
			count+=1
			diagnostics.append({"key":group+"/"+key,"power":power-prior_power,"error":errors-prior_error})
	check(bank.streams.size()==12 and bank.variations.size()==240 and count==4324 and bank.harmony.has("pastoral_breeze_v1/lead/0"),"twelve stems,240 legacy variations and seven versioned sample streams ship together")
	check(metadata_ok,"native encoded lengths, sample rate and all loop endpoints remain exact")
	check(finite,"every encoded stream decodes to finite unclipped audio at start, middle and tail")
	var snr:=10.*log(power/errors)/log(10.) if errors>0. else 0.
	diagnostics.sort_custom(func(a,b):return a.error>b.error)
	if not original.is_empty():check(snr>40. and sqrt(errors/samples)<.001,"native sampled codec error stays below the music quality budget")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"streams":count,"decoded_samples":samples,"reference_pcm":not original.is_empty(),"snr_db":snr,"rms_error":sqrt(errors/samples),"maximum_error":maximum,"largest_errors":diagnostics.slice(0,10)}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	FileAccess.open(output+"/portable_cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("PORTABLE_CPU ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
