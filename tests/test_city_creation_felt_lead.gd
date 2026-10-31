extends SceneTree
const Score=preload("res://scripts/audio/city_creation_internal_score.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const Felt=preload("res://scripts/audio/city_creation_felt_profile.gd")
const OLD:="pastoral_comfort_p0_p2_v1"
const NEW:="pastoral_comfort_p0_p2_v2"
const MIX:={"lead":-13.5,"foundation":-19.,"pulse":-24.,"answer":-28.}
var out:="res://验证记录/M84/felt_lead_20261031/render"
var candidate:=NEW
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func hash_pcm(wave:AudioStreamWAV)->String:
	var context:=HashingContext.new();context.start(HashingContext.HASH_SHA256);context.update(wave.data);return context.finish().hex_encode()
func energy(samples:PackedFloat32Array,at:float,length:float)->float:
	var result:=0.;var count:=int(length*Felt.RATE)
	for i in range(int(at*Felt.RATE),int(at*Felt.RATE)+count):result+=samples[i]*samples[i]
	return sqrt(result/count)
func render(data:Dictionary,id:String)->Dictionary:
	var rendered:=Import.render(data);var roles:={};var mix:=PackedFloat32Array();mix.resize(529200)
	for role:String in MIX:
		var wave:AudioStreamWAV=rendered[role].stream;var bytes:=wave.data
		roles[role]={"pcm_hash":hash_pcm(wave),"peak":rendered[role].peak,"notes":rendered[role].notes}
		check(wave.data.size()==1058400 and not wave.stereo and rendered[role].peak>0. and rendered[role].peak<=.18,"24s role PCM "+id+" "+role)
		wave.save_to_wav(out+"/"+id+"_"+role+".wav")
		for i in range(mix.size()):mix[i]+=bytes.decode_s16(i*2)/32768.*db_to_linear(MIX[role])
	var synth=load("res://scripts/audio/city_creation_music.gd").new();var wave:AudioStreamWAV=synth._pcm_stream(mix,false);synth.free()
	wave.save_to_wav(out+"/"+id+"_dry.wav")
	return {"id":id,"signature":data.signature,"master_signature":data.master_signature,"render_profile":data.render_profile,"roles":roles}
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--content="):candidate=arg.trim_prefix("--content=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var rows:Array=[]
	check(Score.read(candidate).ok and Score.select(0,{},candidate).events.size()==Score.select(0,{},NEW).events.size(),"new independent identity; original timeline kept")
	check(not Score.select(1,{},candidate).ok and not Score.select(0,{"lead":"cantabile"},candidate).ok,"unwritten section and branch rejected")
	var bad:Dictionary=Score.read(candidate).score;bad.sections[0].roles.lead.cross.articulation="comfort_warm_v1"
	check(not Score.validate(bad).ok,"wrong synthesis cannot masquerade as new profile")
	for section:int in [0,2]:
		for branch:String in ["base","cross"]:
			var selection:={"lead":branch,"foundation":branch,"pulse":branch,"answer":branch}
			var old:=Score.select(section,selection,OLD);var next:=Score.select(section,selection,candidate)
			check(Score.source_valid(next) and next.signature!=old.signature,"source/cache identities separate")
			var forged:=next.duplicate(true);forged.master_signature="outdated"
			check(not Score.source_valid(forged),"outdated source rejected")
			check(next.harmony==old.harmony and next.events.size()==old.events.size(),"same harmony and real rests")
			for i in range(old.events.size()):
				var a:Dictionary=old.events[i];var b:Dictionary=next.events[i]
				var expected_gain:=float(a.gain) if candidate==NEW else float(a.gain)*(.86 if a.role=="lead" else .85 if a.role=="answer" else 1.)
				if [a.start,a.duration,a.midi,a.role,a.layer]!=[b.start,b.duration,b.midi,b.role,b.layer] or not is_equal_approx(float(b.gain),expected_gain):check(false,"changed musical timeline or selected candidate gain")
			check(next.events.all(func(e):return e.layer!=3 or e.role=="lead" and e.timbre=="felt_piano"),"unique lead and actual declared timbre")
			var prefix:="P%d_%s_"%[section,branch]
			var before:=render(old,prefix+"old");var after:=render(next,prefix+"felt");rows.append(before);rows.append(after)
			var unchanged_roles:Array=["foundation","pulse","answer"] if candidate==NEW else ["foundation","pulse"]
			check(unchanged_roles.all(func(role):return before.roles[role].pcm_hash==after.roles[role].pcm_hash),"unchanged accompaniment PCM kept for selected variant")
			check(before.roles.lead.pcm_hash!=after.roles.lead.pcm_hash,"new lead actually changes PCM")
			if branch=="cross":
				var retreated:=next.duplicate(true)
				for event:Dictionary in retreated.events:
					if event.role=="lead":event.gain*=.86
					elif event.role=="answer":event.gain*=.85
				retreated.signature=JSON.stringify([next.signature,"diagnostic_C_retreat",Score.dsp_signature()]).sha256_text()
				var diagnostic:=render(retreated,prefix+"retreated");rows.append(diagnostic)
				check(["foundation","pulse"].all(func(role):return diagnostic.roles[role].pcm_hash==before.roles[role].pcm_hash),"rejected C retained as diagnostic; never a second registered score")
	var single:=PackedFloat32Array();single.resize(66150);Felt.add(single,0.,2.,62,.04,"felt_piano",false)
	var decay_ratio:=energy(single,1.2,.15)/energy(single,.2,.15)
	check(decay_ratio<.4 and decay_ratio>.15,"measured long-note energy decays instead of steady sine")
	check(single.slice(44100).count(0.)==single.size()-44100,"no added tail outside declared duration")
	var wrapped:=PackedFloat32Array();wrapped.resize(22050);Felt.add(wrapped,.75,.5,94,.04,"felt_piano",true)
	var extended:=PackedFloat32Array();extended.resize(44100);Felt.add(extended,.75,.5,94,.04,"felt_piano",false)
	check(wrapped.slice(0,5512)==extended.slice(22050,27562),"high-note wrap preserves exact tail")
	var mute:=Score.select(2,{"answer":"mute"},candidate);var silence:=Import.render(mute)
	check(mute.declared_silence==["answer"] and silence.answer.stream.data.count(0)==1058400,"real Mute zero PCM")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"mix_db":MIX,"performances":rows,"decay_ratio":decay_ratio,"listening_pass":false}
	FileAccess.open(out+"/render.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("FELT_LEAD ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds,"decay_ratio":decay_ratio}));quit(0 if failures.is_empty() else 1)
