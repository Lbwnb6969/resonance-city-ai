extends SceneTree
## Encode the exact baked catalogue with Godot's native QOA codec. The source
## PCM bank remains local; this smaller complete bank also works in fresh clones.
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
func _initialize()->void:run.call_deferred()
static func encode(source:AudioStreamWAV)->AudioStreamWAV:
	var data:=source.data;var bytes:=PackedByteArray();bytes.resize(44)
	bytes.encode_u32(0,0x46464952);bytes.encode_u32(4,36+data.size());bytes.encode_u32(8,0x45564157)
	bytes.encode_u32(12,0x20746d66);bytes.encode_u32(16,16);bytes.encode_u16(20,1)
	bytes.encode_u16(22,2 if source.stereo else 1);bytes.encode_u32(24,source.mix_rate)
	bytes.encode_u32(28,source.mix_rate*(4 if source.stereo else 2));bytes.encode_u16(32,4 if source.stereo else 2)
	bytes.encode_u16(34,16);bytes.encode_u32(36,0x61746164);bytes.encode_u32(40,data.size());bytes.append_array(data)
	var wave:=AudioStreamWAV.load_from_buffer(bytes,{"compress/mode":2})
	for key:StringName in source.get_meta_list():wave.set_meta(key,source.get_meta(key))
	wave.loop_mode=source.loop_mode;wave.loop_begin=source.loop_begin;wave.loop_end=source.loop_end
	var expected:=source.instantiate_playback();var actual:=wave.instantiate_playback();var power:=0.;var error:=0.;var count:=0
	for at:float in [0.,source.get_length()*.45,maxf(0.,source.get_length()-.05)]:
		expected.start(at);actual.start(at)
		var a:=expected.mix_audio(1.,1024);var b:=actual.mix_audio(1.,1024)
		for i in range(a.size()):power+=a[i].x*a[i].x;error+=pow(a[i].x-b[i].x,2.);count+=1
		expected.stop();actual.stop()
	# Preserve difficult short transients exactly; resource budget is unchanged.
	if source.get_length()<1. and (sqrt(error/maxi(1,count))>.001 or error>power*pow(10.,-4.2)):return source
	return wave
func build()->Dictionary:
	var signature:=Cache.source_signature()
	var original:Resource=ResourceLoader.load(Cache.PATH)
	if original==null or original.get_meta("signature","")!=signature:return {"ok":false,"reason":"Bake the current original PCM bank first"}
	var bank:Dictionary=original.get_meta("bank");var packed:Dictionary={};var converted:Dictionary={};var count:=0;var exact:=0
	for group:String in ["streams","edits","variations","harmony"]:
		packed[group]={}
		for key:String in bank[group]:
			var source:AudioStreamWAV=bank[group][key];var id:=source.get_instance_id()
			if not converted.has(id):
				if source.format!=AudioStreamWAV.FORMAT_16_BITS:return {"ok":false,"reason":"Expected original 16-bit PCM"}
				var wave:=encode(source)
				if wave.format not in [AudioStreamWAV.FORMAT_QOA,AudioStreamWAV.FORMAT_16_BITS] or wave.mix_rate!=source.mix_rate or wave.stereo!=source.stereo or wave.get_length()!=source.get_length():return {"ok":false,"reason":"Encoded timing differs: "+key}
				if wave.format==AudioStreamWAV.FORMAT_16_BITS:exact+=1
				converted[id]=wave;count+=1
			packed[group][key]=converted[id]
	packed.report=bank.report.duplicate(true);packed.report.bank_codec="qoa";packed.report.exact_pcm_streams=exact
	var resource:=Resource.new();resource.set_meta("signature",signature);resource.set_meta("bank",packed)
	var temporary:="res://验证记录/便携音色_%d.res"%Time.get_ticks_usec()
	var error:=ResourceSaver.save(resource,temporary,ResourceSaver.FLAG_COMPRESS)
	if error!=OK:return {"ok":false,"reason":"Save error: "+str(error)}
	var restored:Resource=ResourceLoader.load(temporary,"",ResourceLoader.CACHE_MODE_IGNORE)
	var actual:Dictionary=restored.get_meta("bank")
	for group:String in ["streams","edits","variations","harmony"]:
		if actual[group].keys()!=packed[group].keys():return {"ok":false,"reason":"Saved catalogue differs"}
		for key:String in packed[group]:
			var a:AudioStreamWAV=packed[group][key];var b:AudioStreamWAV=actual[group][key]
			if a.data!=b.data or a.format!=b.format or a.mix_rate!=b.mix_rate or a.stereo!=b.stereo or a.loop_mode!=b.loop_mode or a.loop_begin!=b.loop_begin or a.loop_end!=b.loop_end:return {"ok":false,"reason":"Saved wave differs: "+key}
	if signature!=Cache.source_signature():return {"ok":false,"reason":"Synthesis sources changed during encoding"}
	if FileAccess.file_exists(Cache.PORTABLE_PATH):
		var archive:="res://废弃/便携音色_%d"%Time.get_ticks_usec();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(archive))
		FileAccess.open(archive+"/依赖计划.json",FileAccess.WRITE).store_string(JSON.stringify({"original":Cache.PORTABLE_PATH,"consumer":"city_creation_bank_cache.gd","replacement":temporary,"signature":signature}))
		error=DirAccess.rename_absolute(Cache.PORTABLE_PATH,archive+"/城市同步声部库_轻量.res")
		if error!=OK:return {"ok":false,"reason":"Archive error: "+str(error)}
	error=DirAccess.rename_absolute(temporary,Cache.PORTABLE_PATH)
	return {"ok":error==OK,"error":error,"streams":count,"bytes":FileAccess.open(Cache.PORTABLE_PATH,FileAccess.READ).get_length() if error==OK else 0,"signature":signature}
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path("res://验证记录"))
	var start:=Time.get_ticks_msec();var worker:=Thread.new();worker.start(build)
	while worker.is_alive():await process_frame
	var result:Dictionary=worker.wait_to_finish();result.elapsed_ms=Time.get_ticks_msec()-start
	print("PORTABLE_BANK ",JSON.stringify(result));quit(0 if result.ok else 1)
