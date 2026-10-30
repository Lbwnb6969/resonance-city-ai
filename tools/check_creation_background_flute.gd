extends SceneTree
const Soft=preload("res://scripts/audio/city_creation_background_flute.gd")
func _initialize()->void:run.call_deferred()
func run()->void:
	var out:="res://验证记录/M84/composition_ab_20261030/tone_probe";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var synth=load("res://scripts/audio/city_creation_music.gd").new()
	for midi in [69,86]:
		for soft in [false,true]:
			var samples:=PackedFloat32Array();samples.resize(44100)
			if soft:Soft.add(samples,{"start":.2,"duration":1.2,"midi":midi,"gain":.05})
			else:synth._add_harmony_note(samples,.2,1.2,midi,.05,"flute",false)
			var wave:AudioStreamWAV=synth._pcm_stream(samples,false);wave.save_to_wav(out+"/"+str(midi)+("_soft" if soft else "_original")+".wav")
	synth.free();print("BACKGROUND_FLUTE_PROBES written at two actual lead registers");quit(0)
