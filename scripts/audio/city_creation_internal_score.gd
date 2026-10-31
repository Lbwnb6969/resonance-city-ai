extends RefCounted
## Partial internal v3 orchestration. External schema1 remains unchanged.
const PATH:="res://数据/母曲/田园晨风_orchestration_v3.json"
const CONTENTS:={"pastoral_cross_p0_v3":PATH,"pastoral_comfort_p0_p2_v1":"res://数据/母曲/田园晨风_comfort_p0_p2_v1.json","pastoral_comfort_p0_p2_v2":"res://数据/母曲/田园晨风_comfort_p0_p2_v2.json"}
const PROFILES:={"pastoral_comfort_p0_p2_v1":"comfort_warm_v1","pastoral_comfort_p0_p2_v2":"comfort_felt_v2"}
const ROLES:={"foundation":1,"pulse":2,"answer":2,"lead":3}
const TIMBRES:=["bass","horn","strings","harp","celesta","flute","guitar","cello_harmonic","felt_piano"]
const TIERS:={"foundation":["pizz","warm"],"pulse":["sparse","sway","flowing"],"answer":["mute","echo","canon"],"lead":["simple","lyrical","virtuoso"]}
const ROOT_FIELDS:=["version","id","style","bars","bpm","beats_per_bar","harmony_mode","status","provenance","sections"]
const BRANCH_FIELDS:=["tier","timbre","color","articulation","silent","events"]
static func fields(value:Variant,names:Array)->bool:
	return value is Dictionary and value.size()==names.size() and value.has_all(names)
static func number(value:Variant)->bool:
	return (value is float or value is int) and is_finite(float(value))
static func integer(value:Variant)->bool:
	return number(value) and value==floorf(value)
static func fail(message:String)->Dictionary:return {"ok":false,"message":message}
static func branch(value:Variant,role:String)->Dictionary:
	if not fields(value,BRANCH_FIELDS):return fail("内部谱分支字段无效")
	if value.tier not in TIERS[role] or not integer(value.color) or value.color<0 or value.color>2 or value.articulation not in ["original","comfort_warm_v1","comfort_felt_v2"] or not value.silent is bool:return fail("内部谱演奏选择无效")
	if not value.events is Array or value.events.size()>1024:return fail("内部谱分支事件数量无效")
	if value.silent:
		if role!="answer" or value.tier!="mute" or value.timbre!="" or not value.events.is_empty():return fail("静默必须显式声明Mute空分支")
		return {"ok":true,"events":[]}
	if value.tier=="mute" or value.events.is_empty() or not value.timbre is String:return fail("缺失分支不能冒充静默")
	var events:Array=[];var timbres:PackedStringArray=[]
	for row:Variant in value.events:
		if not row is Array or row.size()!=5:return fail("内部音符结构无效")
		for i in range(4):
			if not number(row[i]):return fail("内部音符必须为有限数值")
		if row[0]<0 or row[0]>=32 or not is_equal_approx(float(row[0])*4.,roundf(float(row[0])*4.)) or row[1]<=0 or row[1]>16 or row[0]+row[1]>32 or not integer(row[2]) or row[2]<24 or row[2]>100 or row[3]<=0 or row[3]>.18 or row[4] not in TIMBRES:return fail("内部音符拍位/音域/增益/音色无效")
		if not timbres.has(row[4]):timbres.append(row[4])
		events.append({"beat":float(row[0]),"beats":float(row[1]),"start":float(row[0])*.75,"duration":float(row[1])*.75,"midi":int(row[2]),"gain":float(row[3]),"timbre":str(row[4]),"role":role,"layer":ROLES[role]})
	var declared:PackedStringArray=value.timbre.split("+");declared.sort();timbres.sort()
	if declared!=timbres:return fail("声明音色必须等于实际分支音色")
	return {"ok":true,"events":events}
static func validate(value:Variant)->Dictionary:
	if not fields(value,ROOT_FIELDS):return fail("内部谱顶层字段无效")
	if value.version!=3 or value.id not in CONTENTS or value.style!="pastoral_breeze" or value.bars!=48 or value.bpm!=80 or value.beats_per_bar!=4 or value.harmony_mode!=0:return fail("内部谱拍钟/身份无效")
	if not value.sections is Array or value.sections.is_empty() or value.sections.size()>6:return fail("内部谱段落无效")
	var seen:Array=[];var total:=0
	for section:Variant in value.sections:
		if not fields(section,["index","harmony","roles"]) or not integer(section.index) or section.index<0 or section.index>5 or section.index in seen:return fail("内部谱段落身份无效")
		seen.append(section.index)
		if not section.harmony is Array or section.harmony.size()!=8 or not fields(section.roles,ROLES.keys()):return fail("内部谱和声/角色缺失")
		for chord:Variant in section.harmony:
			if not chord is Array or chord.size()<3 or chord.size()>8:return fail("内部和声无效")
			for midi:Variant in chord:
				if not integer(midi) or midi<24 or midi>100:return fail("内部和声音高无效")
		for role:String in ROLES:
			if not section.roles[role] is Dictionary or section.roles[role].is_empty():return fail("内部谱缺分支")
			for key:Variant in section.roles[role]:
				if not key is String or key not in ["base","cross","mute"]:return fail("内部谱分支标识无效")
				var result:=branch(section.roles[role][key],role)
				if not result.ok:return result
				if section.roles[role][key].articulation!=PROFILES.get(value.id,"original"):return fail("配器身份与音色版本不符")
				total+=result.events.size()
	if total>8192:return fail("内部谱内容总量过大")
	return {"ok":true,"score":value.duplicate(true)}
static func read(content_id:String="pastoral_cross_p0_v3")->Dictionary:
	if content_id not in CONTENTS:return fail("未注册内部谱身份")
	var raw:=FileAccess.get_file_as_string(CONTENTS[content_id]).replace("\r\n","\n");var result:=validate(JSON.parse_string(raw))
	if result.ok:result.master_signature=raw.sha256_text()
	return result
static func dsp_signature()->String:
	var parts:PackedStringArray=[preload("res://scripts/audio/city_creation_bank_cache.gd").source_signature()]
	for path:String in ["res://scripts/audio/city_creation_internal_score.gd","res://scripts/audio/city_creation_authored_score.gd","res://scripts/audio/city_creation_score_playback.gd","res://scripts/audio/city_creation_chamber_score.gd","res://scripts/audio/city_creation_score_cue_bank.gd","res://scripts/audio/city_creation_comfort_profile.gd","res://scripts/audio/city_creation_felt_profile.gd"]:parts.append(FileAccess.get_file_as_string(path).replace("\r\n","\n").sha256_text())
	return "|".join(parts).sha256_text()
static func source_valid(data:Dictionary)->bool:
	return data.get("master_signature","")==read(str(data.get("content_id","pastoral_cross_p0_v3"))).get("master_signature","missing") and data.get("dsp_signature","")==dsp_signature()
static func select(section_index:int=0,selection:Dictionary={},content_id:String="pastoral_cross_p0_v3")->Dictionary:
	var loaded:=read(content_id)
	if not loaded.ok:return loaded
	var matches:Array=loaded.score.sections.filter(func(s):return s.index==section_index)
	if matches.is_empty():return fail("该段内部配器尚未写定")
	if not selection.keys().all(func(role):return role in ROLES):return fail("内部选择角色无效")
	var source:Dictionary=matches[0];var events:Array=[];var actual:Dictionary={};var silence:Array=[]
	for role:String in ROLES:
		var key:Variant=selection.get(role,"cross")
		if not key is String or not source.roles[role].has(key):return fail("请求的分支未写定")
		var chosen:Dictionary=source.roles[role][key];events.append_array(branch(chosen,role).events)
		actual[role]={"branch":key,"tier":chosen.tier,"color":chosen.color,"timbre":chosen.timbre,"articulation":chosen.articulation,"source":"authored_material","silent":chosen.silent}
		if chosen.silent:silence.append(role)
	var dsp:=dsp_signature();var signature:=JSON.stringify([3,loaded.master_signature,section_index,actual,dsp],"",true,true).sha256_text()
	return {"ok":true,"internal_version":3,"signature":signature,"master_signature":loaded.master_signature,"dsp_signature":dsp,"render_profile":PROFILES.get(content_id,"original"),"content_id":content_id,"section":section_index,"harmony":source.harmony,"events":events,"orchestration":actual,"declared_silence":silence,"document":{"id":content_id,"harmony_mode":0,"bars":8}}
