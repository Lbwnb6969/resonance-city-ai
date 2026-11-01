extends SceneTree
## P3 extension through the production validator/synthesizer; quality stays pending.
const Score=preload("res://scripts/audio/city_creation_internal_score.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const MIX:={"lead":-13.5,"foundation":-19.,"pulse":-24.,"answer":-28.}
const IDS:=["pastoral_comfort_p0_p3_b1","pastoral_comfort_p0_p3_c1"]
var out:=""
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func digest(bytes:PackedByteArray)->String:
	var h:=HashingContext.new();h.start(HashingContext.HASH_SHA256);h.update(bytes);return h.finish().hex_encode()
func overlap(a:Dictionary,b:Dictionary)->bool:
	return minf(a.beat+a.beats,b.beat+b.beats)>maxf(a.beat,b.beat)
func run()->void:
	var args:=OS.get_cmdline_user_args()
	for arg:String in args:
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not args.has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):
		push_error("Require isolated session and a new evidence directory");quit(1);return
	DirAccess.make_dir_recursive_absolute(out);var began:=Time.get_ticks_msec();var rows:Array=[]
	var hashes:={};var sequences:={}
	for variant:int in range(2):
		var id:String=IDS[variant];var loaded:=Score.read(id)
		check(loaded.ok,"new identity validates "+id)
		if not loaded.ok:quit(1);return
		var old:=Score.read("pastoral_comfort_p0_p1_p2_b1" if variant==0 else "pastoral_comfort_p0_p1_p2_c1")
		check(loaded.score.sections.slice(0,3)==old.score.sections,"all accepted P0/P1/P2 sections preserved")
		check(not Score.select(4,{},id).ok and not Score.select(3,{"lead":"invented"},id).ok,"unwritten sections/branches still rejected")
		var bad:Dictionary=loaded.score.duplicate(true);bad.sections[3].roles.lead.cross.events[0][0]=-.25
		check(not Score.validate(bad).ok,"negative P3 onset rejected")
		bad=loaded.score.duplicate(true);bad.sections[3].roles.lead.cross.articulation="original"
		check(not Score.validate(bad).ok,"P3 cannot bypass versioned profile")
		for branch:String in ["base","cross"]:
			var sequence:=PackedByteArray()
			for section:int in [2,3]:
				var data:=Score.select(section,{"foundation":branch,"pulse":branch,"answer":branch,"lead":branch},id)
				check(data.ok and Score.source_valid(data),"source/DSP signed "+id+branch+str(section))
				var forged:=data.duplicate(true);forged.master_signature="obsolete"
				check(not Score.source_valid(forged),"stale candidate rejected")
				if section==3:
					var lead:Array=data.events.filter(func(e):return e.role=="lead")
					var answer:Array=data.events.filter(func(e):return e.role=="answer")
					check(lead.all(func(e):return e.midi>=62 and e.midi<=71 and e.layer==3 and e.timbre=="felt_piano"),"P3 explicit mid register and one lead role")
					check(not data.events.any(func(e):return e.layer==3 and e.role!="lead"),"no second layer3 voice")
					check(lead.all(func(e):return not overlap(e,{"beat":12.,"beats":4.}) and not overlap(e,{"beat":24.,"beats":4.})),"two full P3 bars have no lead events")
					check(answer.all(func(a):return lead.all(func(l):return not overlap(a,l))),"Answer entirely occupies Lead gaps")
					var held:=0.
					for event:Dictionary in lead:held+=event.beats
					check(held<20.,"P3 lead has genuine sparse phrases")
				var rendered:=Import.render(data);var roles:={};var mix:=PackedFloat32Array();mix.resize(529200)
				for role:String in MIX:
					var wave:AudioStreamWAV=rendered[role].stream;var bytes:=wave.data
					check(bytes.size()==1058400 and rendered[role].peak>0. and rendered[role].peak<=.18,"role PCM valid "+role)
					roles[role]={"pcm_sha256":digest(bytes),"peak":rendered[role].peak,"notes":rendered[role].notes.size()}
					for i in range(mix.size()):mix[i]+=bytes.decode_s16(i*2)/32768.*db_to_linear(MIX[role])
				var synth=load("res://scripts/audio/city_creation_music.gd").new();var wave:AudioStreamWAV=synth._pcm_stream(mix,false);synth.free()
				var name:="%s_P%d_%s"%[id,section,branch]
				check(wave.save_to_wav(out+"/"+name+".wav")==OK,"save raw audition PCM")
				sequence.append_array(wave.data);hashes[name]=roles
				rows.append({"id":name,"roles":roles,"signature":data.signature,"master_signature":data.master_signature})
			var whole:=AudioStreamWAV.new();whole.format=AudioStreamWAV.FORMAT_16_BITS;whole.mix_rate=22050;whole.data=sequence
			check(whole.save_to_wav(out+"/"+id+"_"+branch+"_48s.wav")==OK,"save chronological P2/P3 audition; not automatic runtime transport")
			sequences[id+"/"+branch]=digest(sequence)
		var mute:=Score.select(3,{"answer":"mute"},id);var silent:=Import.render(mute)
		check(mute.declared_silence==["answer"] and silent.answer.stream.data.count(0)==1058400,"P3 Mute remains zero PCM")
	for branch:String in ["base","cross"]:
		var selection:={"lead":branch,"foundation":branch,"pulse":branch,"answer":branch}
		var b:=Score.select(3,selection,IDS[0]);var c:=Score.select(3,selection,IDS[1])
		check(b.harmony==c.harmony and b.events.size()==c.events.size(),"P3 B/C share harmony and event count")
		for i in range(b.events.size()):
			var a:Dictionary=b.events[i];var z:Dictionary=c.events[i]
			check([a.beat,a.beats,a.midi,a.role,a.layer,a.timbre]==[z.beat,z.beats,z.midi,z.role,z.layer,z.timbre],"P3 B/C musical content identical")
			check(is_equal_approx(z.gain,a.gain*(.86 if a.role=="lead" else .85 if a.role=="answer" else 1.)),"C retreats only Lead/Answer by declared factors")
	for section:int in [2,3]:
		for branch:String in ["base","cross"]:
			var b:Dictionary=hashes["%s_P%d_%s"%[IDS[0],section,branch]];var c:Dictionary=hashes["%s_P%d_%s"%[IDS[1],section,branch]]
			check(b.foundation.pcm_sha256==c.foundation.pcm_sha256 and b.pulse.pcm_sha256==c.pulse.pcm_sha256,"B/C shared accompaniment PCM")
			check(b.lead.pcm_sha256!=c.lead.pcm_sha256 and b.answer.pcm_sha256!=c.answer.pcm_sha256,"B/C foreground balance audible in bytes")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"performances":rows,"sequence_hashes":sequences,"mix_db":MIX,"listening_pass":false}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("COMFORT_P3 ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if report.ok else 1)
