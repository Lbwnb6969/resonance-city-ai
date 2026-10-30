extends SceneTree
## Controlled music-only comparison. Live scene recordings are separate evidence.
const Whole=preload("res://scripts/audio/city_creation_master_performance.gd")
const Catalog=preload("res://scripts/audio/city_creation_master_catalog.gd")
const MIX_DB:={"lead":-13.5,"foundation":-19.,"pulse":-24.,"answer":-28.}
func _initialize()->void:run.call_deferred()
func run()->void:
	var out:="res://验证记录/M84/composition_ab_20261030/render"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var synth=load("res://scripts/audio/city_creation_music.gd").new();var reports:Array=[]
	for id:String in ["baseline","pastoral_ab1","pastoral_background_ab2"]:
		var began:=Time.get_ticks_msec();var data:=Whole.prepare(0,id)
		if not data.ok:push_error(str(data));synth.free();quit(1);return
		data.cue_templates={};var rendered:=Whole.render(data,synth);var mixed:=PackedFloat32Array();mixed.resize(3175200);var roles:Dictionary={}
		for role:String in MIX_DB:
			var row:Dictionary=rendered[role];var wave:AudioStreamWAV=row.stream;var bytes:=wave.data;var gain:=db_to_linear(MIX_DB[role])
			for i in range(mixed.size()):mixed[i]+=bytes.decode_s16(i*2)/32768.*gain
			var sha:=HashingContext.new();sha.start(HashingContext.HASH_SHA256);sha.update(bytes)
			roles[role]={"pcm_sha256":sha.finish().hex_encode(),"notes":row.notes,"peak":row.peak,"mix_db":MIX_DB[role],"bytes":bytes.size()}
		var mix:AudioStreamWAV=synth._pcm_stream(mixed,false)
		if mix.save_to_wav(out+"/"+id+"_dry.wav")!=OK:synth.free();quit(1);return
		reports.append({"id":id,"source":Catalog.CONTENTS[id].path,"signature":data.signature,"master_signature":data.master_signature,"duration":144.,"roles":roles,"seconds":(Time.get_ticks_msec()-began)/1000.})
		print("COMPOSITION_AB_RENDER ",id," ",reports[-1].seconds,"s")
	FileAccess.open(out+"/render.json",FileAccess.WRITE).store_string(JSON.stringify({"scope":"offline music-only fixed four-role mix, not speaker PCM or listening verdict","mix_db":MIX_DB,"performances":reports},"\t"));synth.free();quit(0)
