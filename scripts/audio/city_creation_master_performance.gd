extends RefCounted
## The existing version2 base score, played as one 144-second four-role loop.
const Master=preload("res://scripts/audio/city_creation_master_score.gd")
const Background=preload("res://scripts/audio/city_creation_background_flute.gd")
const Catalog=preload("res://scripts/audio/city_creation_master_catalog.gd")
const Cues=preload("res://scripts/audio/city_creation_score_cue_bank.gd")
const Transition=preload("res://scripts/audio/city_creation_stream_transition.gd")
const RATE:=22050
const SECONDS:=144.
static func dsp_signature()->String:
	var parts:PackedStringArray=[preload("res://scripts/audio/city_creation_bank_cache.gd").source_signature()]
	for path:String in ["res://scripts/audio/city_creation_master_performance.gd","res://scripts/audio/city_creation_master_score.gd","res://scripts/audio/city_creation_master_catalog.gd","res://scripts/audio/city_creation_background_flute.gd","res://scripts/audio/city_creation_score_playback.gd","res://scripts/audio/city_creation_authored_score.gd","res://scripts/audio/city_creation_score_cue_bank.gd"]:parts.append(FileAccess.get_file_as_string(path).replace("\r\n","\n").sha256_text())
	return "|".join(parts).sha256_text()
static func prepare(mode:int,content_id:String="baseline")->Dictionary:
	var sections:Array=[];var events:Array=[];var master:=Catalog.read(content_id)
	if master.is_empty():return {"ok":false,"message":"母曲容器无效"}
	var dsp:=dsp_signature()
	for p in range(6):
		var data:=Catalog.section(content_id,p,mode)
		if not data.ok:return data
		if data.master_signature!=master.signature:return {"ok":false,"message":"母曲来源已改变，请重新准备"}
		sections.append({"signature":data.signature,"harmony":data.harmony})
		for original:Dictionary in data.events:
			var note:=original.duplicate(true);note.start+=p*24.;events.append(note)
	var signature:=JSON.stringify(["master_performance1",master.signature,mode,dsp,content_id]).sha256_text()
	return {"ok":true,"signature":signature,"master_signature":master.signature,"content_id":content_id,"render_profile":Catalog.CONTENTS[content_id].get("render_profile","original"),"dsp_signature":dsp,"duration":SECONDS,"sections":sections,"events":events,"harmony":sections[0].harmony,"section":0,"document":{"id":Catalog.CONTENTS[content_id].document_id,"harmony_mode":mode,"bars":48}}
static func context(city:RefCounted,affinity:bool=false)->Array:
	var result:Array=[city.music_mode,hash(city.biome_seed)]
	if affinity:result.append(city.creative_settings.get("music",{}).duplicate(true))
	return result
static func valid(owner:Node,data:Dictionary)->bool:
	var city:RefCounted=owner._pluck_city
	if city==null or data.get("city",0)!=city.get_instance_id():return false
	return data.get("content_context",[])==context(city,bool(data.get("affinity_preview",false))) if data.get("duration",24.)==SECONDS or data.get("affinity_preview",false) else data.get("revision",-1)==city.revision
static func source_valid(data:Dictionary)->bool:
	if data.get("internal_version",0)==3:return preload("res://scripts/audio/city_creation_internal_score.gd").source_valid(data)
	return Catalog.read(str(data.get("content_id","baseline"))).get("signature","")==data.master_signature and dsp_signature()==data.dsp_signature
static func render(data:Dictionary,synth:Node)->Dictionary:
	var out:Dictionary={}
	for role:String in ["lead","foundation","pulse","answer"]:
		var notes:Array=data.events.filter(func(e):return e.role==role).duplicate(true)
		var samples:=PackedFloat32Array();samples.resize(roundi(SECONDS*RATE))
		var background:bool=data.get("render_profile","")==Background.ID and role=="lead"
		for note:Dictionary in notes:
			if background and note.timbre=="flute":Background.add(samples,note)
			else:synth._add_harmony_note(samples,note.start,note.duration,note.midi,note.gain,note.timbre,true)
		var peak:=0.
		for value:float in samples:peak=maxf(peak,absf(value))
		var scale:=minf(1.,.18/maxf(.000001,peak))
		if background:scale*=db_to_linear(Background.LEAD_GAIN_DB)
		if scale<1.:
			for i in range(samples.size()):samples[i]*=scale
			for note:Dictionary in notes:note.gain*=scale
		var wave:AudioStreamWAV=synth._pcm_stream(samples,true);wave.set_meta("master_duration",SECONDS)
		out[role]={"stream":wave,"notes":notes,"peak":peak*scale,"bytes":samples.size()*2}
	var catalogues:Dictionary={};var short_sections:Array=[]
	for section:Dictionary in data.sections:
		var key:=JSON.stringify(section.harmony)
		if not catalogues.has(key):catalogues[key]=Cues.render(data.cue_templates,section.harmony,str(data.signature),synth)
		short_sections.append(catalogues[key])
	out.short_cues=short_sections[0];out.section_cues=short_sections
	return out
static func position(owner:Node,clock:float,data:Dictionary)->float:
	var stem:=str(owner.get_meta("authored_score_stem",""))
	if not owner._players.has(stem):return fposmod(clock,float(data.get("duration",24.)))
	var player:AudioStreamPlayer=owner._players[stem]
	var offset:=float(player.stream.get_meta("master_offset",0.));var node:=owner.get_node_or_null("ScorePlayback")
	if node!=null and not node.scheduled.is_empty() and clock<float(node.scheduled.boundary):offset=float(player.stream.get_meta("previous_master_offset",offset))
	AudioServer.lock()
	var reference:float=preload("res://scripts/audio/city_creation_cue_grid.gd").transport_clock(owner)
	var native:=player.get_playback_position()-float(owner.get_meta("cue_clock_bias",0.))
	AudioServer.unlock()
	return fposmod(native-offset+clock-reference,float(data.get("duration",24.)))
static func view(owner:Node,data:Dictionary,clock:float)->Dictionary:
	if data.get("duration",24.)!=SECONDS:return data
	var result:=data.duplicate();var section:=posmod(floori((position(owner,clock,data)+2./RATE+.0000001)/24.),6)
	result.section=section;result.harmony=data.sections[section].harmony;result.section_signature=data.sections[section].signature
	result.short_cues=data.section_cues[section]
	return result
static func transition(data:Dictionary,key:String)->AudioStreamWAV:
	var decoder:=Transition.new();var old_wave:AudioStreamWAV=data.old[key];var old:PackedFloat32Array;var old_bytes:=old_wave.data
	if old_wave.format==AudioStreamWAV.FORMAT_16_BITS:
		old.resize(old_bytes.size()/2)
		for i in range(old.size()):old[i]=old_bytes.decode_s16(i*2)/32768.
	else:old=decoder.decode(old_wave)
	decoder.free()
	var target:AudioStreamWAV=data.targets[key];var target_bytes:=target.data;var frames:=target_bytes.size()/2
	var intro:=roundi((data.boundary-data.cycle)*RATE);var count:=roundi(Transition.FADE*RATE)
	var old_offset:=roundi((float(data.old_positions[key])-float(data.start_local))*RATE)
	var target_origin:=0 if data.data.get("duration",24.)==SECONDS else roundi(fposmod(float(data.boundary),24.)*RATE)
	var bytes:=PackedByteArray();bytes.resize((intro+frames)*2)
	for i in range(intro+frames):
		var weight:=smoothstep(0.,1.,float(i-intro)/count)
		var value:=lerpf(old[posmod(i+old_offset,old.size())],target_bytes.decode_s16(posmod(i-intro+target_origin,frames)*2)/32768.,weight)
		bytes.encode_s16(i*2,clampi(roundi(value*32768.),-32768,32767))
	var wave:=AudioStreamWAV.new();wave.mix_rate=RATE;wave.format=AudioStreamWAV.FORMAT_16_BITS;wave.data=bytes
	wave.loop_mode=AudioStreamWAV.LOOP_FORWARD;wave.loop_begin=intro;wave.loop_end=intro+frames
	wave.set_meta("transition",true);wave.set_meta("master_offset",float(intro-target_origin)/RATE);wave.set_meta("previous_master_offset",-float(old_offset)/RATE)
	return wave
