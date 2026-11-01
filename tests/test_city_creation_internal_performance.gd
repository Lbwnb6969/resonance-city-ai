extends SceneTree
const Full=preload("res://scripts/audio/city_creation_internal_performance.gd")
const Score=preload("res://scripts/audio/city_creation_internal_score.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const Whole=preload("res://scripts/audio/city_creation_master_performance.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const IDS:=["pastoral_comfort_complete_b1","pastoral_comfort_complete_c1"]
var checks:=0
var failures:Array=[]
var out:=""
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func digest(bytes:PackedByteArray)->String:
	var h:=HashingContext.new();h.start(HashingContext.HASH_SHA256);h.update(bytes);return h.finish().hex_encode()
func _initialize()->void:run.call_deferred()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):
		push_error("Require isolated session and new evidence directory");quit(1);return
	DirAccess.make_dir_recursive_absolute(out);var began:=Time.get_ticks_msec();var rows:Array=[]
	check(not Full.prepare("pastoral_comfort_p0_p4_b1").ok,"partial score cannot become a full work")
	check(not Full.prepare(IDS[0],{"lead":"invented"}).ok,"missing branch cannot become silence")
	var hashes:={}
	for id:String in IDS:
		var data:=Full.prepare(id);check(data.ok and data.sections.size()==6 and data.duration==144. and data.document.bars==48,"complete internal work")
		check(Whole.source_valid(data),"all content and full render sources signed")
		var bad:=data.duplicate(true);bad.dsp_signature="obsolete";check(not Whole.source_valid(bad),"stale full DSP rejected")
		bad=data.duplicate(true);bad.master_signature="obsolete";check(not Whole.source_valid(bad),"stale full content rejected")
		check(data.events.all(func(e):return is_equal_approx(e.start,e.section*24.+e.beat*.75) and e.start+e.duration<=144.),"global onsets preserve local written time")
		data.cue_templates={"0/edit/road/0":{"bar":0,"seconds":.6,"preroll":0.,"notes":[{"start":0.,"duration":.3,"midi":66,"gain":.02,"timbre":"guitar"}],"metadata":{}}}
		var rendered:=Import.render(data);var role_hashes:={};var total:=0
		for role:String in Import.ROLES:
			var wave:AudioStreamWAV=rendered[role].stream;total+=wave.data.size()
			check(wave.mix_rate==22050 and wave.get_length()==144. and wave.loop_end==3175200 and wave.get_meta("master_duration")==144.,"real full pooled wave "+role)
			check(rendered[role].peak>0. and rendered[role].peak<=.18,"whole-role peak bounded "+role)
			role_hashes[role]=digest(wave.data)
			check(wave.save_to_wav(out+"/"+id+"_"+role+".wav")==OK,"export full production role")
		check(total==25401600,"one four-stream bundle 25.4MB")
		for section in range(6):
			var selected:=Score.select(section,{},id);var separate:=Import.render(selected)
			check(data.sections[section].orchestration==selected.orchestration and data.sections[section].harmony==selected.harmony,"actual section metadata preserved")
			for role:String in Import.ROLES:
				check(rendered[role].stream.data.slice(section*1058400,(section+1)*1058400)==separate[role].stream.data,"full PCM preserves independent section "+str(section)+role)
		check(rendered.section_cues.size()==6 and rendered.section_cues[0]==rendered.section_cues[1] and rendered.section_cues[0]!=rendered.section_cues[2],"short catalogues shared only for identical written harmony")
		hashes[id]=role_hashes;rows.append({"id":id,"signature":data.signature,"master_signature":data.master_signature,"roles":role_hashes,"pcm_bytes":total})
	check(hashes[IDS[0]].foundation==hashes[IDS[1]].foundation and hashes[IDS[0]].pulse==hashes[IDS[1]].pulse,"B/C entire accompaniment PCM identical")
	check(hashes[IDS[0]].lead!=hashes[IDS[1]].lead and hashes[IDS[0]].answer!=hashes[IDS[1]].answer,"B/C foreground retreat survives whole rendering")
	var mute:=Full.prepare(IDS[1],{"answer":"mute"});mute.cue_templates={};var silent:=Import.render(mute)
	check(mute.sections.all(func(s):return s.declared_silence==["answer"]) and silent.answer.stream.data.count(0)==6350400,"full Answer Mute is genuine zero PCM")
	var data:=Full.prepare(IDS[0]);var city:=State.new();city.initialize_free();var music:Node=load("res://scripts/audio/city_creation_music.gd").new();music._pluck_city=city
	data.city=city.get_instance_id();data.content_context=Whole.context(city)
	city.add_house(Vector2(-20,-20));check(Whole.valid(music,data),"same-city geometry edits do not invalidate full work")
	city.music_mode="gong_pentatonic";check(not Whole.valid(music,data),"mode intent invalidates old full work")
	music._pluck_city=State.new();music._pluck_city.initialize_free();check(not Whole.valid(music,data),"new city rejects old full work");music.free()
	var samples:=PackedFloat32Array();samples.resize(3175200)
	preload("res://scripts/audio/city_creation_felt_profile.gd").add(samples,143.9,.4,69,.04,"felt_piano",true)
	check(Array(samples.slice(0,4400)).any(func(v):return absf(v)>.0001) and Array(samples.slice(529200,533600)).all(func(v):return v==0.),"actual felt profile wraps on 144 seconds, not 24")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"performances":rows,"listening_pass":false}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("COMFORT_CONTINUOUS ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if report.ok else 1)
