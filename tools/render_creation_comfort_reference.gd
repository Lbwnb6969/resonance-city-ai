extends SceneTree
const Score=preload("res://scripts/audio/city_creation_internal_score.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const Master=preload("res://scripts/audio/city_creation_master_catalog.gd")
const OUT:="res://验证记录/M84/comfort_slice_20261031/reference"
const MIX:={"lead":-13.5,"foundation":-19.,"pulse":-24.,"answer":-28.}
func _initialize()->void:run.call_deferred()
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var results:Array=[]
	for identity:String in ["pastoral_background_ab2_p2","pastoral_cross_p0_v3"]:
		var data:Dictionary=Master.section("pastoral_background_ab2",2,0) if identity=="pastoral_background_ab2_p2" else Score.select()
		if not data.ok:push_error(str(data));quit(1);return
		var rendered:=Import.render(data);var mixed:=PackedFloat32Array();mixed.resize(529200);var roles:Dictionary={}
		for role:String in MIX:
			var wave:AudioStreamWAV=rendered[role].stream;var bytes:=wave.data;var hash:=HashingContext.new();hash.start(HashingContext.HASH_SHA256);hash.update(bytes)
			roles[role]={"pcm_sha256":hash.finish().hex_encode(),"notes":rendered[role].notes,"peak":rendered[role].peak}
			wave.save_to_wav(OUT+"/"+identity+"_"+role+".wav")
			for i in range(mixed.size()):mixed[i]+=bytes.decode_s16(i*2)/32768.*db_to_linear(MIX[role])
		var synth=load("res://scripts/audio/city_creation_music.gd").new();var output:AudioStreamWAV=synth._pcm_stream(mixed,false);output.save_to_wav(OUT+"/"+identity+"_dry.wav");synth.free()
		results.append({"id":identity,"duration":24.,"signature":data.signature,"master_signature":data.master_signature,"roles":roles,"orchestration":data.get("orchestration",{})})
	FileAccess.open(OUT+"/render.json",FileAccess.WRITE).store_string(JSON.stringify({"mix_db":MIX,"performances":results},"\t"));print("INTERNAL_SCORE_RENDER 2 x 24s complete");quit()
