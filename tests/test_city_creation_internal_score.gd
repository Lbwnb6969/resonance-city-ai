extends SceneTree
const Score=preload("res://scripts/audio/city_creation_internal_score.gd")
const External=preload("res://scripts/audio/city_creation_score_document.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func tally(rows:Array)->Dictionary:
	var counts:Dictionary={}
	for n:Array in rows:
		var key:=JSON.stringify([float(n[0]),float(n[1]),int(n[2]),float(n[3]),str(n[4]),str(n[5]),int(n[6])])
		counts[key]=int(counts.get(key,0))+1
	return counts
func run()->void:
	var began:=Time.get_ticks_msec();var loaded:=Score.read();check(loaded.ok,"internal schema validates independently")
	if not loaded.ok:print(loaded);quit(1);return
	var data:=Score.select();var catalog:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/作曲候选/Gemini音乐续稿_素材目录_v1.json"));var original:Array=catalog.materials.cross_district_p0.events
	check(data.ok and data.events.size()==104,"all 104 authored mixed events selected")
	check(tally(data.events.map(func(e):return [e.beat,e.beats,e.midi,e.gain,e.timbre,e.role,e.layer]))==tally(original),"all seven original fields and note multiplicities remain intact")
	check(data.harmony==catalog.materials.cross_district_p0.proposed_container_not_runtime_schema.harmony,"single delivered harmony authority retained")
	check(not Score.select(1).ok and not Score.select(0,{"pulse":"missing"}).ok,"missing sections and branches fail explicitly")
	var mute:=Score.select(0,{"answer":"mute"})
	check(mute.ok and mute.declared_silence==["answer"] and not mute.events.any(func(e):return e.role=="answer"),"Mute is genuinely empty without zero-gain filler")
	check(mute.signature!=data.signature and Score.source_valid(data),"selection affects canonical source and DSP signature")
	var wrong:=data.duplicate();wrong.dsp_signature="stale";check(not Score.source_valid(wrong),"stale DSP cannot publish")
	var dense:Dictionary=loaded.score.duplicate(true)
	for i in range(8):dense.sections[0].roles.pulse.cross.events.append_array(loaded.score.sections[0].roles.pulse.cross.events)
	var count:int=dense.sections[0].roles.pulse.cross.events.size()+data.events.size()-loaded.score.sections[0].roles.pulse.cross.events.size()
	check(count>256 and Score.validate(dense).ok,"internal polyphony is independent of external 256-event ceiling")
	var bad:Dictionary=loaded.score.duplicate(true);bad.sections[0].roles.lead.cross.events[0][4]="res://injected.gd";check(not Score.validate(bad).ok,"unknown timbre path rejected")
	bad=loaded.score.duplicate(true);bad.sections[0].roles.lead.cross.events[0][0]=NAN;check(not Score.validate(bad).ok,"non-finite note rejected")
	bad=loaded.score.duplicate(true);bad.sections[0].roles.answer.mute.events=[[0,1,60,.1,"celesta"]];check(not Score.validate(bad).ok,"nonempty Mute rejected")
	bad=loaded.score.duplicate(true);bad.sections[0].roles.pulse.cross.events=[];check(not Score.validate(bad).ok,"undeclared silent missing material rejected")
	bad=loaded.score.duplicate(true);bad.sections[0].roles.lead.cross.events[0][1]=33;check(not Score.validate(bad).ok,"out-of-section event rejected")
	check(External.read("res://数据/原创谱材/河湾练习_v1/score.json").ok and not External.validate(loaded.score).ok,"external schema1 stays independent and strict")
	var old:Dictionary=External.read("res://数据/原创谱材/河湾练习_v1/score.json").document
	var legacy:Dictionary=old.duplicate(true);legacy.events[0].timbre="strings";check(not External.validate(legacy).ok,"new internal strings never expands external timbre whitelist")
	legacy=old.duplicate(true)
	while legacy.events.size()<=256:legacy.events.append_array(old.events)
	check(not External.validate(legacy).ok,"external 256 event ceiling stays strict")
	legacy=old.duplicate(true);legacy.events=legacy.events.filter(func(e):return e.role!="answer");check(not External.validate(legacy).ok,"external required four roles stay strict")
	check(data.events.filter(func(e):return e.layer==3).all(func(e):return e.role=="lead"),"only lead owns layer3")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open("res://验证记录/M84/internal_v3_20261030/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("INTERNAL_SCORE_CPU ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)
