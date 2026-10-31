extends SceneTree
const Score=preload("res://scripts/audio/city_creation_internal_score.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const ID:="pastoral_comfort_p0_p2_v1"
const OUT:="res://验证记录/M84/comfort_slice_20261031/render"
const MIX:={"lead":-13.5,"foundation":-19.,"pulse":-24.,"answer":-28.}
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var began:=Time.get_ticks_msec();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	check(Score.read(ID).ok and Score.select().events.size()==104,"new registered slice and original104 coexist")
	check(not Score.read("res://injected.json").ok and not Score.select(1,{},ID).ok,"unregistered paths and absent sections rejected")
	var loaded:=Score.read(ID);var bad:Dictionary=loaded.score.duplicate(true)
	bad.sections[0].roles.lead.base.articulation="original"
	check(not Score.validate(bad).ok,"profile identity cannot silently use original synthesis")
	var performances:Array=[]
	for section:int in [0,2]:
		for branch:String in ["base","cross"]:
			var selection:={"lead":branch,"foundation":branch,"pulse":branch,"answer":branch}
			var data:=Score.select(section,selection,ID)
			check(data.ok and Score.source_valid(data),"source and DSP signature valid P%d %s"%[section,branch])
			check(data.events.all(func(e):return e.layer!=3 or e.role=="lead"),"unique Lead layer")
			if section==2 and branch=="cross":
				var collisions:=0
				for a:Dictionary in data.events:
					for b:Dictionary in data.events:
						if a.role=="foundation" and b.role=="pulse" and abs(a.midi-b.midi)==1 and minf(a.beat+a.beats,b.beat+b.beats)>maxf(a.beat,b.beat):collisions+=1
				check(collisions==0,"P2 Foundation/Pulse adjacent semitones removed")
			var rendered:=Import.render(data);var roles:Dictionary={};var mix:=PackedFloat32Array();mix.resize(529200)
			for role:String in MIX:
				var wave:AudioStreamWAV=rendered[role].stream;var bytes:=wave.data;var hash:=HashingContext.new();hash.start(HashingContext.HASH_SHA256);hash.update(wave.data)
				roles[role]={"pcm_sha256":hash.finish().hex_encode(),"peak":rendered[role].peak,"notes":rendered[role].notes.size()}
				check(wave.data.size()==1058400 and not wave.stereo and rendered[role].peak>0. and rendered[role].peak<=.18,"24s mono role valid")
				wave.save_to_wav(OUT+"/P%d_%s_%s.wav"%[section,branch,role])
				for i in range(mix.size()):mix[i]+=bytes.decode_s16(i*2)/32768.*db_to_linear(MIX[role])
			var synth=load("res://scripts/audio/city_creation_music.gd").new();var wave:AudioStreamWAV=synth._pcm_stream(mix,false);synth.free()
			wave.save_to_wav(OUT+"/P%d_%s_dry.wav"%[section,branch])
			performances.append({"id":"P%d_%s"%[section,branch],"signature":data.signature,"master_signature":data.master_signature,"orchestration":data.orchestration,"roles":roles})
	var mute:=Score.select(2,{"answer":"mute"},ID);var silence:=Import.render(mute)
	check(mute.declared_silence==["answer"] and silence.answer.stream.data.count(0)==1058400,"Mute renders actual zero PCM")
	check(not Score.select(0,{"lead":"cantabile"},ID).ok,"unwritten companion not exposed")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"mix_db":MIX,"performances":performances,"listening_pass":false}
	FileAccess.open(OUT+"/render.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("COMFORT_SLICE ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
