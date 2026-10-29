extends RefCounted
## Internal 48-bar container. Public schema1 remains eight bars / 256 events.
const PATH:="res://数据/母曲/田园晨风_master2.json"
const Document=preload("res://scripts/audio/city_creation_score_document.gd")
const Core=preload("res://scripts/audio/city_creation_core_scores.gd")
const Register=preload("res://scripts/audio/city_creation_score_register.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
static func read()->Dictionary:
	var raw:=FileAccess.get_file_as_string(PATH).replace("\r\n","\n");var data:Variant=JSON.parse_string(raw)
	if not data is Dictionary or data.get("version")!=2 or data.get("bars")!=48 or data.get("bpm")!=80 or data.get("beats_per_bar")!=4 or data.get("sections",[]).size()!=6:return {}
	data.signature=raw.sha256_text();return data
static func section(index:int,mode:int=0)->Dictionary:
	if index<0 or index>=6 or mode<0 or mode>=10:return {"ok":false,"message":"母曲段落或调式无效"}
	var master:=read()
	if master.is_empty():return {"ok":false,"message":"母曲容器无效"}
	var events:Array=[];var source:Dictionary=master.sections[index]
	for item:Array in source.events:
		events.append({"beat":float(item[0]),"beats":float(item[1]),"midi":Core.map_pitch(int(item[2]),mode),"gain":float(item[3]),"timbre":str(item[4]),"role":str(item[5]),"layer":int(item[6])})
	# Register is planned for each complete four-bar lead phrase and each support bar.
	for role:String in ["lead","foundation","pulse","answer"]:
		var span:=16. if role=="lead" else 4.
		for start in range(0,32,int(span)):
			var phrase:Array=events.filter(func(e):return e.role==role and e.beat>=start and e.beat<start+span)
			var bounds:=Vector2i(69,88) if role=="lead" else Vector2i(24,55) if role=="foundation" else Vector2i(52,72)
			var path:=Register.plan(phrase.map(func(e):return e.midi),bounds,Palette.KEY_TONES[mode])
			if path.size()!=phrase.size():return {"ok":false,"message":"母曲音域无法安排"}
			for i in range(phrase.size()):phrase[i].midi=path[i]
	var doc:={"schema":1,"id":"pastoral_master2_p"+str(index),"style":master.style,"origin":"authored","bpm":80,"beats_per_bar":4,"bars":8,"harmony_mode":mode,"events":events,"features_sha256":master.signature}
	var result:=Document.validate(doc)
	if result.ok:
		result.signature=JSON.stringify(doc,"",true,true).sha256_text();result.master_signature=master.signature;result.section=index
		result.harmony=source.harmony.map(func(chord):return chord.map(func(midi):return Core.map_pitch(int(midi),mode)))
	return result
