extends SceneTree
const Score=preload("res://scripts/audio/city_creation_internal_score.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const B:="pastoral_comfort_p0_p2_v2"
const C:="pastoral_comfort_p0_p2_c1"
const MIX:={"lead":-13.5,"foundation":-19.,"pulse":-24.,"answer":-28.}
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func digest(wave:AudioStreamWAV)->String:
	var hash:=HashingContext.new();hash.start(HashingContext.HASH_SHA256);hash.update(wave.data);return hash.finish().hex_encode()
func render(data:Dictionary)->Dictionary:
	var rendered:=Import.render(data);var result:Dictionary={}
	for role:String in MIX:
		var wave:AudioStreamWAV=rendered[role].stream;result[role]=digest(wave)
		check(wave.data.size()==1058400 and rendered[role].peak<=.18,"C role PCM valid "+role)
	return result
func run()->void:
	var began:=Time.get_ticks_msec();var rows:Array=[]
	check(Score.read(B).ok and Score.read(C).ok,"B and C are separately registered")
	for section:int in [0,2]:
		for branch:String in ["base","cross"]:
			var selection:={"lead":branch,"foundation":branch,"pulse":branch,"answer":branch}
			var b:=Score.select(section,selection,B);var c:=Score.select(section,selection,C)
			check(Score.source_valid(b) and Score.source_valid(c),"B/C source signatures valid")
			check(b.signature!=c.signature and b.render_profile==c.render_profile,"B/C cache identities differ")
			check(b.harmony==c.harmony and b.events.size()==c.events.size(),"B/C harmony and event count match")
			for i in range(b.events.size()):
				var a:Dictionary=b.events[i];var z:Dictionary=c.events[i]
				check([a.start,a.duration,a.midi,a.role,a.layer]==[z.start,z.duration,z.midi,z.role,z.layer],"B/C musical timeline matches")
				var expected:=float(a.gain)*(.86 if a.role=="lead" else .85 if a.role=="answer" else 1.)
				check(is_equal_approx(float(z.gain),expected),"C balance is explicit and role-scoped")
			var b_pcm:=render(b);var c_pcm:=render(c);rows.append({"section":section,"branch":branch,"b":b_pcm,"c":c_pcm})
			check(b_pcm.foundation==c_pcm.foundation and b_pcm.pulse==c_pcm.pulse,"C keeps Foundation/Pulse PCM")
			check(b_pcm.lead!=c_pcm.lead and b_pcm.answer!=c_pcm.answer,"C changes only approved front/back roles")
	var mute:=Score.select(2,{"answer":"mute"},C);var rendered:=Import.render(mute)
	check(mute.declared_silence==["answer"] and rendered.answer.stream.data.count(0)==1058400,"C Mute stays real zero PCM")
	var out:="res://验证记录/M84/felt_lead_20261031/variants_cpu.json"
	FileAccess.open(out,FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"rows":rows,"seconds":(Time.get_ticks_msec()-began)/1000.},"\t"));print("COMFORT_VARIANTS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}));quit(0 if failures.is_empty() else 1)
